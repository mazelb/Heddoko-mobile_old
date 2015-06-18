#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t3247;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19801_gshared (InternalEnumerator_1_t3247 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m19801(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3247 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m19801_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19802_gshared (InternalEnumerator_1_t3247 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19802(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3247 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19802_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19803_gshared (InternalEnumerator_1_t3247 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19803(__this, method) (( void (*) (InternalEnumerator_1_t3247 *, MethodInfo*))InternalEnumerator_1_Dispose_m19803_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19804_gshared (InternalEnumerator_1_t3247 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19804(__this, method) (( bool (*) (InternalEnumerator_1_t3247 *, MethodInfo*))InternalEnumerator_1_MoveNext_m19804_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t618  InternalEnumerator_1_get_Current_m19805_gshared (InternalEnumerator_1_t3247 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19805(__this, method) (( TimeSpan_t618  (*) (InternalEnumerator_1_t3247 *, MethodInfo*))InternalEnumerator_1_get_Current_m19805_gshared)(__this, method)
