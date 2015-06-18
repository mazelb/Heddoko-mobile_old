#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t1128;
// UnityEngine.Object
struct Object_t50;
struct Object_t50_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m5549_gshared (CachedInvokableCall_1_t1128 * __this, Object_t50 * ___target, MethodInfo_t871 * ___theFunction, int32_t ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m5549(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1128 *, Object_t50 *, MethodInfo_t871 *, int32_t, MethodInfo*))CachedInvokableCall_1__ctor_m5549_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18510_gshared (CachedInvokableCall_1_t1128 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18510(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1128 *, ObjectU5BU5D_t137*, MethodInfo*))CachedInvokableCall_1_Invoke_m18510_gshared)(__this, ___args, method)
