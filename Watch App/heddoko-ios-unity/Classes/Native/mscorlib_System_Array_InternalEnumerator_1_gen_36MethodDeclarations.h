#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct InternalEnumerator_1_t2544;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12854_gshared (InternalEnumerator_1_t2544 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m12854(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2544 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m12854_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12855_gshared (InternalEnumerator_1_t2544 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12855(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2544 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12855_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12856_gshared (InternalEnumerator_1_t2544 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12856(__this, method) (( void (*) (InternalEnumerator_1_t2544 *, MethodInfo*))InternalEnumerator_1_Dispose_m12856_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12857_gshared (InternalEnumerator_1_t2544 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12857(__this, method) (( bool (*) (InternalEnumerator_1_t2544 *, MethodInfo*))InternalEnumerator_1_MoveNext_m12857_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current()
extern "C" KeyValuePair_2_t2543  InternalEnumerator_1_get_Current_m12858_gshared (InternalEnumerator_1_t2544 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12858(__this, method) (( KeyValuePair_2_t2543  (*) (InternalEnumerator_1_t2544 *, MethodInfo*))InternalEnumerator_1_get_Current_m12858_gshared)(__this, method)
