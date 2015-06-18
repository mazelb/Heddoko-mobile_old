#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SunShafts
struct SunShafts_t210;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void SunShafts::.ctor()
extern "C" void SunShafts__ctor_m875 (SunShafts_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SunShafts::CheckResources()
extern "C" bool SunShafts_CheckResources_m876 (SunShafts_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SunShafts::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void SunShafts_OnRenderImage_m877 (SunShafts_t210 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SunShafts::ClampBlurIterationsToSomethingThatMakesSense(System.Int32)
extern "C" int32_t SunShafts_ClampBlurIterationsToSomethingThatMakesSense_m878 (SunShafts_t210 * __this, int32_t ___its, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SunShafts::Main()
extern "C" void SunShafts_Main_m879 (SunShafts_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
