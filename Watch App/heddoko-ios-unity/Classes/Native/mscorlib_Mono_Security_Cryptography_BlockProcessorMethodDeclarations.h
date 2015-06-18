#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1321;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1320;
// System.Byte[]
struct ByteU5BU5D_t13;

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
extern "C" void BlockProcessor__ctor_m6771 (BlockProcessor_t1321 * __this, Object_t * ___transform, int32_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
extern "C" void BlockProcessor_Finalize_m6772 (BlockProcessor_t1321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
extern "C" void BlockProcessor_Initialize_m6773 (BlockProcessor_t1321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
extern "C" void BlockProcessor_Core_m6774 (BlockProcessor_t1321 * __this, ByteU5BU5D_t13* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void BlockProcessor_Core_m6775 (BlockProcessor_t1321 * __this, ByteU5BU5D_t13* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
extern "C" ByteU5BU5D_t13* BlockProcessor_Final_m6776 (BlockProcessor_t1321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
