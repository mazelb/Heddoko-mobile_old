#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t248;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t249;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t250;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t251;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t252;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t252  : public UIBehaviour_t253
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t248 * ___m_SystemInputModules_1;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t249 * ___m_CurrentInputModule_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t49 * ___m_FirstSelected_3;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_4;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t49 * ___m_CurrentSelected_6;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t250 * ___m_DummyData_8;
};
struct EventSystem_t252_StaticFields{
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t251 * ___s_RaycastComparer_9;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::<current>k__BackingField
	EventSystem_t252 * ___U3CcurrentU3Ek__BackingField_10;
};
