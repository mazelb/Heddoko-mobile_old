#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mathf
struct Mathf_t1088;

// System.Single UnityEngine.Mathf::Sin(System.Single)
extern "C" float Mathf_Sin_m646 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern "C" float Mathf_Cos_m647 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Tan(System.Single)
extern "C" float Mathf_Tan_m220 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Acos(System.Single)
extern "C" float Mathf_Acos_m5364 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m944 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m651 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m916 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" int32_t Mathf_Min_m2612 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m915 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m2610 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern "C" float Mathf_Pow_m191 (Object_t * __this /* static, unused */, float ___f, float ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
extern "C" float Mathf_Log_m998 (Object_t * __this /* static, unused */, float ___f, float ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m936 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m2674 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" int32_t Mathf_CeilToInt_m984 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" int32_t Mathf_FloorToInt_m625 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" int32_t Mathf_RoundToInt_m2535 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C" float Mathf_Sign_m2692 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m192 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" int32_t Mathf_Clamp_m198 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m199 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Lerp_m1038 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
extern "C" float Mathf_LerpAngle_m1037 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" bool Mathf_Approximately_m2376 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern "C" float Mathf_SmoothDamp_m2687 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern "C" float Mathf_Repeat_m2562 (Object_t * __this /* static, unused */, float ___t, float ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" float Mathf_InverseLerp_m2561 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
