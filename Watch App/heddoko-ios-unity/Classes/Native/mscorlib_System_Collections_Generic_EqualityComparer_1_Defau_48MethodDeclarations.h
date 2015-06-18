#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3272;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m20015_gshared (DefaultComparer_t3272 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m20015(__this, method) (( void (*) (DefaultComparer_t3272 *, MethodInfo*))DefaultComparer__ctor_m20015_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20016_gshared (DefaultComparer_t3272 * __this, DateTimeOffset_t1788  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m20016(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3272 *, DateTimeOffset_t1788 , MethodInfo*))DefaultComparer_GetHashCode_m20016_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20017_gshared (DefaultComparer_t3272 * __this, DateTimeOffset_t1788  ___x, DateTimeOffset_t1788  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m20017(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3272 *, DateTimeOffset_t1788 , DateTimeOffset_t1788 , MethodInfo*))DefaultComparer_Equals_m20017_gshared)(__this, ___x, ___y, method)
