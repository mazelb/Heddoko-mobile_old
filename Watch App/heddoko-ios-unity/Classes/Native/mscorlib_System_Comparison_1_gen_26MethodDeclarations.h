#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3088;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18482_gshared (Comparison_1_t3088 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Comparison_1__ctor_m18482(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3088 *, Object_t *, IntPtr_t98, MethodInfo*))Comparison_1__ctor_m18482_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18483_gshared (Comparison_1_t3088 * __this, UILineInfo_t511  ___x, UILineInfo_t511  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m18483(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3088 *, UILineInfo_t511 , UILineInfo_t511 , MethodInfo*))Comparison_1_Invoke_m18483_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18484_gshared (Comparison_1_t3088 * __this, UILineInfo_t511  ___x, UILineInfo_t511  ___y, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m18484(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3088 *, UILineInfo_t511 , UILineInfo_t511 , AsyncCallback_t266 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m18484_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18485_gshared (Comparison_1_t3088 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m18485(__this, ___result, method) (( int32_t (*) (Comparison_1_t3088 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m18485_gshared)(__this, ___result, method)
