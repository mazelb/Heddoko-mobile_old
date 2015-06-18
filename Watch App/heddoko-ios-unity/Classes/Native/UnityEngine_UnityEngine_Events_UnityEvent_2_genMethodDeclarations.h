#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t3121;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t972;

// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_2__ctor_m18808_gshared (UnityEvent_2_t3121 * __this, MethodInfo* method);
#define UnityEvent_2__ctor_m18808(__this, method) (( void (*) (UnityEvent_2_t3121 *, MethodInfo*))UnityEvent_2__ctor_m18808_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t871 * UnityEvent_2_FindMethod_Impl_m18809_gshared (UnityEvent_2_t3121 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m18809(__this, ___name, ___targetObj, method) (( MethodInfo_t871 * (*) (UnityEvent_2_t3121 *, String_t*, Object_t *, MethodInfo*))UnityEvent_2_FindMethod_Impl_m18809_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t972 * UnityEvent_2_GetDelegate_m18810_gshared (UnityEvent_2_t3121 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define UnityEvent_2_GetDelegate_m18810(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t972 * (*) (UnityEvent_2_t3121 *, Object_t *, MethodInfo_t871 *, MethodInfo*))UnityEvent_2_GetDelegate_m18810_gshared)(__this, ___target, ___theFunction, method)
