#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Texture2D
struct Texture2D_t36;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t195;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// DepthOfFieldScatter/BlurType
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfFieldScatter_BlurT.h"
// DepthOfFieldScatter/BlurSampleCount
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfFieldScatter_BlurS.h"
// DepthOfFieldScatter
struct DepthOfFieldScatter_t196  : public PostEffectsBase_t166
{
	// System.Boolean DepthOfFieldScatter::visualizeFocus
	bool ___visualizeFocus_4;
	// System.Single DepthOfFieldScatter::focalLength
	float ___focalLength_5;
	// System.Single DepthOfFieldScatter::focalSize
	float ___focalSize_6;
	// System.Single DepthOfFieldScatter::aperture
	float ___aperture_7;
	// UnityEngine.Transform DepthOfFieldScatter::focalTransform
	Transform_t85 * ___focalTransform_8;
	// System.Single DepthOfFieldScatter::maxBlurSize
	float ___maxBlurSize_9;
	// System.Boolean DepthOfFieldScatter::highResolution
	bool ___highResolution_10;
	// DepthOfFieldScatter/BlurType DepthOfFieldScatter::blurType
	int32_t ___blurType_11;
	// DepthOfFieldScatter/BlurSampleCount DepthOfFieldScatter::blurSampleCount
	int32_t ___blurSampleCount_12;
	// System.Boolean DepthOfFieldScatter::nearBlur
	bool ___nearBlur_13;
	// System.Single DepthOfFieldScatter::foregroundOverlap
	float ___foregroundOverlap_14;
	// UnityEngine.Shader DepthOfFieldScatter::dofHdrShader
	Shader_t18 * ___dofHdrShader_15;
	// UnityEngine.Material DepthOfFieldScatter::dofHdrMaterial
	Material_t19 * ___dofHdrMaterial_16;
	// UnityEngine.Shader DepthOfFieldScatter::dx11BokehShader
	Shader_t18 * ___dx11BokehShader_17;
	// UnityEngine.Material DepthOfFieldScatter::dx11bokehMaterial
	Material_t19 * ___dx11bokehMaterial_18;
	// System.Single DepthOfFieldScatter::dx11BokehThreshhold
	float ___dx11BokehThreshhold_19;
	// System.Single DepthOfFieldScatter::dx11SpawnHeuristic
	float ___dx11SpawnHeuristic_20;
	// UnityEngine.Texture2D DepthOfFieldScatter::dx11BokehTexture
	Texture2D_t36 * ___dx11BokehTexture_21;
	// System.Single DepthOfFieldScatter::dx11BokehScale
	float ___dx11BokehScale_22;
	// System.Single DepthOfFieldScatter::dx11BokehIntensity
	float ___dx11BokehIntensity_23;
	// System.Single DepthOfFieldScatter::focalDistance01
	float ___focalDistance01_24;
	// UnityEngine.ComputeBuffer DepthOfFieldScatter::cbDrawArgs
	ComputeBuffer_t195 * ___cbDrawArgs_25;
	// UnityEngine.ComputeBuffer DepthOfFieldScatter::cbPoints
	ComputeBuffer_t195 * ___cbPoints_26;
	// System.Single DepthOfFieldScatter::internalBlurWidth
	float ___internalBlurWidth_27;
};
