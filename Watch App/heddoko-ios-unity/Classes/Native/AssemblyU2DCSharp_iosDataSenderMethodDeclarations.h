#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iosDataSender
struct iosDataSender_t125;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t126;

// System.Void iosDataSender::.ctor()
extern "C" void iosDataSender__ctor_m474 (iosDataSender_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iosDataSender::Start()
extern "C" void iosDataSender_Start_m475 (iosDataSender_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iosDataSender::Update()
extern "C" void iosDataSender_Update_m476 (iosDataSender_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iosDataSender::OnGUI()
extern "C" void iosDataSender_OnGUI_m477 (iosDataSender_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iosDataSender::_iOSUnityMovementDataTestString(System.String)
extern "C" void iosDataSender__iOSUnityMovementDataTestString_m478 (Object_t * __this /* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iosDataSender::_iOSUnityMovementDataSendData(System.String,System.Single[],System.Int32,System.Int32,System.Int32)
extern "C" void iosDataSender__iOSUnityMovementDataSendData_m479 (Object_t * __this /* static, unused */, String_t* ___movementId, SingleU5BU5D_t126* ___rawData, int32_t ___dataSize, int32_t ___frames, int32_t ___devices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iosDataSender::sendStringToIOS(System.String)
extern "C" void iosDataSender_sendStringToIOS_m480 (iosDataSender_t125 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iosDataSender::sendMovementData(System.String,System.Single[],System.Int32,System.Int32,System.Int32)
extern "C" void iosDataSender_sendMovementData_m481 (iosDataSender_t125 * __this, String_t* ___movementID, SingleU5BU5D_t126* ___rawData, int32_t ___dataSize, int32_t ___numberOfFrames, int32_t ___numberOfSensors, MethodInfo* method) IL2CPP_METHOD_ATTR;
