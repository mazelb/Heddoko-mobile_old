#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.RankException
#include "mscorlib_System_RankException.h"
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
extern TypeInfo RankException_t1835_il2cpp_TypeInfo;
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Locale_GetText_m6561_MethodInfo;
extern MethodInfo SystemException__ctor_m4066_MethodInfo;
extern MethodInfo Exception_set_HResult_m5535_MethodInfo;
extern MethodInfo SystemException__ctor_m10124_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.RankException::.ctor()
extern MethodInfo RankException__ctor_m10101_MethodInfo;
extern "C" void RankException__ctor_m10101 (RankException_t1835 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2470, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		SystemException__ctor_m4066(__this, L_0, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233065), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.RankException::.ctor(System.String)
extern MethodInfo RankException__ctor_m10102_MethodInfo;
extern "C" void RankException__ctor_m10102 (RankException_t1835 * __this, String_t* ___message, MethodInfo* method)
{
	{
		SystemException__ctor_m4066(__this, ___message, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233065), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.RankException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo RankException__ctor_m10103_MethodInfo;
extern "C" void RankException__ctor_m10103 (RankException_t1835 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		SystemException__ctor_m10124(__this, ___info, ___context, /*hidden argument*/&SystemException__ctor_m10124_MethodInfo);
		return;
	}
}
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResolveEventArgs_t1836_il2cpp_TypeInfo;
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgsMethodDeclarations.h"



// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimeMethodHandle_t1474_il2cpp_TypeInfo;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
extern TypeInfo ArgumentNullException_t785_il2cpp_TypeInfo;
extern TypeInfo MonoMethod_t1508_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo IntPtr_t98_il2cpp_TypeInfo;
extern TypeInfo SerializationException_t788_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern Il2CppType MonoMethod_t1508_0_0_0;
extern MethodInfo ArgumentNullException__ctor_m3869_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m3880_MethodInfo;
extern MethodInfo MonoMethod_get_MethodHandle_m8148_MethodInfo;
extern MethodInfo RuntimeMethodHandle_get_Value_m10106_MethodInfo;
extern MethodInfo IntPtr_op_Equality_m5542_MethodInfo;
extern MethodInfo SerializationException__ctor_m3881_MethodInfo;
extern MethodInfo MethodBase_GetMethodFromHandle_m8066_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3877_MethodInfo;
extern MethodInfo Object_GetType_m2357_MethodInfo;
extern MethodInfo IntPtr_GetHashCode_m6292_MethodInfo;


// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
extern MethodInfo RuntimeMethodHandle__ctor_m10104_MethodInfo;
extern "C" void RuntimeMethodHandle__ctor_m10104 (RuntimeMethodHandle_t1474 * __this, IntPtr_t98 ___v, MethodInfo* method)
{
	{
		__this->___value_0 = ___v;
		return;
	}
}
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo RuntimeMethodHandle__ctor_m10105_MethodInfo;
extern "C" void RuntimeMethodHandle__ctor_m10105 (RuntimeMethodHandle_t1474 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	MonoMethod_t1508 * V_0 = {0};
	RuntimeMethodHandle_t1474  V_1 = {0};
	{
		if (___info)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral412, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&MonoMethod_t1508_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		Object_t * L_2 = SerializationInfo_GetValue_m3880(___info, (String_t*) &_stringLiteral2471, L_1, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		V_0 = ((MonoMethod_t1508 *)Castclass(L_2, InitializedTypeInfo(&MonoMethod_t1508_il2cpp_TypeInfo)));
		NullCheck(V_0);
		RuntimeMethodHandle_t1474  L_3 = (RuntimeMethodHandle_t1474 )VirtFuncInvoker0< RuntimeMethodHandle_t1474  >::Invoke(&MonoMethod_get_MethodHandle_m8148_MethodInfo, V_0);
		V_1 = L_3;
		IntPtr_t98 L_4 = RuntimeMethodHandle_get_Value_m10106((&V_1), /*hidden argument*/&RuntimeMethodHandle_get_Value_m10106_MethodInfo);
		__this->___value_0 = L_4;
		IntPtr_t98 L_5 = (__this->___value_0);
		bool L_6 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_5, (((IntPtr_t98_StaticFields*)InitializedTypeInfo(&IntPtr_t98_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1150, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		SerializationException_t788 * L_8 = (SerializationException_t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t788_il2cpp_TypeInfo));
		SerializationException__ctor_m3881(L_8, L_7, /*hidden argument*/&SerializationException__ctor_m3881_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_005f:
	{
		return;
	}
}
// System.IntPtr System.RuntimeMethodHandle::get_Value()
extern "C" IntPtr_t98 RuntimeMethodHandle_get_Value_m10106 (RuntimeMethodHandle_t1474 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___value_0);
		return L_0;
	}
}
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo RuntimeMethodHandle_GetObjectData_m10107_MethodInfo;
extern "C" void RuntimeMethodHandle_GetObjectData_m10107 (RuntimeMethodHandle_t1474 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		if (___info)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral412, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		IntPtr_t98 L_1 = (__this->___value_0);
		bool L_2 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_1, (((IntPtr_t98_StaticFields*)InitializedTypeInfo(&IntPtr_t98_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SerializationException_t788 * L_3 = (SerializationException_t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t788_il2cpp_TypeInfo));
		SerializationException__ctor_m3881(L_3, (String_t*) &_stringLiteral1151, /*hidden argument*/&SerializationException__ctor_m3881_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		MethodBase_t879 * L_4 = MethodBase_GetMethodFromHandle_m8066(NULL /*static, unused*/, (*(RuntimeMethodHandle_t1474 *)__this), /*hidden argument*/&MethodBase_GetMethodFromHandle_m8066_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&MonoMethod_t1508_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral2471, ((MonoMethod_t1508 *)Castclass(L_4, InitializedTypeInfo(&MonoMethod_t1508_il2cpp_TypeInfo))), L_5, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		return;
	}
}
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
extern MethodInfo RuntimeMethodHandle_Equals_m10108_MethodInfo;
extern "C" bool RuntimeMethodHandle_Equals_m10108 (RuntimeMethodHandle_t1474 * __this, Object_t * ___obj, MethodInfo* method)
{
	RuntimeMethodHandle_t1474  V_0 = {0};
	{
		if (!___obj)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeMethodHandle_t1474  L_0 = (*(RuntimeMethodHandle_t1474 *)__this);
		Object_t * L_1 = Box(InitializedTypeInfo(&RuntimeMethodHandle_t1474_il2cpp_TypeInfo), &L_0);
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m2357(L_1, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(___obj);
		Type_t * L_3 = Object_GetType_m2357(___obj, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		if ((((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3)))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return 0;
	}

IL_001d:
	{
		IntPtr_t98 L_4 = (__this->___value_0);
		V_0 = ((*(RuntimeMethodHandle_t1474 *)((RuntimeMethodHandle_t1474 *)UnBox (___obj, InitializedTypeInfo(&RuntimeMethodHandle_t1474_il2cpp_TypeInfo)))));
		IntPtr_t98 L_5 = RuntimeMethodHandle_get_Value_m10106((&V_0), /*hidden argument*/&RuntimeMethodHandle_get_Value_m10106_MethodInfo);
		bool L_6 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		return L_6;
	}
}
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
extern MethodInfo RuntimeMethodHandle_GetHashCode_m10109_MethodInfo;
extern "C" int32_t RuntimeMethodHandle_GetHashCode_m10109 (RuntimeMethodHandle_t1474 * __this, MethodInfo* method)
{
	{
		IntPtr_t98* L_0 = &(__this->___value_0);
		int32_t L_1 = IntPtr_GetHashCode_m6292(L_0, /*hidden argument*/&IntPtr_GetHashCode_m6292_MethodInfo);
		return L_1;
	}
}
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StringComparer_t794_il2cpp_TypeInfo;
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"

// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.CultureAwareComparer
#include "mscorlib_System_CultureAwareComparer.h"
// System.OrdinalComparer
#include "mscorlib_System_OrdinalComparer.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo CultureInfo_t791_il2cpp_TypeInfo;
extern TypeInfo CultureAwareComparer_t1837_il2cpp_TypeInfo;
extern TypeInfo OrdinalComparer_t1838_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo IComparable_t60_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t522_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.CultureAwareComparer
#include "mscorlib_System_CultureAwareComparerMethodDeclarations.h"
// System.OrdinalComparer
#include "mscorlib_System_OrdinalComparerMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo Object__ctor_m127_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m3905_MethodInfo;
extern MethodInfo CultureAwareComparer__ctor_m10115_MethodInfo;
extern MethodInfo OrdinalComparer__ctor_m10119_MethodInfo;
extern MethodInfo StringComparer_Compare_m10439_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9445_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10265_MethodInfo;
extern MethodInfo StringComparer_Equals_m10440_MethodInfo;
extern MethodInfo Object_Equals_m225_MethodInfo;
extern MethodInfo Object_GetHashCode_m227_MethodInfo;
extern MethodInfo StringComparer_GetHashCode_m10441_MethodInfo;


// System.Void System.StringComparer::.ctor()
extern MethodInfo StringComparer__ctor_m10110_MethodInfo;
extern "C" void StringComparer__ctor_m10110 (StringComparer_t794 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.StringComparer::.cctor()
extern MethodInfo StringComparer__cctor_m10111_MethodInfo;
extern "C" void StringComparer__cctor_m10111 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t791_il2cpp_TypeInfo));
		CultureInfo_t791 * L_0 = CultureInfo_get_InvariantCulture_m3905(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3905_MethodInfo);
		CultureAwareComparer_t1837 * L_1 = (CultureAwareComparer_t1837 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CultureAwareComparer_t1837_il2cpp_TypeInfo));
		CultureAwareComparer__ctor_m10115(L_1, L_0, 1, /*hidden argument*/&CultureAwareComparer__ctor_m10115_MethodInfo);
		((StringComparer_t794_StaticFields*)InitializedTypeInfo(&StringComparer_t794_il2cpp_TypeInfo)->static_fields)->___invariantCultureIgnoreCase_0 = L_1;
		CultureInfo_t791 * L_2 = CultureInfo_get_InvariantCulture_m3905(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3905_MethodInfo);
		CultureAwareComparer_t1837 * L_3 = (CultureAwareComparer_t1837 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CultureAwareComparer_t1837_il2cpp_TypeInfo));
		CultureAwareComparer__ctor_m10115(L_3, L_2, 0, /*hidden argument*/&CultureAwareComparer__ctor_m10115_MethodInfo);
		((StringComparer_t794_StaticFields*)InitializedTypeInfo(&StringComparer_t794_il2cpp_TypeInfo)->static_fields)->___invariantCulture_1 = L_3;
		OrdinalComparer_t1838 * L_4 = (OrdinalComparer_t1838 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OrdinalComparer_t1838_il2cpp_TypeInfo));
		OrdinalComparer__ctor_m10119(L_4, 1, /*hidden argument*/&OrdinalComparer__ctor_m10119_MethodInfo);
		((StringComparer_t794_StaticFields*)InitializedTypeInfo(&StringComparer_t794_il2cpp_TypeInfo)->static_fields)->___ordinalIgnoreCase_2 = L_4;
		OrdinalComparer_t1838 * L_5 = (OrdinalComparer_t1838 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OrdinalComparer_t1838_il2cpp_TypeInfo));
		OrdinalComparer__ctor_m10119(L_5, 0, /*hidden argument*/&OrdinalComparer__ctor_m10119_MethodInfo);
		((StringComparer_t794_StaticFields*)InitializedTypeInfo(&StringComparer_t794_il2cpp_TypeInfo)->static_fields)->___ordinal_3 = L_5;
		return;
	}
}
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
extern MethodInfo StringComparer_get_InvariantCultureIgnoreCase_m3925_MethodInfo;
extern "C" StringComparer_t794 * StringComparer_get_InvariantCultureIgnoreCase_m3925 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StringComparer_t794_il2cpp_TypeInfo));
		return (((StringComparer_t794_StaticFields*)InitializedTypeInfo(&StringComparer_t794_il2cpp_TypeInfo)->static_fields)->___invariantCultureIgnoreCase_0);
	}
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern MethodInfo StringComparer_get_OrdinalIgnoreCase_m5596_MethodInfo;
extern "C" StringComparer_t794 * StringComparer_get_OrdinalIgnoreCase_m5596 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StringComparer_t794_il2cpp_TypeInfo));
		return (((StringComparer_t794_StaticFields*)InitializedTypeInfo(&StringComparer_t794_il2cpp_TypeInfo)->static_fields)->___ordinalIgnoreCase_2);
	}
}
// System.Int32 System.StringComparer::Compare(System.Object,System.Object)
extern MethodInfo StringComparer_Compare_m10112_MethodInfo;
extern "C" int32_t StringComparer_Compare_m10112 (StringComparer_t794 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	{
		if ((((Object_t*)(Object_t *)___x) != ((Object_t*)(Object_t *)___y)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		V_0 = ((String_t*)IsInst(___x, (&String_t_il2cpp_TypeInfo)));
		if (!V_0)
		{
			goto IL_002d;
		}
	}
	{
		V_1 = ((String_t*)IsInst(___y, (&String_t_il2cpp_TypeInfo)));
		if (!V_1)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(&StringComparer_Compare_m10439_MethodInfo, __this, V_0, V_1);
		return L_0;
	}

IL_002d:
	{
		V_2 = ((Object_t *)IsInst(___x, InitializedTypeInfo(&IComparable_t60_il2cpp_TypeInfo)));
		if (V_2)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentException_t522 * L_1 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m9445(L_1, /*hidden argument*/&ArgumentException__ctor_m9445_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_003d:
	{
		NullCheck(V_2);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m10265_MethodInfo, V_2, ___y);
		return L_2;
	}
}
// System.Boolean System.StringComparer::Equals(System.Object,System.Object)
extern MethodInfo StringComparer_Equals_m10113_MethodInfo;
extern "C" bool StringComparer_Equals_m10113 (StringComparer_t794 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		if ((((Object_t*)(Object_t *)___x) != ((Object_t*)(Object_t *)___y)))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		if (!___x)
		{
			goto IL_000c;
		}
	}
	{
		if (___y)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return 0;
	}

IL_000e:
	{
		V_0 = ((String_t*)IsInst(___x, (&String_t_il2cpp_TypeInfo)));
		if (!V_0)
		{
			goto IL_002b;
		}
	}
	{
		V_1 = ((String_t*)IsInst(___y, (&String_t_il2cpp_TypeInfo)));
		if (!V_1)
		{
			goto IL_002b;
		}
	}
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(&StringComparer_Equals_m10440_MethodInfo, __this, V_0, V_1);
		return L_0;
	}

IL_002b:
	{
		NullCheck(___x);
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m225_MethodInfo, ___x, ___y);
		return L_1;
	}
}
// System.Int32 System.StringComparer::GetHashCode(System.Object)
extern MethodInfo StringComparer_GetHashCode_m10114_MethodInfo;
extern "C" int32_t StringComparer_GetHashCode_m10114 (StringComparer_t794 * __this, Object_t * ___obj, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		if (___obj)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1439, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		V_0 = ((String_t*)IsInst(___obj, (&String_t_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_0020;
		}
	}
	{
		NullCheck(___obj);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m227_MethodInfo, ___obj);
		G_B5_0 = L_1;
		goto IL_0027;
	}

IL_0020:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, String_t* >::Invoke(&StringComparer_GetHashCode_m10441_MethodInfo, __this, V_0);
		G_B5_0 = L_2;
	}

IL_0027:
	{
		return G_B5_0;
	}
}
// System.Int32 System.StringComparer::Compare(System.String,System.String)
// System.Boolean System.StringComparer::Equals(System.String,System.String)
// System.Int32 System.StringComparer::GetHashCode(System.String)
#ifndef _MSC_VER
#else
#endif

// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfo.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// System.Globalization.SortKey
#include "mscorlib_System_Globalization_SortKey.h"
extern TypeInfo CompareInfo_t1391_il2cpp_TypeInfo;
extern TypeInfo CompareOptions_t1415_il2cpp_TypeInfo;
extern TypeInfo SortKey_t1304_il2cpp_TypeInfo;
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfoMethodDeclarations.h"
// System.Globalization.SortKey
#include "mscorlib_System_Globalization_SortKeyMethodDeclarations.h"
extern MethodInfo CultureInfo_get_CompareInfo_m7342_MethodInfo;
extern MethodInfo CompareInfo_Compare_m7309_MethodInfo;
extern MethodInfo CultureAwareComparer_Compare_m10116_MethodInfo;
extern MethodInfo CompareInfo_GetSortKey_m7313_MethodInfo;
extern MethodInfo SortKey_GetHashCode_m6663_MethodInfo;


// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern "C" void CultureAwareComparer__ctor_m10115 (CultureAwareComparer_t1837 * __this, CultureInfo_t791 * ___ci, bool ___ignore_case, MethodInfo* method)
{
	{
		StringComparer__ctor_m10110(__this, /*hidden argument*/&StringComparer__ctor_m10110_MethodInfo);
		NullCheck(___ci);
		CompareInfo_t1391 * L_0 = (CompareInfo_t1391 *)VirtFuncInvoker0< CompareInfo_t1391 * >::Invoke(&CultureInfo_get_CompareInfo_m7342_MethodInfo, ___ci);
		__this->____compareInfo_5 = L_0;
		__this->____ignoreCase_4 = ___ignore_case;
		return;
	}
}
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C" int32_t CultureAwareComparer_Compare_m10116 (CultureAwareComparer_t1837 * __this, String_t* ___x, String_t* ___y, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->____ignoreCase_4);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 0;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		CompareInfo_t1391 * L_1 = (__this->____compareInfo_5);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, String_t*, String_t*, int32_t >::Invoke(&CompareInfo_Compare_m7309_MethodInfo, L_1, ___x, ___y, V_0);
		return L_2;
	}
}
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern MethodInfo CultureAwareComparer_Equals_m10117_MethodInfo;
extern "C" bool CultureAwareComparer_Equals_m10117 (CultureAwareComparer_t1837 * __this, String_t* ___x, String_t* ___y, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(&CultureAwareComparer_Compare_m10116_MethodInfo, __this, ___x, ___y);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern MethodInfo CultureAwareComparer_GetHashCode_m10118_MethodInfo;
extern "C" int32_t CultureAwareComparer_GetHashCode_m10118 (CultureAwareComparer_t1837 * __this, String_t* ___s, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		if (___s)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral945, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		bool L_1 = (__this->____ignoreCase_4);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_001a;
	}

IL_0019:
	{
		G_B5_0 = 0;
	}

IL_001a:
	{
		V_0 = G_B5_0;
		CompareInfo_t1391 * L_2 = (__this->____compareInfo_5);
		NullCheck(L_2);
		SortKey_t1304 * L_3 = (SortKey_t1304 *)VirtFuncInvoker2< SortKey_t1304 *, String_t*, int32_t >::Invoke(&CompareInfo_GetSortKey_m7313_MethodInfo, L_2, ___s, V_0);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&SortKey_GetHashCode_m6663_MethodInfo, L_3);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo String_CompareOrdinalCaseInsensitiveUnchecked_m6069_MethodInfo;
extern MethodInfo String_CompareOrdinalUnchecked_m6068_MethodInfo;
extern MethodInfo OrdinalComparer_Compare_m10120_MethodInfo;
extern MethodInfo String_op_Equality_m145_MethodInfo;
extern MethodInfo String_GetCaseInsensitiveHashCode_m6100_MethodInfo;
extern MethodInfo String_GetHashCode_m3889_MethodInfo;


// System.Void System.OrdinalComparer::.ctor(System.Boolean)
extern "C" void OrdinalComparer__ctor_m10119 (OrdinalComparer_t1838 * __this, bool ___ignoreCase, MethodInfo* method)
{
	{
		StringComparer__ctor_m10110(__this, /*hidden argument*/&StringComparer__ctor_m10110_MethodInfo);
		__this->____ignoreCase_4 = ___ignoreCase;
		return;
	}
}
// System.Int32 System.OrdinalComparer::Compare(System.String,System.String)
extern "C" int32_t OrdinalComparer_Compare_m10120 (OrdinalComparer_t1838 * __this, String_t* ___x, String_t* ___y, MethodInfo* method)
{
	{
		bool L_0 = (__this->____ignoreCase_4);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_1 = String_CompareOrdinalCaseInsensitiveUnchecked_m6069(NULL /*static, unused*/, ___x, 0, ((int32_t)2147483647), ___y, 0, ((int32_t)2147483647), /*hidden argument*/&String_CompareOrdinalCaseInsensitiveUnchecked_m6069_MethodInfo);
		return L_1;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_2 = String_CompareOrdinalUnchecked_m6068(NULL /*static, unused*/, ___x, 0, ((int32_t)2147483647), ___y, 0, ((int32_t)2147483647), /*hidden argument*/&String_CompareOrdinalUnchecked_m6068_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.OrdinalComparer::Equals(System.String,System.String)
extern MethodInfo OrdinalComparer_Equals_m10121_MethodInfo;
extern "C" bool OrdinalComparer_Equals_m10121 (OrdinalComparer_t1838 * __this, String_t* ___x, String_t* ___y, MethodInfo* method)
{
	{
		bool L_0 = (__this->____ignoreCase_4);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(&OrdinalComparer_Compare_m10120_MethodInfo, __this, ___x, ___y);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_op_Equality_m145(NULL /*static, unused*/, ___x, ___y, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		return L_2;
	}
}
// System.Int32 System.OrdinalComparer::GetHashCode(System.String)
extern MethodInfo OrdinalComparer_GetHashCode_m10122_MethodInfo;
extern "C" int32_t OrdinalComparer_GetHashCode_m10122 (OrdinalComparer_t1838 * __this, String_t* ___s, MethodInfo* method)
{
	{
		if (___s)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral945, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		bool L_1 = (__this->____ignoreCase_4);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		NullCheck(___s);
		int32_t L_2 = String_GetCaseInsensitiveHashCode_m6100(___s, /*hidden argument*/&String_GetCaseInsensitiveHashCode_m6100_MethodInfo);
		return L_2;
	}

IL_001d:
	{
		NullCheck(___s);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3889_MethodInfo, ___s);
		return L_3;
	}
}
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StringComparison_t1839_il2cpp_TypeInfo;
// System.StringComparison
#include "mscorlib_System_StringComparisonMethodDeclarations.h"



// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StringSplitOptions_t1840_il2cpp_TypeInfo;
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptionsMethodDeclarations.h"



// System.SystemException
#include "mscorlib_System_SystemException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SystemException_t814_il2cpp_TypeInfo;

// System.Exception
#include "mscorlib_System_Exception.h"
extern MethodInfo Exception__ctor_m3900_MethodInfo;
extern MethodInfo Exception__ctor_m5537_MethodInfo;
extern MethodInfo Exception__ctor_m5536_MethodInfo;


// System.Void System.SystemException::.ctor()
extern MethodInfo SystemException__ctor_m10123_MethodInfo;
extern "C" void SystemException__ctor_m10123 (SystemException_t814 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2472, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		Exception__ctor_m3900(__this, L_0, /*hidden argument*/&Exception__ctor_m3900_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233087), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.SystemException::.ctor(System.String)
extern "C" void SystemException__ctor_m4066 (SystemException_t814 * __this, String_t* ___message, MethodInfo* method)
{
	{
		Exception__ctor_m3900(__this, ___message, /*hidden argument*/&Exception__ctor_m3900_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233087), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SystemException__ctor_m10124 (SystemException_t814 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		Exception__ctor_m5537(__this, ___info, ___context, /*hidden argument*/&Exception__ctor_m5537_MethodInfo);
		return;
	}
}
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern MethodInfo SystemException__ctor_m10125_MethodInfo;
extern "C" void SystemException__ctor_m10125 (SystemException_t814 * __this, String_t* ___message, Exception_t140 * ___innerException, MethodInfo* method)
{
	{
		Exception__ctor_m5536(__this, ___message, ___innerException, /*hidden argument*/&Exception__ctor_m5536_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233087), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.ThreadStaticAttribute
#include "mscorlib_System_ThreadStaticAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ThreadStaticAttribute_t1841_il2cpp_TypeInfo;
// System.ThreadStaticAttribute
#include "mscorlib_System_ThreadStaticAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3848_MethodInfo;


// System.Void System.ThreadStaticAttribute::.ctor()
extern MethodInfo ThreadStaticAttribute__ctor_m10126_MethodInfo;
extern "C" void ThreadStaticAttribute__ctor_m10126 (ThreadStaticAttribute_t1841 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		return;
	}
}
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TimeSpan_t618_il2cpp_TypeInfo;
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3.h"
// System.MonoTouchAOTHelper
#include "mscorlib_System_MonoTouchAOTHelper.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.OverflowException
#include "mscorlib_System_OverflowException.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo MonoTouchAOTHelper_t1823_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t1928_il2cpp_TypeInfo;
extern TypeInfo GenericEqualityComparer_1_t1929_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t786_il2cpp_TypeInfo;
extern TypeInfo OverflowException_t1833_il2cpp_TypeInfo;
extern TypeInfo Int64_t147_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t154_il2cpp_TypeInfo;
// System.MonoTouchAOTHelper
#include "mscorlib_System_MonoTouchAOTHelperMethodDeclarations.h"
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.OverflowException
#include "mscorlib_System_OverflowExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern Il2CppType GenericComparer_1_t1928_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t1929_0_0_0;
extern MethodInfo TimeSpan_CalculateTicks_m10131_MethodInfo;
extern MethodInfo TimeSpan__ctor_m10127_MethodInfo;
extern MethodInfo GenericComparer_1__ctor_m10442_MethodInfo;
extern MethodInfo GenericEqualityComparer_1__ctor_m10443_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3870_MethodInfo;
extern MethodInfo TimeSpan_get_Ticks_m10137_MethodInfo;
extern MethodInfo OverflowException__ctor_m10099_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3867_MethodInfo;
extern MethodInfo TimeSpan_Compare_m10143_MethodInfo;
extern MethodInfo Math_Abs_m9889_MethodInfo;
extern MethodInfo TimeSpan_From_m10150_MethodInfo;
extern MethodInfo Double_IsNaN_m6165_MethodInfo;
extern MethodInfo Double_IsNegativeInfinity_m6166_MethodInfo;
extern MethodInfo Double_IsPositiveInfinity_m6167_MethodInfo;
extern MethodInfo Math_Round_m5617_MethodInfo;
extern MethodInfo Int64_GetHashCode_m5821_MethodInfo;
extern MethodInfo StringBuilder__ctor_m5525_MethodInfo;
extern MethodInfo StringBuilder_Append_m2608_MethodInfo;
extern MethodInfo TimeSpan_get_Days_m10132_MethodInfo;
extern MethodInfo Math_Abs_m9888_MethodInfo;
extern MethodInfo StringBuilder_Append_m3974_MethodInfo;
extern MethodInfo TimeSpan_get_Hours_m10133_MethodInfo;
extern MethodInfo Int32_ToString_m4061_MethodInfo;
extern MethodInfo StringBuilder_Append_m3908_MethodInfo;
extern MethodInfo TimeSpan_get_Minutes_m10135_MethodInfo;
extern MethodInfo TimeSpan_get_Seconds_m10136_MethodInfo;
extern MethodInfo StringBuilder_ToString_m716_MethodInfo;
extern MethodInfo TimeSpan_Add_m10142_MethodInfo;
extern MethodInfo TimeSpan_Subtract_m10153_MethodInfo;
extern Il2CppGenericMethod GenericComparer_1__ctor_m10442_GenericMethod;
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m10443_GenericMethod;


// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C" void TimeSpan__ctor_m10127 (TimeSpan_t618 * __this, int64_t ___ticks, MethodInfo* method)
{
	{
		__this->____ticks_3 = ___ticks;
		return;
	}
}
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern MethodInfo TimeSpan__ctor_m10128_MethodInfo;
extern "C" void TimeSpan__ctor_m10128 (TimeSpan_t618 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo));
		int64_t L_0 = TimeSpan_CalculateTicks_m10131(NULL /*static, unused*/, 0, ___hours, ___minutes, ___seconds, 0, /*hidden argument*/&TimeSpan_CalculateTicks_m10131_MethodInfo);
		__this->____ticks_3 = L_0;
		return;
	}
}
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo TimeSpan__ctor_m10129_MethodInfo;
extern "C" void TimeSpan__ctor_m10129 (TimeSpan_t618 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo));
		int64_t L_0 = TimeSpan_CalculateTicks_m10131(NULL /*static, unused*/, ___days, ___hours, ___minutes, ___seconds, ___milliseconds, /*hidden argument*/&TimeSpan_CalculateTicks_m10131_MethodInfo);
		__this->____ticks_3 = L_0;
		return;
	}
}
// System.Void System.TimeSpan::.cctor()
extern MethodInfo TimeSpan__cctor_m10130_MethodInfo;
extern TypeInfo* GenericComparer_1_t1928_il2cpp_TypeInfo_var;
extern TypeInfo* GenericEqualityComparer_1_t1929_il2cpp_TypeInfo_var;
extern MethodInfo* GenericComparer_1__ctor_m10442_MethodInfo_var;
extern MethodInfo* GenericEqualityComparer_1__ctor_m10443_MethodInfo_var;
extern "C" void TimeSpan__cctor_m10130 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool TimeSpan__cctor_m10130_init;
	if (!TimeSpan__cctor_m10130_init)
	{
		GenericComparer_1_t1928_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&GenericComparer_1_t1928_0_0_0);
		GenericEqualityComparer_1_t1929_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&GenericEqualityComparer_1_t1929_0_0_0);
		GenericComparer_1__ctor_m10442_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GenericComparer_1__ctor_m10442_GenericMethod);
		GenericEqualityComparer_1__ctor_m10443_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GenericEqualityComparer_1__ctor_m10443_GenericMethod);
		TimeSpan__cctor_m10130_init = true;
	}
	GenericComparer_1_t1928 * V_0 = {0};
	GenericEqualityComparer_1_t1929 * V_1 = {0};
	{
		TimeSpan_t618  L_0 = {0};
		TimeSpan__ctor_m10127(&L_0, ((int64_t)std::numeric_limits<int64_t>::max()), /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
		((TimeSpan_t618_StaticFields*)InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo)->static_fields)->___MaxValue_0 = L_0;
		TimeSpan_t618  L_1 = {0};
		TimeSpan__ctor_m10127(&L_1, ((int64_t)std::numeric_limits<int64_t>::min()), /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
		((TimeSpan_t618_StaticFields*)InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo)->static_fields)->___MinValue_1 = L_1;
		TimeSpan_t618  L_2 = {0};
		TimeSpan__ctor_m10127(&L_2, (((int64_t)0)), /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
		((TimeSpan_t618_StaticFields*)InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo)->static_fields)->___Zero_2 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoTouchAOTHelper_t1823_il2cpp_TypeInfo));
		if (!(((MonoTouchAOTHelper_t1823_StaticFields*)InitializedTypeInfo(&MonoTouchAOTHelper_t1823_il2cpp_TypeInfo)->static_fields)->___FalseFlag_0))
		{
			goto IL_0045;
		}
	}
	{
		GenericComparer_1_t1928 * L_3 = (GenericComparer_1_t1928 *)il2cpp_codegen_object_new (GenericComparer_1_t1928_il2cpp_TypeInfo_var);
		GenericComparer_1__ctor_m10442(L_3, /*hidden argument*/GenericComparer_1__ctor_m10442_MethodInfo_var);
		V_0 = L_3;
		GenericEqualityComparer_1_t1929 * L_4 = (GenericEqualityComparer_1_t1929 *)il2cpp_codegen_object_new (GenericEqualityComparer_1_t1929_il2cpp_TypeInfo_var);
		GenericEqualityComparer_1__ctor_m10443(L_4, /*hidden argument*/GenericEqualityComparer_1__ctor_m10443_MethodInfo_var);
		V_1 = L_4;
	}

