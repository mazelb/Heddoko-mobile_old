#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t661;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1317;
// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1693  : public AsymmetricKeyExchangeFormatter_t1661
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t661 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t1317 * ___random_1;
};
