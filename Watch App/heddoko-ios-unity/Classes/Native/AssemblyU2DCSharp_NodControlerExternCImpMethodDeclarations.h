#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NodControlerExternCImp
struct NodControlerExternCImp_t119;
// NodRing
struct NodRing_t103;
// System.String
struct String_t;
// Nod.NodQuaternionOrientation
#include "AssemblyU2DCSharp_Nod_NodQuaternionOrientation.h"
// Nod.NodPosition2D
#include "AssemblyU2DCSharp_Nod_NodPosition2D.h"

// System.Void NodControlerExternCImp::.ctor()
extern "C" void NodControlerExternCImp__ctor_m417 (NodControlerExternCImp_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodControlerExternCImp::InitRings()
extern "C" void NodControlerExternCImp_InitRings_m418 (NodControlerExternCImp_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodControlerExternCImp::ConnectToNod()
extern "C" void NodControlerExternCImp_ConnectToNod_m419 (NodControlerExternCImp_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NodRing NodControlerExternCImp::GetRing(System.Int32)
extern "C" NodRing_t103 * NodControlerExternCImp_GetRing_m420 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NodControlerExternCImp::GetRingName(System.Int32)
extern "C" String_t* NodControlerExternCImp_GetRingName_m421 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodControlerExternCImp::ShutdownNodConnection()
extern "C" void NodControlerExternCImp_ShutdownNodConnection_m422 (NodControlerExternCImp_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NodControlerExternCImp::GetNumDevices()
extern "C" int32_t NodControlerExternCImp_GetNumDevices_m423 (NodControlerExternCImp_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Nod.NodQuaternionOrientation NodControlerExternCImp::QuaternionOrientation(System.Int32)
extern "C" NodQuaternionOrientation_t111  NodControlerExternCImp_QuaternionOrientation_m424 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NodControlerExternCImp::ButtonState(System.Int32)
extern "C" int32_t NodControlerExternCImp_ButtonState_m425 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NodControlerExternCImp::Gesture(System.Int32)
extern "C" int32_t NodControlerExternCImp_Gesture_m426 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Nod.NodPosition2D NodControlerExternCImp::Position2D(System.Int32)
extern "C" NodPosition2D_t112  NodControlerExternCImp_Position2D_m427 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodControlerExternCImp::SubscribeToButton(System.Int32)
extern "C" bool NodControlerExternCImp_SubscribeToButton_m428 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodControlerExternCImp::SubscribeToPose6D(System.Int32)
extern "C" bool NodControlerExternCImp_SubscribeToPose6D_m429 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodControlerExternCImp::SubscribeToGesture(System.Int32)
extern "C" bool NodControlerExternCImp_SubscribeToGesture_m430 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodControlerExternCImp::SubscribeToPosition2D(System.Int32)
extern "C" bool NodControlerExternCImp_SubscribeToPosition2D_m431 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodControlerExternCImp::UnsubscribeToButton(System.Int32)
extern "C" bool NodControlerExternCImp_UnsubscribeToButton_m432 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodControlerExternCImp::UnsubscribeToPose6D(System.Int32)
extern "C" bool NodControlerExternCImp_UnsubscribeToPose6D_m433 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodControlerExternCImp::UnsubscribeToGesture(System.Int32)
extern "C" bool NodControlerExternCImp_UnsubscribeToGesture_m434 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NodControlerExternCImp::UnsubscribeToPosition2D(System.Int32)
extern "C" bool NodControlerExternCImp_UnsubscribeToPosition2D_m435 (NodControlerExternCImp_t119 * __this, int32_t ___ringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
