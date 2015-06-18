#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SSAOEffect
struct SSAOEffect_t37;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void SSAOEffect::.ctor()
extern "C" void SSAOEffect__ctor_m113 (SSAOEffect_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SSAOEffect::CreateMaterial(UnityEngine.Shader)
extern "C" Material_t19 * SSAOEffect_CreateMaterial_m114 (Object_t * __this /* static, unused */, Shader_t18 * ___shader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::DestroyMaterial(UnityEngine.Material)
extern "C" void SSAOEffect_DestroyMaterial_m115 (Object_t * __this /* static, unused */, Material_t19 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnDisable()
extern "C" void SSAOEffect_OnDisable_m116 (SSAOEffect_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::Start()
extern "C" void SSAOEffect_Start_m117 (SSAOEffect_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnEnable()
extern "C" void SSAOEffect_OnEnable_m118 (SSAOEffect_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::CreateMaterials()
extern "C" void SSAOEffect_CreateMaterials_m119 (SSAOEffect_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void SSAOEffect_OnRenderImage_m120 (SSAOEffect_t37 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
