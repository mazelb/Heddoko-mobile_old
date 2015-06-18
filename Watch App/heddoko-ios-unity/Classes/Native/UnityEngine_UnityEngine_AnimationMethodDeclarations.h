#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t144;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// UnityEngine.AnimationState
struct AnimationState_t1007;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// System.Boolean UnityEngine.Animation::Play()
extern "C" bool Animation_Play_m660 (Animation_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m4698 (Animation_t144 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m4699 (Animation_t144 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m4700 (Animation_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t1007 * Animation_GetStateAtIndex_m4701 (Animation_t144 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m4702 (Animation_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
