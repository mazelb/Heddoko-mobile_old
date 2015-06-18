#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t1926;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m10428_gshared (GenericComparer_1_t1926 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m10428(__this, method) (( void (*) (GenericComparer_1_t1926 *, MethodInfo*))GenericComparer_1__ctor_m10428_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m20022_gshared (GenericComparer_1_t1926 * __this, Guid_t1811  ___x, Guid_t1811  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m20022(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1926 *, Guid_t1811 , Guid_t1811 , MethodInfo*))GenericComparer_1_Compare_m20022_gshared)(__this, ___x, ___y, method)
