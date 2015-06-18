#pragma once
#include <stdint.h>
// UnityEngine.Texture2D
struct Texture2D_t36;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// ScreenOverlay/OverlayBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_ScreenOverlay_OverlayBlen.h"
// ScreenOverlay
struct ScreenOverlay_t207  : public PostEffectsBase_t166
{
	// ScreenOverlay/OverlayBlendMode ScreenOverlay::blendMode
	int32_t ___blendMode_4;
	// System.Single ScreenOverlay::intensity
	float ___intensity_5;
	// UnityEngine.Texture2D ScreenOverlay::texture
	Texture2D_t36 * ___texture_6;
	// UnityEngine.Shader ScreenOverlay::overlayShader
	Shader_t18 * ___overlayShader_7;
	// UnityEngine.Material ScreenOverlay::overlayMaterial
	Material_t19 * ___overlayMaterial_8;
};
