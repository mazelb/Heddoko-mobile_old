#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ImageEffects
struct ImageEffects_t31;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void ImageEffects::.ctor()
extern "C" void ImageEffects__ctor_m99 (ImageEffects_t31 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void ImageEffects_RenderDistortion_m100 (Object_t * __this /* static, unused */, Material_t19 * ___material, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, float ___angle, Vector2_t32  ___center, Vector2_t32  ___radius, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_Blit_m101 (Object_t * __this /* static, unused */, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_BlitWithMaterial_m102 (Object_t * __this /* static, unused */, Material_t19 * ___material, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
