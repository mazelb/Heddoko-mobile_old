#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t3094;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Object[]
struct ObjectU5BU5D_t137;

// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_4__ctor_m18500_gshared (InvokableCall_4_t3094 * __this, Object_t * ___target, MethodInfo_t871 * ___theFunction, MethodInfo* method);
#define InvokableCall_4__ctor_m18500(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_4_t3094 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_4__ctor_m18500_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_4_Invoke_m18501_gshared (InvokableCall_4_t3094 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method);
#define InvokableCall_4_Invoke_m18501(__this, ___args, method) (( void (*) (InvokableCall_4_t3094 *, ObjectU5BU5D_t137*, MethodInfo*))InvokableCall_4_Invoke_m18501_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m18502_gshared (InvokableCall_4_t3094 * __this, Object_t * ___targetObj, MethodInfo_t871 * ___method, MethodInfo* method);
#define InvokableCall_4_Find_m18502(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_4_t3094 *, Object_t *, MethodInfo_t871 *, MethodInfo*))InvokableCall_4_Find_m18502_gshared)(__this, ___targetObj, ___method, method)
