#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t2925;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t2926;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t972;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m16861_gshared (UnityEvent_1_t2925 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m16861(__this, method) (( void (*) (UnityEvent_1_t2925 *, MethodInfo*))UnityEvent_1__ctor_m16861_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m16863_gshared (UnityEvent_1_t2925 * __this, UnityAction_1_t2926 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m16863(__this, ___call, method) (( void (*) (UnityEvent_1_t2925 *, UnityAction_1_t2926 *, MethodInfo*))UnityEvent_1_AddListener_m16863_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m16865_gshared (UnityEvent_1_t2925 * __this, UnityAction_1_t2926 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m16865(__this, ___call, method) (( void (*) (UnityEvent_1_t2925 *, UnityAction_1_t2926 *, MethodInfo*))UnityEvent_1_RemoveListener_m16865_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t871 * UnityEvent_1_FindMethod_Impl_m16866_gshared (UnityEvent_1_t2925 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m16866(__this, ___name, ___targetObj, method) (( MethodInfo_t871 * (*) (UnityEvent_1_t2925 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m16866_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m16867_gshared (UnityEvent_1_t2925 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16867(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t972 * (*) (UnityEvent_1_t2925 *, Object_t *, MethodInfo_t871 *, MethodInfo*))UnityEvent_1_GetDelegate_m16867_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t972 * UnityEvent_1_GetDelegate_m16869_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2926 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16869(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t972 * (*) (Object_t * /* static, unused */, UnityAction_1_t2926 *, MethodInfo*))UnityEvent_1_GetDelegate_m16869_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m16870_gshared (UnityEvent_1_t2925 * __this, uint8_t ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m16870(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2925 *, uint8_t, MethodInfo*))UnityEvent_1_Invoke_m16870_gshared)(__this, ___arg0, method)
