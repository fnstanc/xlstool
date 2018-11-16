// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Skill.proto

#ifndef PROTOBUF_INCLUDED_Skill_2eproto
#define PROTOBUF_INCLUDED_Skill_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_Skill_2eproto 

namespace protobuf_Skill_2eproto {
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
}  // namespace protobuf_Skill_2eproto
namespace MyGame {
class Skill;
class SkillDefaultTypeInternal;
extern SkillDefaultTypeInternal _Skill_default_instance_;
}  // namespace MyGame
namespace google {
namespace protobuf {
template<> ::MyGame::Skill* Arena::CreateMaybeMessage<::MyGame::Skill>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace MyGame {

// ===================================================================

class Skill : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MyGame.Skill) */ {
 public:
  Skill();
  virtual ~Skill();

  Skill(const Skill& from);

  inline Skill& operator=(const Skill& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Skill(Skill&& from) noexcept
    : Skill() {
    *this = ::std::move(from);
  }

  inline Skill& operator=(Skill&& from) noexcept {
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
  static const Skill& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Skill* internal_default_instance() {
    return reinterpret_cast<const Skill*>(
               &_Skill_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Skill* other);
  friend void swap(Skill& a, Skill& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Skill* New() const final {
    return CreateMaybeMessage<Skill>(NULL);
  }

  Skill* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Skill>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Skill& from);
  void MergeFrom(const Skill& from);
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
  void InternalSwap(Skill* other);
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

  // optional string skillName = 4;
  bool has_skillname() const;
  void clear_skillname();
  static const int kSkillNameFieldNumber = 4;
  const ::std::string& skillname() const;
  void set_skillname(const ::std::string& value);
  #if LANG_CXX11
  void set_skillname(::std::string&& value);
  #endif
  void set_skillname(const char* value);
  void set_skillname(const char* value, size_t size);
  ::std::string* mutable_skillname();
  ::std::string* release_skillname();
  void set_allocated_skillname(::std::string* skillname);

  // optional int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional int32 skillID = 2;
  bool has_skillid() const;
  void clear_skillid();
  static const int kSkillIDFieldNumber = 2;
  ::google::protobuf::int32 skillid() const;
  void set_skillid(::google::protobuf::int32 value);

  // optional int32 skillIcon = 3;
  bool has_skillicon() const;
  void clear_skillicon();
  static const int kSkillIconFieldNumber = 3;
  ::google::protobuf::int32 skillicon() const;
  void set_skillicon(::google::protobuf::int32 value);

  // optional int32 skillLevel = 5;
  bool has_skilllevel() const;
  void clear_skilllevel();
  static const int kSkillLevelFieldNumber = 5;
  ::google::protobuf::int32 skilllevel() const;
  void set_skilllevel(::google::protobuf::int32 value);

  // optional int32 skillType = 6;
  bool has_skilltype() const;
  void clear_skilltype();
  static const int kSkillTypeFieldNumber = 6;
  ::google::protobuf::int32 skilltype() const;
  void set_skilltype(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MyGame.Skill)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_skillid();
  void clear_has_skillid();
  void set_has_skillicon();
  void clear_has_skillicon();
  void set_has_skillname();
  void clear_has_skillname();
  void set_has_skilllevel();
  void clear_has_skilllevel();
  void set_has_skilltype();
  void clear_has_skilltype();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr skillname_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 skillid_;
  ::google::protobuf::int32 skillicon_;
  ::google::protobuf::int32 skilllevel_;
  ::google::protobuf::int32 skilltype_;
  friend struct ::protobuf_Skill_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Skill

// optional int32 id = 1;
inline bool Skill::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Skill::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Skill::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Skill::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Skill::id() const {
  // @@protoc_insertion_point(field_get:MyGame.Skill.id)
  return id_;
}
inline void Skill::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Skill.id)
}

// optional int32 skillID = 2;
inline bool Skill::has_skillid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Skill::set_has_skillid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Skill::clear_has_skillid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Skill::clear_skillid() {
  skillid_ = 0;
  clear_has_skillid();
}
inline ::google::protobuf::int32 Skill::skillid() const {
  // @@protoc_insertion_point(field_get:MyGame.Skill.skillID)
  return skillid_;
}
inline void Skill::set_skillid(::google::protobuf::int32 value) {
  set_has_skillid();
  skillid_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Skill.skillID)
}

// optional int32 skillIcon = 3;
inline bool Skill::has_skillicon() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Skill::set_has_skillicon() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Skill::clear_has_skillicon() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Skill::clear_skillicon() {
  skillicon_ = 0;
  clear_has_skillicon();
}
inline ::google::protobuf::int32 Skill::skillicon() const {
  // @@protoc_insertion_point(field_get:MyGame.Skill.skillIcon)
  return skillicon_;
}
inline void Skill::set_skillicon(::google::protobuf::int32 value) {
  set_has_skillicon();
  skillicon_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Skill.skillIcon)
}

// optional string skillName = 4;
inline bool Skill::has_skillname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Skill::set_has_skillname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Skill::clear_has_skillname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Skill::clear_skillname() {
  skillname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_skillname();
}
inline const ::std::string& Skill::skillname() const {
  // @@protoc_insertion_point(field_get:MyGame.Skill.skillName)
  return skillname_.GetNoArena();
}
inline void Skill::set_skillname(const ::std::string& value) {
  set_has_skillname();
  skillname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MyGame.Skill.skillName)
}
#if LANG_CXX11
inline void Skill::set_skillname(::std::string&& value) {
  set_has_skillname();
  skillname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MyGame.Skill.skillName)
}
#endif
inline void Skill::set_skillname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_skillname();
  skillname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MyGame.Skill.skillName)
}
inline void Skill::set_skillname(const char* value, size_t size) {
  set_has_skillname();
  skillname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MyGame.Skill.skillName)
}
inline ::std::string* Skill::mutable_skillname() {
  set_has_skillname();
  // @@protoc_insertion_point(field_mutable:MyGame.Skill.skillName)
  return skillname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Skill::release_skillname() {
  // @@protoc_insertion_point(field_release:MyGame.Skill.skillName)
  if (!has_skillname()) {
    return NULL;
  }
  clear_has_skillname();
  return skillname_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Skill::set_allocated_skillname(::std::string* skillname) {
  if (skillname != NULL) {
    set_has_skillname();
  } else {
    clear_has_skillname();
  }
  skillname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), skillname);
  // @@protoc_insertion_point(field_set_allocated:MyGame.Skill.skillName)
}

