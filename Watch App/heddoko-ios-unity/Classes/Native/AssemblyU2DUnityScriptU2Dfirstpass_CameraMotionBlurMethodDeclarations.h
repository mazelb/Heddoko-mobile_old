#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CameraMotionBlur
struct CameraMotionBlur_t180;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.Camera
struct Camera_t56;

// System.Void CameraMotionBlur::.ctor()
extern "C" void CameraMotionBlur__ctor_m754 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::.cctor()
extern "C" void CameraMotionBlur__cctor_m755 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::CalculateViewProjection()
extern "C" void CameraMotionBlur_CalculateViewProjection_m756 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Start()
extern "C" void CameraMotionBlur_Start_m757 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnEnable()
extern "C" void CameraMotionBlur_OnEnable_m758 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnDisable()
extern "C" void CameraMotionBlur_OnDisable_m759 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraMotionBlur::CheckResources()
extern "C" bool CameraMotionBlur_CheckResources_m760 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void CameraMotionBlur_OnRenderImage_m761 (CameraMotionBlur_t180 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Remember()
extern "C" void CameraMotionBlur_Remember_m762 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CameraMotionBlur::GetTmpCam()
extern "C" Camera_t56 * CameraMotionBlur_GetTmpCam_m763 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::StartFrame()
extern "C" void CameraMotionBlur_StartFrame_m764 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C" int32_t CameraMotionBlur_divRoundUp_m765 (CameraMotionBlur_t180 * __this, int32_t ___x, int32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Main()
extern "C" void CameraMotionBlur_Main_m766 (CameraMotionBlur_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
