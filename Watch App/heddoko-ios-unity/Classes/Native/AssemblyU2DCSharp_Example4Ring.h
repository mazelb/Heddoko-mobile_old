#pragma once
#include <stdint.h>
// NodControler
struct NodControler_t102;
// NodRing
struct NodRing_t103;
// System.Diagnostics.Stopwatch
struct Stopwatch_t108;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Example4Ring
struct Example4Ring_t109  : public MonoBehaviour_t12
{
	// System.Int32 Example4Ring::ringID
	int32_t ___ringID_1;
	// NodControler Example4Ring::nod
	NodControler_t102 * ___nod_2;
	// NodRing Example4Ring::ring
	NodRing_t103 * ___ring_3;
	// System.Boolean Example4Ring::nodRingConnected
	bool ___nodRingConnected_4;
	// UnityEngine.Quaternion Example4Ring::inverseInitialRotation
	Quaternion_t55  ___inverseInitialRotation_5;
	// System.Diagnostics.Stopwatch Example4Ring::timer
	Stopwatch_t108 * ___timer_6;
	// System.Boolean Example4Ring::onTheClock
	bool ___onTheClock_7;
	// System.Boolean Example4Ring::done
	bool ___done_8;
	// System.String Example4Ring::msgPost
	String_t* ___msgPost_9;
	// System.Int64 Example4Ring::startTime
	int64_t ___startTime_10;
	// System.Int64 Example4Ring::endTime
	int64_t ___endTime_11;
};
