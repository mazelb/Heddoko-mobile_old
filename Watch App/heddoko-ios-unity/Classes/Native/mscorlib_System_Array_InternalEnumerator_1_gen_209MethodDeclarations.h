#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t3241;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19771_gshared (InternalEnumerator_1_t3241 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m19771(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3241 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m19771_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19772_gshared (InternalEnumerator_1_t3241 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19772(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3241 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19772_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19773_gshared (InternalEnumerator_1_t3241 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19773(__this, method) (( void (*) (InternalEnumerator_1_t3241 *, MethodInfo*))InternalEnumerator_1_Dispose_m19773_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19774_gshared (InternalEnumerator_1_t3241 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19774(__this, method) (( bool (*) (InternalEnumerator_1_t3241 *, MethodInfo*))InternalEnumerator_1_MoveNext_m19774_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t645  InternalEnumerator_1_get_Current_m19775_gshared (InternalEnumerator_1_t3241 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19775(__this, method) (( DateTime_t645  (*) (InternalEnumerator_1_t3241 *, MethodInfo*))InternalEnumerator_1_get_Current_m19775_gshared)(__this, method)
