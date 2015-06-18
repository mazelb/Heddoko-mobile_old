#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t2;
// System.Collections.Generic.List`1<SensorData>
struct List_1_t3;
// System.Action
struct Action_t4;
// System.Action`1<System.String>
struct Action_1_t5;
// System.Action`2<System.String,System.String>
struct Action_2_t6;
// System.Action`3<System.String,System.String,System.String>
struct Action_3_t7;
// System.Action`2<System.String,System.Byte[]>
struct Action_2_t8;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t9;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t10;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BluetoothDeviceScript
struct BluetoothDeviceScript_t11  : public MonoBehaviour_t12
{
	// System.Collections.Generic.List`1<System.String> BluetoothDeviceScript::DiscoveredDeviceList
	List_1_t2 * ___DiscoveredDeviceList_16;
	// System.Collections.Generic.List`1<SensorData> BluetoothDeviceScript::connectedSensors
	List_1_t3 * ___connectedSensors_17;
	// System.Action BluetoothDeviceScript::InitializedAction
	Action_t4 * ___InitializedAction_18;
	// System.Action BluetoothDeviceScript::DeinitializedAction
	Action_t4 * ___DeinitializedAction_19;
	// System.Action`1<System.String> BluetoothDeviceScript::ErrorAction
	Action_1_t5 * ___ErrorAction_20;
	// System.Action`1<System.String> BluetoothDeviceScript::ServiceAddedAction
	Action_1_t5 * ___ServiceAddedAction_21;
	// System.Action BluetoothDeviceScript::StartedAdvertisingAction
	Action_t4 * ___StartedAdvertisingAction_22;
	// System.Action BluetoothDeviceScript::StoppedAdvertisingAction
	Action_t4 * ___StoppedAdvertisingAction_23;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::DiscoveredPeripheralAction
	Action_2_t6 * ___DiscoveredPeripheralAction_24;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::RetrievedConnectedPeripheralAction
	Action_2_t6 * ___RetrievedConnectedPeripheralAction_25;
	// System.Action`1<System.String> BluetoothDeviceScript::ConnectedPeripheralAction
	Action_1_t5 * ___ConnectedPeripheralAction_26;
	// System.Action`1<System.String> BluetoothDeviceScript::DisconnectedPeripheralAction
	Action_1_t5 * ___DisconnectedPeripheralAction_27;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::DiscoveredServiceAction
	Action_2_t6 * ___DiscoveredServiceAction_28;
	// System.Action`3<System.String,System.String,System.String> BluetoothDeviceScript::DiscoveredCharacteristicAction
	Action_3_t7 * ___DiscoveredCharacteristicAction_29;
	// System.Action`1<System.String> BluetoothDeviceScript::DidWriteCharacteristicAction
	Action_1_t5 * ___DidWriteCharacteristicAction_30;
	// System.Action`1<System.String> BluetoothDeviceScript::DidUpdateNotifiationStateForCharacteristicAction
	Action_1_t5 * ___DidUpdateNotifiationStateForCharacteristicAction_31;
	// System.Action`2<System.String,System.Byte[]> BluetoothDeviceScript::DidUpdateCharacteristicValueAction
	Action_2_t8 * ___DidUpdateCharacteristicValueAction_32;
	// System.Boolean BluetoothDeviceScript::Initialized
	bool ___Initialized_33;
	// System.Int32 BluetoothDeviceScript::activeSensor
	int32_t ___activeSensor_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> BluetoothDeviceScript::sensorNames
	Dictionary_2_t9 * ___sensorNames_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> BluetoothDeviceScript::sensorIdentifiers
	Dictionary_2_t10 * ___sensorIdentifiers_36;
};
