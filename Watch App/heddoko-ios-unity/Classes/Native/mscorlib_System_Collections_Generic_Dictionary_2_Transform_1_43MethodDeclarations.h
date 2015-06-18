#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
struct Transform_1_t2868;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16316_gshared (Transform_1_t2868 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Transform_1__ctor_m16316(__this, ___object, ___method, method) (( void (*) (Transform_1_t2868 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m16316_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2849  Transform_1_Invoke_m16318_gshared (Transform_1_t2868 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m16318(__this, ___key, ___value, method) (( KeyValuePair_2_t2849  (*) (Transform_1_t2868 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m16318_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16320_gshared (Transform_1_t2868 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m16320(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2868 *, Object_t *, Object_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m16320_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2849  Transform_1_EndInvoke_m16322_gshared (Transform_1_t2868 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m16322(__this, ___result, method) (( KeyValuePair_2_t2849  (*) (Transform_1_t2868 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m16322_gshared)(__this, ___result, method)
