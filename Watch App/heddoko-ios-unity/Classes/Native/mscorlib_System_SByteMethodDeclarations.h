#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.SByte
struct SByte_t62;
// System.IFormatProvider
struct IFormatProvider_t882;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t140;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.SByte::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool SByte_System_IConvertible_ToBoolean_m5918 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.SByte::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t SByte_System_IConvertible_ToByte_m5919 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.SByte::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t SByte_System_IConvertible_ToChar_m5920 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.SByte::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t645  SByte_System_IConvertible_ToDateTime_m5921 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.SByte::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t881  SByte_System_IConvertible_ToDecimal_m5922 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.SByte::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double SByte_System_IConvertible_ToDouble_m5923 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.SByte::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t SByte_System_IConvertible_ToInt16_m5924 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t SByte_System_IConvertible_ToInt32_m5925 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.SByte::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t SByte_System_IConvertible_ToInt64_m5926 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t SByte_System_IConvertible_ToSByte_m5927 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.SByte::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float SByte_System_IConvertible_ToSingle_m5928 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.SByte::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * SByte_System_IConvertible_ToType_m5929 (int8_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.SByte::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t SByte_System_IConvertible_ToUInt16_m5930 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.SByte::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t SByte_System_IConvertible_ToUInt32_m5931 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.SByte::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t SByte_System_IConvertible_ToUInt64_m5932 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::CompareTo(System.Object)
extern "C" int32_t SByte_CompareTo_m5933 (int8_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Equals(System.Object)
extern "C" bool SByte_Equals_m5934 (int8_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::GetHashCode()
extern "C" int32_t SByte_GetHashCode_m5935 (int8_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::CompareTo(System.SByte)
extern "C" int32_t SByte_CompareTo_m5936 (int8_t* __this, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Equals(System.SByte)
extern "C" bool SByte_Equals_m5937 (int8_t* __this, int8_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Parse(System.String,System.Boolean,System.SByte&,System.Exception&)
extern "C" bool SByte_Parse_m5938 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, int8_t* ___result, Exception_t140 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::Parse(System.String,System.IFormatProvider)
extern "C" int8_t SByte_Parse_m5939 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" int8_t SByte_Parse_m5940 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::TryParse(System.String,System.SByte&)
extern "C" bool SByte_TryParse_m5941 (Object_t * __this /* static, unused */, String_t* ___s, int8_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString()
extern "C" String_t* SByte_ToString_m5942 (int8_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.IFormatProvider)
extern "C" String_t* SByte_ToString_m5943 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.String)
extern "C" String_t* SByte_ToString_m5944 (int8_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.String,System.IFormatProvider)
extern "C" String_t* SByte_ToString_m5945 (int8_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
