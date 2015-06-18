#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1928;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m10442_gshared (GenericComparer_1_t1928 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m10442(__this, method) (( void (*) (GenericComparer_1_t1928 *, MethodInfo*))GenericComparer_1__ctor_m10442_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m20039_gshared (GenericComparer_1_t1928 * __this, TimeSpan_t618  ___x, TimeSpan_t618  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m20039(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1928 *, TimeSpan_t618 , TimeSpan_t618 , MethodInfo*))GenericComparer_1_Compare_m20039_gshared)(__this, ___x, ___y, method)
