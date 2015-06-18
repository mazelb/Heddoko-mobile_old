#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BlurEffect
struct BlurEffect_t20;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void BlurEffect::.ctor()
extern "C" void BlurEffect__ctor_m61 (BlurEffect_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::.cctor()
extern "C" void BlurEffect__cctor_m62 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material BlurEffect::get_material()
extern "C" Material_t19 * BlurEffect_get_material_m63 (BlurEffect_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::OnDisable()
extern "C" void BlurEffect_OnDisable_m64 (BlurEffect_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::Start()
extern "C" void BlurEffect_Start_m65 (BlurEffect_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C" void BlurEffect_FourTapCone_m66 (BlurEffect_t20 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, int32_t ___iteration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BlurEffect_DownSample4x_m67 (BlurEffect_t20 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BlurEffect_OnRenderImage_m68 (BlurEffect_t20 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
