#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NoiseAndGrain
struct NoiseAndGrain_t202;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Texture2D
struct Texture2D_t36;

// System.Void NoiseAndGrain::.ctor()
extern "C" void NoiseAndGrain__ctor_m836 (NoiseAndGrain_t202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::.cctor()
extern "C" void NoiseAndGrain__cctor_m837 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NoiseAndGrain::CheckResources()
extern "C" bool NoiseAndGrain_CheckResources_m838 (NoiseAndGrain_t202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void NoiseAndGrain_OnRenderImage_m839 (NoiseAndGrain_t202 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
extern "C" void NoiseAndGrain_DrawNoiseQuadGrid_m840 (Object_t * __this /* static, unused */, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___fxMaterial, Texture2D_t36 * ___noise, int32_t ___passNr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::Main()
extern "C" void NoiseAndGrain_Main_m841 (NoiseAndGrain_t202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
