#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PostEffectsHelper
struct PostEffectsHelper_t203;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Camera
struct Camera_t56;

// System.Void PostEffectsHelper::.ctor()
extern "C" void PostEffectsHelper__ctor_m857 (PostEffectsHelper_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::Start()
extern "C" void PostEffectsHelper_Start_m858 (PostEffectsHelper_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void PostEffectsHelper_OnRenderImage_m859 (PostEffectsHelper_t203 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern "C" void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m860 (Object_t * __this /* static, unused */, float ___dist, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___material, Camera_t56 * ___cameraForProjectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsHelper_DrawBorder_m861 (Object_t * __this /* static, unused */, RenderTexture_t21 * ___dest, Material_t19 * ___material, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsHelper_DrawLowLevelQuad_m862 (Object_t * __this /* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___material, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::Main()
extern "C" void PostEffectsHelper_Main_m863 (PostEffectsHelper_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
