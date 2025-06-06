/* This file was generated by upb_generator from the input file:
 *
 *     envoy/type/matcher/v3/regex.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated.
 * NO CHECKED-IN PROTOBUF GENCODE */

#ifndef ENVOY_TYPE_MATCHER_V3_REGEX_PROTO_UPB_H__UPB_H_
#define ENVOY_TYPE_MATCHER_V3_REGEX_PROTO_UPB_H__UPB_H_

#include "upb/generated_code_support.h"

#include "envoy/type/matcher/v3/regex.upb_minitable.h"

#include "google/protobuf/wrappers.upb_minitable.h"
#include "envoy/annotations/deprecation.upb_minitable.h"
#include "udpa/annotations/status.upb_minitable.h"
#include "udpa/annotations/versioning.upb_minitable.h"
#include "validate/validate.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct envoy_type_matcher_v3_RegexMatcher { upb_Message UPB_PRIVATE(base); } envoy_type_matcher_v3_RegexMatcher;
typedef struct envoy_type_matcher_v3_RegexMatcher_GoogleRE2 { upb_Message UPB_PRIVATE(base); } envoy_type_matcher_v3_RegexMatcher_GoogleRE2;
typedef struct envoy_type_matcher_v3_RegexMatchAndSubstitute { upb_Message UPB_PRIVATE(base); } envoy_type_matcher_v3_RegexMatchAndSubstitute;
struct google_protobuf_UInt32Value;



/* envoy.type.matcher.v3.RegexMatcher */

