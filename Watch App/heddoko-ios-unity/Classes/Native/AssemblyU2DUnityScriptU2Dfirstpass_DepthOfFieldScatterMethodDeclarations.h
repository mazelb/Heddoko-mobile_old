#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DepthOfFieldScatter
struct DepthOfFieldScatter_t196;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void DepthOfFieldScatter::.ctor()
extern "C" void DepthOfFieldScatter__ctor_m810 (DepthOfFieldScatter_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DepthOfFieldScatter::CheckResources()
extern "C" bool DepthOfFieldScatter_CheckResources_m811 (DepthOfFieldScatter_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnEnable()
extern "C" void DepthOfFieldScatter_OnEnable_m812 (DepthOfFieldScatter_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnDisable()
extern "C" void DepthOfFieldScatter_OnDisable_m813 (DepthOfFieldScatter_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::ReleaseComputeResources()
extern "C" void DepthOfFieldScatter_ReleaseComputeResources_m814 (DepthOfFieldScatter_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::CreateComputeResources()
extern "C" void DepthOfFieldScatter_CreateComputeResources_m815 (DepthOfFieldScatter_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DepthOfFieldScatter::FocalDistance01(System.Single)
extern "C" float DepthOfFieldScatter_FocalDistance01_m816 (DepthOfFieldScatter_t196 * __this, float ___worldDist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::WriteCoc(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Boolean)
extern "C" void DepthOfFieldScatter_WriteCoc_m817 (DepthOfFieldScatter_t196 * __this, RenderTexture_t21 * ___fromTo, RenderTexture_t21 * ___temp1, RenderTexture_t21 * ___temp2, bool ___fgDilate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldScatter_OnRenderImage_m818 (DepthOfFieldScatter_t196 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::Main()
extern "C" void DepthOfFieldScatter_Main_m819 (DepthOfFieldScatter_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
