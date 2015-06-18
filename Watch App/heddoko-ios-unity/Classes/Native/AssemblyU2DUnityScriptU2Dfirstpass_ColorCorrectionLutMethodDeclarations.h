#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ColorCorrectionLut
struct ColorCorrectionLut_t185;
// UnityEngine.Texture2D
struct Texture2D_t36;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void ColorCorrectionLut::.ctor()
extern "C" void ColorCorrectionLut__ctor_m775 (ColorCorrectionLut_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ColorCorrectionLut::CheckResources()
extern "C" bool ColorCorrectionLut_CheckResources_m776 (ColorCorrectionLut_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnDisable()
extern "C" void ColorCorrectionLut_OnDisable_m777 (ColorCorrectionLut_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnDestroy()
extern "C" void ColorCorrectionLut_OnDestroy_m778 (ColorCorrectionLut_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::SetIdentityLut()
extern "C" void ColorCorrectionLut_SetIdentityLut_m779 (ColorCorrectionLut_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ColorCorrectionLut::ValidDimensions(UnityEngine.Texture2D)
extern "C" bool ColorCorrectionLut_ValidDimensions_m780 (ColorCorrectionLut_t185 * __this, Texture2D_t36 * ___tex2d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::Convert(UnityEngine.Texture2D,System.String)
extern "C" void ColorCorrectionLut_Convert_m781 (ColorCorrectionLut_t185 * __this, Texture2D_t36 * ___temp2DTex, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ColorCorrectionLut_OnRenderImage_m782 (ColorCorrectionLut_t185 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::Main()
extern "C" void ColorCorrectionLut_Main_m783 (ColorCorrectionLut_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
