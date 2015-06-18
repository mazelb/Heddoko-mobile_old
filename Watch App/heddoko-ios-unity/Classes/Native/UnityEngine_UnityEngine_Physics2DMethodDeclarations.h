#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics2D
struct Physics2D_t485;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t487;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m4647 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m4648 (Object_t * __this /* static, unused */, Vector2_t32  ___origin, Vector2_t32  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t488 * ___raycastHit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m4649 (Object_t * __this /* static, unused */, Vector2_t32 * ___origin, Vector2_t32 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t488 * ___raycastHit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t488  Physics2D_Raycast_m2507 (Object_t * __this /* static, unused */, Vector2_t32  ___origin, Vector2_t32  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t488  Physics2D_Raycast_m4650 (Object_t * __this /* static, unused */, Vector2_t32  ___origin, Vector2_t32  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t487* Physics2D_RaycastAll_m2400 (Object_t * __this /* static, unused */, Vector2_t32  ___origin, Vector2_t32  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t487* Physics2D_INTERNAL_CALL_RaycastAll_m4651 (Object_t * __this /* static, unused */, Vector2_t32 * ___origin, Vector2_t32 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::GetRayIntersectionNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit2D[],System.Single,System.Int32)
extern "C" int32_t Physics2D_GetRayIntersectionNonAlloc_m4652 (Object_t * __this /* static, unused */, Ray_t237  ___ray, RaycastHit2DU5BU5D_t487* ___results, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionNonAlloc(UnityEngine.Ray&,UnityEngine.RaycastHit2D[],System.Single,System.Int32)
extern "C" int32_t Physics2D_INTERNAL_CALL_GetRayIntersectionNonAlloc_m4653 (Object_t * __this /* static, unused */, Ray_t237 * ___ray, RaycastHit2DU5BU5D_t487* ___results, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
