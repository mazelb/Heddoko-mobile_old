#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`2<System.Object,System.Object>
struct Action_2_t2501;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_2__ctor_m12451_gshared (Action_2_t2501 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Action_2__ctor_m12451(__this, ___object, ___method, method) (( void (*) (Action_2_t2501 *, Object_t *, IntPtr_t98, MethodInfo*))Action_2__ctor_m12451_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void Action_2_Invoke_m12452_gshared (Action_2_t2501 * __this, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
#define Action_2_Invoke_m12452(__this, ___arg1, ___arg2, method) (( void (*) (Action_2_t2501 *, Object_t *, Object_t *, MethodInfo*))Action_2_Invoke_m12452_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_2_BeginInvoke_m12454_gshared (Action_2_t2501 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_2_BeginInvoke_m12454(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Action_2_t2501 *, Object_t *, Object_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Action_2_BeginInvoke_m12454_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_2_EndInvoke_m12456_gshared (Action_2_t2501 * __this, Object_t * ___result, MethodInfo* method);
#define Action_2_EndInvoke_m12456(__this, ___result, method) (( void (*) (Action_2_t2501 *, Object_t *, MethodInfo*))Action_2_EndInvoke_m12456_gshared)(__this, ___result, method)
