#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Texture2D
struct Texture2D_t36;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SSAOEffect/SSAOSamples
#include "AssemblyU2DCSharpU2Dfirstpass_SSAOEffect_SSAOSamples.h"
// SSAOEffect
struct SSAOEffect_t37  : public MonoBehaviour_t12
{
	// System.Single SSAOEffect::m_Radius
	float ___m_Radius_1;
	// SSAOEffect/SSAOSamples SSAOEffect::m_SampleCount
	int32_t ___m_SampleCount_2;
	// System.Single SSAOEffect::m_OcclusionIntensity
	float ___m_OcclusionIntensity_3;
	// System.Int32 SSAOEffect::m_Blur
	int32_t ___m_Blur_4;
	// System.Int32 SSAOEffect::m_Downsampling
	int32_t ___m_Downsampling_5;
	// System.Single SSAOEffect::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_6;
	// System.Single SSAOEffect::m_MinZ
	float ___m_MinZ_7;
	// UnityEngine.Shader SSAOEffect::m_SSAOShader
	Shader_t18 * ___m_SSAOShader_8;
	// UnityEngine.Material SSAOEffect::m_SSAOMaterial
	Material_t19 * ___m_SSAOMaterial_9;
	// UnityEngine.Texture2D SSAOEffect::m_RandomTexture
	Texture2D_t36 * ___m_RandomTexture_10;
	// System.Boolean SSAOEffect::m_Supported
	bool ___m_Supported_11;
};
