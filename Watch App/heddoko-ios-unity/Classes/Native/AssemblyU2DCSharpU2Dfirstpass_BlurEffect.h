#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BlurEffect
struct BlurEffect_t20  : public MonoBehaviour_t12
{
	// System.Int32 BlurEffect::iterations
	int32_t ___iterations_1;
	// System.Single BlurEffect::blurSpread
	float ___blurSpread_2;
	// UnityEngine.Shader BlurEffect::blurShader
	Shader_t18 * ___blurShader_3;
};
struct BlurEffect_t20_StaticFields{
	// UnityEngine.Material BlurEffect::m_Material
	Material_t19 * ___m_Material_4;
};
