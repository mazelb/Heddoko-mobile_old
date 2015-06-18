#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AntialiasingAsPostEffect
struct AntialiasingAsPostEffect_t165;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void AntialiasingAsPostEffect::.ctor()
extern "C" void AntialiasingAsPostEffect__ctor_m730 (AntialiasingAsPostEffect_t165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material AntialiasingAsPostEffect::CurrentAAMaterial()
extern "C" Material_t19 * AntialiasingAsPostEffect_CurrentAAMaterial_m731 (AntialiasingAsPostEffect_t165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AntialiasingAsPostEffect::CheckResources()
extern "C" bool AntialiasingAsPostEffect_CheckResources_m732 (AntialiasingAsPostEffect_t165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AntialiasingAsPostEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void AntialiasingAsPostEffect_OnRenderImage_m733 (AntialiasingAsPostEffect_t165 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AntialiasingAsPostEffect::Main()
extern "C" void AntialiasingAsPostEffect_Main_m734 (AntialiasingAsPostEffect_t165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
