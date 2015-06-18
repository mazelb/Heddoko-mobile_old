#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`2<System.String,System.String>
struct Action_2_t6;
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

// System.Void System.Action`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
// System.Action`2<System.Object,System.Object>
#include "System_Core_System_Action_2_gen_1MethodDeclarations.h"
#define Action_2__ctor_m12450(__this, ___object, ___method, method) (( void (*) (Action_2_t6 *, Object_t *, IntPtr_t98, MethodInfo*))Action_2__ctor_m12451_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.String,System.String>::Invoke(T1,T2)
#define Action_2_Invoke_m155(__this, ___arg1, ___arg2, method) (( void (*) (Action_2_t6 *, String_t*, String_t*, MethodInfo*))Action_2_Invoke_m12452_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.String,System.String>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
#define Action_2_BeginInvoke_m12453(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Action_2_t6 *, String_t*, String_t*, AsyncCallback_t266 *, Object_t *, MethodInfo*))Action_2_BeginInvoke_m12454_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.String,System.String>::EndInvoke(System.IAsyncResult)
#define Action_2_EndInvoke_m12455(__this, ___result, method) (( void (*) (Action_2_t6 *, Object_t *, MethodInfo*))Action_2_EndInvoke_m12456_gshared)(__this, ___result, method)
