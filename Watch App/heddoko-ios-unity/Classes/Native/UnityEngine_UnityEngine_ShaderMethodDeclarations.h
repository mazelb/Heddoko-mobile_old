#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Shader
struct Shader_t18;
// System.String
struct String_t;

// System.Boolean UnityEngine.Shader::get_isSupported()
extern "C" bool Shader_get_isSupported_m178 (Shader_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
extern "C" void Shader_EnableKeyword_m557 (Object_t * __this /* static, unused */, String_t* ___keyword, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
extern "C" void Shader_DisableKeyword_m558 (Object_t * __this /* static, unused */, String_t* ___keyword, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
extern "C" void Shader_set_maximumLOD_m636 (Shader_t18 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m5366 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
