#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t1029;
struct AsyncOperation_t1029_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m5384 (AsyncOperation_t1029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m5385 (AsyncOperation_t1029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m5386 (AsyncOperation_t1029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t1029_marshal(const AsyncOperation_t1029& unmarshaled, AsyncOperation_t1029_marshaled& marshaled);
void AsyncOperation_t1029_marshal_back(const AsyncOperation_t1029_marshaled& marshaled, AsyncOperation_t1029& unmarshaled);
void AsyncOperation_t1029_marshal_cleanup(AsyncOperation_t1029_marshaled& marshaled);
