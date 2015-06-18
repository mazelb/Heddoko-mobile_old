#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2651;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2650;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m13845_gshared (ObjectPool_1_t2651 * __this, UnityAction_1_t2650 * ___actionOnGet, UnityAction_1_t2650 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m13845(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2651 *, UnityAction_1_t2650 *, UnityAction_1_t2650 *, MethodInfo*))ObjectPool_1__ctor_m13845_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m13847_gshared (ObjectPool_1_t2651 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m13847(__this, method) (( int32_t (*) (ObjectPool_1_t2651 *, MethodInfo*))ObjectPool_1_get_countAll_m13847_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m13849_gshared (ObjectPool_1_t2651 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m13849(__this, ___value, method) (( void (*) (ObjectPool_1_t2651 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m13849_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m13851_gshared (ObjectPool_1_t2651 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m13851(__this, method) (( int32_t (*) (ObjectPool_1_t2651 *, MethodInfo*))ObjectPool_1_get_countActive_m13851_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m13853_gshared (ObjectPool_1_t2651 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m13853(__this, method) (( int32_t (*) (ObjectPool_1_t2651 *, MethodInfo*))ObjectPool_1_get_countInactive_m13853_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m13855_gshared (ObjectPool_1_t2651 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m13855(__this, method) (( Object_t * (*) (ObjectPool_1_t2651 *, MethodInfo*))ObjectPool_1_Get_m13855_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m13857_gshared (ObjectPool_1_t2651 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m13857(__this, ___element, method) (( void (*) (ObjectPool_1_t2651 *, Object_t *, MethodInfo*))ObjectPool_1_Release_m13857_gshared)(__this, ___element, method)
