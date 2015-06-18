#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PostEffectsBase
struct PostEffectsBase_t166;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void PostEffectsBase::.ctor()
extern "C" void PostEffectsBase__ctor_m842 (PostEffectsBase_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t19 * PostEffectsBase_CheckShaderAndCreateMaterial_m843 (PostEffectsBase_t166 * __this, Shader_t18 * ___s, Material_t19 * ___m2Create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t19 * PostEffectsBase_CreateMaterial_m844 (PostEffectsBase_t166 * __this, Shader_t18 * ___s, Material_t19 * ___m2Create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::OnEnable()
extern "C" void PostEffectsBase_OnEnable_m845 (PostEffectsBase_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport()
extern "C" bool PostEffectsBase_CheckSupport_m846 (PostEffectsBase_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckResources()
extern "C" bool PostEffectsBase_CheckResources_m847 (PostEffectsBase_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Start()
extern "C" void PostEffectsBase_Start_m848 (PostEffectsBase_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m849 (PostEffectsBase_t166 * __this, bool ___needDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m850 (PostEffectsBase_t166 * __this, bool ___needDepth, bool ___needHdr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::Dx11Support()
extern "C" bool PostEffectsBase_Dx11Support_m851 (PostEffectsBase_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::ReportAutoDisable()
extern "C" void PostEffectsBase_ReportAutoDisable_m852 (PostEffectsBase_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckShader(UnityEngine.Shader)
extern "C" bool PostEffectsBase_CheckShader_m853 (PostEffectsBase_t166 * __this, Shader_t18 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::NotSupported()
extern "C" void PostEffectsBase_NotSupported_m854 (PostEffectsBase_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsBase_DrawBorder_m855 (PostEffectsBase_t166 * __this, RenderTexture_t21 * ___dest, Material_t19 * ___material, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Main()
extern "C" void PostEffectsBase_Main_m856 (PostEffectsBase_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
