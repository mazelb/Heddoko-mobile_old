#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Shader
struct Shader_t18;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// ContrastEnhance
struct ContrastEnhance_t186  : public PostEffectsBase_t166
{
	// System.Single ContrastEnhance::intensity
	float ___intensity_4;
	// System.Single ContrastEnhance::threshhold
	float ___threshhold_5;
	// UnityEngine.Material ContrastEnhance::separableBlurMaterial
	Material_t19 * ___separableBlurMaterial_6;
	// UnityEngine.Material ContrastEnhance::contrastCompositeMaterial
	Material_t19 * ___contrastCompositeMaterial_7;
	// System.Single ContrastEnhance::blurSpread
	float ___blurSpread_8;
	// UnityEngine.Shader ContrastEnhance::separableBlurShader
	Shader_t18 * ___separableBlurShader_9;
	// UnityEngine.Shader ContrastEnhance::contrastCompositeShader
	Shader_t18 * ___contrastCompositeShader_10;
};
