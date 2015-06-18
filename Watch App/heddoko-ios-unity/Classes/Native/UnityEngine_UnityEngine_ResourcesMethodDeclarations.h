#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t1043;
// UnityEngine.Object
struct Object_t50;
struct Object_t50_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t50 * Resources_Load_m4896 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
extern "C" Object_t50 * Resources_GetBuiltinResource_m4897 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
