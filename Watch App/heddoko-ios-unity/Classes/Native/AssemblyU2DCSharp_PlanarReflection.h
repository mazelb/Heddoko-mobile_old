#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t56;
// UnityEngine.Material
struct Material_t19;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_t83;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlanarReflection
struct PlanarReflection_t84  : public MonoBehaviour_t12
{
	// UnityEngine.LayerMask PlanarReflection::reflectionMask
	LayerMask_t76  ___reflectionMask_1;
	// System.Boolean PlanarReflection::reflectSkybox
	bool ___reflectSkybox_2;
	// UnityEngine.Color PlanarReflection::clearColor
	Color_t29  ___clearColor_3;
	// System.String PlanarReflection::reflectionSampler
	String_t* ___reflectionSampler_4;
	// System.Single PlanarReflection::clipPlaneOffset
	float ___clipPlaneOffset_5;
	// UnityEngine.Vector3 PlanarReflection::oldpos
	Vector3_t54  ___oldpos_6;
	// UnityEngine.Camera PlanarReflection::reflectionCamera
	Camera_t56 * ___reflectionCamera_7;
	// UnityEngine.Material PlanarReflection::sharedMaterial
	Material_t19 * ___sharedMaterial_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean> PlanarReflection::helperCameras
	Dictionary_2_t83 * ___helperCameras_9;
};
