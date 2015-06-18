#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoType
struct MonoType_t1825;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t795;
// System.String
struct String_t;
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
// System.Reflection.EventInfo
struct EventInfo_t1260;
// System.Reflection.FieldInfo
struct FieldInfo_t1261;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t885;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1494;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1262;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.Globalization.CultureInfo
struct CultureInfo_t791;
// System.String[]
struct StringU5BU5D_t17;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Reflection.MethodBase
struct MethodBase_t879;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern "C" int32_t MonoType_get_attributes_m9933 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern "C" ConstructorInfo_t1131 * MonoType_GetDefaultConstructor_m9934 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern "C" int32_t MonoType_GetAttributeFlagsImpl_m9935 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1131 * MonoType_GetConstructorImpl_m9936 (MonoType_t1825 * __this, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern "C" ConstructorInfoU5BU5D_t1263* MonoType_GetConstructors_internal_m9937 (MonoType_t1825 * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1263* MonoType_GetConstructors_m9938 (MonoType_t1825 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t1260 * MonoType_InternalGetEvent_m9939 (MonoType_t1825 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t1260 * MonoType_GetEvent_m9940 (MonoType_t1825 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t1261 * MonoType_GetField_m9941 (MonoType_t1825 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
extern "C" TypeU5BU5D_t138* MonoType_GetInterfaces_m9942 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t885* MonoType_GetMethodsByName_m9943 (MonoType_t1825 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t885* MonoType_GetMethods_m9944 (MonoType_t1825 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t871 * MonoType_GetMethodImpl_m9945 (MonoType_t1825 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" PropertyInfoU5BU5D_t1494* MonoType_GetPropertiesByName_m9946 (MonoType_t1825 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t1262 * MonoType_GetPropertyImpl_m9947 (MonoType_t1825 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, Type_t * ___returnType, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
extern "C" bool MonoType_HasElementTypeImpl_m9948 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
extern "C" bool MonoType_IsArrayImpl_m9949 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
extern "C" bool MonoType_IsByRefImpl_m9950 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
extern "C" bool MonoType_IsPointerImpl_m9951 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern "C" bool MonoType_IsPrimitiveImpl_m9952 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern "C" bool MonoType_IsSubclassOf_m9953 (MonoType_t1825 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * MonoType_InvokeMember_m9954 (MonoType_t1825 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1115 * ___binder, Object_t * ___target, ObjectU5BU5D_t137* ___args, ParameterModifierU5BU5D_t1116* ___modifiers, CultureInfo_t791 * ___culture, StringU5BU5D_t17* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
extern "C" Type_t * MonoType_GetElementType_m9955 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
extern "C" Type_t * MonoType_get_UnderlyingSystemType_m9956 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern "C" Assembly_t795 * MonoType_get_Assembly_m9957 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
extern "C" String_t* MonoType_get_AssemblyQualifiedName_m9958 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern "C" String_t* MonoType_getFullName_m9959 (MonoType_t1825 * __this, bool ___full_name, bool ___assembly_qualified, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
extern "C" Type_t * MonoType_get_BaseType_m9960 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
extern "C" String_t* MonoType_get_FullName_m9961 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoType_IsDefined_m9962 (MonoType_t1825 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t137* MonoType_GetCustomAttributes_m9963 (MonoType_t1825 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t137* MonoType_GetCustomAttributes_m9964 (MonoType_t1825 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern "C" int32_t MonoType_get_MemberType_m9965 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
extern "C" String_t* MonoType_get_Name_m9966 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
extern "C" String_t* MonoType_get_Namespace_m9967 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
extern "C" Module_t1259 * MonoType_get_Module_m9968 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
extern "C" Type_t * MonoType_get_DeclaringType_m9969 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
extern "C" Type_t * MonoType_get_ReflectedType_m9970 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1258  MonoType_get_TypeHandle_m9971 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoType_GetObjectData_m9972 (MonoType_t1825 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
extern "C" String_t* MonoType_ToString_m9973 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
extern "C" TypeU5BU5D_t138* MonoType_GetGenericArguments_m9974 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern "C" bool MonoType_get_ContainsGenericParameters_m9975 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
extern "C" bool MonoType_get_IsGenericParameter_m9976 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
extern "C" Type_t * MonoType_GetGenericTypeDefinition_m9977 (MonoType_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern "C" MethodBase_t879 * MonoType_CheckMethodSecurity_m9978 (MonoType_t1825 * __this, MethodBase_t879 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern "C" void MonoType_ReorderParamArrayArguments_m9979 (MonoType_t1825 * __this, ObjectU5BU5D_t137** ___args, MethodBase_t879 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
