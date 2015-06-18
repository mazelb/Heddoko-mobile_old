#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t524;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
#define Func_2__ctor_m17045(__this, ___object, ___method, method) (( void (*) (Func_2_t524 *, Object_t *, IntPtr_t98, MethodInfo*))Func_2__ctor_m17038_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m17046(__this, ___arg1, method) (( bool (*) (Func_2_t524 *, Object_t *, MethodInfo*))Func_2_Invoke_m17040_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m17047(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t524 *, Object_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m17042_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m17048(__this, ___result, method) (( bool (*) (Func_2_t524 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m17044_gshared)(__this, ___result, method)
