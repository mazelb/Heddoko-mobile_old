#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2701;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2650;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14483_gshared (InvokableCall_1_t2701 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m14483(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2701 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_1__ctor_m14483_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14484_gshared (InvokableCall_1_t2701 * __this, UnityAction_1_t2650 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m14484(__this, ___callback, method) (( void (*) (InvokableCall_1_t2701 *, UnityAction_1_t2650 *, MethodInfo*))InvokableCall_1__ctor_m14484_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14485_gshared (InvokableCall_1_t2701 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m14485(__this, ___args, method) (( void (*) (InvokableCall_1_t2701 *, ObjectU5BU5D_t137*, MethodInfo*))InvokableCall_1_Invoke_m14485_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14486_gshared (InvokableCall_1_t2701 * __this, Object_t * ___targetObj, MethodInfo_t871 * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m14486(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2701 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_1_Find_m14486_gshared)(__this, ___targetObj, ___method, method)
