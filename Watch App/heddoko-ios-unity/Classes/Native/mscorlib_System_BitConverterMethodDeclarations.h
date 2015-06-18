#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.BitConverter
struct BitConverter_t48;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.String
struct String_t;

// System.Void System.BitConverter::.cctor()
extern "C" void BitConverter__cctor_m9463 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
extern "C" bool BitConverter_AmILittleEndian_m9464 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
extern "C" bool BitConverter_DoubleWordsAreSwapped_m9465 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
extern "C" int64_t BitConverter_DoubleToInt64Bits_m9466 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.BitConverter::Int64BitsToDouble(System.Int64)
extern "C" double BitConverter_Int64BitsToDouble_m9467 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
extern "C" ByteU5BU5D_t13* BitConverter_GetBytes_m9468 (Object_t * __this /* static, unused */, uint8_t* ___ptr, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
extern "C" ByteU5BU5D_t13* BitConverter_GetBytes_m9469 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
extern "C" ByteU5BU5D_t13* BitConverter_GetBytes_m9470 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
extern "C" void BitConverter_PutBytes_m9471 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t13* ___src, int32_t ___start_index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
extern "C" int16_t BitConverter_ToInt16_m148 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
extern "C" int64_t BitConverter_ToInt64_m9472 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
extern "C" double BitConverter_ToDouble_m9473 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
extern "C" String_t* BitConverter_ToString_m9474 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* BitConverter_ToString_m9475 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
