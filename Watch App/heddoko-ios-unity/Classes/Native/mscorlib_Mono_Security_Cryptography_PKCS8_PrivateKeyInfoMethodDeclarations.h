#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1331;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.Security.Cryptography.RSA
struct RSA_t661;
// System.Security.Cryptography.DSA
struct DSA_t660;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m6842 (PrivateKeyInfo_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m6843 (PrivateKeyInfo_t1331 * __this, ByteU5BU5D_t13* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t13* PrivateKeyInfo_get_PrivateKey_m6844 (PrivateKeyInfo_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m6845 (PrivateKeyInfo_t1331 * __this, ByteU5BU5D_t13* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t13* PrivateKeyInfo_RemoveLeadingZero_m6846 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t13* PrivateKeyInfo_Normalize_m6847 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t661 * PrivateKeyInfo_DecodeRSA_m6848 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t660 * PrivateKeyInfo_DecodeDSA_m6849 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___privateKey, DSAParameters_t801  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
