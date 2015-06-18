#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t442;
// UnityEngine.UI.CanvasScaler/ScaleMode
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScaleMode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasScaler/ScreenMatchMode
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScreenMatchMode.h"
// UnityEngine.UI.CanvasScaler/Unit
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_Unit.h"

// System.Void UnityEngine.UI.CanvasScaler::.ctor()
extern "C" void CanvasScaler__ctor_m2050 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::get_uiScaleMode()
extern "C" int32_t CanvasScaler_get_uiScaleMode_m2051 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_uiScaleMode(UnityEngine.UI.CanvasScaler/ScaleMode)
extern "C" void CanvasScaler_set_uiScaleMode_m2052 (CanvasScaler_t442 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_referencePixelsPerUnit()
extern "C" float CanvasScaler_get_referencePixelsPerUnit_m2053 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_referencePixelsPerUnit(System.Single)
extern "C" void CanvasScaler_set_referencePixelsPerUnit_m2054 (CanvasScaler_t442 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_scaleFactor()
extern "C" float CanvasScaler_get_scaleFactor_m2055 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_scaleFactor(System.Single)
extern "C" void CanvasScaler_set_scaleFactor_m2056 (CanvasScaler_t442 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::get_referenceResolution()
extern "C" Vector2_t32  CanvasScaler_get_referenceResolution_m2057 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_referenceResolution(UnityEngine.Vector2)
extern "C" void CanvasScaler_set_referenceResolution_m2058 (CanvasScaler_t442 * __this, Vector2_t32  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::get_screenMatchMode()
extern "C" int32_t CanvasScaler_get_screenMatchMode_m2059 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_screenMatchMode(UnityEngine.UI.CanvasScaler/ScreenMatchMode)
extern "C" void CanvasScaler_set_screenMatchMode_m2060 (CanvasScaler_t442 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_matchWidthOrHeight()
extern "C" float CanvasScaler_get_matchWidthOrHeight_m2061 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_matchWidthOrHeight(System.Single)
extern "C" void CanvasScaler_set_matchWidthOrHeight_m2062 (CanvasScaler_t442 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::get_physicalUnit()
extern "C" int32_t CanvasScaler_get_physicalUnit_m2063 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_physicalUnit(UnityEngine.UI.CanvasScaler/Unit)
extern "C" void CanvasScaler_set_physicalUnit_m2064 (CanvasScaler_t442 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_fallbackScreenDPI()
extern "C" float CanvasScaler_get_fallbackScreenDPI_m2065 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_fallbackScreenDPI(System.Single)
extern "C" void CanvasScaler_set_fallbackScreenDPI_m2066 (CanvasScaler_t442 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_defaultSpriteDPI()
extern "C" float CanvasScaler_get_defaultSpriteDPI_m2067 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_defaultSpriteDPI(System.Single)
extern "C" void CanvasScaler_set_defaultSpriteDPI_m2068 (CanvasScaler_t442 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_dynamicPixelsPerUnit()
extern "C" float CanvasScaler_get_dynamicPixelsPerUnit_m2069 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_dynamicPixelsPerUnit(System.Single)
extern "C" void CanvasScaler_set_dynamicPixelsPerUnit_m2070 (CanvasScaler_t442 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::OnEnable()
extern "C" void CanvasScaler_OnEnable_m2071 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::OnDisable()
extern "C" void CanvasScaler_OnDisable_m2072 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::Update()
extern "C" void CanvasScaler_Update_m2073 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::Handle()
extern "C" void CanvasScaler_Handle_m2074 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleWorldCanvas()
extern "C" void CanvasScaler_HandleWorldCanvas_m2075 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleConstantPixelSize()
extern "C" void CanvasScaler_HandleConstantPixelSize_m2076 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleScaleWithScreenSize()
extern "C" void CanvasScaler_HandleScaleWithScreenSize_m2077 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleConstantPhysicalSize()
extern "C" void CanvasScaler_HandleConstantPhysicalSize_m2078 (CanvasScaler_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::SetScaleFactor(System.Single)
extern "C" void CanvasScaler_SetScaleFactor_m2079 (CanvasScaler_t442 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::SetReferencePixelsPerUnit(System.Single)
extern "C" void CanvasScaler_SetReferencePixelsPerUnit_m2080 (CanvasScaler_t442 * __this, float ___referencePixelsPerUnit, MethodInfo* method) IL2CPP_METHOD_ATTR;
