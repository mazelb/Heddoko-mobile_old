#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// AAMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_AAMode.h"
// AntialiasingAsPostEffect
struct AntialiasingAsPostEffect_t165  : public PostEffectsBase_t166
{
	// AAMode AntialiasingAsPostEffect::mode
	int32_t ___mode_4;
	// System.Boolean AntialiasingAsPostEffect::showGeneratedNormals
	bool ___showGeneratedNormals_5;
	// System.Single AntialiasingAsPostEffect::offsetScale
	float ___offsetScale_6;
	// System.Single AntialiasingAsPostEffect::blurRadius
	float ___blurRadius_7;
	// System.Single AntialiasingAsPostEffect::edgeThresholdMin
	float ___edgeThresholdMin_8;
	// System.Single AntialiasingAsPostEffect::edgeThreshold
	float ___edgeThreshold_9;
	// System.Single AntialiasingAsPostEffect::edgeSharpness
	float ___edgeSharpness_10;
	// System.Boolean AntialiasingAsPostEffect::dlaaSharp
	bool ___dlaaSharp_11;
	// UnityEngine.Shader AntialiasingAsPostEffect::ssaaShader
	Shader_t18 * ___ssaaShader_12;
	// UnityEngine.Material AntialiasingAsPostEffect::ssaa
	Material_t19 * ___ssaa_13;
	// UnityEngine.Shader AntialiasingAsPostEffect::dlaaShader
	Shader_t18 * ___dlaaShader_14;
	// UnityEngine.Material AntialiasingAsPostEffect::dlaa
	Material_t19 * ___dlaa_15;
	// UnityEngine.Shader AntialiasingAsPostEffect::nfaaShader
	Shader_t18 * ___nfaaShader_16;
	// UnityEngine.Material AntialiasingAsPostEffect::nfaa
	Material_t19 * ___nfaa_17;
	// UnityEngine.Shader AntialiasingAsPostEffect::shaderFXAAPreset2
	Shader_t18 * ___shaderFXAAPreset2_18;
	// UnityEngine.Material AntialiasingAsPostEffect::materialFXAAPreset2
	Material_t19 * ___materialFXAAPreset2_19;
	// UnityEngine.Shader AntialiasingAsPostEffect::shaderFXAAPreset3
	Shader_t18 * ___shaderFXAAPreset3_20;
	// UnityEngine.Material AntialiasingAsPostEffect::materialFXAAPreset3
	Material_t19 * ___materialFXAAPreset3_21;
	// UnityEngine.Shader AntialiasingAsPostEffect::shaderFXAAII
	Shader_t18 * ___shaderFXAAII_22;
	// UnityEngine.Material AntialiasingAsPostEffect::materialFXAAII
	Material_t19 * ___materialFXAAII_23;
	// UnityEngine.Shader AntialiasingAsPostEffect::shaderFXAAIII
	Shader_t18 * ___shaderFXAAIII_24;
	// UnityEngine.Material AntialiasingAsPostEffect::materialFXAAIII
	Material_t19 * ___materialFXAAIII_25;
};
