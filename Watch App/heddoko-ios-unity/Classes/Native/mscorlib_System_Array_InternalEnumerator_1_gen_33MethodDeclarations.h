#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
struct InternalEnumerator_1_t2517;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12616_gshared (InternalEnumerator_1_t2517 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m12616(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2517 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m12616_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12617_gshared (InternalEnumerator_1_t2517 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12617(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2517 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12617_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12618_gshared (InternalEnumerator_1_t2517 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12618(__this, method) (( void (*) (InternalEnumerator_1_t2517 *, MethodInfo*))InternalEnumerator_1_Dispose_m12618_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12619_gshared (InternalEnumerator_1_t2517 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12619(__this, method) (( bool (*) (InternalEnumerator_1_t2517 *, MethodInfo*))InternalEnumerator_1_MoveNext_m12619_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t134  InternalEnumerator_1_get_Current_m12620_gshared (InternalEnumerator_1_t2517 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12620(__this, method) (( DictionaryEntry_t134  (*) (InternalEnumerator_1_t2517 *, MethodInfo*))InternalEnumerator_1_get_Current_m12620_gshared)(__this, method)
