#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t479;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t250;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m13690_gshared (EventFunction_1_t479 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define EventFunction_1__ctor_m13690(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t479 *, Object_t *, IntPtr_t98, MethodInfo*))EventFunction_1__ctor_m13690_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m13692_gshared (EventFunction_1_t479 * __this, Object_t * ___handler, BaseEventData_t250 * ___eventData, MethodInfo* method);
#define EventFunction_1_Invoke_m13692(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t479 *, Object_t *, BaseEventData_t250 *, MethodInfo*))EventFunction_1_Invoke_m13692_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m13694_gshared (EventFunction_1_t479 * __this, Object_t * ___handler, BaseEventData_t250 * ___eventData, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define EventFunction_1_BeginInvoke_m13694(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t479 *, Object_t *, BaseEventData_t250 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m13694_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m13696_gshared (EventFunction_1_t479 * __this, Object_t * ___result, MethodInfo* method);
#define EventFunction_1_EndInvoke_m13696(__this, ___result, method) (( void (*) (EventFunction_1_t479 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m13696_gshared)(__this, ___result, method)
