#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3079;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18339_gshared (Comparison_1_t3079 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Comparison_1__ctor_m18339(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3079 *, Object_t *, IntPtr_t98, MethodInfo*))Comparison_1__ctor_m18339_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18340_gshared (Comparison_1_t3079 * __this, UICharInfo_t513  ___x, UICharInfo_t513  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m18340(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3079 *, UICharInfo_t513 , UICharInfo_t513 , MethodInfo*))Comparison_1_Invoke_m18340_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18341_gshared (Comparison_1_t3079 * __this, UICharInfo_t513  ___x, UICharInfo_t513  ___y, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m18341(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3079 *, UICharInfo_t513 , UICharInfo_t513 , AsyncCallback_t266 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m18341_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18342_gshared (Comparison_1_t3079 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m18342(__this, ___result, method) (( int32_t (*) (Comparison_1_t3079 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m18342_gshared)(__this, ___result, method)
