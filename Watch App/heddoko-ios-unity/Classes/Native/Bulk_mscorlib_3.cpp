#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethod.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo MonoCMethod_t1510_il2cpp_TypeInfo;
// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethodMethodDeclarations.h"

// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.String
#include "mscorlib_System_String.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
#include "mscorlib_ArrayTypes.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
extern TypeInfo RuntimeMethodHandle_t1474_il2cpp_TypeInfo;
extern TypeInfo Binder_t1115_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t887_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t888_il2cpp_TypeInfo;
extern TypeInfo TargetParameterCountException_t1524_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t522_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo MemberAccessException_t1809_il2cpp_TypeInfo;
extern TypeInfo TargetInvocationException_t1523_il2cpp_TypeInfo;
extern TypeInfo MethodAccessException_t1815_il2cpp_TypeInfo;
extern TypeInfo Exception_t140_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t886_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t137_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t791_il2cpp_TypeInfo;
extern TypeInfo MonoCustomAttrs_t1821_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t154_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t870_il2cpp_TypeInfo;
extern TypeInfo CallingConventions_t1495_il2cpp_TypeInfo;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfoMethodDeclarations.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_BinderMethodDeclarations.h"
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.MemberAccessException
#include "mscorlib_System_MemberAccessExceptionMethodDeclarations.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrsMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolderMethodDeclarations.h"
extern MethodInfo RuntimeMethodHandle__ctor_m10104_MethodInfo;
extern MethodInfo MonoMethodInfo_GetAttributes_m8136_MethodInfo;
extern MethodInfo MonoMethodInfo_GetCallingConvention_m8137_MethodInfo;
extern MethodInfo MonoMethodInfo_GetDeclaringType_m8134_MethodInfo;
extern MethodInfo MonoMethod_get_name_m8141_MethodInfo;
extern MethodInfo ConstructorInfo__ctor_m8036_MethodInfo;
extern MethodInfo MonoMethodInfo_GetParametersInfo_m8139_MethodInfo;
extern MethodInfo Binder_get_DefaultBinder_m8032_MethodInfo;
extern MethodInfo MonoCMethod_GetParameters_m8169_MethodInfo;
extern MethodInfo TargetParameterCountException__ctor_m8246_MethodInfo;
extern MethodInfo Binder_ConvertArgs_m8033_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2758_MethodInfo;
extern MethodInfo Object_GetType_m2357_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m4312_MethodInfo;
extern MethodInfo MonoCMethod_get_DeclaringType_m8177_MethodInfo;
extern MethodInfo Type_get_ContainsGenericParameters_m6517_MethodInfo;
extern MethodInfo String_Concat_m675_MethodInfo;
extern MethodInfo MemberAccessException__ctor_m9895_MethodInfo;
extern MethodInfo Type_get_IsAbstract_m6475_MethodInfo;
extern MethodInfo String_Format_m160_MethodInfo;
extern MethodInfo MonoCMethod_InternalInvoke_m8170_MethodInfo;
extern MethodInfo TargetInvocationException__ctor_m8243_MethodInfo;
extern MethodInfo MonoCMethod_Invoke_m8171_MethodInfo;
extern MethodInfo MonoCustomAttrs_IsDefined_m9926_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo;
extern MethodInfo StringBuilder__ctor_m714_MethodInfo;
extern MethodInfo StringBuilder_Append_m3908_MethodInfo;
extern MethodInfo MonoCMethod_get_Name_m8178_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m4309_MethodInfo;
extern MethodInfo MonoCMethod_get_CallingConvention_m8175_MethodInfo;
extern MethodInfo StringBuilder_ToString_m716_MethodInfo;
extern MethodInfo MonoCMethod_get_ReflectedType_m8176_MethodInfo;
extern MethodInfo MonoCMethod_ToString_m8182_MethodInfo;
extern MethodInfo MemberInfoSerializationHolder_Serialize_m8059_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern MethodInfo MonoCMethod__ctor_m8168_MethodInfo;
extern "C" void MonoCMethod__ctor_m8168 (MonoCMethod_t1510 * __this, MethodInfo* method)
{
	{
		ConstructorInfo__ctor_m8036(__this, /*hidden argument*/&ConstructorInfo__ctor_m8036_MethodInfo);
		return;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t887* MonoCMethod_GetParameters_m8169 (MonoCMethod_t1510 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_2);
		ParameterInfoU5BU5D_t887* L_1 = MonoMethodInfo_GetParametersInfo_m8139(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m8139_MethodInfo);
		return L_1;
	}
}
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m8170 (MonoCMethod_t1510 * __this, Object_t * ___obj, ObjectU5BU5D_t137* ___parameters, Exception_t140 ** ___exc, MethodInfo* method)
{
	typedef Object_t * (*MonoCMethod_InternalInvoke_m8170_ftn) (MonoCMethod_t1510 *, Object_t *, ObjectU5BU5D_t137*, Exception_t140 **);
	static MonoCMethod_InternalInvoke_m8170_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoCMethod_InternalInvoke_m8170_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m8171 (MonoCMethod_t1510 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___parameters, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	ParameterInfoU5BU5D_t887* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t140 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t140 * V_4 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	Object_t * G_B31_0 = {0};
	{
		if (___binder)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		Binder_t1115 * L_0 = Binder_get_DefaultBinder_m8032(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8032_MethodInfo);
		___binder = L_0;
	}

IL_000c:
	{
		ParameterInfoU5BU5D_t887* L_1 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MonoCMethod_GetParameters_m8169_MethodInfo, __this);
		V_0 = L_1;
		if (___parameters)
		{
			goto IL_001c;
		}
	}
	{
		NullCheck(V_0);
		if ((((int32_t)(((Array_t *)V_0)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		if (!___parameters)
		{
			goto IL_0034;
		}
	}
	{
		NullCheck(___parameters);
		NullCheck(V_0);
		if ((((int32_t)(((int32_t)(((Array_t *)___parameters)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		TargetParameterCountException_t1524 * L_2 = (TargetParameterCountException_t1524 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1524_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8246(L_2, (String_t*) &_stringLiteral1785, /*hidden argument*/&TargetParameterCountException__ctor_m8246_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0034:
	{
		if (((int32_t)((int32_t)___invokeAttr&(int32_t)((int32_t)65536))))
		{
			goto IL_0057;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		bool L_3 = Binder_ConvertArgs_m8033(NULL /*static, unused*/, ___binder, ___parameters, V_0, ___culture, /*hidden argument*/&Binder_ConvertArgs_m8033_MethodInfo);
		if (L_3)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, (String_t*) &_stringLiteral1786, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0055:
	{
		goto IL_0083;
	}

IL_0057:
	{
		V_1 = 0;
		goto IL_007d;
	}

IL_005b:
	{
		NullCheck(___parameters);
		IL2CPP_ARRAY_BOUNDS_CHECK(___parameters, V_1);
		int32_t L_5 = V_1;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(___parameters, L_5)));
		Type_t * L_6 = Object_GetType_m2357((*(Object_t **)(Object_t **)SZArrayLdElema(___parameters, L_5)), /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		int32_t L_7 = V_1;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_7)));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_7)));
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_t522 * L_9 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_9, (String_t*) &_stringLiteral1785, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0079:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_007d:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0083:
	{
		if (___obj)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8177_MethodInfo, __this);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6517_MethodInfo, L_10);
		if (!L_11)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8177_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = String_Concat_m675(NULL /*static, unused*/, (String_t*) &_stringLiteral1791, L_12, (String_t*) &_stringLiteral1792, /*hidden argument*/&String_Concat_m675_MethodInfo);
		MemberAccessException_t1809 * L_14 = (MemberAccessException_t1809 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemberAccessException_t1809_il2cpp_TypeInfo));
		MemberAccessException__ctor_m9895(L_14, L_13, /*hidden argument*/&MemberAccessException__ctor_m9895_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_00ae:
	{
		if (!((int32_t)((int32_t)___invokeAttr&(int32_t)((int32_t)512))))
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8177_MethodInfo, __this);
		NullCheck(L_15);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsAbstract_m6475_MethodInfo, L_15);
		if (!L_16)
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8177_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_18 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1793, L_17, /*hidden argument*/&String_Format_m160_MethodInfo);
		MemberAccessException_t1809 * L_19 = (MemberAccessException_t1809 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemberAccessException_t1809_il2cpp_TypeInfo));
		MemberAccessException__ctor_m9895(L_19, L_18, /*hidden argument*/&MemberAccessException__ctor_m9895_MethodInfo);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_00da:
	{
		V_2 = (Exception_t140 *)NULL;
		V_3 = NULL;
	}

IL_00de:
	try
	{ // begin try (depth: 1)
		Object_t * L_20 = MonoCMethod_InternalInvoke_m8170(__this, ___obj, ___parameters, (&V_2), /*hidden argument*/&MonoCMethod_InternalInvoke_m8170_MethodInfo);
		V_3 = L_20;
		// IL_00ea: leave.s IL_00fd
		goto IL_00fd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&MethodAccessException_t1815_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_00ec;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_00f1;
		throw e;
	}

IL_00ec:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		// IL_00ef: leave.s IL_00fd
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00f1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t140 *)__exception_local);
		TargetInvocationException_t1523 * L_21 = (TargetInvocationException_t1523 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t1523_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m8243(L_21, V_4, /*hidden argument*/&TargetInvocationException__ctor_m8243_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
		// IL_00fb: leave.s IL_00fd
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00fd:
	{
		if (!V_2)
		{
			goto IL_0102;
		}
	}
	{
		il2cpp_codegen_raise_exception(V_2);
	}

IL_0102:
	{
		if (___obj)
		{
			goto IL_0108;
		}
	}
	{
		G_B31_0 = V_3;
		goto IL_0109;
	}

IL_0108:
	{
		G_B31_0 = NULL;
	}

IL_0109:
	{
		return G_B31_0;
	}
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoCMethod_Invoke_m8172_MethodInfo;
extern "C" Object_t * MonoCMethod_Invoke_m8172 (MonoCMethod_t1510 * __this, int32_t ___invokeAttr, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___parameters, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1115 *, ObjectU5BU5D_t137*, CultureInfo_t791 * >::Invoke(&MonoCMethod_Invoke_m8171_MethodInfo, __this, NULL, ___invokeAttr, ___binder, ___parameters, ___culture);
		return L_0;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern MethodInfo MonoCMethod_get_MethodHandle_m8173_MethodInfo;
extern "C" RuntimeMethodHandle_t1474  MonoCMethod_get_MethodHandle_m8173 (MonoCMethod_t1510 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_2);
		RuntimeMethodHandle_t1474  L_1 = {0};
		RuntimeMethodHandle__ctor_m10104(&L_1, L_0, /*hidden argument*/&RuntimeMethodHandle__ctor_m10104_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern MethodInfo MonoCMethod_get_Attributes_m8174_MethodInfo;
extern "C" int32_t MonoCMethod_get_Attributes_m8174 (MonoCMethod_t1510 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m8136(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetAttributes_m8136_MethodInfo);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m8175 (MonoCMethod_t1510 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m8137(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetCallingConvention_m8137_MethodInfo);
		return L_1;
	}
}
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m8176 (MonoCMethod_t1510 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_4);
		return L_0;
	}
}
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m8177 (MonoCMethod_t1510 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_2);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m8134(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetDeclaringType_m8134_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m8178 (MonoCMethod_t1510 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_3);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m8141(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_name_m8141_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoCMethod_IsDefined_m8179_MethodInfo;
extern "C" bool MonoCMethod_IsDefined_m8179 (MonoCMethod_t1510 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		bool L_0 = MonoCustomAttrs_IsDefined_m9926(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_IsDefined_m9926_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoCMethod_GetCustomAttributes_m8180_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoCMethod_GetCustomAttributes_m8180 (MonoCMethod_t1510 * __this, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9925(NULL /*static, unused*/, __this, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoCMethod_GetCustomAttributes_m8181_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoCMethod_GetCustomAttributes_m8181 (MonoCMethod_t1510 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.MonoCMethod::ToString()
extern "C" String_t* MonoCMethod_ToString_m8182 (MonoCMethod_t1510 * __this, MethodInfo* method)
{
	StringBuilder_t154 * V_0 = {0};
	ParameterInfoU5BU5D_t887* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringBuilder_t154 * L_0 = (StringBuilder_t154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t154_il2cpp_TypeInfo));
		StringBuilder__ctor_m714(L_0, /*hidden argument*/&StringBuilder__ctor_m714_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1794, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_get_Name_m8178_MethodInfo, __this);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_1, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral828, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		ParameterInfoU5BU5D_t887* L_2 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MonoCMethod_GetParameters_m8169_MethodInfo, __this);
		V_1 = L_2;
		V_2 = 0;
		goto IL_005e;
	}

IL_0036:
	{
		if ((((int32_t)V_2) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral149, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0046:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_3 = V_2;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_1, L_3)));
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_1, L_3)));
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, L_4);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_5, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_005e:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoCMethod_get_CallingConvention_m8175_MethodInfo, __this);
		if ((((uint32_t)L_6) != ((uint32_t)3)))
		{
			goto IL_0079;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1795, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0079:
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral21, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		NullCheck(V_0);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m716_MethodInfo, V_0);
		return L_7;
	}
}
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoCMethod_GetObjectData_m8183_MethodInfo;
extern "C" void MonoCMethod_GetObjectData_m8183 (MonoCMethod_t1510 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_get_Name_m8178_MethodInfo, __this);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_ReflectedType_m8176_MethodInfo, __this);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_ToString_m8182_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8059(NULL /*static, unused*/, ___info, L_0, L_1, L_2, 1, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8059_MethodInfo);
		return;
	}
}
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoPropertyInfo_t1512_il2cpp_TypeInfo;
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfoMethodDeclarations.h"

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"


// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern MethodInfo MonoPropertyInfo_get_property_info_m8184_MethodInfo;
extern "C" void MonoPropertyInfo_get_property_info_m8184 (Object_t * __this /* static, unused */, MonoProperty_t1513 * ___prop, MonoPropertyInfo_t1512 * ___info, int32_t ___req_info, MethodInfo* method)
{
	typedef void (*MonoPropertyInfo_get_property_info_m8184_ftn) (MonoProperty_t1513 *, MonoPropertyInfo_t1512 *, int32_t);
	static MonoPropertyInfo_get_property_info_m8184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_get_property_info_m8184_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(___prop, ___info, ___req_info);
}
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern MethodInfo MonoPropertyInfo_GetTypeModifiers_m8185_MethodInfo;
extern "C" TypeU5BU5D_t138* MonoPropertyInfo_GetTypeModifiers_m8185 (Object_t * __this /* static, unused */, MonoProperty_t1513 * ___prop, bool ___optional, MethodInfo* method)
{
	typedef TypeU5BU5D_t138* (*MonoPropertyInfo_GetTypeModifiers_m8185_ftn) (MonoProperty_t1513 *, bool);
	static MonoPropertyInfo_GetTypeModifiers_m8185_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_GetTypeModifiers_m8185_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(___prop, ___optional);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PInfo_t1514_il2cpp_TypeInfo;
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfoMethodDeclarations.h"



// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GetterAdapter_t1515_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapterMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
extern MethodInfo GetterAdapter__ctor_m8186_MethodInfo;
extern "C" void GetterAdapter__ctor_m8186 (GetterAdapter_t1515 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
extern MethodInfo GetterAdapter_Invoke_m8187_MethodInfo;
extern "C" Object_t * GetterAdapter_Invoke_m8187 (GetterAdapter_t1515 * __this, Object_t * ____this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetterAdapter_Invoke_m8187((GetterAdapter_t1515 *)__this->___prev_9,____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetterAdapter_t1515(Il2CppObject* delegate, Object_t * ____this)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern MethodInfo GetterAdapter_BeginInvoke_m8188_MethodInfo;
extern "C" Object_t * GetterAdapter_BeginInvoke_m8188 (GetterAdapter_t1515 * __this, Object_t * ____this, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
extern MethodInfo GetterAdapter_EndInvoke_m8189_MethodInfo;
extern "C" Object_t * GetterAdapter_EndInvoke_m8189 (GetterAdapter_t1515 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoProperty_t1513_il2cpp_TypeInfo;
// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoPropertyMethodDeclarations.h"

// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.MonoProperty/StaticGetter`1
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.MonoProperty/Getter`2
#include "mscorlib_System_Reflection_MonoProperty_Getter_2.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.MethodAccessException
#include "mscorlib_System_MethodAccessException.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityException.h"
extern TypeInfo MethodInfo_t871_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t879_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t885_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t138_il2cpp_TypeInfo;
extern TypeInfo StaticGetter_1_t1517_il2cpp_TypeInfo;
extern TypeInfo Getter_2_t1516_il2cpp_TypeInfo;
extern TypeInfo SecurityException_t1726_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Void_t42_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.MethodAccessException
#include "mscorlib_System_MethodAccessExceptionMethodDeclarations.h"
extern Il2CppType MethodInfoU5BU5D_t885_0_0_0;
extern Il2CppType ParameterInfoU5BU5D_t887_0_0_0;
extern Il2CppType TypeU5BU5D_t138_0_0_0;
extern Il2CppType StaticGetter_1_t1517_0_0_0;
extern Il2CppType Getter_2_t1516_0_0_0;
extern Il2CppType MonoProperty_t1513_0_0_0;
extern Il2CppType GetterAdapter_t1515_0_0_0;
extern Il2CppType ObjectU5BU5D_t137_0_0_0;
extern MethodInfo MonoProperty_CachePropertyInfo_m8191_MethodInfo;
extern MethodInfo MethodInfo_get_ReturnType_m4310_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m4311_MethodInfo;
extern MethodInfo PropertyInfo__ctor_m8231_MethodInfo;
extern MethodInfo MethodBase_get_IsPublic_m8069_MethodInfo;
extern MethodInfo Array_Copy_m6432_MethodInfo;
extern MethodInfo ParameterInfo__ctor_m8216_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m5544_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m5530_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5553_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m6328_MethodInfo;
extern MethodInfo MethodAccessException__ctor_m9897_MethodInfo;
extern MethodInfo Type_GetMethod_m6502_MethodInfo;
extern MethodInfo MethodInfo_MakeGenericMethod_m8077_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m6327_MethodInfo;
extern MethodInfo MonoProperty_GetValue_m8208_MethodInfo;
extern MethodInfo MonoProperty_GetGetMethod_m8200_MethodInfo;
extern MethodInfo MonoProperty_get_Name_m8198_MethodInfo;
extern MethodInfo String_Concat_m169_MethodInfo;
extern MethodInfo MethodBase_Invoke_m10333_MethodInfo;
extern MethodInfo MonoProperty_GetSetMethod_m8202_MethodInfo;
extern MethodInfo Array_CopyTo_m4063_MethodInfo;
extern MethodInfo MonoProperty_get_PropertyType_m8195_MethodInfo;
extern MethodInfo Type_ToString_m6514_MethodInfo;
extern MethodInfo MonoProperty_get_ReflectedType_m8196_MethodInfo;
extern MethodInfo MonoProperty_ToString_m8210_MethodInfo;


// System.Void System.Reflection.MonoProperty::.ctor()
extern MethodInfo MonoProperty__ctor_m8190_MethodInfo;
extern "C" void MonoProperty__ctor_m8190 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	{
		PropertyInfo__ctor_m8231(__this, /*hidden argument*/&PropertyInfo__ctor_m8231_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C" void MonoProperty_CachePropertyInfo_m8191 (MonoProperty_t1513 * __this, int32_t ___flags, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___cached_3);
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)___flags))) == ((int32_t)___flags)))
		{
			goto IL_0026;
		}
	}
	{
		MonoPropertyInfo_t1512 * L_1 = &(__this->___info_2);
		MonoPropertyInfo_get_property_info_m8184(NULL /*static, unused*/, __this, L_1, ___flags, /*hidden argument*/&MonoPropertyInfo_get_property_info_m8184_MethodInfo);
		int32_t L_2 = (__this->___cached_3);
		__this->___cached_3 = ((int32_t)((int32_t)L_2|(int32_t)___flags));
	}

IL_0026:
	{
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern MethodInfo MonoProperty_get_Attributes_m8192_MethodInfo;
extern "C" int32_t MonoProperty_get_Attributes_m8192 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8191(__this, 1, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___attrs_4);
		return L_1;
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern MethodInfo MonoProperty_get_CanRead_m8193_MethodInfo;
extern "C" bool MonoProperty_get_CanRead_m8193 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8191(__this, 2, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		MethodInfo_t871 * L_1 = (L_0->___get_method_2);
		return ((((int32_t)((((Object_t*)(MethodInfo_t871 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern MethodInfo MonoProperty_get_CanWrite_m8194_MethodInfo;
extern "C" bool MonoProperty_get_CanWrite_m8194 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8191(__this, 4, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		MethodInfo_t871 * L_1 = (L_0->___set_method_3);
		return ((((int32_t)((((Object_t*)(MethodInfo_t871 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C" Type_t * MonoProperty_get_PropertyType_m8195 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	ParameterInfoU5BU5D_t887* V_0 = {0};
	{
		MonoProperty_CachePropertyInfo_m8191(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		MethodInfo_t871 * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		MonoPropertyInfo_t1512 * L_2 = &(__this->___info_2);
		NullCheck(L_2);
		MethodInfo_t871 * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m4310_MethodInfo, L_3);
		return L_4;
	}

IL_0025:
	{
		MonoPropertyInfo_t1512 * L_5 = &(__this->___info_2);
		NullCheck(L_5);
		MethodInfo_t871 * L_6 = (L_5->___set_method_3);
		NullCheck(L_6);
		ParameterInfoU5BU5D_t887* L_7 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, L_6);
		V_0 = L_7;
		NullCheck(V_0);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, ((int32_t)((int32_t)(((int32_t)(((Array_t *)V_0)->max_length)))-(int32_t)1)));
		int32_t L_8 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)V_0)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_8)));
		return L_9;
	}
}
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C" Type_t * MonoProperty_get_ReflectedType_m8196 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8191(__this, 8, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern MethodInfo MonoProperty_get_DeclaringType_m8197_MethodInfo;
extern "C" Type_t * MonoProperty_get_DeclaringType_m8197 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8191(__this, ((int32_t)16), /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.String System.Reflection.MonoProperty::get_Name()
extern "C" String_t* MonoProperty_get_Name_m8198 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8191(__this, ((int32_t)32), /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___name_1);
		return L_1;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern MethodInfo MonoProperty_GetAccessors_m8199_MethodInfo;
extern TypeInfo* MethodInfoU5BU5D_t885_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t885* MonoProperty_GetAccessors_m8199 (MonoProperty_t1513 * __this, bool ___nonPublic, MethodInfo* method)
{
	static bool MonoProperty_GetAccessors_m8199_init;
	if (!MonoProperty_GetAccessors_m8199_init)
	{
		MethodInfoU5BU5D_t885_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodInfoU5BU5D_t885_0_0_0);
		MonoProperty_GetAccessors_m8199_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t885* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		MonoProperty_CachePropertyInfo_m8191(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		MethodInfo_t871 * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		if (___nonPublic)
		{
			goto IL_002d;
		}
	}
	{
		MonoPropertyInfo_t1512 * L_2 = &(__this->___info_2);
		NullCheck(L_2);
		MethodInfo_t871 * L_3 = (L_2->___set_method_3);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m8069_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		V_1 = 1;
	}

IL_002f:
	{
		MonoPropertyInfo_t1512 * L_5 = &(__this->___info_2);
		NullCheck(L_5);
		MethodInfo_t871 * L_6 = (L_5->___get_method_2);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		if (___nonPublic)
		{
			goto IL_0051;
		}
	}
	{
		MonoPropertyInfo_t1512 * L_7 = &(__this->___info_2);
		NullCheck(L_7);
		MethodInfo_t871 * L_8 = (L_7->___get_method_2);
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m8069_MethodInfo, L_8);
		if (!L_9)
		{
			goto IL_0053;
		}
	}

IL_0051:
	{
		V_0 = 1;
	}

IL_0053:
	{
		V_2 = ((MethodInfoU5BU5D_t885*)SZArrayNew(MethodInfoU5BU5D_t885_il2cpp_TypeInfo_var, ((int32_t)((int32_t)V_0+(int32_t)V_1))));
		V_3 = 0;
		if (!V_1)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)((int32_t)L_10+(int32_t)1));
		MonoPropertyInfo_t1512 * L_11 = &(__this->___info_2);
		NullCheck(L_11);
		MethodInfo_t871 * L_12 = (L_11->___set_method_3);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, L_10);
		ArrayElementTypeCheck (V_2, L_12);
		*((MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_10)) = (MethodInfo_t871 *)L_12;
	}

IL_0073:
	{
		if (!V_0)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)((int32_t)L_13+(int32_t)1));
		MonoPropertyInfo_t1512 * L_14 = &(__this->___info_2);
		NullCheck(L_14);
		MethodInfo_t871 * L_15 = (L_14->___get_method_2);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, L_13);
		ArrayElementTypeCheck (V_2, L_15);
		*((MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_13)) = (MethodInfo_t871 *)L_15;
	}

IL_0088:
	{
		return V_2;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t871 * MonoProperty_GetGetMethod_m8200 (MonoProperty_t1513 * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8191(__this, 2, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		MethodInfo_t871 * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		if (___nonPublic)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t1512 * L_2 = &(__this->___info_2);
		NullCheck(L_2);
		MethodInfo_t871 * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m8069_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t1512 * L_5 = &(__this->___info_2);
		NullCheck(L_5);
		MethodInfo_t871 * L_6 = (L_5->___get_method_2);
		return L_6;
	}

IL_0035:
	{
		return (MethodInfo_t871 *)NULL;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern MethodInfo MonoProperty_GetIndexParameters_m8201_MethodInfo;
extern TypeInfo* ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t887* MonoProperty_GetIndexParameters_m8201 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	static bool MonoProperty_GetIndexParameters_m8201_init;
	if (!MonoProperty_GetIndexParameters_m8201_init)
	{
		ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t887_0_0_0);
		MonoProperty_GetIndexParameters_m8201_init = true;
	}
	ParameterInfoU5BU5D_t887* V_0 = {0};
	ParameterInfoU5BU5D_t887* V_1 = {0};
	int32_t V_2 = 0;
	ParameterInfo_t888 * V_3 = {0};
	{
		MonoProperty_CachePropertyInfo_m8191(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		MethodInfo_t871 * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		MonoPropertyInfo_t1512 * L_2 = &(__this->___info_2);
		NullCheck(L_2);
		MethodInfo_t871 * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		ParameterInfoU5BU5D_t887* L_4 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		MonoPropertyInfo_t1512 * L_5 = &(__this->___info_2);
		NullCheck(L_5);
		MethodInfo_t871 * L_6 = (L_5->___set_method_3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		MonoPropertyInfo_t1512 * L_7 = &(__this->___info_2);
		NullCheck(L_7);
		MethodInfo_t871 * L_8 = (L_7->___set_method_3);
		NullCheck(L_8);
		ParameterInfoU5BU5D_t887* L_9 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, L_8);
		V_1 = L_9;
		NullCheck(V_1);
		V_0 = ((ParameterInfoU5BU5D_t887*)SZArrayNew(ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)V_1)->max_length)))-(int32_t)1))));
		NullCheck(V_0);
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)V_1, (Array_t *)(Array_t *)V_0, (((int32_t)(((Array_t *)V_0)->max_length))), /*hidden argument*/&Array_Copy_m6432_MethodInfo);
		goto IL_0063;
	}

IL_005c:
	{
		return ((ParameterInfoU5BU5D_t887*)SZArrayNew(ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var, 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		int32_t L_10 = V_2;
		V_3 = (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_10));
		ParameterInfo_t888 * L_11 = (ParameterInfo_t888 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t888_il2cpp_TypeInfo));
		ParameterInfo__ctor_m8216(L_11, V_3, __this, /*hidden argument*/&ParameterInfo__ctor_m8216_MethodInfo);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		ArrayElementTypeCheck (V_0, L_11);
		*((ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, V_2)) = (ParameterInfo_t888 *)L_11;
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_0079:
	{
		NullCheck(V_0);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		return V_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t871 * MonoProperty_GetSetMethod_m8202 (MonoProperty_t1513 * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8191(__this, 4, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8191_MethodInfo);
		MonoPropertyInfo_t1512 * L_0 = &(__this->___info_2);
		NullCheck(L_0);
		MethodInfo_t871 * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		if (___nonPublic)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t1512 * L_2 = &(__this->___info_2);
		NullCheck(L_2);
		MethodInfo_t871 * L_3 = (L_2->___set_method_3);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m8069_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t1512 * L_5 = &(__this->___info_2);
		NullCheck(L_5);
		MethodInfo_t871 * L_6 = (L_5->___set_method_3);
		return L_6;
	}

IL_0035:
	{
		return (MethodInfo_t871 *)NULL;
	}
}
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoProperty_IsDefined_m8203_MethodInfo;
extern "C" bool MonoProperty_IsDefined_m8203 (MonoProperty_t1513 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		bool L_0 = MonoCustomAttrs_IsDefined_m9926(NULL /*static, unused*/, __this, ___attributeType, 0, /*hidden argument*/&MonoCustomAttrs_IsDefined_m9926_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoProperty_GetCustomAttributes_m8204_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoProperty_GetCustomAttributes_m8204 (MonoProperty_t1513 * __this, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9925(NULL /*static, unused*/, __this, 0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoProperty_GetCustomAttributes_m8205_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoProperty_GetCustomAttributes_m8205 (MonoProperty_t1513 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, 0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_0;
	}
}
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern MethodInfo MonoProperty_CreateGetterDelegate_m8206_MethodInfo;
extern TypeInfo* TypeU5BU5D_t138_il2cpp_TypeInfo_var;
extern "C" GetterAdapter_t1515 * MonoProperty_CreateGetterDelegate_m8206 (Object_t * __this /* static, unused */, MethodInfo_t871 * ___method, MethodInfo* method)
{
	static bool MonoProperty_CreateGetterDelegate_m8206_init;
	if (!MonoProperty_CreateGetterDelegate_m8206_init)
	{
		TypeU5BU5D_t138_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t138_0_0_0);
		MonoProperty_CreateGetterDelegate_m8206_init = true;
	}
	TypeU5BU5D_t138* V_0 = {0};
	Type_t * V_1 = {0};
	Object_t * V_2 = {0};
	MethodInfo_t871 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		NullCheck(___method);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m5544_MethodInfo, ___method);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		TypeU5BU5D_t138* L_1 = ((TypeU5BU5D_t138*)SZArrayNew(TypeU5BU5D_t138_il2cpp_TypeInfo_var, 1));
		NullCheck(___method);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m4310_MethodInfo, ___method);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_1, 0)) = (Type_t *)L_2;
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&StaticGetter_1_t1517_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		V_4 = L_3;
		V_5 = (String_t*) &_stringLiteral1796;
		goto IL_0059;
	}

IL_002d:
	{
		TypeU5BU5D_t138* L_4 = ((TypeU5BU5D_t138*)SZArrayNew(TypeU5BU5D_t138_il2cpp_TypeInfo_var, 2));
		NullCheck(___method);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5530_MethodInfo, ___method);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		TypeU5BU5D_t138* L_6 = L_4;
		NullCheck(___method);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m4310_MethodInfo, ___method);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 1)) = (Type_t *)L_7;
		V_0 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Getter_2_t1516_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		V_4 = L_8;
		V_5 = (String_t*) &_stringLiteral1797;
	}

IL_0059:
	{
		NullCheck(V_4);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t138* >::Invoke(&Type_MakeGenericType_m5553_MethodInfo, V_4, V_0);
		V_1 = L_9;
		Delegate_t494 * L_10 = Delegate_CreateDelegate_m6328(NULL /*static, unused*/, V_1, ___method, 0, /*hidden argument*/&Delegate_CreateDelegate_m6328_MethodInfo);
		V_2 = L_10;
		if (V_2)
		{
			goto IL_0074;
		}
	}
	{
		MethodAccessException_t1815 * L_11 = (MethodAccessException_t1815 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodAccessException_t1815_il2cpp_TypeInfo));
		MethodAccessException__ctor_m9897(L_11, /*hidden argument*/&MethodAccessException__ctor_m9897_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_12 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&MonoProperty_t1513_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_12);
		MethodInfo_t871 * L_13 = (MethodInfo_t871 *)VirtFuncInvoker2< MethodInfo_t871 *, String_t*, int32_t >::Invoke(&Type_GetMethod_m6502_MethodInfo, L_12, V_5, ((int32_t)40));
		V_3 = L_13;
		NullCheck(V_3);
		MethodInfo_t871 * L_14 = (MethodInfo_t871 *)VirtFuncInvoker1< MethodInfo_t871 *, TypeU5BU5D_t138* >::Invoke(&MethodInfo_MakeGenericMethod_m8077_MethodInfo, V_3, V_0);
		V_3 = L_14;
		Type_t * L_15 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&GetterAdapter_t1515_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		Delegate_t494 * L_16 = Delegate_CreateDelegate_m6327(NULL /*static, unused*/, L_15, V_2, V_3, 1, /*hidden argument*/&Delegate_CreateDelegate_m6327_MethodInfo);
		return ((GetterAdapter_t1515 *)Castclass(L_16, InitializedTypeInfo(&GetterAdapter_t1515_il2cpp_TypeInfo)));
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern MethodInfo MonoProperty_GetValue_m8207_MethodInfo;
extern "C" Object_t * MonoProperty_GetValue_m8207 (MonoProperty_t1513 * __this, Object_t * ___obj, ObjectU5BU5D_t137* ___index, MethodInfo* method)
{
	{
		if (!___index)
		{
			goto IL_0008;
		}
	}
	{
		NullCheck(___index);
		if ((((int32_t)(((Array_t *)___index)->max_length))))
		{
			goto IL_0008;
		}
	}

IL_0008:
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1115 *, ObjectU5BU5D_t137*, CultureInfo_t791 * >::Invoke(&MonoProperty_GetValue_m8208_MethodInfo, __this, ___obj, 0, (Binder_t1115 *)NULL, ___index, (CultureInfo_t791 *)NULL);
		return L_0;
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoProperty_GetValue_m8208 (MonoProperty_t1513 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___index, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	Object_t * V_0 = {0};
	MethodInfo_t871 * V_1 = {0};
	SecurityException_t1726 * V_2 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = NULL;
		MethodInfo_t871 * L_0 = (MethodInfo_t871 *)VirtFuncInvoker1< MethodInfo_t871 *, bool >::Invoke(&MonoProperty_GetGetMethod_m8200_MethodInfo, __this, 1);
		V_1 = L_0;
		if (V_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8198_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m169(NULL /*static, unused*/, (String_t*) &_stringLiteral1798, L_1, (String_t*) &_stringLiteral386, /*hidden argument*/&String_Concat_m169_MethodInfo);
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_3, L_2, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			if (!___index)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			NullCheck(___index);
			if ((((int32_t)(((Array_t *)___index)->max_length))))
			{
				goto IL_0041;
			}
		}

IL_0032:
		{
			NullCheck(V_1);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1115 *, ObjectU5BU5D_t137*, CultureInfo_t791 * >::Invoke(&MethodBase_Invoke_m10333_MethodInfo, V_1, ___obj, ___invokeAttr, ___binder, (ObjectU5BU5D_t137*)(ObjectU5BU5D_t137*)NULL, ___culture);
			V_0 = L_4;
			goto IL_004f;
		}

IL_0041:
		{
			NullCheck(V_1);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1115 *, ObjectU5BU5D_t137*, CultureInfo_t791 * >::Invoke(&MethodBase_Invoke_m10333_MethodInfo, V_1, ___obj, ___invokeAttr, ___binder, ___index, ___culture);
			V_0 = L_5;
		}

IL_004f:
		{
			// IL_004f: leave.s IL_005b
			goto IL_005b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&SecurityException_t1726_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0051;
		throw e;
	}

IL_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((SecurityException_t1726 *)__exception_local);
		TargetInvocationException_t1523 * L_6 = (TargetInvocationException_t1523 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t1523_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m8243(L_6, V_2, /*hidden argument*/&TargetInvocationException__ctor_m8243_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
		// IL_0059: leave.s IL_005b
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		return V_0;
	}
}
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoProperty_SetValue_m8209_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" void MonoProperty_SetValue_m8209 (MonoProperty_t1513 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___index, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	static bool MonoProperty_SetValue_m8209_init;
	if (!MonoProperty_SetValue_m8209_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		MonoProperty_SetValue_m8209_init = true;
	}
	MethodInfo_t871 * V_0 = {0};
	ObjectU5BU5D_t137* V_1 = {0};
	int32_t V_2 = 0;
	{
		MethodInfo_t871 * L_0 = (MethodInfo_t871 *)VirtFuncInvoker1< MethodInfo_t871 *, bool >::Invoke(&MonoProperty_GetSetMethod_m8202_MethodInfo, __this, 1);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8198_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m169(NULL /*static, unused*/, (String_t*) &_stringLiteral1799, L_1, (String_t*) &_stringLiteral386, /*hidden argument*/&String_Concat_m169_MethodInfo);
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_3, L_2, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		if (!___index)
		{
			goto IL_0030;
		}
	}
	{
		NullCheck(___index);
		if ((((int32_t)(((Array_t *)___index)->max_length))))
		{
			goto IL_003d;
		}
	}

IL_0030:
	{
		ObjectU5BU5D_t137* L_4 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, ___value);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0)) = (Object_t *)___value;
		V_1 = L_4;
		goto IL_0058;
	}

IL_003d:
	{
		NullCheck(___index);
		V_2 = (((int32_t)(((Array_t *)___index)->max_length)));
		V_1 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, ((int32_t)((int32_t)V_2+(int32_t)1))));
		NullCheck(___index);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4063_MethodInfo, ___index, (Array_t *)(Array_t *)V_1, 0);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		ArrayElementTypeCheck (V_1, ___value);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_1, V_2)) = (Object_t *)___value;
	}

IL_0058:
	{
		NullCheck(V_0);
		VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1115 *, ObjectU5BU5D_t137*, CultureInfo_t791 * >::Invoke(&MethodBase_Invoke_m10333_MethodInfo, V_0, ___obj, ___invokeAttr, ___binder, V_1, ___culture);
		return;
	}
}
// System.String System.Reflection.MonoProperty::ToString()
extern "C" String_t* MonoProperty_ToString_m8210 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoProperty_get_PropertyType_m8195_MethodInfo, __this);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8198_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m169(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral186, L_2, /*hidden argument*/&String_Concat_m169_MethodInfo);
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern MethodInfo MonoProperty_GetOptionalCustomModifiers_m8211_MethodInfo;
extern "C" TypeU5BU5D_t138* MonoProperty_GetOptionalCustomModifiers_m8211 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	TypeU5BU5D_t138* V_0 = {0};
	{
		TypeU5BU5D_t138* L_0 = MonoPropertyInfo_GetTypeModifiers_m8185(NULL /*static, unused*/, __this, 1, /*hidden argument*/&MonoPropertyInfo_GetTypeModifiers_m8185_MethodInfo);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		return (((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3);
	}

IL_0011:
	{
		return V_0;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern MethodInfo MonoProperty_GetRequiredCustomModifiers_m8212_MethodInfo;
extern "C" TypeU5BU5D_t138* MonoProperty_GetRequiredCustomModifiers_m8212 (MonoProperty_t1513 * __this, MethodInfo* method)
{
	TypeU5BU5D_t138* V_0 = {0};
	{
		TypeU5BU5D_t138* L_0 = MonoPropertyInfo_GetTypeModifiers_m8185(NULL /*static, unused*/, __this, 0, /*hidden argument*/&MonoPropertyInfo_GetTypeModifiers_m8185_MethodInfo);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		return (((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3);
	}

IL_0011:
	{
		return V_0;
	}
}
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoProperty_GetObjectData_m8213_MethodInfo;
extern "C" void MonoProperty_GetObjectData_m8213 (MonoProperty_t1513 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8198_MethodInfo, __this);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoProperty_get_ReflectedType_m8196_MethodInfo, __this);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_ToString_m8210_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8059(NULL /*static, unused*/, ___info, L_0, L_1, L_2, ((int32_t)16), /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8059_MethodInfo);
		return;
	}
}
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParameterAttributes_t1518_il2cpp_TypeInfo;
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshal.h"
// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttribute.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttribute.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttribute.h"
// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h"
extern TypeInfo ParameterBuilder_t1482_il2cpp_TypeInfo;
extern TypeInfo Char_t46_il2cpp_TypeInfo;
extern TypeInfo InAttribute_t1268_il2cpp_TypeInfo;
extern TypeInfo OptionalAttribute_t1270_il2cpp_TypeInfo;
extern TypeInfo OutAttribute_t1265_il2cpp_TypeInfo;
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilderMethodDeclarations.h"
// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttributeMethodDeclarations.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshalMethodDeclarations.h"
extern Il2CppType Void_t42_0_0_0;
extern MethodInfo ParameterInfo_get_Attributes_m8218_MethodInfo;
extern MethodInfo Object__ctor_m127_MethodInfo;
extern MethodInfo ParameterBuilder_get_Name_m7926_MethodInfo;
extern MethodInfo ParameterBuilder_get_Position_m7927_MethodInfo;
extern MethodInfo ParameterBuilder_get_Attributes_m7925_MethodInfo;
extern MethodInfo ParameterInfo_get_Name_m8224_MethodInfo;
extern MethodInfo ParameterInfo_get_Position_m8225_MethodInfo;
extern MethodInfo Type_GetElementType_m5620_MethodInfo;
extern MethodInfo Type_get_HasElementType_m6474_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m5574_MethodInfo;
extern MethodInfo Type_get_Namespace_m5531_MethodInfo;
extern MethodInfo String_op_Equality_m145_MethodInfo;
extern MethodInfo Type_get_FullName_m5572_MethodInfo;
extern MethodInfo ParameterInfo_get_IsRetval_m8222_MethodInfo;
extern MethodInfo String_Concat_m591_MethodInfo;
extern MethodInfo String_Concat_m140_MethodInfo;
extern MethodInfo ParameterInfo_get_IsIn_m8219_MethodInfo;
extern MethodInfo ParameterInfo_get_IsOut_m8221_MethodInfo;
extern MethodInfo ParameterInfo_get_IsOptional_m8220_MethodInfo;
extern MethodInfo InAttribute__ctor_m6545_MethodInfo;
extern MethodInfo OptionalAttribute__ctor_m6547_MethodInfo;
extern MethodInfo OutAttribute__ctor_m6541_MethodInfo;
extern MethodInfo UnmanagedMarshal_ToMarshalAsAttribute_m7976_MethodInfo;


// System.Void System.Reflection.ParameterInfo::.ctor()
extern MethodInfo ParameterInfo__ctor_m8214_MethodInfo;
extern "C" void ParameterInfo__ctor_m8214 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern MethodInfo ParameterInfo__ctor_m8215_MethodInfo;
extern "C" void ParameterInfo__ctor_m8215 (ParameterInfo_t888 * __this, ParameterBuilder_t1482 * ___pb, Type_t * ___type, MemberInfo_t870 * ___member, int32_t ___position, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___ClassImpl_0 = ___type;
		__this->___MemberImpl_2 = ___member;
		if (!___pb)
		{
			goto IL_003f;
		}
	}
	{
		NullCheck(___pb);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterBuilder_get_Name_m7926_MethodInfo, ___pb);
		__this->___NameImpl_3 = L_0;
		NullCheck(___pb);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterBuilder_get_Position_m7927_MethodInfo, ___pb);
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_1-(int32_t)1));
		NullCheck(___pb);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterBuilder_get_Attributes_m7925_MethodInfo, ___pb);
		__this->___AttrsImpl_5 = L_2;
		goto IL_0057;
	}

IL_003f:
	{
		__this->___NameImpl_3 = (String_t*)NULL;
		__this->___PositionImpl_4 = ((int32_t)((int32_t)___position-(int32_t)1));
		__this->___AttrsImpl_5 = 0;
	}

IL_0057:
	{
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C" void ParameterInfo__ctor_m8216 (ParameterInfo_t888 * __this, ParameterInfo_t888 * ___pinfo, MemberInfo_t870 * ___member, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		NullCheck(___pinfo);
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, ___pinfo);
		__this->___ClassImpl_0 = L_0;
		__this->___MemberImpl_2 = ___member;
		NullCheck(___pinfo);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterInfo_get_Name_m8224_MethodInfo, ___pinfo);
		__this->___NameImpl_3 = L_1;
		NullCheck(___pinfo);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Position_m8225_MethodInfo, ___pinfo);
		__this->___PositionImpl_4 = L_2;
		NullCheck(___pinfo);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8218_MethodInfo, ___pinfo);
		__this->___AttrsImpl_5 = L_3;
		return;
	}
}
// System.String System.Reflection.ParameterInfo::ToString()
extern MethodInfo ParameterInfo_ToString_m8217_MethodInfo;
extern "C" String_t* ParameterInfo_ToString_m8217 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	Type_t * V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	int32_t G_B7_0 = 0;
	String_t* G_B10_0 = {0};
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0009:
	{
		NullCheck(V_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, V_0);
		V_0 = L_1;
	}

IL_0010:
	{
		NullCheck(V_0);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6474_MethodInfo, V_0);
		if (L_2)
		{
			goto IL_0009;
		}
	}
	{
		NullCheck(V_0);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m5574_MethodInfo, V_0);
		if (L_3)
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_4 = (__this->___ClassImpl_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Void_t42_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_6 = (__this->___ClassImpl_0);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m5531_MethodInfo, L_6);
		MemberInfo_t870 * L_8 = (__this->___MemberImpl_2);
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5530_MethodInfo, L_8);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m5531_MethodInfo, L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_11 = String_op_Equality_m145(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_1 = G_B7_0;
		if (!V_1)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_12 = (__this->___ClassImpl_0);
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, L_12);
		G_B10_0 = L_13;
		goto IL_0071;
	}

IL_0066:
	{
		Type_t * L_14 = (__this->___ClassImpl_0);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5572_MethodInfo, L_14);
		G_B10_0 = L_15;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_16 = ParameterInfo_get_IsRetval_m8222(__this, /*hidden argument*/&ParameterInfo_get_IsRetval_m8222_MethodInfo);
		if (L_16)
		{
			goto IL_0095;
		}
	}
	{
		uint16_t L_17 = ((int32_t)32);
		Object_t * L_18 = Box(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo), &L_17);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = String_Concat_m591(NULL /*static, unused*/, V_2, L_18, /*hidden argument*/&String_Concat_m591_MethodInfo);
		V_2 = L_19;
		String_t* L_20 = (__this->___NameImpl_3);
		String_t* L_21 = String_Concat_m140(NULL /*static, unused*/, V_2, L_20, /*hidden argument*/&String_Concat_m140_MethodInfo);
		V_2 = L_21;
	}

IL_0095:
	{
		return V_2;
	}
}
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C" Type_t * ParameterInfo_get_ParameterType_m4312 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		return L_0;
	}
}
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C" int32_t ParameterInfo_get_Attributes_m8218 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___AttrsImpl_5);
		return L_0;
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C" bool ParameterInfo_get_IsIn_m8219 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8218_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C" bool ParameterInfo_get_IsOptional_m8220 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8218_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C" bool ParameterInfo_get_IsOut_m8221 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8218_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C" bool ParameterInfo_get_IsRetval_m8222 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8218_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern MethodInfo ParameterInfo_get_Member_m8223_MethodInfo;
extern "C" MemberInfo_t870 * ParameterInfo_get_Member_m8223 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		MemberInfo_t870 * L_0 = (__this->___MemberImpl_2);
		return L_0;
	}
}
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C" String_t* ParameterInfo_get_Name_m8224 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___NameImpl_3);
		return L_0;
	}
}
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C" int32_t ParameterInfo_get_Position_m8225 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___PositionImpl_4);
		return L_0;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo ParameterInfo_GetCustomAttributes_m8226_MethodInfo;
extern "C" ObjectU5BU5D_t137* ParameterInfo_GetCustomAttributes_m8226 (ParameterInfo_t888 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern MethodInfo ParameterInfo_IsDefined_m8227_MethodInfo;
extern "C" bool ParameterInfo_IsDefined_m8227 (ParameterInfo_t888 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		bool L_0 = MonoCustomAttrs_IsDefined_m9926(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_IsDefined_m9926_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern MethodInfo ParameterInfo_GetPseudoCustomAttributes_m8228_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t137* ParameterInfo_GetPseudoCustomAttributes_m8228 (ParameterInfo_t888 * __this, MethodInfo* method)
{
	static bool ParameterInfo_GetPseudoCustomAttributes_m8228_init;
	if (!ParameterInfo_GetPseudoCustomAttributes_m8228_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		ParameterInfo_GetPseudoCustomAttributes_m8228_init = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t137* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = ParameterInfo_get_IsIn_m8219(__this, /*hidden argument*/&ParameterInfo_get_IsIn_m8219_MethodInfo);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_000e:
	{
		bool L_1 = ParameterInfo_get_IsOut_m8221(__this, /*hidden argument*/&ParameterInfo_get_IsOut_m8221_MethodInfo);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_001a:
	{
		bool L_2 = ParameterInfo_get_IsOptional_m8220(__this, /*hidden argument*/&ParameterInfo_get_IsOptional_m8220_MethodInfo);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0026:
	{
		UnmanagedMarshal_t1476 * L_3 = (__this->___marshalAs_6);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0032:
	{
		if (V_0)
		{
			goto IL_0037;
		}
	}
	{
		return (ObjectU5BU5D_t137*)NULL;
	}

IL_0037:
	{
		V_1 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, V_0));
		V_0 = 0;
		bool L_4 = ParameterInfo_get_IsIn_m8219(__this, /*hidden argument*/&ParameterInfo_get_IsIn_m8219_MethodInfo);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		InAttribute_t1268 * L_6 = (InAttribute_t1268 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InAttribute_t1268_il2cpp_TypeInfo));
		InAttribute__ctor_m6545(L_6, /*hidden argument*/&InAttribute__ctor_m6545_MethodInfo);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_5);
		ArrayElementTypeCheck (V_1, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_1, L_5)) = (Object_t *)L_6;
	}

IL_0054:
	{
		bool L_7 = ParameterInfo_get_IsOptional_m8220(__this, /*hidden argument*/&ParameterInfo_get_IsOptional_m8220_MethodInfo);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
		OptionalAttribute_t1270 * L_9 = (OptionalAttribute_t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OptionalAttribute_t1270_il2cpp_TypeInfo));
		OptionalAttribute__ctor_m6547(L_9, /*hidden argument*/&OptionalAttribute__ctor_m6547_MethodInfo);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_8);
		ArrayElementTypeCheck (V_1, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_1, L_8)) = (Object_t *)L_9;
	}

IL_0068:
	{
		bool L_10 = ParameterInfo_get_IsOut_m8221(__this, /*hidden argument*/&ParameterInfo_get_IsOut_m8221_MethodInfo);
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		OutAttribute_t1265 * L_12 = (OutAttribute_t1265 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OutAttribute_t1265_il2cpp_TypeInfo));
		OutAttribute__ctor_m6541(L_12, /*hidden argument*/&OutAttribute__ctor_m6541_MethodInfo);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_11);
		ArrayElementTypeCheck (V_1, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_1, L_11)) = (Object_t *)L_12;
	}

IL_007c:
	{
		UnmanagedMarshal_t1476 * L_13 = (__this->___marshalAs_6);
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		UnmanagedMarshal_t1476 * L_15 = (__this->___marshalAs_6);
		NullCheck(L_15);
		MarshalAsAttribute_t1267 * L_16 = UnmanagedMarshal_ToMarshalAsAttribute_m7976(L_15, /*hidden argument*/&UnmanagedMarshal_ToMarshalAsAttribute_m7976_MethodInfo);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_14);
		ArrayElementTypeCheck (V_1, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_1, L_14)) = (Object_t *)L_16;
	}

IL_0096:
	{
		return V_1;
	}
}
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParameterModifier_t1117_il2cpp_TypeInfo;
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifierMethodDeclarations.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t1117_marshal(const ParameterModifier_t1117& unmarshaled, ParameterModifier_t1117_marshaled& marshaled)
{
	marshaled.____byref_0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.____byref_0);
}
void ParameterModifier_t1117_marshal_back(const ParameterModifier_t1117_marshaled& marshaled, ParameterModifier_t1117& unmarshaled)
{
	unmarshaled.____byref_0 = (BooleanU5BU5D_t650*)il2cpp_codegen_marshal_array_result(&Boolean_t44_il2cpp_TypeInfo, marshaled.____byref_0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t1117_marshal_cleanup(ParameterModifier_t1117_marshaled& marshaled)
{
}
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_Pointer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Pointer_t1519_il2cpp_TypeInfo;
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_PointerMethodDeclarations.h"

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t150_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo NotSupportedException__ctor_m3883_MethodInfo;


// System.Void System.Reflection.Pointer::.ctor()
extern MethodInfo Pointer__ctor_m8229_MethodInfo;
extern "C" void Pointer__ctor_m8229 (Pointer_t1519 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Pointer::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m8230_MethodInfo;
extern "C" void Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m8230 (Pointer_t1519 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1800, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ProcessorArchitecture_t1520_il2cpp_TypeInfo;
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitectureMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyAttributes_t1521_il2cpp_TypeInfo;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributesMethodDeclarations.h"



// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyInfo_t1262_il2cpp_TypeInfo;

extern MethodInfo MemberInfo__ctor_m6526_MethodInfo;
extern MethodInfo PropertyInfo_GetValue_m10334_MethodInfo;
extern MethodInfo PropertyInfo_SetValue_m10335_MethodInfo;


// System.Void System.Reflection.PropertyInfo::.ctor()
extern "C" void PropertyInfo__ctor_m8231 (PropertyInfo_t1262 * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m6526(__this, /*hidden argument*/&MemberInfo__ctor_m6526_MethodInfo);
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes()
// System.Boolean System.Reflection.PropertyInfo::get_CanRead()
// System.Boolean System.Reflection.PropertyInfo::get_CanWrite()
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
extern MethodInfo PropertyInfo_get_MemberType_m8232_MethodInfo;
extern "C" int32_t PropertyInfo_get_MemberType_m8232 (PropertyInfo_t1262 * __this, MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)16));
	}
}
// System.Type System.Reflection.PropertyInfo::get_PropertyType()
// System.Reflection.MethodInfo[] System.Reflection.PropertyInfo::GetAccessors(System.Boolean)
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean)
// System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters()
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean)
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
extern MethodInfo PropertyInfo_GetValue_m8233_MethodInfo;
extern "C" Object_t * PropertyInfo_GetValue_m8233 (PropertyInfo_t1262 * __this, Object_t * ___obj, ObjectU5BU5D_t137* ___index, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1115 *, ObjectU5BU5D_t137*, CultureInfo_t791 * >::Invoke(&PropertyInfo_GetValue_m10334_MethodInfo, __this, ___obj, 0, (Binder_t1115 *)NULL, ___index, (CultureInfo_t791 *)NULL);
		return L_0;
	}
}
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
extern MethodInfo PropertyInfo_SetValue_m8234_MethodInfo;
extern "C" void PropertyInfo_SetValue_m8234 (PropertyInfo_t1262 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t137* ___index, MethodInfo* method)
{
	{
		VirtActionInvoker6< Object_t *, Object_t *, int32_t, Binder_t1115 *, ObjectU5BU5D_t137*, CultureInfo_t791 * >::Invoke(&PropertyInfo_SetValue_m10335_MethodInfo, __this, ___obj, ___value, 0, (Binder_t1115 *)NULL, ___index, (CultureInfo_t791 *)NULL);
		return;
	}
}
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Type[] System.Reflection.PropertyInfo::GetOptionalCustomModifiers()
extern MethodInfo PropertyInfo_GetOptionalCustomModifiers_m8235_MethodInfo;
extern "C" TypeU5BU5D_t138* PropertyInfo_GetOptionalCustomModifiers_m8235 (PropertyInfo_t1262 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		return (((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3);
	}
}
// System.Type[] System.Reflection.PropertyInfo::GetRequiredCustomModifiers()
extern MethodInfo PropertyInfo_GetRequiredCustomModifiers_m8236_MethodInfo;
extern "C" TypeU5BU5D_t138* PropertyInfo_GetRequiredCustomModifiers_m8236 (PropertyInfo_t1262 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		return (((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3);
	}
}
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPair.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StrongNameKeyPair_t1490_il2cpp_TypeInfo;
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPairMethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo ByteU5BU5D_t13_il2cpp_TypeInfo;
extern TypeInfo Byte_t41_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t13_0_0_0;
extern MethodInfo SerializationInfo_GetValue_m3880_MethodInfo;
extern MethodInfo SerializationInfo_GetString_m3892_MethodInfo;
extern MethodInfo SerializationInfo_GetBoolean_m3882_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3877_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3895_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3878_MethodInfo;


// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo StrongNameKeyPair__ctor_m8237_MethodInfo;
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void StrongNameKeyPair__ctor_m8237 (StrongNameKeyPair_t1490 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	static bool StrongNameKeyPair__ctor_m8237_init;
	if (!StrongNameKeyPair__ctor_m8237_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		StrongNameKeyPair__ctor_m8237_init = true;
	}
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t13_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		Object_t * L_1 = SerializationInfo_GetValue_m3880(___info, (String_t*) &_stringLiteral1801, L_0, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->____publicKey_0 = ((ByteU5BU5D_t13*)Castclass(L_1, ByteU5BU5D_t13_il2cpp_TypeInfo_var));
		NullCheck(___info);
		String_t* L_2 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1802, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->____keyPairContainer_1 = L_2;
		NullCheck(___info);
		bool L_3 = SerializationInfo_GetBoolean_m3882(___info, (String_t*) &_stringLiteral1803, /*hidden argument*/&SerializationInfo_GetBoolean_m3882_MethodInfo);
		__this->____keyPairExported_2 = L_3;
		Type_t * L_4 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t13_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		Object_t * L_5 = SerializationInfo_GetValue_m3880(___info, (String_t*) &_stringLiteral1804, L_4, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->____keyPairArray_3 = ((ByteU5BU5D_t13*)Castclass(L_5, ByteU5BU5D_t13_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m8238_MethodInfo;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m8238 (StrongNameKeyPair_t1490 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		ByteU5BU5D_t13* L_0 = (__this->____publicKey_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t13_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral1801, (Object_t *)(Object_t *)L_0, L_1, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		String_t* L_2 = (__this->____keyPairContainer_1);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1802, L_2, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		bool L_3 = (__this->____keyPairExported_2);
		NullCheck(___info);
		SerializationInfo_AddValue_m3878(___info, (String_t*) &_stringLiteral1803, L_3, /*hidden argument*/&SerializationInfo_AddValue_m3878_MethodInfo);
		ByteU5BU5D_t13* L_4 = (__this->____keyPairArray_3);
		Type_t * L_5 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t13_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral1804, (Object_t *)(Object_t *)L_4, L_5, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern MethodInfo StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m8239_MethodInfo;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m8239 (StrongNameKeyPair_t1490 * __this, Object_t * ___sender, MethodInfo* method)
{
	{
		return;
	}
}
// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TargetException_t1522_il2cpp_TypeInfo;
// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetExceptionMethodDeclarations.h"

// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Locale_GetText_m6561_MethodInfo;
extern MethodInfo Exception__ctor_m3900_MethodInfo;
extern MethodInfo Exception__ctor_m5537_MethodInfo;


// System.Void System.Reflection.TargetException::.ctor()
extern MethodInfo TargetException__ctor_m8240_MethodInfo;
extern "C" void TargetException__ctor_m8240 (TargetException_t1522 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1805, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		Exception__ctor_m3900(__this, L_0, /*hidden argument*/&Exception__ctor_m3900_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.String)
extern MethodInfo TargetException__ctor_m8241_MethodInfo;
extern "C" void TargetException__ctor_m8241 (TargetException_t1522 * __this, String_t* ___message, MethodInfo* method)
{
	{
		Exception__ctor_m3900(__this, ___message, /*hidden argument*/&Exception__ctor_m3900_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetException__ctor_m8242_MethodInfo;
extern "C" void TargetException__ctor_m8242 (TargetException_t1522 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		Exception__ctor_m5537(__this, ___info, ___context, /*hidden argument*/&Exception__ctor_m5537_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Exception__ctor_m5536_MethodInfo;


// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m8243 (TargetInvocationException_t1523 * __this, Exception_t140 * ___inner, MethodInfo* method)
{
	{
		Exception__ctor_m5536(__this, (String_t*) &_stringLiteral1806, ___inner, /*hidden argument*/&Exception__ctor_m5536_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetInvocationException__ctor_m8244_MethodInfo;
extern "C" void TargetInvocationException__ctor_m8244 (TargetInvocationException_t1523 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___sc, MethodInfo* method)
{
	{
		Exception__ctor_m5537(__this, ___info, ___sc, /*hidden argument*/&Exception__ctor_m5537_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.TargetParameterCountException::.ctor()
extern MethodInfo TargetParameterCountException__ctor_m8245_MethodInfo;
extern "C" void TargetParameterCountException__ctor_m8245 (TargetParameterCountException_t1524 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1807, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		Exception__ctor_m3900(__this, L_0, /*hidden argument*/&Exception__ctor_m3900_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
extern "C" void TargetParameterCountException__ctor_m8246 (TargetParameterCountException_t1524 * __this, String_t* ___message, MethodInfo* method)
{
	{
		Exception__ctor_m3900(__this, ___message, /*hidden argument*/&Exception__ctor_m3900_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetParameterCountException__ctor_m8247_MethodInfo;
extern "C" void TargetParameterCountException__ctor_m8247 (TargetParameterCountException_t1524 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		Exception__ctor_m5537(__this, ___info, ___context, /*hidden argument*/&Exception__ctor_m5537_MethodInfo);
		return;
	}
}
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeAttributes_t1525_il2cpp_TypeInfo;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributesMethodDeclarations.h"



// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NeutralResourcesLanguageAttribute_t843_il2cpp_TypeInfo;
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo ArgumentNullException_t785_il2cpp_TypeInfo;
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3848_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3869_MethodInfo;


// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
extern MethodInfo NeutralResourcesLanguageAttribute__ctor_m4228_MethodInfo;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m4228 (NeutralResourcesLanguageAttribute_t843 * __this, String_t* ___cultureName, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		if (___cultureName)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1808, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		__this->___culture_0 = ___cultureName;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SatelliteContractVersionAttribute_t839_il2cpp_TypeInfo;
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"

// System.Version
#include "mscorlib_System_Version.h"
extern TypeInfo Version_t637_il2cpp_TypeInfo;
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
extern MethodInfo Version__ctor_m10197_MethodInfo;


// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
extern MethodInfo SatelliteContractVersionAttribute__ctor_m4224_MethodInfo;
extern "C" void SatelliteContractVersionAttribute__ctor_m4224 (SatelliteContractVersionAttribute_t839 * __this, String_t* ___version, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		Version_t637 * L_0 = (Version_t637 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t637_il2cpp_TypeInfo));
		Version__ctor_m10197(L_0, ___version, /*hidden argument*/&Version__ctor_m10197_MethodInfo);
		__this->___ver_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CompilationRelaxations_t1526_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"



// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CompilationRelaxationsAttribute_t845_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
extern MethodInfo CompilationRelaxationsAttribute__ctor_m4230_MethodInfo;
extern "C" void CompilationRelaxationsAttribute__ctor_m4230 (CompilationRelaxationsAttribute_t845 * __this, int32_t ___relaxations, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___relax_0 = ___relaxations;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultDependencyAttribute_t1527_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
extern MethodInfo DefaultDependencyAttribute__ctor_m8248_MethodInfo;
extern "C" void DefaultDependencyAttribute__ctor_m8248 (DefaultDependencyAttribute_t1527 * __this, int32_t ___loadHintArgument, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___hint_0 = ___loadHintArgument;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IsVolatile_t1528_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo LoadHint_t1529_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"



// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StringFreezingAttribute_t1530_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttriMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.StringFreezingAttribute::.ctor()
extern MethodInfo StringFreezingAttribute__ctor_m8249_MethodInfo;
extern "C" void StringFreezingAttribute__ctor_m8249 (StringFreezingAttribute_t1530 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		return;
	}
}
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Cer_t1531_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_CerMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Consistency_t1532_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_ConsistencyMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CriticalFinalizerObject_t1533_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"

extern MethodInfo Object_Finalize_m226_MethodInfo;


// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::.ctor()
extern MethodInfo CriticalFinalizerObject__ctor_m8250_MethodInfo;
extern "C" void CriticalFinalizerObject__ctor_m8250 (CriticalFinalizerObject_t1533 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::Finalize()
extern MethodInfo CriticalFinalizerObject_Finalize_m8251_MethodInfo;
extern "C" void CriticalFinalizerObject_Finalize_m8251 (CriticalFinalizerObject_t1533 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		// IL_0000: leave.s IL_0009
		leaveInstructions[0] = 0x9; // 1
		THROW_SENTINEL(IL_0009);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0002;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0002;
	}

IL_0002:
	{ // begin finally (depth: 1)
		Object_Finalize_m226(__this, /*hidden argument*/&Object_Finalize_m226_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x9:
				goto IL_0009;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0009:
	{
		return;
	}
}
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReliabilityContractAttribute_t1534_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContMethodDeclarations.h"



// System.Void System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::.ctor(System.Runtime.ConstrainedExecution.Consistency,System.Runtime.ConstrainedExecution.Cer)
extern MethodInfo ReliabilityContractAttribute__ctor_m8252_MethodInfo;
extern "C" void ReliabilityContractAttribute__ctor_m8252 (ReliabilityContractAttribute_t1534 * __this, int32_t ___consistencyGuarantee, int32_t ___cer, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___consistency_0 = ___consistencyGuarantee;
		__this->___cer_1 = ___cer;
		return;
	}
}
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArguments.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActivationArguments_t1535_il2cpp_TypeInfo;
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArgumentsMethodDeclarations.h"



// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CallingConvention_t1536_il2cpp_TypeInfo;
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConventionMethodDeclarations.h"



// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharSet_t1537_il2cpp_TypeInfo;
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSetMethodDeclarations.h"



// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ClassInterfaceAttribute_t1538_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttribMethodDeclarations.h"

// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"


// System.Void System.Runtime.InteropServices.ClassInterfaceAttribute::.ctor(System.Runtime.InteropServices.ClassInterfaceType)
extern MethodInfo ClassInterfaceAttribute__ctor_m8253_MethodInfo;
extern "C" void ClassInterfaceAttribute__ctor_m8253 (ClassInterfaceAttribute_t1538 * __this, int32_t ___classInterfaceType, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___ciType_0 = ___classInterfaceType;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ClassInterfaceType_t1539_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComDefaultInterfaceAttribute_t1540_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceAMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.ComDefaultInterfaceAttribute::.ctor(System.Type)
extern MethodInfo ComDefaultInterfaceAttribute__ctor_m8254_MethodInfo;
extern "C" void ComDefaultInterfaceAttribute__ctor_m8254 (ComDefaultInterfaceAttribute_t1540 * __this, Type_t * ___defaultInterface, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->____type_0 = ___defaultInterface;
		return;
	}
}
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComInterfaceType_t1541_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispIdAttribute_t1542_il2cpp_TypeInfo;
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.DispIdAttribute::.ctor(System.Int32)
extern MethodInfo DispIdAttribute__ctor_m8255_MethodInfo;
extern "C" void DispIdAttribute__ctor_m8255 (DispIdAttribute_t1542 * __this, int32_t ___dispId, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___id_0 = ___dispId;
		return;
	}
}
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GCHandle_t1543_il2cpp_TypeInfo;
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
extern TypeInfo InvalidOperationException_t784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern MethodInfo GCHandle_get_IsAllocated_m8257_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m3860_MethodInfo;
extern MethodInfo GCHandle_GetTarget_m8261_MethodInfo;
extern MethodInfo GCHandle_GetTargetHandle_m8262_MethodInfo;
extern MethodInfo GCHandle__ctor_m8256_MethodInfo;
extern MethodInfo GCHandle_FreeHandle_m8263_MethodInfo;
extern MethodInfo Int32_GetHashCode_m5580_MethodInfo;


// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" void GCHandle__ctor_m8256 (GCHandle_t1543 * __this, Object_t * ___value, int32_t ___type, MethodInfo* method)
{
	{
		if ((((int32_t)___type) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		if ((((int32_t)___type) <= ((int32_t)3)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		___type = 2;
	}

IL_000d:
	{
		int32_t L_0 = GCHandle_GetTargetHandle_m8262(NULL /*static, unused*/, ___value, 0, ___type, /*hidden argument*/&GCHandle_GetTargetHandle_m8262_MethodInfo);
		__this->___handle_0 = L_0;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m8257 (GCHandle_t1543 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern MethodInfo GCHandle_get_Target_m8258_MethodInfo;
extern "C" Object_t * GCHandle_get_Target_m8258 (GCHandle_t1543 * __this, MethodInfo* method)
{
	{
		bool L_0 = GCHandle_get_IsAllocated_m8257(__this, /*hidden argument*/&GCHandle_get_IsAllocated_m8257_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1809, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		InvalidOperationException_t784 * L_2 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_2, L_1, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->___handle_0);
		Object_t * L_4 = GCHandle_GetTarget_m8261(NULL /*static, unused*/, L_3, /*hidden argument*/&GCHandle_GetTarget_m8261_MethodInfo);
		return L_4;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern MethodInfo GCHandle_Alloc_m8259_MethodInfo;
extern "C" GCHandle_t1543  GCHandle_Alloc_m8259 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, MethodInfo* method)
{
	{
		GCHandle_t1543  L_0 = {0};
		GCHandle__ctor_m8256(&L_0, ___value, ___type, /*hidden argument*/&GCHandle__ctor_m8256_MethodInfo);
		return L_0;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern MethodInfo GCHandle_Free_m8260_MethodInfo;
extern "C" void GCHandle_Free_m8260 (GCHandle_t1543 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		GCHandle_FreeHandle_m8263(NULL /*static, unused*/, L_0, /*hidden argument*/&GCHandle_FreeHandle_m8263_MethodInfo);
		__this->___handle_0 = 0;
		return;
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C" Object_t * GCHandle_GetTarget_m8261 (Object_t * __this /* static, unused */, int32_t ___handle, MethodInfo* method)
{
	typedef Object_t * (*GCHandle_GetTarget_m8261_ftn) (int32_t);
	static GCHandle_GetTarget_m8261_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTarget_m8261_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(___handle);
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m8262 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, MethodInfo* method)
{
	typedef int32_t (*GCHandle_GetTargetHandle_m8262_ftn) (Object_t *, int32_t, int32_t);
	static GCHandle_GetTargetHandle_m8262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTargetHandle_m8262_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(___obj, ___handle, ___type);
}
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m8263 (Object_t * __this /* static, unused */, int32_t ___handle, MethodInfo* method)
{
	typedef void (*GCHandle_FreeHandle_m8263_ftn) (int32_t);
	static GCHandle_FreeHandle_m8263_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_FreeHandle_m8263_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(___handle);
}
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern MethodInfo GCHandle_Equals_m8264_MethodInfo;
extern "C" bool GCHandle_Equals_m8264 (GCHandle_t1543 * __this, Object_t * ___o, MethodInfo* method)
{
	GCHandle_t1543  V_0 = {0};
	{
		if (!___o)
		{
			goto IL_000b;
		}
	}
	{
		if (((Object_t *)IsInst(___o, InitializedTypeInfo(&GCHandle_t1543_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_0 = (__this->___handle_0);
		V_0 = ((*(GCHandle_t1543 *)((GCHandle_t1543 *)UnBox (___o, InitializedTypeInfo(&GCHandle_t1543_il2cpp_TypeInfo)))));
		NullCheck((&V_0));
		int32_t L_1 = ((&V_0)->___handle_0);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern MethodInfo GCHandle_GetHashCode_m8265_MethodInfo;
extern "C" int32_t GCHandle_GetHashCode_m8265 (GCHandle_t1543 * __this, MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___handle_0);
		int32_t L_1 = Int32_GetHashCode_m5580(L_0, /*hidden argument*/&Int32_GetHashCode_m5580_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GCHandleType_t1544_il2cpp_TypeInfo;
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleTypeMethodDeclarations.h"



// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InterfaceTypeAttribute_t1545_il2cpp_TypeInfo;
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribuMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.InterfaceTypeAttribute::.ctor(System.Runtime.InteropServices.ComInterfaceType)
extern MethodInfo InterfaceTypeAttribute__ctor_m8266_MethodInfo;
extern "C" void InterfaceTypeAttribute__ctor_m8266 (InterfaceTypeAttribute_t1545 * __this, int32_t ___interfaceType, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___intType_0 = ___interfaceType;
		return;
	}
}
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_Marshal.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Marshal_t148_il2cpp_TypeInfo;
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"

// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"
extern MethodInfo Environment_get_OSVersion_m9843_MethodInfo;
extern MethodInfo OperatingSystem_get_Platform_m10093_MethodInfo;
extern MethodInfo Marshal_copy_from_unmanaged_m8268_MethodInfo;


// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern MethodInfo Marshal__cctor_m8267_MethodInfo;
extern "C" void Marshal__cctor_m8267 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		((Marshal_t148_StaticFields*)InitializedTypeInfo(&Marshal_t148_il2cpp_TypeInfo)->static_fields)->___SystemMaxDBCSCharSize_0 = 2;
		OperatingSystem_t1805 * L_0 = Environment_get_OSVersion_m9843(NULL /*static, unused*/, /*hidden argument*/&Environment_get_OSVersion_m9843_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = OperatingSystem_get_Platform_m10093(L_0, /*hidden argument*/&OperatingSystem_get_Platform_m10093_MethodInfo);
		if ((((uint32_t)L_1) != ((uint32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		((Marshal_t148_StaticFields*)InitializedTypeInfo(&Marshal_t148_il2cpp_TypeInfo)->static_fields)->___SystemDefaultCharSize_1 = G_B3_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m8268 (Object_t * __this /* static, unused */, IntPtr_t98 ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method)
{
	typedef void (*Marshal_copy_from_unmanaged_m8268_ftn) (IntPtr_t98, int32_t, Array_t *, int32_t);
	static Marshal_copy_from_unmanaged_m8268_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_copy_from_unmanaged_m8268_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern MethodInfo Marshal_Copy_m8269_MethodInfo;
extern "C" void Marshal_Copy_m8269 (Object_t * __this /* static, unused */, IntPtr_t98 ___source, CharU5BU5D_t45* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Marshal_t148_il2cpp_TypeInfo));
		Marshal_copy_from_unmanaged_m8268(NULL /*static, unused*/, ___source, ___startIndex, (Array_t *)(Array_t *)___destination, ___length, /*hidden argument*/&Marshal_copy_from_unmanaged_m8268_MethodInfo);
		return;
	}
}
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern MethodInfo Marshal_PtrToStringAnsi_m684_MethodInfo;
extern "C" String_t* Marshal_PtrToStringAnsi_m684 (Object_t * __this /* static, unused */, IntPtr_t98 ___ptr, MethodInfo* method)
{
	typedef String_t* (*Marshal_PtrToStringAnsi_m684_ftn) (IntPtr_t98);
	static Marshal_PtrToStringAnsi_m684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_PtrToStringAnsi_m684_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)");
	return _il2cpp_icall_func(___ptr);
}
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern MethodInfo Marshal_SizeOf_m5621_MethodInfo;
extern "C" int32_t Marshal_SizeOf_m5621 (Object_t * __this /* static, unused */, Type_t * ___t, MethodInfo* method)
{
	typedef int32_t (*Marshal_SizeOf_m5621_ftn) (Type_t *);
	static Marshal_SizeOf_m5621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_SizeOf_m5621_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::SizeOf(System.Type)");
	return _il2cpp_icall_func(___t);
}
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExce.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MarshalDirectiveException_t1546_il2cpp_TypeInfo;
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExceMethodDeclarations.h"

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern MethodInfo SystemException__ctor_m4066_MethodInfo;
extern MethodInfo Exception_set_HResult_m5535_MethodInfo;
extern MethodInfo SystemException__ctor_m10124_MethodInfo;


// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor()
extern MethodInfo MarshalDirectiveException__ctor_m8270_MethodInfo;
extern "C" void MarshalDirectiveException__ctor_m8270 (MarshalDirectiveException_t1546 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1810, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		SystemException__ctor_m4066(__this, L_0, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233035), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MarshalDirectiveException__ctor_m8271_MethodInfo;
extern "C" void MarshalDirectiveException__ctor_m8271 (MarshalDirectiveException_t1546 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		SystemException__ctor_m10124(__this, ___info, ___context, /*hidden argument*/&SystemException__ctor_m10124_MethodInfo);
		return;
	}
}
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PreserveSigAttribute_t1547_il2cpp_TypeInfo;
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.PreserveSigAttribute::.ctor()
extern MethodInfo PreserveSigAttribute__ctor_m8272_MethodInfo;
extern "C" void PreserveSigAttribute__ctor_m8272 (PreserveSigAttribute_t1547 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		return;
	}
}
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SafeHandle_t1283_il2cpp_TypeInfo;
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo ObjectDisposedException_t1831_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
extern MethodInfo ObjectDisposedException__ctor_m10087_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m4287_MethodInfo;
extern MethodInfo SafeHandle_get_IsInvalid_m10336_MethodInfo;
extern MethodInfo SafeHandle_ReleaseHandle_m10337_MethodInfo;
extern MethodInfo SafeHandle_Dispose_m8279_MethodInfo;
extern MethodInfo GC_SuppressFinalize_m5619_MethodInfo;
extern MethodInfo SafeHandle_Close_m8274_MethodInfo;


// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern MethodInfo SafeHandle__ctor_m8273_MethodInfo;
extern "C" void SafeHandle__ctor_m8273 (SafeHandle_t1283 * __this, IntPtr_t98 ___invalidHandleValue, bool ___ownsHandle, MethodInfo* method)
{
	{
		CriticalFinalizerObject__ctor_m8250(__this, /*hidden argument*/&CriticalFinalizerObject__ctor_m8250_MethodInfo);
		__this->___invalid_handle_value_1 = ___invalidHandleValue;
		__this->___owns_handle_3 = ___ownsHandle;
		__this->___refcount_2 = 1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern "C" void SafeHandle_Close_m8274 (SafeHandle_t1283 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m2357(__this, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5572_MethodInfo, L_1);
		ObjectDisposedException_t1831 * L_3 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		V_0 = ((int32_t)((int32_t)V_1-(int32_t)1));
		int32_t* L_5 = &(__this->___refcount_2);
		int32_t L_6 = Interlocked_CompareExchange_m4287(NULL /*static, unused*/, L_5, V_0, V_1, /*hidden argument*/&Interlocked_CompareExchange_m4287_MethodInfo);
		if ((((uint32_t)L_6) != ((uint32_t)V_1)))
		{
			goto IL_0019;
		}
	}
	{
		if (V_0)
		{
			goto IL_0061;
		}
	}
	{
		bool L_7 = (__this->___owns_handle_3);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&SafeHandle_get_IsInvalid_m10336_MethodInfo, __this);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&SafeHandle_ReleaseHandle_m10337_MethodInfo, __this);
		IntPtr_t98 L_9 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_9;
		__this->___refcount_2 = (-1);
	}

IL_0061:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern MethodInfo SafeHandle_DangerousAddRef_m8275_MethodInfo;
extern "C" void SafeHandle_DangerousAddRef_m8275 (SafeHandle_t1283 * __this, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m2357(__this, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5572_MethodInfo, L_1);
		ObjectDisposedException_t1831 * L_3 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		V_0 = ((int32_t)((int32_t)V_1+(int32_t)1));
		if ((((int32_t)V_1) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Type_t * L_5 = Object_GetType_m2357(__this, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5572_MethodInfo, L_5);
		ObjectDisposedException_t1831 * L_7 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_7, L_6, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		int32_t* L_8 = &(__this->___refcount_2);
		int32_t L_9 = Interlocked_CompareExchange_m4287(NULL /*static, unused*/, L_8, V_0, V_1, /*hidden argument*/&Interlocked_CompareExchange_m4287_MethodInfo);
		if ((((uint32_t)L_9) != ((uint32_t)V_1)))
		{
			goto IL_001a;
		}
	}
	{
		*((int8_t*)(___success)) = (int8_t)1;
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern MethodInfo SafeHandle_DangerousGetHandle_m8276_MethodInfo;
extern "C" IntPtr_t98 SafeHandle_DangerousGetHandle_m8276 (SafeHandle_t1283 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m2357(__this, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5572_MethodInfo, L_1);
		ObjectDisposedException_t1831 * L_3 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		IntPtr_t98 L_4 = (__this->___handle_0);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern MethodInfo SafeHandle_DangerousRelease_m8277_MethodInfo;
extern "C" void SafeHandle_DangerousRelease_m8277 (SafeHandle_t1283 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m2357(__this, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5572_MethodInfo, L_1);
		ObjectDisposedException_t1831 * L_3 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		V_0 = ((int32_t)((int32_t)V_1-(int32_t)1));
		int32_t* L_5 = &(__this->___refcount_2);
		int32_t L_6 = Interlocked_CompareExchange_m4287(NULL /*static, unused*/, L_5, V_0, V_1, /*hidden argument*/&Interlocked_CompareExchange_m4287_MethodInfo);
		if ((((uint32_t)L_6) != ((uint32_t)V_1)))
		{
			goto IL_001a;
		}
	}
	{
		if (V_0)
		{
			goto IL_005b;
		}
	}
	{
		bool L_7 = (__this->___owns_handle_3);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&SafeHandle_get_IsInvalid_m10336_MethodInfo, __this);
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&SafeHandle_ReleaseHandle_m10337_MethodInfo, __this);
		IntPtr_t98 L_9 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_9;
	}

IL_005b:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern MethodInfo SafeHandle_Dispose_m8278_MethodInfo;
extern "C" void SafeHandle_Dispose_m8278 (SafeHandle_t1283 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&SafeHandle_Dispose_m8279_MethodInfo, __this, 1);
		GC_SuppressFinalize_m5619(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5619_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C" void SafeHandle_Dispose_m8279 (SafeHandle_t1283 * __this, bool ___disposing, MethodInfo* method)
{
	{
		if (!___disposing)
		{
			goto IL_000b;
		}
	}
	{
		SafeHandle_Close_m8274(__this, /*hidden argument*/&SafeHandle_Close_m8274_MethodInfo);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle()
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern MethodInfo SafeHandle_SetHandle_m8280_MethodInfo;
extern "C" void SafeHandle_SetHandle_m8280 (SafeHandle_t1283 * __this, IntPtr_t98 ___handle, MethodInfo* method)
{
	{
		__this->___handle_0 = ___handle;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid()
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern MethodInfo SafeHandle_Finalize_m8281_MethodInfo;
extern "C" void SafeHandle_Finalize_m8281 (SafeHandle_t1283 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (__this->___owns_handle_3);
			if (!L_0)
			{
				goto IL_0023;
			}
		}

IL_0008:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&SafeHandle_get_IsInvalid_m10336_MethodInfo, __this);
			if (L_1)
			{
				goto IL_0023;
			}
		}

IL_0010:
		{
			VirtFuncInvoker0< bool >::Invoke(&SafeHandle_ReleaseHandle_m10337_MethodInfo, __this);
			IntPtr_t98 L_2 = (__this->___invalid_handle_value_1);
			__this->___handle_0 = L_2;
		}

IL_0023:
		{
			// IL_0023: leave.s IL_002c
			leaveInstructions[0] = 0x2C; // 1
			THROW_SENTINEL(IL_002c);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0025;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0025;
	}

IL_0025:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m8251(__this, /*hidden argument*/&CriticalFinalizerObject_Finalize_m8251_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x2C:
				goto IL_002c;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_002c:
	{
		return;
	}
}
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeLibImportClassAttribute_t1548_il2cpp_TypeInfo;
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAtMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibImportClassAttribute::.ctor(System.Type)
extern MethodInfo TypeLibImportClassAttribute__ctor_m8282_MethodInfo;
extern "C" void TypeLibImportClassAttribute__ctor_m8282 (TypeLibImportClassAttribute_t1548 * __this, Type_t * ___importClass, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		NullCheck(___importClass);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, ___importClass);
		__this->____importClass_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeLibVersionAttribute_t1549_il2cpp_TypeInfo;
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttribMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibVersionAttribute::.ctor(System.Int32,System.Int32)
extern MethodInfo TypeLibVersionAttribute__ctor_m8283_MethodInfo;
extern "C" void TypeLibVersionAttribute__ctor_m8283 (TypeLibVersionAttribute_t1549 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___major_0 = ___major;
		__this->___minor_1 = ___minor;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnmanagedType_t1550_il2cpp_TypeInfo;
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _Activator_t1879_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _Assembly_t1880_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _AssemblyBuilder_t1881_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _AssemblyName_t1882_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _ConstructorBuilder_t1883_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _ConstructorInfo_t1884_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _EnumBuilder_t1885_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _EventInfo_t1886_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _FieldBuilder_t1887_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _FieldInfo_t1888_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _MethodBase_t1889_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _MethodBuilder_t1890_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _MethodInfo_t1891_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _Module_t1892_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _ModuleBuilder_t1893_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _ParameterBuilder_t1894_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _ParameterInfo_t1895_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _PropertyInfo_t1896_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _Thread_t1897_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo _TypeBuilder_t1898_il2cpp_TypeInfo;



// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActivationServices_t1552_il2cpp_TypeInfo;
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
extern TypeInfo ConstructionLevelActivator_t1555_il2cpp_TypeInfo;
extern TypeInfo IContextAttribute_t1899_il2cpp_TypeInfo;
extern TypeInfo RemotingException_t1617_il2cpp_TypeInfo;
extern TypeInfo UrlAttribute_t1558_il2cpp_TypeInfo;
extern TypeInfo RemotingConfiguration_t1616_il2cpp_TypeInfo;
extern TypeInfo RemotingServices_t1619_il2cpp_TypeInfo;
extern TypeInfo ConstructionCall_t1553_il2cpp_TypeInfo;
extern TypeInfo AppDomainLevelActivator_t1554_il2cpp_TypeInfo;
extern TypeInfo IActivator_t1551_il2cpp_TypeInfo;
extern TypeInfo ContextLevelActivator_t1556_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t610_il2cpp_TypeInfo;
extern TypeInfo ICollection_t715_il2cpp_TypeInfo;
extern TypeInfo ChannelServices_t1564_il2cpp_TypeInfo;
extern TypeInfo Thread_t1571_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t124_il2cpp_TypeInfo;
extern TypeInfo Context_t1561_il2cpp_TypeInfo;
extern TypeInfo IConstructionCallMessage_t1560_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t135_il2cpp_TypeInfo;
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// Replacements.RemotingServices
#include "replacements_Replacements_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
extern MethodInfo ConstructionLevelActivator__ctor_m8289_MethodInfo;
extern MethodInfo RemotingException__ctor_m8519_MethodInfo;
extern MethodInfo UrlAttribute_get_UrlValue_m8291_MethodInfo;
extern MethodInfo RemotingServices_CreateClientProxy_m4400_MethodInfo;
extern MethodInfo RemotingConfiguration_IsRemotelyActivatedClientType_m8517_MethodInfo;
extern MethodInfo RemotingServices_CreateClientProxy_m8531_MethodInfo;
extern MethodInfo Type_get_IsContextful_m6479_MethodInfo;
extern MethodInfo RemotingServices_CreateClientProxyForContextBound_m8532_MethodInfo;
extern MethodInfo ConstructionCall__ctor_m8352_MethodInfo;
extern MethodInfo ActivationServices_get_ConstructionActivator_m8284_MethodInfo;
extern MethodInfo AppDomainLevelActivator__ctor_m8288_MethodInfo;
extern MethodInfo ConstructionCall_set_Activator_m8359_MethodInfo;
extern MethodInfo ConstructionCall_set_IsContextOk_m8355_MethodInfo;
extern MethodInfo ContextLevelActivator__ctor_m8290_MethodInfo;
extern MethodInfo ArrayList__ctor_m3875_MethodInfo;
extern MethodInfo ArrayList_AddRange_m4009_MethodInfo;
extern MethodInfo Thread_get_CurrentContext_m9381_MethodInfo;
extern MethodInfo ArrayList_GetEnumerator_m3876_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m560_MethodInfo;
extern MethodInfo IContextAttribute_IsContextOK_m10338_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m563_MethodInfo;
extern MethodInfo IDisposable_Dispose_m564_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m10320_MethodInfo;
extern MethodInfo ArrayList_Add_m3885_MethodInfo;
extern MethodInfo ArrayList_ToArray_m7141_MethodInfo;
extern MethodInfo ConstructionCall_SetActivationAttributes_m8361_MethodInfo;
extern MethodInfo IContextAttribute_GetPropertiesForNewContext_m10339_MethodInfo;
extern MethodInfo String_op_Inequality_m2590_MethodInfo;


// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m8284 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		if ((((ActivationServices_t1552_StaticFields*)InitializedTypeInfo(&ActivationServices_t1552_il2cpp_TypeInfo)->static_fields)->____constructionActivator_0))
		{
			goto IL_0011;
		}
	}
	{
		ConstructionLevelActivator_t1555 * L_0 = (ConstructionLevelActivator_t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructionLevelActivator_t1555_il2cpp_TypeInfo));
		ConstructionLevelActivator__ctor_m8289(L_0, /*hidden argument*/&ConstructionLevelActivator__ctor_m8289_MethodInfo);
		((ActivationServices_t1552_StaticFields*)InitializedTypeInfo(&ActivationServices_t1552_il2cpp_TypeInfo)->static_fields)->____constructionActivator_0 = L_0;
	}

IL_0011:
	{
		return (((ActivationServices_t1552_StaticFields*)InitializedTypeInfo(&ActivationServices_t1552_il2cpp_TypeInfo)->static_fields)->____constructionActivator_0);
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern MethodInfo ActivationServices_CreateProxyFromAttributes_m8285_MethodInfo;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m8285 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t137* ___activationAttributes, MethodInfo* method)
{
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t137* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t1608 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		V_2 = ___activationAttributes;
		V_3 = 0;
		goto IL_0037;
	}

IL_0008:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		int32_t L_0 = V_3;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(V_2, L_0));
		if (((Object_t *)IsInst(V_1, InitializedTypeInfo(&IContextAttribute_t1899_il2cpp_TypeInfo))))
		{
			goto IL_001f;
		}
	}
	{
		RemotingException_t1617 * L_1 = (RemotingException_t1617 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1617_il2cpp_TypeInfo));
		RemotingException__ctor_m8519(L_1, (String_t*) &_stringLiteral1811, /*hidden argument*/&RemotingException__ctor_m8519_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001f:
	{
		if (!((UrlAttribute_t1558 *)IsInst(V_1, InitializedTypeInfo(&UrlAttribute_t1558_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		NullCheck(((UrlAttribute_t1558 *)Castclass(V_1, InitializedTypeInfo(&UrlAttribute_t1558_il2cpp_TypeInfo))));
		String_t* L_2 = UrlAttribute_get_UrlValue_m8291(((UrlAttribute_t1558 *)Castclass(V_1, InitializedTypeInfo(&UrlAttribute_t1558_il2cpp_TypeInfo))), /*hidden argument*/&UrlAttribute_get_UrlValue_m8291_MethodInfo);
		V_0 = L_2;
	}

IL_0033:
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_0037:
	{
		NullCheck(V_2);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)V_2)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		if (!V_0)
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_3 = RemotingServices_CreateClientProxy_m4400(NULL /*static, unused*/, ___type, V_0, ___activationAttributes, /*hidden argument*/&RemotingServices_CreateClientProxy_m4400_MethodInfo);
		return L_3;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1616_il2cpp_TypeInfo));
		ActivatedClientTypeEntry_t1608 * L_4 = RemotingConfiguration_IsRemotelyActivatedClientType_m8517(NULL /*static, unused*/, ___type, /*hidden argument*/&RemotingConfiguration_IsRemotelyActivatedClientType_m8517_MethodInfo);
		V_4 = L_4;
		if (!V_4)
		{
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1619_il2cpp_TypeInfo));
		Object_t * L_5 = RemotingServices_CreateClientProxy_m8531(NULL /*static, unused*/, V_4, ___activationAttributes, /*hidden argument*/&RemotingServices_CreateClientProxy_m8531_MethodInfo);
		return L_5;
	}

IL_005e:
	{
		NullCheck(___type);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m6479_MethodInfo, ___type);
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1619_il2cpp_TypeInfo));
		Object_t * L_7 = RemotingServices_CreateClientProxyForContextBound_m8532(NULL /*static, unused*/, ___type, ___activationAttributes, /*hidden argument*/&RemotingServices_CreateClientProxyForContextBound_m8532_MethodInfo);
		return L_7;
	}

IL_006e:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern MethodInfo ActivationServices_CreateConstructionCall_m8286_MethodInfo;
extern "C" ConstructionCall_t1553 * ActivationServices_CreateConstructionCall_m8286 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t137* ___activationAttributes, MethodInfo* method)
{
	ConstructionCall_t1553 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t610 * V_2 = {0};
	bool V_3 = false;
	Context_t1561 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t137* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t137* V_9 = {0};
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t G_B19_0 = 0;
	{
		ConstructionCall_t1553 * L_0 = (ConstructionCall_t1553 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructionCall_t1553_il2cpp_TypeInfo));
		ConstructionCall__ctor_m8352(L_0, ___type, /*hidden argument*/&ConstructionCall__ctor_m8352_MethodInfo);
		V_0 = L_0;
		NullCheck(___type);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m6479_MethodInfo, ___type);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_2 = ActivationServices_get_ConstructionActivator_m8284(NULL /*static, unused*/, /*hidden argument*/&ActivationServices_get_ConstructionActivator_m8284_MethodInfo);
		AppDomainLevelActivator_t1554 * L_3 = (AppDomainLevelActivator_t1554 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AppDomainLevelActivator_t1554_il2cpp_TypeInfo));
		AppDomainLevelActivator__ctor_m8288(L_3, ___activationUrl, L_2, /*hidden argument*/&AppDomainLevelActivator__ctor_m8288_MethodInfo);
		NullCheck(V_0);
		VirtActionInvoker1< Object_t * >::Invoke(&ConstructionCall_set_Activator_m8359_MethodInfo, V_0, L_3);
		NullCheck(V_0);
		ConstructionCall_set_IsContextOk_m8355(V_0, 0, /*hidden argument*/&ConstructionCall_set_IsContextOk_m8355_MethodInfo);
		return V_0;
	}

IL_0029:
	{
		Object_t * L_4 = ActivationServices_get_ConstructionActivator_m8284(NULL /*static, unused*/, /*hidden argument*/&ActivationServices_get_ConstructionActivator_m8284_MethodInfo);
		V_1 = L_4;
		ContextLevelActivator_t1556 * L_5 = (ContextLevelActivator_t1556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ContextLevelActivator_t1556_il2cpp_TypeInfo));
		ContextLevelActivator__ctor_m8290(L_5, V_1, /*hidden argument*/&ContextLevelActivator__ctor_m8290_MethodInfo);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList_t610 * L_6 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m3875(L_6, /*hidden argument*/&ArrayList__ctor_m3875_MethodInfo);
		V_2 = L_6;
		if (!___activationAttributes)
		{
			goto IL_0046;
		}
	}
	{
		NullCheck(V_2);
		VirtActionInvoker1< Object_t * >::Invoke(&ArrayList_AddRange_m4009_MethodInfo, V_2, (Object_t *)(Object_t *)___activationAttributes);
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_7 = String_op_Equality_m145(NULL /*static, unused*/, ___activationUrl, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3), /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		V_3 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1571_il2cpp_TypeInfo));
		Context_t1561 * L_8 = Thread_get_CurrentContext_m9381(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m9381_MethodInfo);
		V_4 = L_8;
		if (!V_3)
		{
			goto IL_00a5;
		}
	}
	{
		NullCheck(V_2);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m3876_MethodInfo, V_2);
		V_6 = L_9;
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0066:
		{
			NullCheck(V_6);
			Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m560_MethodInfo, V_6);
			V_5 = ((Object_t *)Castclass(L_10, InitializedTypeInfo(&IContextAttribute_t1899_il2cpp_TypeInfo)));
			NullCheck(V_5);
			bool L_11 = (bool)InterfaceFuncInvoker2< bool, Context_t1561 *, Object_t * >::Invoke(&IContextAttribute_IsContextOK_m10338_MethodInfo, V_5, V_4, V_0);
			if (L_11)
			{
				goto IL_0084;
			}
		}

IL_0080:
		{
			V_3 = 0;
			goto IL_008d;
		}

IL_0084:
		{
			NullCheck(V_6);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m563_MethodInfo, V_6);
			if (L_12)
			{
				goto IL_0066;
			}
		}

IL_008d:
		{
			// IL_008d: leave.s IL_00a5
			leaveInstructions[0] = 0xA5; // 1
			THROW_SENTINEL(IL_00a5);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_008f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_008f;
	}

IL_008f:
	{ // begin finally (depth: 1)
		{
			V_13 = ((Object_t *)IsInst(V_6, InitializedTypeInfo(&IDisposable_t135_il2cpp_TypeInfo)));
			if (V_13)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xA5:
					goto IL_00a5;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_009d:
		{
			NullCheck(V_13);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m564_MethodInfo, V_13);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xA5:
					goto IL_00a5;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_00a5:
	{
		NullCheck(___type);
		ObjectU5BU5D_t137* L_13 = (ObjectU5BU5D_t137*)VirtFuncInvoker1< ObjectU5BU5D_t137*, bool >::Invoke(&MemberInfo_GetCustomAttributes_m10320_MethodInfo, ___type, 1);
		V_7 = L_13;
		V_9 = V_7;
		V_10 = 0;
		goto IL_00ec;
	}

IL_00b7:
	{
		NullCheck(V_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_9, V_10);
		int32_t L_14 = V_10;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(V_9, L_14));
		if (!((Object_t *)IsInst(V_8, InitializedTypeInfo(&IContextAttribute_t1899_il2cpp_TypeInfo))))
		{
			goto IL_00e6;
		}
	}
	{
		if (!V_3)
		{
			goto IL_00db;
		}
	}
	{
		NullCheck(((Object_t *)Castclass(V_8, InitializedTypeInfo(&IContextAttribute_t1899_il2cpp_TypeInfo))));
		bool L_15 = (bool)InterfaceFuncInvoker2< bool, Context_t1561 *, Object_t * >::Invoke(&IContextAttribute_IsContextOK_m10338_MethodInfo, ((Object_t *)Castclass(V_8, InitializedTypeInfo(&IContextAttribute_t1899_il2cpp_TypeInfo))), V_4, V_0);
		G_B19_0 = ((int32_t)(L_15));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B19_0 = 0;
	}

IL_00dc:
	{
		V_3 = G_B19_0;
		NullCheck(V_2);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_2, V_8);
	}

IL_00e6:
	{
		V_10 = ((int32_t)((int32_t)V_10+(int32_t)1));
	}

IL_00ec:
	{
		NullCheck(V_9);
		if ((((int32_t)V_10) < ((int32_t)(((int32_t)(((Array_t *)V_9)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		if (V_3)
		{
			goto IL_0144;
		}
	}
	{
		NullCheck(V_2);
		ObjectU5BU5D_t137* L_16 = (ObjectU5BU5D_t137*)VirtFuncInvoker0< ObjectU5BU5D_t137* >::Invoke(&ArrayList_ToArray_m7141_MethodInfo, V_2);
		NullCheck(V_0);
		ConstructionCall_SetActivationAttributes_m8361(V_0, L_16, /*hidden argument*/&ConstructionCall_SetActivationAttributes_m8361_MethodInfo);
		NullCheck(V_2);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m3876_MethodInfo, V_2);
		V_12 = L_17;
	}

IL_010b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0123;
		}

IL_010d:
		{
			NullCheck(V_12);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m560_MethodInfo, V_12);
			V_11 = ((Object_t *)Castclass(L_18, InitializedTypeInfo(&IContextAttribute_t1899_il2cpp_TypeInfo)));
			NullCheck(V_11);
			InterfaceActionInvoker1< Object_t * >::Invoke(&IContextAttribute_GetPropertiesForNewContext_m10339_MethodInfo, V_11, V_0);
		}

IL_0123:
		{
			NullCheck(V_12);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m563_MethodInfo, V_12);
			if (L_19)
			{
				goto IL_010d;
			}
		}

IL_012c:
		{
			// IL_012c: leave.s IL_0144
			leaveInstructions[0] = 0x144; // 1
			THROW_SENTINEL(IL_0144);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_012e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_012e;
	}

IL_012e:
	{ // begin finally (depth: 1)
		{
			V_14 = ((Object_t *)IsInst(V_12, InitializedTypeInfo(&IDisposable_t135_il2cpp_TypeInfo)));
			if (V_14)
			{
				goto IL_013c;
			}
		}

IL_013b:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x144:
					goto IL_0144;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_013c:
		{
			NullCheck(V_14);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m564_MethodInfo, V_14);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x144:
					goto IL_0144;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_0144:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_20 = String_op_Inequality_m2590(NULL /*static, unused*/, ___activationUrl, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3), /*hidden argument*/&String_op_Inequality_m2590_MethodInfo);
		if (!L_20)
		{
			goto IL_0159;
		}
	}
	{
		AppDomainLevelActivator_t1554 * L_21 = (AppDomainLevelActivator_t1554 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AppDomainLevelActivator_t1554_il2cpp_TypeInfo));
		AppDomainLevelActivator__ctor_m8288(L_21, ___activationUrl, V_1, /*hidden argument*/&AppDomainLevelActivator__ctor_m8288_MethodInfo);
		V_1 = L_21;
	}

IL_0159:
	{
		NullCheck(V_0);
		VirtActionInvoker1< Object_t * >::Invoke(&ConstructionCall_set_Activator_m8359_MethodInfo, V_0, V_1);
		NullCheck(V_0);
		ConstructionCall_set_IsContextOk_m8355(V_0, V_3, /*hidden argument*/&ConstructionCall_set_IsContextOk_m8355_MethodInfo);
		return V_0;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern MethodInfo ActivationServices_AllocateUninitializedClassInstance_m8287_MethodInfo;
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m8287 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m8287_ftn) (Type_t *);
	static ActivationServices_AllocateUninitializedClassInstance_m8287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ActivationServices_AllocateUninitializedClassInstance_m8287_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(___type);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
extern "C" void AppDomainLevelActivator__ctor_m8288 (AppDomainLevelActivator_t1554 * __this, String_t* ___activationUrl, Object_t * ___next, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->____activationUrl_0 = ___activationUrl;
		__this->____next_1 = ___next;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ConstructionLevelActivator::.ctor()
extern "C" void ConstructionLevelActivator__ctor_m8289 (ConstructionLevelActivator_t1555 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ContextLevelActivator::.ctor(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ContextLevelActivator__ctor_m8290 (ContextLevelActivator_t1556 * __this, Object_t * ___next, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___m_NextActivator_0 = ___next;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType()
// System.String System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationTypeName()
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.IConstructionCallMessage::get_Activator()
// System.Void System.Runtime.Remoting.Activation.IConstructionCallMessage::set_Activator(System.Runtime.Remoting.Activation.IActivator)
// System.Object[] System.Runtime.Remoting.Activation.IConstructionCallMessage::get_CallSiteActivationAttributes()
// System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties()
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RemoteActivator_t1557_il2cpp_TypeInfo;
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivatorMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo String_GetHashCode_m3889_MethodInfo;


// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m8291 (UrlAttribute_t1558 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern MethodInfo UrlAttribute_Equals_m8292_MethodInfo;
extern "C" bool UrlAttribute_Equals_m8292 (UrlAttribute_t1558 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		if (((UrlAttribute_t1558 *)IsInst(___o, InitializedTypeInfo(&UrlAttribute_t1558_il2cpp_TypeInfo))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(((UrlAttribute_t1558 *)Castclass(___o, InitializedTypeInfo(&UrlAttribute_t1558_il2cpp_TypeInfo))));
		String_t* L_0 = UrlAttribute_get_UrlValue_m8291(((UrlAttribute_t1558 *)Castclass(___o, InitializedTypeInfo(&UrlAttribute_t1558_il2cpp_TypeInfo))), /*hidden argument*/&UrlAttribute_get_UrlValue_m8291_MethodInfo);
		String_t* L_1 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_op_Equality_m145(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		return L_2;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern MethodInfo UrlAttribute_GetHashCode_m8293_MethodInfo;
extern "C" int32_t UrlAttribute_GetHashCode_m8293 (UrlAttribute_t1558 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3889_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo UrlAttribute_GetPropertiesForNewContext_m8294_MethodInfo;
extern "C" void UrlAttribute_GetPropertiesForNewContext_m8294 (UrlAttribute_t1558 * __this, Object_t * ___ctorMsg, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo UrlAttribute_IsContextOK_m8295_MethodInfo;
extern "C" bool UrlAttribute_IsContextOK_m8295 (UrlAttribute_t1558 * __this, Context_t1561 * ___ctx, Object_t * ___msg, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ChannelInfo_t1562_il2cpp_TypeInfo;
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"

extern MethodInfo ChannelServices_GetCurrentChannelInfo_m8301_MethodInfo;


// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
extern MethodInfo ChannelInfo__ctor_m8296_MethodInfo;
extern "C" void ChannelInfo__ctor_m8296 (ChannelInfo_t1562 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = ChannelServices_GetCurrentChannelInfo_m8301(NULL /*static, unused*/, /*hidden argument*/&ChannelServices_GetCurrentChannelInfo_m8301_MethodInfo);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern MethodInfo ChannelInfo_get_ChannelData_m8297_MethodInfo;
extern "C" ObjectU5BU5D_t137* ChannelInfo_get_ChannelData_m8297 (ChannelInfo_t1562 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t137* L_0 = (__this->___channelData_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
extern TypeInfo CrossContextChannel_t1563_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t17_il2cpp_TypeInfo;
extern TypeInfo ISecurableChannel_t1900_il2cpp_TypeInfo;
extern TypeInfo IChannel_t1565_il2cpp_TypeInfo;
extern TypeInfo IChannelReceiver_t1901_il2cpp_TypeInfo;
extern TypeInfo IList_t743_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t17_0_0_0;
extern MethodInfo CrossContextChannel__ctor_m8324_MethodInfo;
extern MethodInfo ChannelServices_RegisterChannel_m8300_MethodInfo;
extern MethodInfo IChannel_get_ChannelName_m10340_MethodInfo;
extern MethodInfo ISecurableChannel_set_IsSecured_m10341_MethodInfo;
extern MethodInfo ArrayList_get_SyncRoot_m4039_MethodInfo;
extern MethodInfo Monitor_Enter_m3898_MethodInfo;
extern MethodInfo ArrayList_get_Item_m3873_MethodInfo;
extern MethodInfo IChannel_get_ChannelPriority_m10342_MethodInfo;
extern MethodInfo ArrayList_get_Count_m3871_MethodInfo;
extern MethodInfo ArrayList_Insert_m4019_MethodInfo;
extern MethodInfo IList_Contains_m10263_MethodInfo;
extern MethodInfo IChannelReceiver_StartListening_m10343_MethodInfo;
extern MethodInfo Monitor_Exit_m3899_MethodInfo;
extern MethodInfo IChannelReceiver_get_ChannelData_m10344_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern MethodInfo ChannelServices__cctor_m8298_MethodInfo;
extern TypeInfo* StringU5BU5D_t17_il2cpp_TypeInfo_var;
extern "C" void ChannelServices__cctor_m8298 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ChannelServices__cctor_m8298_init;
	if (!ChannelServices__cctor_m8298_init)
	{
		StringU5BU5D_t17_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t17_0_0_0);
		ChannelServices__cctor_m8298_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList_t610 * L_0 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m3875(L_0, /*hidden argument*/&ArrayList__ctor_m3875_MethodInfo);
		((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t610 * L_1 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m3875(L_1, /*hidden argument*/&ArrayList__ctor_m3875_MethodInfo);
		((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t1563 * L_2 = (CrossContextChannel_t1563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CrossContextChannel_t1563_il2cpp_TypeInfo));
		CrossContextChannel__ctor_m8324(L_2, /*hidden argument*/&CrossContextChannel__ctor_m8324_MethodInfo);
		((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3 = (String_t*) &_stringLiteral1812;
		StringU5BU5D_t17* L_3 = ((StringU5BU5D_t17*)SZArrayNew(StringU5BU5D_t17_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1813);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)(String_t*) &_stringLiteral1813;
		StringU5BU5D_t17* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral1814);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)(String_t*) &_stringLiteral1814;
		((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern MethodInfo ChannelServices_RegisterChannel_m8299_MethodInfo;
extern "C" void ChannelServices_RegisterChannel_m8299 (Object_t * __this /* static, unused */, Object_t * ___chnl, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
		ChannelServices_RegisterChannel_m8300(NULL /*static, unused*/, ___chnl, 0, /*hidden argument*/&ChannelServices_RegisterChannel_m8300_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern "C" void ChannelServices_RegisterChannel_m8300 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (___chnl)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1815, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (!___ensureSecurity)
		{
			goto IL_0038;
		}
	}
	{
		V_1 = ((Object_t *)IsInst(___chnl, InitializedTypeInfo(&ISecurableChannel_t1900_il2cpp_TypeInfo)));
		if (V_1)
		{
			goto IL_0031;
		}
	}
	{
		NullCheck(___chnl);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m10340_MethodInfo, ___chnl);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1816, L_1, /*hidden argument*/&String_Format_m160_MethodInfo);
		RemotingException_t1617 * L_3 = (RemotingException_t1617 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1617_il2cpp_TypeInfo));
		RemotingException__ctor_m8519(L_3, L_2, /*hidden argument*/&RemotingException__ctor_m8519_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0031:
	{
		NullCheck(V_1);
		InterfaceActionInvoker1< bool >::Invoke(&ISecurableChannel_set_IsSecured_m10341_MethodInfo, V_1, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
		NullCheck((((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m4039_MethodInfo, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
		V_0 = L_4;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00bc;
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
			NullCheck((((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m3873_MethodInfo, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0), V_3);
			V_4 = ((Object_t *)Castclass(L_5, InitializedTypeInfo(&IChannel_t1565_il2cpp_TypeInfo)));
			NullCheck(V_4);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m10340_MethodInfo, V_4);
			NullCheck(___chnl);
			String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m10340_MethodInfo, ___chnl);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_8 = String_op_Equality_m145(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
			if (!L_8)
			{
				goto IL_00a3;
			}
		}

IL_0075:
		{
			NullCheck(___chnl);
			String_t* L_9 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m10340_MethodInfo, ___chnl);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_10 = String_op_Inequality_m2590(NULL /*static, unused*/, L_9, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_op_Inequality_m2590_MethodInfo);
			if (!L_10)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			NullCheck(V_4);
			String_t* L_11 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m10340_MethodInfo, V_4);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_12 = String_Concat_m169(NULL /*static, unused*/, (String_t*) &_stringLiteral1817, L_11, (String_t*) &_stringLiteral1818, /*hidden argument*/&String_Concat_m169_MethodInfo);
			RemotingException_t1617 * L_13 = (RemotingException_t1617 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1617_il2cpp_TypeInfo));
			RemotingException__ctor_m8519(L_13, L_12, /*hidden argument*/&RemotingException__ctor_m8519_MethodInfo);
			il2cpp_codegen_raise_exception(L_13);
		}

IL_00a3:
		{
			NullCheck(V_4);
			int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&IChannel_get_ChannelPriority_m10342_MethodInfo, V_4);
			NullCheck(___chnl);
			int32_t L_15 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&IChannel_get_ChannelPriority_m10342_MethodInfo, ___chnl);
			if ((((int32_t)L_14) >= ((int32_t)L_15)))
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			if ((((uint32_t)V_2) != ((uint32_t)(-1))))
			{
				goto IL_00b8;
			}
		}

IL_00b6:
		{
			V_2 = V_3;
		}

IL_00b8:
		{
			V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
		}

IL_00bc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
			NullCheck((((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
			int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m3871_MethodInfo, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
			if ((((int32_t)V_3) < ((int32_t)L_16)))
			{
				goto IL_004f;
			}
		}

IL_00c9:
		{
			if ((((int32_t)V_2) == ((int32_t)(-1))))
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
			NullCheck((((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(&ArrayList_Insert_m4019_MethodInfo, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0), V_2, ___chnl);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
			NullCheck((((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0), ___chnl);
		}

IL_00e7:
		{
			V_5 = ((Object_t *)IsInst(___chnl, InitializedTypeInfo(&IChannelReceiver_t1901_il2cpp_TypeInfo)));
			if (!V_5)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
			NullCheck(___chnl);
			Type_t * L_17 = Object_GetType_m2357(___chnl, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
			NullCheck(L_17);
			String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, L_17);
			NullCheck((((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___oldStartModeTypes_4));
			bool L_19 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(&IList_Contains_m10263_MethodInfo, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___oldStartModeTypes_4), L_18);
			if (!L_19)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			NullCheck(V_5);
			InterfaceActionInvoker1< Object_t * >::Invoke(&IChannelReceiver_StartListening_m10343_MethodInfo, V_5, NULL);
		}

IL_0112:
		{
			// IL_0112: leave.s IL_011b
			leaveInstructions[0] = 0x11B; // 1
			THROW_SENTINEL(IL_011b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0114;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0114;
	}

IL_0114:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x11B:
				goto IL_011b;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_011b:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern "C" ObjectU5BU5D_t137* ChannelServices_GetCurrentChannelInfo_m8301 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	ArrayList_t610 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	int32_t leaveInstructions[2] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList_t610 * L_0 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m3875(L_0, /*hidden argument*/&ArrayList__ctor_m3875_MethodInfo);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
		NullCheck((((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m4039_MethodInfo, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
		V_1 = L_1;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
			NullCheck((((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
			Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m3876_MethodInfo, (((ChannelServices_t1564_StaticFields*)InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0));
			V_3 = L_2;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004d;
			}

IL_0024:
			{
				NullCheck(V_3);
				Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m560_MethodInfo, V_3);
				V_2 = L_3;
				V_4 = ((Object_t *)IsInst(V_2, InitializedTypeInfo(&IChannelReceiver_t1901_il2cpp_TypeInfo)));
				if (!V_4)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				NullCheck(V_4);
				Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IChannelReceiver_get_ChannelData_m10344_MethodInfo, V_4);
				V_5 = L_4;
				if (!V_5)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				NullCheck(V_0);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_0, V_5);
			}

IL_004d:
			{
				NullCheck(V_3);
				bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m563_MethodInfo, V_3);
				if (L_5)
				{
					goto IL_0024;
				}
			}

IL_0055:
			{
				// IL_0055: leave.s IL_006c
				leaveInstructions[1] = 0x6C; // 2
				THROW_SENTINEL(IL_006c);
				// finally target depth: 2
			}
		} // end try (depth: 2)
		catch(Il2CppFinallySentinel& e)
		{
			goto IL_0057;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t140 *)e.ex;
			goto IL_0057;
		}

IL_0057:
		{ // begin finally (depth: 2)
			{
				V_6 = ((Object_t *)IsInst(V_3, InitializedTypeInfo(&IDisposable_t135_il2cpp_TypeInfo)));
				if (V_6)
				{
					goto IL_0064;
				}
			}

IL_0063:
			{
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x6C:
						goto IL_006c;
					default:
					{
						#if IL2CPP_DEBUG
						assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 2, __last_unhandled_exception has not been set");
						#endif
						Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
						__last_unhandled_exception = 0;
						il2cpp_codegen_raise_exception(_tmp_exception_local);
					}
				}
			}

IL_0064:
			{
				NullCheck(V_6);
				InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m564_MethodInfo, V_6);
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x6C:
						goto IL_006c;
					default:
					{
						#if IL2CPP_DEBUG
						assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 2, __last_unhandled_exception has not been set");
						#endif
						Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
						__last_unhandled_exception = 0;
						il2cpp_codegen_raise_exception(_tmp_exception_local);
					}
				}
			}
		} // end finally (depth: 2)

IL_006c:
		{
			// IL_006c: leave.s IL_0075
			leaveInstructions[0] = 0x75; // 1
			THROW_SENTINEL(IL_0075);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_006e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_006e;
	}

IL_006e:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x75:
				goto IL_0075;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0075:
	{
		NullCheck(V_0);
		ObjectU5BU5D_t137* L_6 = (ObjectU5BU5D_t137*)VirtFuncInvoker0< ObjectU5BU5D_t137* >::Invoke(&ArrayList_ToArray_m7141_MethodInfo, V_0);
		return L_6;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossAppDomainData_t1566_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"

extern MethodInfo RemotingConfiguration_get_ProcessId_m8516_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern MethodInfo CrossAppDomainData__ctor_m8302_MethodInfo;
extern "C" void CrossAppDomainData__ctor_m8302 (CrossAppDomainData_t1566 * __this, int32_t ___domainId, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_0);
		__this->____ContextID_0 = L_1;
		__this->____DomainID_1 = ___domainId;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1616_il2cpp_TypeInfo));
		String_t* L_2 = RemotingConfiguration_get_ProcessId_m8516(NULL /*static, unused*/, /*hidden argument*/&RemotingConfiguration_get_ProcessId_m8516_MethodInfo);
		__this->____processGuid_2 = L_2;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossAppDomainChannel_t1567_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"

extern MethodInfo Thread_GetDomainID_m9384_MethodInfo;
extern MethodInfo CrossAppDomainChannel__ctor_m8303_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C" void CrossAppDomainChannel__ctor_m8303 (CrossAppDomainChannel_t1567 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern MethodInfo CrossAppDomainChannel__cctor_m8304_MethodInfo;
extern "C" void CrossAppDomainChannel__cctor_m8304 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m127(L_0, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		((CrossAppDomainChannel_t1567_StaticFields*)InitializedTypeInfo(&CrossAppDomainChannel_t1567_il2cpp_TypeInfo)->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern MethodInfo CrossAppDomainChannel_RegisterCrossAppDomainChannel_m8305_MethodInfo;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m8305 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t1567 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossAppDomainChannel_t1567_il2cpp_TypeInfo));
		V_0 = (((CrossAppDomainChannel_t1567_StaticFields*)InitializedTypeInfo(&CrossAppDomainChannel_t1567_il2cpp_TypeInfo)->static_fields)->___s_lock_0);
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossAppDomainChannel_t1567_il2cpp_TypeInfo));
		CrossAppDomainChannel_t1567 * L_0 = (CrossAppDomainChannel_t1567 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CrossAppDomainChannel_t1567_il2cpp_TypeInfo));
		CrossAppDomainChannel__ctor_m8303(L_0, /*hidden argument*/&CrossAppDomainChannel__ctor_m8303_MethodInfo);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1564_il2cpp_TypeInfo));
		ChannelServices_RegisterChannel_m8299(NULL /*static, unused*/, V_1, /*hidden argument*/&ChannelServices_RegisterChannel_m8299_MethodInfo);
		// IL_0018: leave.s IL_0021
		leaveInstructions[0] = 0x21; // 1
		THROW_SENTINEL(IL_0021);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_001a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_001a;
	}

IL_001a:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x21:
				goto IL_0021;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0021:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern MethodInfo CrossAppDomainChannel_get_ChannelName_m8306_MethodInfo;
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m8306 (CrossAppDomainChannel_t1567 * __this, MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral1819;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern MethodInfo CrossAppDomainChannel_get_ChannelPriority_m8307_MethodInfo;
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m8307 (CrossAppDomainChannel_t1567 * __this, MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern MethodInfo CrossAppDomainChannel_get_ChannelData_m8308_MethodInfo;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m8308 (CrossAppDomainChannel_t1567 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1571_il2cpp_TypeInfo));
		int32_t L_0 = Thread_GetDomainID_m9384(NULL /*static, unused*/, /*hidden argument*/&Thread_GetDomainID_m9384_MethodInfo);
		CrossAppDomainData_t1566 * L_1 = (CrossAppDomainData_t1566 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CrossAppDomainData_t1566_il2cpp_TypeInfo));
		CrossAppDomainData__ctor_m8302(L_1, L_0, /*hidden argument*/&CrossAppDomainData__ctor_m8302_MethodInfo);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern MethodInfo CrossAppDomainChannel_StartListening_m8309_MethodInfo;
extern "C" void CrossAppDomainChannel_StartListening_m8309 (CrossAppDomainChannel_t1567 * __this, Object_t * ___data, MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossAppDomainSink_t1568_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
extern TypeInfo Hashtable_t74_il2cpp_TypeInfo;
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern Il2CppType CrossAppDomainSink_t1568_0_0_0;
extern MethodInfo Hashtable__ctor_m528_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern MethodInfo CrossAppDomainSink__cctor_m8310_MethodInfo;
extern "C" void CrossAppDomainSink__cctor_m8310 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		Hashtable_t74 * L_0 = (Hashtable_t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		Hashtable__ctor_m528(L_0, /*hidden argument*/&Hashtable__ctor_m528_MethodInfo);
		((CrossAppDomainSink_t1568_StaticFields*)InitializedTypeInfo(&CrossAppDomainSink_t1568_il2cpp_TypeInfo)->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&CrossAppDomainSink_t1568_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_1);
		MethodInfo_t871 * L_2 = (MethodInfo_t871 *)VirtFuncInvoker2< MethodInfo_t871 *, String_t*, int32_t >::Invoke(&Type_GetMethod_m6502_MethodInfo, L_1, (String_t*) &_stringLiteral1820, ((int32_t)40));
		((CrossAppDomainSink_t1568_StaticFields*)InitializedTypeInfo(&CrossAppDomainSink_t1568_il2cpp_TypeInfo)->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern MethodInfo CrossAppDomainSink_get_TargetDomainId_m8311_MethodInfo;
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m8311 (CrossAppDomainSink_t1568 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName()
// System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority()
#ifndef _MSC_VER
#else
#endif



// System.Object System.Runtime.Remoting.Channels.IChannelReceiver::get_ChannelData()
// System.Void System.Runtime.Remoting.Channels.IChannelReceiver::StartListening(System.Object)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IChannelSender_t1902_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean)
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"

extern TypeInfo IContextProperty_t1569_il2cpp_TypeInfo;
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
extern MethodInfo AppDomain_InternalGetDefaultContext_m9435_MethodInfo;
extern MethodInfo IContextProperty_get_Name_m10345_MethodInfo;


// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern MethodInfo Context__cctor_m8312_MethodInfo;
extern "C" void Context__cctor_m8312 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		Hashtable_t74 * L_0 = (Hashtable_t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		Hashtable__ctor_m528(L_0, /*hidden argument*/&Hashtable__ctor_m528_MethodInfo);
		((Context_t1561_StaticFields*)InitializedTypeInfo(&Context_t1561_il2cpp_TypeInfo)->static_fields)->___namedSlots_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern MethodInfo Context_Finalize_m8313_MethodInfo;
extern "C" void Context_Finalize_m8313 (Context_t1561 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		// IL_0000: leave.s IL_0009
		leaveInstructions[0] = 0x9; // 1
		THROW_SENTINEL(IL_0009);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0002;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0002;
	}

IL_0002:
	{ // begin finally (depth: 1)
		Object_Finalize_m226(__this, /*hidden argument*/&Object_Finalize_m226_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x9:
				goto IL_0009;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0009:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern MethodInfo Context_get_DefaultContext_m8314_MethodInfo;
extern "C" Context_t1561 * Context_get_DefaultContext_m8314 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Context_t1561 * L_0 = AppDomain_InternalGetDefaultContext_m9435(NULL /*static, unused*/, /*hidden argument*/&AppDomain_InternalGetDefaultContext_m9435_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern MethodInfo Context_get_IsDefaultContext_m8315_MethodInfo;
extern "C" bool Context_get_IsDefaultContext_m8315 (Context_t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern MethodInfo Context_GetProperty_m8316_MethodInfo;
extern "C" Object_t * Context_GetProperty_m8316 (Context_t1561 * __this, String_t* ___name, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		ArrayList_t610 * L_0 = (__this->___context_properties_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000a:
	{
		ArrayList_t610 * L_1 = (__this->___context_properties_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m3876_MethodInfo, L_1);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0018:
		{
			NullCheck(V_1);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m560_MethodInfo, V_1);
			V_0 = ((Object_t *)Castclass(L_3, InitializedTypeInfo(&IContextProperty_t1569_il2cpp_TypeInfo)));
			NullCheck(V_0);
			String_t* L_4 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IContextProperty_get_Name_m10345_MethodInfo, V_0);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_5 = String_op_Equality_m145(NULL /*static, unused*/, L_4, ___name, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_0032:
		{
			V_2 = V_0;
			// IL_0034: leave.s IL_0054
			leaveInstructions[0] = 0x54; // 1
			THROW_SENTINEL(IL_0054);
			// finally target depth: 1
		}

IL_0036:
		{
			NullCheck(V_1);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m563_MethodInfo, V_1);
			if (L_6)
			{
				goto IL_0018;
			}
		}

IL_003e:
		{
			// IL_003e: leave.s IL_0052
			leaveInstructions[0] = 0x52; // 1
			THROW_SENTINEL(IL_0052);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0040;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0040;
	}

IL_0040:
	{ // begin finally (depth: 1)
		{
			V_3 = ((Object_t *)IsInst(V_1, InitializedTypeInfo(&IDisposable_t135_il2cpp_TypeInfo)));
			if (V_3)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x54:
					goto IL_0054;
				case 0x52:
					goto IL_0052;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_004b:
		{
			NullCheck(V_3);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m564_MethodInfo, V_3);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x54:
					goto IL_0054;
				case 0x52:
					goto IL_0052;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_0052:
	{
		return (Object_t *)NULL;
	}

IL_0054:
	{
		return V_2;
	}
}
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern MethodInfo Context_ToString_m8317_MethodInfo;
extern "C" String_t* Context_ToString_m8317 (Context_t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m591(NULL /*static, unused*/, (String_t*) &_stringLiteral1821, L_2, /*hidden argument*/&String_Concat_m591_MethodInfo);
		return L_3;
	}
}
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ContextAttribute_t1559_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"

extern MethodInfo IConstructionCallMessage_get_ContextProperties_m10346_MethodInfo;
extern MethodInfo IList_Add_m4108_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_ActivationType_m10347_MethodInfo;


// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern MethodInfo ContextAttribute__ctor_m8318_MethodInfo;
extern "C" void ContextAttribute__ctor_m8318 (ContextAttribute_t1559 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___AttributeName_0 = ___name;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern MethodInfo ContextAttribute_get_Name_m8319_MethodInfo;
extern "C" String_t* ContextAttribute_get_Name_m8319 (ContextAttribute_t1559 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern MethodInfo ContextAttribute_Equals_m8320_MethodInfo;
extern "C" bool ContextAttribute_Equals_m8320 (ContextAttribute_t1559 * __this, Object_t * ___o, MethodInfo* method)
{
	ContextAttribute_t1559 * V_0 = {0};
	{
		if (___o)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		if (((ContextAttribute_t1559 *)IsInst(___o, InitializedTypeInfo(&ContextAttribute_t1559_il2cpp_TypeInfo))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		V_0 = ((ContextAttribute_t1559 *)Castclass(___o, InitializedTypeInfo(&ContextAttribute_t1559_il2cpp_TypeInfo)));
		NullCheck(V_0);
		String_t* L_0 = (V_0->___AttributeName_0);
		String_t* L_1 = (__this->___AttributeName_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_op_Inequality_m2590(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_op_Inequality_m2590_MethodInfo);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		return 1;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern MethodInfo ContextAttribute_GetHashCode_m8321_MethodInfo;
extern "C" int32_t ContextAttribute_GetHashCode_m8321 (ContextAttribute_t1559 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		String_t* L_1 = (__this->___AttributeName_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3889_MethodInfo, L_1);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ContextAttribute_GetPropertiesForNewContext_m8322_MethodInfo;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m8322 (ContextAttribute_t1559 * __this, Object_t * ___ctorMsg, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		if (___ctorMsg)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1822, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		NullCheck(___ctorMsg);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_ContextProperties_m10346_MethodInfo, ___ctorMsg);
		V_0 = L_1;
		NullCheck(V_0);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IList_Add_m4108_MethodInfo, V_0, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ContextAttribute_IsContextOK_m8323_MethodInfo;
extern "C" bool ContextAttribute_IsContextOK_m8323 (ContextAttribute_t1559 * __this, Context_t1561 * ___ctx, Object_t * ___ctorMsg, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		if (___ctorMsg)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1822, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (___ctx)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral1823, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001c:
	{
		NullCheck(___ctorMsg);
		Type_t * L_2 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(&IConstructionCallMessage_get_ActivationType_m10347_MethodInfo, ___ctorMsg);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m6479_MethodInfo, L_2);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		String_t* L_4 = (__this->___AttributeName_0);
		NullCheck(___ctx);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m8316_MethodInfo, ___ctx, L_4);
		V_0 = L_5;
		if (V_0)
		{
			goto IL_003d;
		}
	}
	{
		return 0;
	}

IL_003d:
	{
		if ((((Object_t*)(ContextAttribute_t1559 *)__this) == ((Object_t*)(Object_t *)V_0)))
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}

IL_0043:
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
extern "C" void CrossContextChannel__ctor_m8324 (CrossContextChannel_t1563 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Contexts.IContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IContributeClientContextSink_t1903_il2cpp_TypeInfo;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IContributeServerContextSink_t1904_il2cpp_TypeInfo;



// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SynchronizationAttribute_t1572_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"

// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
extern TypeInfo WaitHandle_t1447_il2cpp_TypeInfo;
extern TypeInfo Mutex_t1570_il2cpp_TypeInfo;
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
extern MethodInfo WaitHandle_WaitOne_m9412_MethodInfo;
extern MethodInfo SynchronizationAttribute_ReleaseLock_m8328_MethodInfo;
extern MethodInfo Thread_get_CurrentThread_m9383_MethodInfo;
extern MethodInfo Mutex_ReleaseMutex_m9373_MethodInfo;
extern MethodInfo SynchronizationAttribute__ctor_m8326_MethodInfo;
extern MethodInfo Mutex__ctor_m9370_MethodInfo;
extern MethodInfo SynchronizationAttribute_set_Locked_m8327_MethodInfo;


// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern MethodInfo SynchronizationAttribute__ctor_m8325_MethodInfo;
extern "C" void SynchronizationAttribute__ctor_m8325 (SynchronizationAttribute_t1572 * __this, MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m8326(__this, 8, 0, /*hidden argument*/&SynchronizationAttribute__ctor_m8326_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern "C" void SynchronizationAttribute__ctor_m8326 (SynchronizationAttribute_t1572 * __this, int32_t ___flag, bool ___reEntrant, MethodInfo* method)
{
	{
		Mutex_t1570 * L_0 = (Mutex_t1570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Mutex_t1570_il2cpp_TypeInfo));
		Mutex__ctor_m9370(L_0, 0, /*hidden argument*/&Mutex__ctor_m9370_MethodInfo);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m8318(__this, (String_t*) &_stringLiteral1824, /*hidden argument*/&ContextAttribute__ctor_m8318_MethodInfo);
		if ((((int32_t)___flag) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		if ((((int32_t)___flag) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		if ((((int32_t)___flag) == ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		if ((((int32_t)___flag) == ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t522 * L_1 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_1, (String_t*) &_stringLiteral562, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0032:
	{
		__this->____bReEntrant_1 = ___reEntrant;
		__this->____flavor_2 = ___flag;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern "C" void SynchronizationAttribute_set_Locked_m8327 (SynchronizationAttribute_t1572 * __this, bool ___value, MethodInfo* method)
{
	SynchronizationAttribute_t1572 * V_0 = {0};
	SynchronizationAttribute_t1572 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (!___value)
		{
			goto IL_004a;
		}
	}
	{
		Mutex_t1570 * L_0 = (__this->____mutex_4);
		NullCheck(L_0);
		VirtFuncInvoker0< bool >::Invoke(&WaitHandle_WaitOne_m9412_MethodInfo, L_0);
		V_0 = __this;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_1+(int32_t)1));
			int32_t L_2 = (__this->____lockCount_3);
			if ((((int32_t)L_2) <= ((int32_t)1)))
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			SynchronizationAttribute_ReleaseLock_m8328(__this, /*hidden argument*/&SynchronizationAttribute_ReleaseLock_m8328_MethodInfo);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1571_il2cpp_TypeInfo));
			Thread_t1571 * L_3 = Thread_get_CurrentThread_m9383(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m9383_MethodInfo);
			__this->____ownerThread_5 = L_3;
			// IL_003f: leave.s IL_0048
			leaveInstructions[0] = 0x48; // 1
			THROW_SENTINEL(IL_0048);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0041;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0041;
	}

IL_0041:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x48:
				goto IL_0048;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0048:
	{
		goto IL_0093;
	}

IL_004a:
	{
		V_1 = __this;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0054:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t1570 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m9373(L_5, /*hidden argument*/&Mutex_ReleaseMutex_m9373_MethodInfo);
			__this->____ownerThread_5 = (Thread_t1571 *)NULL;
		}

IL_0074:
		{
			int32_t L_6 = (__this->____lockCount_3);
			if ((((int32_t)L_6) <= ((int32_t)0)))
			{
				goto IL_008a;
			}
		}

IL_007d:
		{
			Thread_t1571 * L_7 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1571_il2cpp_TypeInfo));
			Thread_t1571 * L_8 = Thread_get_CurrentThread_m9383(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m9383_MethodInfo);
			if ((((Object_t*)(Thread_t1571 *)L_7) == ((Object_t*)(Thread_t1571 *)L_8)))
			{
				goto IL_0054;
			}
		}

IL_008a:
		{
			// IL_008a: leave.s IL_0093
			leaveInstructions[0] = 0x93; // 1
			THROW_SENTINEL(IL_0093);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_008c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_008c;
	}

IL_008c:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x93:
				goto IL_0093;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0093:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern "C" void SynchronizationAttribute_ReleaseLock_m8328 (SynchronizationAttribute_t1572 * __this, MethodInfo* method)
{
	SynchronizationAttribute_t1572 * V_0 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = __this;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (__this->____lockCount_3);
			if ((((int32_t)L_0) <= ((int32_t)0)))
			{
				goto IL_003e;
			}
		}

IL_0011:
		{
			Thread_t1571 * L_1 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1571_il2cpp_TypeInfo));
			Thread_t1571 * L_2 = Thread_get_CurrentThread_m9383(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m9383_MethodInfo);
			if ((((Object_t*)(Thread_t1571 *)L_1) != ((Object_t*)(Thread_t1571 *)L_2)))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_3 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_3-(int32_t)1));
			Mutex_t1570 * L_4 = (__this->____mutex_4);
			NullCheck(L_4);
			Mutex_ReleaseMutex_m9373(L_4, /*hidden argument*/&Mutex_ReleaseMutex_m9373_MethodInfo);
			__this->____ownerThread_5 = (Thread_t1571 *)NULL;
		}

IL_003e:
		{
			// IL_003e: leave.s IL_0047
			leaveInstructions[0] = 0x47; // 1
			THROW_SENTINEL(IL_0047);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0040;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0040;
	}

IL_0040:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x47:
				goto IL_0047;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0047:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo SynchronizationAttribute_GetPropertiesForNewContext_m8329_MethodInfo;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m8329 (SynchronizationAttribute_t1572 * __this, Object_t * ___ctorMsg, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____flavor_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		NullCheck(___ctorMsg);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_ContextProperties_m10346_MethodInfo, ___ctorMsg);
		NullCheck(L_1);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IList_Add_m4108_MethodInfo, L_1, __this);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo SynchronizationAttribute_IsContextOK_m8330_MethodInfo;
extern "C" bool SynchronizationAttribute_IsContextOK_m8330 (SynchronizationAttribute_t1572 * __this, Context_t1561 * ___ctx, Object_t * ___msg, MethodInfo* method)
{
	SynchronizationAttribute_t1572 * V_0 = {0};
	int32_t V_1 = 0;
	{
		NullCheck(___ctx);
		Object_t * L_0 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m8316_MethodInfo, ___ctx, (String_t*) &_stringLiteral1824);
		V_0 = ((SynchronizationAttribute_t1572 *)IsInst(L_0, InitializedTypeInfo(&SynchronizationAttribute_t1572_il2cpp_TypeInfo)));
		int32_t L_1 = (__this->____flavor_2);
		V_1 = L_1;
		if (((int32_t)((int32_t)V_1-(int32_t)1)) == 0)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)1)) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)1)) == 2)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)1)) == 3)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)1)) == 4)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)1)) == 5)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)1)) == 6)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)1)) == 7)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0053;
	}

IL_0042:
	{
		return ((((Object_t*)(SynchronizationAttribute_t1572 *)V_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0047:
	{
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t1572 *)V_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		return 0;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern MethodInfo SynchronizationAttribute_ExitContext_m8331_MethodInfo;
extern "C" void SynchronizationAttribute_ExitContext_m8331 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	SynchronizationAttribute_t1572 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1571_il2cpp_TypeInfo));
		Context_t1561 * L_0 = Thread_get_CurrentContext_m9381(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m9381_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m8315(L_0, /*hidden argument*/&Context_get_IsDefaultContext_m8315_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1571_il2cpp_TypeInfo));
		Context_t1561 * L_2 = Thread_get_CurrentContext_m9381(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m9381_MethodInfo);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m8316_MethodInfo, L_2, (String_t*) &_stringLiteral1824);
		V_0 = ((SynchronizationAttribute_t1572 *)IsInst(L_3, InitializedTypeInfo(&SynchronizationAttribute_t1572_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		NullCheck(V_0);
		VirtActionInvoker1< bool >::Invoke(&SynchronizationAttribute_set_Locked_m8327_MethodInfo, V_0, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern MethodInfo SynchronizationAttribute_EnterContext_m8332_MethodInfo;
extern "C" void SynchronizationAttribute_EnterContext_m8332 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	SynchronizationAttribute_t1572 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1571_il2cpp_TypeInfo));
		Context_t1561 * L_0 = Thread_get_CurrentContext_m9381(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m9381_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m8315(L_0, /*hidden argument*/&Context_get_IsDefaultContext_m8315_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1571_il2cpp_TypeInfo));
		Context_t1561 * L_2 = Thread_get_CurrentContext_m9381(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m9381_MethodInfo);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m8316_MethodInfo, L_2, (String_t*) &_stringLiteral1824);
		V_0 = ((SynchronizationAttribute_t1572 *)IsInst(L_3, InitializedTypeInfo(&SynchronizationAttribute_t1572_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		NullCheck(V_0);
		VirtActionInvoker1< bool >::Invoke(&SynchronizationAttribute_set_Locked_m8327_MethodInfo, V_0, 1);
		return;
	}
}
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgInfoType_t1573_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgInfo_t1574_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"

extern TypeInfo Int32U5BU5D_t220_il2cpp_TypeInfo;
extern Il2CppType Int32U5BU5D_t220_0_0_0;
extern MethodInfo Type_get_IsByRef_m6477_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern MethodInfo ArgInfo__ctor_m8333_MethodInfo;
extern TypeInfo* Int32U5BU5D_t220_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m8333 (ArgInfo_t1574 * __this, MethodBase_t879 * ___method, uint8_t ___type, MethodInfo* method)
{
	static bool ArgInfo__ctor_m8333_init;
	if (!ArgInfo__ctor_m8333_init)
	{
		Int32U5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t220_0_0_0);
		ArgInfo__ctor_m8333_init = true;
	}
	ParameterInfoU5BU5D_t887* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->____method_2 = ___method;
		MethodBase_t879 * L_0 = (__this->____method_2);
		NullCheck(L_0);
		ParameterInfoU5BU5D_t887* L_1 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, L_0);
		V_0 = L_1;
		NullCheck(V_0);
		__this->____paramMap_0 = ((Int32U5BU5D_t220*)SZArrayNew(Int32U5BU5D_t220_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)V_0)->max_length)))));
		__this->____inoutArgCount_1 = 0;
		if (___type)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 0;
		goto IL_0061;
	}

IL_0035:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		int32_t L_2 = V_1;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_2)));
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_2)));
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6477_MethodInfo, L_3);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		Int32U5BU5D_t220* L_5 = (__this->____paramMap_0);
		int32_t L_6 = (__this->____inoutArgCount_1);
		int32_t L_7 = L_6;
		V_3 = L_7;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, V_3)) = (int32_t)V_1;
	}

IL_005d:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0061:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00a9;
	}

IL_0069:
	{
		V_2 = 0;
		goto IL_00a3;
	}

IL_006d:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		int32_t L_8 = V_2;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_8)));
		NullCheck(L_9);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6477_MethodInfo, L_9);
		if (L_10)
		{
			goto IL_0086;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		int32_t L_11 = V_2;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_11)));
		bool L_12 = ParameterInfo_get_IsOut_m8221((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_11)), /*hidden argument*/&ParameterInfo_get_IsOut_m8221_MethodInfo);
		if (!L_12)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		Int32U5BU5D_t220* L_13 = (__this->____paramMap_0);
		int32_t L_14 = (__this->____inoutArgCount_1);
		int32_t L_15 = L_14;
		V_3 = L_15;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_13, V_3)) = (int32_t)V_2;
	}

IL_009f:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_00a3:
	{
		NullCheck(V_0);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_006d;
		}
	}

IL_00a9:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern MethodInfo ArgInfo_GetInOutArgs_m8334_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t137* ArgInfo_GetInOutArgs_m8334 (ArgInfo_t1574 * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method)
{
	static bool ArgInfo_GetInOutArgs_m8334_init;
	if (!ArgInfo_GetInOutArgs_m8334_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		ArgInfo_GetInOutArgs_m8334_init = true;
	}
	ObjectU5BU5D_t137* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		Int32U5BU5D_t220* L_1 = (__this->____paramMap_0);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		int32_t L_2 = V_1;
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)));
		int32_t L_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2));
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		ArrayElementTypeCheck (V_0, (*(Object_t **)(Object_t **)SZArrayLdElema(___args, L_3)));
		*((Object_t **)(Object_t **)SZArrayLdElema(V_0, V_1)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(___args, L_3));
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_4 = (__this->____inoutArgCount_1);
		if ((((int32_t)V_1) < ((int32_t)L_4)))
		{
			goto IL_0010;
		}
	}
	{
		return V_0;
	}
}
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AsyncResult_t1579_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"

// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
extern TypeInfo ManualResetEvent_t1445_il2cpp_TypeInfo;
extern TypeInfo AsyncCallback_t266_il2cpp_TypeInfo;
extern TypeInfo IAsyncResult_t265_il2cpp_TypeInfo;
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
extern MethodInfo ManualResetEvent__ctor_m9369_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m701_MethodInfo;
extern MethodInfo AsyncResult_get_AsyncWaitHandle_m8337_MethodInfo;
extern MethodInfo EventWaitHandle_Set_m9365_MethodInfo;
extern MethodInfo AsyncCallback_Invoke_m6552_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern MethodInfo AsyncResult__ctor_m8335_MethodInfo;
extern "C" void AsyncResult__ctor_m8335 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern MethodInfo AsyncResult_get_AsyncState_m8336_MethodInfo;
extern "C" Object_t * AsyncResult_get_AsyncState_m8336 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1447 * AsyncResult_get_AsyncWaitHandle_m8337 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	AsyncResult_t1579 * V_0 = {0};
	WaitHandle_t1447 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = __this;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t1447 * L_0 = (__this->___handle_1);
			if (L_0)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_1 = (__this->___completed_6);
			ManualResetEvent_t1445 * L_2 = (ManualResetEvent_t1445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ManualResetEvent_t1445_il2cpp_TypeInfo));
			ManualResetEvent__ctor_m9369(L_2, L_1, /*hidden argument*/&ManualResetEvent__ctor_m9369_MethodInfo);
			__this->___handle_1 = L_2;
		}

IL_0021:
		{
			WaitHandle_t1447 * L_3 = (__this->___handle_1);
			V_1 = L_3;
			// IL_0028: leave.s IL_0033
			leaveInstructions[0] = 0x33; // 1
			THROW_SENTINEL(IL_0033);
			// finally target depth: 1
		}

IL_002a:
		{
			// IL_002a: leave.s IL_0033
			leaveInstructions[0] = 0x33; // 1
			THROW_SENTINEL(IL_0033);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_002c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_002c;
	}

IL_002c:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x33:
				goto IL_0033;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0033:
	{
		return V_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern MethodInfo AsyncResult_get_CompletedSynchronously_m8338_MethodInfo;
extern "C" bool AsyncResult_get_CompletedSynchronously_m8338 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern MethodInfo AsyncResult_get_IsCompleted_m8339_MethodInfo;
extern "C" bool AsyncResult_get_IsCompleted_m8339 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern MethodInfo AsyncResult_get_EndInvokeCalled_m8340_MethodInfo;
extern "C" bool AsyncResult_get_EndInvokeCalled_m8340 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern MethodInfo AsyncResult_set_EndInvokeCalled_m8341_MethodInfo;
extern "C" void AsyncResult_set_EndInvokeCalled_m8341 (AsyncResult_t1579 * __this, bool ___value, MethodInfo* method)
{
	{
		__this->___endinvoke_called_7 = ___value;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern MethodInfo AsyncResult_get_AsyncDelegate_m8342_MethodInfo;
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m8342 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern MethodInfo AsyncResult_get_NextSink_m8343_MethodInfo;
extern "C" Object_t * AsyncResult_get_NextSink_m8343 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern MethodInfo AsyncResult_AsyncProcessMessage_m8344_MethodInfo;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m8344 (AsyncResult_t1579 * __this, Object_t * ___msg, Object_t * ___replySink, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m701(L_0, /*hidden argument*/&NotSupportedException__ctor_m701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern MethodInfo AsyncResult_GetReplyMessage_m8345_MethodInfo;
extern "C" Object_t * AsyncResult_GetReplyMessage_m8345 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern MethodInfo AsyncResult_SetMessageCtrl_m8346_MethodInfo;
extern "C" void AsyncResult_SetMessageCtrl_m8346 (AsyncResult_t1579 * __this, Object_t * ___mc, MethodInfo* method)
{
	{
		__this->___message_ctrl_13 = ___mc;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern MethodInfo AsyncResult_SetCompletedSynchronously_m8347_MethodInfo;
extern "C" void AsyncResult_SetCompletedSynchronously_m8347 (AsyncResult_t1579 * __this, bool ___completed, MethodInfo* method)
{
	{
		__this->___sync_completed_5 = ___completed;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern MethodInfo AsyncResult_EndInvoke_m8348_MethodInfo;
extern "C" Object_t * AsyncResult_EndInvoke_m8348 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	AsyncResult_t1579 * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = __this;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (__this->___completed_6);
			if (!L_0)
			{
				goto IL_0019;
			}
		}

IL_0010:
		{
			Object_t * L_1 = (__this->___reply_message_14);
			V_1 = L_1;
			// IL_0017: leave.s IL_0035
			leaveInstructions[0] = 0x35; // 1
			THROW_SENTINEL(IL_0035);
			// finally target depth: 1
		}

IL_0019:
		{
			// IL_0019: leave.s IL_0022
			leaveInstructions[0] = 0x22; // 1
			THROW_SENTINEL(IL_0022);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_001b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_001b;
	}

IL_001b:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x35:
				goto IL_0035;
			case 0x22:
				goto IL_0022;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0022:
	{
		WaitHandle_t1447 * L_2 = (WaitHandle_t1447 *)VirtFuncInvoker0< WaitHandle_t1447 * >::Invoke(&AsyncResult_get_AsyncWaitHandle_m8337_MethodInfo, __this);
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(&WaitHandle_WaitOne_m9412_MethodInfo, L_2);
		Object_t * L_3 = (__this->___reply_message_14);
		return L_3;
	}

IL_0035:
	{
		return V_1;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern MethodInfo AsyncResult_SyncProcessMessage_m8349_MethodInfo;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m8349 (AsyncResult_t1579 * __this, Object_t * ___msg, MethodInfo* method)
{
	AsyncResult_t1579 * V_0 = {0};
	AsyncCallback_t266 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		__this->___reply_message_14 = ___msg;
		V_0 = __this;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t1447 * L_0 = (__this->___handle_1);
			if (!L_0)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			WaitHandle_t1447 * L_1 = (WaitHandle_t1447 *)VirtFuncInvoker0< WaitHandle_t1447 * >::Invoke(&AsyncResult_get_AsyncWaitHandle_m8337_MethodInfo, __this);
			NullCheck(((ManualResetEvent_t1445 *)Castclass(L_1, InitializedTypeInfo(&ManualResetEvent_t1445_il2cpp_TypeInfo))));
			EventWaitHandle_Set_m9365(((ManualResetEvent_t1445 *)Castclass(L_1, InitializedTypeInfo(&ManualResetEvent_t1445_il2cpp_TypeInfo))), /*hidden argument*/&EventWaitHandle_Set_m9365_MethodInfo);
		}

IL_002f:
		{
			// IL_002f: leave.s IL_0038
			leaveInstructions[0] = 0x38; // 1
			THROW_SENTINEL(IL_0038);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0031;
	}

IL_0031:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x38:
				goto IL_0038;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t140 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0038:
	{
		Object_t * L_2 = (__this->___async_callback_8);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_3 = (__this->___async_callback_8);
		V_1 = ((AsyncCallback_t266 *)Castclass(L_3, InitializedTypeInfo(&AsyncCallback_t266_il2cpp_TypeInfo)));
		NullCheck(V_1);
		VirtActionInvoker1< Object_t * >::Invoke(&AsyncCallback_Invoke_m6552_MethodInfo, V_1, __this);
	}

IL_0053:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern MethodInfo AsyncResult_get_CallMessage_m8350_MethodInfo;
extern "C" MonoMethodMessage_t1576 * AsyncResult_get_CallMessage_m8350 (AsyncResult_t1579 * __this, MethodInfo* method)
{
	{
		MonoMethodMessage_t1576 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern MethodInfo AsyncResult_set_CallMessage_m8351_MethodInfo;
extern "C" void AsyncResult_set_CallMessage_m8351 (AsyncResult_t1579 * __this, MonoMethodMessage_t1576 * ___value, MethodInfo* method)
{
	{
		__this->___call_message_12 = ___value;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
extern TypeInfo MethodCall_t1580_il2cpp_TypeInfo;
extern TypeInfo IDictionary_t602_il2cpp_TypeInfo;
extern TypeInfo ConstructionCallDictionary_t1581_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t9_il2cpp_TypeInfo;
extern TypeInfo SerializationInfo_t612_il2cpp_TypeInfo;
extern TypeInfo StreamingContext_t614_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
extern Il2CppType Dictionary_2_t9_0_0_0;
extern MethodInfo Type_GetType_m6496_MethodInfo;
extern MethodInfo MethodCall_get_Properties_m8391_MethodInfo;
extern MethodInfo MethodCall__ctor_m8382_MethodInfo;
extern MethodInfo Type_get_AssemblyQualifiedName_m3888_MethodInfo;
extern MethodInfo MethodCall__ctor_m8381_MethodInfo;
extern MethodInfo ConstructionCallDictionary__ctor_m8366_MethodInfo;
extern MethodInfo MethodDictionary_GetInternalProperties_m8413_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3937_MethodInfo;
extern MethodInfo Dictionary_2_Add_m137_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3938_MethodInfo;
extern MethodInfo MethodCall_InitMethodProperty_m8384_MethodInfo;
extern MethodInfo MethodCall_GetObjectData_m8385_MethodInfo;
extern MethodInfo ICollection_get_Count_m3849_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m3937_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m137_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3938_GenericMethod;


// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m8352 (ConstructionCall_t1553 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		MethodCall__ctor_m8382(__this, /*hidden argument*/&MethodCall__ctor_m8382_MethodInfo);
		__this->____activationType_14 = ___type;
		NullCheck(___type);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3888_MethodInfo, ___type);
		__this->____activationTypeName_15 = L_0;
		__this->____isContextOk_16 = 1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo ConstructionCall__ctor_m8353_MethodInfo;
extern "C" void ConstructionCall__ctor_m8353 (ConstructionCall_t1553 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		MethodCall__ctor_m8381(__this, ___info, ___context, /*hidden argument*/&MethodCall__ctor_m8381_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern MethodInfo ConstructionCall_InitDictionary_m8354_MethodInfo;
extern "C" void ConstructionCall_InitDictionary_m8354 (ConstructionCall_t1553 * __this, MethodInfo* method)
{
	ConstructionCallDictionary_t1581 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo));
		ConstructionCallDictionary_t1581 * L_0 = (ConstructionCallDictionary_t1581 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo));
		ConstructionCallDictionary__ctor_m8366(L_0, __this, /*hidden argument*/&ConstructionCallDictionary__ctor_m8366_MethodInfo);
		V_0 = L_0;
		__this->___ExternalProperties_8 = V_0;
		NullCheck(V_0);
		Object_t * L_1 = MethodDictionary_GetInternalProperties_m8413(V_0, /*hidden argument*/&MethodDictionary_GetInternalProperties_m8413_MethodInfo);
		__this->___InternalProperties_9 = L_1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m8355 (ConstructionCall_t1553 * __this, bool ___value, MethodInfo* method)
{
	{
		__this->____isContextOk_16 = ___value;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern MethodInfo ConstructionCall_get_ActivationType_m8356_MethodInfo;
extern "C" Type_t * ConstructionCall_get_ActivationType_m8356 (ConstructionCall_t1553 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____activationType_14);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = (__this->____activationTypeName_15);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetType_m6496(NULL /*static, unused*/, L_1, /*hidden argument*/&Type_GetType_m6496_MethodInfo);
		__this->____activationType_14 = L_2;
	}

IL_0019:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern MethodInfo ConstructionCall_get_ActivationTypeName_m8357_MethodInfo;
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m8357 (ConstructionCall_t1553 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern MethodInfo ConstructionCall_get_Activator_m8358_MethodInfo;
extern "C" Object_t * ConstructionCall_get_Activator_m8358 (ConstructionCall_t1553 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m8359 (ConstructionCall_t1553 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		__this->____activator_11 = ___value;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern MethodInfo ConstructionCall_get_CallSiteActivationAttributes_m8360_MethodInfo;
extern "C" ObjectU5BU5D_t137* ConstructionCall_get_CallSiteActivationAttributes_m8360 (ConstructionCall_t1553 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t137* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m8361 (ConstructionCall_t1553 * __this, ObjectU5BU5D_t137* ___attributes, MethodInfo* method)
{
	{
		__this->____activationAttributes_12 = ___attributes;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern MethodInfo ConstructionCall_get_ContextProperties_m8362_MethodInfo;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m8362 (ConstructionCall_t1553 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____contextProperties_13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList_t610 * L_1 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m3875(L_1, /*hidden argument*/&ArrayList__ctor_m3875_MethodInfo);
		__this->____contextProperties_13 = L_1;
	}

IL_0013:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern MethodInfo ConstructionCall_InitMethodProperty_m8363_MethodInfo;
extern TypeInfo* Dictionary_2_t9_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3937_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m137_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m3938_MethodInfo_var;
extern "C" void ConstructionCall_InitMethodProperty_m8363 (ConstructionCall_t1553 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool ConstructionCall_InitMethodProperty_m8363_init;
	if (!ConstructionCall_InitMethodProperty_m8363_init)
	{
		Dictionary_2_t9_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t9_0_0_0);
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Dictionary_2__ctor_m3937_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3937_GenericMethod);
		Dictionary_2_Add_m137_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m137_GenericMethod);
		Dictionary_2_TryGetValue_m3938_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3938_GenericMethod);
		ConstructionCall_InitMethodProperty_m8363_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t9 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = ___key;
		if (!V_0)
		{
			goto IL_00c4;
		}
	}
	{
		if ((((ConstructionCall_t1553_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1553_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17))
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t9 * L_0 = (Dictionary_2_t9 *)il2cpp_codegen_object_new (Dictionary_2_t9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3937(L_0, 5, /*hidden argument*/Dictionary_2__ctor_m3937_MethodInfo_var);
		V_1 = L_0;
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1825, 0);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1826, 1);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1827, 2);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1828, 3);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1829, 4);
		((ConstructionCall_t1553_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1553_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17 = V_1;
	}

IL_0058:
	{
		NullCheck((((ConstructionCall_t1553_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1553_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17));
		bool L_1 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m3938_MethodInfo_var, (((ConstructionCall_t1553_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1553_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_00c4;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_0083;
		}
		if (V_2 == 1)
		{
			goto IL_0090;
		}
		if (V_2 == 2)
		{
			goto IL_009d;
		}
		if (V_2 == 3)
		{
			goto IL_00aa;
		}
		if (V_2 == 4)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00c4;
	}

IL_0083:
	{
		__this->____activator_11 = ((Object_t *)Castclass(___value, InitializedTypeInfo(&IActivator_t1551_il2cpp_TypeInfo)));
		return;
	}

IL_0090:
	{
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t137*)Castclass(___value, ObjectU5BU5D_t137_il2cpp_TypeInfo_var));
		return;
	}

IL_009d:
	{
		__this->____activationType_14 = ((Type_t *)Castclass(___value, InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)));
		return;
	}

IL_00aa:
	{
		__this->____contextProperties_13 = ((Object_t *)Castclass(___value, InitializedTypeInfo(&IList_t743_il2cpp_TypeInfo)));
		return;
	}

IL_00b7:
	{
		__this->____activationTypeName_15 = ((String_t*)Castclass(___value, (&String_t_il2cpp_TypeInfo)));
		return;
	}

IL_00c4:
	{
		MethodCall_InitMethodProperty_m8384(__this, ___key, ___value, /*hidden argument*/&MethodCall_InitMethodProperty_m8384_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo ConstructionCall_GetObjectData_m8364_MethodInfo;
extern "C" void ConstructionCall_GetObjectData_m8364 (ConstructionCall_t1553 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		MethodCall_GetObjectData_m8385(__this, ___info, ___context, /*hidden argument*/&MethodCall_GetObjectData_m8385_MethodInfo);
		Object_t * L_0 = (__this->____contextProperties_13);
		V_0 = L_0;
		if (!V_0)
		{
			goto IL_001c;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ICollection_get_Count_m3849_MethodInfo, V_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (Object_t *)NULL;
	}

IL_001c:
	{
		Object_t * L_2 = (__this->____activator_11);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1825, L_2, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		ObjectU5BU5D_t137* L_3 = (__this->____activationAttributes_12);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1826, (Object_t *)(Object_t *)L_3, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1827, NULL, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1828, V_0, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		String_t* L_4 = (__this->____activationTypeName_15);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1829, L_4, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern MethodInfo ConstructionCall_get_Properties_m8365_MethodInfo;
extern "C" Object_t * ConstructionCall_get_Properties_m8365 (ConstructionCall_t1553 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m8391(__this, /*hidden argument*/&MethodCall_get_Properties_m8391_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"
extern TypeInfo MethodDictionary_t1582_il2cpp_TypeInfo;
extern MethodInfo MethodDictionary__ctor_m8409_MethodInfo;
extern MethodInfo MethodDictionary_set_MethodKeys_m8411_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_Activator_m10348_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_CallSiteActivationAttributes_m10349_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_ActivationTypeName_m10350_MethodInfo;
extern MethodInfo MethodDictionary_GetMethodProperty_m8417_MethodInfo;
extern MethodInfo IConstructionCallMessage_set_Activator_m10351_MethodInfo;
extern MethodInfo MethodDictionary_SetMethodProperty_m8418_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ConstructionCallDictionary__ctor_m8366 (ConstructionCallDictionary_t1581 * __this, Object_t * ___message, MethodInfo* method)
{
	{
		MethodDictionary__ctor_m8409(__this, ___message, /*hidden argument*/&MethodDictionary__ctor_m8409_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo));
		MethodDictionary_set_MethodKeys_m8411(__this, (((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6), /*hidden argument*/&MethodDictionary_set_MethodKeys_m8411_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern MethodInfo ConstructionCallDictionary__cctor_m8367_MethodInfo;
extern TypeInfo* StringU5BU5D_t17_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__cctor_m8367 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ConstructionCallDictionary__cctor_m8367_init;
	if (!ConstructionCallDictionary__cctor_m8367_init)
	{
		StringU5BU5D_t17_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t17_0_0_0);
		ConstructionCallDictionary__cctor_m8367_init = true;
	}
	{
		StringU5BU5D_t17* L_0 = ((StringU5BU5D_t17*)SZArrayNew(StringU5BU5D_t17_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1830);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1830;
		StringU5BU5D_t17* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral1831);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral1831;
		StringU5BU5D_t17* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1832);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral1832;
		StringU5BU5D_t17* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1833);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral1833;
		StringU5BU5D_t17* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral1834);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral1834;
		StringU5BU5D_t17* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1835);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral1835;
		StringU5BU5D_t17* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1826);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral1826;
		StringU5BU5D_t17* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral1827);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7)) = (String_t*)(String_t*) &_stringLiteral1827;
		StringU5BU5D_t17* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral1828);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8)) = (String_t*)(String_t*) &_stringLiteral1828;
		StringU5BU5D_t17* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1825);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9))) = (String_t*)(String_t*) &_stringLiteral1825;
		StringU5BU5D_t17* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral1829);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral1829;
		((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern MethodInfo ConstructionCallDictionary_GetMethodProperty_m8368_MethodInfo;
extern TypeInfo* Dictionary_2_t9_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3937_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m137_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m3938_MethodInfo_var;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m8368 (ConstructionCallDictionary_t1581 * __this, String_t* ___key, MethodInfo* method)
{
	static bool ConstructionCallDictionary_GetMethodProperty_m8368_init;
	if (!ConstructionCallDictionary_GetMethodProperty_m8368_init)
	{
		Dictionary_2_t9_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t9_0_0_0);
		Dictionary_2__ctor_m3937_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3937_GenericMethod);
		Dictionary_2_Add_m137_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m137_GenericMethod);
		Dictionary_2_TryGetValue_m3938_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3938_GenericMethod);
		ConstructionCallDictionary_GetMethodProperty_m8368_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t9 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = ___key;
		if (!V_0)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo));
		if ((((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7))
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t9 * L_0 = (Dictionary_2_t9 *)il2cpp_codegen_object_new (Dictionary_2_t9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3937(L_0, 5, /*hidden argument*/Dictionary_2__ctor_m3937_MethodInfo_var);
		V_1 = L_0;
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1825, 0);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1826, 1);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1827, 2);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1828, 3);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1829, 4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo));
		((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7 = V_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo));
		NullCheck((((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7));
		bool L_1 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m3938_MethodInfo_var, (((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_0083;
		}
		if (V_2 == 1)
		{
			goto IL_0094;
		}
		if (V_2 == 2)
		{
			goto IL_00a5;
		}
		if (V_2 == 3)
		{
			goto IL_00b6;
		}
		if (V_2 == 4)
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d8;
	}

IL_0083:
	{
		Object_t * L_2 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_2, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_Activator_m10348_MethodInfo, ((Object_t *)Castclass(L_2, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		return L_3;
	}

IL_0094:
	{
		Object_t * L_4 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_4, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		ObjectU5BU5D_t137* L_5 = (ObjectU5BU5D_t137*)InterfaceFuncInvoker0< ObjectU5BU5D_t137* >::Invoke(&IConstructionCallMessage_get_CallSiteActivationAttributes_m10349_MethodInfo, ((Object_t *)Castclass(L_4, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		return (Object_t *)L_5;
	}

IL_00a5:
	{
		Object_t * L_6 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_6, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		Type_t * L_7 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(&IConstructionCallMessage_get_ActivationType_m10347_MethodInfo, ((Object_t *)Castclass(L_6, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		return L_7;
	}

IL_00b6:
	{
		Object_t * L_8 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_8, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		Object_t * L_9 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_ContextProperties_m10346_MethodInfo, ((Object_t *)Castclass(L_8, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		return L_9;
	}

IL_00c7:
	{
		Object_t * L_10 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_10, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		String_t* L_11 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IConstructionCallMessage_get_ActivationTypeName_m10350_MethodInfo, ((Object_t *)Castclass(L_10, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		return L_11;
	}

IL_00d8:
	{
		Object_t * L_12 = MethodDictionary_GetMethodProperty_m8417(__this, ___key, /*hidden argument*/&MethodDictionary_GetMethodProperty_m8417_MethodInfo);
		return L_12;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern MethodInfo ConstructionCallDictionary_SetMethodProperty_m8369_MethodInfo;
extern TypeInfo* Dictionary_2_t9_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3937_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m137_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m3938_MethodInfo_var;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m8369 (ConstructionCallDictionary_t1581 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool ConstructionCallDictionary_SetMethodProperty_m8369_init;
	if (!ConstructionCallDictionary_SetMethodProperty_m8369_init)
	{
		Dictionary_2_t9_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t9_0_0_0);
		Dictionary_2__ctor_m3937_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3937_GenericMethod);
		Dictionary_2_Add_m137_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m137_GenericMethod);
		Dictionary_2_TryGetValue_m3938_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3938_GenericMethod);
		ConstructionCallDictionary_SetMethodProperty_m8369_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t9 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = ___key;
		if (!V_0)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo));
		if ((((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8))
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t9 * L_0 = (Dictionary_2_t9 *)il2cpp_codegen_object_new (Dictionary_2_t9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3937(L_0, 5, /*hidden argument*/Dictionary_2__ctor_m3937_MethodInfo_var);
		V_1 = L_0;
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1825, 0);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1826, 1);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1827, 1);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1828, 1);
		NullCheck(V_1);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m137_MethodInfo_var, V_1, (String_t*) &_stringLiteral1829, 1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo));
		((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8 = V_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo));
		NullCheck((((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8));
		bool L_1 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m3938_MethodInfo_var, (((ConstructionCallDictionary_t1581_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1581_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		if (!V_2)
		{
			goto IL_0070;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0093;
	}

IL_0070:
	{
		Object_t * L_2 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_2, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))));
		InterfaceActionInvoker1< Object_t * >::Invoke(&IConstructionCallMessage_set_Activator_m10351_MethodInfo, ((Object_t *)Castclass(L_2, InitializedTypeInfo(&IConstructionCallMessage_t1560_il2cpp_TypeInfo))), ((Object_t *)Castclass(___value, InitializedTypeInfo(&IActivator_t1551_il2cpp_TypeInfo))));
		goto IL_009d;
	}

IL_0088:
	{
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_3, (String_t*) &_stringLiteral1836, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0093:
	{
		MethodDictionary_SetMethodProperty_m8418(__this, ___key, ___value, /*hidden argument*/&MethodDictionary_SetMethodProperty_m8418_MethodInfo);
		goto IL_009d;
	}

IL_009d:
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EnvoyTerminatorSink_t1583_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"

extern MethodInfo EnvoyTerminatorSink__ctor_m8370_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
extern "C" void EnvoyTerminatorSink__ctor_m8370 (EnvoyTerminatorSink_t1583 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
extern MethodInfo EnvoyTerminatorSink__cctor_m8371_MethodInfo;
extern "C" void EnvoyTerminatorSink__cctor_m8371 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		EnvoyTerminatorSink_t1583 * L_0 = (EnvoyTerminatorSink_t1583 *)il2cpp_codegen_object_new (InitializedTypeInfo(&EnvoyTerminatorSink_t1583_il2cpp_TypeInfo));
		EnvoyTerminatorSink__ctor_m8370(L_0, /*hidden argument*/&EnvoyTerminatorSink__ctor_m8370_MethodInfo);
		((EnvoyTerminatorSink_t1583_StaticFields*)InitializedTypeInfo(&EnvoyTerminatorSink_t1583_il2cpp_TypeInfo)->static_fields)->___Instance_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Header_t1584_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"

extern MethodInfo Header__ctor_m8373_MethodInfo;
extern MethodInfo Header__ctor_m8374_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
extern MethodInfo Header__ctor_m8372_MethodInfo;
extern "C" void Header__ctor_m8372 (Header_t1584 * __this, String_t* ____Name, Object_t * ____Value, MethodInfo* method)
{
	{
		Header__ctor_m8373(__this, ____Name, ____Value, 1, /*hidden argument*/&Header__ctor_m8373_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern "C" void Header__ctor_m8373 (Header_t1584 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, MethodInfo* method)
{
	{
		Header__ctor_m8374(__this, ____Name, ____Value, ____MustUnderstand, (String_t*)NULL, /*hidden argument*/&Header__ctor_m8374_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern "C" void Header__ctor_m8374 (Header_t1584 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___Name_2 = ____Name;
		__this->___Value_3 = ____Value;
		__this->___MustUnderstand_1 = ____MustUnderstand;
		__this->___HeaderNamespace_0 = ____HeaderNamespace;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IInternalMessage_t1905_il2cpp_TypeInfo;



// System.Void System.Runtime.Remoting.Messaging.IInternalMessage::set_Uri(System.String)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
