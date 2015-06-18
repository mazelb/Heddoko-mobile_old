#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t1063;
// UnityEngine.Texture
struct Texture_t22;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1064;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t509;
// UnityEngine.GUIStyle
struct GUIStyle_t963;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t1065;

// System.Void UnityEngine.GUILayout::Label(UnityEngine.Texture,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m5024 (Object_t * __this /* static, unused */, Texture_t22 * ___image, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m5025 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m5026 (Object_t * __this /* static, unused */, GUIContent_t509 * ___content, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m5027 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m5028 (Object_t * __this /* static, unused */, GUIContent_t509 * ___content, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C" void GUILayout_Space_m5029 (Object_t * __this /* static, unused */, float ___pixels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C" void GUILayout_FlexibleSpace_m5030 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5031 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5032 (Object_t * __this /* static, unused */, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5033 (Object_t * __this /* static, unused */, GUIContent_t509 * ___content, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m5034 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m5035 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m5036 (Object_t * __this /* static, unused */, GUIContent_t509 * ___content, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C" void GUILayout_EndVertical_m5037 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t1065 * GUILayout_Width_m5038 (Object_t * __this /* static, unused */, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t1065 * GUILayout_Height_m5039 (Object_t * __this /* static, unused */, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C" GUILayoutOption_t1065 * GUILayout_ExpandWidth_m5040 (Object_t * __this /* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C" GUILayoutOption_t1065 * GUILayout_ExpandHeight_m5041 (Object_t * __this /* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
