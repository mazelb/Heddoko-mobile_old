#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t396;
struct Coroutine_t396_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m4885 (Coroutine_t396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m4886 (Coroutine_t396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m4887 (Coroutine_t396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t396_marshal(const Coroutine_t396& unmarshaled, Coroutine_t396_marshaled& marshaled);
void Coroutine_t396_marshal_back(const Coroutine_t396_marshaled& marshaled, Coroutine_t396& unmarshaled);
void Coroutine_t396_marshal_cleanup(Coroutine_t396_marshaled& marshaled);
