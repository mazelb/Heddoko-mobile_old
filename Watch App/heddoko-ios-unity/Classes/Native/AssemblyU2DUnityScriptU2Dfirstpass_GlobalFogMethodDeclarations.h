#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GlobalFog
struct GlobalFog_t201;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.Material
struct Material_t19;

// System.Void GlobalFog::.ctor()
extern "C" void GlobalFog__ctor_m831 (GlobalFog_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GlobalFog::CheckResources()
extern "C" bool GlobalFog_CheckResources_m832 (GlobalFog_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void GlobalFog_OnRenderImage_m833 (GlobalFog_t201 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void GlobalFog_CustomGraphicsBlit_m834 (Object_t * __this /* static, unused */, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___fxMaterial, int32_t ___passNr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalFog::Main()
extern "C" void GlobalFog_Main_m835 (GlobalFog_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
