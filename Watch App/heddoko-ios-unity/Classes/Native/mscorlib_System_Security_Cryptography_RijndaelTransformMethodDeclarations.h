﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1698;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1696;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.UInt32[]
struct UInt32U5BU5D_t1316;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m8921 (RijndaelTransform_t1698 * __this, Rijndael_t1696 * ___algo, bool ___encryption, ByteU5BU5D_t13* ___key, ByteU5BU5D_t13* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m8922 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m8923 (RijndaelTransform_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m8924 (RijndaelTransform_t1698 * __this, ByteU5BU5D_t13* ___input, ByteU5BU5D_t13* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m8925 (RijndaelTransform_t1698 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m8926 (RijndaelTransform_t1698 * __this, ByteU5BU5D_t13* ___indata, ByteU5BU5D_t13* ___outdata, UInt32U5BU5D_t1316* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m8927 (RijndaelTransform_t1698 * __this, ByteU5BU5D_t13* ___indata, ByteU5BU5D_t13* ___outdata, UInt32U5BU5D_t1316* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m8928 (RijndaelTransform_t1698 * __this, ByteU5BU5D_t13* ___indata, ByteU5BU5D_t13* ___outdata, UInt32U5BU5D_t1316* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m8929 (RijndaelTransform_t1698 * __this, ByteU5BU5D_t13* ___indata, ByteU5BU5D_t13* ___outdata, UInt32U5BU5D_t1316* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m8930 (RijndaelTransform_t1698 * __this, ByteU5BU5D_t13* ___indata, ByteU5BU5D_t13* ___outdata, UInt32U5BU5D_t1316* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m8931 (RijndaelTransform_t1698 * __this, ByteU5BU5D_t13* ___indata, ByteU5BU5D_t13* ___outdata, UInt32U5BU5D_t1316* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
