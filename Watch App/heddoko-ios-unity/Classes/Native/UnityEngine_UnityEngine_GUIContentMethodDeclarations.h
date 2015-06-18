#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIContent
struct GUIContent_t509;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t22;

// System.Void UnityEngine.GUIContent::.ctor()
extern "C" void GUIContent__ctor_m5168 (GUIContent_t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" void GUIContent__ctor_m2581 (GUIContent_t509 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
extern "C" void GUIContent__ctor_m5169 (GUIContent_t509 * __this, GUIContent_t509 * ___src, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.cctor()
extern "C" void GUIContent__cctor_m5170 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_text()
extern "C" String_t* GUIContent_get_text_m2580 (GUIContent_t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C" void GUIContent_set_text_m5171 (GUIContent_t509 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C" GUIContent_t509 * GUIContent_Temp_m5172 (Object_t * __this /* static, unused */, String_t* ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(UnityEngine.Texture)
extern "C" GUIContent_t509 * GUIContent_Temp_m5173 (Object_t * __this /* static, unused */, Texture_t22 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" void GUIContent_ClearStaticCache_m5174 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
