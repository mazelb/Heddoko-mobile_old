#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t2328_il2cpp_TypeInfo;
extern TypeInfo Locale_t2329_il2cpp_TypeInfo;
extern TypeInfo Sign_t2330_il2cpp_TypeInfo;
extern TypeInfo ModulusRing_t2332_il2cpp_TypeInfo;
extern TypeInfo Kernel_t2333_il2cpp_TypeInfo;
extern TypeInfo BigInteger_t2331_il2cpp_TypeInfo;
extern TypeInfo ConfidenceFactor_t2335_il2cpp_TypeInfo;
extern TypeInfo PrimalityTests_t2336_il2cpp_TypeInfo;
extern TypeInfo PrimeGeneratorBase_t2337_il2cpp_TypeInfo;
extern TypeInfo SequentialSearchPrimeGeneratorBase_t2339_il2cpp_TypeInfo;
extern TypeInfo ASN1_t670_il2cpp_TypeInfo;
extern TypeInfo ASN1Convert_t2340_il2cpp_TypeInfo;
extern TypeInfo BitConverterLE_t2341_il2cpp_TypeInfo;
extern TypeInfo ContentInfo_t2342_il2cpp_TypeInfo;
extern TypeInfo EncryptedData_t2343_il2cpp_TypeInfo;
extern TypeInfo PKCS7_t2344_il2cpp_TypeInfo;
extern TypeInfo ARC4Managed_t2345_il2cpp_TypeInfo;
extern TypeInfo CryptoConvert_t2347_il2cpp_TypeInfo;
extern TypeInfo KeyBuilder_t2348_il2cpp_TypeInfo;
extern TypeInfo MD2_t2349_il2cpp_TypeInfo;
extern TypeInfo MD2Managed_t2350_il2cpp_TypeInfo;
extern TypeInfo PKCS1_t2351_il2cpp_TypeInfo;
extern TypeInfo PrivateKeyInfo_t2352_il2cpp_TypeInfo;
extern TypeInfo EncryptedPrivateKeyInfo_t2353_il2cpp_TypeInfo;
extern TypeInfo PKCS8_t2354_il2cpp_TypeInfo;
extern TypeInfo RC4_t2346_il2cpp_TypeInfo;
extern TypeInfo KeyGeneratedEventHandler_t2355_il2cpp_TypeInfo;
extern TypeInfo RSAManaged_t798_il2cpp_TypeInfo;
extern TypeInfo SafeBag_t2356_il2cpp_TypeInfo;
extern TypeInfo DeriveBytes_t2357_il2cpp_TypeInfo;
extern TypeInfo PKCS12_t806_il2cpp_TypeInfo;
extern TypeInfo X501_t803_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t659_il2cpp_TypeInfo;
extern TypeInfo X509CertificateEnumerator_t812_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t808_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t2358_il2cpp_TypeInfo;
extern TypeInfo X509ChainStatusFlags_t2359_il2cpp_TypeInfo;
extern TypeInfo X509CrlEntry_t684_il2cpp_TypeInfo;
extern TypeInfo X509Crl_t682_il2cpp_TypeInfo;
extern TypeInfo X509Extension_t683_il2cpp_TypeInfo;
extern TypeInfo X509ExtensionCollection_t811_il2cpp_TypeInfo;
extern TypeInfo X509Store_t696_il2cpp_TypeInfo;
extern TypeInfo X509StoreManager_t2360_il2cpp_TypeInfo;
extern TypeInfo X509Stores_t697_il2cpp_TypeInfo;
extern TypeInfo AuthorityKeyIdentifierExtension_t810_il2cpp_TypeInfo;
extern TypeInfo BasicConstraintsExtension_t2361_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t2362_il2cpp_TypeInfo;
extern TypeInfo GeneralNames_t2363_il2cpp_TypeInfo;
extern TypeInfo KeyUsages_t2364_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t2365_il2cpp_TypeInfo;
extern TypeInfo CertTypes_t2366_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t2367_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t2368_il2cpp_TypeInfo;
extern TypeInfo HMAC_t2369_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t2370_il2cpp_TypeInfo;
extern TypeInfo AlertLevel_t2371_il2cpp_TypeInfo;
extern TypeInfo AlertDescription_t2372_il2cpp_TypeInfo;
extern TypeInfo Alert_t2373_il2cpp_TypeInfo;
extern TypeInfo CipherAlgorithmType_t2374_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t2376_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t2377_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteFactory_t2380_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t2382_il2cpp_TypeInfo;
extern TypeInfo ClientRecordProtocol_t2383_il2cpp_TypeInfo;
extern TypeInfo ClientSessionInfo_t2387_il2cpp_TypeInfo;
extern TypeInfo ClientSessionCache_t2388_il2cpp_TypeInfo;
extern TypeInfo ContentType_t2389_il2cpp_TypeInfo;
extern TypeInfo Context_t2375_il2cpp_TypeInfo;
extern TypeInfo ExchangeAlgorithmType_t2393_il2cpp_TypeInfo;
extern TypeInfo HandshakeState_t2394_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithmType_t2395_il2cpp_TypeInfo;
extern TypeInfo HttpsClientStream_t2398_il2cpp_TypeInfo;
extern TypeInfo ReceiveRecordAsyncResult_t2399_il2cpp_TypeInfo;
extern TypeInfo SendRecordAsyncResult_t2400_il2cpp_TypeInfo;
extern TypeInfo RecordProtocol_t2384_il2cpp_TypeInfo;
extern TypeInfo RSASslSignatureDeformatter_t2401_il2cpp_TypeInfo;
extern TypeInfo RSASslSignatureFormatter_t2402_il2cpp_TypeInfo;
extern TypeInfo SecurityCompressionType_t2403_il2cpp_TypeInfo;
extern TypeInfo SecurityParameters_t2392_il2cpp_TypeInfo;
extern TypeInfo SecurityProtocolType_t2404_il2cpp_TypeInfo;
extern TypeInfo ServerContext_t2405_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t2406_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t2381_il2cpp_TypeInfo;
extern TypeInfo SslCipherSuite_t2379_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t2410_il2cpp_TypeInfo;
extern TypeInfo InternalAsyncResult_t2411_il2cpp_TypeInfo;
extern TypeInfo SslStreamBase_t2409_il2cpp_TypeInfo;
extern TypeInfo TlsCipherSuite_t2378_il2cpp_TypeInfo;
extern TypeInfo TlsClientSettings_t2391_il2cpp_TypeInfo;
extern TypeInfo TlsException_t2412_il2cpp_TypeInfo;
extern TypeInfo TlsServerSettings_t2390_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t2386_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t2414_il2cpp_TypeInfo;
extern TypeInfo HandshakeMessage_t2385_il2cpp_TypeInfo;
extern TypeInfo HandshakeType_t2415_il2cpp_TypeInfo;
extern TypeInfo TlsClientCertificate_t2416_il2cpp_TypeInfo;
extern TypeInfo TlsClientCertificateVerify_t2417_il2cpp_TypeInfo;
extern TypeInfo TlsClientFinished_t2418_il2cpp_TypeInfo;
extern TypeInfo TlsClientHello_t2419_il2cpp_TypeInfo;
extern TypeInfo TlsClientKeyExchange_t2420_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificate_t2421_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificateRequest_t2422_il2cpp_TypeInfo;
extern TypeInfo TlsServerFinished_t2423_il2cpp_TypeInfo;
extern TypeInfo TlsServerHello_t2424_il2cpp_TypeInfo;
extern TypeInfo TlsServerHelloDone_t2425_il2cpp_TypeInfo;
extern TypeInfo TlsServerKeyExchange_t2426_il2cpp_TypeInfo;
extern TypeInfo PrimalityTest_t2338_il2cpp_TypeInfo;
extern TypeInfo CertificateValidationCallback_t2407_il2cpp_TypeInfo;
extern TypeInfo CertificateValidationCallback2_t2408_il2cpp_TypeInfo;
extern TypeInfo CertificateSelectionCallback_t2396_il2cpp_TypeInfo;
extern TypeInfo PrivateKeySelectionCallback_t2397_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$3132_t2427_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$256_t2428_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$20_t2429_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$32_t2430_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$48_t2431_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$64_t2432_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$12_t2433_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$16_t2434_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$4_t2435_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t2436_il2cpp_TypeInfo;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_Mono_Security_Assembly_Types[122] = 
{
	&U3CModuleU3E_t2328_il2cpp_TypeInfo,
	&Locale_t2329_il2cpp_TypeInfo,
	&Sign_t2330_il2cpp_TypeInfo,
	&ModulusRing_t2332_il2cpp_TypeInfo,
	&Kernel_t2333_il2cpp_TypeInfo,
	&BigInteger_t2331_il2cpp_TypeInfo,
	&ConfidenceFactor_t2335_il2cpp_TypeInfo,
	&PrimalityTests_t2336_il2cpp_TypeInfo,
	&PrimeGeneratorBase_t2337_il2cpp_TypeInfo,
	&SequentialSearchPrimeGeneratorBase_t2339_il2cpp_TypeInfo,
	&ASN1_t670_il2cpp_TypeInfo,
	&ASN1Convert_t2340_il2cpp_TypeInfo,
	&BitConverterLE_t2341_il2cpp_TypeInfo,
	&ContentInfo_t2342_il2cpp_TypeInfo,
	&EncryptedData_t2343_il2cpp_TypeInfo,
	&PKCS7_t2344_il2cpp_TypeInfo,
	&ARC4Managed_t2345_il2cpp_TypeInfo,
	&CryptoConvert_t2347_il2cpp_TypeInfo,
	&KeyBuilder_t2348_il2cpp_TypeInfo,
	&MD2_t2349_il2cpp_TypeInfo,
	&MD2Managed_t2350_il2cpp_TypeInfo,
	&PKCS1_t2351_il2cpp_TypeInfo,
	&PrivateKeyInfo_t2352_il2cpp_TypeInfo,
	&EncryptedPrivateKeyInfo_t2353_il2cpp_TypeInfo,
	&PKCS8_t2354_il2cpp_TypeInfo,
	&RC4_t2346_il2cpp_TypeInfo,
	&KeyGeneratedEventHandler_t2355_il2cpp_TypeInfo,
	&RSAManaged_t798_il2cpp_TypeInfo,
	&SafeBag_t2356_il2cpp_TypeInfo,
	&DeriveBytes_t2357_il2cpp_TypeInfo,
	&PKCS12_t806_il2cpp_TypeInfo,
	&X501_t803_il2cpp_TypeInfo,
	&X509Certificate_t659_il2cpp_TypeInfo,
	&X509CertificateEnumerator_t812_il2cpp_TypeInfo,
	&X509CertificateCollection_t808_il2cpp_TypeInfo,
	&X509Chain_t2358_il2cpp_TypeInfo,
	&X509ChainStatusFlags_t2359_il2cpp_TypeInfo,
	&X509CrlEntry_t684_il2cpp_TypeInfo,
	&X509Crl_t682_il2cpp_TypeInfo,
	&X509Extension_t683_il2cpp_TypeInfo,
	&X509ExtensionCollection_t811_il2cpp_TypeInfo,
	&X509Store_t696_il2cpp_TypeInfo,
	&X509StoreManager_t2360_il2cpp_TypeInfo,
	&X509Stores_t697_il2cpp_TypeInfo,
	&AuthorityKeyIdentifierExtension_t810_il2cpp_TypeInfo,
	&BasicConstraintsExtension_t2361_il2cpp_TypeInfo,
	&ExtendedKeyUsageExtension_t2362_il2cpp_TypeInfo,
	&GeneralNames_t2363_il2cpp_TypeInfo,
	&KeyUsages_t2364_il2cpp_TypeInfo,
	&KeyUsageExtension_t2365_il2cpp_TypeInfo,
	&CertTypes_t2366_il2cpp_TypeInfo,
	&NetscapeCertTypeExtension_t2367_il2cpp_TypeInfo,
	&SubjectAltNameExtension_t2368_il2cpp_TypeInfo,
	&HMAC_t2369_il2cpp_TypeInfo,
	&MD5SHA1_t2370_il2cpp_TypeInfo,
	&AlertLevel_t2371_il2cpp_TypeInfo,
	&AlertDescription_t2372_il2cpp_TypeInfo,
	&Alert_t2373_il2cpp_TypeInfo,
	&CipherAlgorithmType_t2374_il2cpp_TypeInfo,
	&CipherSuite_t2376_il2cpp_TypeInfo,
	&CipherSuiteCollection_t2377_il2cpp_TypeInfo,
	&CipherSuiteFactory_t2380_il2cpp_TypeInfo,
	&ClientContext_t2382_il2cpp_TypeInfo,
	&ClientRecordProtocol_t2383_il2cpp_TypeInfo,
	&ClientSessionInfo_t2387_il2cpp_TypeInfo,
	&ClientSessionCache_t2388_il2cpp_TypeInfo,
	&ContentType_t2389_il2cpp_TypeInfo,
	&Context_t2375_il2cpp_TypeInfo,
	&ExchangeAlgorithmType_t2393_il2cpp_TypeInfo,
	&HandshakeState_t2394_il2cpp_TypeInfo,
	&HashAlgorithmType_t2395_il2cpp_TypeInfo,
	&HttpsClientStream_t2398_il2cpp_TypeInfo,
	&ReceiveRecordAsyncResult_t2399_il2cpp_TypeInfo,
	&SendRecordAsyncResult_t2400_il2cpp_TypeInfo,
	&RecordProtocol_t2384_il2cpp_TypeInfo,
	&RSASslSignatureDeformatter_t2401_il2cpp_TypeInfo,
	&RSASslSignatureFormatter_t2402_il2cpp_TypeInfo,
	&SecurityCompressionType_t2403_il2cpp_TypeInfo,
	&SecurityParameters_t2392_il2cpp_TypeInfo,
	&SecurityProtocolType_t2404_il2cpp_TypeInfo,
	&ServerContext_t2405_il2cpp_TypeInfo,
	&ValidationResult_t2406_il2cpp_TypeInfo,
	&SslClientStream_t2381_il2cpp_TypeInfo,
	&SslCipherSuite_t2379_il2cpp_TypeInfo,
	&SslHandshakeHash_t2410_il2cpp_TypeInfo,
	&InternalAsyncResult_t2411_il2cpp_TypeInfo,
	&SslStreamBase_t2409_il2cpp_TypeInfo,
	&TlsCipherSuite_t2378_il2cpp_TypeInfo,
	&TlsClientSettings_t2391_il2cpp_TypeInfo,
	&TlsException_t2412_il2cpp_TypeInfo,
	&TlsServerSettings_t2390_il2cpp_TypeInfo,
	&TlsStream_t2386_il2cpp_TypeInfo,
	&ClientCertificateType_t2414_il2cpp_TypeInfo,
	&HandshakeMessage_t2385_il2cpp_TypeInfo,
	&HandshakeType_t2415_il2cpp_TypeInfo,
	&TlsClientCertificate_t2416_il2cpp_TypeInfo,
	&TlsClientCertificateVerify_t2417_il2cpp_TypeInfo,
	&TlsClientFinished_t2418_il2cpp_TypeInfo,
	&TlsClientHello_t2419_il2cpp_TypeInfo,
	&TlsClientKeyExchange_t2420_il2cpp_TypeInfo,
	&TlsServerCertificate_t2421_il2cpp_TypeInfo,
	&TlsServerCertificateRequest_t2422_il2cpp_TypeInfo,
	&TlsServerFinished_t2423_il2cpp_TypeInfo,
	&TlsServerHello_t2424_il2cpp_TypeInfo,
	&TlsServerHelloDone_t2425_il2cpp_TypeInfo,
	&TlsServerKeyExchange_t2426_il2cpp_TypeInfo,
	&PrimalityTest_t2338_il2cpp_TypeInfo,
	&CertificateValidationCallback_t2407_il2cpp_TypeInfo,
	&CertificateValidationCallback2_t2408_il2cpp_TypeInfo,
	&CertificateSelectionCallback_t2396_il2cpp_TypeInfo,
	&PrivateKeySelectionCallback_t2397_il2cpp_TypeInfo,
	&$ArrayType$3132_t2427_il2cpp_TypeInfo,
	&$ArrayType$256_t2428_il2cpp_TypeInfo,
	&$ArrayType$20_t2429_il2cpp_TypeInfo,
	&$ArrayType$32_t2430_il2cpp_TypeInfo,
	&$ArrayType$48_t2431_il2cpp_TypeInfo,
	&$ArrayType$64_t2432_il2cpp_TypeInfo,
	&$ArrayType$12_t2433_il2cpp_TypeInfo,
	&$ArrayType$16_t2434_il2cpp_TypeInfo,
	&$ArrayType$4_t2435_il2cpp_TypeInfo,
	&U3CPrivateImplementationDetailsU3E_t2436_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache;
Il2CppAssembly g_Mono_Security_Assembly = 
{
	{ "Mono.Security", 0, 0, "\x0\x24\x0\x0\x4\x80\x0\x0\x94\x0\x0\x0\x6\x2\x0\x0\x0\x24\x0\x0\x52\x53\x41\x31\x0\x4\x0\x0\x1\x0\x1\x0\x79\x15\x99\x77\xD2\xD0\x3A\x8E\x6B\xEA\x7A\x2E\x74\xE8\xD1\xAF\xCC\x93\xE8\x85\x19\x74\x95\x2B\xB4\x80\xA1\x2C\x91\x34\x47\x4D\x4\x6\x24\x47\xC3\x7E\xE\x68\xC0\x80\x53\x6F\xCF\x3C\x3F\xBE\x2F\xF9\xC9\x79\xCE\x99\x84\x75\xE5\x6\xE8\xCE\x82\xDD\x5B\xF\x35\xD\xC1\xE\x93\xBF\x2E\xEE\xCF\x87\x4B\x24\x77\xC\x50\x81\xDB\xEA\x74\x47\xFD\xDA\xFA\x27\x7B\x22\xDE\x47\xD6\xFF\xEA\x44\x96\x74\xA4\xF9\xFC\xCF\x84\xD1\x50\x69\x8\x93\x80\x28\x4D\xBD\xD3\x5F\x46\xCD\xFF\x12\xA1\xBD\x78\xE4\xEF\x0\x65\xD0\x16\xDF", { 0x07, 0x38, 0xEB, 0x9F, 0x13, 0x2E, 0xD7, 0x56 }, 32772, 0, 1, 2, 0, 5, 0 },
	&g_Mono_Security_dll_Image,
	&g_Mono_Security_Assembly__CustomAttributeCache,
};
Il2CppImage g_Mono_Security_dll_Image = 
{
	 "Mono.Security.dll" ,
	&g_Mono_Security_Assembly,
	g_Mono_Security_Assembly_Types,
	121,
	NULL,
};
static void s_Mono_SecurityRegistration()
{
	RegisterAssembly (&g_Mono_Security_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_Mono_SecurityRegistrationVariable(&s_Mono_SecurityRegistration, NULL);
