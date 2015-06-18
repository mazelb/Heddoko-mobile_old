#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2821;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15792_gshared (Comparison_1_t2821 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Comparison_1__ctor_m15792(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2821 *, Object_t *, IntPtr_t98, MethodInfo*))Comparison_1__ctor_m15792_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15793_gshared (Comparison_1_t2821 * __this, UIVertex_t379  ___x, UIVertex_t379  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m15793(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2821 *, UIVertex_t379 , UIVertex_t379 , MethodInfo*))Comparison_1_Invoke_m15793_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15794_gshared (Comparison_1_t2821 * __this, UIVertex_t379  ___x, UIVertex_t379  ___y, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m15794(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2821 *, UIVertex_t379 , UIVertex_t379 , AsyncCallback_t266 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m15794_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15795_gshared (Comparison_1_t2821 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m15795(__this, ___result, method) (( int32_t (*) (Comparison_1_t2821 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m15795_gshared)(__this, ___result, method)
