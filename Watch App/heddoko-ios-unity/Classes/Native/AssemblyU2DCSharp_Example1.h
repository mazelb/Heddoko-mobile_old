#pragma once
#include <stdint.h>
// NodControler
struct NodControler_t102;
// NodRing
struct NodRing_t103;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Example1
struct Example1_t104  : public MonoBehaviour_t12
{
	// NodControler Example1::nod
	NodControler_t102 * ___nod_2;
	// NodRing Example1::ring
	NodRing_t103 * ___ring_3;
	// System.Boolean Example1::nodRingConnected
	bool ___nodRingConnected_4;
	// UnityEngine.Quaternion Example1::inverseInitialRotation
	Quaternion_t55  ___inverseInitialRotation_5;
};
