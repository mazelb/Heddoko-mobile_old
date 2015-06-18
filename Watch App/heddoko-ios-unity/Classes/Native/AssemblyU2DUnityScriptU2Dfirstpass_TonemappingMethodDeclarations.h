#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Tonemapping
struct Tonemapping_t214;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void Tonemapping::.ctor()
extern "C" void Tonemapping__ctor_m884 (Tonemapping_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tonemapping::CheckResources()
extern "C" bool Tonemapping_CheckResources_m885 (Tonemapping_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tonemapping::UpdateCurve()
extern "C" float Tonemapping_UpdateCurve_m886 (Tonemapping_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::OnDisable()
extern "C" void Tonemapping_OnDisable_m887 (Tonemapping_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tonemapping::CreateInternalRenderTexture()
extern "C" bool Tonemapping_CreateInternalRenderTexture_m888 (Tonemapping_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Tonemapping_OnRenderImage_m889 (Tonemapping_t214 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::Main()
extern "C" void Tonemapping_Main_m890 (Tonemapping_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
