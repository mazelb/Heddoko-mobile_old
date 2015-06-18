#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationInfo
struct AnimationInfo_t1013;
// UnityEngine.AnimationClip
struct AnimationClip_t1008;

// UnityEngine.AnimationClip UnityEngine.AnimationInfo::get_clip()
extern "C" AnimationClip_t1008 * AnimationInfo_get_clip_m4710 (AnimationInfo_t1013 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationInfo::get_weight()
extern "C" float AnimationInfo_get_weight_m4711 (AnimationInfo_t1013 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationClip UnityEngine.AnimationInfo::ClipInstanceToScriptingObject(System.Int32)
extern "C" AnimationClip_t1008 * AnimationInfo_ClipInstanceToScriptingObject_m4712 (Object_t * __this /* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
