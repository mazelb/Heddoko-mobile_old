#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Font
struct Font_t346;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t352;

// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t19 * Font_get_material_m2743 (Font_t346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m2605 (Font_t346 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal()
extern "C" void Font_InvokeTextureRebuilt_Internal_m4995 (Font_t346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t352 * Font_get_textureRebuildCallback_m2448 (Font_t346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m2450 (Font_t346 * __this, FontTextureRebuildCallback_t352 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m2745 (Font_t346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m2747 (Font_t346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
