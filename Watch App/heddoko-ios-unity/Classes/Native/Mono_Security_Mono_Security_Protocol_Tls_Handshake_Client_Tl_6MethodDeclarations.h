#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct TlsServerFinished_t2423;
// Mono.Security.Protocol.Tls.Context
struct Context_t2375;
// System.Byte[]
struct ByteU5BU5D_t13;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerFinished__ctor_m11821 (TlsServerFinished_t2423 * __this, Context_t2375 * ___context, ByteU5BU5D_t13* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern "C" void TlsServerFinished__cctor_m11822 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern "C" void TlsServerFinished_Update_m11823 (TlsServerFinished_t2423 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern "C" void TlsServerFinished_ProcessAsSsl3_m11824 (TlsServerFinished_t2423 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern "C" void TlsServerFinished_ProcessAsTls1_m11825 (TlsServerFinished_t2423 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
