#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t1773;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t795;
// System.ResolveEventArgs
struct ResolveEventArgs_t1836;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m10250 (ResolveEventHandler_t1773 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t795 * ResolveEventHandler_Invoke_m10251 (ResolveEventHandler_t1773 * __this, Object_t * ___sender, ResolveEventArgs_t1836 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t795 * pinvoke_delegate_wrapper_ResolveEventHandler_t1773(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1836 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m10252 (ResolveEventHandler_t1773 * __this, Object_t * ___sender, ResolveEventArgs_t1836 * ___args, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t795 * ResolveEventHandler_EndInvoke_m10253 (ResolveEventHandler_t1773 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
