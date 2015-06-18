#pragma once
#include <stdint.h>
// NodControler
struct NodControler_t102;
// NodRing
struct NodRing_t103;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Nod.GestureEventType
#include "AssemblyU2DCSharp_Nod_GestureEventType.h"
// Example2
struct Example2_t105  : public MonoBehaviour_t12
{
	// NodControler Example2::nod
	NodControler_t102 * ___nod_2;
	// NodRing Example2::ring
	NodRing_t103 * ___ring_3;
	// System.Boolean Example2::nodRingConnected
	bool ___nodRingConnected_4;
	// Nod.GestureEventType Example2::mostRecentGesture
	int32_t ___mostRecentGesture_5;
};
