﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.StackTraceUtility
struct StackTraceUtility_t959;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Diagnostics.StackTrace
struct StackTrace_t960;

// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m4543 (StackTraceUtility_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern "C" void StackTraceUtility__cctor_m4544 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern "C" void StackTraceUtility_SetProjectFolder_m4545 (Object_t * __this /* static, unused */, String_t* ___folder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m4546 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m4547 (Object_t * __this /* static, unused */, Object_t * ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m4548 (Object_t * __this /* static, unused */, Object_t * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m4549 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m4550 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m4551 (Object_t * __this /* static, unused */, StackTrace_t960 * ___stackTrace, MethodInfo* method) IL2CPP_METHOD_ATTR;