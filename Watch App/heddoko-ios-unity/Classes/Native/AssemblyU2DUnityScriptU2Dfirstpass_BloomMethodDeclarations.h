#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Bloom
struct Bloom_t172;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Bloom::.ctor()
extern "C" void Bloom__ctor_m735 (Bloom_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Bloom::CheckResources()
extern "C" bool Bloom_CheckResources_m736 (Bloom_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_OnRenderImage_m737 (Bloom_t172 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_AddTo_m738 (Bloom_t172 * __this, float ___intensity_, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BlendFlares_m739 (Bloom_t172 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m740 (Bloom_t172 * __this, float ___thresh, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m741 (Bloom_t172 * __this, Color_t29  ___threshColor, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_Vignette_m742 (Bloom_t172 * __this, float ___amount, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::Main()
extern "C" void Bloom_Main_m743 (Bloom_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
