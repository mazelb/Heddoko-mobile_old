#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA384Managed
struct SHA384Managed_t1707;
// System.Byte[]
struct ByteU5BU5D_t13;

// System.Void System.Security.Cryptography.SHA384Managed::.ctor()
extern "C" void SHA384Managed__ctor_m8969 (SHA384Managed_t1707 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize(System.Boolean)
extern "C" void SHA384Managed_Initialize_m8970 (SHA384Managed_t1707 * __this, bool ___reuse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize()
extern "C" void SHA384Managed_Initialize_m8971 (SHA384Managed_t1707 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA384Managed_HashCore_m8972 (SHA384Managed_t1707 * __this, ByteU5BU5D_t13* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA384Managed::HashFinal()
extern "C" ByteU5BU5D_t13* SHA384Managed_HashFinal_m8973 (SHA384Managed_t1707 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::update(System.Byte)
extern "C" void SHA384Managed_update_m8974 (SHA384Managed_t1707 * __this, uint8_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processWord(System.Byte[],System.Int32)
extern "C" void SHA384Managed_processWord_m8975 (SHA384Managed_t1707 * __this, ByteU5BU5D_t13* ___input, int32_t ___inOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
extern "C" void SHA384Managed_unpackWord_m8976 (SHA384Managed_t1707 * __this, uint64_t ___word, ByteU5BU5D_t13* ___output, int32_t ___outOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::adjustByteCounts()
extern "C" void SHA384Managed_adjustByteCounts_m8977 (SHA384Managed_t1707 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processLength(System.UInt64,System.UInt64)
extern "C" void SHA384Managed_processLength_m8978 (SHA384Managed_t1707 * __this, uint64_t ___lowW, uint64_t ___hiW, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processBlock()
extern "C" void SHA384Managed_processBlock_m8979 (SHA384Managed_t1707 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
