#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1843;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1255;
// System.String[]
struct StringU5BU5D_t17;
// System.Globalization.DaylightTime
struct DaylightTime_t1420;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m10172 (CurrentSystemTimeZone_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m10173 (CurrentSystemTimeZone_t1843 * __this, int64_t ___lnow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10174 (CurrentSystemTimeZone_t1843 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m10175 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1255** ___data, StringU5BU5D_t17** ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1420 * CurrentSystemTimeZone_GetDaylightChanges_m10176 (CurrentSystemTimeZone_t1843 * __this, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t618  CurrentSystemTimeZone_GetUtcOffset_m10177 (CurrentSystemTimeZone_t1843 * __this, DateTime_t645  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m10178 (CurrentSystemTimeZone_t1843 * __this, DaylightTime_t1420 * ___dlt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1420 * CurrentSystemTimeZone_GetDaylightTimeFromData_m10179 (CurrentSystemTimeZone_t1843 * __this, Int64U5BU5D_t1255* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
