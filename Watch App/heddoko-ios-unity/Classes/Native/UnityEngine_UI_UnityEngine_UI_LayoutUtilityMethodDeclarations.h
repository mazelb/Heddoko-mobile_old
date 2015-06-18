#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutUtility
struct LayoutUtility_t460;
// UnityEngine.RectTransform
struct RectTransform_t354;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t459;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t461;

// System.Single UnityEngine.UI.LayoutUtility::GetMinSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetMinSize_m2199 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetPreferredSize_m2200 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetFlexibleSize_m2201 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetMinWidth_m2202 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetPreferredWidth_m2203 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetFlexibleWidth_m2204 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetMinHeight_m2205 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetPreferredHeight_m2206 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetFlexibleHeight_m2207 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single)
extern "C" float LayoutUtility_GetLayoutProperty_m2208 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, Func_2_t459 * ___property, float ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single,UnityEngine.UI.ILayoutElement&)
extern "C" float LayoutUtility_GetLayoutProperty_m2209 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, Func_2_t459 * ___property, float ___defaultValue, Object_t ** ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinWidth>m__F(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetMinWidthU3Em__F_m2210 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__10(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__10_m2211 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__11(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__11_m2212 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleWidth>m__12(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetFlexibleWidthU3Em__12_m2213 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinHeight>m__13(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetMinHeightU3Em__13_m2214 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__14(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__14_m2215 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__15(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__15_m2216 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleHeight>m__16(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetFlexibleHeightU3Em__16_m2217 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
