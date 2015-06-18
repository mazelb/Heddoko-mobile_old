#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t684;
// System.Byte[]
struct ByteU5BU5D_t13;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t811;
// Mono.Security.ASN1
struct ASN1_t670;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m11290 (X509CrlEntry_t684 * __this, ASN1_t670 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t13* X509CrlEntry_get_SerialNumber_m11291 (X509CrlEntry_t684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t645  X509CrlEntry_get_RevocationDate_m4030 (X509CrlEntry_t684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t811 * X509CrlEntry_get_Extensions_m4037 (X509CrlEntry_t684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
