#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t1264;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeFieldHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeFieldHandle__ctor_m6531 (RuntimeFieldHandle_t1264 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeFieldHandle::get_Value()
extern "C" IntPtr_t98 RuntimeFieldHandle_get_Value_m6532 (RuntimeFieldHandle_t1264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeFieldHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeFieldHandle_GetObjectData_m6533 (RuntimeFieldHandle_t1264 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeFieldHandle::Equals(System.Object)
extern "C" bool RuntimeFieldHandle_Equals_m6534 (RuntimeFieldHandle_t1264 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeFieldHandle::GetHashCode()
extern "C" int32_t RuntimeFieldHandle_GetHashCode_m6535 (RuntimeFieldHandle_t1264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
