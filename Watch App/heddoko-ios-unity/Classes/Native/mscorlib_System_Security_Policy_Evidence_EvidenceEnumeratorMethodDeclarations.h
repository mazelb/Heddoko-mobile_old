#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence/EvidenceEnumerator
struct EvidenceEnumerator_t1720;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;

// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::.ctor(System.Collections.IEnumerator,System.Collections.IEnumerator)
extern "C" void EvidenceEnumerator__ctor_m9057 (EvidenceEnumerator_t1720 * __this, Object_t * ___hostenum, Object_t * ___assemblyenum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence/EvidenceEnumerator::MoveNext()
extern "C" bool EvidenceEnumerator_MoveNext_m9058 (EvidenceEnumerator_t1720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence/EvidenceEnumerator::get_Current()
extern "C" Object_t * EvidenceEnumerator_get_Current_m9059 (EvidenceEnumerator_t1720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
