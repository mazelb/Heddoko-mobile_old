#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BloomAndLensFlares
struct BloomAndLensFlares_t177;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void BloomAndLensFlares::.ctor()
extern "C" void BloomAndLensFlares__ctor_m744 (BloomAndLensFlares_t177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BloomAndLensFlares::CheckResources()
extern "C" bool BloomAndLensFlares_CheckResources_m745 (BloomAndLensFlares_t177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndLensFlares_OnRenderImage_m746 (BloomAndLensFlares_t177 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndLensFlares_AddTo_m747 (BloomAndLensFlares_t177 * __this, float ___intensity_, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndLensFlares_BlendFlares_m748 (BloomAndLensFlares_t177 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndLensFlares_BrightFilter_m749 (BloomAndLensFlares_t177 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndLensFlares_Vignette_m750 (BloomAndLensFlares_t177 * __this, float ___amount, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::Main()
extern "C" void BloomAndLensFlares_Main_m751 (BloomAndLensFlares_t177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
