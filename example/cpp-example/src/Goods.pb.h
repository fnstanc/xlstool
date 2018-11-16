// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Goods.proto

#ifndef PROTOBUF_INCLUDED_Goods_2eproto
#define PROTOBUF_INCLUDED_Goods_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_Goods_2eproto 

namespace protobuf_Goods_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_Goods_2eproto
namespace MyGame {
class Goods;
class GoodsDefaultTypeInternal;
extern GoodsDefaultTypeInternal _Goods_default_instance_;
}  // namespace MyGame
namespace google {
namespace protobuf {
template<> ::MyGame::Goods* Arena::CreateMaybeMessage<::MyGame::Goods>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace MyGame {

// ===================================================================

class Goods : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MyGame.Goods) */ {
 public:
  Goods();
  virtual ~Goods();

  Goods(const Goods& from);

  inline Goods& operator=(const Goods& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Goods(Goods&& from) noexcept
    : Goods() {
    *this = ::std::move(from);
  }

  inline Goods& operator=(Goods&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Goods& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Goods* internal_default_instance() {
    return reinterpret_cast<const Goods*>(
               &_Goods_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Goods* other);
  friend void swap(Goods& a, Goods& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Goods* New() const final {
    return CreateMaybeMessage<Goods>(NULL);
  }

  Goods* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Goods>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Goods& from);
  void MergeFrom(const Goods& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Goods* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string itemName = 2;
  bool has_itemname() const;
  void clear_itemname();
  static const int kItemNameFieldNumber = 2;
  const ::std::string& itemname() const;
  void set_itemname(const ::std::string& value);
  #if LANG_CXX11
  void set_itemname(::std::string&& value);
  #endif
  void set_itemname(const char* value);
  void set_itemname(const char* value, size_t size);
  ::std::string* mutable_itemname();
  ::std::string* release_itemname();
  void set_allocated_itemname(::std::string* itemname);

  // optional int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional int32 itemLV = 3;
  bool has_itemlv() const;
  void clear_itemlv();
  static const int kItemLVFieldNumber = 3;
  ::google::protobuf::int32 itemlv() const;
  void set_itemlv(::google::protobuf::int32 value);

  // optional int32 UseMinLV = 4;
  bool has_useminlv() const;
  void clear_useminlv();
  static const int kUseMinLVFieldNumber = 4;
  ::google::protobuf::int32 useminlv() const;
  void set_useminlv(::google::protobuf::int32 value);

  // optional int32 itemMinLvl = 5;
  bool has_itemminlvl() const;
  void clear_itemminlvl();
  static const int kItemMinLvlFieldNumber = 5;
  ::google::protobuf::int32 itemminlvl() const;
  void set_itemminlvl(::google::protobuf::int32 value);

  // optional int32 itemMaxLvl = 6;
  bool has_itemmaxlvl() const;
  void clear_itemmaxlvl();
  static const int kItemMaxLvlFieldNumber = 6;
  ::google::protobuf::int32 itemmaxlvl() const;
  void set_itemmaxlvl(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MyGame.Goods)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_itemname();
  void clear_has_itemname();
  void set_has_itemlv();
  void clear_has_itemlv();
  void set_has_useminlv();
  void clear_has_useminlv();
  void set_has_itemminlvl();
  void clear_has_itemminlvl();
  void set_has_itemmaxlvl();
  void clear_has_itemmaxlvl();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr itemname_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 itemlv_;
  ::google::protobuf::int32 useminlv_;
  ::google::protobuf::int32 itemminlvl_;
  ::google::protobuf::int32 itemmaxlvl_;
  friend struct ::protobuf_Goods_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Goods

// optional int32 id = 1;
inline bool Goods::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Goods::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Goods::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Goods::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Goods::id() const {
  // @@protoc_insertion_point(field_get:MyGame.Goods.id)
  return id_;
}
inline void Goods::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Goods.id)
}

// optional string itemName = 2;
inline bool Goods::has_itemname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Goods::set_has_itemname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Goods::clear_has_itemname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Goods::clear_itemname() {
  itemname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_itemname();
}
inline const ::std::string& Goods::itemname() const {
  // @@protoc_insertion_point(field_get:MyGame.Goods.itemName)
  return itemname_.GetNoArena();
}
inline void Goods::set_itemname(const ::std::string& value) {
  set_has_itemname();
  itemname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MyGame.Goods.itemName)
}
#if LANG_CXX11
inline void Goods::set_itemname(::std::string&& value) {
  set_has_itemname();
  itemname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MyGame.Goods.itemName)
}
#endif
inline void Goods::set_itemname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_itemname();
  itemname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MyGame.Goods.itemName)
}
inline void Goods::set_itemname(const char* value, size_t size) {
  set_has_itemname();
  itemname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MyGame.Goods.itemName)
}
inline ::std::string* Goods::mutable_itemname() {
  set_has_itemname();
  // @@protoc_insertion_point(field_mutable:MyGame.Goods.itemName)
  return itemname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Goods::release_itemname() {
  // @@protoc_insertion_point(field_release:MyGame.Goods.itemName)
  if (!has_itemname()) {
    return NULL;
  }
  clear_has_itemname();
  return itemname_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Goods::set_allocated_itemname(::std::string* itemname) {
  if (itemname != NULL) {
    set_has_itemname();
  } else {
    clear_has_itemname();
  }
  itemname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), itemname);
  // @@protoc_insertion_point(field_set_allocated:MyGame.Goods.itemName)
}

