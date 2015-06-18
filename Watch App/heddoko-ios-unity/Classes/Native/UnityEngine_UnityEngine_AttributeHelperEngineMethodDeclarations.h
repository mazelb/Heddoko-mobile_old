#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AttributeHelperEngine
struct AttributeHelperEngine_t915;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t138;

// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m4402 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern "C" TypeU5BU5D_t138* AttributeHelperEngine_GetRequiredComponents_m4403 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m4404 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method) IL2CPP_METHOD_ATTR;
