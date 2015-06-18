#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2542;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2534;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12842_gshared (ShimEnumerator_t2542 * __this, Dictionary_2_t2534 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m12842(__this, ___host, method) (( void (*) (ShimEnumerator_t2542 *, Dictionary_2_t2534 *, MethodInfo*))ShimEnumerator__ctor_m12842_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12843_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m12843(__this, method) (( bool (*) (ShimEnumerator_t2542 *, MethodInfo*))ShimEnumerator_MoveNext_m12843_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t134  ShimEnumerator_get_Entry_m12844_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m12844(__this, method) (( DictionaryEntry_t134  (*) (ShimEnumerator_t2542 *, MethodInfo*))ShimEnumerator_get_Entry_m12844_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12845_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m12845(__this, method) (( Object_t * (*) (ShimEnumerator_t2542 *, MethodInfo*))ShimEnumerator_get_Key_m12845_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12846_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m12846(__this, method) (( Object_t * (*) (ShimEnumerator_t2542 *, MethodInfo*))ShimEnumerator_get_Value_m12846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12847_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m12847(__this, method) (( Object_t * (*) (ShimEnumerator_t2542 *, MethodInfo*))ShimEnumerator_get_Current_m12847_gshared)(__this, method)
