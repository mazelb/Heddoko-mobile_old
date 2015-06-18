#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.RuntimeServices
struct RuntimeServices_t218;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t858;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t138;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t859;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t871;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t876;
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern "C" void RuntimeServices__cctor_m4261 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" Dispatcher_t858 * RuntimeServices_GetDispatcher_m4262 (Object_t * __this /* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t138* ___cacheKeyTypes, DispatcherFactory_t859 * ___factory, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern "C" Object_t * RuntimeServices_Coerce_m4263 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern "C" Dispatcher_t858 * RuntimeServices_CreateCoerceDispatcher_m4264 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern "C" Dispatcher_t858 * RuntimeServices_EmitPromotionDispatcher_m4265 (Object_t * __this /* static, unused */, Type_t * ___fromType, Type_t * ___toType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern "C" bool RuntimeServices_IsPromotableNumeric_m4266 (Object_t * __this /* static, unused */, Type_t * ___fromType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern "C" Dispatcher_t858 * RuntimeServices_EmitImplicitConversionDispatcher_m4267 (Object_t * __this /* static, unused */, MethodInfo_t871 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_CoercibleDispatcher_m4268 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t137* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_IdentityDispatcher_m4269 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t137* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern "C" bool RuntimeServices_IsNumeric_m4270 (Object_t * __this /* static, unused */, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern "C" String_t* RuntimeServices_op_Addition_m929 (Object_t * __this /* static, unused */, String_t* ___lhs, String_t* ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern "C" bool RuntimeServices_EqualityOperator_m960 (Object_t * __this /* static, unused */, Object_t * ___lhs, Object_t * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern "C" bool RuntimeServices_ArrayEqualityImpl_m4271 (Object_t * __this /* static, unused */, Array_t * ___lhs, Array_t * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C" int32_t RuntimeServices_GetConvertTypeCode_m4272 (Object_t * __this /* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern "C" bool RuntimeServices_EqualityOperator_m4273 (Object_t * __this /* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C" bool RuntimeServices_IsPromotableNumeric_m4274 (Object_t * __this /* static, unused */, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern "C" MethodInfo_t871 * RuntimeServices_FindImplicitConversionOperator_m4275 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern "C" Object_t* RuntimeServices_GetExtensionMethods_m4276 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern "C" MethodInfo_t871 * RuntimeServices_FindImplicitConversionMethod_m4277 (Object_t * __this /* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
