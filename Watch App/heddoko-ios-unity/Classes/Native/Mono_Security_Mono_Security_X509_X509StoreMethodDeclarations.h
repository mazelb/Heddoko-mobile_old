#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Store
struct X509Store_t696;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t808;
// System.Collections.ArrayList
struct ArrayList_t610;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t13;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t659;
// Mono.Security.X509.X509Crl
struct X509Crl_t682;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" void X509Store__ctor_m11312 (X509Store_t696 * __this, String_t* ___path, bool ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" X509CertificateCollection_t808 * X509Store_get_Certificates_m4052 (X509Store_t696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" ArrayList_t610 * X509Store_get_Crls_m4032 (X509Store_t696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" ByteU5BU5D_t13* X509Store_Load_m11313 (X509Store_t696 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" X509Certificate_t659 * X509Store_LoadCertificate_m11314 (X509Store_t696 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" X509Crl_t682 * X509Store_LoadCrl_m11315 (X509Store_t696 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" bool X509Store_CheckStore_m11316 (X509Store_t696 * __this, String_t* ___path, bool ___throwException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" X509CertificateCollection_t808 * X509Store_BuildCertificatesCollection_m11317 (X509Store_t696 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" ArrayList_t610 * X509Store_BuildCrlsCollection_m11318 (X509Store_t696 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
