#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X501
struct X501_t803;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t670;
// System.Text.StringBuilder
struct StringBuilder_t154;

// System.Void Mono.Security.X509.X501::.cctor()
extern "C" void X501__cctor_m11250 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" String_t* X501_ToString_m11251 (Object_t * __this /* static, unused */, ASN1_t670 * ___seq, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C" String_t* X501_ToString_m3962 (Object_t * __this /* static, unused */, ASN1_t670 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C" void X501_AppendEntry_m11252 (Object_t * __this /* static, unused */, StringBuilder_t154 * ___sb, ASN1_t670 * ___entry, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
