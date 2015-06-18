#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3274;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m20027_gshared (DefaultComparer_t3274 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m20027(__this, method) (( void (*) (DefaultComparer_t3274 *, MethodInfo*))DefaultComparer__ctor_m20027_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m20028_gshared (DefaultComparer_t3274 * __this, Guid_t1811  ___x, Guid_t1811  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m20028(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3274 *, Guid_t1811 , Guid_t1811 , MethodInfo*))DefaultComparer_Compare_m20028_gshared)(__this, ___x, ___y, method)
