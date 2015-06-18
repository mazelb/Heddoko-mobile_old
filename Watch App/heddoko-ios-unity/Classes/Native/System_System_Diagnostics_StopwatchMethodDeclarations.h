#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.Stopwatch
struct Stopwatch_t108;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C" void Stopwatch__ctor_m670 (Stopwatch_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
extern "C" void Stopwatch__cctor_m3062 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern "C" int64_t Stopwatch_GetTimestamp_m3063 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern "C" TimeSpan_t618  Stopwatch_get_Elapsed_m3064 (Stopwatch_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern "C" int64_t Stopwatch_get_ElapsedMilliseconds_m674 (Stopwatch_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern "C" int64_t Stopwatch_get_ElapsedTicks_m3065 (Stopwatch_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C" void Stopwatch_Start_m671 (Stopwatch_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Stop()
extern "C" void Stopwatch_Stop_m676 (Stopwatch_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
