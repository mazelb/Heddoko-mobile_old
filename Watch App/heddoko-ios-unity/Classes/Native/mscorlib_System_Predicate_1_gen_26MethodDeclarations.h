#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3085;
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

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18472_gshared (Predicate_1_t3085 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Predicate_1__ctor_m18472(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3085 *, Object_t *, IntPtr_t98, MethodInfo*))Predicate_1__ctor_m18472_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18473_gshared (Predicate_1_t3085 * __this, UILineInfo_t511  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m18473(__this, ___obj, method) (( bool (*) (Predicate_1_t3085 *, UILineInfo_t511 , MethodInfo*))Predicate_1_Invoke_m18473_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18474_gshared (Predicate_1_t3085 * __this, UILineInfo_t511  ___obj, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m18474(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3085 *, UILineInfo_t511 , AsyncCallback_t266 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m18474_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18475_gshared (Predicate_1_t3085 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m18475(__this, ___result, method) (( bool (*) (Predicate_1_t3085 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m18475_gshared)(__this, ___result, method)
