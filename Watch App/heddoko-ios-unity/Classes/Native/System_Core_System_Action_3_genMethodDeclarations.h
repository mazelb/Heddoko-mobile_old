#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`3<System.String,System.String,System.String>
struct Action_3_t7;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`3<System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
// System.Action`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Action_3_gen_0MethodDeclarations.h"
#define Action_3__ctor_m12457(__this, ___object, ___method, method) (( void (*) (Action_3_t7 *, Object_t *, IntPtr_t98, MethodInfo*))Action_3__ctor_m12458_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`3<System.String,System.String,System.String>::Invoke(T1,T2,T3)
#define Action_3_Invoke_m159(__this, ___arg1, ___arg2, ___arg3, method) (( void (*) (Action_3_t7 *, String_t*, String_t*, String_t*, MethodInfo*))Action_3_Invoke_m12459_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult System.Action`3<System.String,System.String,System.String>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
#define Action_3_BeginInvoke_m12460(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (( Object_t * (*) (Action_3_t7 *, String_t*, String_t*, String_t*, AsyncCallback_t266 *, Object_t *, MethodInfo*))Action_3_BeginInvoke_m12461_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void System.Action`3<System.String,System.String,System.String>::EndInvoke(System.IAsyncResult)
#define Action_3_EndInvoke_m12462(__this, ___result, method) (( void (*) (Action_3_t7 *, Object_t *, MethodInfo*))Action_3_EndInvoke_m12463_gshared)(__this, ___result, method)
