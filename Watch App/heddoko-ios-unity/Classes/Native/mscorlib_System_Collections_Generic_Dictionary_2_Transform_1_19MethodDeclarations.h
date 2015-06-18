#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>
struct Transform_1_t2584;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t56;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_20MethodDeclarations.h"
#define Transform_1__ctor_m13168(__this, ___object, ___method, method) (( void (*) (Transform_1_t2584 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m13169_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13170(__this, ___key, ___value, method) (( KeyValuePair_2_t2572  (*) (Transform_1_t2584 *, Camera_t56 *, bool, MethodInfo*))Transform_1_Invoke_m13171_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13172(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2584 *, Camera_t56 *, bool, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13173_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13174(__this, ___result, method) (( KeyValuePair_2_t2572  (*) (Transform_1_t2584 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13175_gshared)(__this, ___result, method)
