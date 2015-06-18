#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t149;
struct WaitForSeconds_t149_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m700 (WaitForSeconds_t149 * __this, float ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t149_marshal(const WaitForSeconds_t149& unmarshaled, WaitForSeconds_t149_marshaled& marshaled);
void WaitForSeconds_t149_marshal_back(const WaitForSeconds_t149_marshaled& marshaled, WaitForSeconds_t149& unmarshaled);
void WaitForSeconds_t149_marshal_cleanup(WaitForSeconds_t149_marshaled& marshaled);
