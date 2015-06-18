#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t255;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t262;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t252;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t250;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t249  : public UIBehaviour_t253
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t255 * ___m_RaycastResultCache_1;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t262 * ___m_AxisEventData_2;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t252 * ___m_EventSystem_3;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t250 * ___m_BaseEventData_4;
};
