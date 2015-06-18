#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2727;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2719;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14821_gshared (ShimEnumerator_t2727 * __this, Dictionary_2_t2719 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m14821(__this, ___host, method) (( void (*) (ShimEnumerator_t2727 *, Dictionary_2_t2719 *, MethodInfo*))ShimEnumerator__ctor_m14821_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14822_gshared (ShimEnumerator_t2727 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m14822(__this, method) (( bool (*) (ShimEnumerator_t2727 *, MethodInfo*))ShimEnumerator_MoveNext_m14822_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t134  ShimEnumerator_get_Entry_m14823_gshared (ShimEnumerator_t2727 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m14823(__this, method) (( DictionaryEntry_t134  (*) (ShimEnumerator_t2727 *, MethodInfo*))ShimEnumerator_get_Entry_m14823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14824_gshared (ShimEnumerator_t2727 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m14824(__this, method) (( Object_t * (*) (ShimEnumerator_t2727 *, MethodInfo*))ShimEnumerator_get_Key_m14824_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14825_gshared (ShimEnumerator_t2727 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m14825(__this, method) (( Object_t * (*) (ShimEnumerator_t2727 *, MethodInfo*))ShimEnumerator_get_Value_m14825_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14826_gshared (ShimEnumerator_t2727 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m14826(__this, method) (( Object_t * (*) (ShimEnumerator_t2727 *, MethodInfo*))ShimEnumerator_get_Current_m14826_gshared)(__this, method)
