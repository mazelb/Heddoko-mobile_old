#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream
struct FileStream_t1436;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.FileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern "C" void FileStream__ctor_m7525 (FileStream_t1436 * __this, IntPtr_t98 ___handle, int32_t ___access, bool ___ownsHandle, int32_t ___bufferSize, bool ___isAsync, bool ___noBuffering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
extern "C" void FileStream__ctor_m7526 (FileStream_t1436 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" void FileStream__ctor_m7527 (FileStream_t1436 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.Boolean)
extern "C" void FileStream__ctor_m7528 (FileStream_t1436 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___isAsync, bool ___anonymous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.IO.FileOptions)
extern "C" void FileStream__ctor_m7529 (FileStream_t1436 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___anonymous, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanRead()
extern "C" bool FileStream_get_CanRead_m7530 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanWrite()
extern "C" bool FileStream_get_CanWrite_m7531 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanSeek()
extern "C" bool FileStream_get_CanSeek_m7532 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Length()
extern "C" int64_t FileStream_get_Length_m7533 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Position()
extern "C" int64_t FileStream_get_Position_m7534 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::set_Position(System.Int64)
extern "C" void FileStream_set_Position_m7535 (FileStream_t1436 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadByte()
extern "C" int32_t FileStream_ReadByte_m7536 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteByte(System.Byte)
extern "C" void FileStream_WriteByte_m7537 (FileStream_t1436 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_Read_m7538 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadInternal_m7539 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___dest, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FileStream_BeginRead_m7540 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t266 * ___userCallback, Object_t * ___stateObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::EndRead(System.IAsyncResult)
extern "C" int32_t FileStream_EndRead_m7541 (FileStream_t1436 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void FileStream_Write_m7542 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C" void FileStream_WriteInternal_m7543 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___src, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FileStream_BeginWrite_m7544 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t266 * ___userCallback, Object_t * ___stateObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::EndWrite(System.IAsyncResult)
extern "C" void FileStream_EndWrite_m7545 (FileStream_t1436 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t FileStream_Seek_m7546 (FileStream_t1436 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::SetLength(System.Int64)
extern "C" void FileStream_SetLength_m7547 (FileStream_t1436 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Flush()
extern "C" void FileStream_Flush_m7548 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Finalize()
extern "C" void FileStream_Finalize_m7549 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Dispose(System.Boolean)
extern "C" void FileStream_Dispose_m7550 (FileStream_t1436 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadSegment(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadSegment_m7551 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___dest, int32_t ___dest_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::WriteSegment(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_WriteSegment_m7552 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___src, int32_t ___src_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer(System.IO.Stream)
extern "C" void FileStream_FlushBuffer_m7553 (FileStream_t1436 * __this, Stream_t1426 * ___st, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer()
extern "C" void FileStream_FlushBuffer_m7554 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBufferIfDirty()
extern "C" void FileStream_FlushBufferIfDirty_m7555 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::RefillBuffer()
extern "C" void FileStream_RefillBuffer_m7556 (FileStream_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadData(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadData_m7557 (FileStream_t1436 * __this, IntPtr_t98 ___handle, ByteU5BU5D_t13* ___buf, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::InitBuffer(System.Int32,System.Boolean)
extern "C" void FileStream_InitBuffer_m7558 (FileStream_t1436 * __this, int32_t ___size, bool ___noBuffering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String)
extern "C" String_t* FileStream_GetSecureFileName_m7559 (FileStream_t1436 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String,System.Boolean)
extern "C" String_t* FileStream_GetSecureFileName_m7560 (FileStream_t1436 * __this, String_t* ___filename, bool ___full, MethodInfo* method) IL2CPP_METHOD_ATTR;
