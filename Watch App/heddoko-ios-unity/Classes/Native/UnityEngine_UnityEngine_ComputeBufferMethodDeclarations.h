#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t195;
// System.Array
struct Array_t;
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferType.h"

// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C" void ComputeBuffer__ctor_m961 (ComputeBuffer_t195 * __this, int32_t ___count, int32_t ___stride, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Finalize()
extern "C" void ComputeBuffer_Finalize_m5412 (ComputeBuffer_t195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose()
extern "C" void ComputeBuffer_Dispose_m5413 (ComputeBuffer_t195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose(System.Boolean)
extern "C" void ComputeBuffer_Dispose_m5414 (ComputeBuffer_t195 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C" void ComputeBuffer_InitBuffer_m5415 (Object_t * __this /* static, unused */, ComputeBuffer_t195 * ___buf, int32_t ___count, int32_t ___stride, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
extern "C" void ComputeBuffer_DestroyBuffer_m5416 (Object_t * __this /* static, unused */, ComputeBuffer_t195 * ___buf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Release()
extern "C" void ComputeBuffer_Release_m959 (ComputeBuffer_t195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
extern "C" void ComputeBuffer_SetData_m962 (ComputeBuffer_t195 * __this, Array_t * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)
extern "C" void ComputeBuffer_InternalSetData_m5417 (ComputeBuffer_t195 * __this, Array_t * ___data, int32_t ___elemSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)
extern "C" void ComputeBuffer_CopyCount_m966 (Object_t * __this /* static, unused */, ComputeBuffer_t195 * ___src, ComputeBuffer_t195 * ___dst, int32_t ___dstOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
