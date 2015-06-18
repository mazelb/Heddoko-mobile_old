#pragma once
#include <stdint.h>
// NodControlerInterface
struct NodControlerInterface_t117;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Nod.NodButtons
#include "AssemblyU2DCSharp_Nod_NodButtons.h"
// Nod.GestureEventType
#include "AssemblyU2DCSharp_Nod_GestureEventType.h"
// Nod.NodPosition2D
#include "AssemblyU2DCSharp_Nod_NodPosition2D.h"
// NodRing
struct NodRing_t103  : public Object_t
{
	// NodControlerInterface NodRing::ringInterface
	Object_t * ___ringInterface_0;
	// System.Int32 NodRing::ringIndex
	int32_t ___ringIndex_1;
	// System.String NodRing::ringAddress
	String_t* ___ringAddress_2;
	// UnityEngine.Quaternion NodRing::ringRotation
	Quaternion_t55  ___ringRotation_3;
	// Nod.NodButtons NodRing::buttonState
	NodButtons_t113  ___buttonState_4;
	// Nod.GestureEventType NodRing::gestureState
	int32_t ___gestureState_5;
	// Nod.NodPosition2D NodRing::position2D
	NodPosition2D_t112  ___position2D_6;
	// System.Boolean NodRing::subscribedToButton
	bool ___subscribedToButton_7;
	// System.Boolean NodRing::subscribedToPose6D
	bool ___subscribedToPose6D_8;
	// System.Boolean NodRing::subscribedToGesture
	bool ___subscribedToGesture_9;
	// System.Boolean NodRing::subscribedToPosition2D
	bool ___subscribedToPosition2D_10;
	// System.Boolean NodRing::readFirstOrientation
	bool ___readFirstOrientation_11;
	// UnityEngine.Quaternion NodRing::inverseInitialOrientation
	Quaternion_t55  ___inverseInitialOrientation_12;
	// System.Int32 NodRing::buttonSubscribeCount
	int32_t ___buttonSubscribeCount_13;
	// System.Int32 NodRing::pose6DSubscribeCount
	int32_t ___pose6DSubscribeCount_14;
	// System.Int32 NodRing::gestureSubscribeCount
	int32_t ___gestureSubscribeCount_15;
	// System.Int32 NodRing::position2DSubscribeCount
	int32_t ___position2DSubscribeCount_16;
};
