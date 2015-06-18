#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t74;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Water/WaterMode
#include "AssemblyU2DCSharp_Water_WaterMode.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// Water
struct Water_t75  : public MonoBehaviour_t12
{
	// Water/WaterMode Water::m_WaterMode
	int32_t ___m_WaterMode_1;
	// System.Boolean Water::m_DisablePixelLights
	bool ___m_DisablePixelLights_2;
	// System.Int32 Water::m_TextureSize
	int32_t ___m_TextureSize_3;
	// System.Single Water::m_ClipPlaneOffset
	float ___m_ClipPlaneOffset_4;
	// UnityEngine.LayerMask Water::m_ReflectLayers
	LayerMask_t76  ___m_ReflectLayers_5;
	// UnityEngine.LayerMask Water::m_RefractLayers
	LayerMask_t76  ___m_RefractLayers_6;
	// System.Collections.Hashtable Water::m_ReflectionCameras
	Hashtable_t74 * ___m_ReflectionCameras_7;
	// System.Collections.Hashtable Water::m_RefractionCameras
	Hashtable_t74 * ___m_RefractionCameras_8;
	// UnityEngine.RenderTexture Water::m_ReflectionTexture
	RenderTexture_t21 * ___m_ReflectionTexture_9;
	// UnityEngine.RenderTexture Water::m_RefractionTexture
	RenderTexture_t21 * ___m_RefractionTexture_10;
	// Water/WaterMode Water::m_HardwareWaterSupport
	int32_t ___m_HardwareWaterSupport_11;
	// System.Int32 Water::m_OldReflectionTextureSize
	int32_t ___m_OldReflectionTextureSize_12;
	// System.Int32 Water::m_OldRefractionTextureSize
	int32_t ___m_OldRefractionTextureSize_13;
};
struct Water_t75_StaticFields{
	// System.Boolean Water::s_InsideWater
	bool ___s_InsideWater_14;
};
