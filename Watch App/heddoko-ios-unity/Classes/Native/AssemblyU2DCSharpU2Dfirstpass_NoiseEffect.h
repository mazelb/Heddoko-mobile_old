#pragma once
#include <stdint.h>
// UnityEngine.Texture
struct Texture_t22;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// NoiseEffect
struct NoiseEffect_t34  : public MonoBehaviour_t12
{
	// System.Boolean NoiseEffect::monochrome
	bool ___monochrome_1;
	// System.Boolean NoiseEffect::rgbFallback
	bool ___rgbFallback_2;
	// System.Single NoiseEffect::grainIntensityMin
	float ___grainIntensityMin_3;
	// System.Single NoiseEffect::grainIntensityMax
	float ___grainIntensityMax_4;
	// System.Single NoiseEffect::grainSize
	float ___grainSize_5;
	// System.Single NoiseEffect::scratchIntensityMin
	float ___scratchIntensityMin_6;
	// System.Single NoiseEffect::scratchIntensityMax
	float ___scratchIntensityMax_7;
	// System.Single NoiseEffect::scratchFPS
	float ___scratchFPS_8;
	// System.Single NoiseEffect::scratchJitter
	float ___scratchJitter_9;
	// UnityEngine.Texture NoiseEffect::grainTexture
	Texture_t22 * ___grainTexture_10;
	// UnityEngine.Texture NoiseEffect::scratchTexture
	Texture_t22 * ___scratchTexture_11;
	// UnityEngine.Shader NoiseEffect::shaderRGB
	Shader_t18 * ___shaderRGB_12;
	// UnityEngine.Shader NoiseEffect::shaderYUV
	Shader_t18 * ___shaderYUV_13;
	// UnityEngine.Material NoiseEffect::m_MaterialRGB
	Material_t19 * ___m_MaterialRGB_14;
	// UnityEngine.Material NoiseEffect::m_MaterialYUV
	Material_t19 * ___m_MaterialYUV_15;
	// System.Single NoiseEffect::scratchTimeLeft
	float ___scratchTimeLeft_16;
	// System.Single NoiseEffect::scratchX
	float ___scratchX_17;
	// System.Single NoiseEffect::scratchY
	float ___scratchY_18;
};
