#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Nod.NodUtilities
struct NodUtilities_t116;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Nod.NodEulerOrientation
#include "AssemblyU2DCSharp_Nod_NodEulerOrientation.h"
// Nod.NodQuaternionOrientation
#include "AssemblyU2DCSharp_Nod_NodQuaternionOrientation.h"
// Nod.NodPosition2D
#include "AssemblyU2DCSharp_Nod_NodPosition2D.h"

// System.Void Nod.NodUtilities::.ctor()
extern "C" void NodUtilities__ctor_m386 (NodUtilities_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodInitialize()
extern "C" bool NodUtilities_NodInitialize_m387 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodShutdown()
extern "C" bool NodUtilities_NodShutdown_m388 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Nod.NodUtilities::NodNumRings()
extern "C" int32_t NodUtilities_NodNumRings_m389 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Nod.NodUtilities::NodGetRingName(System.Int32)
extern "C" IntPtr_t98 NodUtilities_NodGetRingName_m390 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodSubscribeToButton(System.Int32)
extern "C" bool NodUtilities_NodSubscribeToButton_m391 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodSubscribeToPose6D(System.Int32)
extern "C" bool NodUtilities_NodSubscribeToPose6D_m392 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodSubscribeToGesture(System.Int32)
extern "C" bool NodUtilities_NodSubscribeToGesture_m393 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodSubscribeToPosition2D(System.Int32)
extern "C" bool NodUtilities_NodSubscribeToPosition2D_m394 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodUnsubscribeToButton(System.Int32)
extern "C" bool NodUtilities_NodUnsubscribeToButton_m395 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodUnsubscribeToPose6D(System.Int32)
extern "C" bool NodUtilities_NodUnsubscribeToPose6D_m396 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodUnsubscribeToGesture(System.Int32)
extern "C" bool NodUtilities_NodUnsubscribeToGesture_m397 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodUnsubscribeToPosition2D(System.Int32)
extern "C" bool NodUtilities_NodUnsubscribeToPosition2D_m398 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Nod.NodUtilities::NodGetButtonState(System.Int32)
extern "C" int32_t NodUtilities_NodGetButtonState_m399 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Nod.NodEulerOrientation Nod.NodUtilities::NodGetEulerOrientation(System.Int32)
extern "C" NodEulerOrientation_t110  NodUtilities_NodGetEulerOrientation_m400 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Nod.NodQuaternionOrientation Nod.NodUtilities::NodGetQuaternionOrientation(System.Int32)
extern "C" NodQuaternionOrientation_t111  NodUtilities_NodGetQuaternionOrientation_m401 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Nod.NodUtilities::NodGetGesture(System.Int32)
extern "C" int32_t NodUtilities_NodGetGesture_m402 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Nod.NodPosition2D Nod.NodUtilities::NodGetPosition2D(System.Int32)
extern "C" NodPosition2D_t112  NodUtilities_NodGetPosition2D_m403 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Nod.NodUtilities::NodBatteryPercent(System.Int32)
extern "C" float NodUtilities_NodBatteryPercent_m404 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Nod.NodUtilities::NodReadMode(System.Int32)
extern "C" int32_t NodUtilities_NodReadMode_m405 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodShutdownRing(System.Int32)
extern "C" bool NodUtilities_NodShutdownRing_m406 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Nod.NodUtilities::NodCurrentFirmwareVersion(System.Int32)
extern "C" IntPtr_t98 NodUtilities_NodCurrentFirmwareVersion_m407 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Nod.NodUtilities::NodDeviceAddress(System.Int32)
extern "C" IntPtr_t98 NodUtilities_NodDeviceAddress_m408 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodRecalibrate(System.Int32)
extern "C" bool NodUtilities_NodRecalibrate_m409 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodRecenter(System.Int32)
extern "C" bool NodUtilities_NodRecenter_m410 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Nod.NodUtilities::NodFlipY(System.Int32)
extern "C" bool NodUtilities_NodFlipY_m411 (Object_t * __this /* static, unused */, int32_t ___ringID, MethodInfo* method) IL2CPP_METHOD_ATTR;
