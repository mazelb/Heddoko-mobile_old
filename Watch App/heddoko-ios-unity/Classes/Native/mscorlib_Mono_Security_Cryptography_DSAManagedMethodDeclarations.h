#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t1324;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1317;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1323;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
extern "C" void DSAManaged__ctor_m6781 (DSAManaged_t1324 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C" void DSAManaged_add_KeyGenerated_m6782 (DSAManaged_t1324 * __this, KeyGeneratedEventHandler_t1323 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C" void DSAManaged_remove_KeyGenerated_m6783 (DSAManaged_t1324 * __this, KeyGeneratedEventHandler_t1323 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
extern "C" void DSAManaged_Finalize_m6784 (DSAManaged_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
extern "C" void DSAManaged_Generate_m6785 (DSAManaged_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
extern "C" void DSAManaged_GenerateKeyPair_m6786 (DSAManaged_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
extern "C" void DSAManaged_add_m6787 (DSAManaged_t1324 * __this, ByteU5BU5D_t13* ___a, ByteU5BU5D_t13* ___b, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
extern "C" void DSAManaged_GenerateParams_m6788 (DSAManaged_t1324 * __this, int32_t ___keyLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
extern "C" RandomNumberGenerator_t1317 * DSAManaged_get_Random_m6789 (DSAManaged_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
extern "C" int32_t DSAManaged_get_KeySize_m6790 (DSAManaged_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
extern "C" bool DSAManaged_get_PublicOnly_m6791 (DSAManaged_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
extern "C" ByteU5BU5D_t13* DSAManaged_NormalizeArray_m6792 (DSAManaged_t1324 * __this, ByteU5BU5D_t13* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
extern "C" DSAParameters_t801  DSAManaged_ExportParameters_m6793 (DSAManaged_t1324 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C" void DSAManaged_ImportParameters_m6794 (DSAManaged_t1324 * __this, DSAParameters_t801  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t13* DSAManaged_CreateSignature_m6795 (DSAManaged_t1324 * __this, ByteU5BU5D_t13* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSAManaged_VerifySignature_m6796 (DSAManaged_t1324 * __this, ByteU5BU5D_t13* ___rgbHash, ByteU5BU5D_t13* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
extern "C" void DSAManaged_Dispose_m6797 (DSAManaged_t1324 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
