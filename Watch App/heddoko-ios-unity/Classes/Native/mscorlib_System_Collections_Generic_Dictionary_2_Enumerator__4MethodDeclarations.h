#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t2565;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2560;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13047_gshared (Enumerator_t2565 * __this, Dictionary_2_t2560 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m13047(__this, ___dictionary, method) (( void (*) (Enumerator_t2565 *, Dictionary_2_t2560 *, MethodInfo*))Enumerator__ctor_m13047_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13048_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13048(__this, method) (( Object_t * (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13048_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t134  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13049_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13049(__this, method) (( DictionaryEntry_t134  (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13049_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13050_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13050(__this, method) (( Object_t * (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13050_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13051_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13051(__this, method) (( Object_t * (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13051_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13052_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m13052(__this, method) (( bool (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_MoveNext_m13052_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t2561  Enumerator_get_Current_m13053_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_get_Current_m13053(__this, method) (( KeyValuePair_2_t2561  (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_get_Current_m13053_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13054_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m13054(__this, method) (( Object_t * (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_get_CurrentKey_m13054_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m13055_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m13055(__this, method) (( uint8_t (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_get_CurrentValue_m13055_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m13056_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m13056(__this, method) (( void (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_VerifyState_m13056_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13057_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m13057(__this, method) (( void (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_VerifyCurrent_m13057_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m13058_gshared (Enumerator_t2565 * __this, MethodInfo* method);
#define Enumerator_Dispose_m13058(__this, method) (( void (*) (Enumerator_t2565 *, MethodInfo*))Enumerator_Dispose_m13058_gshared)(__this, method)
