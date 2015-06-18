#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DepthOfField34
struct DepthOfField34_t192;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// DofBlurriness
#include "AssemblyU2DUnityScriptU2Dfirstpass_DofBlurriness.h"

// System.Void DepthOfField34::.ctor()
extern "C" void DepthOfField34__ctor_m792 (DepthOfField34_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::.cctor()
extern "C" void DepthOfField34__cctor_m793 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::CreateMaterials()
extern "C" void DepthOfField34_CreateMaterials_m794 (DepthOfField34_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DepthOfField34::CheckResources()
extern "C" bool DepthOfField34_CheckResources_m795 (DepthOfField34_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnDisable()
extern "C" void DepthOfField34_OnDisable_m796 (DepthOfField34_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnEnable()
extern "C" void DepthOfField34_OnEnable_m797 (DepthOfField34_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DepthOfField34::FocalDistance01(System.Single)
extern "C" float DepthOfField34_FocalDistance01_m798 (DepthOfField34_t192 * __this, float ___worldDist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DepthOfField34::GetDividerBasedOnQuality()
extern "C" int32_t DepthOfField34_GetDividerBasedOnQuality_m799 (DepthOfField34_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DepthOfField34::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C" int32_t DepthOfField34_GetLowResolutionDividerBasedOnQuality_m800 (DepthOfField34_t192 * __this, int32_t ___baseDivider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfField34_OnRenderImage_m801 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfField34_Blur_m802 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfField34_BlurFg_m803 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C" void DepthOfField34_BlurHex_m804 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, int32_t ___blurPass, float ___spread, RenderTexture_t21 * ___tmp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfField34_Downsample_m805 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfField34_AddBokeh_m806 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___bokehInfo, RenderTexture_t21 * ___tempTex, RenderTexture_t21 * ___finalTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::ReleaseTextures()
extern "C" void DepthOfField34_ReleaseTextures_m807 (DepthOfField34_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void DepthOfField34_AllocateTextures_m808 (DepthOfField34_t192 * __this, bool ___blurForeground, RenderTexture_t21 * ___source, int32_t ___divider, int32_t ___lowTexDivider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Main()
extern "C" void DepthOfField34_Main_m809 (DepthOfField34_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
