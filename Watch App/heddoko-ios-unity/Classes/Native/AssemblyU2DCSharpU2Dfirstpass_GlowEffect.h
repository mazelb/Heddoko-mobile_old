#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// GlowEffect
struct GlowEffect_t28  : public MonoBehaviour_t12
{
	// System.Single GlowEffect::glowIntensity
	float ___glowIntensity_1;
	// System.Int32 GlowEffect::blurIterations
	int32_t ___blurIterations_2;
	// System.Single GlowEffect::blurSpread
	float ___blurSpread_3;
	// UnityEngine.Color GlowEffect::glowTint
	Color_t29  ___glowTint_4;
	// UnityEngine.Shader GlowEffect::compositeShader
	Shader_t18 * ___compositeShader_5;
	// UnityEngine.Material GlowEffect::m_CompositeMaterial
	Material_t19 * ___m_CompositeMaterial_6;
	// UnityEngine.Shader GlowEffect::blurShader
	Shader_t18 * ___blurShader_7;
	// UnityEngine.Material GlowEffect::m_BlurMaterial
	Material_t19 * ___m_BlurMaterial_8;
	// UnityEngine.Shader GlowEffect::downsampleShader
	Shader_t18 * ___downsampleShader_9;
	// UnityEngine.Material GlowEffect::m_DownsampleMaterial
	Material_t19 * ___m_DownsampleMaterial_10;
};
