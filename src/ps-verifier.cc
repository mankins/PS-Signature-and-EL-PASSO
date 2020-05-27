#include "ps-verifier.h"

#include <chrono>
#include <cybozu/sha2.hpp>

using namespace mcl::bls12;

PSVerifier::PSVerifier()
{
}

void
PSVerifier::init_with_pk(const G1& g, const G2& gg, const G2& XX,
                          const std::vector<G1>& Yi, const std::vector<G2>& YYi)
{
  m_g = g;
  m_gg = gg;
  m_pk_XX = XX;
  m_pk_Yi = Yi;
  m_pk_YYi = YYi;
}

bool
PSVerifier::verify(const G1& sig1, const G1& sig2, const std::vector<std::string>& all_attributes) const
{
  if (sig1.isZero()) {
    return false;
  }

  Fr _attribute_hash;
  G2 _yy_hash_sum = m_pk_XX;
  int counter = 0;
  G2 _yyi_hash_product;
  for (const auto& attribute : all_attributes) {
    _attribute_hash.setHashOf(attribute);
    G2::mul(_yyi_hash_product, m_pk_YYi[counter], _attribute_hash);
    G2::add(_yy_hash_sum, _yy_hash_sum, _yyi_hash_product);
    counter++;
  }

  GT _lhs, _rhs;
  pairing(_lhs, sig1, _yy_hash_sum);
  pairing(_rhs, sig2, m_gg);
  return _lhs == _rhs;
}

bool
PSVerifier::el_passo_verify_id(const G1& sig1, const G1& sig2, const G2& k, const G1& phi,
                                const G1& E1, const G1& E2, const Fr& c,
                                const std::vector<Fr>& rs, const std::vector<std::string>& attributes,
                                const std::string& associated_data,
                                const std::string& service_name,
                                const G1& authority_pk, const G1& g, const G1& h)
{
  /** NIZK Verify:
   * Public Value:
   * * k = XX * PI{ YY_j^attribute_j } * gg^t
   * * phi = hash(domain)^s
   * * E1 = g^epsilon
   * * E2 = y^epsilon * h^gamma
   *
   * Public Random Value:
   * * V_k = XX * PI{ YYj^random1_j } * gg^random_2
   *       = k^c * XX^(1-c) * PI{ YYj^r1_j } ** gg^r2
   * * V_phi = hash(domain)^random1_s
   *         = phi^c * hash(domain)^r1_s
   * * V_E1 = g^random_3
   *        = E1^c * g^r3
   * * V_E2 = y^random_3 * h^random1_gamma
   *        = E2^c * y^r3 * h^r1_gamma
   *
   * c: to be compared
   * c = hash(k || phi || E1 || E2 || V_k || V_phi || V_E1 || V_E2 || associated_data )
   *
   * Rs:
   * * r1_j: random1_j - attribute_j * c
   * * r2: random2 - t * c
   * * r3: random3 - epsilon * c
   */
  // V_k = k^c * XX^(1-c) * PI{ YYj^r1_j } ** gg^r2
  G2 _V_k;
  G2::mul(_V_k, k, c);
  int counter = 0;
  G2 _base_r;
  for (size_t i = 0; i < attributes.size(); i++) {
    if (attributes[i] == "") {
      G2::mul(_base_r, m_pk_YYi[i], rs[counter]);
      counter++;
      G2::add(_V_k, _V_k, _base_r);
    }
  }
  G2::mul(_base_r, m_gg, rs[rs.size() - 2]);
  G2::add(_V_k, _V_k, _base_r);
  Fr _1_c = Fr::one();
  Fr::sub(_1_c, _1_c, c);
  G2::mul(_base_r, m_pk_XX, _1_c);
  G2::add(_V_k, _V_k, _base_r);

  // V_phi = phi^c * hash(domain)^r1_s
  G1 _V_phi, _V_E1, _V_E2;
  G1::mul(_V_phi, phi, c);
  G1 _temp;
  hashAndMapToG1(_temp, service_name);
  G1::mul(_temp, _temp, rs[0]);
  G1::add(_V_phi, _V_phi, _temp);

  // V_E1 = E1^c * g^r3
  G1::mul(_V_E1, E1, c);
  G1::mul(_temp, g, rs[rs.size() - 1]);
  G1::add(_V_E1, _V_E1, _temp);

  // V_E2 = E2^c * y^r3 * h^r1_gamma
  G1::mul(_V_E2, E2, c);
  G1::mul(_temp, authority_pk, rs[rs.size() - 1]);
  G1::add(_V_E2, _V_E2, _temp);
  G1::mul(_temp, h, rs[1]);
  G1::add(_V_E2, _V_E2, _temp);

  // Calculate c = hash(k || phi || E1 || E2 || V_k || V_phi || V_E1 || V_E2 || associated_data )
  Fr _local_c;
  cybozu::Sha256 digest_engine;
  digest_engine.update(k.serializeToHexStr());
  digest_engine.update(phi.serializeToHexStr());
  digest_engine.update(E1.serializeToHexStr());
  digest_engine.update(E2.serializeToHexStr());
  digest_engine.update(_V_k.serializeToHexStr());
  digest_engine.update(_V_phi.serializeToHexStr());
  digest_engine.update(_V_E1.serializeToHexStr());
  digest_engine.update(_V_E2.serializeToHexStr());
  auto _c_str = digest_engine.digest(associated_data);
  _local_c.setHashOf(_c_str);
  // std::cout << "parepare: V k: " << _V_k.serializeToHexStr() << std::endl;
  // std::cout << "parepare: V phi: " << _V_phi.serializeToHexStr() << std::endl;
  // std::cout << "parepare: V E1: " << _V_E1.serializeToHexStr() << std::endl;
  // std::cout << "parepare: V E2: " << _V_E2.serializeToHexStr() << std::endl;

  if (c != _local_c) {
    return false;
  }

  // signature verification, e(sigma’_1, k) ?= e(sigma’_2, gg)
  G2 _final_k = prepare_hybrid_verification(k, attributes);
  GT lhs, rhs;
  pairing(lhs, sig1, _final_k);
  pairing(rhs, sig2, m_gg);
  return lhs == rhs;
}

