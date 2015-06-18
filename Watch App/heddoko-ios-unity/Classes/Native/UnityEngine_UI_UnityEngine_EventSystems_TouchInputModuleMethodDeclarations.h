#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t322;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t254;
// System.String
struct String_t;

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
extern "C" void TouchInputModule__ctor_m1314 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
extern "C" bool TouchInputModule_get_allowActivationOnStandalone_m1315 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
extern "C" void TouchInputModule_set_allowActivationOnStandalone_m1316 (TouchInputModule_t322 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
extern "C" void TouchInputModule_UpdateModule_m1317 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
extern "C" bool TouchInputModule_IsModuleSupported_m1318 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
extern "C" bool TouchInputModule_ShouldActivateModule_m1319 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
extern "C" bool TouchInputModule_UseFakeInput_m1320 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
extern "C" void TouchInputModule_Process_m1321 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
extern "C" void TouchInputModule_FakeTouches_m1322 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
extern "C" void TouchInputModule_ProcessTouchEvents_m1323 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C" void TouchInputModule_ProcessTouchPress_m1324 (TouchInputModule_t322 * __this, PointerEventData_t254 * ___pointerEvent, bool ___pressed, bool ___released, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
extern "C" void TouchInputModule_DeactivateModule_m1325 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
extern "C" String_t* TouchInputModule_ToString_m1326 (TouchInputModule_t322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
