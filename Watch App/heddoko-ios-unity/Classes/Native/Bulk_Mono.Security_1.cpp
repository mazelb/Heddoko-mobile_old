#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
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
extern TypeInfo TlsServerCertificate_t2421_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Array
#include "mscorlib_System_Array.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollection.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo HandshakeMessage_t2385_il2cpp_TypeInfo;
extern TypeInfo Void_t42_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t808_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t659_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t2382_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t2365_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t2362_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t610_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t2367_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t2381_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t2406_il2cpp_TypeInfo;
extern TypeInfo Int64_t147_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo TlsException_t2412_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t13_il2cpp_TypeInfo;
extern TypeInfo Byte_t41_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t624_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t2358_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t220_il2cpp_TypeInfo;
extern TypeInfo Exception_t140_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t2368_il2cpp_TypeInfo;
extern TypeInfo Regex_t705_il2cpp_TypeInfo;
extern TypeInfo MatchCollection_t713_il2cpp_TypeInfo;
extern TypeInfo Match_t704_il2cpp_TypeInfo;
extern TypeInfo GroupCollection_t711_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t791_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern Il2CppType Int32_t43_0_0_0;
extern Il2CppType Int32U5BU5D_t220_0_0_0;
extern MethodInfo HandshakeMessage__ctor_m11773_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m11778_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m11774_MethodInfo;
extern MethodInfo Context_get_ServerSettings_m11476_MethodInfo;
extern MethodInfo TlsServerSettings_set_Certificates_m11735_MethodInfo;
extern MethodInfo TlsServerSettings_UpdateCertificateRSA_m11744_MethodInfo;
extern MethodInfo TlsServerCertificate_ProcessAsTls1_m11811_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m11270_MethodInfo;
extern MethodInfo TlsStream_ReadInt24_m11757_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m11758_MethodInfo;
extern MethodInfo X509Certificate__ctor_m3999_MethodInfo;
extern MethodInfo X509CertificateCollection_Add_m11273_MethodInfo;
extern MethodInfo TlsServerCertificate_validateCertificates_m11813_MethodInfo;
extern MethodInfo X509Certificate_get_Version_m3984_MethodInfo;
extern MethodInfo Context_get_Negotiating_m11520_MethodInfo;
extern MethodInfo SecurityParameters_get_Cipher_m11590_MethodInfo;
extern MethodInfo CipherSuite_get_ExchangeAlgorithmType_m11383_MethodInfo;
extern MethodInfo X509Certificate_get_Extensions_m4023_MethodInfo;
extern MethodInfo X509ExtensionCollection_get_Item_m4024_MethodInfo;
extern MethodInfo KeyUsageExtension__ctor_m11338_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension__ctor_m11329_MethodInfo;
extern MethodInfo KeyUsageExtension_Support_m11341_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension_get_KeyPurpose_m11332_MethodInfo;
extern MethodInfo ArrayList_Contains_m7133_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension__ctor_m11343_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension_Support_m11345_MethodInfo;
extern MethodInfo ClientContext_get_SslStream_m11436_MethodInfo;
extern MethodInfo SslClientStream_get_HaveRemoteValidation2Callback_m11627_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation2_m11631_MethodInfo;
extern MethodInfo ValidationResult_get_Trusted_m11597_MethodInfo;
extern MethodInfo ValidationResult_get_ErrorCode_m11598_MethodInfo;
extern MethodInfo String_Format_m160_MethodInfo;
extern MethodInfo String_Concat_m140_MethodInfo;
extern MethodInfo TlsException__ctor_m11729_MethodInfo;
extern MethodInfo X509CertificateCollection_get_Item_m3994_MethodInfo;
extern MethodInfo X509Certificate_get_RawData_m4055_MethodInfo;
extern MethodInfo X509Certificate__ctor_m8683_MethodInfo;
extern MethodInfo ArrayList__ctor_m3875_MethodInfo;
extern MethodInfo TlsServerCertificate_checkCertificateUsage_m11812_MethodInfo;
extern MethodInfo ArrayList_Add_m3885_MethodInfo;
extern MethodInfo TlsServerCertificate_checkServerIdentity_m11814_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m11271_MethodInfo;
extern MethodInfo X509CertificateCollection_Remove_m11278_MethodInfo;
extern MethodInfo X509Chain__ctor_m11281_MethodInfo;
extern MethodInfo X509Chain_Build_m11284_MethodInfo;
extern MethodInfo X509Chain_get_Status_m11282_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo ArrayList_ToArray_m4020_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation_m11630_MethodInfo;
extern MethodInfo Context_get_ClientSettings_m11477_MethodInfo;
extern MethodInfo TlsClientSettings_get_TargetHost_m11717_MethodInfo;
extern MethodInfo SubjectAltNameExtension__ctor_m11347_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_DNSNames_m11349_MethodInfo;
extern MethodInfo TlsServerCertificate_Match_m11816_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_IPAddresses_m11350_MethodInfo;
extern MethodInfo String_op_Equality_m145_MethodInfo;
extern MethodInfo X509Certificate_get_SubjectName_m11259_MethodInfo;
extern MethodInfo TlsServerCertificate_checkDomainName_m11815_MethodInfo;
extern MethodInfo Regex__ctor_m3462_MethodInfo;
extern MethodInfo Regex_Matches_m3478_MethodInfo;
extern MethodInfo MatchCollection_get_Count_m3453_MethodInfo;
extern MethodInfo MatchCollection_get_Item_m3455_MethodInfo;
extern MethodInfo Group_get_Success_m3432_MethodInfo;
extern MethodInfo Match_get_Groups_m3446_MethodInfo;
extern MethodInfo GroupCollection_get_Item_m3436_MethodInfo;
extern MethodInfo Capture_get_Value_m3417_MethodInfo;
extern MethodInfo String_ToString_m5524_MethodInfo;
extern MethodInfo String_IndexOf_m2644_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m3905_MethodInfo;
extern MethodInfo String_Compare_m3931_MethodInfo;
extern MethodInfo String_get_Length_m133_MethodInfo;
extern MethodInfo String_get_Chars_m2591_MethodInfo;
extern MethodInfo String_IndexOf_m4150_MethodInfo;
extern MethodInfo String_Substring_m2616_MethodInfo;
extern MethodInfo String_Compare_m6064_MethodInfo;
extern MethodInfo String_Substring_m150_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificate__ctor_m11808_MethodInfo;
extern "C" void TlsServerCertificate__ctor_m11808 (TlsServerCertificate_t2421 * __this, Context_t2375 * ___context, ByteU5BU5D_t13* ___buffer, MethodInfo* method)
{
	{
		HandshakeMessage__ctor_m11773(__this, ___context, ((int32_t)11), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m11773_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern MethodInfo TlsServerCertificate_Update_m11809_MethodInfo;
extern "C" void TlsServerCertificate_Update_m11809 (TlsServerCertificate_t2421 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m11778(__this, /*hidden argument*/&HandshakeMessage_Update_m11778_MethodInfo);
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t2390 * L_1 = Context_get_ServerSettings_m11476(L_0, /*hidden argument*/&Context_get_ServerSettings_m11476_MethodInfo);
		X509CertificateCollection_t808 * L_2 = (__this->___certificates_9);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m11735(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_Certificates_m11735_MethodInfo);
		Context_t2375 * L_3 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t2390 * L_4 = Context_get_ServerSettings_m11476(L_3, /*hidden argument*/&Context_get_ServerSettings_m11476_MethodInfo);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m11744(L_4, /*hidden argument*/&TlsServerSettings_UpdateCertificateRSA_m11744_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern MethodInfo TlsServerCertificate_ProcessAsSsl3_m11810_MethodInfo;
extern "C" void TlsServerCertificate_ProcessAsSsl3_m11810 (TlsServerCertificate_t2421 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificate_ProcessAsTls1_m11811_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern "C" void TlsServerCertificate_ProcessAsTls1_m11811 (TlsServerCertificate_t2421 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t13* V_3 = {0};
	X509Certificate_t659 * V_4 = {0};
	{
		X509CertificateCollection_t808 * L_0 = (X509CertificateCollection_t808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t808_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m11270(L_0, /*hidden argument*/&X509CertificateCollection__ctor_m11270_MethodInfo);
		__this->___certificates_9 = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m11757(__this, /*hidden argument*/&TlsStream_ReadInt24_m11757_MethodInfo);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m11757(__this, /*hidden argument*/&TlsStream_ReadInt24_m11757_MethodInfo);
		V_2 = L_2;
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)3));
		if ((((int32_t)V_2) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_t13* L_3 = TlsStream_ReadBytes_m11758(__this, V_2, /*hidden argument*/&TlsStream_ReadBytes_m11758_MethodInfo);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&X509Certificate_t659_il2cpp_TypeInfo));
		X509Certificate_t659 * L_4 = (X509Certificate_t659 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t659_il2cpp_TypeInfo));
		X509Certificate__ctor_m3999(L_4, V_3, /*hidden argument*/&X509Certificate__ctor_m3999_MethodInfo);
		V_4 = L_4;
		X509CertificateCollection_t808 * L_5 = (__this->___certificates_9);
		NullCheck(L_5);
		X509CertificateCollection_Add_m11273(L_5, V_4, /*hidden argument*/&X509CertificateCollection_Add_m11273_MethodInfo);
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)V_2));
	}

IL_004d:
	{
		if ((((int32_t)V_0) < ((int32_t)V_1)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t808 * L_6 = (__this->___certificates_9);
		TlsServerCertificate_validateCertificates_m11813(__this, L_6, /*hidden argument*/&TlsServerCertificate_validateCertificates_m11813_MethodInfo);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkCertificateUsage_m11812 (TlsServerCertificate_t2421 * __this, X509Certificate_t659 * ___cert, MethodInfo* method)
{
	ClientContext_t2382 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t2365 * V_2 = {0};
	ExtendedKeyUsageExtension_t2362 * V_3 = {0};
	X509Extension_t683 * V_4 = {0};
	NetscapeCertTypeExtension_t2367 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		V_0 = ((ClientContext_t2382 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t2382_il2cpp_TypeInfo)));
		NullCheck(___cert);
		int32_t L_1 = X509Certificate_get_Version_m3984(___cert, /*hidden argument*/&X509Certificate_get_Version_m3984_MethodInfo);
		if ((((int32_t)L_1) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		NullCheck(V_0);
		SecurityParameters_t2392 * L_2 = Context_get_Negotiating_m11520(V_0, /*hidden argument*/&Context_get_Negotiating_m11520_MethodInfo);
		NullCheck(L_2);
		CipherSuite_t2376 * L_3 = SecurityParameters_get_Cipher_m11590(L_2, /*hidden argument*/&SecurityParameters_get_Cipher_m11590_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = CipherSuite_get_ExchangeAlgorithmType_m11383(L_3, /*hidden argument*/&CipherSuite_get_ExchangeAlgorithmType_m11383_MethodInfo);
		V_6 = L_4;
		if (V_6 == 0)
		{
			goto IL_0061;
		}
		if (V_6 == 1)
		{
			goto IL_0068;
		}
		if (V_6 == 2)
		{
			goto IL_006a;
		}
		if (V_6 == 3)
		{
			goto IL_0059;
		}
		if (V_6 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t2365 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t2362 *)NULL;
		NullCheck(___cert);
		X509ExtensionCollection_t811 * L_5 = X509Certificate_get_Extensions_m4023(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m4023_MethodInfo);
		NullCheck(L_5);
		X509Extension_t683 * L_6 = X509ExtensionCollection_get_Item_m4024(L_5, (String_t*) &_stringLiteral609, /*hidden argument*/&X509ExtensionCollection_get_Item_m4024_MethodInfo);
		V_4 = L_6;
		if (!V_4)
		{
			goto IL_008f;
		}
	}
	{
		KeyUsageExtension_t2365 * L_7 = (KeyUsageExtension_t2365 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyUsageExtension_t2365_il2cpp_TypeInfo));
		KeyUsageExtension__ctor_m11338(L_7, V_4, /*hidden argument*/&KeyUsageExtension__ctor_m11338_MethodInfo);
		V_2 = L_7;
	}

IL_008f:
	{
		NullCheck(___cert);
		X509ExtensionCollection_t811 * L_8 = X509Certificate_get_Extensions_m4023(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m4023_MethodInfo);
		NullCheck(L_8);
		X509Extension_t683 * L_9 = X509ExtensionCollection_get_Item_m4024(L_8, (String_t*) &_stringLiteral616, /*hidden argument*/&X509ExtensionCollection_get_Item_m4024_MethodInfo);
		V_4 = L_9;
		if (!V_4)
		{
			goto IL_00b0;
		}
	}
	{
		ExtendedKeyUsageExtension_t2362 * L_10 = (ExtendedKeyUsageExtension_t2362 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtendedKeyUsageExtension_t2362_il2cpp_TypeInfo));
		ExtendedKeyUsageExtension__ctor_m11329(L_10, V_4, /*hidden argument*/&ExtendedKeyUsageExtension__ctor_m11329_MethodInfo);
		V_3 = L_10;
	}

IL_00b0:
	{
		if (!V_2)
		{
			goto IL_00f3;
		}
	}
	{
		if (!V_3)
		{
			goto IL_00f3;
		}
	}
	{
		NullCheck(V_2);
		bool L_11 = KeyUsageExtension_Support_m11341(V_2, V_1, /*hidden argument*/&KeyUsageExtension_Support_m11341_MethodInfo);
		if (L_11)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		NullCheck(V_3);
		ArrayList_t610 * L_12 = ExtendedKeyUsageExtension_get_KeyPurpose_m11332(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m11332_MethodInfo);
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m7133_MethodInfo, L_12, (String_t*) &_stringLiteral620);
		if (L_13)
		{
			goto IL_00f1;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t610 * L_14 = ExtendedKeyUsageExtension_get_KeyPurpose_m11332(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m11332_MethodInfo);
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m7133_MethodInfo, L_14, (String_t*) &_stringLiteral2631);
		G_B19_0 = ((int32_t)(L_15));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		if (!V_2)
		{
			goto IL_0101;
		}
	}
	{
		NullCheck(V_2);
		bool L_16 = KeyUsageExtension_Support_m11341(V_2, V_1, /*hidden argument*/&KeyUsageExtension_Support_m11341_MethodInfo);
		return L_16;
	}

IL_0101:
	{
		if (!V_3)
		{
			goto IL_0130;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t610 * L_17 = ExtendedKeyUsageExtension_get_KeyPurpose_m11332(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m11332_MethodInfo);
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m7133_MethodInfo, L_17, (String_t*) &_stringLiteral620);
		if (L_18)
		{
			goto IL_012e;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t610 * L_19 = ExtendedKeyUsageExtension_get_KeyPurpose_m11332(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m11332_MethodInfo);
		NullCheck(L_19);
		bool L_20 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m7133_MethodInfo, L_19, (String_t*) &_stringLiteral2631);
		G_B26_0 = ((int32_t)(L_20));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		NullCheck(___cert);
		X509ExtensionCollection_t811 * L_21 = X509Certificate_get_Extensions_m4023(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m4023_MethodInfo);
		NullCheck(L_21);
		X509Extension_t683 * L_22 = X509ExtensionCollection_get_Item_m4024(L_21, (String_t*) &_stringLiteral647, /*hidden argument*/&X509ExtensionCollection_get_Item_m4024_MethodInfo);
		V_4 = L_22;
		if (!V_4)
		{
			goto IL_015c;
		}
	}
	{
		NetscapeCertTypeExtension_t2367 * L_23 = (NetscapeCertTypeExtension_t2367 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetscapeCertTypeExtension_t2367_il2cpp_TypeInfo));
		NetscapeCertTypeExtension__ctor_m11343(L_23, V_4, /*hidden argument*/&NetscapeCertTypeExtension__ctor_m11343_MethodInfo);
		V_5 = L_23;
		NullCheck(V_5);
		bool L_24 = NetscapeCertTypeExtension_Support_m11345(V_5, ((int32_t)64), /*hidden argument*/&NetscapeCertTypeExtension_Support_m11345_MethodInfo);
		return L_24;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern TypeInfo* Int32U5BU5D_t220_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificate_validateCertificates_m11813 (TlsServerCertificate_t2421 * __this, X509CertificateCollection_t808 * ___certificates, MethodInfo* method)
{
	static bool TlsServerCertificate_validateCertificates_m11813_init;
	if (!TlsServerCertificate_validateCertificates_m11813_init)
	{
		Int32U5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t220_0_0_0);
		TlsServerCertificate_validateCertificates_m11813_init = true;
	}
	ClientContext_t2382 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t2406 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t659 * V_5 = {0};
	X509Certificate_t624 * V_6 = {0};
	ArrayList_t610 * V_7 = {0};
	X509CertificateCollection_t808 * V_8 = {0};
	X509Chain_t2358 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t220* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		V_0 = ((ClientContext_t2382 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t2382_il2cpp_TypeInfo)));
		V_1 = ((int32_t)42);
		NullCheck(V_0);
		SslClientStream_t2381 * L_1 = ClientContext_get_SslStream_m11436(V_0, /*hidden argument*/&ClientContext_get_SslStream_m11436_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&SslClientStream_get_HaveRemoteValidation2Callback_m11627_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_00b4;
		}
	}
	{
		NullCheck(V_0);
		SslClientStream_t2381 * L_3 = ClientContext_get_SslStream_m11436(V_0, /*hidden argument*/&ClientContext_get_SslStream_m11436_MethodInfo);
		NullCheck(L_3);
		ValidationResult_t2406 * L_4 = (ValidationResult_t2406 *)VirtFuncInvoker1< ValidationResult_t2406 *, X509CertificateCollection_t808 * >::Invoke(&SslClientStream_RaiseServerCertificateValidation2_m11631_MethodInfo, L_3, ___certificates);
		V_2 = L_4;
		NullCheck(V_2);
		bool L_5 = ValidationResult_get_Trusted_m11597(V_2, /*hidden argument*/&ValidationResult_get_Trusted_m11597_MethodInfo);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		NullCheck(V_2);
		int32_t L_6 = ValidationResult_get_ErrorCode_m11598(V_2, /*hidden argument*/&ValidationResult_get_ErrorCode_m11598_MethodInfo);
		V_3 = (((int64_t)L_6));
		V_12 = V_3;
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762487))))))))
		{
			goto IL_007f;
		}
	}
	{
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762486))))))))
		{
			goto IL_0077;
		}
	}
	{
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762495))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_7 = V_3;
		Object_t * L_8 = Box(InitializedTypeInfo(&Int64_t147_il2cpp_TypeInfo), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral2632, L_8, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_4 = L_9;
		String_t* L_10 = String_Concat_m140(NULL /*static, unused*/, (String_t*) &_stringLiteral2633, V_4, /*hidden argument*/&String_Concat_m140_MethodInfo);
		TlsException_t2412 * L_11 = (TlsException_t2412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t2412_il2cpp_TypeInfo));
		TlsException__ctor_m11729(L_11, V_1, L_10, /*hidden argument*/&TlsException__ctor_m11729_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_00b4:
	{
		NullCheck(___certificates);
		X509Certificate_t659 * L_12 = X509CertificateCollection_get_Item_m3994(___certificates, 0, /*hidden argument*/&X509CertificateCollection_get_Item_m3994_MethodInfo);
		V_5 = L_12;
		NullCheck(V_5);
		ByteU5BU5D_t13* L_13 = (ByteU5BU5D_t13*)VirtFuncInvoker0< ByteU5BU5D_t13* >::Invoke(&X509Certificate_get_RawData_m4055_MethodInfo, V_5);
		X509Certificate_t624 * L_14 = (X509Certificate_t624 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t624_il2cpp_TypeInfo));
		X509Certificate__ctor_m8683(L_14, L_13, /*hidden argument*/&X509Certificate__ctor_m8683_MethodInfo);
		V_6 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList_t610 * L_15 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m3875(L_15, /*hidden argument*/&ArrayList__ctor_m3875_MethodInfo);
		V_7 = L_15;
		bool L_16 = TlsServerCertificate_checkCertificateUsage_m11812(__this, V_5, /*hidden argument*/&TlsServerCertificate_checkCertificateUsage_m11812_MethodInfo);
		if (L_16)
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_17 = ((int32_t)-2146762490);
		Object_t * L_18 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_17);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_7, L_18);
	}

