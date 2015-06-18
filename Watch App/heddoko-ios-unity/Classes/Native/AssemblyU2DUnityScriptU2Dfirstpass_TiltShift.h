#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// TiltShift
struct TiltShift_t211  : public PostEffectsBase_t166
{
	// UnityEngine.Shader TiltShift::tiltShiftShader
	Shader_t18 * ___tiltShiftShader_4;
	// UnityEngine.Material TiltShift::tiltShiftMaterial
	Material_t19 * ___tiltShiftMaterial_5;
	// System.Int32 TiltShift::renderTextureDivider
	int32_t ___renderTextureDivider_6;
	// System.Int32 TiltShift::blurIterations
	int32_t ___blurIterations_7;
	// System.Boolean TiltShift::enableForegroundBlur
	bool ___enableForegroundBlur_8;
	// System.Int32 TiltShift::foregroundBlurIterations
	int32_t ___foregroundBlurIterations_9;
	// System.Single TiltShift::maxBlurSpread
	float ___maxBlurSpread_10;
	// System.Single TiltShift::focalPoint
	float ___focalPoint_11;
	// System.Single TiltShift::smoothness
	float ___smoothness_12;
	// System.Boolean TiltShift::visualizeCoc
	bool ___visualizeCoc_13;
	// System.Single TiltShift::start01
	float ___start01_14;
	// System.Single TiltShift::distance01
	float ___distance01_15;
	// System.Single TiltShift::end01
	float ___end01_16;
	// System.Single TiltShift::curve
	float ___curve_17;
};
