#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t389;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1248;
// System.Delegate
struct Delegate_t494;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m2850 (MulticastDelegate_t389 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m2848 (MulticastDelegate_t389 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m2849 (MulticastDelegate_t389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1248* MulticastDelegate_GetInvocationList_m2852 (MulticastDelegate_t389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t494 * MulticastDelegate_CombineImpl_m2853 (MulticastDelegate_t389 * __this, Delegate_t494 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6321 (MulticastDelegate_t389 * __this, MulticastDelegate_t389 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t389 * MulticastDelegate_KPM_m6322 (Object_t * __this /* static, unused */, MulticastDelegate_t389 * ___needle, MulticastDelegate_t389 * ___haystack, MulticastDelegate_t389 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t494 * MulticastDelegate_RemoveImpl_m2854 (MulticastDelegate_t389 * __this, Delegate_t494 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
