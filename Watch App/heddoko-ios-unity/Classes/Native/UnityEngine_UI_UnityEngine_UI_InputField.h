#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t393;
// System.Char[]
struct CharU5BU5D_t45;
// UnityEngine.UI.Text
struct Text_t351;
// UnityEngine.UI.Graphic
struct Graphic_t360;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t384;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t386;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t388;
// UnityEngine.RectTransform
struct RectTransform_t354;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t394;
// UnityEngine.TextGenerator
struct TextGenerator_t395;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t355;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t361;
// UnityEngine.Coroutine
struct Coroutine_t396;
struct Coroutine_t396_marshaled;
// UnityEngine.Event
struct Event_t397;
struct Event_t397_marshaled;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField
struct InputField_t390  : public Selectable_t338
{
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t351 * ___m_TextComponent_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t360 * ___m_Placeholder_21;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_22;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_23;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	uint16_t ___m_AsteriskChar_24;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_25;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_26;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_27;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_28;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_29;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_EndEdit
	SubmitEvent_t384 * ___m_EndEdit_30;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChange
	OnChangeEvent_t386 * ___m_OnValueChange_31;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t388 * ___m_OnValidateInput_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t29  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_36;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_37;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t354 * ___caretRectTrans_38;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t394* ___m_CursorVerts_39;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t395 * ___m_InputTextCache_40;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t355 * ___m_CachedInputRenderer_41;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_42;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.UI.InputField::m_Vbo
	List_1_t361 * ___m_Vbo_43;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_45;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_46;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_47;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_48;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t396 * ___m_BlinkCoroutine_49;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_50;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_51;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t396 * ___m_DragCoroutine_53;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_54;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_55;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_56;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t397 * ___m_ProcessingEvent_57;
};
struct InputField_t390_StaticFields{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t393 * ___m_Keyboard_18;
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t45* ___kSeparators_19;
};
