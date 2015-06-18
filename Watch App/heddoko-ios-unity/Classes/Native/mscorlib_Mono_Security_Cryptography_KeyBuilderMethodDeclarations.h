﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyBuilder
struct KeyBuilder_t1319;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1317;
// System.Byte[]
struct ByteU5BU5D_t13;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C" RandomNumberGenerator_t1317 * KeyBuilder_get_Rng_m6768 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C" ByteU5BU5D_t13* KeyBuilder_Key_m6769 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C" ByteU5BU5D_t13* KeyBuilder_IV_m6770 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
