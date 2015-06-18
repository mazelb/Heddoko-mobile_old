#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>
struct Transform_1_t2548;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
#define Transform_1__ctor_m12890(__this, ___object, ___method, method) (( void (*) (Transform_1_t2548 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m12830_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m12891(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t2548 *, String_t*, String_t*, MethodInfo*))Transform_1_Invoke_m12831_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m12892(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2548 *, String_t*, String_t*, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12832_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m12893(__this, ___result, method) (( String_t* (*) (Transform_1_t2548 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12833_gshared)(__this, ___result, method)
