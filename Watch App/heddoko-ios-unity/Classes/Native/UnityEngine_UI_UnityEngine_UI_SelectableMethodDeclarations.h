#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Selectable
struct Selectable_t338;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t416;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t333;
// UnityEngine.UI.Graphic
struct Graphic_t360;
// UnityEngine.UI.Image
struct Image_t377;
// UnityEngine.Animator
struct Animator_t159;
// UnityEngine.RectTransform
struct RectTransform_t354;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t262;
// UnityEngine.Sprite
struct Sprite_t376;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t250;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t254;
// UnityEngine.UI.Navigation
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
// UnityEngine.UI.Selectable/Transition
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
// UnityEngine.UI.ColorBlock
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
// UnityEngine.UI.SpriteState
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.UI.Selectable::.ctor()
extern "C" void Selectable__ctor_m1842 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
extern "C" void Selectable__cctor_m1843 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
extern "C" List_1_t416 * Selectable_get_allSelectables_m1844 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
extern "C" Navigation_t401  Selectable_get_navigation_m1845 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
extern "C" void Selectable_set_navigation_m1846 (Selectable_t338 * __this, Navigation_t401  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
extern "C" int32_t Selectable_get_transition_m1847 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
extern "C" void Selectable_set_transition_m1848 (Selectable_t338 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
extern "C" ColorBlock_t345  Selectable_get_colors_m1849 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
extern "C" void Selectable_set_colors_m1850 (Selectable_t338 * __this, ColorBlock_t345  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
extern "C" SpriteState_t418  Selectable_get_spriteState_m1851 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
extern "C" void Selectable_set_spriteState_m1852 (Selectable_t338 * __this, SpriteState_t418  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
extern "C" AnimationTriggers_t333 * Selectable_get_animationTriggers_m1853 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
extern "C" void Selectable_set_animationTriggers_m1854 (Selectable_t338 * __this, AnimationTriggers_t333 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
extern "C" Graphic_t360 * Selectable_get_targetGraphic_m1855 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
extern "C" void Selectable_set_targetGraphic_m1856 (Selectable_t338 * __this, Graphic_t360 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
extern "C" bool Selectable_get_interactable_m1857 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C" void Selectable_set_interactable_m1858 (Selectable_t338 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
extern "C" bool Selectable_get_isPointerInside_m1859 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
extern "C" void Selectable_set_isPointerInside_m1860 (Selectable_t338 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
extern "C" bool Selectable_get_isPointerDown_m1861 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
extern "C" void Selectable_set_isPointerDown_m1862 (Selectable_t338 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
extern "C" bool Selectable_get_hasSelection_m1863 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
extern "C" void Selectable_set_hasSelection_m1864 (Selectable_t338 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
extern "C" Image_t377 * Selectable_get_image_m1865 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
extern "C" void Selectable_set_image_m1866 (Selectable_t338 * __this, Image_t377 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
extern "C" Animator_t159 * Selectable_get_animator_m1867 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
extern "C" void Selectable_Awake_m1868 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
extern "C" void Selectable_OnCanvasGroupChanged_m1869 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
extern "C" bool Selectable_IsInteractable_m1870 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
extern "C" void Selectable_OnDidApplyAnimationProperties_m1871 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
extern "C" void Selectable_OnEnable_m1872 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
extern "C" void Selectable_OnSetProperty_m1873 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
extern "C" void Selectable_OnDisable_m1874 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
extern "C" int32_t Selectable_get_currentSelectionState_m1875 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
extern "C" void Selectable_InstantClearState_m1876 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
extern "C" void Selectable_DoStateTransition_m1877 (Selectable_t338 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
extern "C" Selectable_t338 * Selectable_FindSelectable_m1878 (Selectable_t338 * __this, Vector3_t54  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
extern "C" Vector3_t54  Selectable_GetPointOnRectEdge_m1879 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, Vector2_t32  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
extern "C" void Selectable_Navigate_m1880 (Selectable_t338 * __this, AxisEventData_t262 * ___eventData, Selectable_t338 * ___sel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
extern "C" Selectable_t338 * Selectable_FindSelectableOnLeft_m1881 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
extern "C" Selectable_t338 * Selectable_FindSelectableOnRight_m1882 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
extern "C" Selectable_t338 * Selectable_FindSelectableOnUp_m1883 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
extern "C" Selectable_t338 * Selectable_FindSelectableOnDown_m1884 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Selectable_OnMove_m1885 (Selectable_t338 * __this, AxisEventData_t262 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
extern "C" void Selectable_StartColorTween_m1886 (Selectable_t338 * __this, Color_t29  ___targetColor, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
extern "C" void Selectable_DoSpriteSwap_m1887 (Selectable_t338 * __this, Sprite_t376 * ___newSprite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
extern "C" void Selectable_TriggerAnimation_m1888 (Selectable_t338 * __this, String_t* ___triggername, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsHighlighted_m1889 (Selectable_t338 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsPressed_m1890 (Selectable_t338 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
extern "C" bool Selectable_IsPressed_m1891 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_UpdateSelectionState_m1892 (Selectable_t338 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_EvaluateAndTransitionToSelectionState_m1893 (Selectable_t338 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
extern "C" void Selectable_InternalEvaluateAndTransitionToSelectionState_m1894 (Selectable_t338 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerDown_m1895 (Selectable_t338 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerUp_m1896 (Selectable_t338 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerEnter_m1897 (Selectable_t338 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerExit_m1898 (Selectable_t338 * __this, PointerEventData_t254 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnSelect_m1899 (Selectable_t338 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnDeselect_m1900 (Selectable_t338 * __this, BaseEventData_t250 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
extern "C" void Selectable_Select_m1901 (Selectable_t338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