IL_00f1:
	{
		bool L_19 = TlsServerCertificate_checkServerIdentity_m11814(__this, V_5, /*hidden argument*/&TlsServerCertificate_checkServerIdentity_m11814_MethodInfo);
		if (L_19)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_20 = ((int32_t)-2146762481);
		Object_t * L_21 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_20);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_7, L_21);
	}

IL_0110:
	{
		X509CertificateCollection_t808 * L_22 = (X509CertificateCollection_t808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t808_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m11271(L_22, ___certificates, /*hidden argument*/&X509CertificateCollection__ctor_m11271_MethodInfo);
		V_8 = L_22;
		NullCheck(V_8);
		X509CertificateCollection_Remove_m11278(V_8, V_5, /*hidden argument*/&X509CertificateCollection_Remove_m11278_MethodInfo);
		X509Chain_t2358 * L_23 = (X509Chain_t2358 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Chain_t2358_il2cpp_TypeInfo));
		X509Chain__ctor_m11281(L_23, V_8, /*hidden argument*/&X509Chain__ctor_m11281_MethodInfo);
		V_9 = L_23;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		NullCheck(V_9);
		bool L_24 = X509Chain_Build_m11284(V_9, V_5, /*hidden argument*/&X509Chain_Build_m11284_MethodInfo);
		V_10 = L_24;
		// IL_0138: leave IL_0146
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_013d;
		throw e;
	}

