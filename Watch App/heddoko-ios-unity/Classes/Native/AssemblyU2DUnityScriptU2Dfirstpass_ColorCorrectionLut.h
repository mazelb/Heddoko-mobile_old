#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Texture3D
struct Texture3D_t184;
// System.String
struct String_t;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// ColorCorrectionLut
struct ColorCorrectionLut_t185  : public PostEffectsBase_t166
{
	// UnityEngine.Shader ColorCorrectionLut::shader
	Shader_t18 * ___shader_4;
	// UnityEngine.Material ColorCorrectionLut::material
	Material_t19 * ___material_5;
	// UnityEngine.Texture3D ColorCorrectionLut::converted3DLut
	Texture3D_t184 * ___converted3DLut_6;
	// System.String ColorCorrectionLut::basedOnTempTex
	String_t* ___basedOnTempTex_7;
};
