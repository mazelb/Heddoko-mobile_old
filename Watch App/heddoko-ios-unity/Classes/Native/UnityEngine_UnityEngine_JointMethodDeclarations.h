#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Joint
struct Joint_t997;
// UnityEngine.Rigidbody
struct Rigidbody_t241;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C" Rigidbody_t241 * Joint_get_connectedBody_m1042 (Joint_t997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C" void Joint_set_connectedBody_m1050 (Joint_t997 * __this, Rigidbody_t241 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C" void Joint_INTERNAL_set_anchor_m4644 (Joint_t997 * __this, Vector3_t54 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C" void Joint_set_anchor_m1063 (Joint_t997 * __this, Vector3_t54  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
