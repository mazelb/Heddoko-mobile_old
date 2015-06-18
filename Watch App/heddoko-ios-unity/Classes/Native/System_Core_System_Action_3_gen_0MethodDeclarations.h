#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_t2502;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_3__ctor_m12458_gshared (Action_3_t2502 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Action_3__ctor_m12458(__this, ___object, ___method, method) (( void (*) (Action_3_t2502 *, Object_t *, IntPtr_t98, MethodInfo*))Action_3__ctor_m12458_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
extern "C" void Action_3_Invoke_m12459_gshared (Action_3_t2502 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
#define Action_3_Invoke_m12459(__this, ___arg1, ___arg2, ___arg3, method) (( void (*) (Action_3_t2502 *, Object_t *, Object_t *, Object_t *, MethodInfo*))Action_3_Invoke_m12459_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult System.Action`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_3_BeginInvoke_m12461_gshared (Action_3_t2502 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_3_BeginInvoke_m12461(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (( Object_t * (*) (Action_3_t2502 *, Object_t *, Object_t *, Object_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Action_3_BeginInvoke_m12461_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void System.Action`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_3_EndInvoke_m12463_gshared (Action_3_t2502 * __this, Object_t * ___result, MethodInfo* method);
#define Action_3_EndInvoke_m12463(__this, ___result, method) (( void (*) (Action_3_t2502 *, Object_t *, MethodInfo*))Action_3_EndInvoke_m12463_gshared)(__this, ___result, method)
