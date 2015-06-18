#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t328;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t330;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t972;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m2417_gshared (UnityEvent_1_t328 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m2417(__this, method) (( void (*) (UnityEvent_1_t328 *, MethodInfo*))UnityEvent_1__ctor_m2417_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2420_gshared (UnityEvent_1_t328 * __this, UnityAction_1_t330 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m2420(__this, ___call, method) (( void (*) (UnityEvent_1_t328 *, UnityAction_1_t330 *, MethodInfo*))UnityEvent_1_AddListener_m2420_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m15059_gshared (UnityEvent_1_t328 * __this, UnityAction_1_t330 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m15059(__this, ___call, method) (( void (*) (UnityEvent_1_t328 *, UnityAction_1_t330 *, MethodInfo*))UnityEvent_1_RemoveListener_m15059_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t871 * UnityEvent_1_FindMethod_Impl_m2873_gshared (UnityEvent_1_t328 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2873(__this, ___name, ___targetObj, method) (( MethodInfo_t871 * (*) (UnityEvent_1_t328 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m2873_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m2874_gshared (UnityEvent_1_t328 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2874(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t972 * (*) (UnityEvent_1_t328 *, Object_t *, MethodInfo_t871 *, MethodInfo*))UnityEvent_1_GetDelegate_m2874_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m15060_gshared (Object_t * __this /* static, unused */, UnityAction_1_t330 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15060(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t972 * (*) (Object_t * /* static, unused */, UnityAction_1_t330 *, MethodInfo*))UnityEvent_1_GetDelegate_m15060_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2419_gshared (UnityEvent_1_t328 * __this, Color_t29  ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m2419(__this, ___arg0, method) (( void (*) (UnityEvent_1_t328 *, Color_t29 , MethodInfo*))UnityEvent_1_Invoke_m2419_gshared)(__this, ___arg0, method)