UPB_INLINE envoy_type_matcher_v3_RegexMatcher* envoy_type_matcher_v3_RegexMatcher_new(upb_Arena* arena) {
  return (envoy_type_matcher_v3_RegexMatcher*)_upb_Message_New(&envoy__type__matcher__v3__RegexMatcher_msg_init, arena);
}
UPB_INLINE envoy_type_matcher_v3_RegexMatcher* envoy_type_matcher_v3_RegexMatcher_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_type_matcher_v3_RegexMatcher* ret = envoy_type_matcher_v3_RegexMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, UPB_UPCAST(ret), &envoy__type__matcher__v3__RegexMatcher_msg_init, NULL, 0, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_type_matcher_v3_RegexMatcher* envoy_type_matcher_v3_RegexMatcher_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_type_matcher_v3_RegexMatcher* ret = envoy_type_matcher_v3_RegexMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, UPB_UPCAST(ret), &envoy__type__matcher__v3__RegexMatcher_msg_init, extreg, options,
                 arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_type_matcher_v3_RegexMatcher_serialize(const envoy_type_matcher_v3_RegexMatcher* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(UPB_UPCAST(msg), &envoy__type__matcher__v3__RegexMatcher_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_type_matcher_v3_RegexMatcher_serialize_ex(const envoy_type_matcher_v3_RegexMatcher* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(UPB_UPCAST(msg), &envoy__type__matcher__v3__RegexMatcher_msg_init, options, arena, &ptr, len);
  return ptr;
}
typedef enum {
  envoy_type_matcher_v3_RegexMatcher_engine_type_google_re2 = 1,
  envoy_type_matcher_v3_RegexMatcher_engine_type_NOT_SET = 0
} envoy_type_matcher_v3_RegexMatcher_engine_type_oneofcases;
UPB_INLINE envoy_type_matcher_v3_RegexMatcher_engine_type_oneofcases envoy_type_matcher_v3_RegexMatcher_engine_type_case(const envoy_type_matcher_v3_RegexMatcher* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), -9, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (envoy_type_matcher_v3_RegexMatcher_engine_type_oneofcases)upb_Message_WhichOneofFieldNumber(
      UPB_UPCAST(msg), &field);
}
UPB_INLINE void envoy_type_matcher_v3_RegexMatcher_clear_engine_type(envoy_type_matcher_v3_RegexMatcher* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), -9, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Message_ClearOneof(UPB_UPCAST(msg), &envoy__type__matcher__v3__RegexMatcher_msg_init, &field);
}
UPB_INLINE void envoy_type_matcher_v3_RegexMatcher_clear_google_re2(envoy_type_matcher_v3_RegexMatcher* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), -9, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Message_ClearBaseField(UPB_UPCAST(msg), &field);
}
UPB_INLINE const envoy_type_matcher_v3_RegexMatcher_GoogleRE2* envoy_type_matcher_v3_RegexMatcher_google_re2(const envoy_type_matcher_v3_RegexMatcher* msg) {
  const envoy_type_matcher_v3_RegexMatcher_GoogleRE2* default_val = NULL;
  const envoy_type_matcher_v3_RegexMatcher_GoogleRE2* ret;
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), -9, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  UPB_PRIVATE(_upb_MiniTable_StrongReference)(&envoy__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init);
  _upb_Message_GetNonExtensionField(UPB_UPCAST(msg), &field,
                                    &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_type_matcher_v3_RegexMatcher_has_google_re2(const envoy_type_matcher_v3_RegexMatcher* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), -9, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return upb_Message_HasBaseField(UPB_UPCAST(msg), &field);
}
UPB_INLINE void envoy_type_matcher_v3_RegexMatcher_clear_regex(envoy_type_matcher_v3_RegexMatcher* msg) {
  const upb_MiniTableField field = {2, 16, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  upb_Message_ClearBaseField(UPB_UPCAST(msg), &field);
}
UPB_INLINE upb_StringView envoy_type_matcher_v3_RegexMatcher_regex(const envoy_type_matcher_v3_RegexMatcher* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {2, 16, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(UPB_UPCAST(msg), &field,
                                    &default_val, &ret);
  return ret;
}

UPB_INLINE void envoy_type_matcher_v3_RegexMatcher_set_google_re2(envoy_type_matcher_v3_RegexMatcher *msg, envoy_type_matcher_v3_RegexMatcher_GoogleRE2* value) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), -9, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  UPB_PRIVATE(_upb_MiniTable_StrongReference)(&envoy__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init);
  upb_Message_SetBaseField((upb_Message *)msg, &field, &value);
}
UPB_INLINE struct envoy_type_matcher_v3_RegexMatcher_GoogleRE2* envoy_type_matcher_v3_RegexMatcher_mutable_google_re2(envoy_type_matcher_v3_RegexMatcher* msg, upb_Arena* arena) {
  struct envoy_type_matcher_v3_RegexMatcher_GoogleRE2* sub = (struct envoy_type_matcher_v3_RegexMatcher_GoogleRE2*)envoy_type_matcher_v3_RegexMatcher_google_re2(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_v3_RegexMatcher_GoogleRE2*)_upb_Message_New(&envoy__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, arena);
    if (sub) envoy_type_matcher_v3_RegexMatcher_set_google_re2(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_type_matcher_v3_RegexMatcher_set_regex(envoy_type_matcher_v3_RegexMatcher *msg, upb_StringView value) {
  const upb_MiniTableField field = {2, 16, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  upb_Message_SetBaseField((upb_Message *)msg, &field, &value);
}

/* envoy.type.matcher.v3.RegexMatcher.GoogleRE2 */

UPB_INLINE envoy_type_matcher_v3_RegexMatcher_GoogleRE2* envoy_type_matcher_v3_RegexMatcher_GoogleRE2_new(upb_Arena* arena) {
  return (envoy_type_matcher_v3_RegexMatcher_GoogleRE2*)_upb_Message_New(&envoy__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, arena);
}
UPB_INLINE envoy_type_matcher_v3_RegexMatcher_GoogleRE2* envoy_type_matcher_v3_RegexMatcher_GoogleRE2_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_type_matcher_v3_RegexMatcher_GoogleRE2* ret = envoy_type_matcher_v3_RegexMatcher_GoogleRE2_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, UPB_UPCAST(ret), &envoy__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, NULL, 0, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_type_matcher_v3_RegexMatcher_GoogleRE2* envoy_type_matcher_v3_RegexMatcher_GoogleRE2_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_type_matcher_v3_RegexMatcher_GoogleRE2* ret = envoy_type_matcher_v3_RegexMatcher_GoogleRE2_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, UPB_UPCAST(ret), &envoy__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, extreg, options,
                 arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_type_matcher_v3_RegexMatcher_GoogleRE2_serialize(const envoy_type_matcher_v3_RegexMatcher_GoogleRE2* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(UPB_UPCAST(msg), &envoy__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_type_matcher_v3_RegexMatcher_GoogleRE2_serialize_ex(const envoy_type_matcher_v3_RegexMatcher_GoogleRE2* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(UPB_UPCAST(msg), &envoy__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_type_matcher_v3_RegexMatcher_GoogleRE2_clear_max_program_size(envoy_type_matcher_v3_RegexMatcher_GoogleRE2* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 16), 64, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Message_ClearBaseField(UPB_UPCAST(msg), &field);
}
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_type_matcher_v3_RegexMatcher_GoogleRE2_max_program_size(const envoy_type_matcher_v3_RegexMatcher_GoogleRE2* msg) {
  const struct google_protobuf_UInt32Value* default_val = NULL;
  const struct google_protobuf_UInt32Value* ret;
  const upb_MiniTableField field = {1, UPB_SIZE(12, 16), 64, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  UPB_PRIVATE(_upb_MiniTable_StrongReference)(&google__protobuf__UInt32Value_msg_init);
  _upb_Message_GetNonExtensionField(UPB_UPCAST(msg), &field,
                                    &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_type_matcher_v3_RegexMatcher_GoogleRE2_has_max_program_size(const envoy_type_matcher_v3_RegexMatcher_GoogleRE2* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 16), 64, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return upb_Message_HasBaseField(UPB_UPCAST(msg), &field);
}

UPB_INLINE void envoy_type_matcher_v3_RegexMatcher_GoogleRE2_set_max_program_size(envoy_type_matcher_v3_RegexMatcher_GoogleRE2 *msg, struct google_protobuf_UInt32Value* value) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 16), 64, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  UPB_PRIVATE(_upb_MiniTable_StrongReference)(&google__protobuf__UInt32Value_msg_init);
  upb_Message_SetBaseField((upb_Message *)msg, &field, &value);
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_type_matcher_v3_RegexMatcher_GoogleRE2_mutable_max_program_size(envoy_type_matcher_v3_RegexMatcher_GoogleRE2* msg, upb_Arena* arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_type_matcher_v3_RegexMatcher_GoogleRE2_max_program_size(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_Message_New(&google__protobuf__UInt32Value_msg_init, arena);
    if (sub) envoy_type_matcher_v3_RegexMatcher_GoogleRE2_set_max_program_size(msg, sub);
  }
  return sub;
}

/* envoy.type.matcher.v3.RegexMatchAndSubstitute */

UPB_INLINE envoy_type_matcher_v3_RegexMatchAndSubstitute* envoy_type_matcher_v3_RegexMatchAndSubstitute_new(upb_Arena* arena) {
  return (envoy_type_matcher_v3_RegexMatchAndSubstitute*)_upb_Message_New(&envoy__type__matcher__v3__RegexMatchAndSubstitute_msg_init, arena);
}
UPB_INLINE envoy_type_matcher_v3_RegexMatchAndSubstitute* envoy_type_matcher_v3_RegexMatchAndSubstitute_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_type_matcher_v3_RegexMatchAndSubstitute* ret = envoy_type_matcher_v3_RegexMatchAndSubstitute_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, UPB_UPCAST(ret), &envoy__type__matcher__v3__RegexMatchAndSubstitute_msg_init, NULL, 0, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_type_matcher_v3_RegexMatchAndSubstitute* envoy_type_matcher_v3_RegexMatchAndSubstitute_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_type_matcher_v3_RegexMatchAndSubstitute* ret = envoy_type_matcher_v3_RegexMatchAndSubstitute_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, UPB_UPCAST(ret), &envoy__type__matcher__v3__RegexMatchAndSubstitute_msg_init, extreg, options,
                 arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_type_matcher_v3_RegexMatchAndSubstitute_serialize(const envoy_type_matcher_v3_RegexMatchAndSubstitute* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(UPB_UPCAST(msg), &envoy__type__matcher__v3__RegexMatchAndSubstitute_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_type_matcher_v3_RegexMatchAndSubstitute_serialize_ex(const envoy_type_matcher_v3_RegexMatchAndSubstitute* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(UPB_UPCAST(msg), &envoy__type__matcher__v3__RegexMatchAndSubstitute_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_type_matcher_v3_RegexMatchAndSubstitute_clear_pattern(envoy_type_matcher_v3_RegexMatchAndSubstitute* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), 64, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Message_ClearBaseField(UPB_UPCAST(msg), &field);
}
UPB_INLINE const envoy_type_matcher_v3_RegexMatcher* envoy_type_matcher_v3_RegexMatchAndSubstitute_pattern(const envoy_type_matcher_v3_RegexMatchAndSubstitute* msg) {
  const envoy_type_matcher_v3_RegexMatcher* default_val = NULL;
  const envoy_type_matcher_v3_RegexMatcher* ret;
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), 64, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  UPB_PRIVATE(_upb_MiniTable_StrongReference)(&envoy__type__matcher__v3__RegexMatcher_msg_init);
  _upb_Message_GetNonExtensionField(UPB_UPCAST(msg), &field,
                                    &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_type_matcher_v3_RegexMatchAndSubstitute_has_pattern(const envoy_type_matcher_v3_RegexMatchAndSubstitute* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), 64, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return upb_Message_HasBaseField(UPB_UPCAST(msg), &field);
}
UPB_INLINE void envoy_type_matcher_v3_RegexMatchAndSubstitute_clear_substitution(envoy_type_matcher_v3_RegexMatchAndSubstitute* msg) {
  const upb_MiniTableField field = {2, 16, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  upb_Message_ClearBaseField(UPB_UPCAST(msg), &field);
}
UPB_INLINE upb_StringView envoy_type_matcher_v3_RegexMatchAndSubstitute_substitution(const envoy_type_matcher_v3_RegexMatchAndSubstitute* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {2, 16, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(UPB_UPCAST(msg), &field,
                                    &default_val, &ret);
  return ret;
}

UPB_INLINE void envoy_type_matcher_v3_RegexMatchAndSubstitute_set_pattern(envoy_type_matcher_v3_RegexMatchAndSubstitute *msg, envoy_type_matcher_v3_RegexMatcher* value) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 32), 64, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  UPB_PRIVATE(_upb_MiniTable_StrongReference)(&envoy__type__matcher__v3__RegexMatcher_msg_init);
  upb_Message_SetBaseField((upb_Message *)msg, &field, &value);
}
UPB_INLINE struct envoy_type_matcher_v3_RegexMatcher* envoy_type_matcher_v3_RegexMatchAndSubstitute_mutable_pattern(envoy_type_matcher_v3_RegexMatchAndSubstitute* msg, upb_Arena* arena) {
  struct envoy_type_matcher_v3_RegexMatcher* sub = (struct envoy_type_matcher_v3_RegexMatcher*)envoy_type_matcher_v3_RegexMatchAndSubstitute_pattern(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_v3_RegexMatcher*)_upb_Message_New(&envoy__type__matcher__v3__RegexMatcher_msg_init, arena);
    if (sub) envoy_type_matcher_v3_RegexMatchAndSubstitute_set_pattern(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_type_matcher_v3_RegexMatchAndSubstitute_set_substitution(envoy_type_matcher_v3_RegexMatchAndSubstitute *msg, upb_StringView value) {
  const upb_MiniTableField field = {2, 16, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  upb_Message_SetBaseField((upb_Message *)msg, &field, &value);
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_TYPE_MATCHER_V3_REGEX_PROTO_UPB_H__UPB_H_ */
