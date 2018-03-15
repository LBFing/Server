// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BaseMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BaseMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace lm {

namespace {

const ::google::protobuf::Descriptor* MessageBase_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageBase_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_BaseMessage_2eproto() {
  protobuf_AddDesc_BaseMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "BaseMessage.proto");
  GOOGLE_CHECK(file != NULL);
  MessageBase_descriptor_ = file->message_type(0);
  static const int MessageBase_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBase, opcode_),
  };
  MessageBase_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MessageBase_descriptor_,
      MessageBase::default_instance_,
      MessageBase_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBase, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBase, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MessageBase));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_BaseMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MessageBase_descriptor_, &MessageBase::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_BaseMessage_2eproto() {
  delete MessageBase::default_instance_;
  delete MessageBase_reflection_;
}

void protobuf_AddDesc_BaseMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021BaseMessage.proto\022\002lm\"\035\n\013MessageBase\022\016"
    "\n\006opcode\030\001 \002(\005", 54);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BaseMessage.proto", &protobuf_RegisterTypes);
  MessageBase::default_instance_ = new MessageBase();
  MessageBase::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BaseMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BaseMessage_2eproto {
  StaticDescriptorInitializer_BaseMessage_2eproto() {
    protobuf_AddDesc_BaseMessage_2eproto();
  }
} static_descriptor_initializer_BaseMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MessageBase::kOpcodeFieldNumber;
#endif  // !_MSC_VER

MessageBase::MessageBase()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MessageBase::InitAsDefaultInstance() {
}

MessageBase::MessageBase(const MessageBase& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MessageBase::SharedCtor() {
  _cached_size_ = 0;
  opcode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageBase::~MessageBase() {
  SharedDtor();
}

void MessageBase::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MessageBase::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageBase::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageBase_descriptor_;
}

const MessageBase& MessageBase::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BaseMessage_2eproto();
  return *default_instance_;
}

MessageBase* MessageBase::default_instance_ = NULL;

MessageBase* MessageBase::New() const {
  return new MessageBase;
}

void MessageBase::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    opcode_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MessageBase::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 opcode = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &opcode_)));
          set_has_opcode();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MessageBase::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 opcode = 1;
  if (has_opcode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->opcode(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MessageBase::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 opcode = 1;
  if (has_opcode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->opcode(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MessageBase::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 opcode = 1;
    if (has_opcode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->opcode());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageBase::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MessageBase* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MessageBase*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MessageBase::MergeFrom(const MessageBase& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_opcode()) {
      set_opcode(from.opcode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MessageBase::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageBase::CopyFrom(const MessageBase& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageBase::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MessageBase::Swap(MessageBase* other) {
  if (other != this) {
    std::swap(opcode_, other->opcode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MessageBase::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageBase_descriptor_;
  metadata.reflection = MessageBase_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace lm

// @@protoc_insertion_point(global_scope)
