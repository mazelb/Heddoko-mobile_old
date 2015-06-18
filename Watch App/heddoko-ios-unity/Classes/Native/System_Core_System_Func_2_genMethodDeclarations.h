#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t435;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t432;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
#define Func_2__ctor_m2764(__this, ___object, ___method, method) (( void (*) (Func_2_t435 *, Object_t *, IntPtr_t98, MethodInfo*))Func_2__ctor_m17038_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m17039(__this, ___arg1, method) (( bool (*) (Func_2_t435 *, Toggle_t432 *, MethodInfo*))Func_2_Invoke_m17040_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m17041(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t435 *, Toggle_t432 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m17042_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m17043(__this, ___result, method) (( bool (*) (Func_2_t435 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m17044_gshared)(__this, ___result, method)
