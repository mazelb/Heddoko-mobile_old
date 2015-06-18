#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>
struct Transform_1_t3004;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17583_gshared (Transform_1_t3004 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Transform_1__ctor_m17583(__this, ___object, ___method, method) (( void (*) (Transform_1_t3004 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m17583_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2993  Transform_1_Invoke_m17585_gshared (Transform_1_t3004 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m17585(__this, ___key, ___value, method) (( KeyValuePair_2_t2993  (*) (Transform_1_t3004 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m17585_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17587_gshared (Transform_1_t3004 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m17587(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3004 *, Object_t *, Object_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17587_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2993  Transform_1_EndInvoke_m17589_gshared (Transform_1_t3004 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m17589(__this, ___result, method) (( KeyValuePair_2_t2993  (*) (Transform_1_t3004 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17589_gshared)(__this, ___result, method)
