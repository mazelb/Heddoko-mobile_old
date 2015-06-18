#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationEvent
struct AnimationEvent_t1006;
struct AnimationEvent_t1006_marshaled;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t50;
struct Object_t50_marshaled;
// UnityEngine.AnimationState
struct AnimationState_t1007;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.AnimationEvent::.ctor()
extern "C" void AnimationEvent__ctor_m4668 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::Create()
extern "C" void AnimationEvent_Create_m4669 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::Finalize()
extern "C" void AnimationEvent_Finalize_m4670 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::Destroy()
extern "C" void AnimationEvent_Destroy_m4671 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m4672 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C" void AnimationEvent_set_data_m4673 (AnimationEvent_t1006 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m4674 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m4675 (AnimationEvent_t1006 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m4676 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C" void AnimationEvent_set_floatParameter_m4677 (AnimationEvent_t1006 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m4678 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C" void AnimationEvent_set_intParameter_m4679 (AnimationEvent_t1006 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t50 * AnimationEvent_get_objectReferenceParameter_m4680 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C" void AnimationEvent_set_objectReferenceParameter_m4681 (AnimationEvent_t1006 * __this, Object_t50 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m4682 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m4683 (AnimationEvent_t1006 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m4684 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m4685 (AnimationEvent_t1006 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m4686 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C" void AnimationEvent_set_messageOptions_m4687 (AnimationEvent_t1006 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C" AnimationState_t1007 * AnimationEvent_get_animationState_m4688 (AnimationEvent_t1006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationEvent_t1006_marshal(const AnimationEvent_t1006& unmarshaled, AnimationEvent_t1006_marshaled& marshaled);
void AnimationEvent_t1006_marshal_back(const AnimationEvent_t1006_marshaled& marshaled, AnimationEvent_t1006& unmarshaled);
void AnimationEvent_t1006_marshal_cleanup(AnimationEvent_t1006_marshaled& marshaled);
