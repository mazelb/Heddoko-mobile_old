﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>
struct Transform_1_t2848;
// System.Object
struct Object_t;
// UnityEngine.Canvas
struct Canvas_t356;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t502;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"
#define Transform_1__ctor_m16311(__this, ___object, ___method, method) (( void (*) (Transform_1_t2848 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m12834_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m16312(__this, ___key, ___value, method) (( DictionaryEntry_t134  (*) (Transform_1_t2848 *, Canvas_t356 *, IndexedSet_1_t502 *, MethodInfo*))Transform_1_Invoke_m12835_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m16313(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2848 *, Canvas_t356 *, IndexedSet_1_t502 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12836_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m16314(__this, ___result, method) (( DictionaryEntry_t134  (*) (Transform_1_t2848 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12837_gshared)(__this, ___result, method)
