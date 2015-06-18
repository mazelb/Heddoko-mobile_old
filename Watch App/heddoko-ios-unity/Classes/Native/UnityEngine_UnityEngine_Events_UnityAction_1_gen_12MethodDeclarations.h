#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3097;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m18515_gshared (UnityAction_1_t3097 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define UnityAction_1__ctor_m18515(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3097 *, Object_t *, IntPtr_t98, MethodInfo*))UnityAction_1__ctor_m18515_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m18516_gshared (UnityAction_1_t3097 * __this, int32_t ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m18516(__this, ___arg0, method) (( void (*) (UnityAction_1_t3097 *, int32_t, MethodInfo*))UnityAction_1_Invoke_m18516_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m18517_gshared (UnityAction_1_t3097 * __this, int32_t ___arg0, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m18517(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3097 *, int32_t, AsyncCallback_t266 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m18517_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m18518_gshared (UnityAction_1_t3097 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m18518(__this, ___result, method) (( void (*) (UnityAction_1_t3097 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m18518_gshared)(__this, ___result, method)
