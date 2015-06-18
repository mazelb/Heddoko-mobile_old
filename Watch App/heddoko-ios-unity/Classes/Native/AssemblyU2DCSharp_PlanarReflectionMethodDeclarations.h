#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlanarReflection
struct PlanarReflection_t84;
// UnityEngine.Camera
struct Camera_t56;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PlanarReflection::.ctor()
extern "C" void PlanarReflection__ctor_m288 (PlanarReflection_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarReflection::Start()
extern "C" void PlanarReflection_Start_m289 (PlanarReflection_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera PlanarReflection::CreateReflectionCameraFor(UnityEngine.Camera)
extern "C" Camera_t56 * PlanarReflection_CreateReflectionCameraFor_m290 (PlanarReflection_t84 * __this, Camera_t56 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarReflection::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
extern "C" void PlanarReflection_SetStandardCameraParameter_m291 (PlanarReflection_t84 * __this, Camera_t56 * ___cam, LayerMask_t76  ___mask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture PlanarReflection::CreateTextureFor(UnityEngine.Camera)
extern "C" RenderTexture_t21 * PlanarReflection_CreateTextureFor_m292 (PlanarReflection_t84 * __this, Camera_t56 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarReflection::RenderHelpCameras(UnityEngine.Camera)
extern "C" void PlanarReflection_RenderHelpCameras_m293 (PlanarReflection_t84 * __this, Camera_t56 * ___currentCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarReflection::LateUpdate()
extern "C" void PlanarReflection_LateUpdate_m294 (PlanarReflection_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern "C" void PlanarReflection_WaterTileBeingRendered_m295 (PlanarReflection_t84 * __this, Transform_t85 * ___tr, Camera_t56 * ___currentCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarReflection::OnEnable()
extern "C" void PlanarReflection_OnEnable_m296 (PlanarReflection_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarReflection::OnDisable()
extern "C" void PlanarReflection_OnDisable_m297 (PlanarReflection_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarReflection::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
extern "C" void PlanarReflection_RenderReflectionFor_m298 (PlanarReflection_t84 * __this, Camera_t56 * ___cam, Camera_t56 * ___reflectCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarReflection::SaneCameraSettings(UnityEngine.Camera)
extern "C" void PlanarReflection_SaneCameraSettings_m299 (PlanarReflection_t84 * __this, Camera_t56 * ___helperCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 PlanarReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Matrix4x4_t53  PlanarReflection_CalculateObliqueMatrix_m300 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___projection, Vector4_t52  ___clipPlane, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Matrix4x4_t53  PlanarReflection_CalculateReflectionMatrix_m301 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___reflectionMat, Vector4_t52  ___plane, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlanarReflection::sgn(System.Single)
extern "C" float PlanarReflection_sgn_m302 (Object_t * __this /* static, unused */, float ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector4_t52  PlanarReflection_CameraSpacePlane_m303 (PlanarReflection_t84 * __this, Camera_t56 * ___cam, Vector3_t54  ___pos, Vector3_t54  ___normal, float ___sideSign, MethodInfo* method) IL2CPP_METHOD_ATTR;
