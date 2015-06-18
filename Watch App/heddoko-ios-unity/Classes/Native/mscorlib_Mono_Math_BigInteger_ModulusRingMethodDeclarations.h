#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1313;
// Mono.Math.BigInteger
struct BigInteger_t1308;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6689 (ModulusRing_t1313 * __this, BigInteger_t1308 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6690 (ModulusRing_t1313 * __this, BigInteger_t1308 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1308 * ModulusRing_Multiply_m6691 (ModulusRing_t1313 * __this, BigInteger_t1308 * ___a, BigInteger_t1308 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1308 * ModulusRing_Difference_m6692 (ModulusRing_t1313 * __this, BigInteger_t1308 * ___a, BigInteger_t1308 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1308 * ModulusRing_Pow_m6693 (ModulusRing_t1313 * __this, BigInteger_t1308 * ___a, BigInteger_t1308 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1308 * ModulusRing_Pow_m6694 (ModulusRing_t1313 * __this, uint32_t ___b, BigInteger_t1308 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
