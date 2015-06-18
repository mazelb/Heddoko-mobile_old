#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// GlobalFog/FogMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_GlobalFog_FogMode.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// GlobalFog
struct GlobalFog_t201  : public PostEffectsBase_t166
{
	// GlobalFog/FogMode GlobalFog::fogMode
	int32_t ___fogMode_4;
	// System.Single GlobalFog::CAMERA_NEAR
	float ___CAMERA_NEAR_5;
	// System.Single GlobalFog::CAMERA_FAR
	float ___CAMERA_FAR_6;
	// System.Single GlobalFog::CAMERA_FOV
	float ___CAMERA_FOV_7;
	// System.Single GlobalFog::CAMERA_ASPECT_RATIO
	float ___CAMERA_ASPECT_RATIO_8;
	// System.Single GlobalFog::startDistance
	float ___startDistance_9;
	// System.Single GlobalFog::globalDensity
	float ___globalDensity_10;
	// System.Single GlobalFog::heightScale
	float ___heightScale_11;
	// System.Single GlobalFog::height
	float ___height_12;
	// UnityEngine.Color GlobalFog::globalFogColor
	Color_t29  ___globalFogColor_13;
	// UnityEngine.Shader GlobalFog::fogShader
	Shader_t18 * ___fogShader_14;
	// UnityEngine.Material GlobalFog::fogMaterial
	Material_t19 * ___fogMaterial_15;
};
