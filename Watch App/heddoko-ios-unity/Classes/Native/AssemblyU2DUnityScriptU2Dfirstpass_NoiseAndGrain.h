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
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// NoiseAndGrain
struct NoiseAndGrain_t202  : public PostEffectsBase_t166
{
	// System.Single NoiseAndGrain::intensityMultiplier
	float ___intensityMultiplier_4;
	// System.Single NoiseAndGrain::generalIntensity
	float ___generalIntensity_5;
	// System.Single NoiseAndGrain::blackIntensity
	float ___blackIntensity_6;
	// System.Single NoiseAndGrain::whiteIntensity
	float ___whiteIntensity_7;
	// System.Single NoiseAndGrain::midGrey
	float ___midGrey_8;
	// System.Boolean NoiseAndGrain::dx11Grain
	bool ___dx11Grain_9;
	// System.Single NoiseAndGrain::softness
	float ___softness_10;
	// System.Boolean NoiseAndGrain::monochrome
	bool ___monochrome_11;
	// UnityEngine.Vector3 NoiseAndGrain::intensities
	Vector3_t54  ___intensities_12;
	// UnityEngine.Vector3 NoiseAndGrain::tiling
	Vector3_t54  ___tiling_13;
	// System.Single NoiseAndGrain::monochromeTiling
	float ___monochromeTiling_14;
	// UnityEngine.FilterMode NoiseAndGrain::filterMode
	int32_t ___filterMode_15;
	// UnityEngine.Texture2D NoiseAndGrain::noiseTexture
	Texture2D_t36 * ___noiseTexture_16;
	// UnityEngine.Shader NoiseAndGrain::noiseShader
	Shader_t18 * ___noiseShader_17;
	// UnityEngine.Material NoiseAndGrain::noiseMaterial
	Material_t19 * ___noiseMaterial_18;
	// UnityEngine.Shader NoiseAndGrain::dx11NoiseShader
	Shader_t18 * ___dx11NoiseShader_19;
	// UnityEngine.Material NoiseAndGrain::dx11NoiseMaterial
	Material_t19 * ___dx11NoiseMaterial_20;
};
struct NoiseAndGrain_t202_StaticFields{
	// System.Single NoiseAndGrain::TILE_AMOUNT
	float ___TILE_AMOUNT_21;
};
