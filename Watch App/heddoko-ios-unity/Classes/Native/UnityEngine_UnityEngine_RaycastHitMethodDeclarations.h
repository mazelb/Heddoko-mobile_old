#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t242;
// UnityEngine.Collider
struct Collider_t100;
// UnityEngine.Rigidbody
struct Rigidbody_t241;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t54  RaycastHit_get_point_m1059 (RaycastHit_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t54  RaycastHit_get_normal_m2414 (RaycastHit_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m1067 (RaycastHit_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t100 * RaycastHit_get_collider_m2413 (RaycastHit_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t241 * RaycastHit_get_rigidbody_m1056 (RaycastHit_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
