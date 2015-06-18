#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2519;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2509;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12625_gshared (ShimEnumerator_t2519 * __this, Dictionary_2_t2509 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m12625(__this, ___host, method) (( void (*) (ShimEnumerator_t2519 *, Dictionary_2_t2509 *, MethodInfo*))ShimEnumerator__ctor_m12625_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12626_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m12626(__this, method) (( bool (*) (ShimEnumerator_t2519 *, MethodInfo*))ShimEnumerator_MoveNext_m12626_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t134  ShimEnumerator_get_Entry_m12627_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m12627(__this, method) (( DictionaryEntry_t134  (*) (ShimEnumerator_t2519 *, MethodInfo*))ShimEnumerator_get_Entry_m12627_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12628_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m12628(__this, method) (( Object_t * (*) (ShimEnumerator_t2519 *, MethodInfo*))ShimEnumerator_get_Key_m12628_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12629_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m12629(__this, method) (( Object_t * (*) (ShimEnumerator_t2519 *, MethodInfo*))ShimEnumerator_get_Value_m12629_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12630_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m12630(__this, method) (( Object_t * (*) (ShimEnumerator_t2519 *, MethodInfo*))ShimEnumerator_get_Current_m12630_gshared)(__this, method)
