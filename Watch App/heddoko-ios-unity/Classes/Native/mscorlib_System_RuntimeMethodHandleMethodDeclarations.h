#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_t1474;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
extern "C" void RuntimeMethodHandle__ctor_m10104 (RuntimeMethodHandle_t1474 * __this, IntPtr_t98 ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeMethodHandle__ctor_m10105 (RuntimeMethodHandle_t1474 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
extern "C" IntPtr_t98 RuntimeMethodHandle_get_Value_m10106 (RuntimeMethodHandle_t1474 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeMethodHandle_GetObjectData_m10107 (RuntimeMethodHandle_t1474 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
extern "C" bool RuntimeMethodHandle_Equals_m10108 (RuntimeMethodHandle_t1474 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
extern "C" int32_t RuntimeMethodHandle_GetHashCode_m10109 (RuntimeMethodHandle_t1474 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
