#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t19;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// WaterQuality
#include "AssemblyU2DCSharp_WaterQuality.h"
// WaterBase
struct WaterBase_t77  : public MonoBehaviour_t12
{
	// UnityEngine.Material WaterBase::sharedMaterial
	Material_t19 * ___sharedMaterial_1;
	// WaterQuality WaterBase::waterQuality
	int32_t ___waterQuality_2;
	// System.Boolean WaterBase::edgeBlend
	bool ___edgeBlend_3;
};
