#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// Vignetting/AberrationMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Vignetting_AberrationMode.h"
// Vignetting
struct Vignetting_t217  : public PostEffectsBase_t166
{
	// Vignetting/AberrationMode Vignetting::mode
	int32_t ___mode_4;
	// System.Single Vignetting::intensity
	float ___intensity_5;
	// System.Single Vignetting::chromaticAberration
	float ___chromaticAberration_6;
	// System.Single Vignetting::axialAberration
	float ___axialAberration_7;
	// System.Single Vignetting::blur
	float ___blur_8;
	// System.Single Vignetting::blurSpread
	float ___blurSpread_9;
	// System.Single Vignetting::luminanceDependency
	float ___luminanceDependency_10;
	// UnityEngine.Shader Vignetting::vignetteShader
	Shader_t18 * ___vignetteShader_11;
	// UnityEngine.Material Vignetting::vignetteMaterial
	Material_t19 * ___vignetteMaterial_12;
	// UnityEngine.Shader Vignetting::separableBlurShader
	Shader_t18 * ___separableBlurShader_13;
	// UnityEngine.Material Vignetting::separableBlurMaterial
	Material_t19 * ___separableBlurMaterial_14;
	// UnityEngine.Shader Vignetting::chromAberrationShader
	Shader_t18 * ___chromAberrationShader_15;
	// UnityEngine.Material Vignetting::chromAberrationMaterial
	Material_t19 * ___chromAberrationMaterial_16;
};
