#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3076;
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

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18329_gshared (Predicate_1_t3076 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Predicate_1__ctor_m18329(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3076 *, Object_t *, IntPtr_t98, MethodInfo*))Predicate_1__ctor_m18329_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18330_gshared (Predicate_1_t3076 * __this, UICharInfo_t513  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m18330(__this, ___obj, method) (( bool (*) (Predicate_1_t3076 *, UICharInfo_t513 , MethodInfo*))Predicate_1_Invoke_m18330_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18331_gshared (Predicate_1_t3076 * __this, UICharInfo_t513  ___obj, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m18331(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3076 *, UICharInfo_t513 , AsyncCallback_t266 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m18331_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18332_gshared (Predicate_1_t3076 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m18332(__this, ___result, method) (( bool (*) (Predicate_1_t3076 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m18332_gshared)(__this, ___result, method)
