#pragma once
#include <stdint.h>
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t25;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ContrastStretchEffect
struct ContrastStretchEffect_t26  : public MonoBehaviour_t12
{
	// System.Single ContrastStretchEffect::adaptationSpeed
	float ___adaptationSpeed_1;
	// System.Single ContrastStretchEffect::limitMinimum
	float ___limitMinimum_2;
	// System.Single ContrastStretchEffect::limitMaximum
	float ___limitMaximum_3;
	// UnityEngine.RenderTexture[] ContrastStretchEffect::adaptRenderTex
	RenderTextureU5BU5D_t25* ___adaptRenderTex_4;
	// System.Int32 ContrastStretchEffect::curAdaptIndex
	int32_t ___curAdaptIndex_5;
	// UnityEngine.Shader ContrastStretchEffect::shaderLum
	Shader_t18 * ___shaderLum_6;
	// UnityEngine.Material ContrastStretchEffect::m_materialLum
	Material_t19 * ___m_materialLum_7;
	// UnityEngine.Shader ContrastStretchEffect::shaderReduce
	Shader_t18 * ___shaderReduce_8;
	// UnityEngine.Material ContrastStretchEffect::m_materialReduce
	Material_t19 * ___m_materialReduce_9;
	// UnityEngine.Shader ContrastStretchEffect::shaderAdapt
	Shader_t18 * ___shaderAdapt_10;
	// UnityEngine.Material ContrastStretchEffect::m_materialAdapt
	Material_t19 * ___m_materialAdapt_11;
	// UnityEngine.Shader ContrastStretchEffect::shaderApply
	Shader_t18 * ___shaderApply_12;
	// UnityEngine.Material ContrastStretchEffect::m_materialApply
	Material_t19 * ___m_materialApply_13;
};
