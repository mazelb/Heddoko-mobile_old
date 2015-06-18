#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Water
struct Water_t75;
// UnityEngine.Camera
struct Camera_t56;
// Water/WaterMode
#include "AssemblyU2DCSharp_Water_WaterMode.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void Water::.ctor()
extern "C" void Water__ctor_m268 (Water_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::.cctor()
extern "C" void Water__cctor_m269 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::OnWillRenderObject()
extern "C" void Water_OnWillRenderObject_m270 (Water_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::OnDisable()
extern "C" void Water_OnDisable_m271 (Water_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::Update()
extern "C" void Water_Update_m272 (Water_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
extern "C" void Water_UpdateCameraModes_m273 (Water_t75 * __this, Camera_t56 * ___src, Camera_t56 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
extern "C" void Water_CreateWaterObjects_m274 (Water_t75 * __this, Camera_t56 * ___currentCamera, Camera_t56 ** ___reflectionCamera, Camera_t56 ** ___refractionCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Water/WaterMode Water::GetWaterMode()
extern "C" int32_t Water_GetWaterMode_m275 (Water_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Water/WaterMode Water::FindHardwareWaterSupport()
extern "C" int32_t Water_FindHardwareWaterSupport_m276 (Water_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Water::sgn(System.Single)
extern "C" float Water_sgn_m277 (Object_t * __this /* static, unused */, float ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector4_t52  Water_CameraSpacePlane_m278 (Water_t75 * __this, Camera_t56 * ___cam, Vector3_t54  ___pos, Vector3_t54  ___normal, float ___sideSign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::CalculateObliqueMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C" void Water_CalculateObliqueMatrix_m279 (Object_t * __this /* static, unused */, Matrix4x4_t53 * ___projection, Vector4_t52  ___clipPlane, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C" void Water_CalculateReflectionMatrix_m280 (Object_t * __this /* static, unused */, Matrix4x4_t53 * ___reflectionMat, Vector4_t52  ___plane, MethodInfo* method) IL2CPP_METHOD_ATTR;
