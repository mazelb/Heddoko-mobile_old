#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t2363;
// System.String[]
struct StringU5BU5D_t17;
// Mono.Security.ASN1
struct ASN1_t670;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m11334 (GeneralNames_t2363 * __this, ASN1_t670 * ___sequence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t17* GeneralNames_get_DNSNames_m11335 (GeneralNames_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t17* GeneralNames_get_IPAddresses_m11336 (GeneralNames_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m11337 (GeneralNames_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
