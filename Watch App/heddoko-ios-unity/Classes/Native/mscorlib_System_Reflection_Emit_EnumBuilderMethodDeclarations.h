#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t1475;
// System.Reflection.Assembly
struct Assembly_t795;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1259;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1131;
// System.Reflection.Binder
struct Binder_t1115;
// System.Type[]
struct TypeU5BU5D_t138;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1116;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1263;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.Reflection.EventInfo
struct EventInfo_t1260;
// System.Reflection.FieldInfo
struct FieldInfo_t1261;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t885;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1262;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t791;
// System.String[]
struct StringU5BU5D_t17;
// System.Exception
struct Exception_t140;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C" Assembly_t795 * EnumBuilder_get_Assembly_m7809 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m7810 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C" Type_t * EnumBuilder_get_BaseType_m7811 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C" Type_t * EnumBuilder_get_DeclaringType_m7812 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C" String_t* EnumBuilder_get_FullName_m7813 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C" Module_t1259 * EnumBuilder_get_Module_m7814 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C" String_t* EnumBuilder_get_Name_m7815 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C" String_t* EnumBuilder_get_Namespace_m7816 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C" Type_t * EnumBuilder_get_ReflectedType_m7817 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1258  EnumBuilder_get_TypeHandle_m7818 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m7819 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m7820 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1131 * EnumBuilder_GetConstructorImpl_m7821 (EnumBuilder_t1475 * __this, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1263* EnumBuilder_GetConstructors_m7822 (EnumBuilder_t1475 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t137* EnumBuilder_GetCustomAttributes_m7823 (EnumBuilder_t1475 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t137* EnumBuilder_GetCustomAttributes_m7824 (EnumBuilder_t1475 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C" Type_t * EnumBuilder_GetElementType_m7825 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t1260 * EnumBuilder_GetEvent_m7826 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t1261 * EnumBuilder_GetField_m7827 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t138* EnumBuilder_GetInterfaces_m7828 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t871 * EnumBuilder_GetMethodImpl_m7829 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t885* EnumBuilder_GetMethods_m7830 (EnumBuilder_t1475 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t1262 * EnumBuilder_GetPropertyImpl_m7831 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, Type_t * ___returnType, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C" bool EnumBuilder_HasElementTypeImpl_m7832 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * EnumBuilder_InvokeMember_m7833 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1115 * ___binder, Object_t * ___target, ObjectU5BU5D_t137* ___args, ParameterModifierU5BU5D_t1116* ___modifiers, CultureInfo_t791 * ___culture, StringU5BU5D_t17* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C" bool EnumBuilder_IsArrayImpl_m7834 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C" bool EnumBuilder_IsByRefImpl_m7835 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C" bool EnumBuilder_IsPointerImpl_m7836 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C" bool EnumBuilder_IsPrimitiveImpl_m7837 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C" bool EnumBuilder_IsValueTypeImpl_m7838 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool EnumBuilder_IsDefined_m7839 (EnumBuilder_t1475 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C" Exception_t140 * EnumBuilder_CreateNotSupportedException_m7840 (EnumBuilder_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
