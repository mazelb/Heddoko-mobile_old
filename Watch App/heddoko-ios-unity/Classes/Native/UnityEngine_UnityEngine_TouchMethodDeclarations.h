#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t319;
struct Touch_t319_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m2349 (Touch_t319 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t32  Touch_get_position_m2351 (Touch_t319 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m2350 (Touch_t319 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t319_marshal(const Touch_t319& unmarshaled, Touch_t319_marshaled& marshaled);
void Touch_t319_marshal_back(const Touch_t319_marshaled& marshaled, Touch_t319& unmarshaled);
void Touch_t319_marshal_cleanup(Touch_t319_marshaled& marshaled);
