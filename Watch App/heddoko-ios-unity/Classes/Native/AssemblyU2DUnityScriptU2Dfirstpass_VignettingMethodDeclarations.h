#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vignetting
struct Vignetting_t217;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void Vignetting::.ctor()
extern "C" void Vignetting__ctor_m898 (Vignetting_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vignetting::CheckResources()
extern "C" bool Vignetting_CheckResources_m899 (Vignetting_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vignetting::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Vignetting_OnRenderImage_m900 (Vignetting_t217 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vignetting::Main()
extern "C" void Vignetting_Main_m901 (Vignetting_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
