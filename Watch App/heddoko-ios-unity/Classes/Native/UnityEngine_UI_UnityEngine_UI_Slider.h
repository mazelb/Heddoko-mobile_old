#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t354;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t421;
// UnityEngine.UI.Image
struct Image_t377;
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.Slider
struct Slider_t423  : public Selectable_t338
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t354 * ___m_FillRect_15;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t354 * ___m_HandleRect_16;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_17;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_18;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_19;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_20;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_21;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t421 * ___m_OnValueChanged_22;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t377 * ___m_FillImage_23;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t85 * ___m_FillTransform_24;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t354 * ___m_FillContainerRect_25;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t85 * ___m_HandleTransform_26;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t354 * ___m_HandleContainerRect_27;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t32  ___m_Offset_28;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t409  ___m_Tracker_29;
};