IL_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		// IL_0141: leave IL_0146
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		if (V_10)
		{
			goto IL_0243;
		}
	}
	{
		NullCheck(V_9);
		int32_t L_25 = X509Chain_get_Status_m11282(V_9, /*hidden argument*/&X509Chain_get_Status_m11282_MethodInfo);
		V_13 = L_25;
		if ((((int32_t)V_13) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		int32_t L_26 = ((int32_t)-2146869223);
		Object_t * L_27 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_26);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_7, L_27);
		goto IL_0243;
	}

IL_01ab:
	{
		int32_t L_28 = ((int32_t)-2146869232);
		Object_t * L_29 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_28);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_7, L_29);
		goto IL_0243;
	}

IL_01c2:
	{
		int32_t L_30 = ((int32_t)-2146762494);
		Object_t * L_31 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_30);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_7, L_31);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		int32_t L_32 = ((int32_t)-2146762495);
		Object_t * L_33 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_32);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_7, L_33);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		int32_t L_34 = ((int32_t)-2146762486);
		Object_t * L_35 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_34);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_7, L_35);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		int32_t L_36 = ((int32_t)-2146762487);
		Object_t * L_37 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_36);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_7, L_37);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		NullCheck(V_9);
		int32_t L_38 = X509Chain_get_Status_m11282(V_9, /*hidden argument*/&X509Chain_get_Status_m11282_MethodInfo);
		int32_t L_39 = L_38;
		Object_t * L_40 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_39);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_7, L_40);
		goto IL_0243;
	}

IL_0243:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_41 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Int32_t43_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(V_7);
		Array_t * L_42 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m4020_MethodInfo, V_7, L_41);
		V_11 = ((Int32U5BU5D_t220*)Castclass(L_42, Int32U5BU5D_t220_il2cpp_TypeInfo_var));
		NullCheck(V_0);
		SslClientStream_t2381 * L_43 = ClientContext_get_SslStream_m11436(V_0, /*hidden argument*/&ClientContext_get_SslStream_m11436_MethodInfo);
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker2< bool, X509Certificate_t624 *, Int32U5BU5D_t220* >::Invoke(&SslClientStream_RaiseServerCertificateValidation_m11630_MethodInfo, L_43, V_6, V_11);
		if (L_44)
		{
			goto IL_027b;
		}
	}
	{
		TlsException_t2412 * L_45 = (TlsException_t2412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t2412_il2cpp_TypeInfo));
		TlsException__ctor_m11729(L_45, V_1, (String_t*) &_stringLiteral2634, /*hidden argument*/&TlsException__ctor_m11729_MethodInfo);
		il2cpp_codegen_raise_exception(L_45);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkServerIdentity_m11814 (TlsServerCertificate_t2421 * __this, X509Certificate_t659 * ___cert, MethodInfo* method)
{
	ClientContext_t2382 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t683 * V_2 = {0};
	SubjectAltNameExtension_t2368 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t17* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t17* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		V_0 = ((ClientContext_t2382 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t2382_il2cpp_TypeInfo)));
		NullCheck(V_0);
		TlsClientSettings_t2391 * L_1 = Context_get_ClientSettings_m11477(V_0, /*hidden argument*/&Context_get_ClientSettings_m11477_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = TlsClientSettings_get_TargetHost_m11717(L_1, /*hidden argument*/&TlsClientSettings_get_TargetHost_m11717_MethodInfo);
		V_1 = L_2;
		NullCheck(___cert);
		X509ExtensionCollection_t811 * L_3 = X509Certificate_get_Extensions_m4023(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m4023_MethodInfo);
		NullCheck(L_3);
		X509Extension_t683 * L_4 = X509ExtensionCollection_get_Item_m4024(L_3, (String_t*) &_stringLiteral646, /*hidden argument*/&X509ExtensionCollection_get_Item_m4024_MethodInfo);
		V_2 = L_4;
		if (!V_2)
		{
			goto IL_00a4;
		}
	}
	{
		SubjectAltNameExtension_t2368 * L_5 = (SubjectAltNameExtension_t2368 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SubjectAltNameExtension_t2368_il2cpp_TypeInfo));
		SubjectAltNameExtension__ctor_m11347(L_5, V_2, /*hidden argument*/&SubjectAltNameExtension__ctor_m11347_MethodInfo);
		V_3 = L_5;
		NullCheck(V_3);
		StringU5BU5D_t17* L_6 = SubjectAltNameExtension_get_DNSNames_m11349(V_3, /*hidden argument*/&SubjectAltNameExtension_get_DNSNames_m11349_MethodInfo);
		V_5 = L_6;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		int32_t L_7 = V_6;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(V_5, L_7));
		bool L_8 = TlsServerCertificate_Match_m11816(NULL /*static, unused*/, V_1, V_4, /*hidden argument*/&TlsServerCertificate_Match_m11816_MethodInfo);
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_0062:
	{
		NullCheck(V_5);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((Array_t *)V_5)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		NullCheck(V_3);
		StringU5BU5D_t17* L_9 = SubjectAltNameExtension_get_IPAddresses_m11350(V_3, /*hidden argument*/&SubjectAltNameExtension_get_IPAddresses_m11350_MethodInfo);
		V_8 = L_9;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		NullCheck(V_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_8, V_9);
		int32_t L_10 = V_9;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(V_8, L_10));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_11 = String_op_Equality_m145(NULL /*static, unused*/, V_7, V_1, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		V_9 = ((int32_t)((int32_t)V_9+(int32_t)1));
	}

