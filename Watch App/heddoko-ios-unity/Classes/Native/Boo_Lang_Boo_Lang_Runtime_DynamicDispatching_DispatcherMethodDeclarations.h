#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t858;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C" void Dispatcher__ctor_m4278 (Dispatcher_t858 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C" Object_t * Dispatcher_Invoke_m4279 (Dispatcher_t858 * __this, Object_t * ___target, ObjectU5BU5D_t137* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern TypeInfo Object_t_il2cpp_TypeInfo;
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * pinvoke_delegate_wrapper_Dispatcher_t858(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t137* ___args);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * Dispatcher_BeginInvoke_m4280 (Dispatcher_t858 * __this, Object_t * ___target, ObjectU5BU5D_t137* ___args, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Dispatcher_EndInvoke_m4281 (Dispatcher_t858 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
