#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// SensorData
struct SensorData_t1  : public Object_t
{
	// System.Single SensorData::Pose2D_X
	float ___Pose2D_X_0;
	// System.Single SensorData::Pose2D_Y
	float ___Pose2D_Y_1;
	// System.Single SensorData::Pose6D_X
	float ___Pose6D_X_2;
	// System.Single SensorData::Pose6D_Y
	float ___Pose6D_Y_3;
	// System.Single SensorData::Pose6D_Z
	float ___Pose6D_Z_4;
	// System.Single SensorData::Pose6D_Pitch
	float ___Pose6D_Pitch_5;
	// System.Single SensorData::Pose6D_Roll
	float ___Pose6D_Roll_6;
	// System.Single SensorData::Pose6D_Yaw
	float ___Pose6D_Yaw_7;
	// System.Single SensorData::Motion_X1
	float ___Motion_X1_8;
	// System.Single SensorData::Motion_X2
	float ___Motion_X2_9;
	// System.Single SensorData::Motion_Y1
	float ___Motion_Y1_10;
	// System.Single SensorData::Motion_Y2
	float ___Motion_Y2_11;
	// System.Single SensorData::Motion_Z1
	float ___Motion_Z1_12;
	// System.Single SensorData::Motion_Z2
	float ___Motion_Z2_13;
	// System.Single SensorData::Gesture_Scroll
	float ___Gesture_Scroll_14;
	// System.Single SensorData::Gesture_Direction
	float ___Gesture_Direction_15;
	// System.String SensorData::buttonState
	String_t* ___buttonState_16;
};
