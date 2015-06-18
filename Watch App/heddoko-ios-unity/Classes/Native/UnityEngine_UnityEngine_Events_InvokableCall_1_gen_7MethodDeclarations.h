#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t3096;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3097;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m18511_gshared (InvokableCall_1_t3096 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m18511(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3096 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_1__ctor_m18511_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m18512_gshared (InvokableCall_1_t3096 * __this, UnityAction_1_t3097 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m18512(__this, ___callback, method) (( void (*) (InvokableCall_1_t3096 *, UnityAction_1_t3097 *, MethodInfo*))InvokableCall_1__ctor_m18512_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m18513_gshared (InvokableCall_1_t3096 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m18513(__this, ___args, method) (( void (*) (InvokableCall_1_t3096 *, ObjectU5BU5D_t137*, MethodInfo*))InvokableCall_1_Invoke_m18513_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m18514_gshared (InvokableCall_1_t3096 * __this, Object_t * ___targetObj, MethodInfo_t871 * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m18514(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3096 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_1_Find_m18514_gshared)(__this, ___targetObj, ___method, method)
