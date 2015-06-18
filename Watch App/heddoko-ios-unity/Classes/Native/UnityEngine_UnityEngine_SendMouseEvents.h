#pragma once
#include <stdint.h>
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t951;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t487;
// UnityEngine.Camera[]
struct CameraU5BU5D_t952;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.SendMouseEvents
struct SendMouseEvents_t953  : public Object_t
{
};
struct SendMouseEvents_t953_StaticFields{
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t951* ___m_LastHit_3;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t951* ___m_MouseDownHit_4;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t951* ___m_CurrentHit_5;
	// UnityEngine.RaycastHit2D[] UnityEngine.SendMouseEvents::m_MouseRayHits2D
	RaycastHit2DU5BU5D_t487* ___m_MouseRayHits2D_6;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t952* ___m_Cameras_7;
};
