#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t2408;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t2406;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t808;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback2__ctor_m11847 (CertificateValidationCallback2_t2408 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t2406 * CertificateValidationCallback2_Invoke_m11848 (CertificateValidationCallback2_t2408 * __this, X509CertificateCollection_t808 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ValidationResult_t2406 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t2408(Il2CppObject* delegate, X509CertificateCollection_t808 * ___collection);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m11849 (CertificateValidationCallback2_t2408 * __this, X509CertificateCollection_t808 * ___collection, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C" ValidationResult_t2406 * CertificateValidationCallback2_EndInvoke_m11850 (CertificateValidationCallback2_t2408 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
