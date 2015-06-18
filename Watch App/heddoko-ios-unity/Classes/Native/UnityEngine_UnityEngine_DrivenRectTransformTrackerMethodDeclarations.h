#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t409;
// UnityEngine.Object
struct Object_t50;
struct Object_t50_marshaled;
// UnityEngine.RectTransform
struct RectTransform_t354;
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"

// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
extern "C" void DrivenRectTransformTracker_Add_m2676 (DrivenRectTransformTracker_t409 * __this, Object_t50 * ___driver, RectTransform_t354 * ___rectTransform, int32_t ___drivenProperties, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern "C" void DrivenRectTransformTracker_Clear_m2675 (DrivenRectTransformTracker_t409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
