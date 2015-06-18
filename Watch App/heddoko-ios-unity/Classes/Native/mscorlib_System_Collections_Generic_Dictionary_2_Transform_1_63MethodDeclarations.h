#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct Transform_1_t3179;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19466_gshared (Transform_1_t3179 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Transform_1__ctor_m19466(__this, ___object, ___method, method) (( void (*) (Transform_1_t3179 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m19466_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3174  Transform_1_Invoke_m19468_gshared (Transform_1_t3179 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m19468(__this, ___key, ___value, method) (( KeyValuePair_2_t3174  (*) (Transform_1_t3179 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m19468_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19470_gshared (Transform_1_t3179 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m19470(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3179 *, Object_t *, Object_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m19470_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3174  Transform_1_EndInvoke_m19472_gshared (Transform_1_t3179 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m19472(__this, ___result, method) (( KeyValuePair_2_t3174  (*) (Transform_1_t3179 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m19472_gshared)(__this, ___result, method)
