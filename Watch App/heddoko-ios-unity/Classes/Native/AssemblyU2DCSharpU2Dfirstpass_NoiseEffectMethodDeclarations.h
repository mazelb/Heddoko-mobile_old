#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NoiseEffect
struct NoiseEffect_t34;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void NoiseEffect::.ctor()
extern "C" void NoiseEffect__ctor_m107 (NoiseEffect_t34 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::Start()
extern "C" void NoiseEffect_Start_m108 (NoiseEffect_t34 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material NoiseEffect::get_material()
extern "C" Material_t19 * NoiseEffect_get_material_m109 (NoiseEffect_t34 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::OnDisable()
extern "C" void NoiseEffect_OnDisable_m110 (NoiseEffect_t34 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::SanitizeParameters()
extern "C" void NoiseEffect_SanitizeParameters_m111 (NoiseEffect_t34 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void NoiseEffect_OnRenderImage_m112 (NoiseEffect_t34 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
