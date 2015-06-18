#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct Transform_1_t2802;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t493;
// UnityEngine.Font
struct Font_t346;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
#define Transform_1__ctor_m15604(__this, ___object, ___method, method) (( void (*) (Transform_1_t2802 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m12830_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m15605(__this, ___key, ___value, method) (( List_1_t493 * (*) (Transform_1_t2802 *, Font_t346 *, List_1_t493 *, MethodInfo*))Transform_1_Invoke_m12831_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m15606(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2802 *, Font_t346 *, List_1_t493 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12832_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m15607(__this, ___result, method) (( List_1_t493 * (*) (Transform_1_t2802 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12833_gshared)(__this, ___result, method)
