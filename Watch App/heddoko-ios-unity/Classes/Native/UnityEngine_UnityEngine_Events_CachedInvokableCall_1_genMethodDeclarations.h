#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t1127;
// UnityEngine.Object
struct Object_t50;
struct Object_t50_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m5548_gshared (CachedInvokableCall_1_t1127 * __this, Object_t50 * ___target, MethodInfo_t871 * ___theFunction, float ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m5548(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1127 *, Object_t50 *, MethodInfo_t871 *, float, MethodInfo*))CachedInvokableCall_1__ctor_m5548_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18509_gshared (CachedInvokableCall_1_t1127 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18509(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1127 *, ObjectU5BU5D_t137*, MethodInfo*))CachedInvokableCall_1_Invoke_m18509_gshared)(__this, ___args, method)
