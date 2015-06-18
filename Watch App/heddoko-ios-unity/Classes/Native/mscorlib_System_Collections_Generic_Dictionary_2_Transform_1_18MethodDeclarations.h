#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2558;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15MethodDeclarations.h"
#define Transform_1__ctor_m13164(__this, ___object, ___method, method) (( void (*) (Transform_1_t2558 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m13063_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13165(__this, ___key, ___value, method) (( DictionaryEntry_t134  (*) (Transform_1_t2558 *, Camera_t56 *, bool, MethodInfo*))Transform_1_Invoke_m13064_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13166(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2558 *, Camera_t56 *, bool, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13065_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13167(__this, ___result, method) (( DictionaryEntry_t134  (*) (Transform_1_t2558 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13066_gshared)(__this, ___result, method)
