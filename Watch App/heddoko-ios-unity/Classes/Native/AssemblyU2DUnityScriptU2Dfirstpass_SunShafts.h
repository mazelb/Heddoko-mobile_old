#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// SunShaftsResolution
#include "AssemblyU2DUnityScriptU2Dfirstpass_SunShaftsResolution.h"
// ShaftsScreenBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_ShaftsScreenBlendMode.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// SunShafts
struct SunShafts_t210  : public PostEffectsBase_t166
{
	// SunShaftsResolution SunShafts::resolution
	int32_t ___resolution_4;
	// ShaftsScreenBlendMode SunShafts::screenBlendMode
	int32_t ___screenBlendMode_5;
	// UnityEngine.Transform SunShafts::sunTransform
	Transform_t85 * ___sunTransform_6;
	// System.Int32 SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_7;
	// UnityEngine.Color SunShafts::sunColor
	Color_t29  ___sunColor_8;
	// System.Single SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_9;
	// System.Single SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_10;
	// System.Single SunShafts::useSkyBoxAlpha
	float ___useSkyBoxAlpha_11;
	// System.Single SunShafts::maxRadius
	float ___maxRadius_12;
	// System.Boolean SunShafts::useDepthTexture
	bool ___useDepthTexture_13;
	// UnityEngine.Shader SunShafts::sunShaftsShader
	Shader_t18 * ___sunShaftsShader_14;
	// UnityEngine.Material SunShafts::sunShaftsMaterial
	Material_t19 * ___sunShaftsMaterial_15;
	// UnityEngine.Shader SunShafts::simpleClearShader
	Shader_t18 * ___simpleClearShader_16;
	// UnityEngine.Material SunShafts::simpleClearMaterial
	Material_t19 * ___simpleClearMaterial_17;
};