// optional int32 skillLevel = 5;
inline bool Skill::has_skilllevel() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Skill::set_has_skilllevel() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Skill::clear_has_skilllevel() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Skill::clear_skilllevel() {
  skilllevel_ = 0;
  clear_has_skilllevel();
}
inline ::google::protobuf::int32 Skill::skilllevel() const {
  // @@protoc_insertion_point(field_get:MyGame.Skill.skillLevel)
  return skilllevel_;
}
inline void Skill::set_skilllevel(::google::protobuf::int32 value) {
  set_has_skilllevel();
  skilllevel_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Skill.skillLevel)
}

// optional int32 skillType = 6;
inline bool Skill::has_skilltype() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Skill::set_has_skilltype() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Skill::clear_has_skilltype() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Skill::clear_skilltype() {
  skilltype_ = 0;
  clear_has_skilltype();
}
inline ::google::protobuf::int32 Skill::skilltype() const {
  // @@protoc_insertion_point(field_get:MyGame.Skill.skillType)
  return skilltype_;
}
inline void Skill::set_skilltype(::google::protobuf::int32 value) {
  set_has_skilltype();
  skilltype_ = value;
  // @@protoc_insertion_point(field_set:MyGame.Skill.skillType)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace MyGame

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_Skill_2eproto
