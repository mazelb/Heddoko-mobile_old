#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2928;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10MethodDeclarations.h"
#define UnityAction_1__ctor_m16879(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2928 *, Object_t *, IntPtr_t98, MethodInfo*))UnityAction_1__ctor_m16871_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
#define UnityAction_1_Invoke_m16880(__this, ___arg0, method) (( void (*) (UnityAction_1_t2928 *, bool, MethodInfo*))UnityAction_1_Invoke_m16872_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m16881(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2928 *, bool, AsyncCallback_t266 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m16873_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m16882(__this, ___result, method) (( void (*) (UnityAction_1_t2928 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m16874_gshared)(__this, ___result, method)
