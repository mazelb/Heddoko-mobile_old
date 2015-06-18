#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// Crease
struct Crease_t187  : public PostEffectsBase_t166
{
	// System.Single Crease::intensity
	float ___intensity_4;
	// System.Int32 Crease::softness
	int32_t ___softness_5;
	// System.Single Crease::spread
	float ___spread_6;
	// UnityEngine.Shader Crease::blurShader
	Shader_t18 * ___blurShader_7;
	// UnityEngine.Material Crease::blurMaterial
	Material_t19 * ___blurMaterial_8;
	// UnityEngine.Shader Crease::depthFetchShader
	Shader_t18 * ___depthFetchShader_9;
	// UnityEngine.Material Crease::depthFetchMaterial
	Material_t19 * ___depthFetchMaterial_10;
	// UnityEngine.Shader Crease::creaseApplyShader
	Shader_t18 * ___creaseApplyShader_11;
	// UnityEngine.Material Crease::creaseApplyMaterial
	Material_t19 * ___creaseApplyMaterial_12;
};
