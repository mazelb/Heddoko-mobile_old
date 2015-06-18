#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t405;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t518;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t972;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m2671_gshared (UnityEvent_1_t405 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m2671(__this, method) (( void (*) (UnityEvent_1_t405 *, MethodInfo*))UnityEvent_1__ctor_m2671_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2705_gshared (UnityEvent_1_t405 * __this, UnityAction_1_t518 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m2705(__this, ___call, method) (( void (*) (UnityEvent_1_t405 *, UnityAction_1_t518 *, MethodInfo*))UnityEvent_1_AddListener_m2705_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m2704_gshared (UnityEvent_1_t405 * __this, UnityAction_1_t518 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2704(__this, ___call, method) (( void (*) (UnityEvent_1_t405 *, UnityAction_1_t518 *, MethodInfo*))UnityEvent_1_RemoveListener_m2704_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t871 * UnityEvent_1_FindMethod_Impl_m2895_gshared (UnityEvent_1_t405 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2895(__this, ___name, ___targetObj, method) (( MethodInfo_t871 * (*) (UnityEvent_1_t405 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m2895_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m2896_gshared (UnityEvent_1_t405 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2896(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t972 * (*) (UnityEvent_1_t405 *, Object_t *, MethodInfo_t871 *, MethodInfo*))UnityEvent_1_GetDelegate_m2896_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m16368_gshared (Object_t * __this /* static, unused */, UnityAction_1_t518 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16368(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t972 * (*) (Object_t * /* static, unused */, UnityAction_1_t518 *, MethodInfo*))UnityEvent_1_GetDelegate_m16368_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2682_gshared (UnityEvent_1_t405 * __this, float ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m2682(__this, ___arg0, method) (( void (*) (UnityEvent_1_t405 *, float, MethodInfo*))UnityEvent_1_Invoke_m2682_gshared)(__this, ___arg0, method)
