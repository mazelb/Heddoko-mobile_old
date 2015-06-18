#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.KeySizes
struct KeySizes_t1681;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1660;

// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void KeySizes__ctor_m8799 (KeySizes_t1681 * __this, int32_t ___minSize, int32_t ___maxSize, int32_t ___skipSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MaxSize()
extern "C" int32_t KeySizes_get_MaxSize_m8800 (KeySizes_t1681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MinSize()
extern "C" int32_t KeySizes_get_MinSize_m8801 (KeySizes_t1681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_SkipSize()
extern "C" int32_t KeySizes_get_SkipSize_m8802 (KeySizes_t1681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegal(System.Int32)
extern "C" bool KeySizes_IsLegal_m8803 (KeySizes_t1681 * __this, int32_t ___keySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegalKeySize(System.Security.Cryptography.KeySizes[],System.Int32)
extern "C" bool KeySizes_IsLegalKeySize_m8804 (Object_t * __this /* static, unused */, KeySizesU5BU5D_t1660* ___legalKeys, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
