#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GlowEffect
struct GlowEffect_t28;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void GlowEffect::.ctor()
extern "C" void GlowEffect__ctor_m83 (GlowEffect_t28 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_compositeMaterial()
extern "C" Material_t19 * GlowEffect_get_compositeMaterial_m84 (GlowEffect_t28 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_blurMaterial()
extern "C" Material_t19 * GlowEffect_get_blurMaterial_m85 (GlowEffect_t28 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_downsampleMaterial()
extern "C" Material_t19 * GlowEffect_get_downsampleMaterial_m86 (GlowEffect_t28 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::OnDisable()
extern "C" void GlowEffect_OnDisable_m87 (GlowEffect_t28 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::Start()
extern "C" void GlowEffect_Start_m88 (GlowEffect_t28 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C" void GlowEffect_FourTapCone_m89 (GlowEffect_t28 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, int32_t ___iteration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void GlowEffect_DownSample4x_m90 (GlowEffect_t28 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void GlowEffect_OnRenderImage_m91 (GlowEffect_t28 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::BlitGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void GlowEffect_BlitGlow_m92 (GlowEffect_t28 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
