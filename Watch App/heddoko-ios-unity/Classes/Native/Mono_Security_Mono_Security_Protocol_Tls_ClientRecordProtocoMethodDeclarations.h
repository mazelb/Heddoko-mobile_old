#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t2383;
// System.IO.Stream
struct Stream_t1426;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t2382;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t2385;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t2386;
// System.Byte[]
struct ByteU5BU5D_t13;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m11440 (ClientRecordProtocol_t2383 * __this, Stream_t1426 * ___innerStream, ClientContext_t2382 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t2385 * ClientRecordProtocol_GetMessage_m11441 (ClientRecordProtocol_t2383 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m11442 (ClientRecordProtocol_t2383 * __this, TlsStream_t2386 * ___handMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t2385 * ClientRecordProtocol_createClientHandshakeMessage_m11443 (ClientRecordProtocol_t2383 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t2385 * ClientRecordProtocol_createServerHandshakeMessage_m11444 (ClientRecordProtocol_t2383 * __this, uint8_t ___type, ByteU5BU5D_t13* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
