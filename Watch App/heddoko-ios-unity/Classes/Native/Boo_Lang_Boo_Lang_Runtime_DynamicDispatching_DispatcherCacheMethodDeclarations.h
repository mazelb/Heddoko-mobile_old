#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t859;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t858;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern "C" void DispatcherFactory__ctor_m4236 (DispatcherFactory_t859 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C" Dispatcher_t858 * DispatcherFactory_Invoke_m4237 (DispatcherFactory_t859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern TypeInfo Dispatcher_t858_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispatcher.h"
extern "C" Dispatcher_t858 * pinvoke_delegate_wrapper_DispatcherFactory_t859(Il2CppObject* delegate);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DispatcherFactory_BeginInvoke_m4238 (DispatcherFactory_t859 * __this, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern "C" Dispatcher_t858 * DispatcherFactory_EndInvoke_m4239 (DispatcherFactory_t859 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
