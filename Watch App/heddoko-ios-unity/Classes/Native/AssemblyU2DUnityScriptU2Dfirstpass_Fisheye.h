#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// Fisheye
struct Fisheye_t199  : public PostEffectsBase_t166
{
	// System.Single Fisheye::strengthX
	float ___strengthX_4;
	// System.Single Fisheye::strengthY
	float ___strengthY_5;
	// UnityEngine.Shader Fisheye::fishEyeShader
	Shader_t18 * ___fishEyeShader_6;
	// UnityEngine.Material Fisheye::fisheyeMaterial
	Material_t19 * ___fisheyeMaterial_7;
};
