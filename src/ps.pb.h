// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ps.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ps_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ps_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ps_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ps_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ps_2eproto;
class PK;
class PKDefaultTypeInternal;
extern PKDefaultTypeInternal _PK_default_instance_;
class SIG;
class SIGDefaultTypeInternal;
extern SIGDefaultTypeInternal _SIG_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::PK* Arena::CreateMaybeMessage<::PK>(Arena*);
template<> ::SIG* Arena::CreateMaybeMessage<::SIG>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class PK :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PK) */ {
 public:
  PK();
  virtual ~PK();

  PK(const PK& from);
  PK(PK&& from) noexcept
    : PK() {
    *this = ::std::move(from);
  }

  inline PK& operator=(const PK& from) {
    CopyFrom(from);
    return *this;
  }
  inline PK& operator=(PK&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PK& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PK* internal_default_instance() {
    return reinterpret_cast<const PK*>(
               &_PK_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PK& a, PK& b) {
    a.Swap(&b);
  }
  inline void Swap(PK* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PK* New() const final {
    return CreateMaybeMessage<PK>(nullptr);
  }

  PK* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PK>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PK& from);
  void MergeFrom(const PK& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PK* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PK";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ps_2eproto);
    return ::descriptor_table_ps_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kYiFieldNumber = 2,
    kYYiFieldNumber = 5,
    kGFieldNumber = 1,
    kGgFieldNumber = 3,
    kXXFieldNumber = 4,
  };
  // repeated bytes Yi = 2;
  int yi_size() const;
  private:
  int _internal_yi_size() const;
  public:
  void clear_yi();
  const std::string& yi(int index) const;
  std::string* mutable_yi(int index);
  void set_yi(int index, const std::string& value);
  void set_yi(int index, std::string&& value);
  void set_yi(int index, const char* value);
  void set_yi(int index, const void* value, size_t size);
  std::string* add_yi();
  void add_yi(const std::string& value);
  void add_yi(std::string&& value);
  void add_yi(const char* value);
  void add_yi(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& yi() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_yi();
  private:
  const std::string& _internal_yi(int index) const;
  std::string* _internal_add_yi();
  public:

  // repeated bytes YYi = 5;
  int yyi_size() const;
  private:
  int _internal_yyi_size() const;
  public:
  void clear_yyi();
  const std::string& yyi(int index) const;
  std::string* mutable_yyi(int index);
  void set_yyi(int index, const std::string& value);
  void set_yyi(int index, std::string&& value);
  void set_yyi(int index, const char* value);
  void set_yyi(int index, const void* value, size_t size);
  std::string* add_yyi();
  void add_yyi(const std::string& value);
  void add_yyi(std::string&& value);
  void add_yyi(const char* value);
  void add_yyi(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& yyi() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_yyi();
  private:
  const std::string& _internal_yyi(int index) const;
  std::string* _internal_add_yyi();
  public:

  // bytes g = 1;
  void clear_g();
  const std::string& g() const;
  void set_g(const std::string& value);
  void set_g(std::string&& value);
  void set_g(const char* value);
  void set_g(const void* value, size_t size);
  std::string* mutable_g();
  std::string* release_g();
  void set_allocated_g(std::string* g);
  private:
  const std::string& _internal_g() const;
  void _internal_set_g(const std::string& value);
  std::string* _internal_mutable_g();
  public:

  // bytes gg = 3;
  void clear_gg();
  const std::string& gg() const;
  void set_gg(const std::string& value);
  void set_gg(std::string&& value);
  void set_gg(const char* value);
  void set_gg(const void* value, size_t size);
  std::string* mutable_gg();
  std::string* release_gg();
  void set_allocated_gg(std::string* gg);
  private:
  const std::string& _internal_gg() const;
  void _internal_set_gg(const std::string& value);
  std::string* _internal_mutable_gg();
  public:

  // bytes XX = 4;
  void clear_xx();
  const std::string& xx() const;
  void set_xx(const std::string& value);
  void set_xx(std::string&& value);
  void set_xx(const char* value);
  void set_xx(const void* value, size_t size);
  std::string* mutable_xx();
  std::string* release_xx();
  void set_allocated_xx(std::string* xx);
  private:
  const std::string& _internal_xx() const;
  void _internal_set_xx(const std::string& value);
  std::string* _internal_mutable_xx();
  public:

  // @@protoc_insertion_point(class_scope:PK)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> yi_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> yyi_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr g_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr gg_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr xx_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ps_2eproto;
};
// -------------------------------------------------------------------

class SIG :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SIG) */ {
 public:
  SIG();
  virtual ~SIG();

  SIG(const SIG& from);
  SIG(SIG&& from) noexcept
    : SIG() {
    *this = ::std::move(from);
  }

  inline SIG& operator=(const SIG& from) {
    CopyFrom(from);
    return *this;
  }
  inline SIG& operator=(SIG&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SIG& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SIG* internal_default_instance() {
    return reinterpret_cast<const SIG*>(
               &_SIG_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SIG& a, SIG& b) {
    a.Swap(&b);
  }
  inline void Swap(SIG* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SIG* New() const final {
    return CreateMaybeMessage<SIG>(nullptr);
  }

  SIG* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SIG>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SIG& from);
  void MergeFrom(const SIG& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SIG* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SIG";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ps_2eproto);
    return ::descriptor_table_ps_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSig1FieldNumber = 1,
    kSig2FieldNumber = 2,
  };
  // bytes sig1 = 1;
  void clear_sig1();
  const std::string& sig1() const;
  void set_sig1(const std::string& value);
  void set_sig1(std::string&& value);
  void set_sig1(const char* value);
  void set_sig1(const void* value, size_t size);
  std::string* mutable_sig1();
  std::string* release_sig1();
  void set_allocated_sig1(std::string* sig1);
  private:
  const std::string& _internal_sig1() const;
  void _internal_set_sig1(const std::string& value);
  std::string* _internal_mutable_sig1();
  public:

  // bytes sig2 = 2;
  void clear_sig2();
  const std::string& sig2() const;
  void set_sig2(const std::string& value);
  void set_sig2(std::string&& value);
  void set_sig2(const char* value);
  void set_sig2(const void* value, size_t size);
  std::string* mutable_sig2();
  std::string* release_sig2();
  void set_allocated_sig2(std::string* sig2);
  private:
  const std::string& _internal_sig2() const;
  void _internal_set_sig2(const std::string& value);
  std::string* _internal_mutable_sig2();
  public:

  // @@protoc_insertion_point(class_scope:SIG)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sig1_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sig2_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ps_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PK

// bytes g = 1;
inline void PK::clear_g() {
  g_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& PK::g() const {
  // @@protoc_insertion_point(field_get:PK.g)
  return _internal_g();
}
inline void PK::set_g(const std::string& value) {
  _internal_set_g(value);
  // @@protoc_insertion_point(field_set:PK.g)
}
inline std::string* PK::mutable_g() {
  // @@protoc_insertion_point(field_mutable:PK.g)
  return _internal_mutable_g();
}
inline const std::string& PK::_internal_g() const {
  return g_.GetNoArena();
}
inline void PK::_internal_set_g(const std::string& value) {
  
  g_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void PK::set_g(std::string&& value) {
  
  g_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PK.g)
}
inline void PK::set_g(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  g_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PK.g)
}
inline void PK::set_g(const void* value, size_t size) {
  
  g_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PK.g)
}
inline std::string* PK::_internal_mutable_g() {
  
  return g_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* PK::release_g() {
  // @@protoc_insertion_point(field_release:PK.g)
  
  return g_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void PK::set_allocated_g(std::string* g) {
  if (g != nullptr) {
    
  } else {
    
  }
  g_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), g);
  // @@protoc_insertion_point(field_set_allocated:PK.g)
}

// repeated bytes Yi = 2;
inline int PK::_internal_yi_size() const {
  return yi_.size();
}
inline int PK::yi_size() const {
  return _internal_yi_size();
}
inline void PK::clear_yi() {
  yi_.Clear();
}
inline std::string* PK::add_yi() {
  // @@protoc_insertion_point(field_add_mutable:PK.Yi)
  return _internal_add_yi();
}
inline const std::string& PK::_internal_yi(int index) const {
  return yi_.Get(index);
}
inline const std::string& PK::yi(int index) const {
  // @@protoc_insertion_point(field_get:PK.Yi)
  return _internal_yi(index);
}
inline std::string* PK::mutable_yi(int index) {
  // @@protoc_insertion_point(field_mutable:PK.Yi)
  return yi_.Mutable(index);
}
inline void PK::set_yi(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:PK.Yi)
  yi_.Mutable(index)->assign(value);
}
inline void PK::set_yi(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:PK.Yi)
  yi_.Mutable(index)->assign(std::move(value));
}
inline void PK::set_yi(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  yi_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:PK.Yi)
}
inline void PK::set_yi(int index, const void* value, size_t size) {
  yi_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PK.Yi)
}
inline std::string* PK::_internal_add_yi() {
  return yi_.Add();
}
inline void PK::add_yi(const std::string& value) {
  yi_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:PK.Yi)
}
inline void PK::add_yi(std::string&& value) {
  yi_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:PK.Yi)
}
inline void PK::add_yi(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  yi_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:PK.Yi)
}
inline void PK::add_yi(const void* value, size_t size) {
  yi_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:PK.Yi)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
