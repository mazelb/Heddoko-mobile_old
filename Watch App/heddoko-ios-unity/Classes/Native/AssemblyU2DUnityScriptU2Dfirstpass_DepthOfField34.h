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
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// Dof34QualitySetting
#include "AssemblyU2DUnityScriptU2Dfirstpass_Dof34QualitySetting.h"
// DofResolution
#include "AssemblyU2DUnityScriptU2Dfirstpass_DofResolution.h"
// DofBlurriness
#include "AssemblyU2DUnityScriptU2Dfirstpass_DofBlurriness.h"
// BokehDestination
#include "AssemblyU2DUnityScriptU2Dfirstpass_BokehDestination.h"
// DepthOfField34
struct DepthOfField34_t192  : public PostEffectsBase_t166
{
	// Dof34QualitySetting DepthOfField34::quality
	int32_t ___quality_6;
	// DofResolution DepthOfField34::resolution
	int32_t ___resolution_7;
	// System.Boolean DepthOfField34::simpleTweakMode
	bool ___simpleTweakMode_8;
	// System.Single DepthOfField34::focalPoint
	float ___focalPoint_9;
	// System.Single DepthOfField34::smoothness
	float ___smoothness_10;
	// System.Single DepthOfField34::focalZDistance
	float ___focalZDistance_11;
	// System.Single DepthOfField34::focalZStartCurve
	float ___focalZStartCurve_12;
	// System.Single DepthOfField34::focalZEndCurve
	float ___focalZEndCurve_13;
	// System.Single DepthOfField34::focalStartCurve
	float ___focalStartCurve_14;
	// System.Single DepthOfField34::focalEndCurve
	float ___focalEndCurve_15;
	// System.Single DepthOfField34::focalDistance01
	float ___focalDistance01_16;
	// UnityEngine.Transform DepthOfField34::objectFocus
	Transform_t85 * ___objectFocus_17;
	// System.Single DepthOfField34::focalSize
	float ___focalSize_18;
	// DofBlurriness DepthOfField34::bluriness
	int32_t ___bluriness_19;
	// System.Single DepthOfField34::maxBlurSpread
	float ___maxBlurSpread_20;
	// System.Single DepthOfField34::foregroundBlurExtrude
	float ___foregroundBlurExtrude_21;
	// UnityEngine.Shader DepthOfField34::dofBlurShader
	Shader_t18 * ___dofBlurShader_22;
	// UnityEngine.Material DepthOfField34::dofBlurMaterial
	Material_t19 * ___dofBlurMaterial_23;
	// UnityEngine.Shader DepthOfField34::dofShader
	Shader_t18 * ___dofShader_24;
	// UnityEngine.Material DepthOfField34::dofMaterial
	Material_t19 * ___dofMaterial_25;
	// System.Boolean DepthOfField34::visualize
	bool ___visualize_26;
	// BokehDestination DepthOfField34::bokehDestination
	int32_t ___bokehDestination_27;
	// System.Single DepthOfField34::widthOverHeight
	float ___widthOverHeight_28;
	// System.Single DepthOfField34::oneOverBaseSize
	float ___oneOverBaseSize_29;
	// System.Boolean DepthOfField34::bokeh
	bool ___bokeh_30;
	// System.Boolean DepthOfField34::bokehSupport
	bool ___bokehSupport_31;
	// UnityEngine.Shader DepthOfField34::bokehShader
	Shader_t18 * ___bokehShader_32;
	// UnityEngine.Texture2D DepthOfField34::bokehTexture
	Texture2D_t36 * ___bokehTexture_33;
	// System.Single DepthOfField34::bokehScale
	float ___bokehScale_34;
	// System.Single DepthOfField34::bokehIntensity
	float ___bokehIntensity_35;
	// System.Single DepthOfField34::bokehThreshholdContrast
	float ___bokehThreshholdContrast_36;
	// System.Single DepthOfField34::bokehThreshholdLuminance
	float ___bokehThreshholdLuminance_37;
	// System.Int32 DepthOfField34::bokehDownsample
	int32_t ___bokehDownsample_38;
	// UnityEngine.Material DepthOfField34::bokehMaterial
	Material_t19 * ___bokehMaterial_39;
	// UnityEngine.RenderTexture DepthOfField34::foregroundTexture
	RenderTexture_t21 * ___foregroundTexture_40;
	// UnityEngine.RenderTexture DepthOfField34::mediumRezWorkTexture
	RenderTexture_t21 * ___mediumRezWorkTexture_41;
	// UnityEngine.RenderTexture DepthOfField34::finalDefocus
	RenderTexture_t21 * ___finalDefocus_42;
	// UnityEngine.RenderTexture DepthOfField34::lowRezWorkTexture
	RenderTexture_t21 * ___lowRezWorkTexture_43;
	// UnityEngine.RenderTexture DepthOfField34::bokehSource
	RenderTexture_t21 * ___bokehSource_44;
	// UnityEngine.RenderTexture DepthOfField34::bokehSource2
	RenderTexture_t21 * ___bokehSource2_45;
};
struct DepthOfField34_t192_StaticFields{
	// System.Int32 DepthOfField34::SMOOTH_DOWNSAMPLE_PASS
	int32_t ___SMOOTH_DOWNSAMPLE_PASS_4;
	// System.Single DepthOfField34::BOKEH_EXTRA_BLUR
	float ___BOKEH_EXTRA_BLUR_5;
};
