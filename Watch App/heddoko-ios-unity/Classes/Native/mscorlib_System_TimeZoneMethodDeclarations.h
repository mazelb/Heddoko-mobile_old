#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t1842;
// System.Globalization.DaylightTime
struct DaylightTime_t1420;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m10163 (TimeZone_t1842 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m10164 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1842 * TimeZone_get_CurrentTimeZone_m10165 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10166 (TimeZone_t1842 * __this, DateTime_t645  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10167 (Object_t * __this /* static, unused */, DateTime_t645  ___time, DaylightTime_t1420 * ___daylightTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t645  TimeZone_ToLocalTime_m10168 (TimeZone_t1842 * __this, DateTime_t645  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t645  TimeZone_ToUniversalTime_m10169 (TimeZone_t1842 * __this, DateTime_t645  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t618  TimeZone_GetLocalTimeDiff_m10170 (TimeZone_t1842 * __this, DateTime_t645  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t618  TimeZone_GetLocalTimeDiff_m10171 (TimeZone_t1842 * __this, DateTime_t645  ___time, TimeSpan_t618  ___utc_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
