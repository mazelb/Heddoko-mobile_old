#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t1061;
struct Gradient_t1061_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m5000 (Gradient_t1061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m5001 (Gradient_t1061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m5002 (Gradient_t1061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m5003 (Gradient_t1061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t1061_marshal(const Gradient_t1061& unmarshaled, Gradient_t1061_marshaled& marshaled);
void Gradient_t1061_marshal_back(const Gradient_t1061_marshaled& marshaled, Gradient_t1061& unmarshaled);
void Gradient_t1061_marshal_cleanup(Gradient_t1061_marshaled& marshaled);
