#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ContrastStretchEffect
struct ContrastStretchEffect_t26;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.Texture
struct Texture_t22;

// System.Void ContrastStretchEffect::.ctor()
extern "C" void ContrastStretchEffect__ctor_m71 (ContrastStretchEffect_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialLum()
extern "C" Material_t19 * ContrastStretchEffect_get_materialLum_m72 (ContrastStretchEffect_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialReduce()
extern "C" Material_t19 * ContrastStretchEffect_get_materialReduce_m73 (ContrastStretchEffect_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialAdapt()
extern "C" Material_t19 * ContrastStretchEffect_get_materialAdapt_m74 (ContrastStretchEffect_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialApply()
extern "C" Material_t19 * ContrastStretchEffect_get_materialApply_m75 (ContrastStretchEffect_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::Start()
extern "C" void ContrastStretchEffect_Start_m76 (ContrastStretchEffect_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnEnable()
extern "C" void ContrastStretchEffect_OnEnable_m77 (ContrastStretchEffect_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnDisable()
extern "C" void ContrastStretchEffect_OnDisable_m78 (ContrastStretchEffect_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ContrastStretchEffect_OnRenderImage_m79 (ContrastStretchEffect_t26 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::CalculateAdaptation(UnityEngine.Texture)
extern "C" void ContrastStretchEffect_CalculateAdaptation_m80 (ContrastStretchEffect_t26 * __this, Texture_t22 * ___curTexture, MethodInfo* method) IL2CPP_METHOD_ATTR;
