#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t3185;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m19497_gshared (Func_2_t3185 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Func_2__ctor_m19497(__this, ___object, ___method, method) (( void (*) (Func_2_t3185 *, Object_t *, IntPtr_t98, MethodInfo*))Func_2__ctor_m19497_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m19498_gshared (Func_2_t3185 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m19498(__this, ___arg1, method) (( Object_t * (*) (Func_2_t3185 *, Object_t *, MethodInfo*))Func_2_Invoke_m19498_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m19499_gshared (Func_2_t3185 * __this, Object_t * ___arg1, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m19499(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t3185 *, Object_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m19499_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m19500_gshared (Func_2_t3185 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m19500(__this, ___result, method) (( Object_t * (*) (Func_2_t3185 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m19500_gshared)(__this, ___result, method)
