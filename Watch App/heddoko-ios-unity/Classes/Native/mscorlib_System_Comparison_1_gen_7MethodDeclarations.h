#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Single>
struct Comparison_1_t2620;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m13518_gshared (Comparison_1_t2620 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Comparison_1__ctor_m13518(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2620 *, Object_t *, IntPtr_t98, MethodInfo*))Comparison_1__ctor_m13518_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Single>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13519_gshared (Comparison_1_t2620 * __this, float ___x, float ___y, MethodInfo* method);
#define Comparison_1_Invoke_m13519(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2620 *, float, float, MethodInfo*))Comparison_1_Invoke_m13519_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Single>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13520_gshared (Comparison_1_t2620 * __this, float ___x, float ___y, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m13520(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2620 *, float, float, AsyncCallback_t266 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m13520_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13521_gshared (Comparison_1_t2620 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m13521(__this, ___result, method) (( int32_t (*) (Comparison_1_t2620 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m13521_gshared)(__this, ___result, method)
