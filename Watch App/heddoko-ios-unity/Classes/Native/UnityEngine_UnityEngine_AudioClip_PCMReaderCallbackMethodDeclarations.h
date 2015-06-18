#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1002;
// System.Object
struct Object_t;
// System.Single[]
struct SingleU5BU5D_t126;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMReaderCallback__ctor_m4656 (PCMReaderCallback_t1002 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m4657 (PCMReaderCallback_t1002 * __this, SingleU5BU5D_t126* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern TypeInfo Single_t57_il2cpp_TypeInfo;
#include "mscorlib_ArrayTypes.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t1002(Il2CppObject* delegate, SingleU5BU5D_t126* ___data);
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m4658 (PCMReaderCallback_t1002 * __this, SingleU5BU5D_t126* ___data, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m4659 (PCMReaderCallback_t1002 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
