#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Single>
struct Func_2_t2959;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m17209_gshared (Func_2_t2959 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Func_2__ctor_m17209(__this, ___object, ___method, method) (( void (*) (Func_2_t2959 *, Object_t *, IntPtr_t98, MethodInfo*))Func_2__ctor_m17209_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m17210_gshared (Func_2_t2959 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m17210(__this, ___arg1, method) (( float (*) (Func_2_t2959 *, Object_t *, MethodInfo*))Func_2_Invoke_m17210_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m17212_gshared (Func_2_t2959 * __this, Object_t * ___arg1, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m17212(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2959 *, Object_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m17212_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m17214_gshared (Func_2_t2959 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m17214(__this, ___result, method) (( float (*) (Func_2_t2959 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m17214_gshared)(__this, ___result, method)
