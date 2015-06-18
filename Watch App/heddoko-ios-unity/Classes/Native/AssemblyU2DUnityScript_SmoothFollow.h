#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SmoothFollow
struct SmoothFollow_t232  : public MonoBehaviour_t12
{
	// UnityEngine.Transform SmoothFollow::target
	Transform_t85 * ___target_1;
	// System.Single SmoothFollow::distance
	float ___distance_2;
	// System.Single SmoothFollow::height
	float ___height_3;
	// System.Single SmoothFollow::heightDamping
	float ___heightDamping_4;
	// System.Single SmoothFollow::rotationDamping
	float ___rotationDamping_5;
};
