#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2724;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2719;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14797_gshared (Enumerator_t2724 * __this, Dictionary_2_t2719 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14797(__this, ___dictionary, method) (( void (*) (Enumerator_t2724 *, Dictionary_2_t2719 *, MethodInfo*))Enumerator__ctor_m14797_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14798_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14798(__this, method) (( Object_t * (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14798_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t134  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14799_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14799(__this, method) (( DictionaryEntry_t134  (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14799_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14800_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14800(__this, method) (( Object_t * (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14800_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14801_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14801(__this, method) (( Object_t * (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14802_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14802(__this, method) (( bool (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_MoveNext_m14802_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2720  Enumerator_get_Current_m14803_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14803(__this, method) (( KeyValuePair_2_t2720  (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_get_Current_m14803_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m14804_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14804(__this, method) (( int32_t (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_get_CurrentKey_m14804_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14805_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14805(__this, method) (( Object_t * (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_get_CurrentValue_m14805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14806_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14806(__this, method) (( void (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_VerifyState_m14806_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14807_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14807(__this, method) (( void (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_VerifyCurrent_m14807_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14808_gshared (Enumerator_t2724 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14808(__this, method) (( void (*) (Enumerator_t2724 *, MethodInfo*))Enumerator_Dispose_m14808_gshared)(__this, method)
