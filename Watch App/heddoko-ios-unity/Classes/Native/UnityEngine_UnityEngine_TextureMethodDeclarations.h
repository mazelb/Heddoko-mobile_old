#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Texture
struct Texture_t22;
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Texture::.ctor()
extern "C" void Texture__ctor_m4963 (Texture_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetWidth_m4964 (Object_t * __this /* static, unused */, Texture_t22 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m4965 (Object_t * __this /* static, unused */, Texture_t22 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::get_width()
extern "C" int32_t Texture_get_width_m209 (Texture_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_width(System.Int32)
extern "C" void Texture_set_width_m4966 (Texture_t22 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::get_height()
extern "C" int32_t Texture_get_height_m211 (Texture_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_height(System.Int32)
extern "C" void Texture_set_height_m4967 (Texture_t22 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" void Texture_set_filterMode_m917 (Texture_t22 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
extern "C" void Texture_set_anisoLevel_m902 (Texture_t22 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" void Texture_set_wrapMode_m918 (Texture_t22 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::Internal_GetTexelSize(UnityEngine.Texture,UnityEngine.Vector2&)
extern "C" void Texture_Internal_GetTexelSize_m4968 (Object_t * __this /* static, unused */, Texture_t22 * ___tex, Vector2_t32 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Texture::get_texelSize()
extern "C" Vector2_t32  Texture_get_texelSize_m200 (Texture_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
