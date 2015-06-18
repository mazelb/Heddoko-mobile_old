#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2332;
// Mono.Math.BigInteger
struct BigInteger_t2331;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m11053 (ModulusRing_t2332 * __this, BigInteger_t2331 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m11054 (ModulusRing_t2332 * __this, BigInteger_t2331 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2331 * ModulusRing_Multiply_m11055 (ModulusRing_t2332 * __this, BigInteger_t2331 * ___a, BigInteger_t2331 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2331 * ModulusRing_Difference_m11056 (ModulusRing_t2332 * __this, BigInteger_t2331 * ___a, BigInteger_t2331 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2331 * ModulusRing_Pow_m11057 (ModulusRing_t2332 * __this, BigInteger_t2331 * ___a, BigInteger_t2331 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2331 * ModulusRing_Pow_m11058 (ModulusRing_t2332 * __this, uint32_t ___b, BigInteger_t2331 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