PK::yi() const {
  // @@protoc_insertion_point(field_list:PK.Yi)
  return yi_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
PK::mutable_yi() {
  // @@protoc_insertion_point(field_mutable_list:PK.Yi)
  return &yi_;
}

// bytes gg = 3;
inline void PK::clear_gg() {
  gg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& PK::gg() const {
  // @@protoc_insertion_point(field_get:PK.gg)
  return _internal_gg();
}
inline void PK::set_gg(const std::string& value) {
  _internal_set_gg(value);
  // @@protoc_insertion_point(field_set:PK.gg)
}
inline std::string* PK::mutable_gg() {
  // @@protoc_insertion_point(field_mutable:PK.gg)
  return _internal_mutable_gg();
}
inline const std::string& PK::_internal_gg() const {
  return gg_.GetNoArena();
}
inline void PK::_internal_set_gg(const std::string& value) {
  
  gg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void PK::set_gg(std::string&& value) {
  
  gg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PK.gg)
}
inline void PK::set_gg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  gg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PK.gg)
}
inline void PK::set_gg(const void* value, size_t size) {
  
  gg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PK.gg)
}
inline std::string* PK::_internal_mutable_gg() {
  
  return gg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* PK::release_gg() {
  // @@protoc_insertion_point(field_release:PK.gg)
  
  return gg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void PK::set_allocated_gg(std::string* gg) {
  if (gg != nullptr) {
    
  } else {
    
  }
  gg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), gg);
  // @@protoc_insertion_point(field_set_allocated:PK.gg)
}

