﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2568;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2560;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13071_gshared (ShimEnumerator_t2568 * __this, Dictionary_2_t2560 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m13071(__this, ___host, method) (( void (*) (ShimEnumerator_t2568 *, Dictionary_2_t2560 *, MethodInfo*))ShimEnumerator__ctor_m13071_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13072_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m13072(__this, method) (( bool (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_MoveNext_m13072_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t134  ShimEnumerator_get_Entry_m13073_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m13073(__this, method) (( DictionaryEntry_t134  (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_get_Entry_m13073_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13074_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m13074(__this, method) (( Object_t * (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_get_Key_m13074_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13075_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m13075(__this, method) (( Object_t * (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_get_Value_m13075_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13076_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m13076(__this, method) (( Object_t * (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_get_Current_m13076_gshared)(__this, method)
