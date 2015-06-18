#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Transform_1_t2866;
// System.Object
struct Object_t;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t502;
// UnityEngine.Canvas
struct Canvas_t356;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
#define Transform_1__ctor_m16307(__this, ___object, ___method, method) (( void (*) (Transform_1_t2866 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m12830_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m16308(__this, ___key, ___value, method) (( IndexedSet_1_t502 * (*) (Transform_1_t2866 *, Canvas_t356 *, IndexedSet_1_t502 *, MethodInfo*))Transform_1_Invoke_m12831_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m16309(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2866 *, Canvas_t356 *, IndexedSet_1_t502 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12832_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m16310(__this, ___result, method) (( IndexedSet_1_t502 * (*) (Transform_1_t2866 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12833_gshared)(__this, ___result, method)
