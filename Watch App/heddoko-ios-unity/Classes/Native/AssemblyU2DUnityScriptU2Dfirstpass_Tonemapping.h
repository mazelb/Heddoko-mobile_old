#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t182;
struct AnimationCurve_t182_marshaled;
// UnityEngine.Texture2D
struct Texture2D_t36;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// Tonemapping/TonemapperType
#include "AssemblyU2DUnityScriptU2Dfirstpass_Tonemapping_TonemapperTyp.h"
// Tonemapping/AdaptiveTexSize
#include "AssemblyU2DUnityScriptU2Dfirstpass_Tonemapping_AdaptiveTexSi.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// Tonemapping
struct Tonemapping_t214  : public PostEffectsBase_t166
{
	// Tonemapping/TonemapperType Tonemapping::type
	int32_t ___type_4;
	// Tonemapping/AdaptiveTexSize Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_5;
	// UnityEngine.AnimationCurve Tonemapping::remapCurve
	AnimationCurve_t182 * ___remapCurve_6;
	// UnityEngine.Texture2D Tonemapping::curveTex
	Texture2D_t36 * ___curveTex_7;
	// System.Single Tonemapping::exposureAdjustment
	float ___exposureAdjustment_8;
	// System.Single Tonemapping::middleGrey
	float ___middleGrey_9;
	// System.Single Tonemapping::white
	float ___white_10;
	// System.Single Tonemapping::adaptionSpeed
	float ___adaptionSpeed_11;
	// UnityEngine.Shader Tonemapping::tonemapper
	Shader_t18 * ___tonemapper_12;
	// System.Boolean Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_13;
	// UnityEngine.Material Tonemapping::tonemapMaterial
	Material_t19 * ___tonemapMaterial_14;
	// UnityEngine.RenderTexture Tonemapping::rt
	RenderTexture_t21 * ___rt_15;
	// UnityEngine.RenderTextureFormat Tonemapping::rtFormat
	int32_t ___rtFormat_16;
};
