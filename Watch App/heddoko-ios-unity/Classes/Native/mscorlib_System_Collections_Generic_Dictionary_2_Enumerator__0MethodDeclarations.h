#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2515;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2509;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12596_gshared (Enumerator_t2515 * __this, Dictionary_2_t2509 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m12596(__this, ___dictionary, method) (( void (*) (Enumerator_t2515 *, Dictionary_2_t2509 *, MethodInfo*))Enumerator__ctor_m12596_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12597_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12597(__this, method) (( Object_t * (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12597_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t134  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12598_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12598(__this, method) (( DictionaryEntry_t134  (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12598_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12599_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12599(__this, method) (( Object_t * (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12600_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12600(__this, method) (( Object_t * (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12600_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12601_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m12601(__this, method) (( bool (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_MoveNext_m12601_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2510  Enumerator_get_Current_m12602_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_get_Current_m12602(__this, method) (( KeyValuePair_2_t2510  (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_get_Current_m12602_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12603_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m12603(__this, method) (( Object_t * (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_get_CurrentKey_m12603_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12604_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m12604(__this, method) (( int32_t (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_get_CurrentValue_m12604_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12605_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m12605(__this, method) (( void (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_VerifyState_m12605_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12606_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m12606(__this, method) (( void (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_VerifyCurrent_m12606_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12607_gshared (Enumerator_t2515 * __this, MethodInfo* method);
#define Enumerator_Dispose_m12607(__this, method) (( void (*) (Enumerator_t2515 *, MethodInfo*))Enumerator_Dispose_m12607_gshared)(__this, method)
