#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material
struct Material_t19;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Texture
struct Texture_t22;
// System.String
struct String_t;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t195;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" void Material__ctor_m171 (Material_t19 * __this, Shader_t18 * ___shader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m2737 (Material_t19 * __this, Material_t19 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C" Shader_t18 * Material_get_shader_m177 (Material_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" void Material_set_color_m197 (Material_t19 * __this, Color_t29  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t22 * Material_get_mainTexture_m2744 (Material_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m940 (Material_t19 * __this, String_t* ___propertyName, Color_t29  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m5367 (Material_t19 * __this, int32_t ___nameID, Color_t29  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m5368 (Object_t * __this /* static, unused */, Material_t19 * ___self, int32_t ___nameID, Color_t29 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C" Color_t29  Material_GetColor_m5369 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C" Color_t29  Material_GetColor_m5370 (Material_t19 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C" void Material_SetVector_m194 (Material_t19 * __this, String_t* ___propertyName, Vector4_t52  ___vector, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
extern "C" Vector4_t52  Material_GetVector_m566 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" void Material_SetTexture_m186 (Material_t19 * __this, String_t* ___propertyName, Texture_t22 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m5371 (Material_t19 * __this, int32_t ___nameID, Texture_t22 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t22 * Material_GetTexture_m5372 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t22 * Material_GetTexture_m5373 (Material_t19 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
extern "C" void Material_SetMatrix_m205 (Material_t19 * __this, String_t* ___propertyName, Matrix4x4_t53  ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C" void Material_SetMatrix_m5374 (Material_t19 * __this, int32_t ___nameID, Matrix4x4_t53  ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)
extern "C" void Material_INTERNAL_CALL_SetMatrix_m5375 (Object_t * __this /* static, unused */, Material_t19 * ___self, int32_t ___nameID, Matrix4x4_t53 * ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m195 (Material_t19 * __this, String_t* ___propertyName, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m5376 (Material_t19 * __this, int32_t ___nameID, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.String)
extern "C" float Material_GetFloat_m567 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.Int32)
extern "C" float Material_GetFloat_m5377 (Material_t19 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m2738 (Material_t19 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
extern "C" void Material_SetBuffer_m967 (Material_t19 * __this, String_t* ___propertyName, ComputeBuffer_t195 * ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m633 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m5378 (Material_t19 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean,System.String)
extern "C" String_t* Material_GetTag_m5379 (Material_t19 * __this, String_t* ___tag, bool ___searchFallbacks, String_t* ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean)
extern "C" String_t* Material_GetTag_m600 (Material_t19 * __this, String_t* ___tag, bool ___searchFallbacks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Material::get_passCount()
extern "C" int32_t Material_get_passCount_m214 (Material_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" bool Material_SetPass_m956 (Material_t19 * __this, int32_t ___pass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m5380 (Object_t * __this /* static, unused */, Material_t19 * ___mono, Shader_t18 * ___shader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m5381 (Object_t * __this /* static, unused */, Material_t19 * ___mono, Material_t19 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
