#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t2927;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t2926;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m16875_gshared (InvokableCall_1_t2927 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m16875(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2927 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_1__ctor_m16875_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m16876_gshared (InvokableCall_1_t2927 * __this, UnityAction_1_t2926 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m16876(__this, ___callback, method) (( void (*) (InvokableCall_1_t2927 *, UnityAction_1_t2926 *, MethodInfo*))InvokableCall_1__ctor_m16876_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m16877_gshared (InvokableCall_1_t2927 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m16877(__this, ___args, method) (( void (*) (InvokableCall_1_t2927 *, ObjectU5BU5D_t137*, MethodInfo*))InvokableCall_1_Invoke_m16877_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m16878_gshared (InvokableCall_1_t2927 * __this, Object_t * ___targetObj, MethodInfo_t871 * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m16878(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2927 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_1_Find_m16878_gshared)(__this, ___targetObj, ___method, method)
