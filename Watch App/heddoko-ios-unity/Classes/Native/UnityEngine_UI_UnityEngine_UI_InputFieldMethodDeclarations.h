#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.InputField
struct InputField_t390;
// UnityEngine.TextGenerator
struct TextGenerator_t395;
// System.String
struct String_t;
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
// System.Collections.IEnumerator
struct IEnumerator_t124;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t254;
// UnityEngine.Event
struct Event_t397;
struct Event_t397_marshaled;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t250;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t361;
// UnityEngine.UI.InputField/ContentType[]
struct ContentTypeU5BU5D_t398;
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.InputField/EditState
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"

// System.Void UnityEngine.UI.InputField::.ctor()
extern "C" void InputField__ctor_m1579 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::.cctor()
extern "C" void InputField__cctor_m1580 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.InputField::get_cachedInputTextGenerator()
extern "C" TextGenerator_t395 * InputField_get_cachedInputTextGenerator_m1581 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_shouldHideMobileInput(System.Boolean)
extern "C" void InputField_set_shouldHideMobileInput_m1582 (InputField_t390 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_shouldHideMobileInput()
extern "C" bool InputField_get_shouldHideMobileInput_m1583 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
extern "C" String_t* InputField_get_text_m1584 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C" void InputField_set_text_m1585 (InputField_t390 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
extern "C" bool InputField_get_isFocused_m1586 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::get_caretBlinkRate()
extern "C" float InputField_get_caretBlinkRate_m1587 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretBlinkRate(System.Single)
extern "C" void InputField_set_caretBlinkRate_m1588 (InputField_t390 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
extern "C" Text_t351 * InputField_get_textComponent_m1589 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_textComponent(UnityEngine.UI.Text)
extern "C" void InputField_set_textComponent_m1590 (InputField_t390 * __this, Text_t351 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
extern "C" Graphic_t360 * InputField_get_placeholder_m1591 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_placeholder(UnityEngine.UI.Graphic)
extern "C" void InputField_set_placeholder_m1592 (InputField_t390 * __this, Graphic_t360 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.InputField::get_selectionColor()
extern "C" Color_t29  InputField_get_selectionColor_m1593 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
extern "C" void InputField_set_selectionColor_m1594 (InputField_t390 * __this, Color_t29  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
extern "C" SubmitEvent_t384 * InputField_get_onEndEdit_m1595 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onEndEdit(UnityEngine.UI.InputField/SubmitEvent)
extern "C" void InputField_set_onEndEdit_m1596 (InputField_t390 * __this, SubmitEvent_t384 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChange()
extern "C" OnChangeEvent_t386 * InputField_get_onValueChange_m1597 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValueChange(UnityEngine.UI.InputField/OnChangeEvent)
extern "C" void InputField_set_onValueChange_m1598 (InputField_t390 * __this, OnChangeEvent_t386 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
extern "C" OnValidateInput_t388 * InputField_get_onValidateInput_m1599 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
extern "C" void InputField_set_onValidateInput_m1600 (InputField_t390 * __this, OnValidateInput_t388 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
extern "C" int32_t InputField_get_characterLimit_m1601 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
extern "C" void InputField_set_characterLimit_m1602 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
extern "C" int32_t InputField_get_contentType_m1603 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
extern "C" void InputField_set_contentType_m1604 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
extern "C" int32_t InputField_get_lineType_m1605 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
extern "C" void InputField_set_lineType_m1606 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::get_inputType()
extern "C" int32_t InputField_get_inputType_m1607 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
extern "C" void InputField_set_inputType_m1608 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::get_keyboardType()
extern "C" int32_t InputField_get_keyboardType_m1609 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
extern "C" void InputField_set_keyboardType_m1610 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::get_characterValidation()
extern "C" int32_t InputField_get_characterValidation_m1611 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
extern "C" void InputField_set_characterValidation_m1612 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
extern "C" bool InputField_get_multiLine_m1613 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::get_asteriskChar()
extern "C" uint16_t InputField_get_asteriskChar_m1614 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_asteriskChar(System.Char)
extern "C" void InputField_set_asteriskChar_m1615 (InputField_t390 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_wasCanceled()
extern "C" bool InputField_get_wasCanceled_m1616 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ClampPos(System.Int32&)
extern "C" void InputField_ClampPos_m1617 (InputField_t390 * __this, int32_t* ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPositionInternal()
extern "C" int32_t InputField_get_caretPositionInternal_m1618 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPositionInternal(System.Int32)
extern "C" void InputField_set_caretPositionInternal_m1619 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretSelectPositionInternal()
extern "C" int32_t InputField_get_caretSelectPositionInternal_m1620 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretSelectPositionInternal(System.Int32)
extern "C" void InputField_set_caretSelectPositionInternal_m1621 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
extern "C" bool InputField_get_hasSelection_m1622 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
extern "C" int32_t InputField_get_caretPosition_m1623 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
extern "C" void InputField_set_caretPosition_m1624 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_selectionAnchorPosition()
extern "C" int32_t InputField_get_selectionAnchorPosition_m1625 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionAnchorPosition(System.Int32)
extern "C" void InputField_set_selectionAnchorPosition_m1626 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_selectionFocusPosition()
extern "C" int32_t InputField_get_selectionFocusPosition_m1627 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionFocusPosition(System.Int32)
extern "C" void InputField_set_selectionFocusPosition_m1628 (InputField_t390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEnable()
extern "C" void InputField_OnEnable_m1629 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDisable()
extern "C" void InputField_OnDisable_m1630 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::CaretBlink()
extern "C" Object_t * InputField_CaretBlink_m1631 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretVisible()
extern "C" void InputField_SetCaretVisible_m1632 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretActive()
extern "C" void InputField_SetCaretActive_m1633 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFocus()
extern "C" void InputField_OnFocus_m1634 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SelectAll()
extern "C" void InputField_SelectAll_m1635 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextEnd(System.Boolean)
extern "C" void InputField_MoveTextEnd_m1636 (InputField_t390 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextStart(System.Boolean)
extern "C" void InputField_MoveTextStart_m1637 (InputField_t390 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_clipboard()
extern "C" String_t* InputField_get_clipboard_m1638 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_clipboard(System.String)
extern "C" void InputField_set_clipboard_m1639 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::InPlaceEditing()
extern "C" bool InputField_InPlaceEditing_m1640 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LateUpdate()
extern "C" void InputField_LateUpdate_m1641 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.InputField::ScreenToLocal(UnityEngine.Vector2)
extern "C" Vector2_t32  InputField_ScreenToLocal_m1642 (InputField_t390 * __this, Vector2_t32  ___screen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2,UnityEngine.TextGenerator)
extern "C" int32_t InputField_GetUnclampedCharacterLineFromPosition_m1643 (InputField_t390 * __this, Vector2_t32  ___pos, TextGenerator_t395 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetCharacterIndexFromPosition(UnityEngine.Vector2)
extern "C" int32_t InputField_GetCharacterIndexFromPosition_m1644 (InputField_t390 * __this, Vector2_t32  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool InputField_MayDrag_m1645 (InputField_t390 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnBeginDrag_m1646 (InputField_t390 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnDrag_m1647 (InputField_t390 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData)
extern "C" Object_t * InputField_MouseDragOutsideRect_m1648 (InputField_t390 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnEndDrag_m1649 (InputField_t390 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnPointerDown_m1650 (InputField_t390 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/EditState UnityEngine.UI.InputField::KeyPressed(UnityEngine.Event)
extern "C" int32_t InputField_KeyPressed_m1651 (InputField_t390 * __this, Event_t397 * ___evt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsValidChar(System.Char)
extern "C" bool InputField_IsValidChar_m1652 (InputField_t390 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ProcessEvent(UnityEngine.Event)
extern "C" void InputField_ProcessEvent_m1653 (InputField_t390 * __this, Event_t397 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnUpdateSelected_m1654 (InputField_t390 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::GetSelectedString()
extern "C" String_t* InputField_GetSelectedString_m1655 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtNextWordBegin()
extern "C" int32_t InputField_FindtNextWordBegin_m1656 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
extern "C" void InputField_MoveRight_m1657 (InputField_t390 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtPrevWordBegin()
extern "C" int32_t InputField_FindtPrevWordBegin_m1658 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
extern "C" void InputField_MoveLeft_m1659 (InputField_t390 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::DetermineCharacterLine(System.Int32,UnityEngine.TextGenerator)
extern "C" int32_t InputField_DetermineCharacterLine_m1660 (InputField_t390 * __this, int32_t ___charPos, TextGenerator_t395 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineUpCharacterPosition(System.Int32,System.Boolean)
extern "C" int32_t InputField_LineUpCharacterPosition_m1661 (InputField_t390 * __this, int32_t ___originalPos, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineDownCharacterPosition(System.Int32,System.Boolean)
extern "C" int32_t InputField_LineDownCharacterPosition_m1662 (InputField_t390 * __this, int32_t ___originalPos, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean)
extern "C" void InputField_MoveDown_m1663 (InputField_t390 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
extern "C" void InputField_MoveDown_m1664 (InputField_t390 * __this, bool ___shift, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean)
extern "C" void InputField_MoveUp_m1665 (InputField_t390 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
extern "C" void InputField_MoveUp_m1666 (InputField_t390 * __this, bool ___shift, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Delete()
extern "C" void InputField_Delete_m1667 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ForwardSpace()
extern "C" void InputField_ForwardSpace_m1668 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Backspace()
extern "C" void InputField_Backspace_m1669 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Insert(System.Char)
extern "C" void InputField_Insert_m1670 (InputField_t390 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChangedAndUpdateLabel()
extern "C" void InputField_SendOnValueChangedAndUpdateLabel_m1671 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChanged()
extern "C" void InputField_SendOnValueChanged_m1672 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnSubmit()
extern "C" void InputField_SendOnSubmit_m1673 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.String)
extern "C" void InputField_Append_m1674 (InputField_t390 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.Char)
extern "C" void InputField_Append_m1675 (InputField_t390 * __this, uint16_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateLabel()
extern "C" void InputField_UpdateLabel_m1676 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsSelectionVisible()
extern "C" bool InputField_IsSelectionVisible_m1677 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineStartPosition(UnityEngine.TextGenerator,System.Int32)
extern "C" int32_t InputField_GetLineStartPosition_m1678 (Object_t * __this /* static, unused */, TextGenerator_t395 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineEndPosition(UnityEngine.TextGenerator,System.Int32)
extern "C" int32_t InputField_GetLineEndPosition_m1679 (Object_t * __this /* static, unused */, TextGenerator_t395 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetDrawRangeToContainCaretPosition(UnityEngine.TextGenerator,System.Int32,System.Int32&,System.Int32&)
extern "C" void InputField_SetDrawRangeToContainCaretPosition_m1680 (InputField_t390 * __this, TextGenerator_t395 * ___gen, int32_t ___caretPos, int32_t* ___drawStart, int32_t* ___drawEnd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
extern "C" void InputField_MarkGeometryAsDirty_m1681 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void InputField_Rebuild_m1682 (InputField_t390 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateGeometry()
extern "C" void InputField_UpdateGeometry_m1683 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::AssignPositioningIfNeeded()
extern "C" void InputField_AssignPositioningIfNeeded_m1684 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void InputField_OnFillVBO_m1685 (InputField_t390 * __this, List_1_t361 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateCursor(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
extern "C" void InputField_GenerateCursor_m1686 (InputField_t390 * __this, List_1_t361 * ___vbo, Vector2_t32  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::CreateCursorVerts()
extern "C" void InputField_CreateCursorVerts_m1687 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::SumLineHeights(System.Int32,UnityEngine.TextGenerator)
extern "C" float InputField_SumLineHeights_m1688 (InputField_t390 * __this, int32_t ___endLine, TextGenerator_t395 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateHightlight(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
extern "C" void InputField_GenerateHightlight_m1689 (InputField_t390 * __this, List_1_t361 * ___vbo, Vector2_t32  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::Validate(System.String,System.Int32,System.Char)
extern "C" uint16_t InputField_Validate_m1690 (InputField_t390 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
extern "C" void InputField_ActivateInputField_m1691 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputFieldInternal()
extern "C" void InputField_ActivateInputFieldInternal_m1692 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnSelect_m1693 (InputField_t390 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnPointerClick_m1694 (InputField_t390 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
extern "C" void InputField_DeactivateInputField_m1695 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnDeselect_m1696 (InputField_t390 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnSubmit_m1697 (InputField_t390 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::EnforceContentType()
extern "C" void InputField_EnforceContentType_m1698 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField/ContentType[])
extern "C" void InputField_SetToCustomIfContentTypeIsNot_m1699 (InputField_t390 * __this, ContentTypeU5BU5D_t398* ___allowedContentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustom()
extern "C" void InputField_SetToCustom_m1700 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
extern "C" void InputField_DoStateTransition_m1701 (InputField_t390 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool InputField_UnityEngine_UI_ICanvasElement_IsDestroyed_m1702 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t85 * InputField_UnityEngine_UI_ICanvasElement_get_transform_m1703 (InputField_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
