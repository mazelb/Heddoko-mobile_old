#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t182;
struct AnimationCurve_t182_marshaled;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Texture2D
struct Texture2D_t36;
// UnityEngine.Shader
struct Shader_t18;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// ColorCorrectionMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_ColorCorrectionMode.h"
// ColorCorrectionCurves
struct ColorCorrectionCurves_t183  : public PostEffectsBase_t166
{
	// UnityEngine.AnimationCurve ColorCorrectionCurves::redChannel
	AnimationCurve_t182 * ___redChannel_4;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::greenChannel
	AnimationCurve_t182 * ___greenChannel_5;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::blueChannel
	AnimationCurve_t182 * ___blueChannel_6;
	// System.Boolean ColorCorrectionCurves::useDepthCorrection
	bool ___useDepthCorrection_7;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::zCurve
	AnimationCurve_t182 * ___zCurve_8;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::depthRedChannel
	AnimationCurve_t182 * ___depthRedChannel_9;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::depthGreenChannel
	AnimationCurve_t182 * ___depthGreenChannel_10;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::depthBlueChannel
	AnimationCurve_t182 * ___depthBlueChannel_11;
	// UnityEngine.Material ColorCorrectionCurves::ccMaterial
	Material_t19 * ___ccMaterial_12;
	// UnityEngine.Material ColorCorrectionCurves::ccDepthMaterial
	Material_t19 * ___ccDepthMaterial_13;
	// UnityEngine.Material ColorCorrectionCurves::selectiveCcMaterial
	Material_t19 * ___selectiveCcMaterial_14;
	// UnityEngine.Texture2D ColorCorrectionCurves::rgbChannelTex
	Texture2D_t36 * ___rgbChannelTex_15;
	// UnityEngine.Texture2D ColorCorrectionCurves::rgbDepthChannelTex
	Texture2D_t36 * ___rgbDepthChannelTex_16;
	// UnityEngine.Texture2D ColorCorrectionCurves::zCurveTex
	Texture2D_t36 * ___zCurveTex_17;
	// System.Single ColorCorrectionCurves::saturation
	float ___saturation_18;
	// System.Boolean ColorCorrectionCurves::selectiveCc
	bool ___selectiveCc_19;
	// UnityEngine.Color ColorCorrectionCurves::selectiveFromColor
	Color_t29  ___selectiveFromColor_20;
	// UnityEngine.Color ColorCorrectionCurves::selectiveToColor
	Color_t29  ___selectiveToColor_21;
	// ColorCorrectionMode ColorCorrectionCurves::mode
	int32_t ___mode_22;
	// System.Boolean ColorCorrectionCurves::updateTextures
	bool ___updateTextures_23;
	// UnityEngine.Shader ColorCorrectionCurves::colorCorrectionCurvesShader
	Shader_t18 * ___colorCorrectionCurvesShader_24;
	// UnityEngine.Shader ColorCorrectionCurves::simpleColorCorrectionCurvesShader
	Shader_t18 * ___simpleColorCorrectionCurvesShader_25;
	// UnityEngine.Shader ColorCorrectionCurves::colorCorrectionSelectiveShader
	Shader_t18 * ___colorCorrectionSelectiveShader_26;
	// System.Boolean ColorCorrectionCurves::updateTexturesOnStartup
	bool ___updateTexturesOnStartup_27;
};
