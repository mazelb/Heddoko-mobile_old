#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t488;
// UnityEngine.Collider2D
struct Collider2D_t489;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1001;
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t32  RaycastHit2D_get_point_m2404 (RaycastHit2D_t488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t32  RaycastHit2D_get_normal_m2405 (RaycastHit2D_t488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m2508 (RaycastHit2D_t488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t489 * RaycastHit2D_get_collider_m2401 (RaycastHit2D_t488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t1001 * RaycastHit2D_get_rigidbody_m4654 (RaycastHit2D_t488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t85 * RaycastHit2D_get_transform_m2402 (RaycastHit2D_t488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
