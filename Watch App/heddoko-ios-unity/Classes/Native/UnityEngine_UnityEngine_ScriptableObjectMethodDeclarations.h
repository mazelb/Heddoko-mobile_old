#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t1041;
struct ScriptableObject_t1041_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m4889 (ScriptableObject_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m4890 (Object_t * __this /* static, unused */, ScriptableObject_t1041 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t1041 * ScriptableObject_CreateInstance_m4891 (Object_t * __this /* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t1041 * ScriptableObject_CreateInstance_m4892 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t1041 * ScriptableObject_CreateInstanceFromType_m4893 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t1041_marshal(const ScriptableObject_t1041& unmarshaled, ScriptableObject_t1041_marshaled& marshaled);
void ScriptableObject_t1041_marshal_back(const ScriptableObject_t1041_marshaled& marshaled, ScriptableObject_t1041& unmarshaled);
void ScriptableObject_t1041_marshal_cleanup(ScriptableObject_t1041_marshaled& marshaled);
