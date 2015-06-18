#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t430;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2928;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t972;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6MethodDeclarations.h"
#define UnityEvent_1__ctor_m2754(__this, method) (( void (*) (UnityEvent_1_t430 *, MethodInfo*))UnityEvent_1__ctor_m16861_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m16862(__this, ___call, method) (( void (*) (UnityEvent_1_t430 *, UnityAction_1_t2928 *, MethodInfo*))UnityEvent_1_AddListener_m16863_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m16864(__this, ___call, method) (( void (*) (UnityEvent_1_t430 *, UnityAction_1_t2928 *, MethodInfo*))UnityEvent_1_RemoveListener_m16865_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m2905(__this, ___name, ___targetObj, method) (( MethodInfo_t871 * (*) (UnityEvent_1_t430 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m16866_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m2906(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t972 * (*) (UnityEvent_1_t430 *, Object_t *, MethodInfo_t871 *, MethodInfo*))UnityEvent_1_GetDelegate_m16867_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m16868(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t972 * (*) (Object_t * /* static, unused */, UnityAction_1_t2928 *, MethodInfo*))UnityEvent_1_GetDelegate_m16869_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
#define UnityEvent_1_Invoke_m2755(__this, ___arg0, method) (( void (*) (UnityEvent_1_t430 *, bool, MethodInfo*))UnityEvent_1_Invoke_m16870_gshared)(__this, ___arg0, method)
