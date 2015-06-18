#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NodControler
struct NodControler_t102;
// NodRing
struct NodRing_t103;

// System.Void NodControler::.ctor()
extern "C" void NodControler__ctor_m412 (NodControler_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodControler::OnApplicationQuit()
extern "C" void NodControler_OnApplicationQuit_m413 (NodControler_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NodControler::getNumDevices()
extern "C" int32_t NodControler_getNumDevices_m414 (NodControler_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NodRing NodControler::getRing(System.Int32)
extern "C" NodRing_t103 * NodControler_getRing_m415 (NodControler_t102 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NodControler NodControler::GetNodInterface()
extern "C" NodControler_t102 * NodControler_GetNodInterface_m416 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
