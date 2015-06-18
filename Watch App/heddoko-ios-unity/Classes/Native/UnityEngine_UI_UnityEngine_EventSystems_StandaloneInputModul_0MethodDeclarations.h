#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t321;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t254;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t313;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
extern "C" void StandaloneInputModule__ctor_m1286 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
extern "C" int32_t StandaloneInputModule_get_inputMode_m1287 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
extern "C" bool StandaloneInputModule_get_allowActivationOnMobileDevice_m1288 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
extern "C" void StandaloneInputModule_set_allowActivationOnMobileDevice_m1289 (StandaloneInputModule_t321 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
extern "C" float StandaloneInputModule_get_inputActionsPerSecond_m1290 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
extern "C" void StandaloneInputModule_set_inputActionsPerSecond_m1291 (StandaloneInputModule_t321 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
extern "C" String_t* StandaloneInputModule_get_horizontalAxis_m1292 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
extern "C" void StandaloneInputModule_set_horizontalAxis_m1293 (StandaloneInputModule_t321 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
extern "C" String_t* StandaloneInputModule_get_verticalAxis_m1294 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
extern "C" void StandaloneInputModule_set_verticalAxis_m1295 (StandaloneInputModule_t321 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
extern "C" String_t* StandaloneInputModule_get_submitButton_m1296 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
extern "C" void StandaloneInputModule_set_submitButton_m1297 (StandaloneInputModule_t321 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
extern "C" String_t* StandaloneInputModule_get_cancelButton_m1298 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
extern "C" void StandaloneInputModule_set_cancelButton_m1299 (StandaloneInputModule_t321 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
extern "C" void StandaloneInputModule_UpdateModule_m1300 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
extern "C" bool StandaloneInputModule_IsModuleSupported_m1301 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
extern "C" bool StandaloneInputModule_ShouldActivateModule_m1302 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
extern "C" void StandaloneInputModule_ActivateModule_m1303 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
extern "C" void StandaloneInputModule_DeactivateModule_m1304 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
extern "C" void StandaloneInputModule_Process_m1305 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendSubmitEventToSelectedObject_m1306 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::AllowMoveEventProcessing(System.Single)
extern "C" bool StandaloneInputModule_AllowMoveEventProcessing_m1307 (StandaloneInputModule_t321 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
extern "C" Vector2_t32  StandaloneInputModule_GetRawMoveVector_m1308 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendMoveEventToSelectedObject_m1309 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
extern "C" void StandaloneInputModule_ProcessMouseEvent_m1310 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::UseMouse(System.Boolean,System.Boolean,UnityEngine.EventSystems.PointerEventData)
extern "C" bool StandaloneInputModule_UseMouse_m1311 (Object_t * __this /* static, unused */, bool ___pressed, bool ___released, PointerEventData_t254 * ___pointerData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendUpdateEventToSelectedObject_m1312 (StandaloneInputModule_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C" void StandaloneInputModule_ProcessMousePress_m1313 (StandaloneInputModule_t321 * __this, MouseButtonEventData_t313 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
