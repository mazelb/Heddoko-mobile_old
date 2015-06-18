#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3266;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m19989_gshared (DefaultComparer_t3266 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19989(__this, method) (( void (*) (DefaultComparer_t3266 *, MethodInfo*))DefaultComparer__ctor_m19989_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m19990_gshared (DefaultComparer_t3266 * __this, DateTime_t645  ___x, DateTime_t645  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m19990(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3266 *, DateTime_t645 , DateTime_t645 , MethodInfo*))DefaultComparer_Compare_m19990_gshared)(__this, ___x, ___y, method)
