#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2343;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2342;
// System.Byte[]
struct ByteU5BU5D_t13;
// Mono.Security.ASN1
struct ASN1_t670;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m11146 (EncryptedData_t2343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m11147 (EncryptedData_t2343 * __this, ASN1_t670 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t2342 * EncryptedData_get_EncryptionAlgorithm_m11148 (EncryptedData_t2343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t13* EncryptedData_get_EncryptedContent_m11149 (EncryptedData_t2343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
