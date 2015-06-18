#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t928;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m17859(__this, ___object, ___method, method) (( void (*) (Action_1_t928 *, Object_t *, IntPtr_t98, MethodInfo*))Action_1__ctor_m17860_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m5509(__this, ___obj, method) (( void (*) (Action_1_t928 *, bool, MethodInfo*))Action_1_Invoke_m17861_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m17862(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t928 *, bool, AsyncCallback_t266 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m17863_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m17864(__this, ___result, method) (( void (*) (Action_1_t928 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m17865_gshared)(__this, ___result, method)
