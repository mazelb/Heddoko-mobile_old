#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>
struct DefaultComparer_t2616;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::.ctor()
extern "C" void DefaultComparer__ctor_m13505_gshared (DefaultComparer_t2616 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m13505(__this, method) (( void (*) (DefaultComparer_t2616 *, MethodInfo*))DefaultComparer__ctor_m13505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13506_gshared (DefaultComparer_t2616 * __this, float ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m13506(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2616 *, float, MethodInfo*))DefaultComparer_GetHashCode_m13506_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13507_gshared (DefaultComparer_t2616 * __this, float ___x, float ___y, MethodInfo* method);
#define DefaultComparer_Equals_m13507(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2616 *, float, float, MethodInfo*))DefaultComparer_Equals_m13507_gshared)(__this, ___x, ___y, method)
