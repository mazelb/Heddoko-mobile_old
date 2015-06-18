#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2539;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2534;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12818_gshared (Enumerator_t2539 * __this, Dictionary_2_t2534 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m12818(__this, ___dictionary, method) (( void (*) (Enumerator_t2539 *, Dictionary_2_t2534 *, MethodInfo*))Enumerator__ctor_m12818_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12819_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12819(__this, method) (( Object_t * (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12819_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t134  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12820_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12820(__this, method) (( DictionaryEntry_t134  (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12820_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12821_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12821(__this, method) (( Object_t * (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12821_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12822_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12822(__this, method) (( Object_t * (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12823_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m12823(__this, method) (( bool (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_MoveNext_m12823_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2535  Enumerator_get_Current_m12824_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_get_Current_m12824(__this, method) (( KeyValuePair_2_t2535  (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_get_Current_m12824_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12825_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m12825(__this, method) (( Object_t * (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_get_CurrentKey_m12825_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12826_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m12826(__this, method) (( Object_t * (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_get_CurrentValue_m12826_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12827_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m12827(__this, method) (( void (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_VerifyState_m12827_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12828_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m12828(__this, method) (( void (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_VerifyCurrent_m12828_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12829_gshared (Enumerator_t2539 * __this, MethodInfo* method);
#define Enumerator_Dispose_m12829(__this, method) (( void (*) (Enumerator_t2539 *, MethodInfo*))Enumerator_Dispose_m12829_gshared)(__this, method)
