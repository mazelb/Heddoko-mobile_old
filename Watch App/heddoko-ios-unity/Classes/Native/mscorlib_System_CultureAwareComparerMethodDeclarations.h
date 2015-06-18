#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CultureAwareComparer
struct CultureAwareComparer_t1837;
// System.Globalization.CultureInfo
struct CultureInfo_t791;
// System.String
struct String_t;

// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern "C" void CultureAwareComparer__ctor_m10115 (CultureAwareComparer_t1837 * __this, CultureInfo_t791 * ___ci, bool ___ignore_case, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C" int32_t CultureAwareComparer_Compare_m10116 (CultureAwareComparer_t1837 * __this, String_t* ___x, String_t* ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern "C" bool CultureAwareComparer_Equals_m10117 (CultureAwareComparer_t1837 * __this, String_t* ___x, String_t* ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern "C" int32_t CultureAwareComparer_GetHashCode_m10118 (CultureAwareComparer_t1837 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
