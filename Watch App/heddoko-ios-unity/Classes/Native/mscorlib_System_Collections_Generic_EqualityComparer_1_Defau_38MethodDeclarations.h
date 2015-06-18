#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3084;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m18469_gshared (DefaultComparer_t3084 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m18469(__this, method) (( void (*) (DefaultComparer_t3084 *, MethodInfo*))DefaultComparer__ctor_m18469_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18470_gshared (DefaultComparer_t3084 * __this, UILineInfo_t511  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m18470(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3084 *, UILineInfo_t511 , MethodInfo*))DefaultComparer_GetHashCode_m18470_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18471_gshared (DefaultComparer_t3084 * __this, UILineInfo_t511  ___x, UILineInfo_t511  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m18471(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3084 *, UILineInfo_t511 , UILineInfo_t511 , MethodInfo*))DefaultComparer_Equals_m18471_gshared)(__this, ___x, ___y, method)
