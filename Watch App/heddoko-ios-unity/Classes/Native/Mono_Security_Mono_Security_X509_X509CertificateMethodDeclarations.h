#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t659;
// System.Security.Cryptography.DSA
struct DSA_t660;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t811;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t661;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t655;
// Mono.Security.ASN1
struct ASN1_t670;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m3999 (X509Certificate_t659 * __this, ByteU5BU5D_t13* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m11253 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m11254 (X509Certificate_t659 * __this, ByteU5BU5D_t13* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t13* X509Certificate_GetUnsignedBigInteger_m11255 (X509Certificate_t659 * __this, ByteU5BU5D_t13* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t660 * X509Certificate_get_DSA_m3946 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C" void X509Certificate_set_DSA_m3997 (X509Certificate_t659 * __this, DSA_t660 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C" X509ExtensionCollection_t811 * X509Certificate_get_Extensions_m4023 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C" ByteU5BU5D_t13* X509Certificate_get_Hash_m11256 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m11257 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C" String_t* X509Certificate_get_KeyAlgorithm_m3939 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t13* X509Certificate_get_KeyAlgorithmParameters_m3952 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C" void X509Certificate_set_KeyAlgorithmParameters_m4021 (X509Certificate_t659 * __this, ByteU5BU5D_t13* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t13* X509Certificate_get_PublicKey_m3951 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C" RSA_t661 * X509Certificate_get_RSA_m3940 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C" void X509Certificate_set_RSA_m3996 (X509Certificate_t659 * __this, RSA_t661 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t13* X509Certificate_get_RawData_m4055 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C" ByteU5BU5D_t13* X509Certificate_get_SerialNumber_m3979 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C" ByteU5BU5D_t13* X509Certificate_get_Signature_m11258 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C" String_t* X509Certificate_get_SignatureAlgorithm_m3981 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m11259 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t645  X509Certificate_get_ValidFrom_m3978 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t645  X509Certificate_get_ValidUntil_m3976 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C" int32_t X509Certificate_get_Version_m3984 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C" bool X509Certificate_get_IsCurrent_m11260 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C" bool X509Certificate_WasCurrent_m11261 (X509Certificate_t659 * __this, DateTime_t645  ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Certificate_VerifySignature_m11262 (X509Certificate_t659 * __this, DSA_t660 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Certificate_VerifySignature_m11263 (X509Certificate_t659 * __this, RSA_t661 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Certificate_VerifySignature_m4022 (X509Certificate_t659 * __this, AsymmetricAlgorithm_t655 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C" bool X509Certificate_get_IsSelfSigned_m11264 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t670 * X509Certificate_GetIssuerName_m3975 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t670 * X509Certificate_GetSubjectName_m3982 (X509Certificate_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m11265 (X509Certificate_t659 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t13* X509Certificate_PEM_m11266 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t13* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
