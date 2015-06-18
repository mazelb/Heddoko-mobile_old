#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BluetoothDeviceScript
struct BluetoothDeviceScript_t11;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.String
struct String_t;

// System.Void BluetoothDeviceScript::.ctor()
extern "C" void BluetoothDeviceScript__ctor_m1 (BluetoothDeviceScript_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothDeviceScript::Start()
extern "C" void BluetoothDeviceScript_Start_m2 (BluetoothDeviceScript_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothDeviceScript::Update()
extern "C" void BluetoothDeviceScript_Update_m3 (BluetoothDeviceScript_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BluetoothDeviceScript::GetBytes(System.String)
extern "C" ByteU5BU5D_t13* BluetoothDeviceScript_GetBytes_m4 (Object_t * __this /* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothDeviceScript::setActiveSensor(System.Int32)
extern "C" void BluetoothDeviceScript_setActiveSensor_m5 (BluetoothDeviceScript_t11 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothDeviceScript::setSensorNames(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void BluetoothDeviceScript_setSensorNames_m6 (BluetoothDeviceScript_t11 * __this, String_t* ___s0, String_t* ___s1, String_t* ___s2, String_t* ___s3, String_t* ___s4, String_t* ___s5, String_t* ___s6, String_t* ___s7, String_t* ___s8, String_t* ___s9, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BluetoothDeviceScript::getSensorName(System.String)
extern "C" String_t* BluetoothDeviceScript_getSensorName_m7 (BluetoothDeviceScript_t11 * __this, String_t* ___sensorIdentifier, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BluetoothDeviceScript::getSensorID(System.String)
extern "C" int32_t BluetoothDeviceScript_getSensorID_m8 (BluetoothDeviceScript_t11 * __this, String_t* ___sensorName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothDeviceScript::OnBluetoothMessage(System.String)
extern "C" void BluetoothDeviceScript_OnBluetoothMessage_m9 (BluetoothDeviceScript_t11 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothDeviceScript::OnBluetoothData(System.String)
extern "C" void BluetoothDeviceScript_OnBluetoothData_m10 (BluetoothDeviceScript_t11 * __this, String_t* ___base64Data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothDeviceScript::OnBluetoothData(System.String,System.String)
extern "C" void BluetoothDeviceScript_OnBluetoothData_m11 (BluetoothDeviceScript_t11 * __this, String_t* ___characteristic, String_t* ___base64Data, MethodInfo* method) IL2CPP_METHOD_ATTR;
