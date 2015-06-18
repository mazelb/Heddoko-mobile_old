#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SensorTest
struct SensorTest_t122;
// System.Collections.IEnumerator
struct IEnumerator_t124;

// System.Void SensorTest::.ctor()
extern "C" void SensorTest__ctor_m459 (SensorTest_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SensorTest::Start()
extern "C" void SensorTest_Start_m460 (SensorTest_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SensorTest::Update()
extern "C" void SensorTest_Update_m461 (SensorTest_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SensorTest::initSensorsConnection()
extern "C" void SensorTest_initSensorsConnection_m462 (SensorTest_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SensorTest::subscribeToCharacteristics(System.Int32)
extern "C" void SensorTest_subscribeToCharacteristics_m463 (SensorTest_t122 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SensorTest::getSensorLatestPitch(System.Int32)
extern "C" float SensorTest_getSensorLatestPitch_m464 (SensorTest_t122 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SensorTest::getSensorLatestRoll(System.Int32)
extern "C" float SensorTest_getSensorLatestRoll_m465 (SensorTest_t122 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SensorTest::getSensorLatestYaw(System.Int32)
extern "C" float SensorTest_getSensorLatestYaw_m466 (SensorTest_t122 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SensorTest::getNumberConnectedDevices()
extern "C" int32_t SensorTest_getNumberConnectedDevices_m467 (SensorTest_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SensorTest::connect6DSensor(System.Int32)
extern "C" void SensorTest_connect6DSensor_m468 (SensorTest_t122 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SensorTest::shutDown6DSensor(System.Int32)
extern "C" void SensorTest_shutDown6DSensor_m469 (SensorTest_t122 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SensorTest::readCharacteristics(System.Int32)
extern "C" void SensorTest_readCharacteristics_m470 (SensorTest_t122 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SensorTest::indexExist(System.Int32)
extern "C" bool SensorTest_indexExist_m471 (SensorTest_t122 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SensorTest::readFromAllSensors(System.Single)
extern "C" Object_t * SensorTest_readFromAllSensors_m472 (SensorTest_t122 * __this, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SensorTest::OnGUI()
extern "C" void SensorTest_OnGUI_m473 (SensorTest_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
