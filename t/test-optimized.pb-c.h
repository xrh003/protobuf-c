/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: t/test-optimized.proto */

#ifndef PROTOBUF_C_t_2ftest_2doptimized_2eproto__INCLUDED
#define PROTOBUF_C_t_2ftest_2doptimized_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Foo__TestMessLite Foo__TestMessLite;


/* --- enums --- */

typedef enum _Foo__TestEnumLite {
  FOO__TEST_ENUM_LITE__LITE = 0,
  FOO__TEST_ENUM_LITE__LITE1 = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(FOO__TEST_ENUM_LITE)
} Foo__TestEnumLite;

/* --- messages --- */

struct  _Foo__TestMessLite
{
  ProtobufCMessage base;
  int32_t field1;
  Foo__TestEnumLite field2;
};
#define FOO__TEST_MESS_LITE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&foo__test_mess_lite__descriptor) \
    , 0, FOO__TEST_ENUM_LITE__LITE }


/* Foo__TestMessLite methods */
void   foo__test_mess_lite__init
                     (Foo__TestMessLite         *message);
size_t foo__test_mess_lite__get_packed_size
                     (const Foo__TestMessLite   *message);
size_t foo__test_mess_lite__pack
                     (const Foo__TestMessLite   *message,
                      uint8_t             *out);
size_t foo__test_mess_lite__pack_to_buffer
                     (const Foo__TestMessLite   *message,
                      ProtobufCBuffer     *buffer);
Foo__TestMessLite *
       foo__test_mess_lite__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   foo__test_mess_lite__free_unpacked
                     (Foo__TestMessLite *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Foo__TestMessLite_Closure)
                 (const Foo__TestMessLite *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    foo__test_enum_lite__descriptor;
extern const ProtobufCMessageDescriptor foo__test_mess_lite__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_t_2ftest_2doptimized_2eproto__INCLUDED */
