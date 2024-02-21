// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sidechannel/proto/signatures.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sidechannel_2fproto_2fsignatures_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sidechannel_2fproto_2fsignatures_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sidechannel_2fproto_2fsignatures_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sidechannel_2fproto_2fsignatures_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sidechannel_2fproto_2fsignatures_2eproto;
namespace spacexpanse {
namespace proto {
class SignedData;
struct SignedDataDefaultTypeInternal;
extern SignedDataDefaultTypeInternal _SignedData_default_instance_;
}  // namespace proto
}  // namespace spacexpanse
PROTOBUF_NAMESPACE_OPEN
template<> ::spacexpanse::proto::SignedData* Arena::CreateMaybeMessage<::spacexpanse::proto::SignedData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace spacexpanse {
namespace proto {

// ===================================================================

class SignedData final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:spacexpanse.proto.SignedData) */ {
 public:
  inline SignedData() : SignedData(nullptr) {}
  ~SignedData() override;
  explicit PROTOBUF_CONSTEXPR SignedData(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SignedData(const SignedData& from);
  SignedData(SignedData&& from) noexcept
    : SignedData() {
    *this = ::std::move(from);
  }

  inline SignedData& operator=(const SignedData& from) {
    CopyFrom(from);
    return *this;
  }
  inline SignedData& operator=(SignedData&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SignedData& default_instance() {
    return *internal_default_instance();
  }
  static inline const SignedData* internal_default_instance() {
    return reinterpret_cast<const SignedData*>(
               &_SignedData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SignedData& a, SignedData& b) {
    a.Swap(&b);
  }
  inline void Swap(SignedData* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SignedData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SignedData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SignedData>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SignedData& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SignedData& from) {
    SignedData::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SignedData* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "spacexpanse.proto.SignedData";
  }
  protected:
  explicit SignedData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSignaturesFieldNumber = 2,
    kDataFieldNumber = 1,
    kForTestingVersionFieldNumber = 1000,
  };
  // repeated bytes signatures = 2;
  int signatures_size() const;
  private:
  int _internal_signatures_size() const;
  public:
  void clear_signatures();
  const std::string& signatures(int index) const;
  std::string* mutable_signatures(int index);
  void set_signatures(int index, const std::string& value);
  void set_signatures(int index, std::string&& value);
  void set_signatures(int index, const char* value);
  void set_signatures(int index, const void* value, size_t size);
  std::string* add_signatures();
  void add_signatures(const std::string& value);
  void add_signatures(std::string&& value);
  void add_signatures(const char* value);
  void add_signatures(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& signatures() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_signatures();
  private:
  const std::string& _internal_signatures(int index) const;
  std::string* _internal_add_signatures();
  public:

  // optional bytes data = 1;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const std::string& data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_data();
  PROTOBUF_NODISCARD std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // optional string for_testing_version = 1000;
  bool has_for_testing_version() const;
  private:
  bool _internal_has_for_testing_version() const;
  public:
  void clear_for_testing_version();
  const std::string& for_testing_version() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_for_testing_version(ArgT0&& arg0, ArgT... args);
  std::string* mutable_for_testing_version();
  PROTOBUF_NODISCARD std::string* release_for_testing_version();
  void set_allocated_for_testing_version(std::string* for_testing_version);
  private:
  const std::string& _internal_for_testing_version() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_for_testing_version(const std::string& value);
  std::string* _internal_mutable_for_testing_version();
  public:

  // @@protoc_insertion_point(class_scope:spacexpanse.proto.SignedData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> signatures_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr for_testing_version_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sidechannel_2fproto_2fsignatures_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SignedData

// optional bytes data = 1;
inline bool SignedData::_internal_has_data() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool SignedData::has_data() const {
  return _internal_has_data();
}
inline void SignedData::clear_data() {
  _impl_.data_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& SignedData::data() const {
  // @@protoc_insertion_point(field_get:spacexpanse.proto.SignedData.data)
  return _internal_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SignedData::set_data(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.data_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:spacexpanse.proto.SignedData.data)
}
inline std::string* SignedData::mutable_data() {
  std::string* _s = _internal_mutable_data();
  // @@protoc_insertion_point(field_mutable:spacexpanse.proto.SignedData.data)
  return _s;
}
inline const std::string& SignedData::_internal_data() const {
  return _impl_.data_.Get();
}
inline void SignedData::_internal_set_data(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.data_.Set(value, GetArenaForAllocation());
}
inline std::string* SignedData::_internal_mutable_data() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.data_.Mutable(GetArenaForAllocation());
}
inline std::string* SignedData::release_data() {
  // @@protoc_insertion_point(field_release:spacexpanse.proto.SignedData.data)
  if (!_internal_has_data()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.data_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.data_.IsDefault()) {
    _impl_.data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void SignedData::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.data_.SetAllocated(data, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.data_.IsDefault()) {
    _impl_.data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:spacexpanse.proto.SignedData.data)
}

// repeated bytes signatures = 2;
inline int SignedData::_internal_signatures_size() const {
  return _impl_.signatures_.size();
}
inline int SignedData::signatures_size() const {
  return _internal_signatures_size();
}
inline void SignedData::clear_signatures() {
  _impl_.signatures_.Clear();
}
inline std::string* SignedData::add_signatures() {
  std::string* _s = _internal_add_signatures();
  // @@protoc_insertion_point(field_add_mutable:spacexpanse.proto.SignedData.signatures)
  return _s;
}
inline const std::string& SignedData::_internal_signatures(int index) const {
  return _impl_.signatures_.Get(index);
}
inline const std::string& SignedData::signatures(int index) const {
  // @@protoc_insertion_point(field_get:spacexpanse.proto.SignedData.signatures)
  return _internal_signatures(index);
}
inline std::string* SignedData::mutable_signatures(int index) {
  // @@protoc_insertion_point(field_mutable:spacexpanse.proto.SignedData.signatures)
  return _impl_.signatures_.Mutable(index);
}
inline void SignedData::set_signatures(int index, const std::string& value) {
  _impl_.signatures_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:spacexpanse.proto.SignedData.signatures)
}
inline void SignedData::set_signatures(int index, std::string&& value) {
  _impl_.signatures_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:spacexpanse.proto.SignedData.signatures)
}
inline void SignedData::set_signatures(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.signatures_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:spacexpanse.proto.SignedData.signatures)
}
inline void SignedData::set_signatures(int index, const void* value, size_t size) {
  _impl_.signatures_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:spacexpanse.proto.SignedData.signatures)
}
inline std::string* SignedData::_internal_add_signatures() {
  return _impl_.signatures_.Add();
}
inline void SignedData::add_signatures(const std::string& value) {
  _impl_.signatures_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:spacexpanse.proto.SignedData.signatures)
}
inline void SignedData::add_signatures(std::string&& value) {
  _impl_.signatures_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:spacexpanse.proto.SignedData.signatures)
}
inline void SignedData::add_signatures(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.signatures_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:spacexpanse.proto.SignedData.signatures)
}
inline void SignedData::add_signatures(const void* value, size_t size) {
  _impl_.signatures_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:spacexpanse.proto.SignedData.signatures)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SignedData::signatures() const {
  // @@protoc_insertion_point(field_list:spacexpanse.proto.SignedData.signatures)
  return _impl_.signatures_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SignedData::mutable_signatures() {
  // @@protoc_insertion_point(field_mutable_list:spacexpanse.proto.SignedData.signatures)
  return &_impl_.signatures_;
}

// optional string for_testing_version = 1000;
inline bool SignedData::_internal_has_for_testing_version() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool SignedData::has_for_testing_version() const {
  return _internal_has_for_testing_version();
}
inline void SignedData::clear_for_testing_version() {
  _impl_.for_testing_version_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& SignedData::for_testing_version() const {
  // @@protoc_insertion_point(field_get:spacexpanse.proto.SignedData.for_testing_version)
  return _internal_for_testing_version();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SignedData::set_for_testing_version(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.for_testing_version_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:spacexpanse.proto.SignedData.for_testing_version)
}
inline std::string* SignedData::mutable_for_testing_version() {
  std::string* _s = _internal_mutable_for_testing_version();
  // @@protoc_insertion_point(field_mutable:spacexpanse.proto.SignedData.for_testing_version)
  return _s;
}
inline const std::string& SignedData::_internal_for_testing_version() const {
  return _impl_.for_testing_version_.Get();
}
inline void SignedData::_internal_set_for_testing_version(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.for_testing_version_.Set(value, GetArenaForAllocation());
}
inline std::string* SignedData::_internal_mutable_for_testing_version() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.for_testing_version_.Mutable(GetArenaForAllocation());
}
inline std::string* SignedData::release_for_testing_version() {
  // @@protoc_insertion_point(field_release:spacexpanse.proto.SignedData.for_testing_version)
  if (!_internal_has_for_testing_version()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.for_testing_version_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.for_testing_version_.IsDefault()) {
    _impl_.for_testing_version_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void SignedData::set_allocated_for_testing_version(std::string* for_testing_version) {
  if (for_testing_version != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.for_testing_version_.SetAllocated(for_testing_version, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.for_testing_version_.IsDefault()) {
    _impl_.for_testing_version_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:spacexpanse.proto.SignedData.for_testing_version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace spacexpanse

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sidechannel_2fproto_2fsignatures_2eproto
