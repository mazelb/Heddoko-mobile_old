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
// TweakMode34
#include "AssemblyU2DUnityScriptU2Dfirstpass_TweakMode34.h"
// BloomScreenBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_BloomScreenBlendMode.h"
// HDRBloomMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_HDRBloomMode.h"
// LensflareStyle34
#include "AssemblyU2DUnityScriptU2Dfirstpass_LensflareStyle34.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BloomAndLensFlares
struct BloomAndLensFlares_t177  : public PostEffectsBase_t166
{
	// TweakMode34 BloomAndLensFlares::tweakMode
	int32_t ___tweakMode_4;
	// BloomScreenBlendMode BloomAndLensFlares::screenBlendMode
	int32_t ___screenBlendMode_5;
	// HDRBloomMode BloomAndLensFlares::hdr
	int32_t ___hdr_6;
	// System.Boolean BloomAndLensFlares::doHdr
	bool ___doHdr_7;
	// System.Single BloomAndLensFlares::sepBlurSpread
	float ___sepBlurSpread_8;
	// System.Single BloomAndLensFlares::useSrcAlphaAsMask
	float ___useSrcAlphaAsMask_9;
	// System.Single BloomAndLensFlares::bloomIntensity
	float ___bloomIntensity_10;
	// System.Single BloomAndLensFlares::bloomThreshhold
	float ___bloomThreshhold_11;
	// System.Int32 BloomAndLensFlares::bloomBlurIterations
	int32_t ___bloomBlurIterations_12;
	// System.Boolean BloomAndLensFlares::lensflares
	bool ___lensflares_13;
	// System.Int32 BloomAndLensFlares::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_14;
	// LensflareStyle34 BloomAndLensFlares::lensflareMode
	int32_t ___lensflareMode_15;
	// System.Single BloomAndLensFlares::hollyStretchWidth
	float ___hollyStretchWidth_16;
	// System.Single BloomAndLensFlares::lensflareIntensity
	float ___lensflareIntensity_17;
	// System.Single BloomAndLensFlares::lensflareThreshhold
	float ___lensflareThreshhold_18;
	// UnityEngine.Color BloomAndLensFlares::flareColorA
	Color_t29  ___flareColorA_19;
	// UnityEngine.Color BloomAndLensFlares::flareColorB
	Color_t29  ___flareColorB_20;
	// UnityEngine.Color BloomAndLensFlares::flareColorC
	Color_t29  ___flareColorC_21;
	// UnityEngine.Color BloomAndLensFlares::flareColorD
	Color_t29  ___flareColorD_22;
	// System.Single BloomAndLensFlares::blurWidth
	float ___blurWidth_23;
	// UnityEngine.Texture2D BloomAndLensFlares::lensFlareVignetteMask
	Texture2D_t36 * ___lensFlareVignetteMask_24;
	// UnityEngine.Shader BloomAndLensFlares::lensFlareShader
	Shader_t18 * ___lensFlareShader_25;
	// UnityEngine.Material BloomAndLensFlares::lensFlareMaterial
	Material_t19 * ___lensFlareMaterial_26;
	// UnityEngine.Shader BloomAndLensFlares::vignetteShader
	Shader_t18 * ___vignetteShader_27;
	// UnityEngine.Material BloomAndLensFlares::vignetteMaterial
	Material_t19 * ___vignetteMaterial_28;
	// UnityEngine.Shader BloomAndLensFlares::separableBlurShader
	Shader_t18 * ___separableBlurShader_29;
	// UnityEngine.Material BloomAndLensFlares::separableBlurMaterial
	Material_t19 * ___separableBlurMaterial_30;
	// UnityEngine.Shader BloomAndLensFlares::addBrightStuffOneOneShader
	Shader_t18 * ___addBrightStuffOneOneShader_31;
	// UnityEngine.Material BloomAndLensFlares::addBrightStuffBlendOneOneMaterial
	Material_t19 * ___addBrightStuffBlendOneOneMaterial_32;
	// UnityEngine.Shader BloomAndLensFlares::screenBlendShader
	Shader_t18 * ___screenBlendShader_33;
	// UnityEngine.Material BloomAndLensFlares::screenBlend
	Material_t19 * ___screenBlend_34;
	// UnityEngine.Shader BloomAndLensFlares::hollywoodFlaresShader
	Shader_t18 * ___hollywoodFlaresShader_35;
	// UnityEngine.Material BloomAndLensFlares::hollywoodFlaresMaterial
	Material_t19 * ___hollywoodFlaresMaterial_36;
	// UnityEngine.Shader BloomAndLensFlares::brightPassFilterShader
	Shader_t18 * ___brightPassFilterShader_37;
	// UnityEngine.Material BloomAndLensFlares::brightPassFilterMaterial
	Material_t19 * ___brightPassFilterMaterial_38;
};
