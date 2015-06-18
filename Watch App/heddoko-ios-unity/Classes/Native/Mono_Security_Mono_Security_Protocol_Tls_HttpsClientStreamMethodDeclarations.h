#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t2398;
// System.IO.Stream
struct Stream_t1426;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t639;
// System.Net.HttpWebRequest
struct HttpWebRequest_t640;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t624;
// System.Int32[]
struct Int32U5BU5D_t220;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t655;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m11525 (HttpsClientStream_t2398 * __this, Stream_t1426 * ___stream, X509CertificateCollection_t639 * ___clientCertificates, HttpWebRequest_t640 * ___request, ByteU5BU5D_t13* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m11526 (HttpsClientStream_t2398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m11527 (HttpsClientStream_t2398 * __this, X509Certificate_t624 * ___certificate, Int32U5BU5D_t220* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t624 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m11528 (Object_t * __this /* static, unused */, X509CertificateCollection_t639 * ___clientCerts, X509Certificate_t624 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t639 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t655 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m11529 (Object_t * __this /* static, unused */, X509Certificate_t624 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
