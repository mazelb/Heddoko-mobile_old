#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Application
struct Application_t1094;
// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1029;
struct AsyncOperation_t1029_marshaled;
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.UserAuthorization
#include "UnityEngine_UnityEngine_UserAuthorization.h"

// System.Void UnityEngine.Application::Quit()
extern "C" void Application_Quit_m664 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C" void Application_LoadLevel_m724 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t1029 * Application_LoadLevelAsync_m5391 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m2668 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m162 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m652 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C" void Application_set_targetFrameRate_m526 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType)
extern "C" void Application_CallLogCallback_m5392 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ReplyToUserAuthorizationRequest(System.Boolean,System.Boolean)
extern "C" void Application_ReplyToUserAuthorizationRequest_m5393 (Object_t * __this /* static, unused */, bool ___reply, bool ___remember, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ReplyToUserAuthorizationRequest(System.Boolean)
extern "C" void Application_ReplyToUserAuthorizationRequest_m5394 (Object_t * __this /* static, unused */, bool ___reply, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Application::GetUserAuthorizationRequestMode_Internal()
extern "C" int32_t Application_GetUserAuthorizationRequestMode_Internal_m5395 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UserAuthorization UnityEngine.Application::GetUserAuthorizationRequestMode()
extern "C" int32_t Application_GetUserAuthorizationRequestMode_m5396 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
