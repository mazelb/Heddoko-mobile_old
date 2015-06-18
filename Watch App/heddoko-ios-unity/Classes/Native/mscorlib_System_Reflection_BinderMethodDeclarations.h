#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t1115;
// System.Reflection.MethodBase
struct MethodBase_t879;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1493;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1116;
// System.Globalization.CultureInfo
struct CultureInfo_t791;
// System.String[]
struct StringU5BU5D_t17;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t138;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1262;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1494;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t887;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m8030 (Binder_t1115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m8031 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
// System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
// System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object)
// System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t1115 * Binder_get_DefaultBinder_m8032 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m8033 (Object_t * __this /* static, unused */, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___args, ParameterInfoU5BU5D_t887* ___pinfo, CultureInfo_t791 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m8034 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t879 * Binder_FindMostDerivedMatch_m8035 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1493* ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
