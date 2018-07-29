// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Goods.proto

#include "Goods.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace MyGame {
class GoodsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Goods>
      _instance;
} _Goods_default_instance_;
}  // namespace MyGame
namespace protobuf_Goods_2eproto {
static void InitDefaultsGoods() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::MyGame::_Goods_default_instance_;
    new (ptr) ::MyGame::Goods();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::MyGame::Goods::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Goods =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGoods}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Goods.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyGame::Goods, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyGame::Goods, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyGame::Goods, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyGame::Goods, itemname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyGame::Goods, itemlv_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyGame::Goods, useminlv_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyGame::Goods, itemminlvl_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyGame::Goods, itemmaxlvl_),
  1,
  0,
  2,
  3,
  4,
  5,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::MyGame::Goods)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::MyGame::_Goods_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "Goods.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013Goods.proto\022\006MyGame\"o\n\005Goods\022\n\n\002id\030\001 \001"
      "(\005\022\020\n\010itemName\030\002 \001(\t\022\016\n\006itemLV\030\003 \001(\005\022\020\n\010"
      "UseMinLV\030\004 \001(\005\022\022\n\nitemMinLvl\030\005 \001(\005\022\022\n\nit"
      "emMaxLvl\030\006 \001(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 134);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Goods.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Goods_2eproto
namespace MyGame {

// ===================================================================

void Goods::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Goods::kIdFieldNumber;
const int Goods::kItemNameFieldNumber;
const int Goods::kItemLVFieldNumber;
const int Goods::kUseMinLVFieldNumber;
const int Goods::kItemMinLvlFieldNumber;
const int Goods::kItemMaxLvlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Goods::Goods()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Goods_2eproto::scc_info_Goods.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:MyGame.Goods)
}
Goods::Goods(const Goods& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  itemname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_itemname()) {
    itemname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.itemname_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&itemmaxlvl_) -
    reinterpret_cast<char*>(&id_)) + sizeof(itemmaxlvl_));
  // @@protoc_insertion_point(copy_constructor:MyGame.Goods)
}

void Goods::SharedCtor() {
  itemname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&itemmaxlvl_) -
      reinterpret_cast<char*>(&id_)) + sizeof(itemmaxlvl_));
}

Goods::~Goods() {
  // @@protoc_insertion_point(destructor:MyGame.Goods)
  SharedDtor();
}

void Goods::SharedDtor() {
  itemname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Goods::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Goods::descriptor() {
  ::protobuf_Goods_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Goods_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Goods& Goods::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Goods_2eproto::scc_info_Goods.base);
  return *internal_default_instance();
}


void Goods::Clear() {
// @@protoc_insertion_point(message_clear_start:MyGame.Goods)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    itemname_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 62u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&itemmaxlvl_) -
        reinterpret_cast<char*>(&id_)) + sizeof(itemmaxlvl_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Goods::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MyGame.Goods)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string itemName = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_itemname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->itemname().data(), static_cast<int>(this->itemname().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "MyGame.Goods.itemName");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 itemLV = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_itemlv();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &itemlv_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 UseMinLV = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_useminlv();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &useminlv_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 itemMinLvl = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_itemminlvl();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &itemminlvl_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 itemMaxLvl = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          set_has_itemmaxlvl();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &itemmaxlvl_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MyGame.Goods)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MyGame.Goods)
  return false;
#undef DO_
}

void Goods::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MyGame.Goods)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string itemName = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->itemname().data(), static_cast<int>(this->itemname().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MyGame.Goods.itemName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->itemname(), output);
  }

  // optional int32 itemLV = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->itemlv(), output);
  }

  // optional int32 UseMinLV = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->useminlv(), output);
  }

  // optional int32 itemMinLvl = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->itemminlvl(), output);
  }

  // optional int32 itemMaxLvl = 6;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->itemmaxlvl(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MyGame.Goods)
}

::google::protobuf::uint8* Goods::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:MyGame.Goods)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string itemName = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->itemname().data(), static_cast<int>(this->itemname().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MyGame.Goods.itemName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->itemname(), target);
  }

  // optional int32 itemLV = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->itemlv(), target);
  }

  // optional int32 UseMinLV = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->useminlv(), target);
  }

  // optional int32 itemMinLvl = 5;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->itemminlvl(), target);
  }

  // optional int32 itemMaxLvl = 6;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->itemmaxlvl(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MyGame.Goods)
  return target;
}

size_t Goods::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MyGame.Goods)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 63u) {
    // optional string itemName = 2;
    if (has_itemname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->itemname());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 itemLV = 3;
    if (has_itemlv()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->itemlv());
    }

    // optional int32 UseMinLV = 4;
    if (has_useminlv()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->useminlv());
    }

    // optional int32 itemMinLvl = 5;
    if (has_itemminlvl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->itemminlvl());
    }

    // optional int32 itemMaxLvl = 6;
    if (has_itemmaxlvl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->itemmaxlvl());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Goods::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MyGame.Goods)
  GOOGLE_DCHECK_NE(&from, this);
  const Goods* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Goods>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MyGame.Goods)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MyGame.Goods)
    MergeFrom(*source);
  }
}

void Goods::MergeFrom(const Goods& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MyGame.Goods)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_itemname();
      itemname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.itemname_);
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000004u) {
      itemlv_ = from.itemlv_;
    }
    if (cached_has_bits & 0x00000008u) {
      useminlv_ = from.useminlv_;
    }
    if (cached_has_bits & 0x00000010u) {
      itemminlvl_ = from.itemminlvl_;
    }
    if (cached_has_bits & 0x00000020u) {
      itemmaxlvl_ = from.itemmaxlvl_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Goods::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MyGame.Goods)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Goods::CopyFrom(const Goods& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MyGame.Goods)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Goods::IsInitialized() const {
  return true;
}

void Goods::Swap(Goods* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Goods::InternalSwap(Goods* other) {
  using std::swap;
  itemname_.Swap(&other->itemname_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(itemlv_, other->itemlv_);
  swap(useminlv_, other->useminlv_);
  swap(itemminlvl_, other->itemminlvl_);
  swap(itemmaxlvl_, other->itemmaxlvl_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Goods::GetMetadata() const {
  protobuf_Goods_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Goods_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace MyGame
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::MyGame::Goods* Arena::CreateMaybeMessage< ::MyGame::Goods >(Arena* arena) {
  return Arena::CreateInternal< ::MyGame::Goods >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)