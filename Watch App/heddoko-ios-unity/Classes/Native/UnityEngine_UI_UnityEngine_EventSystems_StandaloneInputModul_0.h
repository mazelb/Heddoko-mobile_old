#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInputModule.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t321  : public PointerInputModule_t318
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_NextAction
	float ___m_NextAction_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t32  ___m_LastMousePosition_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t32  ___m_MousePosition_13;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_14;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_15;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_16;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_17;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_18;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_AllowActivationOnMobileDevice
	bool ___m_AllowActivationOnMobileDevice_19;
};
