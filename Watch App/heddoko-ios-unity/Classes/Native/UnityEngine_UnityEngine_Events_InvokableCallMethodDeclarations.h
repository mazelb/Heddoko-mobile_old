#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall
struct InvokableCall_t973;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall__ctor_m4597 (InvokableCall_t973 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m4598 (InvokableCall_t973 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m4599 (InvokableCall_t973 * __this, Object_t * ___targetObj, MethodInfo_t871 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
