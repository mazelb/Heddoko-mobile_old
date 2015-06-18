#pragma once
#include <stdint.h>
// UnityEngine.Texture2D
struct Texture2D_t36;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// Bloom/TweakMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_TweakMode.h"
// Bloom/BloomScreenBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_BloomScreenBlendMod.h"
// Bloom/HDRBloomMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_HDRBloomMode.h"
// Bloom/BloomQuality
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_BloomQuality.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Bloom/LensFlareStyle
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_LensFlareStyle.h"
// Bloom
struct Bloom_t172  : public PostEffectsBase_t166
{
	// Bloom/TweakMode Bloom::tweakMode
	int32_t ___tweakMode_4;
	// Bloom/BloomScreenBlendMode Bloom::screenBlendMode
	int32_t ___screenBlendMode_5;
	// Bloom/HDRBloomMode Bloom::hdr
	int32_t ___hdr_6;
	// System.Boolean Bloom::doHdr
	bool ___doHdr_7;
	// System.Single Bloom::sepBlurSpread
	float ___sepBlurSpread_8;
	// Bloom/BloomQuality Bloom::quality
	int32_t ___quality_9;
	// System.Single Bloom::bloomIntensity
	float ___bloomIntensity_10;
	// System.Single Bloom::bloomThreshhold
	float ___bloomThreshhold_11;
	// UnityEngine.Color Bloom::bloomThreshholdColor
	Color_t29  ___bloomThreshholdColor_12;
	// System.Int32 Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_13;
	// System.Int32 Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_14;
	// System.Single Bloom::flareRotation
	float ___flareRotation_15;
	// Bloom/LensFlareStyle Bloom::lensflareMode
	int32_t ___lensflareMode_16;
	// System.Single Bloom::hollyStretchWidth
	float ___hollyStretchWidth_17;
	// System.Single Bloom::lensflareIntensity
	float ___lensflareIntensity_18;
	// System.Single Bloom::lensflareThreshhold
	float ___lensflareThreshhold_19;
	// System.Single Bloom::lensFlareSaturation
	float ___lensFlareSaturation_20;
	// UnityEngine.Color Bloom::flareColorA
	Color_t29  ___flareColorA_21;
	// UnityEngine.Color Bloom::flareColorB
	Color_t29  ___flareColorB_22;
	// UnityEngine.Color Bloom::flareColorC
	Color_t29  ___flareColorC_23;
	// UnityEngine.Color Bloom::flareColorD
	Color_t29  ___flareColorD_24;
	// System.Single Bloom::blurWidth
	float ___blurWidth_25;
	// UnityEngine.Texture2D Bloom::lensFlareVignetteMask
	Texture2D_t36 * ___lensFlareVignetteMask_26;
	// UnityEngine.Shader Bloom::lensFlareShader
	Shader_t18 * ___lensFlareShader_27;
	// UnityEngine.Material Bloom::lensFlareMaterial
	Material_t19 * ___lensFlareMaterial_28;
	// UnityEngine.Shader Bloom::screenBlendShader
	Shader_t18 * ___screenBlendShader_29;
	// UnityEngine.Material Bloom::screenBlend
	Material_t19 * ___screenBlend_30;
	// UnityEngine.Shader Bloom::blurAndFlaresShader
	Shader_t18 * ___blurAndFlaresShader_31;
	// UnityEngine.Material Bloom::blurAndFlaresMaterial
	Material_t19 * ___blurAndFlaresMaterial_32;
	// UnityEngine.Shader Bloom::brightPassFilterShader
	Shader_t18 * ___brightPassFilterShader_33;
	// UnityEngine.Material Bloom::brightPassFilterMaterial
	Material_t19 * ___brightPassFilterMaterial_34;
};
