#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct Transform_1_t2975;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_47MethodDeclarations.h"
#define Transform_1__ctor_m17362(__this, ___object, ___method, method) (( void (*) (Transform_1_t2975 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m17363_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17364(__this, ___key, ___value, method) (( KeyValuePair_2_t2969  (*) (Transform_1_t2975 *, String_t*, bool, MethodInfo*))Transform_1_Invoke_m17365_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17366(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2975 *, String_t*, bool, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17367_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17368(__this, ___result, method) (( KeyValuePair_2_t2969  (*) (Transform_1_t2975 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17369_gshared)(__this, ___result, method)
