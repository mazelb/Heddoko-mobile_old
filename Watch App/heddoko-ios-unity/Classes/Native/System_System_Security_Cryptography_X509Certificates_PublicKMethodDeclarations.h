#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t658;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t656;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t655;
// System.Security.Cryptography.Oid
struct Oid_t657;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t659;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.Security.Cryptography.DSA
struct DSA_t660;
// System.Security.Cryptography.RSA
struct RSA_t661;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m3189 (PublicKey_t658 * __this, X509Certificate_t659 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t656 * PublicKey_get_EncodedKeyValue_m3190 (PublicKey_t658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t656 * PublicKey_get_EncodedParameters_m3191 (PublicKey_t658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t655 * PublicKey_get_Key_m3192 (PublicKey_t658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t657 * PublicKey_get_Oid_m3193 (PublicKey_t658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t13* PublicKey_GetUnsignedBigInteger_m3194 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t660 * PublicKey_DecodeDSA_m3195 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___rawPublicKey, ByteU5BU5D_t13* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t661 * PublicKey_DecodeRSA_m3196 (Object_t * __this /* static, unused */, ByteU5BU5D_t13* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
