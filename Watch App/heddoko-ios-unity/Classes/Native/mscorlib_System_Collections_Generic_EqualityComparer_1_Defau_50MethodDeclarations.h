#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3280;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20053_gshared (DefaultComparer_t3280 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m20053(__this, method) (( void (*) (DefaultComparer_t3280 *, MethodInfo*))DefaultComparer__ctor_m20053_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20054_gshared (DefaultComparer_t3280 * __this, TimeSpan_t618  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m20054(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3280 *, TimeSpan_t618 , MethodInfo*))DefaultComparer_GetHashCode_m20054_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20055_gshared (DefaultComparer_t3280 * __this, TimeSpan_t618  ___x, TimeSpan_t618  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m20055(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3280 *, TimeSpan_t618 , TimeSpan_t618 , MethodInfo*))DefaultComparer_Equals_m20055_gshared)(__this, ___x, ___y, method)
