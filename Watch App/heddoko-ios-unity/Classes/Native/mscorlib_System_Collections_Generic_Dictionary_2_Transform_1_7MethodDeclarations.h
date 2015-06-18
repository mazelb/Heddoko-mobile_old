#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t2540;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12830_gshared (Transform_1_t2540 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Transform_1__ctor_m12830(__this, ___object, ___method, method) (( void (*) (Transform_1_t2540 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m12830_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m12831_gshared (Transform_1_t2540 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m12831(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2540 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m12831_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12832_gshared (Transform_1_t2540 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m12832(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2540 *, Object_t *, Object_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12832_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m12833_gshared (Transform_1_t2540 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m12833(__this, ___result, method) (( Object_t * (*) (Transform_1_t2540 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12833_gshared)(__this, ___result, method)
