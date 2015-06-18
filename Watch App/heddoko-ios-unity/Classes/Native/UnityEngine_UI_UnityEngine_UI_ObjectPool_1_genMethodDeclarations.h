#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t284;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t286;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t306;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2303(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t284 *, UnityAction_1_t286 *, UnityAction_1_t286 *, MethodInfo*))ObjectPool_1__ctor_m13845_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m13846(__this, method) (( int32_t (*) (ObjectPool_1_t284 *, MethodInfo*))ObjectPool_1_get_countAll_m13847_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m13848(__this, ___value, method) (( void (*) (ObjectPool_1_t284 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m13849_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m13850(__this, method) (( int32_t (*) (ObjectPool_1_t284 *, MethodInfo*))ObjectPool_1_get_countActive_m13851_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m13852(__this, method) (( int32_t (*) (ObjectPool_1_t284 *, MethodInfo*))ObjectPool_1_get_countInactive_m13853_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m13854(__this, method) (( List_1_t306 * (*) (ObjectPool_1_t284 *, MethodInfo*))ObjectPool_1_Get_m13855_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m13856(__this, ___element, method) (( void (*) (ObjectPool_1_t284 *, List_1_t306 *, MethodInfo*))ObjectPool_1_Release_m13857_gshared)(__this, ___element, method)
