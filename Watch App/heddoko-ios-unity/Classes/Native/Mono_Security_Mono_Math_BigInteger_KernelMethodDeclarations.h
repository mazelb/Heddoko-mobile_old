#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t2333;
// Mono.Math.BigInteger
struct BigInteger_t2331;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t2334;
// System.UInt32[]
struct UInt32U5BU5D_t1316;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2331 * Kernel_AddSameSign_m11059 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___bi1, BigInteger_t2331 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2331 * Kernel_Subtract_m11060 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___big, BigInteger_t2331 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m11061 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___big, BigInteger_t2331 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m11062 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___bi1, BigInteger_t2331 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m11063 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___bi1, BigInteger_t2331 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m11064 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m11065 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t2334* Kernel_DwordDivMod_m11066 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t2334* Kernel_multiByteDivide_m11067 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___bi1, BigInteger_t2331 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t2331 * Kernel_LeftShift_m11068 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t2331 * Kernel_RightShift_m11069 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m11070 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1316* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1316* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1316* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m11071 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1316* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1316* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1316* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m11072 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2331 * Kernel_modInverse_m11073 (Object_t * __this /* static, unused */, BigInteger_t2331 * ___bi, BigInteger_t2331 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
