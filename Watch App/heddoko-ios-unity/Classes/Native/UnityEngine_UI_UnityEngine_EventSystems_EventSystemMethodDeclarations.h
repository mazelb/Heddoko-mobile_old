#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t252;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t249;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t250;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t254;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t255;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
extern "C" void EventSystem__ctor_m1074 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
extern "C" void EventSystem__cctor_m1075 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" EventSystem_t252 * EventSystem_get_current_m1076 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
extern "C" void EventSystem_set_current_m1077 (Object_t * __this /* static, unused */, EventSystem_t252 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
extern "C" bool EventSystem_get_sendNavigationEvents_m1078 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
extern "C" void EventSystem_set_sendNavigationEvents_m1079 (EventSystem_t252 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
extern "C" int32_t EventSystem_get_pixelDragThreshold_m1080 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
extern "C" void EventSystem_set_pixelDragThreshold_m1081 (EventSystem_t252 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
extern "C" BaseInputModule_t249 * EventSystem_get_currentInputModule_m1082 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
extern "C" GameObject_t49 * EventSystem_get_firstSelectedGameObject_m1083 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_set_firstSelectedGameObject_m1084 (EventSystem_t252 * __this, GameObject_t49 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C" GameObject_t49 * EventSystem_get_currentSelectedGameObject_m1085 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
extern "C" GameObject_t49 * EventSystem_get_lastSelectedGameObject_m1086 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
extern "C" void EventSystem_UpdateModules_m1087 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
extern "C" bool EventSystem_get_alreadySelecting_m1088 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventSystem_SetSelectedGameObject_m1089 (EventSystem_t252 * __this, GameObject_t49 * ___selected, BaseEventData_t250 * ___pointer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
extern "C" BaseEventData_t250 * EventSystem_get_baseEventDataCache_m1090 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_SetSelectedGameObject_m1091 (EventSystem_t252 * __this, GameObject_t49 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
extern "C" int32_t EventSystem_RaycastComparer_m1092 (Object_t * __this /* static, unused */, RaycastResult_t256  ___lhs, RaycastResult_t256  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void EventSystem_RaycastAll_m1093 (EventSystem_t252 * __this, PointerEventData_t254 * ___eventData, List_1_t255 * ___raycastResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C" bool EventSystem_IsPointerOverGameObject_m1094 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
extern "C" bool EventSystem_IsPointerOverGameObject_m1095 (EventSystem_t252 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
extern "C" void EventSystem_OnEnable_m1096 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
extern "C" void EventSystem_OnDisable_m1097 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
extern "C" void EventSystem_TickModules_m1098 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
extern "C" void EventSystem_Update_m1099 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
extern "C" void EventSystem_ChangeEventModule_m1100 (EventSystem_t252 * __this, BaseInputModule_t249 * ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
extern "C" String_t* EventSystem_ToString_m1101 (EventSystem_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
