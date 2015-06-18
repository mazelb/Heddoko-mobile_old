#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t2926;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m16871_gshared (UnityAction_1_t2926 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define UnityAction_1__ctor_m16871(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2926 *, Object_t *, IntPtr_t98, MethodInfo*))UnityAction_1__ctor_m16871_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m16872_gshared (UnityAction_1_t2926 * __this, uint8_t ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m16872(__this, ___arg0, method) (( void (*) (UnityAction_1_t2926 *, uint8_t, MethodInfo*))UnityAction_1_Invoke_m16872_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Byte>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m16873_gshared (UnityAction_1_t2926 * __this, uint8_t ___arg0, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m16873(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2926 *, uint8_t, AsyncCallback_t266 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m16873_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m16874_gshared (UnityAction_1_t2926 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m16874(__this, ___result, method) (( void (*) (UnityAction_1_t2926 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m16874_gshared)(__this, ___result, method)
