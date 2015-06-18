#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t1645;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1643;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1636;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m8624 (ArrayFixupRecord_t1645 * __this, ObjectRecord_t1643 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t1643 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m8625 (ArrayFixupRecord_t1645 * __this, ObjectManager_t1636 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
