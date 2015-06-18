#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t3109;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t980;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m18664(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3109 *, Object_t *, IntPtr_t98, MethodInfo*))Comparison_1__ctor_m12172_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m18665(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3109 *, PersistentCall_t980 *, PersistentCall_t980 *, MethodInfo*))Comparison_1_Invoke_m12173_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m18666(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3109 *, PersistentCall_t980 *, PersistentCall_t980 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m12174_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m18667(__this, ___result, method) (( int32_t (*) (Comparison_1_t3109 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m12175_gshared)(__this, ___result, method)
