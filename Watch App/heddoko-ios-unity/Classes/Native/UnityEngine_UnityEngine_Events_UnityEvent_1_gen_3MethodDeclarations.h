#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t412;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2879;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t972;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m2683_gshared (UnityEvent_1_t412 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m2683(__this, method) (( void (*) (UnityEvent_1_t412 *, MethodInfo*))UnityEvent_1__ctor_m2683_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m16376_gshared (UnityEvent_1_t412 * __this, UnityAction_1_t2879 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m16376(__this, ___call, method) (( void (*) (UnityEvent_1_t412 *, UnityAction_1_t2879 *, MethodInfo*))UnityEvent_1_AddListener_m16376_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m16377_gshared (UnityEvent_1_t412 * __this, UnityAction_1_t2879 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m16377(__this, ___call, method) (( void (*) (UnityEvent_1_t412 *, UnityAction_1_t2879 *, MethodInfo*))UnityEvent_1_RemoveListener_m16377_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t871 * UnityEvent_1_FindMethod_Impl_m2898_gshared (UnityEvent_1_t412 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2898(__this, ___name, ___targetObj, method) (( MethodInfo_t871 * (*) (UnityEvent_1_t412 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m2898_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m2899_gshared (UnityEvent_1_t412 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2899(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t972 * (*) (UnityEvent_1_t412 *, Object_t *, MethodInfo_t871 *, MethodInfo*))UnityEvent_1_GetDelegate_m2899_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m16378_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2879 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16378(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t972 * (*) (Object_t * /* static, unused */, UnityAction_1_t2879 *, MethodInfo*))UnityEvent_1_GetDelegate_m16378_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2706_gshared (UnityEvent_1_t412 * __this, Vector2_t32  ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m2706(__this, ___arg0, method) (( void (*) (UnityEvent_1_t412 *, Vector2_t32 , MethodInfo*))UnityEvent_1_Invoke_m2706_gshared)(__this, ___arg0, method)
