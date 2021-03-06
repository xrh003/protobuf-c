/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: t/issue220/issue220.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "t/issue220/issue220.pb-c.h"
void   top_level__init
                     (TopLevel         *message)
{
  static const TopLevel init_value = TOP_LEVEL__INIT;
  *message = init_value;
}
size_t top_level__get_packed_size
                     (const TopLevel *message)
{
  assert(message->base.descriptor == &top_level__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t top_level__pack
                     (const TopLevel *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &top_level__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t top_level__pack_to_buffer
                     (const TopLevel *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &top_level__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TopLevel *
       top_level__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TopLevel *)
     protobuf_c_message_unpack (&top_level__descriptor,
                                allocator, len, data);
}
void   top_level__free_unpacked
                     (TopLevel *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &top_level__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   message_type1__init
                     (MessageType1         *message)
{
  static const MessageType1 init_value = MESSAGE_TYPE1__INIT;
  *message = init_value;
}
size_t message_type1__get_packed_size
                     (const MessageType1 *message)
{
  assert(message->base.descriptor == &message_type1__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t message_type1__pack
                     (const MessageType1 *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &message_type1__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t message_type1__pack_to_buffer
                     (const MessageType1 *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &message_type1__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MessageType1 *
       message_type1__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MessageType1 *)
     protobuf_c_message_unpack (&message_type1__descriptor,
                                allocator, len, data);
}
void   message_type1__free_unpacked
                     (MessageType1 *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &message_type1__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   message_type2__init
                     (MessageType2         *message)
{
  static const MessageType2 init_value = MESSAGE_TYPE2__INIT;
  *message = init_value;
}
size_t message_type2__get_packed_size
                     (const MessageType2 *message)
{
  assert(message->base.descriptor == &message_type2__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t message_type2__pack
                     (const MessageType2 *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &message_type2__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t message_type2__pack_to_buffer
                     (const MessageType2 *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &message_type2__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MessageType2 *
       message_type2__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MessageType2 *)
     protobuf_c_message_unpack (&message_type2__descriptor,
                                allocator, len, data);
}
void   message_type2__free_unpacked
                     (MessageType2 *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &message_type2__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor top_level__field_descriptors[2] =
{
  {
    "type1",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(TopLevel, submessages_case),
    offsetof(TopLevel, type1),
    &message_type1__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type2",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(TopLevel, submessages_case),
    offsetof(TopLevel, type2),
    &message_type2__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned top_level__field_indices_by_name[] = {
  0,   /* field[0] = type1 */
  1,   /* field[1] = type2 */
};
static const ProtobufCIntRange top_level__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor top_level__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "TopLevel",
  "TopLevel",
  "TopLevel",
  "",
  sizeof(TopLevel),
  2,
  top_level__field_descriptors,
  top_level__field_indices_by_name,
  1,  top_level__number_ranges,
  (ProtobufCMessageInit) top_level__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue message_type1__flag__enum_values_by_number[1] =
{
  { "OK", "MESSAGE_TYPE1__FLAG__OK", 1 },
};
static const ProtobufCIntRange message_type1__flag__value_ranges[] = {
{1, 0},{0, 1}
};
static const ProtobufCEnumValueIndex message_type1__flag__enum_values_by_name[1] =
{
  { "OK", 0 },
};
const ProtobufCEnumDescriptor message_type1__flag__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "MessageType1.Flag",
  "Flag",
  "MessageType1__Flag",
  "",
  1,
  message_type1__flag__enum_values_by_number,
  1,
  message_type1__flag__enum_values_by_name,
  1,
  message_type1__flag__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor message_type1__field_descriptors[1] =
{
  {
    "flag",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(MessageType1, has_flag),
    offsetof(MessageType1, flag),
    &message_type1__flag__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned message_type1__field_indices_by_name[] = {
  0,   /* field[0] = flag */
};
static const ProtobufCIntRange message_type1__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor message_type1__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "MessageType1",
  "MessageType1",
  "MessageType1",
  "",
  sizeof(MessageType1),
  1,
  message_type1__field_descriptors,
  message_type1__field_indices_by_name,
  1,  message_type1__number_ranges,
  (ProtobufCMessageInit) message_type1__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue message_type2__another_flag__enum_values_by_number[1] =
{
  { "OK", "MESSAGE_TYPE2__ANOTHER_FLAG__OK", 1 },
};
static const ProtobufCIntRange message_type2__another_flag__value_ranges[] = {
{1, 0},{0, 1}
};
static const ProtobufCEnumValueIndex message_type2__another_flag__enum_values_by_name[1] =
{
  { "OK", 0 },
};
const ProtobufCEnumDescriptor message_type2__another_flag__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "MessageType2.AnotherFlag",
  "AnotherFlag",
  "MessageType2__AnotherFlag",
  "",
  1,
  message_type2__another_flag__enum_values_by_number,
  1,
  message_type2__another_flag__enum_values_by_name,
  1,
  message_type2__another_flag__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor message_type2__field_descriptors[1] =
{
  {
    "flag",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(MessageType2, has_flag),
    offsetof(MessageType2, flag),
    &message_type2__another_flag__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned message_type2__field_indices_by_name[] = {
  0,   /* field[0] = flag */
};
static const ProtobufCIntRange message_type2__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor message_type2__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "MessageType2",
  "MessageType2",
  "MessageType2",
  "",
  sizeof(MessageType2),
  1,
  message_type2__field_descriptors,
  message_type2__field_indices_by_name,
  1,  message_type2__number_ranges,
  (ProtobufCMessageInit) message_type2__init,
  NULL,NULL,NULL    /* reserved[123] */
};
