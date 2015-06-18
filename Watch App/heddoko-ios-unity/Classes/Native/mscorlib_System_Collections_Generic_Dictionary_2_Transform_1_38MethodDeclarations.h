#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
struct Transform_1_t2858;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t360;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_39MethodDeclarations.h"
#define Transform_1__ctor_m16252(__this, ___object, ___method, method) (( void (*) (Transform_1_t2858 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m16253_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m16254(__this, ___key, ___value, method) (( KeyValuePair_2_t2852  (*) (Transform_1_t2858 *, Graphic_t360 *, int32_t, MethodInfo*))Transform_1_Invoke_m16255_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m16256(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2858 *, Graphic_t360 *, int32_t, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m16257_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m16258(__this, ___result, method) (( KeyValuePair_2_t2852  (*) (Transform_1_t2858 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m16259_gshared)(__this, ___result, method)
