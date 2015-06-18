#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t395;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.FontData
#include "UnityEngine_UI_UnityEngine_UI_FontData.h"
// UnityEngine.UI.Text
struct Text_t351  : public MaskableGraphic_t378
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t347  ___m_FontData_22;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_23;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t395 * ___m_TextCache_24;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t395 * ___m_TextCacheForLayout_25;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureChangedCallback
	bool ___m_DisableFontTextureChangedCallback_27;
};
struct Text_t351_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t19 * ___s_DefaultText_26;
};
