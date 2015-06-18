#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2818;
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

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15782_gshared (Predicate_1_t2818 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Predicate_1__ctor_m15782(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2818 *, Object_t *, IntPtr_t98, MethodInfo*))Predicate_1__ctor_m15782_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15783_gshared (Predicate_1_t2818 * __this, UIVertex_t379  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m15783(__this, ___obj, method) (( bool (*) (Predicate_1_t2818 *, UIVertex_t379 , MethodInfo*))Predicate_1_Invoke_m15783_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15784_gshared (Predicate_1_t2818 * __this, UIVertex_t379  ___obj, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m15784(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2818 *, UIVertex_t379 , AsyncCallback_t266 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m15784_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15785_gshared (Predicate_1_t2818 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m15785(__this, ___result, method) (( bool (*) (Predicate_1_t2818 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m15785_gshared)(__this, ___result, method)
