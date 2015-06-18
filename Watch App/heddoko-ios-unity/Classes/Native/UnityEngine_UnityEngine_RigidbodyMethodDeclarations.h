#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody
struct Rigidbody_t241;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Single UnityEngine.Rigidbody::get_drag()
extern "C" float Rigidbody_get_drag_m1043 (Rigidbody_t241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C" void Rigidbody_set_drag_m1045 (Rigidbody_t241 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C" float Rigidbody_get_angularDrag_m1044 (Rigidbody_t241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C" void Rigidbody_set_angularDrag_m1046 (Rigidbody_t241 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C" bool Rigidbody_get_isKinematic_m1057 (Rigidbody_t241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m1058 (Rigidbody_t241 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
extern "C" void Rigidbody_set_freezeRotation_m1033 (Rigidbody_t241 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_centerOfMass(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_centerOfMass_m4643 (Rigidbody_t241 * __this, Vector3_t54 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_centerOfMass()
extern "C" Vector3_t54  Rigidbody_get_centerOfMass_m1060 (Rigidbody_t241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
