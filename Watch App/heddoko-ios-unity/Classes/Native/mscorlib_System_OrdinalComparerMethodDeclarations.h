#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OrdinalComparer
struct OrdinalComparer_t1838;
// System.String
struct String_t;

// System.Void System.OrdinalComparer::.ctor(System.Boolean)
extern "C" void OrdinalComparer__ctor_m10119 (OrdinalComparer_t1838 * __this, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.OrdinalComparer::Compare(System.String,System.String)
extern "C" int32_t OrdinalComparer_Compare_m10120 (OrdinalComparer_t1838 * __this, String_t* ___x, String_t* ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.OrdinalComparer::Equals(System.String,System.String)
extern "C" bool OrdinalComparer_Equals_m10121 (OrdinalComparer_t1838 * __this, String_t* ___x, String_t* ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.OrdinalComparer::GetHashCode(System.String)
extern "C" int32_t OrdinalComparer_GetHashCode_m10122 (OrdinalComparer_t1838 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
