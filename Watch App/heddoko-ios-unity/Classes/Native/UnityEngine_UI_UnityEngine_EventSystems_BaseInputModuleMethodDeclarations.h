#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t249;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t252;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t255;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t254;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t262;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t250;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
extern "C" void BaseInputModule__ctor_m1241 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C" EventSystem_t252 * BaseInputModule_get_eventSystem_m1242 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
extern "C" void BaseInputModule_OnEnable_m1243 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
extern "C" void BaseInputModule_OnDisable_m1244 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::Process()
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" RaycastResult_t256  BaseInputModule_FindFirstRaycast_m1245 (Object_t * __this /* static, unused */, List_1_t255 * ___candidates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
extern "C" int32_t BaseInputModule_DetermineMoveDirection_m1246 (Object_t * __this /* static, unused */, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
extern "C" int32_t BaseInputModule_DetermineMoveDirection_m1247 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___deadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" GameObject_t49 * BaseInputModule_FindCommonRoot_m1248 (Object_t * __this /* static, unused */, GameObject_t49 * ___g1, GameObject_t49 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
extern "C" void BaseInputModule_HandlePointerExitAndEnter_m1249 (BaseInputModule_t249 * __this, PointerEventData_t254 * ___currentPointerData, GameObject_t49 * ___newEnterTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
extern "C" AxisEventData_t262 * BaseInputModule_GetAxisEventData_m1250 (BaseInputModule_t249 * __this, float ___x, float ___y, float ___moveDeadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
extern "C" BaseEventData_t250 * BaseInputModule_GetBaseEventData_m1251 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool BaseInputModule_IsPointerOverGameObject_m1252 (BaseInputModule_t249 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
extern "C" bool BaseInputModule_ShouldActivateModule_m1253 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
extern "C" void BaseInputModule_DeactivateModule_m1254 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
extern "C" void BaseInputModule_ActivateModule_m1255 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
extern "C" void BaseInputModule_UpdateModule_m1256 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
extern "C" bool BaseInputModule_IsModuleSupported_m1257 (BaseInputModule_t249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
