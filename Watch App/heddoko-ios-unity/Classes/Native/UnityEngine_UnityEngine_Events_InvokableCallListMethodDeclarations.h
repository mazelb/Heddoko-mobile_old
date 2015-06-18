#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t984;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t972;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C" void InvokableCallList__ctor_m4610 (InvokableCallList_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m4611 (InvokableCallList_t984 * __this, BaseInvokableCall_t972 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m4612 (InvokableCallList_t984 * __this, BaseInvokableCall_t972 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCallList_RemoveListener_m4613 (InvokableCallList_t984 * __this, Object_t * ___targetObj, MethodInfo_t871 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m4614 (InvokableCallList_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern "C" void InvokableCallList_Invoke_m4615 (InvokableCallList_t984 * __this, ObjectU5BU5D_t137* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
