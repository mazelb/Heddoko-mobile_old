#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
struct Enumerator_t2564;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2560;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13042_gshared (Enumerator_t2564 * __this, Dictionary_2_t2560 * ___host, MethodInfo* method);
#define Enumerator__ctor_m13042(__this, ___host, method) (( void (*) (Enumerator_t2564 *, Dictionary_2_t2560 *, MethodInfo*))Enumerator__ctor_m13042_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13043_gshared (Enumerator_t2564 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13043(__this, method) (( Object_t * (*) (Enumerator_t2564 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13043_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m13044_gshared (Enumerator_t2564 * __this, MethodInfo* method);
#define Enumerator_Dispose_m13044(__this, method) (( void (*) (Enumerator_t2564 *, MethodInfo*))Enumerator_Dispose_m13044_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13045_gshared (Enumerator_t2564 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m13045(__this, method) (( bool (*) (Enumerator_t2564 *, MethodInfo*))Enumerator_MoveNext_m13045_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" uint8_t Enumerator_get_Current_m13046_gshared (Enumerator_t2564 * __this, MethodInfo* method);
#define Enumerator_get_Current_m13046(__this, method) (( uint8_t (*) (Enumerator_t2564 *, MethodInfo*))Enumerator_get_Current_m13046_gshared)(__this, method)
