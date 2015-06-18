#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoEventInfo
struct MonoEventInfo_t1504;
// System.Reflection.MonoEvent
struct MonoEvent_t1505;
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfo.h"

// System.Void System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)
extern "C" void MonoEventInfo_get_event_info_m8096 (Object_t * __this /* static, unused */, MonoEvent_t1505 * ___ev, MonoEventInfo_t1504 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoEventInfo System.Reflection.MonoEventInfo::GetEventInfo(System.Reflection.MonoEvent)
extern "C" MonoEventInfo_t1504  MonoEventInfo_GetEventInfo_m8097 (Object_t * __this /* static, unused */, MonoEvent_t1505 * ___ev, MethodInfo* method) IL2CPP_METHOD_ATTR;
