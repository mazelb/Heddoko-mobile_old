#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BluetoothLEHardwareInterface
struct BluetoothLEHardwareInterface_t16;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t13;
// BluetoothDeviceScript
struct BluetoothDeviceScript_t11;
// System.Action
struct Action_t4;
// System.Action`1<System.String>
struct Action_1_t5;
// System.String[]
struct StringU5BU5D_t17;
// System.Action`2<System.String,System.String>
struct Action_2_t6;
// System.Action`3<System.String,System.String,System.String>
struct Action_3_t7;
// System.Action`2<System.String,System.Byte[]>
struct Action_2_t8;
// BluetoothLEHardwareInterface/CBCharacteristicProperties
#include "AssemblyU2DCSharpU2Dfirstpass_BluetoothLEHardwareInterface_C.h"
// BluetoothLEHardwareInterface/CBAttributePermissions
#include "AssemblyU2DCSharpU2Dfirstpass_BluetoothLEHardwareInterface_C_0.h"

// System.Void BluetoothLEHardwareInterface::.ctor()
extern "C" void BluetoothLEHardwareInterface__ctor_m12 (BluetoothLEHardwareInterface_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLELog(System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLELog_m13 (Object_t * __this /* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEInitialize(System.Boolean,System.Boolean)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEInitialize_m14 (Object_t * __this /* static, unused */, bool ___asCentral, bool ___asPeripheral, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEDeInitialize()
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEDeInitialize_m15 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEPauseMessages(System.Boolean)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEPauseMessages_m16 (Object_t * __this /* static, unused */, bool ___isPaused, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEScanForPeripheralsWithServices(System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEScanForPeripheralsWithServices_m17 (Object_t * __this /* static, unused */, String_t* ___serviceUUIDsString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLERetrieveListOfPeripheralsWithServices(System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLERetrieveListOfPeripheralsWithServices_m18 (Object_t * __this /* static, unused */, String_t* ___serviceUUIDsString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEStopScan()
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEStopScan_m19 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEConnectToPeripheral(System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEConnectToPeripheral_m20 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEDisconnectPeripheral(System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEDisconnectPeripheral_m21 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEReadCharacteristic(System.String,System.String,System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEReadCharacteristic_m22 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___service, String_t* ___characteristic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEWriteCharacteristic(System.String,System.String,System.String,System.Byte[],System.Int32,System.Boolean)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEWriteCharacteristic_m23 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___service, String_t* ___characteristic, ByteU5BU5D_t13* ___data, int32_t ___length, bool ___withResponse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLESubscribeCharacteristic(System.String,System.String,System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLESubscribeCharacteristic_m24 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___service, String_t* ___characteristic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEUnSubscribeCharacteristic(System.String,System.String,System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEUnSubscribeCharacteristic_m25 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___service, String_t* ___characteristic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEPeripheralName(System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEPeripheralName_m26 (Object_t * __this /* static, unused */, String_t* ___newName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLECreateService(System.String,System.Boolean)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLECreateService_m27 (Object_t * __this /* static, unused */, String_t* ___uuid, bool ___primary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLERemoveService(System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLERemoveService_m28 (Object_t * __this /* static, unused */, String_t* ___uuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLERemoveServices()
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLERemoveServices_m29 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLECreateCharacteristic(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLECreateCharacteristic_m30 (Object_t * __this /* static, unused */, String_t* ___uuid, int32_t ___properties, int32_t ___permissions, ByteU5BU5D_t13* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLERemoveCharacteristic(System.String)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLERemoveCharacteristic_m31 (Object_t * __this /* static, unused */, String_t* ___uuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLERemoveCharacteristics()
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLERemoveCharacteristics_m32 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEStartAdvertising()
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEStartAdvertising_m33 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEStopAdvertising()
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEStopAdvertising_m34 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::_iOSBluetoothLEUpdateCharacteristicValue(System.String,System.Byte[],System.Int32)
extern "C" void BluetoothLEHardwareInterface__iOSBluetoothLEUpdateCharacteristicValue_m35 (Object_t * __this /* static, unused */, String_t* ___uuid, ByteU5BU5D_t13* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::Log(System.String)
extern "C" void BluetoothLEHardwareInterface_Log_m36 (Object_t * __this /* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BluetoothDeviceScript BluetoothLEHardwareInterface::dummyInitialize(System.Boolean,System.Boolean,System.Action,System.Action`1<System.String>)
extern "C" BluetoothDeviceScript_t11 * BluetoothLEHardwareInterface_dummyInitialize_m37 (Object_t * __this /* static, unused */, bool ___asCentral, bool ___asPeripheral, Action_t4 * ___action, Action_1_t5 * ___errorAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BluetoothDeviceScript BluetoothLEHardwareInterface::Initialize(System.Boolean,System.Boolean,System.Action,System.Action`1<System.String>)
extern "C" BluetoothDeviceScript_t11 * BluetoothLEHardwareInterface_Initialize_m38 (Object_t * __this /* static, unused */, bool ___asCentral, bool ___asPeripheral, Action_t4 * ___action, Action_1_t5 * ___errorAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::DeInitialize(System.Action)
extern "C" void BluetoothLEHardwareInterface_DeInitialize_m39 (Object_t * __this /* static, unused */, Action_t4 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::FinishDeInitialize()
extern "C" void BluetoothLEHardwareInterface_FinishDeInitialize_m40 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::PauseMessages(System.Boolean)
extern "C" void BluetoothLEHardwareInterface_PauseMessages_m41 (Object_t * __this /* static, unused */, bool ___isPaused, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::ScanForPeripheralsWithServices(System.String[],System.Action`2<System.String,System.String>)
extern "C" void BluetoothLEHardwareInterface_ScanForPeripheralsWithServices_m42 (Object_t * __this /* static, unused */, StringU5BU5D_t17* ___serviceUUIDs, Action_2_t6 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::RetrieveListOfPeripheralsWithServices(System.String[],System.Action`2<System.String,System.String>)
extern "C" void BluetoothLEHardwareInterface_RetrieveListOfPeripheralsWithServices_m43 (Object_t * __this /* static, unused */, StringU5BU5D_t17* ___serviceUUIDs, Action_2_t6 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::StopScan()
extern "C" void BluetoothLEHardwareInterface_StopScan_m44 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::ConnectToPeripheral(System.String,System.Action`1<System.String>,System.Action`2<System.String,System.String>,System.Action`3<System.String,System.String,System.String>)
extern "C" void BluetoothLEHardwareInterface_ConnectToPeripheral_m45 (Object_t * __this /* static, unused */, String_t* ___name, Action_1_t5 * ___connectAction, Action_2_t6 * ___serviceAction, Action_3_t7 * ___characteristicAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::DisconnectPeripheral(System.String,System.Action`1<System.String>)
extern "C" void BluetoothLEHardwareInterface_DisconnectPeripheral_m46 (Object_t * __this /* static, unused */, String_t* ___name, Action_1_t5 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::ReadCharacteristic(System.String,System.String,System.String,System.Action`2<System.String,System.Byte[]>)
extern "C" void BluetoothLEHardwareInterface_ReadCharacteristic_m47 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___service, String_t* ___characteristic, Action_2_t8 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::WriteCharacteristic(System.String,System.String,System.String,System.Byte[],System.Int32,System.Boolean,System.Action`1<System.String>)
extern "C" void BluetoothLEHardwareInterface_WriteCharacteristic_m48 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___service, String_t* ___characteristic, ByteU5BU5D_t13* ___data, int32_t ___length, bool ___withResponse, Action_1_t5 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::SubscribeCharacteristic(System.String,System.String,System.String,System.Action`1<System.String>,System.Action`2<System.String,System.Byte[]>)
extern "C" void BluetoothLEHardwareInterface_SubscribeCharacteristic_m49 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___service, String_t* ___characteristic, Action_1_t5 * ___notificationAction, Action_2_t8 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::UnSubscribeCharacteristic(System.String,System.String,System.String,System.Action`1<System.String>)
extern "C" void BluetoothLEHardwareInterface_UnSubscribeCharacteristic_m50 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___service, String_t* ___characteristic, Action_1_t5 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::PeripheralName(System.String)
extern "C" void BluetoothLEHardwareInterface_PeripheralName_m51 (Object_t * __this /* static, unused */, String_t* ___newName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::CreateService(System.String,System.Boolean,System.Action`1<System.String>)
extern "C" void BluetoothLEHardwareInterface_CreateService_m52 (Object_t * __this /* static, unused */, String_t* ___uuid, bool ___primary, Action_1_t5 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::RemoveService(System.String)
extern "C" void BluetoothLEHardwareInterface_RemoveService_m53 (Object_t * __this /* static, unused */, String_t* ___uuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::RemoveServices()
extern "C" void BluetoothLEHardwareInterface_RemoveServices_m54 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::CreateCharacteristic(System.String,BluetoothLEHardwareInterface/CBCharacteristicProperties,BluetoothLEHardwareInterface/CBAttributePermissions,System.Byte[],System.Int32)
extern "C" void BluetoothLEHardwareInterface_CreateCharacteristic_m55 (Object_t * __this /* static, unused */, String_t* ___uuid, int32_t ___properties, int32_t ___permissions, ByteU5BU5D_t13* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::RemoveCharacteristic(System.String)
extern "C" void BluetoothLEHardwareInterface_RemoveCharacteristic_m56 (Object_t * __this /* static, unused */, String_t* ___uuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::RemoveCharacteristics()
extern "C" void BluetoothLEHardwareInterface_RemoveCharacteristics_m57 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::StartAdvertising(System.Action)
extern "C" void BluetoothLEHardwareInterface_StartAdvertising_m58 (Object_t * __this /* static, unused */, Action_t4 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::StopAdvertising(System.Action)
extern "C" void BluetoothLEHardwareInterface_StopAdvertising_m59 (Object_t * __this /* static, unused */, Action_t4 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BluetoothLEHardwareInterface::UpdateCharacteristicValue(System.String,System.Byte[],System.Int32)
extern "C" void BluetoothLEHardwareInterface_UpdateCharacteristicValue_m60 (Object_t * __this /* static, unused */, String_t* ___uuid, ByteU5BU5D_t13* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