// bytes XX = 4;
inline void PK::clear_xx() {
  xx_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& PK::xx() const {
  // @@protoc_insertion_point(field_get:PK.XX)
  return _internal_xx();
}
inline void PK::set_xx(const std::string& value) {
  _internal_set_xx(value);
  // @@protoc_insertion_point(field_set:PK.XX)
}
inline std::string* PK::mutable_xx() {
  // @@protoc_insertion_point(field_mutable:PK.XX)
  return _internal_mutable_xx();
}
inline const std::string& PK::_internal_xx() const {
  return xx_.GetNoArena();
}
inline void PK::_internal_set_xx(const std::string& value) {
  
  xx_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void PK::set_xx(std::string&& value) {
  
  xx_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PK.XX)
}
inline void PK::set_xx(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  xx_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PK.XX)
}
inline void PK::set_xx(const void* value, size_t size) {
  
  xx_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PK.XX)
}
inline std::string* PK::_internal_mutable_xx() {
  
  return xx_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* PK::release_xx() {
  // @@protoc_insertion_point(field_release:PK.XX)
  
  return xx_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void PK::set_allocated_xx(std::string* xx) {
  if (xx != nullptr) {
    
  } else {
    
  }
  xx_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), xx);
  // @@protoc_insertion_point(field_set_allocated:PK.XX)
}

