#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics
struct Physics_t996;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t490;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m4638 (Object_t * __this /* static, unused */, Vector3_t54  ___origin, Vector3_t54  ___direction, RaycastHit_t242 * ___hitInfo, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m4639 (Object_t * __this /* static, unused */, Vector3_t54 * ___origin, Vector3_t54 * ___direction, RaycastHit_t242 * ___hitInfo, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m4640 (Object_t * __this /* static, unused */, Vector3_t54  ___origin, Vector3_t54  ___direction, RaycastHit_t242 * ___hitInfo, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m1055 (Object_t * __this /* static, unused */, Ray_t237  ___ray, RaycastHit_t242 * ___hitInfo, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2506 (Object_t * __this /* static, unused */, Ray_t237  ___ray, RaycastHit_t242 * ___hitInfo, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t490* Physics_RaycastAll_m2411 (Object_t * __this /* static, unused */, Ray_t237  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t490* Physics_RaycastAll_m4641 (Object_t * __this /* static, unused */, Vector3_t54  ___origin, Vector3_t54  ___direction, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t490* Physics_INTERNAL_CALL_RaycastAll_m4642 (Object_t * __this /* static, unused */, Vector3_t54 * ___origin, Vector3_t54 * ___direction, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
