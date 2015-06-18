#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t2339;
// Mono.Math.BigInteger
struct BigInteger_t2331;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m11124 (SequentialSearchPrimeGeneratorBase_t2339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t2331 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m11125 (SequentialSearchPrimeGeneratorBase_t2339 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t2331 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m11126 (SequentialSearchPrimeGeneratorBase_t2339 * __this, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t2331 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m11127 (SequentialSearchPrimeGeneratorBase_t2339 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m11128 (SequentialSearchPrimeGeneratorBase_t2339 * __this, BigInteger_t2331 * ___bi, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
