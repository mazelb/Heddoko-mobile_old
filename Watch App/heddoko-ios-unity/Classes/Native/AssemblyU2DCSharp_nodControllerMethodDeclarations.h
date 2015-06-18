#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// nodController
struct nodController_t90;
// System.Collections.Generic.List`1<SensorData>
struct List_1_t3;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>
struct List_1_t129;
// System.Collections.IEnumerator
struct IEnumerator_t124;

// System.Void nodController::.ctor()
extern "C" void nodController__ctor_m488 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::startRecording()
extern "C" void nodController_startRecording_m489 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::stopRecording()
extern "C" void nodController_stopRecording_m490 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::playRecorded(System.Boolean)
extern "C" void nodController_playRecorded_m491 (nodController_t90 * __this, bool ___autoLoop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SensorData> nodController::copySensorDataList(System.Collections.Generic.List`1<SensorData>)
extern "C" List_1_t3 * nodController_copySensorDataList_m492 (nodController_t90 * __this, List_1_t3 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 nodController::getTotalFrames()
extern "C" int32_t nodController_getTotalFrames_m493 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::addBlankFrames(System.Int32)
extern "C" void nodController_addBlankFrames_m494 (nodController_t90 * __this, int32_t ___numberOfFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::sendMovement(System.String,System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>)
extern "C" void nodController_sendMovement_m495 (nodController_t90 * __this, String_t* ___movementID, List_1_t129 * ___mov, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::writeRecordedReferenceMovement(System.Single)
extern "C" void nodController_writeRecordedReferenceMovement_m496 (nodController_t90 * __this, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::loadReferenceMovement()
extern "C" void nodController_loadReferenceMovement_m497 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::prepareReferenceMovement()
extern "C" void nodController_prepareReferenceMovement_m498 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::initSensorsConnection()
extern "C" void nodController_initSensorsConnection_m499 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::setDummyMode(System.Int32)
extern "C" void nodController_setDummyMode_m500 (nodController_t90 * __this, int32_t ___numberOfSensors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::subscribeToCharacteristics(System.Int32)
extern "C" void nodController_subscribeToCharacteristics_m501 (nodController_t90 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String nodController::getSensorLatestButtonState(System.Int32)
extern "C" String_t* nodController_getSensorLatestButtonState_m502 (nodController_t90 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single nodController::getSensorLatestPitch(System.Int32)
extern "C" float nodController_getSensorLatestPitch_m503 (nodController_t90 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single nodController::getSensorLatestRoll(System.Int32)
extern "C" float nodController_getSensorLatestRoll_m504 (nodController_t90 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single nodController::getSensorLatestYaw(System.Int32)
extern "C" float nodController_getSensorLatestYaw_m505 (nodController_t90 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 nodController::getNumberConnectedDevices()
extern "C" int32_t nodController_getNumberConnectedDevices_m506 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::prepareOrientations()
extern "C" void nodController_prepareOrientations_m507 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator nodController::readFromAllSensors(System.Single)
extern "C" Object_t * nodController_readFromAllSensors_m508 (nodController_t90 * __this, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::setSensorNames(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void nodController_setSensorNames_m509 (nodController_t90 * __this, String_t* ___s0, String_t* ___s1, String_t* ___s2, String_t* ___s3, String_t* ___s4, String_t* ___s5, String_t* ___s6, String_t* ___s7, String_t* ___s8, String_t* ___s9, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String nodController::getDeviceNameByID(System.Int32)
extern "C" String_t* nodController_getDeviceNameByID_m510 (nodController_t90 * __this, int32_t ___devID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::connect6DSensor(System.Int32)
extern "C" void nodController_connect6DSensor_m511 (nodController_t90 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::shutDown6DSensor(System.Int32)
extern "C" void nodController_shutDown6DSensor_m512 (nodController_t90 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::DeInitialize()
extern "C" void nodController_DeInitialize_m513 (nodController_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nodController::readCharacteristics(System.Int32)
extern "C" void nodController_readCharacteristics_m514 (nodController_t90 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean nodController::indexExist(System.Int32)
extern "C" bool nodController_indexExist_m515 (nodController_t90 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
