#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_t2514;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2509;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12591_gshared (Enumerator_t2514 * __this, Dictionary_2_t2509 * ___host, MethodInfo* method);
#define Enumerator__ctor_m12591(__this, ___host, method) (( void (*) (Enumerator_t2514 *, Dictionary_2_t2509 *, MethodInfo*))Enumerator__ctor_m12591_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12592_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12592(__this, method) (( Object_t * (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12592_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12593_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_Dispose_m12593(__this, method) (( void (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_Dispose_m12593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12594_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m12594(__this, method) (( bool (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_MoveNext_m12594_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m12595_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_get_Current_m12595(__this, method) (( int32_t (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_get_Current_m12595_gshared)(__this, method)
