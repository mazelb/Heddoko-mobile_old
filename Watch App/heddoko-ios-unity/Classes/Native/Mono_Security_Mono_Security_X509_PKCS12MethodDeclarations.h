#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t806;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t610;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t808;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1327;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2343;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t2352;
// Mono.Security.ASN1
struct ASN1_t670;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m11236 (PKCS12_t806 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m3990 (PKCS12_t806 * __this, ByteU5BU5D_t13* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m3991 (PKCS12_t806 * __this, ByteU5BU5D_t13* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m11237 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m11238 (PKCS12_t806 * __this, ByteU5BU5D_t13* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m11239 (PKCS12_t806 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m11240 (PKCS12_t806 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C" ArrayList_t610 * PKCS12_get_Keys_m3995 (PKCS12_t806 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t808 * PKCS12_get_Certificates_m3992 (PKCS12_t806 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m11241 (PKCS12_t806 * __this, ByteU5BU5D_t13* ___expected, ByteU5BU5D_t13* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t1327 * PKCS12_GetSymmetricAlgorithm_m11242 (PKCS12_t806 * __this, String_t* ___algorithmOid, ByteU5BU5D_t13* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t13* PKCS12_Decrypt_m11243 (PKCS12_t806 * __this, String_t* ___algorithmOid, ByteU5BU5D_t13* ___salt, int32_t ___iterationCount, ByteU5BU5D_t13* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t13* PKCS12_Decrypt_m11244 (PKCS12_t806 * __this, EncryptedData_t2343 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t801  PKCS12_GetExistingParameters_m11245 (PKCS12_t806 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m11246 (PKCS12_t806 * __this, PrivateKeyInfo_t2352 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m11247 (PKCS12_t806 * __this, ASN1_t670 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t13* PKCS12_MAC_m11248 (PKCS12_t806 * __this, ByteU5BU5D_t13* ___password, ByteU5BU5D_t13* ___salt, int32_t ___iterations, ByteU5BU5D_t13* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m11249 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
