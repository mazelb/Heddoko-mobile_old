#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t55;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m643 (Quaternion_t55 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t55  Quaternion_get_identity_m572 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m5292 (Object_t * __this /* static, unused */, Quaternion_t55  ___a, Quaternion_t55  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" Quaternion_t55  Quaternion_LookRotation_m1040 (Object_t * __this /* static, unused */, Vector3_t54  ___forward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t55  Quaternion_INTERNAL_CALL_LookRotation_m5293 (Object_t * __this /* static, unused */, Vector3_t54 * ___forward, Vector3_t54 * ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t55  Quaternion_Slerp_m1041 (Object_t * __this /* static, unused */, Quaternion_t55  ___from, Quaternion_t55  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t55  Quaternion_INTERNAL_CALL_Slerp_m5294 (Object_t * __this /* static, unused */, Quaternion_t55 * ___from, Quaternion_t55 * ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t55  Quaternion_Inverse_m644 (Object_t * __this /* static, unused */, Quaternion_t55  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t55  Quaternion_INTERNAL_CALL_Inverse_m5295 (Object_t * __this /* static, unused */, Quaternion_t55 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m690 (Quaternion_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Angle_m650 (Object_t * __this /* static, unused */, Quaternion_t55  ___a, Quaternion_t55  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t54  Quaternion_get_eulerAngles_m5296 (Quaternion_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t55  Quaternion_Euler_m202 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t55  Quaternion_Euler_m5297 (Object_t * __this /* static, unused */, Vector3_t54  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t54  Quaternion_Internal_ToEulerRad_m5298 (Object_t * __this /* static, unused */, Quaternion_t55  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t54  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5299 (Object_t * __this /* static, unused */, Quaternion_t55 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t55  Quaternion_Internal_FromEulerRad_m5300 (Object_t * __this /* static, unused */, Vector3_t54  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t55  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5301 (Object_t * __this /* static, unused */, Vector3_t54 * ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m5302 (Quaternion_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m5303 (Quaternion_t55 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t55  Quaternion_op_Multiply_m645 (Object_t * __this /* static, unused */, Quaternion_t55  ___lhs, Quaternion_t55  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t54  Quaternion_op_Multiply_m1036 (Object_t * __this /* static, unused */, Quaternion_t55  ___rotation, Vector3_t54  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m687 (Object_t * __this /* static, unused */, Quaternion_t55  ___lhs, Quaternion_t55  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
