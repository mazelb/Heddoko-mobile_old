#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t268;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerExitHandler
struct IPointerExitHandler_t289;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t250;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_2MethodDeclarations.h"
#define EventFunction_1__ctor_m2286(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t268 *, Object_t *, IntPtr_t98, MethodInfo*))EventFunction_1__ctor_m13690_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m14498(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t268 *, Object_t *, BaseEventData_t250 *, MethodInfo*))EventFunction_1_Invoke_m13692_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m14499(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t268 *, Object_t *, BaseEventData_t250 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m13694_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m14500(__this, ___result, method) (( void (*) (EventFunction_1_t268 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m13696_gshared)(__this, ___result, method)
