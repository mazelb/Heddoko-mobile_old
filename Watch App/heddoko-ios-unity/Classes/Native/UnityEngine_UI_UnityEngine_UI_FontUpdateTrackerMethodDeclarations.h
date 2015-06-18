#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontUpdateTracker
struct FontUpdateTracker_t350;
// UnityEngine.UI.Text
struct Text_t351;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t352;
// UnityEngine.Font
struct Font_t346;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
extern "C" void FontUpdateTracker__cctor_m1440 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_TrackText_m1441 (Object_t * __this /* static, unused */, Text_t351 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
extern "C" FontTextureRebuildCallback_t352 * FontUpdateTracker_RebuildForFont_m1442 (Object_t * __this /* static, unused */, Font_t346 * ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_UntrackText_m1443 (Object_t * __this /* static, unused */, Text_t351 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
