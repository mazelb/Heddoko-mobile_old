#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2700;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2650;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t972;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m14473_gshared (UnityEvent_1_t2700 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m14473(__this, method) (( void (*) (UnityEvent_1_t2700 *, MethodInfo*))UnityEvent_1__ctor_m14473_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m14475_gshared (UnityEvent_1_t2700 * __this, UnityAction_1_t2650 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m14475(__this, ___call, method) (( void (*) (UnityEvent_1_t2700 *, UnityAction_1_t2650 *, MethodInfo*))UnityEvent_1_AddListener_m14475_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m14477_gshared (UnityEvent_1_t2700 * __this, UnityAction_1_t2650 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m14477(__this, ___call, method) (( void (*) (UnityEvent_1_t2700 *, UnityAction_1_t2650 *, MethodInfo*))UnityEvent_1_RemoveListener_m14477_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t871 * UnityEvent_1_FindMethod_Impl_m14478_gshared (UnityEvent_1_t2700 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m14478(__this, ___name, ___targetObj, method) (( MethodInfo_t871 * (*) (UnityEvent_1_t2700 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m14478_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m14479_gshared (UnityEvent_1_t2700 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14479(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t972 * (*) (UnityEvent_1_t2700 *, Object_t *, MethodInfo_t871 *, MethodInfo*))UnityEvent_1_GetDelegate_m14479_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m14481_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2650 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14481(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t972 * (*) (Object_t * /* static, unused */, UnityAction_1_t2650 *, MethodInfo*))UnityEvent_1_GetDelegate_m14481_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m14482_gshared (UnityEvent_1_t2700 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m14482(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2700 *, Object_t *, MethodInfo*))UnityEvent_1_Invoke_m14482_gshared)(__this, ___arg0, method)
