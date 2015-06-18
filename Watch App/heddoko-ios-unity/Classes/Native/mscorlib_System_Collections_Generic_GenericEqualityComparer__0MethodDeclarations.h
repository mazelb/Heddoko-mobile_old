#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t1923;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10416_gshared (GenericEqualityComparer_1_t1923 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10416(__this, method) (( void (*) (GenericEqualityComparer_1_t1923 *, MethodInfo*))GenericEqualityComparer_1__ctor_m10416_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19991_gshared (GenericEqualityComparer_1_t1923 * __this, DateTime_t645  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19991(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1923 *, DateTime_t645 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19991_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19992_gshared (GenericEqualityComparer_1_t1923 * __this, DateTime_t645  ___x, DateTime_t645  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19992(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1923 *, DateTime_t645 , DateTime_t645 , MethodInfo*))GenericEqualityComparer_1_Equals_m19992_gshared)(__this, ___x, ___y, method)
