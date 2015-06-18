#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1693;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t655;
// System.Byte[]
struct ByteU5BU5D_t13;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m8898 (RSAPKCS1KeyExchangeFormatter_t1693 * __this, AsymmetricAlgorithm_t655 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t13* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m8899 (RSAPKCS1KeyExchangeFormatter_t1693 * __this, ByteU5BU5D_t13* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m8900 (RSAPKCS1KeyExchangeFormatter_t1693 * __this, AsymmetricAlgorithm_t655 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
