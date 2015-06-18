#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t56;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t325;
// UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t324  : public BaseRaycaster_t310
{
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_t56 * ___m_EventCamera_2;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t76  ___m_EventMask_3;
};
struct PhysicsRaycaster_t324_StaticFields{
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.PhysicsRaycaster::<>f__am$cache2
	Comparison_1_t325 * ___U3CU3Ef__am$cache2_4;
};
