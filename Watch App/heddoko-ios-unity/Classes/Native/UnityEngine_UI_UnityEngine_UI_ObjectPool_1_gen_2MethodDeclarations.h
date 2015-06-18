#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t469;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t470;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t458;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2829(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t469 *, UnityAction_1_t470 *, UnityAction_1_t470 *, MethodInfo*))ObjectPool_1__ctor_m13845_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m17243(__this, method) (( int32_t (*) (ObjectPool_1_t469 *, MethodInfo*))ObjectPool_1_get_countAll_m13847_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m17244(__this, ___value, method) (( void (*) (ObjectPool_1_t469 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m13849_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m17245(__this, method) (( int32_t (*) (ObjectPool_1_t469 *, MethodInfo*))ObjectPool_1_get_countActive_m13851_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m17246(__this, method) (( int32_t (*) (ObjectPool_1_t469 *, MethodInfo*))ObjectPool_1_get_countInactive_m13853_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2831(__this, method) (( List_1_t458 * (*) (ObjectPool_1_t469 *, MethodInfo*))ObjectPool_1_Get_m13855_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2832(__this, ___element, method) (( void (*) (ObjectPool_1_t469 *, List_1_t458 *, MethodInfo*))ObjectPool_1_Release_m13857_gshared)(__this, ___element, method)
