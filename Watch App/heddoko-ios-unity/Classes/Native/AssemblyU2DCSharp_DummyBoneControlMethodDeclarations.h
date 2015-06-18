#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DummyBoneControl
struct DummyBoneControl_t93;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// DummyBoneControl/NodQuaternionOrientation
#include "AssemblyU2DCSharp_DummyBoneControl_NodQuaternionOrientation.h"

// System.Void DummyBoneControl::.ctor()
extern "C" void DummyBoneControl__ctor_m331 (DummyBoneControl_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DummyBoneControl::mapRange(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" float DummyBoneControl_mapRange_m332 (DummyBoneControl_t93 * __this, float ___a1, float ___a2, float ___b1, float ___b2, float ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DummyBoneControl::ConnectSensor(System.Int32)
extern "C" void DummyBoneControl_ConnectSensor_m333 (DummyBoneControl_t93 * __this, int32_t ___vIdx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DummyBoneControl::ShutdownSensor(System.Int32)
extern "C" void DummyBoneControl_ShutdownSensor_m334 (DummyBoneControl_t93 * __this, int32_t ___vIdx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DummyBoneControl::getEulerOrientation(System.Int32)
extern "C" Vector3_t54  DummyBoneControl_getEulerOrientation_m335 (DummyBoneControl_t93 * __this, int32_t ___vIdx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DummyBoneControl::ResetOrientations()
extern "C" void DummyBoneControl_ResetOrientations_m336 (DummyBoneControl_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::eulerToQuaternion(System.Single,System.Single,System.Single)
extern "C" NodQuaternionOrientation_t92  DummyBoneControl_eulerToQuaternion_m337 (Object_t * __this /* static, unused */, float ___pitch, float ___roll, float ___yaw, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DummyBoneControl::Start()
extern "C" void DummyBoneControl_Start_m338 (DummyBoneControl_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DummyBoneControl::Update()
extern "C" void DummyBoneControl_Update_m339 (DummyBoneControl_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DummyBoneControl::OnApplicationQuit()
extern "C" void DummyBoneControl_OnApplicationQuit_m340 (DummyBoneControl_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DummyBoneControl::LateUpdate()
extern "C" void DummyBoneControl_LateUpdate_m341 (DummyBoneControl_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DummyBoneControl::OnGUI()
extern "C" void DummyBoneControl_OnGUI_m342 (DummyBoneControl_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
