#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t182;
struct AnimationCurve_t182_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t221;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m993 (AnimationCurve_t182 * __this, KeyframeU5BU5D_t221* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m4689 (AnimationCurve_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m4690 (AnimationCurve_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m4691 (AnimationCurve_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m935 (AnimationCurve_t182 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t221* AnimationCurve_get_keys_m990 (AnimationCurve_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" Keyframe_t222  AnimationCurve_get_Item_m995 (AnimationCurve_t182 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m994 (AnimationCurve_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t222  AnimationCurve_GetKey_Internal_m4692 (AnimationCurve_t182 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t221* AnimationCurve_GetKeys_m4693 (AnimationCurve_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m4694 (AnimationCurve_t182 * __this, KeyframeU5BU5D_t221* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t182_marshal(const AnimationCurve_t182& unmarshaled, AnimationCurve_t182_marshaled& marshaled);
void AnimationCurve_t182_marshal_back(const AnimationCurve_t182_marshaled& marshaled, AnimationCurve_t182& unmarshaled);
void AnimationCurve_t182_marshal_cleanup(AnimationCurve_t182_marshaled& marshaled);
