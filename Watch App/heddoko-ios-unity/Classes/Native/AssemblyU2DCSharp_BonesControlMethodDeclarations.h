#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BonesControl
struct BonesControl_t91;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// BonesControl/NodQuaternionOrientation
#include "AssemblyU2DCSharp_BonesControl_NodQuaternionOrientation.h"

// System.Void BonesControl::.ctor()
extern "C" void BonesControl__ctor_m316 (BonesControl_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BonesControl::mapRange(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" float BonesControl_mapRange_m317 (BonesControl_t91 * __this, float ___a1, float ___a2, float ___b1, float ___b2, float ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::ConnectSensor(System.Int32)
extern "C" void BonesControl_ConnectSensor_m318 (BonesControl_t91 * __this, int32_t ___vIdx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::ShutdownSensor(System.Int32)
extern "C" void BonesControl_ShutdownSensor_m319 (BonesControl_t91 * __this, int32_t ___vIdx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BonesControl::getEulerOrientation(System.Int32)
extern "C" Vector3_t54  BonesControl_getEulerOrientation_m320 (BonesControl_t91 * __this, int32_t ___vIdx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::ResetOrientations()
extern "C" void BonesControl_ResetOrientations_m321 (BonesControl_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BonesControl/NodQuaternionOrientation BonesControl::eulerToQuaternion(System.Single,System.Single,System.Single)
extern "C" NodQuaternionOrientation_t89  BonesControl_eulerToQuaternion_m322 (Object_t * __this /* static, unused */, float ___pitch, float ___roll, float ___yaw, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::Start()
extern "C" void BonesControl_Start_m323 (BonesControl_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::Update()
extern "C" void BonesControl_Update_m324 (BonesControl_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::OnApplicationQuit()
extern "C" void BonesControl_OnApplicationQuit_m325 (BonesControl_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::LateUpdate()
extern "C" void BonesControl_LateUpdate_m326 (BonesControl_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::Ready()
extern "C" void BonesControl_Ready_m327 (BonesControl_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::Analyze()
extern "C" void BonesControl_Analyze_m328 (BonesControl_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonesControl::OnGUI()
extern "C" void BonesControl_OnGUI_m329 (BonesControl_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
