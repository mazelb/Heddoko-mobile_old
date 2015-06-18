#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t1299;
struct PreviousInfo_t1299_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m6604 (PreviousInfo_t1299 * __this, bool ___dummy, MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t1299_marshal(const PreviousInfo_t1299& unmarshaled, PreviousInfo_t1299_marshaled& marshaled);
void PreviousInfo_t1299_marshal_back(const PreviousInfo_t1299_marshaled& marshaled, PreviousInfo_t1299& unmarshaled);
void PreviousInfo_t1299_marshal_cleanup(PreviousInfo_t1299_marshaled& marshaled);
