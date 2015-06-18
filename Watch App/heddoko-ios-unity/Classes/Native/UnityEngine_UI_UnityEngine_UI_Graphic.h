#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Texture2D
struct Texture2D_t36;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t353;
// UnityEngine.RectTransform
struct RectTransform_t354;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t355;
// UnityEngine.Canvas
struct Canvas_t356;
// UnityEngine.Events.UnityAction
struct UnityAction_t357;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t358;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t359;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.Graphic
struct Graphic_t360  : public UIBehaviour_t253
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t19 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t29  ___m_Color_5;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t354 * ___m_RectTransform_6;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t355 * ___m_CanvasRender_7;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t356 * ___m_Canvas_8;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_9;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_10;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t357 * ___m_OnDirtyLayoutCallback_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t357 * ___m_OnDirtyVertsCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t357 * ___m_OnDirtyMaterialCallback_13;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t358 * ___m_ColorTweenRunner_14;
};
struct Graphic_t360_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t19 * ___s_DefaultUI_1;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t36 * ___s_WhiteTexture_2;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::s_VboPool
	ObjectPool_1_t353 * ___s_VboPool_3;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::<>f__am$cacheE
	UnityAction_1_t359 * ___U3CU3Ef__am$cacheE_15;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::<>f__am$cacheF
	UnityAction_1_t359 * ___U3CU3Ef__am$cacheF_16;
};
