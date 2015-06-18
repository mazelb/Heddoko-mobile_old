#pragma once
#include <stdint.h>
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_ImageEffectBase.h"
// MotionBlur
struct MotionBlur_t33  : public ImageEffectBase_t24
{
	// System.Single MotionBlur::blurAmount
	float ___blurAmount_3;
	// System.Boolean MotionBlur::extraBlur
	bool ___extraBlur_4;
	// UnityEngine.RenderTexture MotionBlur::accumTexture
	RenderTexture_t21 * ___accumTexture_5;
};
