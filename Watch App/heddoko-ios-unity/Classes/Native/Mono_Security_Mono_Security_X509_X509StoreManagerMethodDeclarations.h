#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509StoreManager
struct X509StoreManager_t2360;
// Mono.Security.X509.X509Stores
struct X509Stores_t697;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t808;

// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C" X509Stores_t697 * X509StoreManager_get_CurrentUser_m4049 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C" X509Stores_t697 * X509StoreManager_get_LocalMachine_m4050 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C" X509CertificateCollection_t808 * X509StoreManager_get_TrustedRootCertificates_m11319 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
