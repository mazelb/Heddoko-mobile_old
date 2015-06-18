#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t800;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1325;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1322;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
extern "C" void DSACryptoServiceProvider__ctor_m8739 (DSACryptoServiceProvider_t800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C" void DSACryptoServiceProvider__ctor_m3960 (DSACryptoServiceProvider_t800 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
extern "C" void DSACryptoServiceProvider__ctor_m8740 (DSACryptoServiceProvider_t800 * __this, int32_t ___dwKeySize, CspParameters_t1325 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
extern "C" void DSACryptoServiceProvider__cctor_m8741 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
extern "C" void DSACryptoServiceProvider_Finalize_m8742 (DSACryptoServiceProvider_t800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
extern "C" int32_t DSACryptoServiceProvider_get_KeySize_m8743 (DSACryptoServiceProvider_t800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
extern "C" bool DSACryptoServiceProvider_get_PublicOnly_m3947 (DSACryptoServiceProvider_t800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C" DSAParameters_t801  DSACryptoServiceProvider_ExportParameters_m8744 (DSACryptoServiceProvider_t800 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C" void DSACryptoServiceProvider_ImportParameters_m8745 (DSACryptoServiceProvider_t800 * __this, DSAParameters_t801  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t13* DSACryptoServiceProvider_CreateSignature_m8746 (DSACryptoServiceProvider_t800 * __this, ByteU5BU5D_t13* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSACryptoServiceProvider_VerifySignature_m8747 (DSACryptoServiceProvider_t800 * __this, ByteU5BU5D_t13* ___rgbHash, ByteU5BU5D_t13* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
extern "C" void DSACryptoServiceProvider_Dispose_m8748 (DSACryptoServiceProvider_t800 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C" void DSACryptoServiceProvider_OnKeyGenerated_m8749 (DSACryptoServiceProvider_t800 * __this, Object_t * ___sender, EventArgs_t1322 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