IL_0099:
	{
		NullCheck(V_8);
		if ((((int32_t)V_9) < ((int32_t)(((int32_t)(((Array_t *)V_8)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		NullCheck(___cert);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&X509Certificate_get_SubjectName_m11259_MethodInfo, ___cert);
		bool L_13 = TlsServerCertificate_checkDomainName_m11815(__this, L_12, /*hidden argument*/&TlsServerCertificate_checkDomainName_m11815_MethodInfo);
		return L_13;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern "C" bool TlsServerCertificate_checkDomainName_m11815 (TlsServerCertificate_t2421 * __this, String_t* ___subjectName, MethodInfo* method)
{
	ClientContext_t2382 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t705 * V_2 = {0};
	MatchCollection_t713 * V_3 = {0};
	{
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		V_0 = ((ClientContext_t2382 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t2382_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_1 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t705_il2cpp_TypeInfo));
		Regex_t705 * L_1 = (Regex_t705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t705_il2cpp_TypeInfo));
		Regex__ctor_m3462(L_1, (String_t*) &_stringLiteral2635, /*hidden argument*/&Regex__ctor_m3462_MethodInfo);
		V_2 = L_1;
		NullCheck(V_2);
		MatchCollection_t713 * L_2 = Regex_Matches_m3478(V_2, ___subjectName, /*hidden argument*/&Regex_Matches_m3478_MethodInfo);
		V_3 = L_2;
		NullCheck(V_3);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MatchCollection_get_Count_m3453_MethodInfo, V_3);
		if ((((uint32_t)L_3) != ((uint32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(V_3);
		Match_t704 * L_4 = (Match_t704 *)VirtFuncInvoker1< Match_t704 *, int32_t >::Invoke(&MatchCollection_get_Item_m3455_MethodInfo, V_3, 0);
		NullCheck(L_4);
		bool L_5 = Group_get_Success_m3432(L_4, /*hidden argument*/&Group_get_Success_m3432_MethodInfo);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(V_3);
		Match_t704 * L_6 = (Match_t704 *)VirtFuncInvoker1< Match_t704 *, int32_t >::Invoke(&MatchCollection_get_Item_m3455_MethodInfo, V_3, 0);
		NullCheck(L_6);
		GroupCollection_t711 * L_7 = (GroupCollection_t711 *)VirtFuncInvoker0< GroupCollection_t711 * >::Invoke(&Match_get_Groups_m3446_MethodInfo, L_6);
		NullCheck(L_7);
		Group_t709 * L_8 = GroupCollection_get_Item_m3436(L_7, 1, /*hidden argument*/&GroupCollection_get_Item_m3436_MethodInfo);
		NullCheck(L_8);
		String_t* L_9 = Capture_get_Value_m3417(L_8, /*hidden argument*/&Capture_get_Value_m3417_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m5524_MethodInfo, L_9);
		V_1 = L_10;
	}

IL_005f:
	{
		NullCheck(V_0);
		TlsClientSettings_t2391 * L_11 = Context_get_ClientSettings_m11477(V_0, /*hidden argument*/&Context_get_ClientSettings_m11477_MethodInfo);
		NullCheck(L_11);
		String_t* L_12 = TlsClientSettings_get_TargetHost_m11717(L_11, /*hidden argument*/&TlsClientSettings_get_TargetHost_m11717_MethodInfo);
		bool L_13 = TlsServerCertificate_Match_m11816(NULL /*static, unused*/, L_12, V_1, /*hidden argument*/&TlsServerCertificate_Match_m11816_MethodInfo);
		return L_13;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern "C" bool TlsServerCertificate_Match_m11816 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		NullCheck(___pattern);
		int32_t L_0 = String_IndexOf_m2644(___pattern, ((int32_t)42), /*hidden argument*/&String_IndexOf_m2644_MethodInfo);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t791_il2cpp_TypeInfo));
		CultureInfo_t791 * L_1 = CultureInfo_get_InvariantCulture_m3905(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3905_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_2 = String_Compare_m3931(NULL /*static, unused*/, ___hostname, ___pattern, 1, L_1, /*hidden argument*/&String_Compare_m3931_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		NullCheck(___pattern);
		int32_t L_3 = String_get_Length_m133(___pattern, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)V_0) == ((int32_t)((int32_t)((int32_t)L_3-(int32_t)1)))))
		{
			goto IL_0041;
		}
	}
	{
		NullCheck(___pattern);
		uint16_t L_4 = String_get_Chars_m2591(___pattern, ((int32_t)((int32_t)V_0+(int32_t)1)), /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		NullCheck(___pattern);
		int32_t L_5 = String_IndexOf_m4150(___pattern, ((int32_t)42), ((int32_t)((int32_t)V_0+(int32_t)1)), /*hidden argument*/&String_IndexOf_m4150_MethodInfo);
		V_1 = L_5;
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		NullCheck(___pattern);
		String_t* L_6 = String_Substring_m2616(___pattern, ((int32_t)((int32_t)V_0+(int32_t)1)), /*hidden argument*/&String_Substring_m2616_MethodInfo);
		V_2 = L_6;
		NullCheck(___hostname);
		int32_t L_7 = String_get_Length_m133(___hostname, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(V_2);
		int32_t L_8 = String_get_Length_m133(V_2, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		V_3 = ((int32_t)((int32_t)L_7-(int32_t)L_8));
		if ((((int32_t)V_3) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		NullCheck(V_2);
		int32_t L_9 = String_get_Length_m133(V_2, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t791_il2cpp_TypeInfo));
		CultureInfo_t791 * L_10 = CultureInfo_get_InvariantCulture_m3905(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3905_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_11 = String_Compare_m6064(NULL /*static, unused*/, ___hostname, V_3, V_2, 0, L_9, 1, L_10, /*hidden argument*/&String_Compare_m6064_MethodInfo);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		if (V_0)
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck(___hostname);
		int32_t L_12 = String_IndexOf_m2644(___hostname, ((int32_t)46), /*hidden argument*/&String_IndexOf_m2644_MethodInfo);
		V_4 = L_12;
		if ((((int32_t)V_4) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		NullCheck(___hostname);
		int32_t L_13 = String_get_Length_m133(___hostname, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(V_2);
		int32_t L_14 = String_get_Length_m133(V_2, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		G_B15_0 = ((((int32_t)((((int32_t)V_4) < ((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		NullCheck(___pattern);
		String_t* L_15 = String_Substring_m150(___pattern, 0, V_0, /*hidden argument*/&String_Substring_m150_MethodInfo);
		V_5 = L_15;
		NullCheck(V_5);
		int32_t L_16 = String_get_Length_m133(V_5, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t791_il2cpp_TypeInfo));
		CultureInfo_t791 * L_17 = CultureInfo_get_InvariantCulture_m3905(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3905_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_18 = String_Compare_m6064(NULL /*static, unused*/, ___hostname, 0, V_5, 0, L_16, 1, L_17, /*hidden argument*/&String_Compare_m6064_MethodInfo);
		return ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerCertificateRequest_t2422_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"

#include "Mono.Security_ArrayTypes.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo ClientCertificateTypeU5BU5D_t2413_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t2414_il2cpp_TypeInfo;
extern TypeInfo ASN1_t670_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t17_il2cpp_TypeInfo;
extern TypeInfo Encoding_t805_il2cpp_TypeInfo;
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern Il2CppType ClientCertificateTypeU5BU5D_t2413_0_0_0;
extern Il2CppType StringU5BU5D_t17_0_0_0;
extern MethodInfo TlsServerSettings_set_CertificateTypes_m11742_MethodInfo;
extern MethodInfo TlsServerSettings_set_DistinguisedNames_m11743_MethodInfo;
extern MethodInfo TlsServerSettings_set_CertificateRequest_m11741_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m11820_MethodInfo;
extern MethodInfo TlsStream_ReadByte_m11755_MethodInfo;
extern MethodInfo TlsStream_ReadInt16_m11756_MethodInfo;
extern MethodInfo ASN1__ctor_m3953_MethodInfo;
extern MethodInfo ASN1_get_Count_m3957_MethodInfo;
extern MethodInfo ASN1_get_Item_m3958_MethodInfo;
extern MethodInfo ASN1_get_Value_m3956_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m3988_MethodInfo;
extern MethodInfo Encoding_GetString_m3989_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificateRequest__ctor_m11817_MethodInfo;
extern "C" void TlsServerCertificateRequest__ctor_m11817 (TlsServerCertificateRequest_t2422 * __this, Context_t2375 * ___context, ByteU5BU5D_t13* ___buffer, MethodInfo* method)
{
	{
		HandshakeMessage__ctor_m11773(__this, ___context, ((int32_t)13), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m11773_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern MethodInfo TlsServerCertificateRequest_Update_m11818_MethodInfo;
extern "C" void TlsServerCertificateRequest_Update_m11818 (TlsServerCertificateRequest_t2422 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m11778(__this, /*hidden argument*/&HandshakeMessage_Update_m11778_MethodInfo);
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t2390 * L_1 = Context_get_ServerSettings_m11476(L_0, /*hidden argument*/&Context_get_ServerSettings_m11476_MethodInfo);
		ClientCertificateTypeU5BU5D_t2413* L_2 = (__this->___certificateTypes_9);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m11742(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_CertificateTypes_m11742_MethodInfo);
		Context_t2375 * L_3 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t2390 * L_4 = Context_get_ServerSettings_m11476(L_3, /*hidden argument*/&Context_get_ServerSettings_m11476_MethodInfo);
		StringU5BU5D_t17* L_5 = (__this->___distinguisedNames_10);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m11743(L_4, L_5, /*hidden argument*/&TlsServerSettings_set_DistinguisedNames_m11743_MethodInfo);
		Context_t2375 * L_6 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_6);
		TlsServerSettings_t2390 * L_7 = Context_get_ServerSettings_m11476(L_6, /*hidden argument*/&Context_get_ServerSettings_m11476_MethodInfo);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m11741(L_7, 1, /*hidden argument*/&TlsServerSettings_set_CertificateRequest_m11741_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m11819_MethodInfo;
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m11819 (TlsServerCertificateRequest_t2422 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificateRequest_ProcessAsTls1_m11820_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern TypeInfo* ClientCertificateTypeU5BU5D_t2413_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t17_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m11820 (TlsServerCertificateRequest_t2422 * __this, MethodInfo* method)
{
	static bool TlsServerCertificateRequest_ProcessAsTls1_m11820_init;
	if (!TlsServerCertificateRequest_ProcessAsTls1_m11820_init)
	{
		ClientCertificateTypeU5BU5D_t2413_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ClientCertificateTypeU5BU5D_t2413_0_0_0);
		StringU5BU5D_t17_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t17_0_0_0);
		TlsServerCertificateRequest_ProcessAsTls1_m11820_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t670 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t670 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m11755(__this, /*hidden argument*/&TlsStream_ReadByte_m11755_MethodInfo);
		V_0 = L_0;
		__this->___certificateTypes_9 = ((ClientCertificateTypeU5BU5D_t2413*)SZArrayNew(ClientCertificateTypeU5BU5D_t2413_il2cpp_TypeInfo_var, V_0));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t2413* L_1 = (__this->___certificateTypes_9);
		uint8_t L_2 = TlsStream_ReadByte_m11755(__this, /*hidden argument*/&TlsStream_ReadByte_m11755_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1)) = (int32_t)L_2;
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_002c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_3 = TlsStream_ReadInt16_m11756(__this, /*hidden argument*/&TlsStream_ReadInt16_m11756_MethodInfo);
		if (!L_3)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_4 = TlsStream_ReadInt16_m11756(__this, /*hidden argument*/&TlsStream_ReadInt16_m11756_MethodInfo);
		ByteU5BU5D_t13* L_5 = TlsStream_ReadBytes_m11758(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m11758_MethodInfo);
		ASN1_t670 * L_6 = (ASN1_t670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t670_il2cpp_TypeInfo));
		ASN1__ctor_m3953(L_6, L_5, /*hidden argument*/&ASN1__ctor_m3953_MethodInfo);
		V_2 = L_6;
		NullCheck(V_2);
		int32_t L_7 = ASN1_get_Count_m3957(V_2, /*hidden argument*/&ASN1_get_Count_m3957_MethodInfo);
		__this->___distinguisedNames_10 = ((StringU5BU5D_t17*)SZArrayNew(StringU5BU5D_t17_il2cpp_TypeInfo_var, L_7));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		NullCheck(V_2);
		ASN1_t670 * L_8 = ASN1_get_Item_m3958(V_2, V_3, /*hidden argument*/&ASN1_get_Item_m3958_MethodInfo);
		NullCheck(L_8);
		ByteU5BU5D_t13* L_9 = ASN1_get_Value_m3956(L_8, /*hidden argument*/&ASN1_get_Value_m3956_MethodInfo);
		ASN1_t670 * L_10 = (ASN1_t670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t670_il2cpp_TypeInfo));
		ASN1__ctor_m3953(L_10, L_9, /*hidden argument*/&ASN1__ctor_m3953_MethodInfo);
		V_4 = L_10;
		StringU5BU5D_t17* L_11 = (__this->___distinguisedNames_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_12 = Encoding_get_UTF8_m3988(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3988_MethodInfo);
		NullCheck(V_4);
		ASN1_t670 * L_13 = ASN1_get_Item_m3958(V_4, 1, /*hidden argument*/&ASN1_get_Item_m3958_MethodInfo);
		NullCheck(L_13);
		ByteU5BU5D_t13* L_14 = ASN1_get_Value_m3956(L_13, /*hidden argument*/&ASN1_get_Value_m3956_MethodInfo);
		NullCheck(L_12);
		String_t* L_15 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t13* >::Invoke(&Encoding_GetString_m3989_MethodInfo, L_12, L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_3);
		ArrayElementTypeCheck (L_11, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, V_3)) = (String_t*)L_15;
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_009e:
	{
		NullCheck(V_2);
		int32_t L_16 = ASN1_get_Count_m3957(V_2, /*hidden argument*/&ASN1_get_Count_m3957_MethodInfo);
		if ((((int32_t)V_3) < ((int32_t)L_16)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerFinished_t2423_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
extern TypeInfo U3CPrivateImplementationDetailsU3E_t2436_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t2410_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithm_t1330_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t2376_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t2386_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t2370_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t13_0_0_0;
extern MethodInfo RuntimeHelpers_InitializeArray_m3923_MethodInfo;
extern MethodInfo Context_set_HandshakeState_m11481_MethodInfo;
extern MethodInfo Context_get_MasterSecret_m11501_MethodInfo;
extern MethodInfo SslHandshakeHash__ctor_m11641_MethodInfo;
extern MethodInfo Context_get_HandshakeMessages_m11488_MethodInfo;
extern MethodInfo TlsStream_ToArray_m11765_MethodInfo;
extern MethodInfo HashAlgorithm_TransformBlock_m8797_MethodInfo;
extern MethodInfo HashAlgorithm_TransformFinalBlock_m8798_MethodInfo;
extern MethodInfo TlsStream_get_Length_m11753_MethodInfo;
extern MethodInfo HashAlgorithm_get_Hash_m8794_MethodInfo;
extern MethodInfo HandshakeMessage_Compare_m11780_MethodInfo;
extern MethodInfo MD5SHA1__ctor_m11359_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m8792_MethodInfo;
extern MethodInfo Context_get_Current_m11519_MethodInfo;
extern MethodInfo CipherSuite_PRF_m11401_MethodInfo;
extern MethodInfo TlsException__ctor_m11724_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t2436____$$fieldU2D22_14_FieldInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerFinished__ctor_m11821_MethodInfo;
extern "C" void TlsServerFinished__ctor_m11821 (TlsServerFinished_t2423 * __this, Context_t2375 * ___context, ByteU5BU5D_t13* ___buffer, MethodInfo* method)
{
	{
		HandshakeMessage__ctor_m11773(__this, ___context, ((int32_t)20), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m11773_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern MethodInfo TlsServerFinished__cctor_m11822_MethodInfo;
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void TlsServerFinished__cctor_m11822 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool TlsServerFinished__cctor_m11822_init;
	if (!TlsServerFinished__cctor_m11822_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		TlsServerFinished__cctor_m11822_init = true;
	}
	{
		ByteU5BU5D_t13* L_0 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m3923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t2436____$$fieldU2D22_14_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m3923_MethodInfo);
		((TlsServerFinished_t2423_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t2423_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern MethodInfo TlsServerFinished_Update_m11823_MethodInfo;
extern "C" void TlsServerFinished_Update_m11823 (TlsServerFinished_t2423 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m11778(__this, /*hidden argument*/&HandshakeMessage_Update_m11778_MethodInfo);
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_0);
		Context_set_HandshakeState_m11481(L_0, 2, /*hidden argument*/&Context_set_HandshakeState_m11481_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern MethodInfo TlsServerFinished_ProcessAsSsl3_m11824_MethodInfo;
extern "C" void TlsServerFinished_ProcessAsSsl3_m11824 (TlsServerFinished_t2423 * __this, MethodInfo* method)
{
	HashAlgorithm_t1330 * V_0 = {0};
	ByteU5BU5D_t13* V_1 = {0};
	ByteU5BU5D_t13* V_2 = {0};
	ByteU5BU5D_t13* V_3 = {0};
	{
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_0);
		ByteU5BU5D_t13* L_1 = Context_get_MasterSecret_m11501(L_0, /*hidden argument*/&Context_get_MasterSecret_m11501_MethodInfo);
		SslHandshakeHash_t2410 * L_2 = (SslHandshakeHash_t2410 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SslHandshakeHash_t2410_il2cpp_TypeInfo));
		SslHandshakeHash__ctor_m11641(L_2, L_1, /*hidden argument*/&SslHandshakeHash__ctor_m11641_MethodInfo);
		V_0 = L_2;
		Context_t2375 * L_3 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_3);
		TlsStream_t2386 * L_4 = Context_get_HandshakeMessages_m11488(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m11488_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t13* L_5 = TlsStream_ToArray_m11765(L_4, /*hidden argument*/&TlsStream_ToArray_m11765_MethodInfo);
		V_1 = L_5;
		NullCheck(V_1);
		NullCheck(V_0);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t13*, int32_t, int32_t, ByteU5BU5D_t13*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m8797_MethodInfo, V_0, V_1, 0, (((int32_t)(((Array_t *)V_1)->max_length))), V_1, 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TlsServerFinished_t2423_il2cpp_TypeInfo));
		NullCheck((((TlsServerFinished_t2423_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t2423_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9));
		NullCheck(V_0);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t13*, int32_t, int32_t, ByteU5BU5D_t13*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m8797_MethodInfo, V_0, (((TlsServerFinished_t2423_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t2423_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9), 0, (((int32_t)(((Array_t *)(((TlsServerFinished_t2423_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t2423_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9))->max_length))), (((TlsServerFinished_t2423_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t2423_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9), 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CipherSuite_t2376_il2cpp_TypeInfo));
		NullCheck(V_0);
		VirtFuncInvoker3< ByteU5BU5D_t13*, ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&HashAlgorithm_TransformFinalBlock_m8798_MethodInfo, V_0, (((CipherSuite_t2376_StaticFields*)InitializedTypeInfo(&CipherSuite_t2376_il2cpp_TypeInfo)->static_fields)->___EmptyArray_0), 0, 0);
		int64_t L_6 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m11753_MethodInfo, __this);
		ByteU5BU5D_t13* L_7 = TlsStream_ReadBytes_m11758(__this, (((int32_t)L_6)), /*hidden argument*/&TlsStream_ReadBytes_m11758_MethodInfo);
		V_2 = L_7;
		NullCheck(V_0);
		ByteU5BU5D_t13* L_8 = (ByteU5BU5D_t13*)VirtFuncInvoker0< ByteU5BU5D_t13* >::Invoke(&HashAlgorithm_get_Hash_m8794_MethodInfo, V_0);
		V_3 = L_8;
		bool L_9 = HandshakeMessage_Compare_m11780(NULL /*static, unused*/, V_3, V_2, /*hidden argument*/&HandshakeMessage_Compare_m11780_MethodInfo);
		if (L_9)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t2412 * L_10 = (TlsException_t2412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t2412_il2cpp_TypeInfo));
		TlsException__ctor_m11729(L_10, ((int32_t)71), (String_t*) &_stringLiteral2636, /*hidden argument*/&TlsException__ctor_m11729_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern MethodInfo TlsServerFinished_ProcessAsTls1_m11825_MethodInfo;
extern "C" void TlsServerFinished_ProcessAsTls1_m11825 (TlsServerFinished_t2423 * __this, MethodInfo* method)
{
	ByteU5BU5D_t13* V_0 = {0};
	HashAlgorithm_t1330 * V_1 = {0};
	ByteU5BU5D_t13* V_2 = {0};
	ByteU5BU5D_t13* V_3 = {0};
	ByteU5BU5D_t13* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m11753_MethodInfo, __this);
		ByteU5BU5D_t13* L_1 = TlsStream_ReadBytes_m11758(__this, (((int32_t)L_0)), /*hidden argument*/&TlsStream_ReadBytes_m11758_MethodInfo);
		V_0 = L_1;
		MD5SHA1_t2370 * L_2 = (MD5SHA1_t2370 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t2370_il2cpp_TypeInfo));
		MD5SHA1__ctor_m11359(L_2, /*hidden argument*/&MD5SHA1__ctor_m11359_MethodInfo);
		V_1 = L_2;
		Context_t2375 * L_3 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_3);
		TlsStream_t2386 * L_4 = Context_get_HandshakeMessages_m11488(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m11488_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t13* L_5 = TlsStream_ToArray_m11765(L_4, /*hidden argument*/&TlsStream_ToArray_m11765_MethodInfo);
		V_2 = L_5;
		NullCheck(V_2);
		NullCheck(V_1);
		ByteU5BU5D_t13* L_6 = HashAlgorithm_ComputeHash_m8792(V_1, V_2, 0, (((int32_t)(((Array_t *)V_2)->max_length))), /*hidden argument*/&HashAlgorithm_ComputeHash_m8792_MethodInfo);
		V_3 = L_6;
		Context_t2375 * L_7 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_7);
		SecurityParameters_t2392 * L_8 = Context_get_Current_m11519(L_7, /*hidden argument*/&Context_get_Current_m11519_MethodInfo);
		NullCheck(L_8);
		CipherSuite_t2376 * L_9 = SecurityParameters_get_Cipher_m11590(L_8, /*hidden argument*/&SecurityParameters_get_Cipher_m11590_MethodInfo);
		Context_t2375 * L_10 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t13* L_11 = Context_get_MasterSecret_m11501(L_10, /*hidden argument*/&Context_get_MasterSecret_m11501_MethodInfo);
		NullCheck(L_9);
		ByteU5BU5D_t13* L_12 = CipherSuite_PRF_m11401(L_9, L_11, (String_t*) &_stringLiteral2637, V_3, ((int32_t)12), /*hidden argument*/&CipherSuite_PRF_m11401_MethodInfo);
		V_4 = L_12;
		bool L_13 = HandshakeMessage_Compare_m11780(NULL /*static, unused*/, V_4, V_0, /*hidden argument*/&HandshakeMessage_Compare_m11780_MethodInfo);
		if (L_13)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t2412 * L_14 = (TlsException_t2412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t2412_il2cpp_TypeInfo));
		TlsException__ctor_m11724(L_14, (String_t*) &_stringLiteral2636, /*hidden argument*/&TlsException__ctor_m11724_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0073:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHello_t2424_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"

// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
extern TypeInfo ClientSessionCache_t2388_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t2377_il2cpp_TypeInfo;
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientSessionCache
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteFactory
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"
extern MethodInfo Context_set_SessionId_m11473_MethodInfo;
extern MethodInfo Context_set_ServerRandom_m11496_MethodInfo;
extern MethodInfo SecurityParameters_set_Cipher_m11591_MethodInfo;
extern MethodInfo Context_set_CompressionMethod_m11475_MethodInfo;
extern MethodInfo Context_set_ProtocolNegotiated_m11467_MethodInfo;
extern MethodInfo Context_get_ClientRandom_m11493_MethodInfo;
extern MethodInfo Context_get_ServerRandom_m11495_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m135_MethodInfo;
extern MethodInfo Context_set_RandomCS_m11498_MethodInfo;
extern MethodInfo Context_set_RandomSC_m11500_MethodInfo;
extern MethodInfo TlsServerHello_ProcessAsTls1_m11829_MethodInfo;
extern MethodInfo TlsServerHello_processProtocol_m11830_MethodInfo;
extern MethodInfo ClientSessionCache_Add_m11458_MethodInfo;
extern MethodInfo Context_get_SessionId_m11472_MethodInfo;
extern MethodInfo Context_set_AbbreviatedHandshake_m11465_MethodInfo;
extern MethodInfo Context_get_SupportedCiphers_m11486_MethodInfo;
extern MethodInfo CipherSuiteCollection_IndexOf_m11427_MethodInfo;
extern MethodInfo CipherSuiteCollection_get_Item_m11420_MethodInfo;
extern MethodInfo Context_DecodeProtocolCode_m11517_MethodInfo;
extern MethodInfo Context_get_SecurityProtocolFlags_m11470_MethodInfo;
extern MethodInfo Context_set_SecurityProtocol_m11469_MethodInfo;
extern MethodInfo CipherSuiteCollection_Clear_m11425_MethodInfo;
extern MethodInfo Context_set_SupportedCiphers_m11487_MethodInfo;
extern MethodInfo CipherSuiteFactory_GetSupportedCiphers_m11432_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHello__ctor_m11826_MethodInfo;
extern "C" void TlsServerHello__ctor_m11826 (TlsServerHello_t2424 * __this, Context_t2375 * ___context, ByteU5BU5D_t13* ___buffer, MethodInfo* method)
{
	{
		HandshakeMessage__ctor_m11773(__this, ___context, 2, ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m11773_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern MethodInfo TlsServerHello_Update_m11827_MethodInfo;
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void TlsServerHello_Update_m11827 (TlsServerHello_t2424 * __this, MethodInfo* method)
{
	static bool TlsServerHello_Update_m11827_init;
	if (!TlsServerHello_Update_m11827_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		TlsServerHello_Update_m11827_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t13* V_3 = {0};
	ByteU5BU5D_t13* V_4 = {0};
	{
		HandshakeMessage_Update_m11778(__this, /*hidden argument*/&HandshakeMessage_Update_m11778_MethodInfo);
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		ByteU5BU5D_t13* L_1 = (__this->___sessionId_11);
		NullCheck(L_0);
		Context_set_SessionId_m11473(L_0, L_1, /*hidden argument*/&Context_set_SessionId_m11473_MethodInfo);
		Context_t2375 * L_2 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		ByteU5BU5D_t13* L_3 = (__this->___random_10);
		NullCheck(L_2);
		Context_set_ServerRandom_m11496(L_2, L_3, /*hidden argument*/&Context_set_ServerRandom_m11496_MethodInfo);
		Context_t2375 * L_4 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_4);
		SecurityParameters_t2392 * L_5 = Context_get_Negotiating_m11520(L_4, /*hidden argument*/&Context_get_Negotiating_m11520_MethodInfo);
		CipherSuite_t2376 * L_6 = (__this->___cipherSuite_12);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m11591(L_5, L_6, /*hidden argument*/&SecurityParameters_set_Cipher_m11591_MethodInfo);
		Context_t2375 * L_7 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		int32_t L_8 = (__this->___compressionMethod_9);
		NullCheck(L_7);
		Context_set_CompressionMethod_m11475(L_7, L_8, /*hidden argument*/&Context_set_CompressionMethod_m11475_MethodInfo);
		Context_t2375 * L_9 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m11467(L_9, 1, /*hidden argument*/&Context_set_ProtocolNegotiated_m11467_MethodInfo);
		Context_t2375 * L_10 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t13* L_11 = Context_get_ClientRandom_m11493(L_10, /*hidden argument*/&Context_get_ClientRandom_m11493_MethodInfo);
		NullCheck(L_11);
		V_0 = (((int32_t)(((Array_t *)L_11)->max_length)));
		Context_t2375 * L_12 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t13* L_13 = Context_get_ServerRandom_m11495(L_12, /*hidden argument*/&Context_get_ServerRandom_m11495_MethodInfo);
		NullCheck(L_13);
		V_1 = (((int32_t)(((Array_t *)L_13)->max_length)));
		V_2 = ((int32_t)((int32_t)V_0+(int32_t)V_1));
		V_3 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, V_2));
		Context_t2375 * L_14 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_14);
		ByteU5BU5D_t13* L_15 = Context_get_ClientRandom_m11493(L_14, /*hidden argument*/&Context_get_ClientRandom_m11493_MethodInfo);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, 0, (Array_t *)(Array_t *)V_3, 0, V_0, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
		Context_t2375 * L_16 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_16);
		ByteU5BU5D_t13* L_17 = Context_get_ServerRandom_m11495(L_16, /*hidden argument*/&Context_get_ServerRandom_m11495_MethodInfo);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_17, 0, (Array_t *)(Array_t *)V_3, V_0, V_1, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
		Context_t2375 * L_18 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_18);
		Context_set_RandomCS_m11498(L_18, V_3, /*hidden argument*/&Context_set_RandomCS_m11498_MethodInfo);
		V_4 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, V_2));
		Context_t2375 * L_19 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_19);
		ByteU5BU5D_t13* L_20 = Context_get_ServerRandom_m11495(L_19, /*hidden argument*/&Context_get_ServerRandom_m11495_MethodInfo);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_20, 0, (Array_t *)(Array_t *)V_4, 0, V_1, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
		Context_t2375 * L_21 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_21);
		ByteU5BU5D_t13* L_22 = Context_get_ClientRandom_m11493(L_21, /*hidden argument*/&Context_get_ClientRandom_m11493_MethodInfo);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)V_4, V_1, V_0, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
		Context_t2375 * L_23 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_23);
		Context_set_RandomSC_m11500(L_23, V_4, /*hidden argument*/&Context_set_RandomSC_m11500_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern MethodInfo TlsServerHello_ProcessAsSsl3_m11828_MethodInfo;
extern "C" void TlsServerHello_ProcessAsSsl3_m11828 (TlsServerHello_t2424 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerHello_ProcessAsTls1_m11829_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern "C" void TlsServerHello_ProcessAsTls1_m11829 (TlsServerHello_t2424 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m11756(__this, /*hidden argument*/&TlsStream_ReadInt16_m11756_MethodInfo);
		TlsServerHello_processProtocol_m11830(__this, L_0, /*hidden argument*/&TlsServerHello_processProtocol_m11830_MethodInfo);
		ByteU5BU5D_t13* L_1 = TlsStream_ReadBytes_m11758(__this, ((int32_t)32), /*hidden argument*/&TlsStream_ReadBytes_m11758_MethodInfo);
		__this->___random_10 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m11755(__this, /*hidden argument*/&TlsStream_ReadByte_m11755_MethodInfo);
		V_0 = L_2;
		if ((((int32_t)V_0) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_t13* L_3 = TlsStream_ReadBytes_m11758(__this, V_0, /*hidden argument*/&TlsStream_ReadBytes_m11758_MethodInfo);
		__this->___sessionId_11 = L_3;
		Context_t2375 * L_4 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_4);
		TlsClientSettings_t2391 * L_5 = Context_get_ClientSettings_m11477(L_4, /*hidden argument*/&Context_get_ClientSettings_m11477_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = TlsClientSettings_get_TargetHost_m11717(L_5, /*hidden argument*/&TlsClientSettings_get_TargetHost_m11717_MethodInfo);
		ByteU5BU5D_t13* L_7 = (__this->___sessionId_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ClientSessionCache_t2388_il2cpp_TypeInfo));
		ClientSessionCache_Add_m11458(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&ClientSessionCache_Add_m11458_MethodInfo);
		Context_t2375 * L_8 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		ByteU5BU5D_t13* L_9 = (__this->___sessionId_11);
		Context_t2375 * L_10 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t13* L_11 = Context_get_SessionId_m11472(L_10, /*hidden argument*/&Context_get_SessionId_m11472_MethodInfo);
		bool L_12 = HandshakeMessage_Compare_m11780(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&HandshakeMessage_Compare_m11780_MethodInfo);
		NullCheck(L_8);
		Context_set_AbbreviatedHandshake_m11465(L_8, L_12, /*hidden argument*/&Context_set_AbbreviatedHandshake_m11465_MethodInfo);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t2375 * L_13 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_13);
		Context_set_AbbreviatedHandshake_m11465(L_13, 0, /*hidden argument*/&Context_set_AbbreviatedHandshake_m11465_MethodInfo);
	}

IL_0082:
	{
		int16_t L_14 = TlsStream_ReadInt16_m11756(__this, /*hidden argument*/&TlsStream_ReadInt16_m11756_MethodInfo);
		V_1 = L_14;
		Context_t2375 * L_15 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_15);
		CipherSuiteCollection_t2377 * L_16 = Context_get_SupportedCiphers_m11486(L_15, /*hidden argument*/&Context_get_SupportedCiphers_m11486_MethodInfo);
		NullCheck(L_16);
		int32_t L_17 = CipherSuiteCollection_IndexOf_m11427(L_16, V_1, /*hidden argument*/&CipherSuiteCollection_IndexOf_m11427_MethodInfo);
		if ((((uint32_t)L_17) != ((uint32_t)(-1))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t2412 * L_18 = (TlsException_t2412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t2412_il2cpp_TypeInfo));
		TlsException__ctor_m11729(L_18, ((int32_t)71), (String_t*) &_stringLiteral2638, /*hidden argument*/&TlsException__ctor_m11729_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_00ad:
	{
		Context_t2375 * L_19 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_19);
		CipherSuiteCollection_t2377 * L_20 = Context_get_SupportedCiphers_m11486(L_19, /*hidden argument*/&Context_get_SupportedCiphers_m11486_MethodInfo);
		NullCheck(L_20);
		CipherSuite_t2376 * L_21 = CipherSuiteCollection_get_Item_m11420(L_20, V_1, /*hidden argument*/&CipherSuiteCollection_get_Item_m11420_MethodInfo);
		__this->___cipherSuite_12 = L_21;
		uint8_t L_22 = TlsStream_ReadByte_m11755(__this, /*hidden argument*/&TlsStream_ReadByte_m11755_MethodInfo);
		__this->___compressionMethod_9 = L_22;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern "C" void TlsServerHello_processProtocol_m11830 (TlsServerHello_t2424 * __this, int16_t ___protocol, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = Context_DecodeProtocolCode_m11517(L_0, ___protocol, /*hidden argument*/&Context_DecodeProtocolCode_m11517_MethodInfo);
		V_0 = L_1;
		Context_t2375 * L_2 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Context_get_SecurityProtocolFlags_m11470(L_2, /*hidden argument*/&Context_get_SecurityProtocolFlags_m11470_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)V_0&(int32_t)L_3))) == ((int32_t)V_0)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t2375 * L_4 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m11470(L_4, /*hidden argument*/&Context_get_SecurityProtocolFlags_m11470_MethodInfo);
		if ((((uint32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)-1073741824)))) != ((uint32_t)((int32_t)-1073741824))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t2375 * L_6 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_6);
		Context_set_SecurityProtocol_m11469(L_6, V_0, /*hidden argument*/&Context_set_SecurityProtocol_m11469_MethodInfo);
		Context_t2375 * L_7 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_7);
		CipherSuiteCollection_t2377 * L_8 = Context_get_SupportedCiphers_m11486(L_7, /*hidden argument*/&Context_get_SupportedCiphers_m11486_MethodInfo);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(&CipherSuiteCollection_Clear_m11425_MethodInfo, L_8);
		Context_t2375 * L_9 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_9);
		Context_set_SupportedCiphers_m11487(L_9, (CipherSuiteCollection_t2377 *)NULL, /*hidden argument*/&Context_set_SupportedCiphers_m11487_MethodInfo);
		Context_t2375 * L_10 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		CipherSuiteCollection_t2377 * L_11 = CipherSuiteFactory_GetSupportedCiphers_m11432(NULL /*static, unused*/, V_0, /*hidden argument*/&CipherSuiteFactory_GetSupportedCiphers_m11432_MethodInfo);
		NullCheck(L_10);
		Context_set_SupportedCiphers_m11487(L_10, L_11, /*hidden argument*/&Context_set_SupportedCiphers_m11487_MethodInfo);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t2412 * L_12 = (TlsException_t2412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t2412_il2cpp_TypeInfo));
		TlsException__ctor_m11729(L_12, ((int32_t)70), (String_t*) &_stringLiteral2584, /*hidden argument*/&TlsException__ctor_m11729_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0086:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHelloDone_t2425_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHelloDone__ctor_m11831_MethodInfo;
extern "C" void TlsServerHelloDone__ctor_m11831 (TlsServerHelloDone_t2425 * __this, Context_t2375 * ___context, ByteU5BU5D_t13* ___buffer, MethodInfo* method)
{
	{
		HandshakeMessage__ctor_m11773(__this, ___context, ((int32_t)14), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m11773_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern MethodInfo TlsServerHelloDone_ProcessAsSsl3_m11832_MethodInfo;
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m11832 (TlsServerHelloDone_t2425 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern MethodInfo TlsServerHelloDone_ProcessAsTls1_m11833_MethodInfo;
extern "C" void TlsServerHelloDone_ProcessAsTls1_m11833 (TlsServerHelloDone_t2425 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerKeyExchange_t2426_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"

// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
extern TypeInfo RSAParameters_t799_il2cpp_TypeInfo;
extern MethodInfo TlsServerKeyExchange_verifySignature_m11838_MethodInfo;
extern MethodInfo TlsServerSettings_set_ServerKeyExchange_m11733_MethodInfo;
extern MethodInfo TlsServerSettings_set_RsaParameters_m11738_MethodInfo;
extern MethodInfo TlsServerSettings_set_SignedParams_m11739_MethodInfo;
extern MethodInfo TlsServerKeyExchange_ProcessAsTls1_m11837_MethodInfo;
extern MethodInfo TlsStream__ctor_m11745_MethodInfo;
extern MethodInfo Context_get_RandomCS_m11497_MethodInfo;
extern MethodInfo TlsStream_Write_m11763_MethodInfo;
extern MethodInfo TlsStream_Write_m11770_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m4059_MethodInfo;
extern MethodInfo TlsStream_Reset_m11764_MethodInfo;
extern MethodInfo TlsServerSettings_get_CertificateRSA_m11736_MethodInfo;
extern MethodInfo MD5SHA1_VerifySignature_m11364_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerKeyExchange__ctor_m11834_MethodInfo;
extern "C" void TlsServerKeyExchange__ctor_m11834 (TlsServerKeyExchange_t2426 * __this, Context_t2375 * ___context, ByteU5BU5D_t13* ___buffer, MethodInfo* method)
{
	{
		HandshakeMessage__ctor_m11773(__this, ___context, ((int32_t)12), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m11773_MethodInfo);
		TlsServerKeyExchange_verifySignature_m11838(__this, /*hidden argument*/&TlsServerKeyExchange_verifySignature_m11838_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern MethodInfo TlsServerKeyExchange_Update_m11835_MethodInfo;
extern "C" void TlsServerKeyExchange_Update_m11835 (TlsServerKeyExchange_t2426 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m11778(__this, /*hidden argument*/&HandshakeMessage_Update_m11778_MethodInfo);
		Context_t2375 * L_0 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t2390 * L_1 = Context_get_ServerSettings_m11476(L_0, /*hidden argument*/&Context_get_ServerSettings_m11476_MethodInfo);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m11733(L_1, 1, /*hidden argument*/&TlsServerSettings_set_ServerKeyExchange_m11733_MethodInfo);
		Context_t2375 * L_2 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_2);
		TlsServerSettings_t2390 * L_3 = Context_get_ServerSettings_m11476(L_2, /*hidden argument*/&Context_get_ServerSettings_m11476_MethodInfo);
		RSAParameters_t799  L_4 = (__this->___rsaParams_9);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m11738(L_3, L_4, /*hidden argument*/&TlsServerSettings_set_RsaParameters_m11738_MethodInfo);
		Context_t2375 * L_5 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_5);
		TlsServerSettings_t2390 * L_6 = Context_get_ServerSettings_m11476(L_5, /*hidden argument*/&Context_get_ServerSettings_m11476_MethodInfo);
		ByteU5BU5D_t13* L_7 = (__this->___signedParams_10);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m11739(L_6, L_7, /*hidden argument*/&TlsServerSettings_set_SignedParams_m11739_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m11836_MethodInfo;
extern "C" void TlsServerKeyExchange_ProcessAsSsl3_m11836 (TlsServerKeyExchange_t2426 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerKeyExchange_ProcessAsTls1_m11837_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
extern "C" void TlsServerKeyExchange_ProcessAsTls1_m11837 (TlsServerKeyExchange_t2426 * __this, MethodInfo* method)
{
	RSAParameters_t799  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&RSAParameters_t799_il2cpp_TypeInfo), (&V_0));
		__this->___rsaParams_9 = V_0;
		RSAParameters_t799 * L_0 = &(__this->___rsaParams_9);
		int16_t L_1 = TlsStream_ReadInt16_m11756(__this, /*hidden argument*/&TlsStream_ReadInt16_m11756_MethodInfo);
		ByteU5BU5D_t13* L_2 = TlsStream_ReadBytes_m11758(__this, L_1, /*hidden argument*/&TlsStream_ReadBytes_m11758_MethodInfo);
		NullCheck(L_0);
		L_0->___Modulus_6 = L_2;
		RSAParameters_t799 * L_3 = &(__this->___rsaParams_9);
		int16_t L_4 = TlsStream_ReadInt16_m11756(__this, /*hidden argument*/&TlsStream_ReadInt16_m11756_MethodInfo);
		ByteU5BU5D_t13* L_5 = TlsStream_ReadBytes_m11758(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m11758_MethodInfo);
		NullCheck(L_3);
		L_3->___Exponent_7 = L_5;
		int16_t L_6 = TlsStream_ReadInt16_m11756(__this, /*hidden argument*/&TlsStream_ReadInt16_m11756_MethodInfo);
		ByteU5BU5D_t13* L_7 = TlsStream_ReadBytes_m11758(__this, L_6, /*hidden argument*/&TlsStream_ReadBytes_m11758_MethodInfo);
		__this->___signedParams_10 = L_7;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
extern "C" void TlsServerKeyExchange_verifySignature_m11838 (TlsServerKeyExchange_t2426 * __this, MethodInfo* method)
{
	MD5SHA1_t2370 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t2386 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t2370 * L_0 = (MD5SHA1_t2370 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t2370_il2cpp_TypeInfo));
		MD5SHA1__ctor_m11359(L_0, /*hidden argument*/&MD5SHA1__ctor_m11359_MethodInfo);
		V_0 = L_0;
		RSAParameters_t799 * L_1 = &(__this->___rsaParams_9);
		NullCheck(L_1);
		ByteU5BU5D_t13* L_2 = (L_1->___Modulus_6);
		NullCheck(L_2);
		RSAParameters_t799 * L_3 = &(__this->___rsaParams_9);
		NullCheck(L_3);
		ByteU5BU5D_t13* L_4 = (L_3->___Exponent_7);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))+(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))))+(int32_t)4));
		TlsStream_t2386 * L_5 = (TlsStream_t2386 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsStream_t2386_il2cpp_TypeInfo));
		TlsStream__ctor_m11745(L_5, /*hidden argument*/&TlsStream__ctor_m11745_MethodInfo);
		V_2 = L_5;
		Context_t2375 * L_6 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_6);
		ByteU5BU5D_t13* L_7 = Context_get_RandomCS_m11497(L_6, /*hidden argument*/&Context_get_RandomCS_m11497_MethodInfo);
		NullCheck(V_2);
		TlsStream_Write_m11763(V_2, L_7, /*hidden argument*/&TlsStream_Write_m11763_MethodInfo);
		ByteU5BU5D_t13* L_8 = TlsStream_ToArray_m11765(__this, /*hidden argument*/&TlsStream_ToArray_m11765_MethodInfo);
		NullCheck(V_2);
		VirtActionInvoker3< ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&TlsStream_Write_m11770_MethodInfo, V_2, L_8, 0, V_1);
		NullCheck(V_2);
		ByteU5BU5D_t13* L_9 = TlsStream_ToArray_m11765(V_2, /*hidden argument*/&TlsStream_ToArray_m11765_MethodInfo);
		NullCheck(V_0);
		HashAlgorithm_ComputeHash_m4059(V_0, L_9, /*hidden argument*/&HashAlgorithm_ComputeHash_m4059_MethodInfo);
		NullCheck(V_2);
		TlsStream_Reset_m11764(V_2, /*hidden argument*/&TlsStream_Reset_m11764_MethodInfo);
		Context_t2375 * L_10 = HandshakeMessage_get_Context_m11774(__this, /*hidden argument*/&HandshakeMessage_get_Context_m11774_MethodInfo);
		NullCheck(L_10);
		TlsServerSettings_t2390 * L_11 = Context_get_ServerSettings_m11476(L_10, /*hidden argument*/&Context_get_ServerSettings_m11476_MethodInfo);
		NullCheck(L_11);
		RSA_t661 * L_12 = TlsServerSettings_get_CertificateRSA_m11736(L_11, /*hidden argument*/&TlsServerSettings_get_CertificateRSA_m11736_MethodInfo);
		ByteU5BU5D_t13* L_13 = (__this->___signedParams_10);
		NullCheck(V_0);
		bool L_14 = MD5SHA1_VerifySignature_m11364(V_0, L_12, L_13, /*hidden argument*/&MD5SHA1_VerifySignature_m11364_MethodInfo);
		V_3 = L_14;
		if (V_3)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t2412 * L_15 = (TlsException_t2412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t2412_il2cpp_TypeInfo));
		TlsException__ctor_m11729(L_15, ((int32_t)50), (String_t*) &_stringLiteral2639, /*hidden argument*/&TlsException__ctor_m11729_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_008c:
	{
		return;
	}
}
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrimalityTest_t2338_il2cpp_TypeInfo;
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrimalityTest__ctor_m11839_MethodInfo;
extern "C" void PrimalityTest__ctor_m11839 (PrimalityTest_t2338 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern MethodInfo PrimalityTest_Invoke_m11840_MethodInfo;
extern "C" bool PrimalityTest_Invoke_m11840 (PrimalityTest_t2338 * __this, BigInteger_t2331 * ___bi, int32_t ___confidence, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m11840((PrimalityTest_t2338 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t2331 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t2331 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t2338(Il2CppObject* delegate, BigInteger_t2331 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t2331 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern MethodInfo PrimalityTest_BeginInvoke_m11841_MethodInfo;
extern "C" Object_t * PrimalityTest_BeginInvoke_m11841 (PrimalityTest_t2338 * __this, BigInteger_t2331 * ___bi, int32_t ___confidence, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(InitializedTypeInfo(&ConfidenceFactor_t2335_il2cpp_TypeInfo), &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern MethodInfo PrimalityTest_EndInvoke_m11842_MethodInfo;
extern "C" bool PrimalityTest_EndInvoke_m11842 (PrimalityTest_t2338 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback_t2407_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback__ctor_m11843_MethodInfo;
extern "C" void CertificateValidationCallback__ctor_m11843 (CertificateValidationCallback_t2407 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern MethodInfo CertificateValidationCallback_Invoke_m11844_MethodInfo;
extern "C" bool CertificateValidationCallback_Invoke_m11844 (CertificateValidationCallback_t2407 * __this, X509Certificate_t624 * ___certificate, Int32U5BU5D_t220* ___certificateErrors, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback_Invoke_m11844((CertificateValidationCallback_t2407 *)__this->___prev_9,___certificate, ___certificateErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t624 * ___certificate, Int32U5BU5D_t220* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t624 * ___certificate, Int32U5BU5D_t220* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Int32U5BU5D_t220* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t2407(Il2CppObject* delegate, X509Certificate_t624 * ___certificate, Int32U5BU5D_t220* ___certificateErrors)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t624 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback_BeginInvoke_m11845_MethodInfo;
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m11845 (CertificateValidationCallback_t2407 * __this, X509Certificate_t624 * ___certificate, Int32U5BU5D_t220* ___certificateErrors, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback_EndInvoke_m11846_MethodInfo;
extern "C" bool CertificateValidationCallback_EndInvoke_m11846 (CertificateValidationCallback_t2407 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback2_t2408_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback2__ctor_m11847_MethodInfo;
extern "C" void CertificateValidationCallback2__ctor_m11847 (CertificateValidationCallback2_t2408 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern MethodInfo CertificateValidationCallback2_Invoke_m11848_MethodInfo;
extern "C" ValidationResult_t2406 * CertificateValidationCallback2_Invoke_m11848 (CertificateValidationCallback2_t2408 * __this, X509CertificateCollection_t808 * ___collection, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback2_Invoke_m11848((CertificateValidationCallback2_t2408 *)__this->___prev_9,___collection, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ValidationResult_t2406 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t808 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ValidationResult_t2406 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t808 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ValidationResult_t2406 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" ValidationResult_t2406 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t2408(Il2CppObject* delegate, X509CertificateCollection_t808 * ___collection)
{
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t808 * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback2_BeginInvoke_m11849_MethodInfo;
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m11849 (CertificateValidationCallback2_t2408 * __this, X509CertificateCollection_t808 * ___collection, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback2_EndInvoke_m11850_MethodInfo;
extern "C" ValidationResult_t2406 * CertificateValidationCallback2_EndInvoke_m11850 (CertificateValidationCallback2_t2408 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t2406 *)__result;
}
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateSelectionCallback_t2396_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_1.h"


// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateSelectionCallback__ctor_m11851_MethodInfo;
extern "C" void CertificateSelectionCallback__ctor_m11851 (CertificateSelectionCallback_t2396 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern MethodInfo CertificateSelectionCallback_Invoke_m11852_MethodInfo;
extern "C" X509Certificate_t624 * CertificateSelectionCallback_Invoke_m11852 (CertificateSelectionCallback_t2396 * __this, X509CertificateCollection_t639 * ___clientCertificates, X509Certificate_t624 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t639 * ___serverRequestedCertificates, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateSelectionCallback_Invoke_m11852((CertificateSelectionCallback_t2396 *)__this->___prev_9,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t624 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t639 * ___clientCertificates, X509Certificate_t624 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t639 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t624 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t639 * ___clientCertificates, X509Certificate_t624 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t639 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t624 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t624 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t639 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" X509Certificate_t624 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t2396(Il2CppObject* delegate, X509CertificateCollection_t639 * ___clientCertificates, X509Certificate_t624 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t639 * ___serverRequestedCertificates)
{
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t639 * ____clientCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateSelectionCallback_BeginInvoke_m11853_MethodInfo;
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m11853 (CertificateSelectionCallback_t2396 * __this, X509CertificateCollection_t639 * ___clientCertificates, X509Certificate_t624 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t639 * ___serverRequestedCertificates, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateSelectionCallback_EndInvoke_m11854_MethodInfo;
extern "C" X509Certificate_t624 * CertificateSelectionCallback_EndInvoke_m11854 (CertificateSelectionCallback_t2396 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t624 *)__result;
}
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrivateKeySelectionCallback_t2397_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"

// System.Security.Cryptography.AsymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"


// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrivateKeySelectionCallback__ctor_m11855_MethodInfo;
extern "C" void PrivateKeySelectionCallback__ctor_m11855 (PrivateKeySelectionCallback_t2397 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern MethodInfo PrivateKeySelectionCallback_Invoke_m11856_MethodInfo;
extern "C" AsymmetricAlgorithm_t655 * PrivateKeySelectionCallback_Invoke_m11856 (PrivateKeySelectionCallback_t2397 * __this, X509Certificate_t624 * ___certificate, String_t* ___targetHost, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrivateKeySelectionCallback_Invoke_m11856((PrivateKeySelectionCallback_t2397 *)__this->___prev_9,___certificate, ___targetHost, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t655 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t624 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t655 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t624 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef AsymmetricAlgorithm_t655 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" AsymmetricAlgorithm_t655 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t2397(Il2CppObject* delegate, X509Certificate_t624 * ___certificate, String_t* ___targetHost)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t624 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern MethodInfo PrivateKeySelectionCallback_BeginInvoke_m11857_MethodInfo;
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m11857 (PrivateKeySelectionCallback_t2397 * __this, X509Certificate_t624 * ___certificate, String_t* ___targetHost, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PrivateKeySelectionCallback_EndInvoke_m11858_MethodInfo;
extern "C" AsymmetricAlgorithm_t655 * PrivateKeySelectionCallback_EndInvoke_m11858 (PrivateKeySelectionCallback_t2397 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t655 *)__result;
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$3132_t2427_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t2427_marshal(const $ArrayType$3132_t2427& unmarshaled, $ArrayType$3132_t2427_marshaled& marshaled)
{
}
void $ArrayType$3132_t2427_marshal_back(const $ArrayType$3132_t2427_marshaled& marshaled, $ArrayType$3132_t2427& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t2427_marshal_cleanup($ArrayType$3132_t2427_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$256_t2428_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t2428_marshal(const $ArrayType$256_t2428& unmarshaled, $ArrayType$256_t2428_marshaled& marshaled)
{
}
void $ArrayType$256_t2428_marshal_back(const $ArrayType$256_t2428_marshaled& marshaled, $ArrayType$256_t2428& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t2428_marshal_cleanup($ArrayType$256_t2428_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t2429_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t2429_marshal(const $ArrayType$20_t2429& unmarshaled, $ArrayType$20_t2429_marshaled& marshaled)
{
}
void $ArrayType$20_t2429_marshal_back(const $ArrayType$20_t2429_marshaled& marshaled, $ArrayType$20_t2429& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t2429_marshal_cleanup($ArrayType$20_t2429_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$32_t2430_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t2430_marshal(const $ArrayType$32_t2430& unmarshaled, $ArrayType$32_t2430_marshaled& marshaled)
{
}
void $ArrayType$32_t2430_marshal_back(const $ArrayType$32_t2430_marshaled& marshaled, $ArrayType$32_t2430& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t2430_marshal_cleanup($ArrayType$32_t2430_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$48_t2431_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t2431_marshal(const $ArrayType$48_t2431& unmarshaled, $ArrayType$48_t2431_marshaled& marshaled)
{
}
void $ArrayType$48_t2431_marshal_back(const $ArrayType$48_t2431_marshaled& marshaled, $ArrayType$48_t2431& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t2431_marshal_cleanup($ArrayType$48_t2431_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$64_t2432_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t2432_marshal(const $ArrayType$64_t2432& unmarshaled, $ArrayType$64_t2432_marshaled& marshaled)
{
}
void $ArrayType$64_t2432_marshal_back(const $ArrayType$64_t2432_marshaled& marshaled, $ArrayType$64_t2432& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t2432_marshal_cleanup($ArrayType$64_t2432_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$12_t2433_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t2433_marshal(const $ArrayType$12_t2433& unmarshaled, $ArrayType$12_t2433_marshaled& marshaled)
{
}
void $ArrayType$12_t2433_marshal_back(const $ArrayType$12_t2433_marshaled& marshaled, $ArrayType$12_t2433& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t2433_marshal_cleanup($ArrayType$12_t2433_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$16_t2434_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t2434_marshal(const $ArrayType$16_t2434& unmarshaled, $ArrayType$16_t2434_marshaled& marshaled)
{
}
void $ArrayType$16_t2434_marshal_back(const $ArrayType$16_t2434_marshaled& marshaled, $ArrayType$16_t2434& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t2434_marshal_cleanup($ArrayType$16_t2434_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$4_t2435_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t2435_marshal(const $ArrayType$4_t2435& unmarshaled, $ArrayType$4_t2435_marshaled& marshaled)
{
}
void $ArrayType$4_t2435_marshal_back(const $ArrayType$4_t2435_marshaled& marshaled, $ArrayType$4_t2435& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t2435_marshal_cleanup($ArrayType$4_t2435_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
