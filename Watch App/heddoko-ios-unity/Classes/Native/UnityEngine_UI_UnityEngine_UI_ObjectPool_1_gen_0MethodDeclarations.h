#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t353;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t359;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t361;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2462(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t353 *, UnityAction_1_t359 *, UnityAction_1_t359 *, MethodInfo*))ObjectPool_1__ctor_m13845_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m15642(__this, method) (( int32_t (*) (ObjectPool_1_t353 *, MethodInfo*))ObjectPool_1_get_countAll_m13847_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15643(__this, ___value, method) (( void (*) (ObjectPool_1_t353 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m13849_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m15644(__this, method) (( int32_t (*) (ObjectPool_1_t353 *, MethodInfo*))ObjectPool_1_get_countActive_m13851_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15645(__this, method) (( int32_t (*) (ObjectPool_1_t353 *, MethodInfo*))ObjectPool_1_get_countInactive_m13853_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m2495(__this, method) (( List_1_t361 * (*) (ObjectPool_1_t353 *, MethodInfo*))ObjectPool_1_Get_m13855_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m2496(__this, ___element, method) (( void (*) (ObjectPool_1_t353 *, List_1_t361 *, MethodInfo*))ObjectPool_1_Release_m13857_gshared)(__this, ___element, method)
