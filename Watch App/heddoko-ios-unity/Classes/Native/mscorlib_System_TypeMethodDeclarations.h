#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t795;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1259;
// System.Reflection.MemberInfo
struct MemberInfo_t870;
// System.Object
struct Object_t;
// System.Type[]
struct TypeU5BU5D_t138;
// System.Reflection.EventInfo
struct EventInfo_t1260;
// System.Reflection.FieldInfo
struct FieldInfo_t1261;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Reflection.Binder
struct Binder_t1115;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1116;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t885;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1262;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1131;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1263;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.Globalization.CultureInfo
struct CultureInfo_t791;
// System.String[]
struct StringU5BU5D_t17;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Type::.ctor()
extern "C" void Type__ctor_m6467 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
extern "C" void Type__cctor_m6468 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterName_impl_m6469 (Object_t * __this /* static, unused */, MemberInfo_t870 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterNameIgnoreCase_impl_m6470 (Object_t * __this /* static, unused */, MemberInfo_t870 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterAttribute_impl_m6471 (Object_t * __this /* static, unused */, MemberInfo_t870 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Type::get_Assembly()
// System.String System.Type::get_AssemblyQualifiedName()
// System.Reflection.TypeAttributes System.Type::get_Attributes()
extern "C" int32_t Type_get_Attributes_m6472 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_BaseType()
// System.Type System.Type::get_DeclaringType()
extern "C" Type_t * Type_get_DeclaringType_m6473 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::get_FullName()
// System.Boolean System.Type::get_HasElementType()
extern "C" bool Type_get_HasElementType_m6474 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C" bool Type_get_IsAbstract_m6475 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C" bool Type_get_IsArray_m6476 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
extern "C" bool Type_get_IsByRef_m6477 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C" bool Type_get_IsClass_m6478 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
extern "C" bool Type_get_IsContextful_m6479 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C" bool Type_get_IsEnum_m6480 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
extern "C" bool Type_get_IsExplicitLayout_m6481 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C" bool Type_get_IsInterface_m6482 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
extern "C" bool Type_get_IsMarshalByRef_m6483 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
extern "C" bool Type_get_IsPointer_m6484 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C" bool Type_get_IsPrimitive_m5574 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C" bool Type_get_IsSealed_m6485 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
extern "C" bool Type_get_IsSerializable_m6486 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C" bool Type_get_IsValueType_m6487 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
extern "C" int32_t Type_get_MemberType_m6488 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Type::get_Module()
// System.String System.Type::get_Namespace()
// System.Type System.Type::get_ReflectedType()
extern "C" Type_t * Type_get_ReflectedType_m6489 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1258  Type_get_TypeHandle_m6490 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_UnderlyingSystemType()
// System.Boolean System.Type::Equals(System.Object)
extern "C" bool Type_Equals_m6491 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
extern "C" bool Type_Equals_m6492 (Type_t * __this, Type_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
extern "C" bool Type_EqualsInternal_m6493 (Type_t * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
extern "C" Type_t * Type_internal_from_handle_m6494 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Type_internal_from_name_m6495 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
extern "C" Type_t * Type_GetType_m6496 (Object_t * __this /* static, unused */, String_t* ___typeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C" Type_t * Type_GetType_m5552 (Object_t * __this /* static, unused */, String_t* ___typeName, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
extern "C" int32_t Type_GetTypeCodeInternal_m6497 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C" int32_t Type_GetTypeCode_m4293 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" Type_t * Type_GetTypeFromHandle_m577 (Object_t * __this /* static, unused */, RuntimeTypeHandle_t1258  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
extern "C" RuntimeTypeHandle_t1258  Type_GetTypeHandle_m6498 (Object_t * __this /* static, unused */, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
extern "C" bool Type_type_is_subtype_of_m6499 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, bool ___check_interfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
extern "C" bool Type_type_is_assignable_from_m6500 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
extern "C" bool Type_IsSubclassOf_m6501 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetInterfaces()
// System.Boolean System.Type::IsAssignableFrom(System.Type)
extern "C" bool Type_IsAssignableFrom_m4313 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
extern "C" bool Type_IsInstanceOfType_m4292 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetElementType()
// System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags)
// System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags)
// System.Int32 System.Type::GetHashCode()
extern "C" int32_t Type_GetHashCode_m4285 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C" MethodInfo_t871 * Type_GetMethod_m4294 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C" MethodInfo_t871 * Type_GetMethod_m6502 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t871 * Type_GetMethod_m5573 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t871 * Type_GetMethod_m6503 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags)
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C" PropertyInfo_t1262 * Type_GetProperty_m6504 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
extern "C" PropertyInfo_t1262 * Type_GetProperty_m6505 (Type_t * __this, String_t* ___name, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
extern "C" PropertyInfo_t1262 * Type_GetProperty_m6506 (Type_t * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t138* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t1262 * Type_GetProperty_m6507 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, Type_t * ___returnType, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.ConstructorInfo System.Type::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.TypeAttributes System.Type::GetAttributeFlagsImpl()
// System.Boolean System.Type::HasElementTypeImpl()
// System.Boolean System.Type::IsArrayImpl()
// System.Boolean System.Type::IsByRefImpl()
// System.Boolean System.Type::IsPointerImpl()
// System.Boolean System.Type::IsPrimitiveImpl()
// System.Boolean System.Type::IsArrayImpl(System.Type)
extern "C" bool Type_IsArrayImpl_m6508 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
extern "C" bool Type_IsValueTypeImpl_m6509 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
extern "C" bool Type_IsContextfulImpl_m6510 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
extern "C" bool Type_IsMarshalByRefImpl_m6511 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C" ConstructorInfo_t1131 * Type_GetConstructor_m5554 (Type_t * __this, TypeU5BU5D_t138* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1131 * Type_GetConstructor_m6512 (Type_t * __this, int32_t ___bindingAttr, Binder_t1115 * ___binder, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1131 * Type_GetConstructor_m6513 (Type_t * __this, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags)
// System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
// System.String System.Type::ToString()
extern "C" String_t* Type_ToString_m6514 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
extern "C" bool Type_get_IsSystemType_m6515 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
extern "C" TypeU5BU5D_t138* Type_GetGenericArguments_m6516 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
extern "C" bool Type_get_ContainsGenericParameters_m6517 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
extern "C" bool Type_get_IsGenericTypeDefinition_m6518 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
extern "C" Type_t * Type_GetGenericTypeDefinition_impl_m6519 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
extern "C" Type_t * Type_GetGenericTypeDefinition_m6520 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
extern "C" bool Type_get_IsGenericType_m6521 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
extern "C" Type_t * Type_MakeGenericType_m6522 (Object_t * __this /* static, unused */, Type_t * ___gt, TypeU5BU5D_t138* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
extern "C" Type_t * Type_MakeGenericType_m5553 (Type_t * __this, TypeU5BU5D_t138* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
extern "C" bool Type_get_IsGenericParameter_m6523 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
extern "C" bool Type_get_IsNested_m6524 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
extern "C" ObjectU5BU5D_t137* Type_GetPseudoCustomAttributes_m6525 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
