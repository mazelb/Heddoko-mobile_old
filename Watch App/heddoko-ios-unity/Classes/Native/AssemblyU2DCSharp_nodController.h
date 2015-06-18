#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t70;
// System.Byte[]
struct ByteU5BU5D_t13;
// BluetoothDeviceScript
struct BluetoothDeviceScript_t11;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>
struct List_1_t129;
// System.Object
#include "mscorlib_System_Object.h"
// nodController
struct nodController_t90  : public Object_t
{
	// UnityEngine.GUISkin nodController::skin
	GUISkin_t70 * ___skin_0;
	// System.Byte[] nodController::data
	ByteU5BU5D_t13* ___data_1;
	// BluetoothDeviceScript nodController::bluetoothDeviceScript
	BluetoothDeviceScript_t11 * ___bluetoothDeviceScript_2;
	// System.String nodController::serviceUUID
	String_t* ___serviceUUID_3;
	// System.String nodController::characteristicUUID_Buton
	String_t* ___characteristicUUID_Buton_4;
	// System.String nodController::characteristicUUID_Pos6D
	String_t* ___characteristicUUID_Pos6D_5;
	// System.String nodController::characteristicUUID_Gesture
	String_t* ___characteristicUUID_Gesture_6;
	// System.String nodController::characteristicUUID_Pos2D
	String_t* ___characteristicUUID_Pos2D_7;
	// System.String nodController::characteristicUUID_Motion
	String_t* ___characteristicUUID_Motion_8;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>> nodController::movement
	List_1_t129 * ___movement_9;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>> nodController::referenceMovement
	List_1_t129 * ___referenceMovement_10;
	// System.Boolean nodController::realTimeTracking
	bool ___realTimeTracking_11;
	// System.Boolean nodController::recording
	bool ___recording_12;
	// System.Boolean nodController::loop
	bool ___loop_13;
	// System.Boolean nodController::dummyMode
	bool ___dummyMode_14;
	// System.Int32 nodController::dummyConnectedDevices
	int32_t ___dummyConnectedDevices_15;
	// System.String nodController::deviceName0
	String_t* ___deviceName0_16;
	// System.String nodController::deviceName1
	String_t* ___deviceName1_17;
	// System.String nodController::deviceName2
	String_t* ___deviceName2_18;
	// System.String nodController::deviceName3
	String_t* ___deviceName3_19;
	// System.String nodController::deviceName4
	String_t* ___deviceName4_20;
	// System.String nodController::deviceName5
	String_t* ___deviceName5_21;
	// System.String nodController::deviceName6
	String_t* ___deviceName6_22;
	// System.String nodController::deviceName7
	String_t* ___deviceName7_23;
	// System.String nodController::deviceName8
	String_t* ___deviceName8_24;
	// System.String nodController::deviceName9
	String_t* ___deviceName9_25;
	// System.Boolean nodController::DisconnectedFromAll
	bool ___DisconnectedFromAll_26;
};
