#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
struct CachedInvokableCall_1_t3098;
// UnityEngine.Object
struct Object_t50;
struct Object_t50_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m18520_gshared (CachedInvokableCall_1_t3098 * __this, Object_t50 * ___target, MethodInfo_t871 * ___theFunction, uint8_t ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m18520(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t3098 *, Object_t50 *, MethodInfo_t871 *, uint8_t, MethodInfo*))CachedInvokableCall_1__ctor_m18520_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18522_gshared (CachedInvokableCall_1_t3098 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18522(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t3098 *, ObjectU5BU5D_t137*, MethodInfo*))CachedInvokableCall_1_Invoke_m18522_gshared)(__this, ___args, method)