// optional int32 itemLV = 3;
inline bool Goods::has_itemlv() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Goods::set_has_itemlv() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Goods::clear_has_itemlv() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Goods::clear_itemlv() {
  itemlv_ = 0;
  clear_has_itemlv();
}
inline ::google::protobuf::int32 Goods::itemlv() const {
  // @@protoc_insertion_point(field_get:MyGame.Goods.itemLV)
  return itemlv_;
}
inline void Goods::set_itemlv(::google::protobuf::int32 value) {
  set_has_itemlv();
  itemlv_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Goods.itemLV)
}

// optional int32 UseMinLV = 4;
inline bool Goods::has_useminlv() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Goods::set_has_useminlv() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Goods::clear_has_useminlv() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Goods::clear_useminlv() {
  useminlv_ = 0;
  clear_has_useminlv();
}
inline ::google::protobuf::int32 Goods::useminlv() const {
  // @@protoc_insertion_point(field_get:MyGame.Goods.UseMinLV)
  return useminlv_;
}
inline void Goods::set_useminlv(::google::protobuf::int32 value) {
  set_has_useminlv();
  useminlv_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Goods.UseMinLV)
}

// optional int32 itemMinLvl = 5;
inline bool Goods::has_itemminlvl() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Goods::set_has_itemminlvl() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Goods::clear_has_itemminlvl() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Goods::clear_itemminlvl() {
  itemminlvl_ = 0;
  clear_has_itemminlvl();
}
inline ::google::protobuf::int32 Goods::itemminlvl() const {
  // @@protoc_insertion_point(field_get:MyGame.Goods.itemMinLvl)
  return itemminlvl_;
}
inline void Goods::set_itemminlvl(::google::protobuf::int32 value) {
  set_has_itemminlvl();
  itemminlvl_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Goods.itemMinLvl)
}

// optional int32 itemMaxLvl = 6;
inline bool Goods::has_itemmaxlvl() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Goods::set_has_itemmaxlvl() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Goods::clear_has_itemmaxlvl() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Goods::clear_itemmaxlvl() {
  itemmaxlvl_ = 0;
  clear_has_itemmaxlvl();
}
inline ::google::protobuf::int32 Goods::itemmaxlvl() const {
  // @@protoc_insertion_point(field_get:MyGame.Goods.itemMaxLvl)
  return itemmaxlvl_;
}
inline void Goods::set_itemmaxlvl(::google::protobuf::int32 value) {
  set_has_itemmaxlvl();
  itemmaxlvl_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Goods.itemMaxLvl)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace MyGame

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_Goods_2eproto
