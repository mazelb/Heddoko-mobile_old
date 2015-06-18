#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t131;
// UnityEngine.GUISkin
struct GUISkin_t70;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t509;
// UnityEngine.GUIStyle
struct GUIStyle_t963;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t146;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m5008 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m5009 (Object_t * __this /* static, unused */, DateTime_t645  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m521 (Object_t * __this /* static, unused */, GUISkin_t70 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t70 * GUI_get_skin_m5010 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_backgroundColor_m5011 (Object_t * __this /* static, unused */, Color_t29 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
extern "C" void GUI_set_backgroundColor_m5012 (Object_t * __this /* static, unused */, Color_t29  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m5013 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m668 (Object_t * __this /* static, unused */, Rect_t132  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m5014 (Object_t * __this /* static, unused */, Rect_t132  ___position, GUIContent_t509 * ___content, GUIStyle_t963 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m5015 (Object_t * __this /* static, unused */, Rect_t132  ___position, GUIContent_t509 * ___content, IntPtr_t98 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m5016 (Object_t * __this /* static, unused */, Rect_t132 * ___position, GUIContent_t509 * ___content, IntPtr_t98 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m5017 (Object_t * __this /* static, unused */, Rect_t132  ___position, GUIContent_t509 * ___content, GUIStyle_t963 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m523 (Object_t * __this /* static, unused */, Rect_t132  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m5018 (Object_t * __this /* static, unused */, Rect_t132  ___position, GUIContent_t509 * ___content, GUIStyle_t963 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m5019 (Object_t * __this /* static, unused */, Rect_t132  ___position, GUIContent_t509 * ___content, IntPtr_t98 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m5020 (Object_t * __this /* static, unused */, Rect_t132 * ___position, GUIContent_t509 * ___content, IntPtr_t98 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t132  GUI_Window_m663 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t132  ___clientRect, WindowFunction_t146 * ___func, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m5021 (Object_t * __this /* static, unused */, WindowFunction_t146 * ___func, int32_t ___id, GUISkin_t70 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t963 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t132  GUI_DoWindow_m5022 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t132  ___clientRect, WindowFunction_t146 * ___func, GUIContent_t509 * ___title, GUIStyle_t963 * ___style, GUISkin_t70 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t132  GUI_INTERNAL_CALL_DoWindow_m5023 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t132 * ___clientRect, WindowFunction_t146 * ___func, GUIContent_t509 * ___title, GUIStyle_t963 * ___style, GUISkin_t70 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
