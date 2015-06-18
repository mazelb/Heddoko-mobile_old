#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Transform_1_t3002;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t858;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t862;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
#define Transform_1__ctor_m17574(__this, ___object, ___method, method) (( void (*) (Transform_1_t3002 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m12830_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17575(__this, ___key, ___value, method) (( Dispatcher_t858 * (*) (Transform_1_t3002 *, DispatcherKey_t862 *, Dispatcher_t858 *, MethodInfo*))Transform_1_Invoke_m12831_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17576(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3002 *, DispatcherKey_t862 *, Dispatcher_t858 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12832_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17577(__this, ___result, method) (( Dispatcher_t858 * (*) (Transform_1_t3002 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12833_gshared)(__this, ___result, method)