// repeated bytes YYi = 5;
inline int PK::_internal_yyi_size() const {
  return yyi_.size();
}
inline int PK::yyi_size() const {
  return _internal_yyi_size();
}
inline void PK::clear_yyi() {
  yyi_.Clear();
}
inline std::string* PK::add_yyi() {
  // @@protoc_insertion_point(field_add_mutable:PK.YYi)
  return _internal_add_yyi();
}
inline const std::string& PK::_internal_yyi(int index) const {
  return yyi_.Get(index);
}
inline const std::string& PK::yyi(int index) const {
  // @@protoc_insertion_point(field_get:PK.YYi)
  return _internal_yyi(index);
}
inline std::string* PK::mutable_yyi(int index) {
  // @@protoc_insertion_point(field_mutable:PK.YYi)
  return yyi_.Mutable(index);
}
inline void PK::set_yyi(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:PK.YYi)
  yyi_.Mutable(index)->assign(value);
}
inline void PK::set_yyi(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:PK.YYi)
  yyi_.Mutable(index)->assign(std::move(value));
}
inline void PK::set_yyi(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  yyi_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:PK.YYi)
}
inline void PK::set_yyi(int index, const void* value, size_t size) {
  yyi_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PK.YYi)
}
inline std::string* PK::_internal_add_yyi() {
  return yyi_.Add();
}
inline void PK::add_yyi(const std::string& value) {
  yyi_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:PK.YYi)
}
inline void PK::add_yyi(std::string&& value) {
  yyi_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:PK.YYi)
}
inline void PK::add_yyi(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  yyi_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:PK.YYi)
}
inline void PK::add_yyi(const void* value, size_t size) {
  yyi_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:PK.YYi)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
PK::yyi() const {
  // @@protoc_insertion_point(field_list:PK.YYi)
  return yyi_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
PK::mutable_yyi() {
  // @@protoc_insertion_point(field_mutable_list:PK.YYi)
  return &yyi_;
}

// -------------------------------------------------------------------

// SIG

// bytes sig1 = 1;
inline void SIG::clear_sig1() {
  sig1_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SIG::sig1() const {
  // @@protoc_insertion_point(field_get:SIG.sig1)
  return _internal_sig1();
}
inline void SIG::set_sig1(const std::string& value) {
  _internal_set_sig1(value);
  // @@protoc_insertion_point(field_set:SIG.sig1)
}
inline std::string* SIG::mutable_sig1() {
  // @@protoc_insertion_point(field_mutable:SIG.sig1)
  return _internal_mutable_sig1();
}
inline const std::string& SIG::_internal_sig1() const {
  return sig1_.GetNoArena();
}
inline void SIG::_internal_set_sig1(const std::string& value) {
  
  sig1_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SIG::set_sig1(std::string&& value) {
  
  sig1_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SIG.sig1)
}
inline void SIG::set_sig1(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  sig1_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SIG.sig1)
}
inline void SIG::set_sig1(const void* value, size_t size) {
  
  sig1_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SIG.sig1)
}
inline std::string* SIG::_internal_mutable_sig1() {
  
  return sig1_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SIG::release_sig1() {
  // @@protoc_insertion_point(field_release:SIG.sig1)
  
  return sig1_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SIG::set_allocated_sig1(std::string* sig1) {
  if (sig1 != nullptr) {
    
  } else {
    
  }
  sig1_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sig1);
  // @@protoc_insertion_point(field_set_allocated:SIG.sig1)
}

// bytes sig2 = 2;
inline void SIG::clear_sig2() {
  sig2_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SIG::sig2() const {
  // @@protoc_insertion_point(field_get:SIG.sig2)
  return _internal_sig2();
}
inline void SIG::set_sig2(const std::string& value) {
  _internal_set_sig2(value);
  // @@protoc_insertion_point(field_set:SIG.sig2)
}
inline std::string* SIG::mutable_sig2() {
  // @@protoc_insertion_point(field_mutable:SIG.sig2)
  return _internal_mutable_sig2();
}
inline const std::string& SIG::_internal_sig2() const {
  return sig2_.GetNoArena();
}
inline void SIG::_internal_set_sig2(const std::string& value) {
  
  sig2_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SIG::set_sig2(std::string&& value) {
  
  sig2_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SIG.sig2)
}
inline void SIG::set_sig2(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  sig2_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SIG.sig2)
}
inline void SIG::set_sig2(const void* value, size_t size) {
  
  sig2_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SIG.sig2)
}
inline std::string* SIG::_internal_mutable_sig2() {
  
  return sig2_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SIG::release_sig2() {
  // @@protoc_insertion_point(field_release:SIG.sig2)
  
  return sig2_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SIG::set_allocated_sig2(std::string* sig2) {
  if (sig2 != nullptr) {
    
  } else {
    
  }
  sig2_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sig2);
  // @@protoc_insertion_point(field_set_allocated:SIG.sig2)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ps_2eproto
