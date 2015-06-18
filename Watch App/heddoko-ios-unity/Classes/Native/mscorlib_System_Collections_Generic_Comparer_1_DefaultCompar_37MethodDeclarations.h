#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3278;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20044_gshared (DefaultComparer_t3278 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m20044(__this, method) (( void (*) (DefaultComparer_t3278 *, MethodInfo*))DefaultComparer__ctor_m20044_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m20045_gshared (DefaultComparer_t3278 * __this, TimeSpan_t618  ___x, TimeSpan_t618  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m20045(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3278 *, TimeSpan_t618 , TimeSpan_t618 , MethodInfo*))DefaultComparer_Compare_m20045_gshared)(__this, ___x, ___y, method)