IL_0045:
	{
		return;
	}
}
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int64_t TimeSpan_CalculateTicks_m10131 (Object_t * __this /* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	{
		V_0 = ((int32_t)((int32_t)___hours*(int32_t)((int32_t)3600)));
		V_1 = ((int32_t)((int32_t)___minutes*(int32_t)((int32_t)60)));
		V_2 = ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)V_0+(int32_t)V_1))+(int32_t)___seconds))))*(int64_t)(((int64_t)((int32_t)1000)))))+(int64_t)(((int64_t)___milliseconds))));
		V_2 = ((int64_t)((int64_t)V_2*(int64_t)(((int64_t)((int32_t)10000)))));
		V_3 = 0;
		if ((((int32_t)___days) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		V_4 = ((int64_t)((int64_t)((int64_t)864000000000LL)*(int64_t)(((int64_t)___days))));
		if ((((int64_t)V_2) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0051;
		}
	}
	{
		V_5 = V_2;
		V_2 = ((int64_t)((int64_t)V_2+(int64_t)V_4));
		V_3 = ((((int64_t)V_5) > ((int64_t)V_2))? 1 : 0);
		goto IL_005c;
	}

IL_0051:
	{
		V_2 = ((int64_t)((int64_t)V_2+(int64_t)V_4));
		V_3 = ((((int64_t)V_2) < ((int64_t)(((int64_t)0))))? 1 : 0);
	}

IL_005c:
	{
		goto IL_0090;
	}

IL_005e:
	{
		if ((((int32_t)___days) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		V_6 = ((int64_t)((int64_t)((int64_t)864000000000LL)*(int64_t)(((int64_t)___days))));
		if ((((int64_t)V_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0082;
		}
	}
	{
		V_2 = ((int64_t)((int64_t)V_2+(int64_t)V_6));
		V_3 = ((((int64_t)V_2) > ((int64_t)(((int64_t)0))))? 1 : 0);
		goto IL_0090;
	}

IL_0082:
	{
		V_7 = V_2;
		V_2 = ((int64_t)((int64_t)V_2+(int64_t)V_6));
		V_3 = ((((int64_t)V_2) > ((int64_t)V_7))? 1 : 0);
	}

IL_0090:
	{
		if (!V_3)
		{
			goto IL_00a3;
		}
	}
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2473, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ArgumentOutOfRangeException_t786 * L_1 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_1, L_0, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_00a3:
	{
		return V_2;
	}
}
// System.Int32 System.TimeSpan::get_Days()
extern "C" int32_t TimeSpan_get_Days_m10132 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return (((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL)))));
	}
}
// System.Int32 System.TimeSpan::get_Hours()
extern "C" int32_t TimeSpan_get_Hours_m10133 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)864000000000LL)))/(int64_t)((int64_t)36000000000LL)))));
	}
}
// System.Int32 System.TimeSpan::get_Milliseconds()
extern MethodInfo TimeSpan_get_Milliseconds_m10134_MethodInfo;
extern "C" int32_t TimeSpan_get_Milliseconds_m10134 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)10000000)))))/(int64_t)(((int64_t)((int32_t)10000)))))));
	}
}
// System.Int32 System.TimeSpan::get_Minutes()
extern "C" int32_t TimeSpan_get_Minutes_m10135 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)36000000000LL)))/(int64_t)(((int64_t)((int32_t)600000000)))))));
	}
}
// System.Int32 System.TimeSpan::get_Seconds()
extern "C" int32_t TimeSpan_get_Seconds_m10136 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)600000000)))))/(int64_t)(((int64_t)((int32_t)10000000)))))));
	}
}
// System.Int64 System.TimeSpan::get_Ticks()
extern "C" int64_t TimeSpan_get_Ticks_m10137 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return L_0;
	}
}
// System.Double System.TimeSpan::get_TotalDays()
extern MethodInfo TimeSpan_get_TotalDays_m10138_MethodInfo;
extern "C" double TimeSpan_get_TotalDays_m10138 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return ((double)((double)(((double)L_0))/(double)(864000000000.0)));
	}
}
// System.Double System.TimeSpan::get_TotalHours()
extern MethodInfo TimeSpan_get_TotalHours_m10139_MethodInfo;
extern "C" double TimeSpan_get_TotalHours_m10139 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return ((double)((double)(((double)L_0))/(double)(36000000000.0)));
	}
}
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern MethodInfo TimeSpan_get_TotalMilliseconds_m3891_MethodInfo;
extern "C" double TimeSpan_get_TotalMilliseconds_m3891 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return ((double)((double)(((double)L_0))/(double)(10000.0)));
	}
}
// System.Double System.TimeSpan::get_TotalMinutes()
extern MethodInfo TimeSpan_get_TotalMinutes_m10140_MethodInfo;
extern "C" double TimeSpan_get_TotalMinutes_m10140 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return ((double)((double)(((double)L_0))/(double)(600000000.0)));
	}
}
// System.Double System.TimeSpan::get_TotalSeconds()
extern MethodInfo TimeSpan_get_TotalSeconds_m10141_MethodInfo;
extern "C" double TimeSpan_get_TotalSeconds_m10141 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_3);
		return ((double)((double)(((double)L_0))/(double)(10000000.0)));
	}
}
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern "C" TimeSpan_t618  TimeSpan_Add_m10142 (TimeSpan_t618 * __this, TimeSpan_t618  ___ts, MethodInfo* method)
{
	TimeSpan_t618  V_0 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int64_t L_0 = (__this->____ticks_3);
			int64_t L_1 = TimeSpan_get_Ticks_m10137((&___ts), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL - (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 < (int64_t)(int64_t)-9223372036854775808LL - (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			TimeSpan_t618  L_2 = {0};
			TimeSpan__ctor_m10127(&L_2, ((int64_t)((int64_t)L_0+(int64_t)L_1)), /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
			V_0 = L_2;
			// IL_0014: leave.s IL_002b
			goto IL_002b;
		}

IL_0016:
		{
			// IL_0016: leave.s IL_002b
			goto IL_002b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&OverflowException_t1833_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0018;
		throw e;
	}

IL_0018:
	{ // begin catch(System.OverflowException)
		String_t* L_3 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2474, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		OverflowException_t1833 * L_4 = (OverflowException_t1833 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OverflowException_t1833_il2cpp_TypeInfo));
		OverflowException__ctor_m10099(L_4, L_3, /*hidden argument*/&OverflowException__ctor_m10099_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
		// IL_0029: leave.s IL_002b
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		return V_0;
	}
}
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern "C" int32_t TimeSpan_Compare_m10143 (Object_t * __this /* static, unused */, TimeSpan_t618  ___t1, TimeSpan_t618  ___t2, MethodInfo* method)
{
	{
		NullCheck((&___t1));
		int64_t L_0 = ((&___t1)->____ticks_3);
		NullCheck((&___t2));
		int64_t L_1 = ((&___t2)->____ticks_3);
		if ((((int64_t)L_0) >= ((int64_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}

IL_0012:
	{
		NullCheck((&___t1));
		int64_t L_2 = ((&___t1)->____ticks_3);
		NullCheck((&___t2));
		int64_t L_3 = ((&___t2)->____ticks_3);
		if ((((int64_t)L_2) <= ((int64_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		return 0;
	}
}
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern MethodInfo TimeSpan_CompareTo_m10144_MethodInfo;
extern "C" int32_t TimeSpan_CompareTo_m10144 (TimeSpan_t618 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		if (___value)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		if (((Object_t *)IsInst(___value, InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo))))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2475, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ArgumentException_t522 * L_1 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_1, L_0, (String_t*) &_stringLiteral610, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo));
		int32_t L_2 = TimeSpan_Compare_m10143(NULL /*static, unused*/, (*(TimeSpan_t618 *)__this), ((*(TimeSpan_t618 *)((TimeSpan_t618 *)UnBox (___value, InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo))))), /*hidden argument*/&TimeSpan_Compare_m10143_MethodInfo);
		return L_2;
	}
}
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern MethodInfo TimeSpan_CompareTo_m10145_MethodInfo;
extern "C" int32_t TimeSpan_CompareTo_m10145 (TimeSpan_t618 * __this, TimeSpan_t618  ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo));
		int32_t L_0 = TimeSpan_Compare_m10143(NULL /*static, unused*/, (*(TimeSpan_t618 *)__this), ___value, /*hidden argument*/&TimeSpan_Compare_m10143_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern MethodInfo TimeSpan_Equals_m10146_MethodInfo;
extern "C" bool TimeSpan_Equals_m10146 (TimeSpan_t618 * __this, TimeSpan_t618  ___obj, MethodInfo* method)
{
	{
		NullCheck((&___obj));
		int64_t L_0 = ((&___obj)->____ticks_3);
		int64_t L_1 = (__this->____ticks_3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
// System.TimeSpan System.TimeSpan::Duration()
extern MethodInfo TimeSpan_Duration_m10147_MethodInfo;
extern "C" TimeSpan_t618  TimeSpan_Duration_m10147 (TimeSpan_t618 * __this, MethodInfo* method)
{
	TimeSpan_t618  V_0 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int64_t L_0 = (__this->____ticks_3);
			int64_t L_1 = llabs(L_0);
			TimeSpan_t618  L_2 = {0};
			TimeSpan__ctor_m10127(&L_2, L_1, /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
			V_0 = L_2;
			// IL_0011: leave.s IL_0028
			goto IL_0028;
		}

IL_0013:
		{
			// IL_0013: leave.s IL_0028
			goto IL_0028;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&OverflowException_t1833_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0015;
		throw e;
	}

IL_0015:
	{ // begin catch(System.OverflowException)
		String_t* L_3 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2476, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		OverflowException_t1833 * L_4 = (OverflowException_t1833 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OverflowException_t1833_il2cpp_TypeInfo));
		OverflowException__ctor_m10099(L_4, L_3, /*hidden argument*/&OverflowException__ctor_m10099_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
		// IL_0026: leave.s IL_0028
		goto IL_0028;
	} // end catch (depth: 1)

IL_0028:
	{
		return V_0;
	}
}
// System.Boolean System.TimeSpan::Equals(System.Object)
extern MethodInfo TimeSpan_Equals_m10148_MethodInfo;
extern "C" bool TimeSpan_Equals_m10148 (TimeSpan_t618 * __this, Object_t * ___value, MethodInfo* method)
{
	TimeSpan_t618  V_0 = {0};
	{
		if (((Object_t *)IsInst(___value, InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int64_t L_0 = (__this->____ticks_3);
		V_0 = ((*(TimeSpan_t618 *)((TimeSpan_t618 *)UnBox (___value, InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo)))));
		NullCheck((&V_0));
		int64_t L_1 = ((&V_0)->____ticks_3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern MethodInfo TimeSpan_FromMinutes_m10149_MethodInfo;
extern "C" TimeSpan_t618  TimeSpan_FromMinutes_m10149 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo));
		TimeSpan_t618  L_0 = TimeSpan_From_m10150(NULL /*static, unused*/, ___value, (((int64_t)((int32_t)600000000))), /*hidden argument*/&TimeSpan_From_m10150_MethodInfo);
		return L_0;
	}
}
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern "C" TimeSpan_t618  TimeSpan_From_m10150 (Object_t * __this /* static, unused */, double ___value, int64_t ___tickMultiplicator, MethodInfo* method)
{
	int64_t V_0 = 0;
	TimeSpan_t618  V_1 = {0};
	TimeSpan_t618  V_2 = {0};
	TimeSpan_t618  V_3 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		bool L_0 = Double_IsNaN_m6165(NULL /*static, unused*/, ___value, /*hidden argument*/&Double_IsNaN_m6165_MethodInfo);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2477, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_2, L_1, (String_t*) &_stringLiteral610, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = Double_IsNegativeInfinity_m6166(NULL /*static, unused*/, ___value, /*hidden argument*/&Double_IsNegativeInfinity_m6166_MethodInfo);
		if (L_3)
		{
			goto IL_004f;
		}
	}
	{
		bool L_4 = Double_IsPositiveInfinity_m6167(NULL /*static, unused*/, ___value, /*hidden argument*/&Double_IsPositiveInfinity_m6167_MethodInfo);
		if (L_4)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo));
		V_1 = (((TimeSpan_t618_StaticFields*)InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo)->static_fields)->___MinValue_1);
		int64_t L_5 = TimeSpan_get_Ticks_m10137((&V_1), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		if ((((double)___value) < ((double)(((double)L_5)))))
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo));
		V_2 = (((TimeSpan_t618_StaticFields*)InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo)->static_fields)->___MaxValue_0);
		int64_t L_6 = TimeSpan_get_Ticks_m10137((&V_2), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		if ((((double)___value) <= ((double)(((double)L_6)))))
		{
			goto IL_005f;
		}
	}

IL_004f:
	{
		String_t* L_7 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2478, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		OverflowException_t1833 * L_8 = (OverflowException_t1833 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OverflowException_t1833_il2cpp_TypeInfo));
		OverflowException__ctor_m10099(L_8, L_7, /*hidden argument*/&OverflowException__ctor_m10099_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		{
			___value = ((double)((double)___value*(double)(((double)((int64_t)((int64_t)___tickMultiplicator/(int64_t)(((int64_t)((int32_t)10000)))))))));
			double L_9 = round(___value);
			if (L_9 > (double)(std::numeric_limits<int64_t>::max())) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			V_0 = (((int64_t)L_9));
			if (il2cpp_codegen_check_mul_overflow_i64((int64_t)V_0, (int64_t)(((int64_t)((int32_t)10000))), (int64_t)-9223372036854775808LL, (int64_t)9223372036854775807LL))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			TimeSpan_t618  L_10 = {0};
			TimeSpan__ctor_m10127(&L_10, ((int64_t)((int64_t)V_0*(int64_t)(((int64_t)((int32_t)10000))))), /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
			V_3 = L_10;
			// IL_0084: leave.s IL_009b
			goto IL_009b;
		}

IL_0086:
		{
			// IL_0086: leave.s IL_009b
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&OverflowException_t1833_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0088;
		throw e;
	}

IL_0088:
	{ // begin catch(System.OverflowException)
		String_t* L_11 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2474, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		OverflowException_t1833 * L_12 = (OverflowException_t1833 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OverflowException_t1833_il2cpp_TypeInfo));
		OverflowException__ctor_m10099(L_12, L_11, /*hidden argument*/&OverflowException__ctor_m10099_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
		// IL_0099: leave.s IL_009b
		goto IL_009b;
	} // end catch (depth: 1)

IL_009b:
	{
		return V_3;
	}
}
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
extern MethodInfo TimeSpan_FromTicks_m3890_MethodInfo;
extern "C" TimeSpan_t618  TimeSpan_FromTicks_m3890 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method)
{
	{
		TimeSpan_t618  L_0 = {0};
		TimeSpan__ctor_m10127(&L_0, ___value, /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
		return L_0;
	}
}
// System.Int32 System.TimeSpan::GetHashCode()
extern MethodInfo TimeSpan_GetHashCode_m10151_MethodInfo;
extern "C" int32_t TimeSpan_GetHashCode_m10151 (TimeSpan_t618 * __this, MethodInfo* method)
{
	{
		int64_t* L_0 = &(__this->____ticks_3);
		int32_t L_1 = Int64_GetHashCode_m5821(L_0, /*hidden argument*/&Int64_GetHashCode_m5821_MethodInfo);
		return L_1;
	}
}
// System.TimeSpan System.TimeSpan::Negate()
extern MethodInfo TimeSpan_Negate_m10152_MethodInfo;
extern "C" TimeSpan_t618  TimeSpan_Negate_m10152 (TimeSpan_t618 * __this, MethodInfo* method)
{
	TimeSpan_t618  V_0 = {0};
	{
		int64_t L_0 = (__this->____ticks_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo));
		V_0 = (((TimeSpan_t618_StaticFields*)InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo)->static_fields)->___MinValue_1);
		NullCheck((&V_0));
		int64_t L_1 = ((&V_0)->____ticks_3);
		if ((((uint64_t)L_0) != ((uint64_t)L_1)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2479, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		OverflowException_t1833 * L_3 = (OverflowException_t1833 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OverflowException_t1833_il2cpp_TypeInfo));
		OverflowException__ctor_m10099(L_3, L_2, /*hidden argument*/&OverflowException__ctor_m10099_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		int64_t L_4 = (__this->____ticks_3);
		TimeSpan_t618  L_5 = {0};
		TimeSpan__ctor_m10127(&L_5, ((-L_4)), /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
		return L_5;
	}
}
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern "C" TimeSpan_t618  TimeSpan_Subtract_m10153 (TimeSpan_t618 * __this, TimeSpan_t618  ___ts, MethodInfo* method)
{
	TimeSpan_t618  V_0 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int64_t L_0 = (__this->____ticks_3);
			int64_t L_1 = TimeSpan_get_Ticks_m10137((&___ts), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 < (int64_t)-9223372036854775808LL + (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL + (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			TimeSpan_t618  L_2 = {0};
			TimeSpan__ctor_m10127(&L_2, ((int64_t)((int64_t)L_0-(int64_t)L_1)), /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
			V_0 = L_2;
			// IL_0014: leave.s IL_002b
			goto IL_002b;
		}

IL_0016:
		{
			// IL_0016: leave.s IL_002b
			goto IL_002b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&OverflowException_t1833_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0018;
		throw e;
	}

IL_0018:
	{ // begin catch(System.OverflowException)
		String_t* L_3 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2474, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		OverflowException_t1833 * L_4 = (OverflowException_t1833 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OverflowException_t1833_il2cpp_TypeInfo));
		OverflowException__ctor_m10099(L_4, L_3, /*hidden argument*/&OverflowException__ctor_m10099_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
		// IL_0029: leave.s IL_002b
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		return V_0;
	}
}
// System.String System.TimeSpan::ToString()
extern MethodInfo TimeSpan_ToString_m10154_MethodInfo;
extern "C" String_t* TimeSpan_ToString_m10154 (TimeSpan_t618 * __this, MethodInfo* method)
{
	StringBuilder_t154 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t154 * L_0 = (StringBuilder_t154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t154_il2cpp_TypeInfo));
		StringBuilder__ctor_m5525(L_0, ((int32_t)14), /*hidden argument*/&StringBuilder__ctor_m5525_MethodInfo);
		V_0 = L_0;
		int64_t L_1 = (__this->____ticks_3);
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m2608(V_0, ((int32_t)45), /*hidden argument*/&StringBuilder_Append_m2608_MethodInfo);
	}

IL_001b:
	{
		int32_t L_2 = TimeSpan_get_Days_m10132(__this, /*hidden argument*/&TimeSpan_get_Days_m10132_MethodInfo);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = TimeSpan_get_Days_m10132(__this, /*hidden argument*/&TimeSpan_get_Days_m10132_MethodInfo);
		int32_t L_4 = abs(L_3);
		NullCheck(V_0);
		StringBuilder_Append_m3974(V_0, L_4, /*hidden argument*/&StringBuilder_Append_m3974_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m2608(V_0, ((int32_t)46), /*hidden argument*/&StringBuilder_Append_m2608_MethodInfo);
	}

IL_003e:
	{
		int32_t L_5 = TimeSpan_get_Hours_m10133(__this, /*hidden argument*/&TimeSpan_get_Hours_m10133_MethodInfo);
		int32_t L_6 = abs(L_5);
		V_2 = L_6;
		String_t* L_7 = Int32_ToString_m4061((&V_2), (String_t*) &_stringLiteral2480, /*hidden argument*/&Int32_ToString_m4061_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_7, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m2608(V_0, ((int32_t)58), /*hidden argument*/&StringBuilder_Append_m2608_MethodInfo);
		int32_t L_8 = TimeSpan_get_Minutes_m10135(__this, /*hidden argument*/&TimeSpan_get_Minutes_m10135_MethodInfo);
		int32_t L_9 = abs(L_8);
		V_3 = L_9;
		String_t* L_10 = Int32_ToString_m4061((&V_3), (String_t*) &_stringLiteral2480, /*hidden argument*/&Int32_ToString_m4061_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_10, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m2608(V_0, ((int32_t)58), /*hidden argument*/&StringBuilder_Append_m2608_MethodInfo);
		int32_t L_11 = TimeSpan_get_Seconds_m10136(__this, /*hidden argument*/&TimeSpan_get_Seconds_m10136_MethodInfo);
		int32_t L_12 = abs(L_11);
		V_4 = L_12;
		String_t* L_13 = Int32_ToString_m4061((&V_4), (String_t*) &_stringLiteral2480, /*hidden argument*/&Int32_ToString_m4061_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_13, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		int64_t L_14 = (__this->____ticks_3);
		int64_t L_15 = llabs(((int64_t)((int64_t)L_14%(int64_t)(((int64_t)((int32_t)10000000))))));
		V_1 = (((int32_t)L_15));
		if (!V_1)
		{
			goto IL_00e1;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m2608(V_0, ((int32_t)46), /*hidden argument*/&StringBuilder_Append_m2608_MethodInfo);
		String_t* L_16 = Int32_ToString_m4061((&V_1), (String_t*) &_stringLiteral2481, /*hidden argument*/&Int32_ToString_m4061_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_16, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_00e1:
	{
		NullCheck(V_0);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m716_MethodInfo, V_0);
		return L_17;
	}
}
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern MethodInfo TimeSpan_op_Addition_m10155_MethodInfo;
extern "C" TimeSpan_t618  TimeSpan_op_Addition_m10155 (Object_t * __this /* static, unused */, TimeSpan_t618  ___t1, TimeSpan_t618  ___t2, MethodInfo* method)
{
	{
		TimeSpan_t618  L_0 = TimeSpan_Add_m10142((&___t1), ___t2, /*hidden argument*/&TimeSpan_Add_m10142_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern MethodInfo TimeSpan_op_Equality_m10156_MethodInfo;
extern "C" bool TimeSpan_op_Equality_m10156 (Object_t * __this /* static, unused */, TimeSpan_t618  ___t1, TimeSpan_t618  ___t2, MethodInfo* method)
{
	{
		NullCheck((&___t1));
		int64_t L_0 = ((&___t1)->____ticks_3);
		NullCheck((&___t2));
		int64_t L_1 = ((&___t2)->____ticks_3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern MethodInfo TimeSpan_op_GreaterThan_m10157_MethodInfo;
extern "C" bool TimeSpan_op_GreaterThan_m10157 (Object_t * __this /* static, unused */, TimeSpan_t618  ___t1, TimeSpan_t618  ___t2, MethodInfo* method)
{
	{
		NullCheck((&___t1));
		int64_t L_0 = ((&___t1)->____ticks_3);
		NullCheck((&___t2));
		int64_t L_1 = ((&___t2)->____ticks_3);
		return ((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern MethodInfo TimeSpan_op_GreaterThanOrEqual_m10158_MethodInfo;
extern "C" bool TimeSpan_op_GreaterThanOrEqual_m10158 (Object_t * __this /* static, unused */, TimeSpan_t618  ___t1, TimeSpan_t618  ___t2, MethodInfo* method)
{
	{
		NullCheck((&___t1));
		int64_t L_0 = ((&___t1)->____ticks_3);
		NullCheck((&___t2));
		int64_t L_1 = ((&___t2)->____ticks_3);
		return ((((int32_t)((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern MethodInfo TimeSpan_op_Inequality_m10159_MethodInfo;
extern "C" bool TimeSpan_op_Inequality_m10159 (Object_t * __this /* static, unused */, TimeSpan_t618  ___t1, TimeSpan_t618  ___t2, MethodInfo* method)
{
	{
		NullCheck((&___t1));
		int64_t L_0 = ((&___t1)->____ticks_3);
		NullCheck((&___t2));
		int64_t L_1 = ((&___t2)->____ticks_3);
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern MethodInfo TimeSpan_op_LessThan_m10160_MethodInfo;
extern "C" bool TimeSpan_op_LessThan_m10160 (Object_t * __this /* static, unused */, TimeSpan_t618  ___t1, TimeSpan_t618  ___t2, MethodInfo* method)
{
	{
		NullCheck((&___t1));
		int64_t L_0 = ((&___t1)->____ticks_3);
		NullCheck((&___t2));
		int64_t L_1 = ((&___t2)->____ticks_3);
		return ((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern MethodInfo TimeSpan_op_LessThanOrEqual_m10161_MethodInfo;
extern "C" bool TimeSpan_op_LessThanOrEqual_m10161 (Object_t * __this /* static, unused */, TimeSpan_t618  ___t1, TimeSpan_t618  ___t2, MethodInfo* method)
{
	{
		NullCheck((&___t1));
		int64_t L_0 = ((&___t1)->____ticks_3);
		NullCheck((&___t2));
		int64_t L_1 = ((&___t2)->____ticks_3);
		return ((((int32_t)((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern MethodInfo TimeSpan_op_Subtraction_m10162_MethodInfo;
extern "C" TimeSpan_t618  TimeSpan_op_Subtraction_m10162 (Object_t * __this /* static, unused */, TimeSpan_t618  ___t1, TimeSpan_t618  ___t2, MethodInfo* method)
{
	{
		TimeSpan_t618  L_0 = TimeSpan_Subtract_m10153((&___t1), ___t2, /*hidden argument*/&TimeSpan_Subtract_m10153_MethodInfo);
		return L_0;
	}
}
// System.TimeZone
#include "mscorlib_System_TimeZone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TimeZone_t1842_il2cpp_TypeInfo;
// System.TimeZone
#include "mscorlib_System_TimeZoneMethodDeclarations.h"

// System.CurrentSystemTimeZone
#include "mscorlib_System_CurrentSystemTimeZone.h"
// System.Globalization.DaylightTime
#include "mscorlib_System_Globalization_DaylightTime.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"
extern TypeInfo DateTime_t645_il2cpp_TypeInfo;
extern TypeInfo CurrentSystemTimeZone_t1843_il2cpp_TypeInfo;
extern TypeInfo DaylightTime_t1420_il2cpp_TypeInfo;
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.CurrentSystemTimeZone
#include "mscorlib_System_CurrentSystemTimeZoneMethodDeclarations.h"
// System.Globalization.DaylightTime
#include "mscorlib_System_Globalization_DaylightTimeMethodDeclarations.h"
extern MethodInfo DateTime_GetNow_m9743_MethodInfo;
extern MethodInfo CurrentSystemTimeZone__ctor_m10173_MethodInfo;
extern MethodInfo DateTime_get_Year_m9747_MethodInfo;
extern MethodInfo TimeZone_GetDaylightChanges_m10444_MethodInfo;
extern MethodInfo TimeZone_IsDaylightSavingTime_m10167_MethodInfo;
extern MethodInfo DaylightTime_get_Start_m7403_MethodInfo;
extern MethodInfo DateTime_get_Ticks_m9744_MethodInfo;
extern MethodInfo DaylightTime_get_End_m7404_MethodInfo;
extern MethodInfo DateTime_get_Kind_m9748_MethodInfo;
extern MethodInfo TimeZone_GetUtcOffset_m10417_MethodInfo;
extern MethodInfo DateTime_op_Subtraction_m9786_MethodInfo;
extern MethodInfo DateTime_op_LessThan_m4014_MethodInfo;
extern MethodInfo DateTime_SpecifyKind_m9756_MethodInfo;
extern MethodInfo DateTime_Add_m9749_MethodInfo;
extern MethodInfo DaylightTime_get_Delta_m7405_MethodInfo;
extern MethodInfo DateTime_Subtract_m9778_MethodInfo;
extern MethodInfo DateTime_op_LessThanOrEqual_m4013_MethodInfo;
extern MethodInfo DateTime_op_Addition_m9783_MethodInfo;
extern MethodInfo DateTime_op_GreaterThan_m4015_MethodInfo;
extern MethodInfo DateTime__ctor_m9715_MethodInfo;
extern MethodInfo TimeZone_GetLocalTimeDiff_m10171_MethodInfo;
extern MethodInfo DateTime_op_GreaterThanOrEqual_m3913_MethodInfo;


// System.Void System.TimeZone::.ctor()
extern MethodInfo TimeZone__ctor_m10163_MethodInfo;
extern "C" void TimeZone__ctor_m10163 (TimeZone_t1842 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.TimeZone::.cctor()
extern MethodInfo TimeZone__cctor_m10164_MethodInfo;
extern "C" void TimeZone__cctor_m10164 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		int64_t L_0 = DateTime_GetNow_m9743(NULL /*static, unused*/, /*hidden argument*/&DateTime_GetNow_m9743_MethodInfo);
		CurrentSystemTimeZone_t1843 * L_1 = (CurrentSystemTimeZone_t1843 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CurrentSystemTimeZone_t1843_il2cpp_TypeInfo));
		CurrentSystemTimeZone__ctor_m10173(L_1, L_0, /*hidden argument*/&CurrentSystemTimeZone__ctor_m10173_MethodInfo);
		((TimeZone_t1842_StaticFields*)InitializedTypeInfo(&TimeZone_t1842_il2cpp_TypeInfo)->static_fields)->___currentTimeZone_0 = L_1;
		return;
	}
}
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern MethodInfo TimeZone_get_CurrentTimeZone_m10165_MethodInfo;
extern "C" TimeZone_t1842 * TimeZone_get_CurrentTimeZone_m10165 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeZone_t1842_il2cpp_TypeInfo));
		return (((TimeZone_t1842_StaticFields*)InitializedTypeInfo(&TimeZone_t1842_il2cpp_TypeInfo)->static_fields)->___currentTimeZone_0);
	}
}
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern MethodInfo TimeZone_IsDaylightSavingTime_m10166_MethodInfo;
extern "C" bool TimeZone_IsDaylightSavingTime_m10166 (TimeZone_t1842 * __this, DateTime_t645  ___time, MethodInfo* method)
{
	{
		int32_t L_0 = DateTime_get_Year_m9747((&___time), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		DaylightTime_t1420 * L_1 = (DaylightTime_t1420 *)VirtFuncInvoker1< DaylightTime_t1420 *, int32_t >::Invoke(&TimeZone_GetDaylightChanges_m10444_MethodInfo, __this, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeZone_t1842_il2cpp_TypeInfo));
		bool L_2 = TimeZone_IsDaylightSavingTime_m10167(NULL /*static, unused*/, ___time, L_1, /*hidden argument*/&TimeZone_IsDaylightSavingTime_m10167_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10167 (Object_t * __this /* static, unused */, DateTime_t645  ___time, DaylightTime_t1420 * ___daylightTimes, MethodInfo* method)
{
	DateTime_t645  V_0 = {0};
	DateTime_t645  V_1 = {0};
	DateTime_t645  V_2 = {0};
	DateTime_t645  V_3 = {0};
	DateTime_t645  V_4 = {0};
	DateTime_t645  V_5 = {0};
	DateTime_t645  V_6 = {0};
	DateTime_t645  V_7 = {0};
	DateTime_t645  V_8 = {0};
	DateTime_t645  V_9 = {0};
	{
		if (___daylightTimes)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral2482, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		NullCheck(___daylightTimes);
		DateTime_t645  L_1 = DaylightTime_get_Start_m7403(___daylightTimes, /*hidden argument*/&DaylightTime_get_Start_m7403_MethodInfo);
		V_0 = L_1;
		int64_t L_2 = DateTime_get_Ticks_m9744((&V_0), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		NullCheck(___daylightTimes);
		DateTime_t645  L_3 = DaylightTime_get_End_m7404(___daylightTimes, /*hidden argument*/&DaylightTime_get_End_m7404_MethodInfo);
		V_1 = L_3;
		int64_t L_4 = DateTime_get_Ticks_m9744((&V_1), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		if ((((uint64_t)L_2) != ((uint64_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		return 0;
	}

IL_002e:
	{
		NullCheck(___daylightTimes);
		DateTime_t645  L_5 = DaylightTime_get_Start_m7403(___daylightTimes, /*hidden argument*/&DaylightTime_get_Start_m7403_MethodInfo);
		V_2 = L_5;
		int64_t L_6 = DateTime_get_Ticks_m9744((&V_2), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		NullCheck(___daylightTimes);
		DateTime_t645  L_7 = DaylightTime_get_End_m7404(___daylightTimes, /*hidden argument*/&DaylightTime_get_End_m7404_MethodInfo);
		V_3 = L_7;
		int64_t L_8 = DateTime_get_Ticks_m9744((&V_3), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		if ((((int64_t)L_6) >= ((int64_t)L_8)))
		{
			goto IL_0080;
		}
	}
	{
		NullCheck(___daylightTimes);
		DateTime_t645  L_9 = DaylightTime_get_Start_m7403(___daylightTimes, /*hidden argument*/&DaylightTime_get_Start_m7403_MethodInfo);
		V_4 = L_9;
		int64_t L_10 = DateTime_get_Ticks_m9744((&V_4), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		int64_t L_11 = DateTime_get_Ticks_m9744((&___time), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		if ((((int64_t)L_10) >= ((int64_t)L_11)))
		{
			goto IL_007e;
		}
	}
	{
		NullCheck(___daylightTimes);
		DateTime_t645  L_12 = DaylightTime_get_End_m7404(___daylightTimes, /*hidden argument*/&DaylightTime_get_End_m7404_MethodInfo);
		V_5 = L_12;
		int64_t L_13 = DateTime_get_Ticks_m9744((&V_5), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		int64_t L_14 = DateTime_get_Ticks_m9744((&___time), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		if ((((int64_t)L_13) <= ((int64_t)L_14)))
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		goto IL_00e2;
	}

IL_0080:
	{
		int32_t L_15 = DateTime_get_Year_m9747((&___time), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		NullCheck(___daylightTimes);
		DateTime_t645  L_16 = DaylightTime_get_Start_m7403(___daylightTimes, /*hidden argument*/&DaylightTime_get_Start_m7403_MethodInfo);
		V_6 = L_16;
		int32_t L_17 = DateTime_get_Year_m9747((&V_6), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		if ((((uint32_t)L_15) != ((uint32_t)L_17)))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_18 = DateTime_get_Year_m9747((&___time), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		NullCheck(___daylightTimes);
		DateTime_t645  L_19 = DaylightTime_get_End_m7404(___daylightTimes, /*hidden argument*/&DaylightTime_get_End_m7404_MethodInfo);
		V_7 = L_19;
		int32_t L_20 = DateTime_get_Year_m9747((&V_7), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		if ((((uint32_t)L_18) != ((uint32_t)L_20)))
		{
			goto IL_00e2;
		}
	}
	{
		int64_t L_21 = DateTime_get_Ticks_m9744((&___time), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		NullCheck(___daylightTimes);
		DateTime_t645  L_22 = DaylightTime_get_End_m7404(___daylightTimes, /*hidden argument*/&DaylightTime_get_End_m7404_MethodInfo);
		V_8 = L_22;
		int64_t L_23 = DateTime_get_Ticks_m9744((&V_8), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		if ((((int64_t)L_21) < ((int64_t)L_23)))
		{
			goto IL_00e0;
		}
	}
	{
		int64_t L_24 = DateTime_get_Ticks_m9744((&___time), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		NullCheck(___daylightTimes);
		DateTime_t645  L_25 = DaylightTime_get_Start_m7403(___daylightTimes, /*hidden argument*/&DaylightTime_get_Start_m7403_MethodInfo);
		V_9 = L_25;
		int64_t L_26 = DateTime_get_Ticks_m9744((&V_9), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		if ((((int64_t)L_24) <= ((int64_t)L_26)))
		{
			goto IL_00e2;
		}
	}

IL_00e0:
	{
		return 1;
	}

IL_00e2:
	{
		return 0;
	}
}
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern MethodInfo TimeZone_ToLocalTime_m10168_MethodInfo;
extern "C" DateTime_t645  TimeZone_ToLocalTime_m10168 (TimeZone_t1842 * __this, DateTime_t645  ___time, MethodInfo* method)
{
	TimeSpan_t618  V_0 = {0};
	DateTime_t645  V_1 = {0};
	DaylightTime_t1420 * V_2 = {0};
	TimeSpan_t618  V_3 = {0};
	DateTime_t645  V_4 = {0};
	TimeSpan_t618  V_5 = {0};
	DateTime_t645  V_6 = {0};
	{
		int32_t L_0 = DateTime_get_Kind_m9748((&___time), /*hidden argument*/&DateTime_get_Kind_m9748_MethodInfo);
		if ((((uint32_t)L_0) != ((uint32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		return ___time;
	}

IL_000c:
	{
		TimeSpan_t618  L_1 = (TimeSpan_t618 )VirtFuncInvoker1< TimeSpan_t618 , DateTime_t645  >::Invoke(&TimeZone_GetUtcOffset_m10417_MethodInfo, __this, ___time);
		V_0 = L_1;
		int64_t L_2 = TimeSpan_get_Ticks_m10137((&V_0), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		if ((((int64_t)L_2) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_3 = DateTime_op_Subtraction_m9786(NULL /*static, unused*/, (((DateTime_t645_StaticFields*)InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo)->static_fields)->___MaxValue_2), V_0, /*hidden argument*/&DateTime_op_Subtraction_m9786_MethodInfo);
		bool L_4 = DateTime_op_LessThan_m4014(NULL /*static, unused*/, L_3, ___time, /*hidden argument*/&DateTime_op_LessThan_m4014_MethodInfo);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_5 = DateTime_SpecifyKind_m9756(NULL /*static, unused*/, (((DateTime_t645_StaticFields*)InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo)->static_fields)->___MaxValue_2), 2, /*hidden argument*/&DateTime_SpecifyKind_m9756_MethodInfo);
		return L_5;
	}

IL_003e:
	{
		goto IL_0076;
	}

IL_0040:
	{
		int64_t L_6 = TimeSpan_get_Ticks_m10137((&V_0), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		if ((((int64_t)L_6) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0076;
		}
	}
	{
		int64_t L_7 = DateTime_get_Ticks_m9744((&___time), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		int64_t L_8 = TimeSpan_get_Ticks_m10137((&V_0), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		V_4 = (((DateTime_t645_StaticFields*)InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo)->static_fields)->___MinValue_3);
		int64_t L_9 = DateTime_get_Ticks_m9744((&V_4), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		if ((((int64_t)((int64_t)((int64_t)L_7+(int64_t)L_8))) >= ((int64_t)L_9)))
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_10 = DateTime_SpecifyKind_m9756(NULL /*static, unused*/, (((DateTime_t645_StaticFields*)InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo)->static_fields)->___MinValue_3), 2, /*hidden argument*/&DateTime_SpecifyKind_m9756_MethodInfo);
		return L_10;
	}

IL_0076:
	{
		DateTime_t645  L_11 = DateTime_Add_m9749((&___time), V_0, /*hidden argument*/&DateTime_Add_m9749_MethodInfo);
		V_1 = L_11;
		int32_t L_12 = DateTime_get_Year_m9747((&___time), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		DaylightTime_t1420 * L_13 = (DaylightTime_t1420 *)VirtFuncInvoker1< DaylightTime_t1420 *, int32_t >::Invoke(&TimeZone_GetDaylightChanges_m10444_MethodInfo, __this, L_12);
		V_2 = L_13;
		NullCheck(V_2);
		TimeSpan_t618  L_14 = DaylightTime_get_Delta_m7405(V_2, /*hidden argument*/&DaylightTime_get_Delta_m7405_MethodInfo);
		V_5 = L_14;
		int64_t L_15 = TimeSpan_get_Ticks_m10137((&V_5), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		if (L_15)
		{
			goto IL_00a6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_16 = DateTime_SpecifyKind_m9756(NULL /*static, unused*/, V_1, 2, /*hidden argument*/&DateTime_SpecifyKind_m9756_MethodInfo);
		return L_16;
	}

IL_00a6:
	{
		NullCheck(V_2);
		DateTime_t645  L_17 = DaylightTime_get_End_m7404(V_2, /*hidden argument*/&DaylightTime_get_End_m7404_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		bool L_18 = DateTime_op_LessThan_m4014(NULL /*static, unused*/, V_1, L_17, /*hidden argument*/&DateTime_op_LessThan_m4014_MethodInfo);
		if (!L_18)
		{
			goto IL_00d9;
		}
	}
	{
		NullCheck(V_2);
		DateTime_t645  L_19 = DaylightTime_get_End_m7404(V_2, /*hidden argument*/&DaylightTime_get_End_m7404_MethodInfo);
		V_6 = L_19;
		NullCheck(V_2);
		TimeSpan_t618  L_20 = DaylightTime_get_Delta_m7405(V_2, /*hidden argument*/&DaylightTime_get_Delta_m7405_MethodInfo);
		DateTime_t645  L_21 = DateTime_Subtract_m9778((&V_6), L_20, /*hidden argument*/&DateTime_Subtract_m9778_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		bool L_22 = DateTime_op_LessThanOrEqual_m4013(NULL /*static, unused*/, L_21, V_1, /*hidden argument*/&DateTime_op_LessThanOrEqual_m4013_MethodInfo);
		if (!L_22)
		{
			goto IL_00d9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_23 = DateTime_SpecifyKind_m9756(NULL /*static, unused*/, V_1, 2, /*hidden argument*/&DateTime_SpecifyKind_m9756_MethodInfo);
		return L_23;
	}

IL_00d9:
	{
		TimeSpan_t618  L_24 = (TimeSpan_t618 )VirtFuncInvoker1< TimeSpan_t618 , DateTime_t645  >::Invoke(&TimeZone_GetUtcOffset_m10417_MethodInfo, __this, V_1);
		V_3 = L_24;
		DateTime_t645  L_25 = DateTime_Add_m9749((&___time), V_3, /*hidden argument*/&DateTime_Add_m9749_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_26 = DateTime_SpecifyKind_m9756(NULL /*static, unused*/, L_25, 2, /*hidden argument*/&DateTime_SpecifyKind_m9756_MethodInfo);
		return L_26;
	}
}
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern MethodInfo TimeZone_ToUniversalTime_m10169_MethodInfo;
extern "C" DateTime_t645  TimeZone_ToUniversalTime_m10169 (TimeZone_t1842 * __this, DateTime_t645  ___time, MethodInfo* method)
{
	TimeSpan_t618  V_0 = {0};
	{
		int32_t L_0 = DateTime_get_Kind_m9748((&___time), /*hidden argument*/&DateTime_get_Kind_m9748_MethodInfo);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		return ___time;
	}

IL_000c:
	{
		TimeSpan_t618  L_1 = (TimeSpan_t618 )VirtFuncInvoker1< TimeSpan_t618 , DateTime_t645  >::Invoke(&TimeZone_GetUtcOffset_m10417_MethodInfo, __this, ___time);
		V_0 = L_1;
		int64_t L_2 = TimeSpan_get_Ticks_m10137((&V_0), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		if ((((int64_t)L_2) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_3 = DateTime_op_Addition_m9783(NULL /*static, unused*/, (((DateTime_t645_StaticFields*)InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo)->static_fields)->___MaxValue_2), V_0, /*hidden argument*/&DateTime_op_Addition_m9783_MethodInfo);
		bool L_4 = DateTime_op_LessThan_m4014(NULL /*static, unused*/, L_3, ___time, /*hidden argument*/&DateTime_op_LessThan_m4014_MethodInfo);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_5 = DateTime_SpecifyKind_m9756(NULL /*static, unused*/, (((DateTime_t645_StaticFields*)InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo)->static_fields)->___MaxValue_2), 1, /*hidden argument*/&DateTime_SpecifyKind_m9756_MethodInfo);
		return L_5;
	}

IL_003e:
	{
		goto IL_006a;
	}

IL_0040:
	{
		int64_t L_6 = TimeSpan_get_Ticks_m10137((&V_0), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		if ((((int64_t)L_6) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_7 = DateTime_op_Addition_m9783(NULL /*static, unused*/, (((DateTime_t645_StaticFields*)InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo)->static_fields)->___MinValue_3), V_0, /*hidden argument*/&DateTime_op_Addition_m9783_MethodInfo);
		bool L_8 = DateTime_op_GreaterThan_m4015(NULL /*static, unused*/, L_7, ___time, /*hidden argument*/&DateTime_op_GreaterThan_m4015_MethodInfo);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_9 = DateTime_SpecifyKind_m9756(NULL /*static, unused*/, (((DateTime_t645_StaticFields*)InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo)->static_fields)->___MinValue_3), 1, /*hidden argument*/&DateTime_SpecifyKind_m9756_MethodInfo);
		return L_9;
	}

IL_006a:
	{
		int64_t L_10 = DateTime_get_Ticks_m9744((&___time), /*hidden argument*/&DateTime_get_Ticks_m9744_MethodInfo);
		int64_t L_11 = TimeSpan_get_Ticks_m10137((&V_0), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		DateTime_t645  L_12 = {0};
		DateTime__ctor_m9715(&L_12, ((int64_t)((int64_t)L_10-(int64_t)L_11)), /*hidden argument*/&DateTime__ctor_m9715_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_13 = DateTime_SpecifyKind_m9756(NULL /*static, unused*/, L_12, 1, /*hidden argument*/&DateTime_SpecifyKind_m9756_MethodInfo);
		return L_13;
	}
}
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern MethodInfo TimeZone_GetLocalTimeDiff_m10170_MethodInfo;
extern "C" TimeSpan_t618  TimeZone_GetLocalTimeDiff_m10170 (TimeZone_t1842 * __this, DateTime_t645  ___time, MethodInfo* method)
{
	{
		TimeSpan_t618  L_0 = (TimeSpan_t618 )VirtFuncInvoker1< TimeSpan_t618 , DateTime_t645  >::Invoke(&TimeZone_GetUtcOffset_m10417_MethodInfo, __this, ___time);
		TimeSpan_t618  L_1 = TimeZone_GetLocalTimeDiff_m10171(__this, ___time, L_0, /*hidden argument*/&TimeZone_GetLocalTimeDiff_m10171_MethodInfo);
		return L_1;
	}
}
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t618  TimeZone_GetLocalTimeDiff_m10171 (TimeZone_t1842 * __this, DateTime_t645  ___time, TimeSpan_t618  ___utc_offset, MethodInfo* method)
{
	DaylightTime_t1420 * V_0 = {0};
	DateTime_t645  V_1 = {0};
	TimeSpan_t618  V_2 = {0};
	DateTime_t645  V_3 = {0};
	DateTime_t645  V_4 = {0};
	{
		int32_t L_0 = DateTime_get_Year_m9747((&___time), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		DaylightTime_t1420 * L_1 = (DaylightTime_t1420 *)VirtFuncInvoker1< DaylightTime_t1420 *, int32_t >::Invoke(&TimeZone_GetDaylightChanges_m10444_MethodInfo, __this, L_0);
		V_0 = L_1;
		NullCheck(V_0);
		TimeSpan_t618  L_2 = DaylightTime_get_Delta_m7405(V_0, /*hidden argument*/&DaylightTime_get_Delta_m7405_MethodInfo);
		V_2 = L_2;
		int64_t L_3 = TimeSpan_get_Ticks_m10137((&V_2), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		return ___utc_offset;
	}

IL_0020:
	{
		DateTime_t645  L_4 = DateTime_Add_m9749((&___time), ___utc_offset, /*hidden argument*/&DateTime_Add_m9749_MethodInfo);
		V_1 = L_4;
		NullCheck(V_0);
		DateTime_t645  L_5 = DaylightTime_get_End_m7404(V_0, /*hidden argument*/&DaylightTime_get_End_m7404_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		bool L_6 = DateTime_op_LessThan_m4014(NULL /*static, unused*/, V_1, L_5, /*hidden argument*/&DateTime_op_LessThan_m4014_MethodInfo);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		NullCheck(V_0);
		DateTime_t645  L_7 = DaylightTime_get_End_m7404(V_0, /*hidden argument*/&DaylightTime_get_End_m7404_MethodInfo);
		V_3 = L_7;
		NullCheck(V_0);
		TimeSpan_t618  L_8 = DaylightTime_get_Delta_m7405(V_0, /*hidden argument*/&DaylightTime_get_Delta_m7405_MethodInfo);
		DateTime_t645  L_9 = DateTime_Subtract_m9778((&V_3), L_8, /*hidden argument*/&DateTime_Subtract_m9778_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		bool L_10 = DateTime_op_LessThanOrEqual_m4013(NULL /*static, unused*/, L_9, V_1, /*hidden argument*/&DateTime_op_LessThanOrEqual_m4013_MethodInfo);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		return ___utc_offset;
	}

IL_0055:
	{
		NullCheck(V_0);
		DateTime_t645  L_11 = DaylightTime_get_Start_m7403(V_0, /*hidden argument*/&DaylightTime_get_Start_m7403_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		bool L_12 = DateTime_op_GreaterThanOrEqual_m3913(NULL /*static, unused*/, V_1, L_11, /*hidden argument*/&DateTime_op_GreaterThanOrEqual_m3913_MethodInfo);
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		NullCheck(V_0);
		DateTime_t645  L_13 = DaylightTime_get_Start_m7403(V_0, /*hidden argument*/&DaylightTime_get_Start_m7403_MethodInfo);
		V_4 = L_13;
		NullCheck(V_0);
		TimeSpan_t618  L_14 = DaylightTime_get_Delta_m7405(V_0, /*hidden argument*/&DaylightTime_get_Delta_m7405_MethodInfo);
		DateTime_t645  L_15 = DateTime_Add_m9749((&V_4), L_14, /*hidden argument*/&DateTime_Add_m9749_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		bool L_16 = DateTime_op_GreaterThan_m4015(NULL /*static, unused*/, L_15, V_1, /*hidden argument*/&DateTime_op_GreaterThan_m4015_MethodInfo);
		if (!L_16)
		{
			goto IL_008d;
		}
	}
	{
		NullCheck(V_0);
		TimeSpan_t618  L_17 = DaylightTime_get_Delta_m7405(V_0, /*hidden argument*/&DaylightTime_get_Delta_m7405_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t618_il2cpp_TypeInfo));
		TimeSpan_t618  L_18 = TimeSpan_op_Subtraction_m10162(NULL /*static, unused*/, ___utc_offset, L_17, /*hidden argument*/&TimeSpan_op_Subtraction_m10162_MethodInfo);
		return L_18;
	}

IL_008d:
	{
		TimeSpan_t618  L_19 = (TimeSpan_t618 )VirtFuncInvoker1< TimeSpan_t618 , DateTime_t645  >::Invoke(&TimeZone_GetUtcOffset_m10417_MethodInfo, __this, V_1);
		return L_19;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
#include "mscorlib_ArrayTypes.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo Hashtable_t74_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t150_il2cpp_TypeInfo;
extern TypeInfo Void_t42_il2cpp_TypeInfo;
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern MethodInfo Hashtable__ctor_m4078_MethodInfo;
extern MethodInfo CurrentSystemTimeZone_GetTimeZoneData_m10175_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m3883_MethodInfo;
extern MethodInfo CurrentSystemTimeZone_GetDaylightTimeFromData_m10179_MethodInfo;
extern MethodInfo Hashtable_Add_m3884_MethodInfo;
extern MethodInfo CurrentSystemTimeZone_OnDeserialization_m10178_MethodInfo;
extern MethodInfo String_Concat_m591_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3864_MethodInfo;
extern MethodInfo Monitor_Enter_m3898_MethodInfo;
extern MethodInfo Hashtable_get_Item_m594_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2758_MethodInfo;
extern MethodInfo Monitor_Exit_m3899_MethodInfo;
extern MethodInfo DateTime_get_Now_m3911_MethodInfo;
extern MethodInfo DaylightTime__ctor_m7402_MethodInfo;


// System.Void System.CurrentSystemTimeZone::.ctor()
extern MethodInfo CurrentSystemTimeZone__ctor_m10172_MethodInfo;
extern "C" void CurrentSystemTimeZone__ctor_m10172 (CurrentSystemTimeZone_t1843 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		Hashtable_t74 * L_0 = (Hashtable_t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		Hashtable__ctor_m4078(L_0, 1, /*hidden argument*/&Hashtable__ctor_m4078_MethodInfo);
		__this->___m_CachedDaylightChanges_3 = L_0;
		TimeZone__ctor_m10163(__this, /*hidden argument*/&TimeZone__ctor_m10163_MethodInfo);
		return;
	}
}
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m10173 (CurrentSystemTimeZone_t1843 * __this, int64_t ___lnow, MethodInfo* method)
{
	Int64U5BU5D_t1255* V_0 = {0};
	StringU5BU5D_t17* V_1 = {0};
	DateTime_t645  V_2 = {0};
	DaylightTime_t1420 * V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		Hashtable_t74 * L_0 = (Hashtable_t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		Hashtable__ctor_m4078(L_0, 1, /*hidden argument*/&Hashtable__ctor_m4078_MethodInfo);
		__this->___m_CachedDaylightChanges_3 = L_0;
		TimeZone__ctor_m10163(__this, /*hidden argument*/&TimeZone__ctor_m10163_MethodInfo);
		DateTime__ctor_m9715((&V_2), ___lnow, /*hidden argument*/&DateTime__ctor_m9715_MethodInfo);
		int32_t L_1 = DateTime_get_Year_m9747((&V_2), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		bool L_2 = CurrentSystemTimeZone_GetTimeZoneData_m10175(NULL /*static, unused*/, L_1, (&V_0), (&V_1), /*hidden argument*/&CurrentSystemTimeZone_GetTimeZoneData_m10175_MethodInfo);
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2483, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, L_3, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003c:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, 0);
		int32_t L_5 = 0;
		String_t* L_6 = Locale_GetText_m6561(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_5)), /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		__this->___m_standardName_1 = L_6;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, 1);
		int32_t L_7 = 1;
		String_t* L_8 = Locale_GetText_m6561(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_7)), /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		__this->___m_daylightName_2 = L_8;
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, 2);
		int32_t L_9 = 2;
		__this->___m_ticksOffset_4 = (*(int64_t*)(int64_t*)SZArrayLdElema(V_0, L_9));
		DaylightTime_t1420 * L_10 = CurrentSystemTimeZone_GetDaylightTimeFromData_m10179(__this, V_0, /*hidden argument*/&CurrentSystemTimeZone_GetDaylightTimeFromData_m10179_MethodInfo);
		V_3 = L_10;
		Hashtable_t74 * L_11 = (__this->___m_CachedDaylightChanges_3);
		int32_t L_12 = DateTime_get_Year_m9747((&V_2), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_13);
		NullCheck(L_11);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m3884_MethodInfo, L_11, L_14, V_3);
		CurrentSystemTimeZone_OnDeserialization_m10178(__this, V_3, /*hidden argument*/&CurrentSystemTimeZone_OnDeserialization_m10178_MethodInfo);
		return;
	}
}
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern MethodInfo CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10174_MethodInfo;
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10174 (CurrentSystemTimeZone_t1843 * __this, Object_t * ___sender, MethodInfo* method)
{
	{
		CurrentSystemTimeZone_OnDeserialization_m10178(__this, (DaylightTime_t1420 *)NULL, /*hidden argument*/&CurrentSystemTimeZone_OnDeserialization_m10178_MethodInfo);
		return;
	}
}
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m10175 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1255** ___data, StringU5BU5D_t17** ___names, MethodInfo* method)
{
	typedef bool (*CurrentSystemTimeZone_GetTimeZoneData_m10175_ftn) (int32_t, Int64U5BU5D_t1255**, StringU5BU5D_t17**);
	static CurrentSystemTimeZone_GetTimeZoneData_m10175_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CurrentSystemTimeZone_GetTimeZoneData_m10175_ftn)il2cpp_codegen_resolve_icall ("System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)");
	return _il2cpp_icall_func(___year, ___data, ___names);
}
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern MethodInfo CurrentSystemTimeZone_GetDaylightChanges_m10176_MethodInfo;
extern "C" DaylightTime_t1420 * CurrentSystemTimeZone_GetDaylightChanges_m10176 (CurrentSystemTimeZone_t1843 * __this, int32_t ___year, MethodInfo* method)
{
	Hashtable_t74 * V_0 = {0};
	DaylightTime_t1420 * V_1 = {0};
	Int64U5BU5D_t1255* V_2 = {0};
	StringU5BU5D_t17* V_3 = {0};
	DaylightTime_t1420 * V_4 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if ((((int32_t)___year) < ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		if ((((int32_t)___year) <= ((int32_t)((int32_t)9999))))
		{
			goto IL_002c;
		}
	}

IL_000c:
	{
		int32_t L_0 = ___year;
		Object_t * L_1 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_0);
		String_t* L_2 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2485, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m591(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_Concat_m591_MethodInfo);
		ArgumentOutOfRangeException_t786 * L_4 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_4, (String_t*) &_stringLiteral2484, L_3, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		if ((((uint32_t)___year) != ((uint32_t)(((CurrentSystemTimeZone_t1843_StaticFields*)InitializedTypeInfo(&CurrentSystemTimeZone_t1843_il2cpp_TypeInfo)->static_fields)->___this_year_7))))
		{
			goto IL_003a;
		}
	}
	{
		return (((CurrentSystemTimeZone_t1843_StaticFields*)InitializedTypeInfo(&CurrentSystemTimeZone_t1843_il2cpp_TypeInfo)->static_fields)->___this_year_dlt_8);
	}

IL_003a:
	{
		Hashtable_t74 * L_5 = (__this->___m_CachedDaylightChanges_3);
		V_0 = L_5;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			Hashtable_t74 * L_6 = (__this->___m_CachedDaylightChanges_3);
			int32_t L_7 = ___year;
			Object_t * L_8 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_7);
			NullCheck(L_6);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m594_MethodInfo, L_6, L_8);
			V_1 = ((DaylightTime_t1420 *)Castclass(L_9, InitializedTypeInfo(&DaylightTime_t1420_il2cpp_TypeInfo)));
			if (V_1)
			{
				goto IL_00a2;
			}
		}

IL_0061:
		{
			bool L_10 = CurrentSystemTimeZone_GetTimeZoneData_m10175(NULL /*static, unused*/, ___year, (&V_2), (&V_3), /*hidden argument*/&CurrentSystemTimeZone_GetTimeZoneData_m10175_MethodInfo);
			if (L_10)
			{
				goto IL_0088;
			}
		}

IL_006d:
		{
			int32_t L_11 = ___year;
			Object_t * L_12 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_11);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_13 = String_Concat_m591(NULL /*static, unused*/, (String_t*) &_stringLiteral2486, L_12, /*hidden argument*/&String_Concat_m591_MethodInfo);
			String_t* L_14 = Locale_GetText_m6561(NULL /*static, unused*/, L_13, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
			ArgumentException_t522 * L_15 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
			ArgumentException__ctor_m2758(L_15, L_14, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
			il2cpp_codegen_raise_exception(L_15);
		}

IL_0088:
		{
			DaylightTime_t1420 * L_16 = CurrentSystemTimeZone_GetDaylightTimeFromData_m10179(__this, V_2, /*hidden argument*/&CurrentSystemTimeZone_GetDaylightTimeFromData_m10179_MethodInfo);
			V_1 = L_16;
			Hashtable_t74 * L_17 = (__this->___m_CachedDaylightChanges_3);
			int32_t L_18 = ___year;
			Object_t * L_19 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_18);
			NullCheck(L_17);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m3884_MethodInfo, L_17, L_19, V_1);
		}

IL_00a2:
		{
			V_4 = V_1;
			// IL_00a5: leave.s IL_00b0
			leaveInstructions[0] = 0xB0; // 1
			THROW_SENTINEL(IL_00b0);
			// finally target depth: 1
		}

IL_00a7:
		{
			// IL_00a7: leave.s IL_00b0
			leaveInstructions[0] = 0xB0; // 1
			THROW_SENTINEL(IL_00b0);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00a9;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_00a9;
	}

IL_00a9:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0xB0:
				goto IL_00b0;
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

IL_00b0:
	{
		return V_4;
	}
}
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern MethodInfo CurrentSystemTimeZone_GetUtcOffset_m10177_MethodInfo;
extern "C" TimeSpan_t618  CurrentSystemTimeZone_GetUtcOffset_m10177 (CurrentSystemTimeZone_t1843 * __this, DateTime_t645  ___time, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, DateTime_t645  >::Invoke(&TimeZone_IsDaylightSavingTime_m10166_MethodInfo, __this, ___time);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		TimeSpan_t618  L_1 = (__this->___utcOffsetWithDLS_6);
		return L_1;
	}

IL_0010:
	{
		TimeSpan_t618  L_2 = (__this->___utcOffsetWithOutDLS_5);
		return L_2;
	}
}
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m10178 (CurrentSystemTimeZone_t1843 * __this, DaylightTime_t1420 * ___dlt, MethodInfo* method)
{
	Int64U5BU5D_t1255* V_0 = {0};
	StringU5BU5D_t17* V_1 = {0};
	DateTime_t645  V_2 = {0};
	DateTime_t645  V_3 = {0};
	TimeSpan_t618  V_4 = {0};
	{
		if (___dlt)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t645_il2cpp_TypeInfo));
		DateTime_t645  L_0 = DateTime_get_Now_m3911(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3911_MethodInfo);
		V_2 = L_0;
		int32_t L_1 = DateTime_get_Year_m9747((&V_2), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		((CurrentSystemTimeZone_t1843_StaticFields*)InitializedTypeInfo(&CurrentSystemTimeZone_t1843_il2cpp_TypeInfo)->static_fields)->___this_year_7 = L_1;
		bool L_2 = CurrentSystemTimeZone_GetTimeZoneData_m10175(NULL /*static, unused*/, (((CurrentSystemTimeZone_t1843_StaticFields*)InitializedTypeInfo(&CurrentSystemTimeZone_t1843_il2cpp_TypeInfo)->static_fields)->___this_year_7), (&V_0), (&V_1), /*hidden argument*/&CurrentSystemTimeZone_GetTimeZoneData_m10175_MethodInfo);
		if (L_2)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_3 = (((CurrentSystemTimeZone_t1843_StaticFields*)InitializedTypeInfo(&CurrentSystemTimeZone_t1843_il2cpp_TypeInfo)->static_fields)->___this_year_7);
		Object_t * L_4 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m591(NULL /*static, unused*/, (String_t*) &_stringLiteral2486, L_4, /*hidden argument*/&String_Concat_m591_MethodInfo);
		String_t* L_6 = Locale_GetText_m6561(NULL /*static, unused*/, L_5, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ArgumentException_t522 * L_7 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_7, L_6, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0044:
	{
		DaylightTime_t1420 * L_8 = CurrentSystemTimeZone_GetDaylightTimeFromData_m10179(__this, V_0, /*hidden argument*/&CurrentSystemTimeZone_GetDaylightTimeFromData_m10179_MethodInfo);
		___dlt = L_8;
		goto IL_0064;
	}

IL_0051:
	{
		NullCheck(___dlt);
		DateTime_t645  L_9 = DaylightTime_get_Start_m7403(___dlt, /*hidden argument*/&DaylightTime_get_Start_m7403_MethodInfo);
		V_3 = L_9;
		int32_t L_10 = DateTime_get_Year_m9747((&V_3), /*hidden argument*/&DateTime_get_Year_m9747_MethodInfo);
		((CurrentSystemTimeZone_t1843_StaticFields*)InitializedTypeInfo(&CurrentSystemTimeZone_t1843_il2cpp_TypeInfo)->static_fields)->___this_year_7 = L_10;
	}

IL_0064:
	{
		int64_t L_11 = (__this->___m_ticksOffset_4);
		TimeSpan_t618  L_12 = {0};
		TimeSpan__ctor_m10127(&L_12, L_11, /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
		__this->___utcOffsetWithOutDLS_5 = L_12;
		int64_t L_13 = (__this->___m_ticksOffset_4);
		NullCheck(___dlt);
		TimeSpan_t618  L_14 = DaylightTime_get_Delta_m7405(___dlt, /*hidden argument*/&DaylightTime_get_Delta_m7405_MethodInfo);
		V_4 = L_14;
		int64_t L_15 = TimeSpan_get_Ticks_m10137((&V_4), /*hidden argument*/&TimeSpan_get_Ticks_m10137_MethodInfo);
		TimeSpan_t618  L_16 = {0};
		TimeSpan__ctor_m10127(&L_16, ((int64_t)((int64_t)L_13+(int64_t)L_15)), /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
		__this->___utcOffsetWithDLS_6 = L_16;
		((CurrentSystemTimeZone_t1843_StaticFields*)InitializedTypeInfo(&CurrentSystemTimeZone_t1843_il2cpp_TypeInfo)->static_fields)->___this_year_dlt_8 = ___dlt;
		return;
	}
}
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1420 * CurrentSystemTimeZone_GetDaylightTimeFromData_m10179 (CurrentSystemTimeZone_t1843 * __this, Int64U5BU5D_t1255* ___data, MethodInfo* method)
{
	{
		NullCheck(___data);
		IL2CPP_ARRAY_BOUNDS_CHECK(___data, 0);
		int32_t L_0 = 0;
		DateTime_t645  L_1 = {0};
		DateTime__ctor_m9715(&L_1, (*(int64_t*)(int64_t*)SZArrayLdElema(___data, L_0)), /*hidden argument*/&DateTime__ctor_m9715_MethodInfo);
		NullCheck(___data);
		IL2CPP_ARRAY_BOUNDS_CHECK(___data, 1);
		int32_t L_2 = 1;
		DateTime_t645  L_3 = {0};
		DateTime__ctor_m9715(&L_3, (*(int64_t*)(int64_t*)SZArrayLdElema(___data, L_2)), /*hidden argument*/&DateTime__ctor_m9715_MethodInfo);
		NullCheck(___data);
		IL2CPP_ARRAY_BOUNDS_CHECK(___data, 3);
		int32_t L_4 = 3;
		TimeSpan_t618  L_5 = {0};
		TimeSpan__ctor_m10127(&L_5, (*(int64_t*)(int64_t*)SZArrayLdElema(___data, L_4)), /*hidden argument*/&TimeSpan__ctor_m10127_MethodInfo);
		DaylightTime_t1420 * L_6 = (DaylightTime_t1420 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DaylightTime_t1420_il2cpp_TypeInfo));
		DaylightTime__ctor_m7402(L_6, L_1, L_3, L_5, /*hidden argument*/&DaylightTime__ctor_m7402_MethodInfo);
		return L_6;
	}
}
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeCode_t880_il2cpp_TypeInfo;
// System.TypeCode
#include "mscorlib_System_TypeCodeMethodDeclarations.h"



// System.TypeInitializationException
#include "mscorlib_System_TypeInitializationException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInitializationException_t1844_il2cpp_TypeInfo;
// System.TypeInitializationException
#include "mscorlib_System_TypeInitializationExceptionMethodDeclarations.h"

extern TypeInfo Exception_t140_il2cpp_TypeInfo;
extern TypeInfo SerializationInfo_t612_il2cpp_TypeInfo;
extern TypeInfo StreamingContext_t614_il2cpp_TypeInfo;
extern MethodInfo SerializationInfo_GetString_m3892_MethodInfo;
extern MethodInfo Exception_GetObjectData_m4158_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3895_MethodInfo;


// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TypeInitializationException__ctor_m10180_MethodInfo;
extern "C" void TypeInitializationException__ctor_m10180 (TypeInitializationException_t1844 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		SystemException__ctor_m10124(__this, ___info, ___context, /*hidden argument*/&SystemException__ctor_m10124_MethodInfo);
		NullCheck(___info);
		String_t* L_0 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1120, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->___type_name_11 = L_0;
		return;
	}
}
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TypeInitializationException_GetObjectData_m10181_MethodInfo;
extern "C" void TypeInitializationException_GetObjectData_m10181 (TypeInitializationException_t1844 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		Exception_GetObjectData_m4158(__this, ___info, ___context, /*hidden argument*/&Exception_GetObjectData_m4158_MethodInfo);
		String_t* L_0 = (__this->___type_name_11);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1120, L_0, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		return;
	}
}
// System.TypeLoadException
#include "mscorlib_System_TypeLoadException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeLoadException_t1797_il2cpp_TypeInfo;
// System.TypeLoadException
#include "mscorlib_System_TypeLoadExceptionMethodDeclarations.h"

extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t43_0_0_0;
extern MethodInfo String_op_Inequality_m2590_MethodInfo;
extern MethodInfo String_Format_m149_MethodInfo;
extern MethodInfo String_Format_m160_MethodInfo;
extern MethodInfo Exception_get_Message_m2558_MethodInfo;


// System.Void System.TypeLoadException::.ctor()
extern MethodInfo TypeLoadException__ctor_m10182_MethodInfo;
extern "C" void TypeLoadException__ctor_m10182 (TypeLoadException_t1797 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2489, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		SystemException__ctor_m4066(__this, L_0, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233054), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String)
extern MethodInfo TypeLoadException__ctor_m10183_MethodInfo;
extern "C" void TypeLoadException__ctor_m10183 (TypeLoadException_t1797 * __this, String_t* ___message, MethodInfo* method)
{
	{
		SystemException__ctor_m4066(__this, ___message, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233054), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TypeLoadException__ctor_m10184_MethodInfo;
extern "C" void TypeLoadException__ctor_m10184 (TypeLoadException_t1797 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		SystemException__ctor_m10124(__this, ___info, ___context, /*hidden argument*/&SystemException__ctor_m10124_MethodInfo);
		if (___info)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral412, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0016:
	{
		NullCheck(___info);
		String_t* L_1 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral2490, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->___className_12 = L_1;
		NullCheck(___info);
		String_t* L_2 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral2491, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->___assemblyName_13 = L_2;
		return;
	}
}
// System.String System.TypeLoadException::get_Message()
extern MethodInfo TypeLoadException_get_Message_m10185_MethodInfo;
extern "C" String_t* TypeLoadException_get_Message_m10185 (TypeLoadException_t1797 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___className_12);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_1 = (__this->___assemblyName_13);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_2 = (__this->___assemblyName_13);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Inequality_m2590(NULL /*static, unused*/, L_2, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_op_Inequality_m2590_MethodInfo);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_4 = (__this->___className_12);
		String_t* L_5 = (__this->___assemblyName_13);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Format_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral2487, L_4, L_5, /*hidden argument*/&String_Format_m149_MethodInfo);
		return L_6;
	}

IL_0039:
	{
		String_t* L_7 = (__this->___className_12);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral2488, L_7, /*hidden argument*/&String_Format_m160_MethodInfo);
		return L_8;
	}

IL_004a:
	{
		String_t* L_9 = Exception_get_Message_m2558(__this, /*hidden argument*/&Exception_get_Message_m2558_MethodInfo);
		return L_9;
	}
}
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TypeLoadException_GetObjectData_m10186_MethodInfo;
extern "C" void TypeLoadException_GetObjectData_m10186 (TypeLoadException_t1797 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		if (___info)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral412, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		Exception_GetObjectData_m4158(__this, ___info, ___context, /*hidden argument*/&Exception_GetObjectData_m4158_MethodInfo);
		String_t* L_1 = (__this->___className_12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral2490, L_1, L_2, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		String_t* L_3 = (__this->___assemblyName_13);
		Type_t * L_4 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral2491, L_3, L_4, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral2492, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), L_5, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		int32_t L_6 = 0;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_6);
		Type_t * L_8 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Int32_t43_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral2493, L_7, L_8, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		return;
	}
}
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnauthorizedAccessException_t1845_il2cpp_TypeInfo;
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessExceptionMethodDeclarations.h"



// System.Void System.UnauthorizedAccessException::.ctor()
extern MethodInfo UnauthorizedAccessException__ctor_m10187_MethodInfo;
extern "C" void UnauthorizedAccessException__ctor_m10187 (UnauthorizedAccessException_t1845 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2494, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		SystemException__ctor_m4066(__this, L_0, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233088), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern MethodInfo UnauthorizedAccessException__ctor_m10188_MethodInfo;
extern "C" void UnauthorizedAccessException__ctor_m10188 (UnauthorizedAccessException_t1845 * __this, String_t* ___message, MethodInfo* method)
{
	{
		SystemException__ctor_m4066(__this, ___message, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146233088), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnauthorizedAccessException__ctor_m10189_MethodInfo;
extern "C" void UnauthorizedAccessException__ctor_m10189 (UnauthorizedAccessException_t1845 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		SystemException__ctor_m10124(__this, ___info, ___context, /*hidden argument*/&SystemException__ctor_m10124_MethodInfo);
		return;
	}
}
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnhandledExceptionEventArgs_t1846_il2cpp_TypeInfo;
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgsMethodDeclarations.h"



// System.UnitySerializationHolder/UnityType
#include "mscorlib_System_UnitySerializationHolder_UnityType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityType_t1847_il2cpp_TypeInfo;
// System.UnitySerializationHolder/UnityType
#include "mscorlib_System_UnitySerializationHolder_UnityTypeMethodDeclarations.h"



// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnitySerializationHolder_t1848_il2cpp_TypeInfo;
// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolderMethodDeclarations.h"

// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.DBNull
#include "mscorlib_System_DBNull.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
extern TypeInfo Assembly_t795_il2cpp_TypeInfo;
extern TypeInfo DBNull_t1786_il2cpp_TypeInfo;
extern TypeInfo Module_t1259_il2cpp_TypeInfo;
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_ModuleMethodDeclarations.h"
// System.DBNull
#include "mscorlib_System_DBNullMethodDeclarations.h"
extern Il2CppType UnitySerializationHolder_t1848_0_0_0;
extern MethodInfo SerializationInfo_GetInt32_m3894_MethodInfo;
extern MethodInfo Type_get_FullName_m5572_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3879_MethodInfo;
extern MethodInfo Type_get_Assembly_m3933_MethodInfo;
extern MethodInfo Assembly_get_FullName_m7984_MethodInfo;
extern MethodInfo SerializationInfo_SetType_m8664_MethodInfo;
extern MethodInfo Module_get_ScopeName_m8088_MethodInfo;
extern MethodInfo Module_get_Assembly_m8087_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m701_MethodInfo;
extern MethodInfo Assembly_Load_m7995_MethodInfo;
extern MethodInfo Assembly_GetType_m3934_MethodInfo;
extern MethodInfo Assembly_GetModule_m7996_MethodInfo;


// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnitySerializationHolder__ctor_m10190_MethodInfo;
extern "C" void UnitySerializationHolder__ctor_m10190 (UnitySerializationHolder_t1848 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___ctx, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		NullCheck(___info);
		String_t* L_0 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1145, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->____data_0 = L_0;
		NullCheck(___info);
		int32_t L_1 = SerializationInfo_GetInt32_m3894(___info, (String_t*) &_stringLiteral2495, /*hidden argument*/&SerializationInfo_GetInt32_m3894_MethodInfo);
		__this->____unityType_1 = (((uint8_t)L_1));
		NullCheck(___info);
		String_t* L_2 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1767, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->____assemblyName_2 = L_2;
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnitySerializationHolder_GetTypeData_m10191_MethodInfo;
extern "C" void UnitySerializationHolder_GetTypeData_m10191 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t612 * ___info, StreamingContext_t614  ___ctx, MethodInfo* method)
{
	{
		NullCheck(___instance);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5572_MethodInfo, ___instance);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1145, L_0, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3879(___info, (String_t*) &_stringLiteral2495, 4, /*hidden argument*/&SerializationInfo_AddValue_m3879_MethodInfo);
		NullCheck(___instance);
		Assembly_t795 * L_1 = (Assembly_t795 *)VirtFuncInvoker0< Assembly_t795 * >::Invoke(&Type_get_Assembly_m3933_MethodInfo, ___instance);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_get_FullName_m7984_MethodInfo, L_1);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1767, L_2, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&UnitySerializationHolder_t1848_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_SetType_m8664(___info, L_3, /*hidden argument*/&SerializationInfo_SetType_m8664_MethodInfo);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnitySerializationHolder_GetDBNullData_m10192_MethodInfo;
extern "C" void UnitySerializationHolder_GetDBNullData_m10192 (Object_t * __this /* static, unused */, DBNull_t1786 * ___instance, SerializationInfo_t612 * ___info, StreamingContext_t614  ___ctx, MethodInfo* method)
{
	{
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1145, NULL, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3879(___info, (String_t*) &_stringLiteral2495, 2, /*hidden argument*/&SerializationInfo_AddValue_m3879_MethodInfo);
		NullCheck(___instance);
		Type_t * L_0 = Object_GetType_m2357(___instance, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(L_0);
		Assembly_t795 * L_1 = (Assembly_t795 *)VirtFuncInvoker0< Assembly_t795 * >::Invoke(&Type_get_Assembly_m3933_MethodInfo, L_0);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_get_FullName_m7984_MethodInfo, L_1);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1767, L_2, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&UnitySerializationHolder_t1848_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_SetType_m8664(___info, L_3, /*hidden argument*/&SerializationInfo_SetType_m8664_MethodInfo);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnitySerializationHolder_GetModuleData_m10193_MethodInfo;
extern "C" void UnitySerializationHolder_GetModuleData_m10193 (Object_t * __this /* static, unused */, Module_t1259 * ___instance, SerializationInfo_t612 * ___info, StreamingContext_t614  ___ctx, MethodInfo* method)
{
	{
		NullCheck(___instance);
		String_t* L_0 = Module_get_ScopeName_m8088(___instance, /*hidden argument*/&Module_get_ScopeName_m8088_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1145, L_0, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3879(___info, (String_t*) &_stringLiteral2495, 5, /*hidden argument*/&SerializationInfo_AddValue_m3879_MethodInfo);
		NullCheck(___instance);
		Assembly_t795 * L_1 = Module_get_Assembly_m8087(___instance, /*hidden argument*/&Module_get_Assembly_m8087_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_get_FullName_m7984_MethodInfo, L_1);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1767, L_2, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&UnitySerializationHolder_t1848_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_SetType_m8664(___info, L_3, /*hidden argument*/&SerializationInfo_SetType_m8664_MethodInfo);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnitySerializationHolder_GetObjectData_m10194_MethodInfo;
extern "C" void UnitySerializationHolder_GetObjectData_m10194 (UnitySerializationHolder_t1848 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m701(L_0, /*hidden argument*/&NotSupportedException__ctor_m701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnitySerializationHolder_GetRealObject_m10195_MethodInfo;
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m10195 (UnitySerializationHolder_t1848 * __this, StreamingContext_t614  ___context, MethodInfo* method)
{
	Assembly_t795 * V_0 = {0};
	Assembly_t795 * V_1 = {0};
	uint8_t V_2 = {0};
	{
		uint8_t L_0 = (__this->____unityType_1);
		V_2 = L_0;
		if (((int32_t)((int32_t)V_2-(int32_t)2)) == 0)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)2)) == 1)
		{
			goto IL_0069;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)2)) == 2)
		{
			goto IL_0025;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)2)) == 3)
		{
			goto IL_0044;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)2)) == 4)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_0069;
	}

IL_0025:
	{
		String_t* L_1 = (__this->____assemblyName_2);
		Assembly_t795 * L_2 = Assembly_Load_m7995(NULL /*static, unused*/, L_1, /*hidden argument*/&Assembly_Load_m7995_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = (__this->____data_0);
		NullCheck(V_0);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(&Assembly_GetType_m3934_MethodInfo, V_0, L_3);
		return L_4;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DBNull_t1786_il2cpp_TypeInfo));
		return (((DBNull_t1786_StaticFields*)InitializedTypeInfo(&DBNull_t1786_il2cpp_TypeInfo)->static_fields)->___Value_0);
	}

IL_0044:
	{
		String_t* L_5 = (__this->____assemblyName_2);
		Assembly_t795 * L_6 = Assembly_Load_m7995(NULL /*static, unused*/, L_5, /*hidden argument*/&Assembly_Load_m7995_MethodInfo);
		V_1 = L_6;
		String_t* L_7 = (__this->____data_0);
		NullCheck(V_1);
		Module_t1259 * L_8 = (Module_t1259 *)VirtFuncInvoker1< Module_t1259 *, String_t* >::Invoke(&Assembly_GetModule_m7996_MethodInfo, V_1, L_7);
		return L_8;
	}

IL_005d:
	{
		String_t* L_9 = (__this->____data_0);
		Assembly_t795 * L_10 = Assembly_Load_m7995(NULL /*static, unused*/, L_9, /*hidden argument*/&Assembly_Load_m7995_MethodInfo);
		return L_10;
	}

IL_0069:
	{
		String_t* L_11 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2496, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		NotSupportedException_t150 * L_12 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_12, L_11, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}
}
// System.Version
#include "mscorlib_System_Version.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Version_t637_il2cpp_TypeInfo;
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"

extern TypeInfo CharU5BU5D_t45_il2cpp_TypeInfo;
extern TypeInfo Char_t46_il2cpp_TypeInfo;
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
extern Il2CppType CharU5BU5D_t45_0_0_0;
extern MethodInfo Version_CheckedSet_m10199_MethodInfo;
extern MethodInfo String_Split_m144_MethodInfo;
extern MethodInfo Int32_Parse_m4067_MethodInfo;
extern MethodInfo Version_CompareTo_m10206_MethodInfo;
extern MethodInfo Version_Equals_m10207_MethodInfo;
extern MethodInfo Version_op_Equality_m10211_MethodInfo;
extern MethodInfo Version_op_Inequality_m10212_MethodInfo;
extern MethodInfo Int32_ToString_m672_MethodInfo;
extern MethodInfo String_Concat_m169_MethodInfo;
extern MethodInfo Version__ctor_m10198_MethodInfo;
extern MethodInfo String_get_Chars_m2591_MethodInfo;
extern MethodInfo Char_IsDigit_m4085_MethodInfo;
extern MethodInfo String_get_Length_m133_MethodInfo;
extern MethodInfo Object_Equals_m4156_MethodInfo;


// System.Void System.Version::.ctor()
extern MethodInfo Version__ctor_m10196_MethodInfo;
extern "C" void Version__ctor_m10196 (Version_t637 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		Version_CheckedSet_m10199(__this, 2, 0, 0, (-1), (-1), /*hidden argument*/&Version_CheckedSet_m10199_MethodInfo);
		return;
	}
}
// System.Void System.Version::.ctor(System.String)
extern MethodInfo Version__ctor_m10197_MethodInfo;
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" void Version__ctor_m10197 (Version_t637 * __this, String_t* ___version, MethodInfo* method)
{
	static bool Version__ctor_m10197_init;
	if (!Version__ctor_m10197_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		Version__ctor_m10197_init = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t17* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		V_2 = (-1);
		V_3 = (-1);
		V_4 = (-1);
		V_5 = (-1);
		if (___version)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral465, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_001e:
	{
		CharU5BU5D_t45* L_1 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)((int32_t)46);
		NullCheck(___version);
		StringU5BU5D_t17* L_2 = String_Split_m144(___version, L_1, /*hidden argument*/&String_Split_m144_MethodInfo);
		V_1 = L_2;
		NullCheck(V_1);
		V_0 = (((int32_t)(((Array_t *)V_1)->max_length)));
		if ((((int32_t)V_0) < ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		if ((((int32_t)V_0) <= ((int32_t)4)))
		{
			goto IL_004c;
		}
	}

IL_003c:
	{
		String_t* L_3 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2497, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, L_3, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_004c:
	{
		if ((((int32_t)V_0) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, 0);
		int32_t L_5 = 0;
		int32_t L_6 = Int32_Parse_m4067(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_5)), /*hidden argument*/&Int32_Parse_m4067_MethodInfo);
		V_2 = L_6;
	}

IL_0059:
	{
		if ((((int32_t)V_0) <= ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, 1);
		int32_t L_7 = 1;
		int32_t L_8 = Int32_Parse_m4067(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_7)), /*hidden argument*/&Int32_Parse_m4067_MethodInfo);
		V_3 = L_8;
	}

IL_0066:
	{
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, 2);
		int32_t L_9 = 2;
		int32_t L_10 = Int32_Parse_m4067(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_9)), /*hidden argument*/&Int32_Parse_m4067_MethodInfo);
		V_4 = L_10;
	}

IL_0074:
	{
		if ((((int32_t)V_0) <= ((int32_t)3)))
		{
			goto IL_0082;
		}
	}
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, 3);
		int32_t L_11 = 3;
		int32_t L_12 = Int32_Parse_m4067(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_11)), /*hidden argument*/&Int32_Parse_m4067_MethodInfo);
		V_5 = L_12;
	}

IL_0082:
	{
		Version_CheckedSet_m10199(__this, V_0, V_2, V_3, V_4, V_5, /*hidden argument*/&Version_CheckedSet_m10199_MethodInfo);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern MethodInfo Version__ctor_m3897_MethodInfo;
extern "C" void Version__ctor_m3897 (Version_t637 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		Version_CheckedSet_m10199(__this, 2, ___major, ___minor, 0, 0, /*hidden argument*/&Version_CheckedSet_m10199_MethodInfo);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m10198 (Version_t637 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		Version_CheckedSet_m10199(__this, 4, ___major, ___minor, ___build, ___revision, /*hidden argument*/&Version_CheckedSet_m10199_MethodInfo);
		return;
	}
}
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version_CheckedSet_m10199 (Version_t637 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method)
{
	{
		if ((((int32_t)___major) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_0 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_0, (String_t*) &_stringLiteral2498, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000f:
	{
		__this->____Major_1 = ___major;
		if ((((int32_t)___minor) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_1 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_1, (String_t*) &_stringLiteral2499, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0025:
	{
		__this->____Minor_2 = ___minor;
		if ((((uint32_t)___defined) != ((uint32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		__this->____Build_3 = (-1);
		__this->____Revision_4 = (-1);
		return;
	}

IL_003f:
	{
		if ((((int32_t)___build) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_2 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_2, (String_t*) &_stringLiteral2500, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_004f:
	{
		__this->____Build_3 = ___build;
		if ((((uint32_t)___defined) != ((uint32_t)3)))
		{
			goto IL_0063;
		}
	}
	{
		__this->____Revision_4 = (-1);
		return;
	}

IL_0063:
	{
		if ((((int32_t)___revision) >= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_3 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_3, (String_t*) &_stringLiteral2501, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0073:
	{
		__this->____Revision_4 = ___revision;
		return;
	}
}
// System.Int32 System.Version::get_Build()
extern MethodInfo Version_get_Build_m10200_MethodInfo;
extern "C" int32_t Version_get_Build_m10200 (Version_t637 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Build_3);
		return L_0;
	}
}
// System.Int32 System.Version::get_Major()
extern MethodInfo Version_get_Major_m10201_MethodInfo;
extern "C" int32_t Version_get_Major_m10201 (Version_t637 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Major_1);
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
extern MethodInfo Version_get_Minor_m10202_MethodInfo;
extern "C" int32_t Version_get_Minor_m10202 (Version_t637 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Minor_2);
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
extern MethodInfo Version_get_Revision_m10203_MethodInfo;
extern "C" int32_t Version_get_Revision_m10203 (Version_t637 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Revision_4);
		return L_0;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
extern MethodInfo Version_CompareTo_m10204_MethodInfo;
extern "C" int32_t Version_CompareTo_m10204 (Version_t637 * __this, Object_t * ___version, MethodInfo* method)
{
	{
		if (___version)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		if (((Version_t637 *)IsInst(___version, InitializedTypeInfo(&Version_t637_il2cpp_TypeInfo))))
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral2502, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ArgumentException_t522 * L_1 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_1, L_0, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Version_t637 * >::Invoke(&Version_CompareTo_m10206_MethodInfo, __this, ((Version_t637 *)Castclass(___version, InitializedTypeInfo(&Version_t637_il2cpp_TypeInfo))));
		return L_2;
	}
}
// System.Boolean System.Version::Equals(System.Object)
extern MethodInfo Version_Equals_m10205_MethodInfo;
extern "C" bool Version_Equals_m10205 (Version_t637 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, Version_t637 * >::Invoke(&Version_Equals_m10207_MethodInfo, __this, ((Version_t637 *)IsInst(___obj, InitializedTypeInfo(&Version_t637_il2cpp_TypeInfo))));
		return L_0;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" int32_t Version_CompareTo_m10206 (Version_t637 * __this, Version_t637 * ___value, MethodInfo* method)
{
	{
		bool L_0 = Version_op_Equality_m10211(NULL /*static, unused*/, ___value, (Version_t637 *)NULL, /*hidden argument*/&Version_op_Equality_m10211_MethodInfo);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		int32_t L_1 = (__this->____Major_1);
		NullCheck(___value);
		int32_t L_2 = (___value->____Major_1);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		int32_t L_3 = (__this->____Major_1);
		NullCheck(___value);
		int32_t L_4 = (___value->____Major_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		return (-1);
	}

IL_002b:
	{
		int32_t L_5 = (__this->____Minor_2);
		NullCheck(___value);
		int32_t L_6 = (___value->____Minor_2);
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		return 1;
	}

IL_003b:
	{
		int32_t L_7 = (__this->____Minor_2);
		NullCheck(___value);
		int32_t L_8 = (___value->____Minor_2);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_004b;
		}
	}
	{
		return (-1);
	}

IL_004b:
	{
		int32_t L_9 = (__this->____Build_3);
		NullCheck(___value);
		int32_t L_10 = (___value->____Build_3);
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		int32_t L_11 = (__this->____Build_3);
		NullCheck(___value);
		int32_t L_12 = (___value->____Build_3);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_006b;
		}
	}
	{
		return (-1);
	}

IL_006b:
	{
		int32_t L_13 = (__this->____Revision_4);
		NullCheck(___value);
		int32_t L_14 = (___value->____Revision_4);
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_007b;
		}
	}
	{
		return 1;
	}

IL_007b:
	{
		int32_t L_15 = (__this->____Revision_4);
		NullCheck(___value);
		int32_t L_16 = (___value->____Revision_4);
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_008b;
		}
	}
	{
		return (-1);
	}

IL_008b:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Version)
extern "C" bool Version_Equals_m10207 (Version_t637 * __this, Version_t637 * ___obj, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		bool L_0 = Version_op_Inequality_m10212(NULL /*static, unused*/, ___obj, (Version_t637 *)NULL, /*hidden argument*/&Version_op_Inequality_m10212_MethodInfo);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		NullCheck(___obj);
		int32_t L_1 = (___obj->____Major_1);
		int32_t L_2 = (__this->____Major_1);
		if ((((uint32_t)L_1) != ((uint32_t)L_2)))
		{
			goto IL_0043;
		}
	}
	{
		NullCheck(___obj);
		int32_t L_3 = (___obj->____Minor_2);
		int32_t L_4 = (__this->____Minor_2);
		if ((((uint32_t)L_3) != ((uint32_t)L_4)))
		{
			goto IL_0043;
		}
	}
	{
		NullCheck(___obj);
		int32_t L_5 = (___obj->____Build_3);
		int32_t L_6 = (__this->____Build_3);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_0043;
		}
	}
	{
		NullCheck(___obj);
		int32_t L_7 = (___obj->____Revision_4);
		int32_t L_8 = (__this->____Revision_4);
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 0;
	}

IL_0044:
	{
		return G_B6_0;
	}
}
// System.Int32 System.Version::GetHashCode()
extern MethodInfo Version_GetHashCode_m10208_MethodInfo;
extern "C" int32_t Version_GetHashCode_m10208 (Version_t637 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Revision_4);
		int32_t L_1 = (__this->____Build_3);
		int32_t L_2 = (__this->____Minor_2);
		int32_t L_3 = (__this->____Major_1);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
// System.String System.Version::ToString()
extern MethodInfo Version_ToString_m10209_MethodInfo;
extern "C" String_t* Version_ToString_m10209 (Version_t637 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		int32_t* L_0 = &(__this->____Major_1);
		String_t* L_1 = Int32_ToString_m672(L_0, /*hidden argument*/&Int32_ToString_m672_MethodInfo);
		int32_t* L_2 = &(__this->____Minor_2);
		String_t* L_3 = Int32_ToString_m672(L_2, /*hidden argument*/&Int32_ToString_m672_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m169(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral385, L_3, /*hidden argument*/&String_Concat_m169_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = (__this->____Build_3);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t* L_6 = &(__this->____Build_3);
		String_t* L_7 = Int32_ToString_m672(L_6, /*hidden argument*/&Int32_ToString_m672_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m169(NULL /*static, unused*/, V_0, (String_t*) &_stringLiteral385, L_7, /*hidden argument*/&String_Concat_m169_MethodInfo);
		V_0 = L_8;
	}

IL_0041:
	{
		int32_t L_9 = (__this->____Revision_4);
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t* L_10 = &(__this->____Revision_4);
		String_t* L_11 = Int32_ToString_m672(L_10, /*hidden argument*/&Int32_ToString_m672_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Concat_m169(NULL /*static, unused*/, V_0, (String_t*) &_stringLiteral385, L_11, /*hidden argument*/&String_Concat_m169_MethodInfo);
		V_0 = L_12;
	}

IL_0061:
	{
		return V_0;
	}
}
// System.Version System.Version::CreateFromString(System.String)
extern MethodInfo Version_CreateFromString_m10210_MethodInfo;
extern "C" Version_t637 * Version_CreateFromString_m10210 (Object_t * __this /* static, unused */, String_t* ___info, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0x0;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		V_5 = (-1);
		if (___info)
		{
			goto IL_001b;
		}
	}
	{
		Version_t637 * L_0 = (Version_t637 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t637_il2cpp_TypeInfo));
		Version__ctor_m10198(L_0, 0, 0, 0, 0, /*hidden argument*/&Version__ctor_m10198_MethodInfo);
		return L_0;
	}

IL_001b:
	{
		V_6 = 0;
		goto IL_00a1;
	}

IL_0023:
	{
		NullCheck(___info);
		uint16_t L_1 = String_get_Chars_m2591(___info, V_6, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_7 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo));
		bool L_2 = Char_IsDigit_m4085(NULL /*static, unused*/, V_7, /*hidden argument*/&Char_IsDigit_m4085_MethodInfo);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		if ((((int32_t)V_5) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		V_5 = ((int32_t)((int32_t)V_7-(int32_t)((int32_t)48)));
		goto IL_0051;
	}

IL_0044:
	{
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)V_5*(int32_t)((int32_t)10)))+(int32_t)((int32_t)((int32_t)V_7-(int32_t)((int32_t)48)))));
	}

IL_0051:
	{
		goto IL_0094;
	}

IL_0053:
	{
		if ((((int32_t)V_5) < ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		V_8 = V_4;
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 0)
		{
			goto IL_0077;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 1)
		{
			goto IL_007c;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 2)
		{
			goto IL_0081;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 3)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_008b;
	}

IL_0077:
	{
		V_0 = V_5;
		goto IL_008b;
	}

IL_007c:
	{
		V_1 = V_5;
		goto IL_008b;
	}

IL_0081:
	{
		V_2 = V_5;
		goto IL_008b;
	}

IL_0086:
	{
		V_3 = V_5;
		goto IL_008b;
	}

IL_008b:
	{
		V_5 = (-1);
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
	}

IL_0094:
	{
		if ((((uint32_t)V_4) != ((uint32_t)5)))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_00ae;
	}

IL_009b:
	{
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_00a1:
	{
		NullCheck(___info);
		int32_t L_3 = String_get_Length_m133(___info, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)V_6) < ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}

IL_00ae:
	{
		if ((((int32_t)V_5) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		V_8 = V_4;
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 0)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 2)
		{
			goto IL_00dc;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 3)
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_00e6;
	}

IL_00d2:
	{
		V_0 = V_5;
		goto IL_00e6;
	}

IL_00d7:
	{
		V_1 = V_5;
		goto IL_00e6;
	}

IL_00dc:
	{
		V_2 = V_5;
		goto IL_00e6;
	}

IL_00e1:
	{
		V_3 = V_5;
		goto IL_00e6;
	}

IL_00e6:
	{
		Version_t637 * L_4 = (Version_t637 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t637_il2cpp_TypeInfo));
		Version__ctor_m10198(L_4, V_0, V_1, V_2, V_3, /*hidden argument*/&Version__ctor_m10198_MethodInfo);
		return L_4;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" bool Version_op_Equality_m10211 (Object_t * __this /* static, unused */, Version_t637 * ___v1, Version_t637 * ___v2, MethodInfo* method)
{
	{
		bool L_0 = Object_Equals_m4156(NULL /*static, unused*/, ___v1, ___v2, /*hidden argument*/&Object_Equals_m4156_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" bool Version_op_Inequality_m10212 (Object_t * __this /* static, unused */, Version_t637 * ___v1, Version_t637 * ___v2, MethodInfo* method)
{
	{
		bool L_0 = Object_Equals_m4156(NULL /*static, unused*/, ___v1, ___v2, /*hidden argument*/&Object_Equals_m4156_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WeakReference_t1612_il2cpp_TypeInfo;
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"

// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern MethodInfo GCHandle_get_Target_m8258_MethodInfo;
extern MethodInfo WeakReference__ctor_m10215_MethodInfo;
extern MethodInfo WeakReference_AllocateHandle_m10217_MethodInfo;
extern MethodInfo SerializationInfo_GetBoolean_m3882_MethodInfo;
extern MethodInfo GCHandle_Alloc_m8259_MethodInfo;
extern MethodInfo GCHandle_Free_m8260_MethodInfo;
extern MethodInfo Object_Finalize_m226_MethodInfo;
extern MethodInfo WeakReference_get_TrackResurrection_m10219_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3878_MethodInfo;
extern MethodInfo WeakReference_get_Target_m10218_MethodInfo;


// System.Void System.WeakReference::.ctor()
extern MethodInfo WeakReference__ctor_m10213_MethodInfo;
extern "C" void WeakReference__ctor_m10213 (WeakReference_t1612 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object)
extern MethodInfo WeakReference__ctor_m10214_MethodInfo;
extern "C" void WeakReference__ctor_m10214 (WeakReference_t1612 * __this, Object_t * ___target, MethodInfo* method)
{
	{
		WeakReference__ctor_m10215(__this, ___target, 0, /*hidden argument*/&WeakReference__ctor_m10215_MethodInfo);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" void WeakReference__ctor_m10215 (WeakReference_t1612 * __this, Object_t * ___target, bool ___trackResurrection, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___isLongReference_0 = ___trackResurrection;
		WeakReference_AllocateHandle_m10217(__this, ___target, /*hidden argument*/&WeakReference_AllocateHandle_m10217_MethodInfo);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo WeakReference__ctor_m10216_MethodInfo;
extern "C" void WeakReference__ctor_m10216 (WeakReference_t1612 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		if (___info)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral412, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		NullCheck(___info);
		bool L_1 = SerializationInfo_GetBoolean_m3882(___info, (String_t*) &_stringLiteral2503, /*hidden argument*/&SerializationInfo_GetBoolean_m3882_MethodInfo);
		__this->___isLongReference_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		Object_t * L_3 = SerializationInfo_GetValue_m3880(___info, (String_t*) &_stringLiteral2504, L_2, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		V_0 = L_3;
		WeakReference_AllocateHandle_m10217(__this, V_0, /*hidden argument*/&WeakReference_AllocateHandle_m10217_MethodInfo);
		return;
	}
}
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" void WeakReference_AllocateHandle_m10217 (WeakReference_t1612 * __this, Object_t * ___target, MethodInfo* method)
{
	{
		bool L_0 = (__this->___isLongReference_0);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		GCHandle_t1543  L_1 = GCHandle_Alloc_m8259(NULL /*static, unused*/, ___target, 1, /*hidden argument*/&GCHandle_Alloc_m8259_MethodInfo);
		__this->___gcHandle_1 = L_1;
		goto IL_0024;
	}

IL_0017:
	{
		GCHandle_t1543  L_2 = GCHandle_Alloc_m8259(NULL /*static, unused*/, ___target, 0, /*hidden argument*/&GCHandle_Alloc_m8259_MethodInfo);
		__this->___gcHandle_1 = L_2;
	}

IL_0024:
	{
		return;
	}
}
// System.Object System.WeakReference::get_Target()
extern "C" Object_t * WeakReference_get_Target_m10218 (WeakReference_t1612 * __this, MethodInfo* method)
{
	{
		GCHandle_t1543 * L_0 = &(__this->___gcHandle_1);
		Object_t * L_1 = GCHandle_get_Target_m8258(L_0, /*hidden argument*/&GCHandle_get_Target_m8258_MethodInfo);
		return L_1;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C" bool WeakReference_get_TrackResurrection_m10219 (WeakReference_t1612 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___isLongReference_0);
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern MethodInfo WeakReference_Finalize_m10220_MethodInfo;
extern "C" void WeakReference_Finalize_m10220 (WeakReference_t1612 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t1543 * L_0 = &(__this->___gcHandle_1);
		GCHandle_Free_m8260(L_0, /*hidden argument*/&GCHandle_Free_m8260_MethodInfo);
		// IL_000b: leave.s IL_0014
		leaveInstructions[0] = 0x14; // 1
		THROW_SENTINEL(IL_0014);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_000d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_000d;
	}

IL_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_m226(__this, /*hidden argument*/&Object_Finalize_m226_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x14:
				goto IL_0014;
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

IL_0014:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo WeakReference_GetObjectData_m10221_MethodInfo;
extern "C" void WeakReference_GetObjectData_m10221 (WeakReference_t1612 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (___info)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral412, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&WeakReference_get_TrackResurrection_m10219_MethodInfo, __this);
		NullCheck(___info);
		SerializationInfo_AddValue_m3878(___info, (String_t*) &_stringLiteral2503, L_1, /*hidden argument*/&SerializationInfo_AddValue_m3878_MethodInfo);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&WeakReference_get_Target_m10218_MethodInfo, __this);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral2504, L_2, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		// IL_0030: leave.s IL_0041
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0032;
		throw e;
	}

IL_0032:
	{ // begin catch(System.Exception)
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral2504, NULL, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		// IL_003f: leave.s IL_0041
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		return;
	}
}
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrimalityTest_t1307_il2cpp_TypeInfo;
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// Mono.Math.BigInteger
#include "mscorlib_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrimalityTest__ctor_m10222_MethodInfo;
extern "C" void PrimalityTest__ctor_m10222 (PrimalityTest_t1307 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern MethodInfo PrimalityTest_Invoke_m10223_MethodInfo;
extern "C" bool PrimalityTest_Invoke_m10223 (PrimalityTest_t1307 * __this, BigInteger_t1308 * ___bi, int32_t ___confidence, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m10223((PrimalityTest_t1307 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t1308 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t1308 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t1307(Il2CppObject* delegate, BigInteger_t1308 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t1308 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern MethodInfo PrimalityTest_BeginInvoke_m10224_MethodInfo;
extern "C" Object_t * PrimalityTest_BeginInvoke_m10224 (PrimalityTest_t1307 * __this, BigInteger_t1308 * ___bi, int32_t ___confidence, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(InitializedTypeInfo(&ConfidenceFactor_t1310_il2cpp_TypeInfo), &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern MethodInfo PrimalityTest_EndInvoke_m10225_MethodInfo;
extern "C" bool PrimalityTest_EndInvoke_m10225 (PrimalityTest_t1307 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MemberFilter_t1257_il2cpp_TypeInfo;
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilterMethodDeclarations.h"

// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"


// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern MethodInfo MemberFilter__ctor_m10226_MethodInfo;
extern "C" void MemberFilter__ctor_m10226 (MemberFilter_t1257 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern MethodInfo MemberFilter_Invoke_m10227_MethodInfo;
extern "C" bool MemberFilter_Invoke_m10227 (MemberFilter_t1257 * __this, MemberInfo_t870 * ___m, Object_t * ___filterCriteria, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MemberFilter_Invoke_m10227((MemberFilter_t1257 *)__this->___prev_9,___m, ___filterCriteria, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, MemberInfo_t870 * ___m, Object_t * ___filterCriteria, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, MemberInfo_t870 * ___m, Object_t * ___filterCriteria, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___filterCriteria, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_MemberFilter_t1257(Il2CppObject* delegate, MemberInfo_t870 * ___m, Object_t * ___filterCriteria)
{
	// Marshaling of parameter '___m' to native representation
	MemberInfo_t870 * ____m_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Reflection.MemberInfo'."));
}
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern MethodInfo MemberFilter_BeginInvoke_m10228_MethodInfo;
extern "C" Object_t * MemberFilter_BeginInvoke_m10228 (MemberFilter_t1257 * __this, MemberInfo_t870 * ___m, Object_t * ___filterCriteria, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___m;
	__d_args[1] = ___filterCriteria;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern MethodInfo MemberFilter_EndInvoke_m10229_MethodInfo;
extern "C" bool MemberFilter_EndInvoke_m10229 (MemberFilter_t1257 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeFilter_t1503_il2cpp_TypeInfo;
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"



// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern MethodInfo TypeFilter__ctor_m10230_MethodInfo;
extern "C" void TypeFilter__ctor_m10230 (TypeFilter_t1503 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern MethodInfo TypeFilter_Invoke_m10231_MethodInfo;
extern "C" bool TypeFilter_Invoke_m10231 (TypeFilter_t1503 * __this, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TypeFilter_Invoke_m10231((TypeFilter_t1503 *)__this->___prev_9,___m, ___filterCriteria, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___filterCriteria, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_TypeFilter_t1503(Il2CppObject* delegate, Type_t * ___m, Object_t * ___filterCriteria)
{
	// Marshaling of parameter '___m' to native representation
	Type_t * ____m_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Type'."));
}
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern MethodInfo TypeFilter_BeginInvoke_m10232_MethodInfo;
extern "C" Object_t * TypeFilter_BeginInvoke_m10232 (TypeFilter_t1503 * __this, Type_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___m;
	__d_args[1] = ___filterCriteria;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern MethodInfo TypeFilter_EndInvoke_m10233_MethodInfo;
extern "C" bool TypeFilter_EndInvoke_m10233 (TypeFilter_t1503 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HeaderHandler_t1631_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"


// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo HeaderHandler__ctor_m10234_MethodInfo;
extern "C" void HeaderHandler__ctor_m10234 (HeaderHandler_t1631 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern MethodInfo HeaderHandler_Invoke_m10235_MethodInfo;
extern "C" Object_t * HeaderHandler_Invoke_m10235 (HeaderHandler_t1631 * __this, HeaderU5BU5D_t1587* ___headers, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HeaderHandler_Invoke_m10235((HeaderHandler_t1631 *)__this->___prev_9,___headers, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, HeaderU5BU5D_t1587* ___headers, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, HeaderU5BU5D_t1587* ___headers, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_HeaderHandler_t1631(Il2CppObject* delegate, HeaderU5BU5D_t1587* ___headers)
{
	// Marshaling of parameter '___headers' to native representation
	HeaderU5BU5D_t1587* ____headers_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Messaging.Header[]'."));
}
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern MethodInfo HeaderHandler_BeginInvoke_m10236_MethodInfo;
extern "C" Object_t * HeaderHandler_BeginInvoke_m10236 (HeaderHandler_t1631 * __this, HeaderU5BU5D_t1587* ___headers, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___headers;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo HeaderHandler_EndInvoke_m10237_MethodInfo;
extern "C" Object_t * HeaderHandler_EndInvoke_m10237 (HeaderHandler_t1631 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AppDomainInitializer_t1776_il2cpp_TypeInfo;
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"



// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern MethodInfo AppDomainInitializer__ctor_m10238_MethodInfo;
extern "C" void AppDomainInitializer__ctor_m10238 (AppDomainInitializer_t1776 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern MethodInfo AppDomainInitializer_Invoke_m10239_MethodInfo;
extern "C" void AppDomainInitializer_Invoke_m10239 (AppDomainInitializer_t1776 * __this, StringU5BU5D_t17* ___args, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AppDomainInitializer_Invoke_m10239((AppDomainInitializer_t1776 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, StringU5BU5D_t17* ___args, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, StringU5BU5D_t17* ___args, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1776(Il2CppObject* delegate, StringU5BU5D_t17* ___args)
{
	typedef void (STDCALL *native_function_ptr_type)(char**);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	char** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_string_array(___args);

	// Native function invocation
	_il2cpp_pinvoke_func(____args_marshaled);

	// Marshaling cleanup of parameter '___args' native representation
	if (___args != NULL) il2cpp_codegen_marshal_free_string_array((void**)____args_marshaled, ((Il2CppCodeGenArray*)___args)->max_length);
	____args_marshaled = NULL;

}
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern MethodInfo AppDomainInitializer_BeginInvoke_m10240_MethodInfo;
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m10240 (AppDomainInitializer_t1776 * __this, StringU5BU5D_t17* ___args, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern MethodInfo AppDomainInitializer_EndInvoke_m10241_MethodInfo;
extern "C" void AppDomainInitializer_EndInvoke_m10241 (AppDomainInitializer_t1776 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyLoadEventHandler_t1772_il2cpp_TypeInfo;
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"

// System.AssemblyLoadEventArgs
#include "mscorlib_System_AssemblyLoadEventArgs.h"


// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo AssemblyLoadEventHandler__ctor_m10242_MethodInfo;
extern "C" void AssemblyLoadEventHandler__ctor_m10242 (AssemblyLoadEventHandler_t1772 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern MethodInfo AssemblyLoadEventHandler_Invoke_m10243_MethodInfo;
extern "C" void AssemblyLoadEventHandler_Invoke_m10243 (AssemblyLoadEventHandler_t1772 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1781 * ___args, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AssemblyLoadEventHandler_Invoke_m10243((AssemblyLoadEventHandler_t1772 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1781 * ___args, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1781 * ___args, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, AssemblyLoadEventArgs_t1781 * ___args, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t1772(Il2CppObject* delegate, Object_t * ___sender, AssemblyLoadEventArgs_t1781 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern MethodInfo AssemblyLoadEventHandler_BeginInvoke_m10244_MethodInfo;
extern "C" Object_t * AssemblyLoadEventHandler_BeginInvoke_m10244 (AssemblyLoadEventHandler_t1772 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1781 * ___args, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo AssemblyLoadEventHandler_EndInvoke_m10245_MethodInfo;
extern "C" void AssemblyLoadEventHandler_EndInvoke_m10245 (AssemblyLoadEventHandler_t1772 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventHandler_t1774_il2cpp_TypeInfo;
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"

// System.EventArgs
#include "mscorlib_System_EventArgs.h"


// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo EventHandler__ctor_m10246_MethodInfo;
extern "C" void EventHandler__ctor_m10246 (EventHandler_t1774 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern MethodInfo EventHandler_Invoke_m10247_MethodInfo;
extern "C" void EventHandler_Invoke_m10247 (EventHandler_t1774 * __this, Object_t * ___sender, EventArgs_t1322 * ___e, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandler_Invoke_m10247((EventHandler_t1774 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, EventArgs_t1322 * ___e, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, EventArgs_t1322 * ___e, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, EventArgs_t1322 * ___e, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_EventHandler_t1774(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t1322 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern MethodInfo EventHandler_BeginInvoke_m10248_MethodInfo;
extern "C" Object_t * EventHandler_BeginInvoke_m10248 (EventHandler_t1774 * __this, Object_t * ___sender, EventArgs_t1322 * ___e, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo EventHandler_EndInvoke_m10249_MethodInfo;
extern "C" void EventHandler_EndInvoke_m10249 (EventHandler_t1774 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResolveEventHandler_t1773_il2cpp_TypeInfo;
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"



// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo ResolveEventHandler__ctor_m10250_MethodInfo;
extern "C" void ResolveEventHandler__ctor_m10250 (ResolveEventHandler_t1773 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern MethodInfo ResolveEventHandler_Invoke_m10251_MethodInfo;
extern "C" Assembly_t795 * ResolveEventHandler_Invoke_m10251 (ResolveEventHandler_t1773 * __this, Object_t * ___sender, ResolveEventArgs_t1836 * ___args, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResolveEventHandler_Invoke_m10251((ResolveEventHandler_t1773 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Assembly_t795 * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ResolveEventArgs_t1836 * ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Assembly_t795 * (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ResolveEventArgs_t1836 * ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Assembly_t795 * (*FunctionPointerType) (Object_t * __this, ResolveEventArgs_t1836 * ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Assembly_t795 * pinvoke_delegate_wrapper_ResolveEventHandler_t1773(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1836 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern MethodInfo ResolveEventHandler_BeginInvoke_m10252_MethodInfo;
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m10252 (ResolveEventHandler_t1773 * __this, Object_t * ___sender, ResolveEventArgs_t1836 * ___args, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo ResolveEventHandler_EndInvoke_m10253_MethodInfo;
extern "C" Assembly_t795 * ResolveEventHandler_EndInvoke_m10253 (ResolveEventHandler_t1773 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Assembly_t795 *)__result;
}
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnhandledExceptionEventHandler_t1775_il2cpp_TypeInfo;
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"



// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo UnhandledExceptionEventHandler__ctor_m10254_MethodInfo;
extern "C" void UnhandledExceptionEventHandler__ctor_m10254 (UnhandledExceptionEventHandler_t1775 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern MethodInfo UnhandledExceptionEventHandler_Invoke_m10255_MethodInfo;
extern "C" void UnhandledExceptionEventHandler_Invoke_m10255 (UnhandledExceptionEventHandler_t1775 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t1846 * ___e, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m10255((UnhandledExceptionEventHandler_t1775 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t1846 * ___e, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t1846 * ___e, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, UnhandledExceptionEventArgs_t1846 * ___e, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t1775(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t1846 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m10256_MethodInfo;
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m10256 (UnhandledExceptionEventHandler_t1775 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t1846 * ___e, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo UnhandledExceptionEventHandler_EndInvoke_m10257_MethodInfo;
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m10257 (UnhandledExceptionEventHandler_t1775 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$56.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$56_t1853_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$56MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void $ArrayType$56_t1853_marshal(const $ArrayType$56_t1853& unmarshaled, $ArrayType$56_t1853_marshaled& marshaled)
{
}
void $ArrayType$56_t1853_marshal_back(const $ArrayType$56_t1853_marshaled& marshaled, $ArrayType$56_t1853& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void $ArrayType$56_t1853_marshal_cleanup($ArrayType$56_t1853_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$24_t1854_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$24MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void $ArrayType$24_t1854_marshal(const $ArrayType$24_t1854& unmarshaled, $ArrayType$24_t1854_marshaled& marshaled)
{
}
void $ArrayType$24_t1854_marshal_back(const $ArrayType$24_t1854_marshaled& marshaled, $ArrayType$24_t1854& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void $ArrayType$24_t1854_marshal_cleanup($ArrayType$24_t1854_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$16_t1855_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$16MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1855_marshal(const $ArrayType$16_t1855& unmarshaled, $ArrayType$16_t1855_marshaled& marshaled)
{
}
void $ArrayType$16_t1855_marshal_back(const $ArrayType$16_t1855_marshaled& marshaled, $ArrayType$16_t1855& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1855_marshal_cleanup($ArrayType$16_t1855_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$120.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$120_t1856_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$120MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void $ArrayType$120_t1856_marshal(const $ArrayType$120_t1856& unmarshaled, $ArrayType$120_t1856_marshaled& marshaled)
{
}
void $ArrayType$120_t1856_marshal_back(const $ArrayType$120_t1856_marshaled& marshaled, $ArrayType$120_t1856& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void $ArrayType$120_t1856_marshal_cleanup($ArrayType$120_t1856_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$3132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$3132_t1857_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$3132MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1857_marshal(const $ArrayType$3132_t1857& unmarshaled, $ArrayType$3132_t1857_marshaled& marshaled)
{
}
void $ArrayType$3132_t1857_marshal_back(const $ArrayType$3132_t1857_marshaled& marshaled, $ArrayType$3132_t1857& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1857_marshal_cleanup($ArrayType$3132_t1857_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$20.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t1858_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$20MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1858_marshal(const $ArrayType$20_t1858& unmarshaled, $ArrayType$20_t1858_marshaled& marshaled)
{
}
void $ArrayType$20_t1858_marshal_back(const $ArrayType$20_t1858_marshaled& marshaled, $ArrayType$20_t1858& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1858_marshal_cleanup($ArrayType$20_t1858_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$32_t1859_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$32MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1859_marshal(const $ArrayType$32_t1859& unmarshaled, $ArrayType$32_t1859_marshaled& marshaled)
{
}
void $ArrayType$32_t1859_marshal_back(const $ArrayType$32_t1859_marshaled& marshaled, $ArrayType$32_t1859& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1859_marshal_cleanup($ArrayType$32_t1859_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$48.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$48_t1860_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$48MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1860_marshal(const $ArrayType$48_t1860& unmarshaled, $ArrayType$48_t1860_marshaled& marshaled)
{
}
void $ArrayType$48_t1860_marshal_back(const $ArrayType$48_t1860_marshaled& marshaled, $ArrayType$48_t1860& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1860_marshal_cleanup($ArrayType$48_t1860_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$64.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$64_t1861_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$64MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1861_marshal(const $ArrayType$64_t1861& unmarshaled, $ArrayType$64_t1861_marshaled& marshaled)
{
}
void $ArrayType$64_t1861_marshal_back(const $ArrayType$64_t1861_marshaled& marshaled, $ArrayType$64_t1861& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1861_marshal_cleanup($ArrayType$64_t1861_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$12_t1862_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$12MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1862_marshal(const $ArrayType$12_t1862& unmarshaled, $ArrayType$12_t1862_marshaled& marshaled)
{
}
void $ArrayType$12_t1862_marshal_back(const $ArrayType$12_t1862_marshaled& marshaled, $ArrayType$12_t1862& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1862_marshal_cleanup($ArrayType$12_t1862_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$136.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$136_t1863_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$136MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void $ArrayType$136_t1863_marshal(const $ArrayType$136_t1863& unmarshaled, $ArrayType$136_t1863_marshaled& marshaled)
{
}
void $ArrayType$136_t1863_marshal_back(const $ArrayType$136_t1863_marshaled& marshaled, $ArrayType$136_t1863& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void $ArrayType$136_t1863_marshal_cleanup($ArrayType$136_t1863_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$72.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$72_t1864_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$72MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void $ArrayType$72_t1864_marshal(const $ArrayType$72_t1864& unmarshaled, $ArrayType$72_t1864_marshaled& marshaled)
{
}
void $ArrayType$72_t1864_marshal_back(const $ArrayType$72_t1864_marshaled& marshaled, $ArrayType$72_t1864& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void $ArrayType$72_t1864_marshal_cleanup($ArrayType$72_t1864_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$124.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$124_t1865_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$124MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void $ArrayType$124_t1865_marshal(const $ArrayType$124_t1865& unmarshaled, $ArrayType$124_t1865_marshaled& marshaled)
{
}
void $ArrayType$124_t1865_marshal_back(const $ArrayType$124_t1865_marshaled& marshaled, $ArrayType$124_t1865& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void $ArrayType$124_t1865_marshal_cleanup($ArrayType$124_t1865_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$96.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$96_t1866_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$96MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void $ArrayType$96_t1866_marshal(const $ArrayType$96_t1866& unmarshaled, $ArrayType$96_t1866_marshaled& marshaled)
{
}
void $ArrayType$96_t1866_marshal_back(const $ArrayType$96_t1866_marshaled& marshaled, $ArrayType$96_t1866& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void $ArrayType$96_t1866_marshal_cleanup($ArrayType$96_t1866_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$2048.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$2048_t1867_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$2048MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void $ArrayType$2048_t1867_marshal(const $ArrayType$2048_t1867& unmarshaled, $ArrayType$2048_t1867_marshaled& marshaled)
{
}
void $ArrayType$2048_t1867_marshal_back(const $ArrayType$2048_t1867_marshaled& marshaled, $ArrayType$2048_t1867& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void $ArrayType$2048_t1867_marshal_cleanup($ArrayType$2048_t1867_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$256.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$256_t1868_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$256MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1868_marshal(const $ArrayType$256_t1868& unmarshaled, $ArrayType$256_t1868_marshaled& marshaled)
{
}
void $ArrayType$256_t1868_marshal_back(const $ArrayType$256_t1868_marshaled& marshaled, $ArrayType$256_t1868& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1868_marshal_cleanup($ArrayType$256_t1868_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$1024.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$1024_t1869_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$1024MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void $ArrayType$1024_t1869_marshal(const $ArrayType$1024_t1869& unmarshaled, $ArrayType$1024_t1869_marshaled& marshaled)
{
}
void $ArrayType$1024_t1869_marshal_back(const $ArrayType$1024_t1869_marshaled& marshaled, $ArrayType$1024_t1869& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void $ArrayType$1024_t1869_marshal_cleanup($ArrayType$1024_t1869_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$640.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$640_t1870_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$640MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void $ArrayType$640_t1870_marshal(const $ArrayType$640_t1870& unmarshaled, $ArrayType$640_t1870_marshaled& marshaled)
{
}
void $ArrayType$640_t1870_marshal_back(const $ArrayType$640_t1870_marshaled& marshaled, $ArrayType$640_t1870& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void $ArrayType$640_t1870_marshal_cleanup($ArrayType$640_t1870_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$128.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$128_t1871_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$128MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void $ArrayType$128_t1871_marshal(const $ArrayType$128_t1871& unmarshaled, $ArrayType$128_t1871_marshaled& marshaled)
{
}
void $ArrayType$128_t1871_marshal_back(const $ArrayType$128_t1871_marshaled& marshaled, $ArrayType$128_t1871& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void $ArrayType$128_t1871_marshal_cleanup($ArrayType$128_t1871_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$52.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$52_t1872_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$52MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void $ArrayType$52_t1872_marshal(const $ArrayType$52_t1872& unmarshaled, $ArrayType$52_t1872_marshaled& marshaled)
{
}
void $ArrayType$52_t1872_marshal_back(const $ArrayType$52_t1872_marshaled& marshaled, $ArrayType$52_t1872& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void $ArrayType$52_t1872_marshal_cleanup($ArrayType$52_t1872_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1873_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
