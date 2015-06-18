#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t656;
// System.Security.Cryptography.Oid
struct Oid_t657;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern "C" void AsnEncodedData__ctor_m3377 (AsnEncodedData_t656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
extern "C" void AsnEncodedData__ctor_m3378 (AsnEncodedData_t656 * __this, String_t* ___oid, ByteU5BU5D_t13* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern "C" void AsnEncodedData__ctor_m3379 (AsnEncodedData_t656 * __this, Oid_t657 * ___oid, ByteU5BU5D_t13* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
extern "C" Oid_t657 * AsnEncodedData_get_Oid_m3380 (AsnEncodedData_t656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern "C" void AsnEncodedData_set_Oid_m3381 (AsnEncodedData_t656 * __this, Oid_t657 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern "C" ByteU5BU5D_t13* AsnEncodedData_get_RawData_m3382 (AsnEncodedData_t656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern "C" void AsnEncodedData_set_RawData_m3383 (AsnEncodedData_t656 * __this, ByteU5BU5D_t13* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void AsnEncodedData_CopyFrom_m3384 (AsnEncodedData_t656 * __this, AsnEncodedData_t656 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern "C" String_t* AsnEncodedData_ToString_m3385 (AsnEncodedData_t656 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern "C" String_t* AsnEncodedData_Default_m3386 (AsnEncodedData_t656 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_BasicConstraintsExtension_m3387 (AsnEncodedData_t656 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_EnhancedKeyUsageExtension_m3388 (AsnEncodedData_t656 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_KeyUsageExtension_m3389 (AsnEncodedData_t656 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m3390 (AsnEncodedData_t656 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectAltName_m3391 (AsnEncodedData_t656 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern "C" String_t* AsnEncodedData_NetscapeCertType_m3392 (AsnEncodedData_t656 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
