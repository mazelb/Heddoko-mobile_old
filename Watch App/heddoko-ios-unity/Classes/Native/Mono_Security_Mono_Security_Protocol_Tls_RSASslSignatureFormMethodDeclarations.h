#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t2402;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t655;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter__ctor_m11585 (RSASslSignatureFormatter_t2402 * __this, AsymmetricAlgorithm_t655 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t13* RSASslSignatureFormatter_CreateSignature_m11586 (RSASslSignatureFormatter_t2402 * __this, ByteU5BU5D_t13* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureFormatter_SetHashAlgorithm_m11587 (RSASslSignatureFormatter_t2402 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter_SetKey_m11588 (RSASslSignatureFormatter_t2402 * __this, AsymmetricAlgorithm_t655 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
