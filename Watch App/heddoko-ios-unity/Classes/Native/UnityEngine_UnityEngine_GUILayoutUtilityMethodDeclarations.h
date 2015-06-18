#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t1069;
// UnityEngine.GUIStyle
struct GUIStyle_t963;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t1067;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1064;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t1066;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t509;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" void GUILayoutUtility__cctor_m5043 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" LayoutCache_t1067 * GUILayoutUtility_SelectIDList_m5044 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" void GUILayoutUtility_Begin_m5045 (Object_t * __this /* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m5046 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
extern "C" void GUILayoutUtility_EndGroup_m5047 (Object_t * __this /* static, unused */, String_t* ___groupName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m5048 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m5049 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutFreeGroup_m5050 (Object_t * __this /* static, unused */, GUILayoutGroup_t1066 * ___toplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m5051 (Object_t * __this /* static, unused */, GUILayoutGroup_t1066 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t132  GUILayoutUtility_Internal_GetWindowRect_m5052 (Object_t * __this /* static, unused */, int32_t ___windowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m5053 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t132  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5054 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t132 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
extern "C" GUILayoutGroup_t1066 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5055 (Object_t * __this /* static, unused */, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
extern "C" GUILayoutGroup_t1066 * GUILayoutUtility_BeginLayoutGroup_m5056 (Object_t * __this /* static, unused */, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
extern "C" void GUILayoutUtility_EndLayoutGroup_m5057 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t132  GUILayoutUtility_GetRect_m5058 (Object_t * __this /* static, unused */, GUIContent_t509 * ___content, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t132  GUILayoutUtility_DoGetRect_m5059 (Object_t * __this /* static, unused */, GUIContent_t509 * ___content, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t132  GUILayoutUtility_GetRect_m5060 (Object_t * __this /* static, unused */, float ___width, float ___height, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t132  GUILayoutUtility_DoGetRect_m5061 (Object_t * __this /* static, unused */, float ___minWidth, float ___maxWidth, float ___minHeight, float ___maxHeight, GUIStyle_t963 * ___style, GUILayoutOptionU5BU5D_t1064* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" GUIStyle_t963 * GUILayoutUtility_get_spaceStyle_m5062 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
