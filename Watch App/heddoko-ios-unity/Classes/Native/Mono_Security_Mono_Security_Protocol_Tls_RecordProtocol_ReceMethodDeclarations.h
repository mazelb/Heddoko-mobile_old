#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t2399;
// System.IO.Stream
struct Stream_t1426;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t140;
// System.Threading.WaitHandle
struct WaitHandle_t1447;
// System.AsyncCallback
struct AsyncCallback_t266;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m11530 (ReceiveRecordAsyncResult_t2399 * __this, AsyncCallback_t266 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t13* ___initialBuffer, Stream_t1426 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1426 * ReceiveRecordAsyncResult_get_Record_m11531 (ReceiveRecordAsyncResult_t2399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t13* ReceiveRecordAsyncResult_get_ResultingBuffer_m11532 (ReceiveRecordAsyncResult_t2399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t13* ReceiveRecordAsyncResult_get_InitialBuffer_m11533 (ReceiveRecordAsyncResult_t2399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m11534 (ReceiveRecordAsyncResult_t2399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t140 * ReceiveRecordAsyncResult_get_AsyncException_m11535 (ReceiveRecordAsyncResult_t2399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m11536 (ReceiveRecordAsyncResult_t2399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1447 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m11537 (ReceiveRecordAsyncResult_t2399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m11538 (ReceiveRecordAsyncResult_t2399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m11539 (ReceiveRecordAsyncResult_t2399 * __this, Exception_t140 * ___ex, ByteU5BU5D_t13* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m11540 (ReceiveRecordAsyncResult_t2399 * __this, Exception_t140 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m11541 (ReceiveRecordAsyncResult_t2399 * __this, ByteU5BU5D_t13* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
