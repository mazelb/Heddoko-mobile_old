#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t1258;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeTypeHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeTypeHandle__ctor_m6536 (RuntimeTypeHandle_t1258 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
extern "C" IntPtr_t98 RuntimeTypeHandle_get_Value_m6537 (RuntimeTypeHandle_t1258 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeTypeHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeTypeHandle_GetObjectData_m6538 (RuntimeTypeHandle_t1258 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeTypeHandle::Equals(System.Object)
extern "C" bool RuntimeTypeHandle_Equals_m6539 (RuntimeTypeHandle_t1258 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeTypeHandle::GetHashCode()
extern "C" int32_t RuntimeTypeHandle_GetHashCode_m6540 (RuntimeTypeHandle_t1258 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
