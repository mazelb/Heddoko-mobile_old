#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// EdgeDetectMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_EdgeDetectMode.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// EdgeDetectEffectNormals
struct EdgeDetectEffectNormals_t198  : public PostEffectsBase_t166
{
	// EdgeDetectMode EdgeDetectEffectNormals::mode
	int32_t ___mode_4;
	// System.Single EdgeDetectEffectNormals::sensitivityDepth
	float ___sensitivityDepth_5;
	// System.Single EdgeDetectEffectNormals::sensitivityNormals
	float ___sensitivityNormals_6;
	// System.Single EdgeDetectEffectNormals::edgeExp
	float ___edgeExp_7;
	// System.Single EdgeDetectEffectNormals::sampleDist
	float ___sampleDist_8;
	// System.Single EdgeDetectEffectNormals::edgesOnly
	float ___edgesOnly_9;
	// UnityEngine.Color EdgeDetectEffectNormals::edgesOnlyBgColor
	Color_t29  ___edgesOnlyBgColor_10;
	// UnityEngine.Shader EdgeDetectEffectNormals::edgeDetectShader
	Shader_t18 * ___edgeDetectShader_11;
	// UnityEngine.Material EdgeDetectEffectNormals::edgeDetectMaterial
	Material_t19 * ___edgeDetectMaterial_12;
	// EdgeDetectMode EdgeDetectEffectNormals::oldMode
	int32_t ___oldMode_13;
};
