﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2751;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t330;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15064_gshared (InvokableCall_1_t2751 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m15064(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2751 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_1__ctor_m15064_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15065_gshared (InvokableCall_1_t2751 * __this, UnityAction_1_t330 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m15065(__this, ___callback, method) (( void (*) (InvokableCall_1_t2751 *, UnityAction_1_t330 *, MethodInfo*))InvokableCall_1__ctor_m15065_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15066_gshared (InvokableCall_1_t2751 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m15066(__this, ___args, method) (( void (*) (InvokableCall_1_t2751 *, ObjectU5BU5D_t137*, MethodInfo*))InvokableCall_1_Invoke_m15066_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15067_gshared (InvokableCall_1_t2751 * __this, Object_t * ___targetObj, MethodInfo_t871 * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m15067(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2751 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_1_Find_m15067_gshared)(__this, ___targetObj, ___method, method)