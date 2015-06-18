#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Texture2D
struct Texture2D_t36;
// UnityEngine.Color[]
struct ColorU5BU5D_t219;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" void Texture2D__ctor_m4969 (Texture2D_t36 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C" void Texture2D__ctor_m934 (Texture2D_t36 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m4970 (Object_t * __this /* static, unused */, Texture2D_t36 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t98 ___nativeTex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" Texture2D_t36 * Texture2D_get_whiteTexture_m2466 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C" void Texture2D_SetPixel_m938 (Texture2D_t36 * __this, int32_t ___x, int32_t ___y, Color_t29  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_SetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)
extern "C" void Texture2D_INTERNAL_CALL_SetPixel_m4971 (Object_t * __this /* static, unused */, Texture2D_t36 * ___self, int32_t ___x, int32_t ___y, Color_t29 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C" Color_t29  Texture2D_GetPixelBilinear_m2557 (Texture2D_t36 * __this, float ___u, float ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" ColorU5BU5D_t219* Texture2D_GetPixels_m946 (Texture2D_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C" ColorU5BU5D_t219* Texture2D_GetPixels_m4972 (Texture2D_t36 * __this, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" ColorU5BU5D_t219* Texture2D_GetPixels_m4973 (Texture2D_t36 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C" void Texture2D_Apply_m4974 (Texture2D_t36 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C" void Texture2D_Apply_m939 (Texture2D_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
