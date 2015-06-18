#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NodRing
struct NodRing_t103;
// NodControlerInterface
struct NodControlerInterface_t117;
// System.String
struct String_t;

// System.Void NodRing::.ctor(System.Int32,NodControlerInterface)
extern "C" void NodRing__ctor_m436 (NodRing_t103 * __this, int32_t ___index, Object_t * ___nci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodRing::.ctor(System.Int32,System.String,NodControlerInterface)
extern "C" void NodRing__ctor_m437 (NodRing_t103 * __this, int32_t ___index, String_t* ___address, Object_t * ___nci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodRing::init(System.Int32,System.String,NodControlerInterface)
extern "C" void NodRing_init_m438 (NodRing_t103 * __this, int32_t ___index, String_t* ___address, Object_t * ___nci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodRing::CheckForUpdate()
extern "C" void NodRing_CheckForUpdate_m439 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodRing::PrintCurrentState()
extern "C" void NodRing_PrintCurrentState_m440 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodRing::StopTracking()
extern "C" void NodRing_StopTracking_m441 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodRing::SubscribeToButton()
extern "C" bool NodRing_SubscribeToButton_m442 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodRing::UnsubscribeToButton()
extern "C" bool NodRing_UnsubscribeToButton_m443 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodRing::SubscribeToPose6D()
extern "C" bool NodRing_SubscribeToPose6D_m444 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodRing::UnsubscribeToPose6D()
extern "C" bool NodRing_UnsubscribeToPose6D_m445 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodRing::SubscribeToGesture()
extern "C" bool NodRing_SubscribeToGesture_m446 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodRing::UnsubscribeToGesture()
extern "C" bool NodRing_UnsubscribeToGesture_m447 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodRing::SubscribeToPosition2D()
extern "C" bool NodRing_SubscribeToPosition2D_m448 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodRing::UnsubscribeToPosition2D()
extern "C" bool NodRing_UnsubscribeToPosition2D_m449 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NodRing::GetRingName()
extern "C" String_t* NodRing_GetRingName_m450 (NodRing_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
