﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Int16
struct Int16_t158;
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

// System.Boolean System.Int16::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Int16_System_IConvertible_ToBoolean_m5946 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int16::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Int16_System_IConvertible_ToByte_m5947 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int16::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Int16_System_IConvertible_ToChar_m5948 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int16::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t645  Int16_System_IConvertible_ToDateTime_m5949 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int16::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t881  Int16_System_IConvertible_ToDecimal_m5950 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int16::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Int16_System_IConvertible_ToDouble_m5951 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Int16_System_IConvertible_ToInt16_m5952 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Int16_System_IConvertible_ToInt32_m5953 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int16::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Int16_System_IConvertible_ToInt64_m5954 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int16::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Int16_System_IConvertible_ToSByte_m5955 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int16::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Int16_System_IConvertible_ToSingle_m5956 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Int16_System_IConvertible_ToType_m5957 (int16_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int16::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Int16_System_IConvertible_ToUInt16_m5958 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int16::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Int16_System_IConvertible_ToUInt32_m5959 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int16::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Int16_System_IConvertible_ToUInt64_m5960 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::CompareTo(System.Object)
extern "C" int32_t Int16_CompareTo_m5961 (int16_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Equals(System.Object)
extern "C" bool Int16_Equals_m5962 (int16_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::GetHashCode()
extern "C" int32_t Int16_GetHashCode_m5963 (int16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::CompareTo(System.Int16)
extern "C" int32_t Int16_CompareTo_m5964 (int16_t* __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Equals(System.Int16)
extern "C" bool Int16_Equals_m5965 (int16_t* __this, int16_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Parse(System.String,System.Boolean,System.Int16&,System.Exception&)
extern "C" bool Int16_Parse_m5966 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, int16_t* ___result, Exception_t140 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::Parse(System.String,System.IFormatProvider)
extern "C" int16_t Int16_Parse_m5967 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" int16_t Int16_Parse_m5968 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::TryParse(System.String,System.Int16&)
extern "C" bool Int16_TryParse_m5969 (Object_t * __this /* static, unused */, String_t* ___s, int16_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString()
extern "C" String_t* Int16_ToString_m5970 (int16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.IFormatProvider)
extern "C" String_t* Int16_ToString_m5971 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.String)
extern "C" String_t* Int16_ToString_m5972 (int16_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Int16_ToString_m5973 (int16_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
