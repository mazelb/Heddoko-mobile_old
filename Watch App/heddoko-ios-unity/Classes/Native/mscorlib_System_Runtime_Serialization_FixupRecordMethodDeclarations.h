#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t1647;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1643;
// System.Reflection.MemberInfo
struct MemberInfo_t870;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1636;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m8628 (FixupRecord_t1647 * __this, ObjectRecord_t1643 * ___objectToBeFixed, MemberInfo_t870 * ___member, ObjectRecord_t1643 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m8629 (FixupRecord_t1647 * __this, ObjectManager_t1636 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