bool
PSVerifier::el_passo_verify_id_without_id_retrieval(const G1& sig1, const G1& sig2, const G2& k, const G1& phi,
                                          const Fr& c, const std::vector<Fr>& rs,
                                          const std::vector<std::string>& attributes,
                                          const std::string& associated_data, const std::string& service_name)
{
  /** NIZK Verify:
   * Public Value:
   * * k = XX * PI{ YY_j^attribute_j } * gg^t
   * * phi = hash(domain)^s
   *
   * Public Random Value:
   * * V_k = XX * PI{ YYj^random1_j } * gg^random_2
   *       = k^c * XX^(1-c) * PI{ YYj^r1_j } ** gg^r2
   * * V_phi = hash(domain)^random1_s
   *         = phi^c * hash(domain)^r1_s
   *
   * c: to be compared
   * c = hash(k || phi || E1 || E2 || V_k || V_phi || associated_data )
   *
   * Rs:
   * * r1_j: random1_j - attribute_j * c
   * * r2: random2 - t * c
   */
  // V_k = k^c * XX^(1-c) * PI{ YYj^r1_j } ** gg^r2
  G2 _V_k;
  G2::mul(_V_k, k, c);
  int counter = 0;
  G2 _base_r;
  for (size_t i = 0; i < attributes.size(); i++) {
    if (attributes[i] == "") {
      G2::mul(_base_r, m_pk_YYi[i], rs[counter]);
      counter++;
      G2::add(_V_k, _V_k, _base_r);
    }
  }
  G2::mul(_base_r, m_gg, rs[rs.size() - 1]);
  G2::add(_V_k, _V_k, _base_r);
  Fr _1_c = Fr::one();
  Fr::sub(_1_c, _1_c, c);
  G2::mul(_base_r, m_pk_XX, _1_c);
  G2::add(_V_k, _V_k, _base_r);

  // V_phi = phi^c * hash(domain)^r1_s
  G1 _V_phi;
  G1::mul(_V_phi, phi, c);
  G1 _temp;
  hashAndMapToG1(_temp, service_name);
  G1::mul(_temp, _temp, rs[0]);
  G1::add(_V_phi, _V_phi, _temp);

  // Calculate c = hash(k || phi || V_k || V_phi || associated_data )
  Fr _local_c;
  cybozu::Sha256 digest_engine;
  digest_engine.update(k.serializeToHexStr());
  digest_engine.update(phi.serializeToHexStr());
  digest_engine.update(_V_k.serializeToHexStr());
  digest_engine.update(_V_phi.serializeToHexStr());
  auto _c_str = digest_engine.digest(associated_data);
  _local_c.setHashOf(_c_str);
  // std::cout << "parepare: V k: " << _V_k.serializeToHexStr() << std::endl;
  // std::cout << "parepare: V phi: " << _V_phi.serializeToHexStr() << std::endl;

  if (c != _local_c) {
    return false;
  }

  // signature verification, e(sigma’_1, k) ?= e(sigma’_2, gg)
  G2 _final_k = prepare_hybrid_verification(k, attributes);
  GT lhs, rhs;
  pairing(lhs, sig1, _final_k);
  pairing(rhs, sig2, m_gg);
  return lhs == rhs;
}

G2
PSVerifier::prepare_hybrid_verification(const G2& k, const std::vector<std::string>& attributes) const
{
  G2 _final_k = k;
  G2 _temp_yyi_hash;
  Fr _temp_hash;
  for (size_t i = 0; i < attributes.size(); i++) {
    if (attributes[i] == "") {
      continue;
    }
    _temp_hash.setHashOf(attributes[i]);
    G2::mul(_temp_yyi_hash, m_pk_YYi[i], _temp_hash);
    G2::add(_final_k, _final_k, _temp_yyi_hash);
  }
  return _final_k;
}