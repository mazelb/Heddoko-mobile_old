#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo IComparer_1_t2303_il2cpp_TypeInfo;

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Int16
#include "mscorlib_System_Int16.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IComparer`1<System.Int16>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t2305_il2cpp_TypeInfo;

// System.Int64
#include "mscorlib_System_Int64.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.Int64>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2307_il2cpp_TypeInfo;

// System.Guid
#include "mscorlib_System_Guid.h"


// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2308_il2cpp_TypeInfo;

// System.Boolean
#include "mscorlib_System_Boolean.h"


// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t1926_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
extern TypeInfo Guid_t1811_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_35MethodDeclarations.h"
extern Il2CppType IComparable_1_t2307_0_0_0;
extern MethodInfo IComparable_1_CompareTo_m23844_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m20023_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m23844_GenericMethod;


// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern Il2CppGenericMethod GenericComparer_1__ctor_m10428_GenericMethod;
extern "C" void GenericComparer_1__ctor_m10428_gshared (GenericComparer_1_t1926 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t3273 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern Il2CppGenericMethod GenericComparer_1_Compare_m20022_GenericMethod;
extern "C" int32_t GenericComparer_1_Compare_m20022_gshared (GenericComparer_1_t1926 * __this, Guid_t1811  ___x, Guid_t1811  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Guid_t1811  L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t1811  L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t1811  L_4 = ___y;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t1811  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), ___y);
		return L_6;
	}
}
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_35.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t3273_il2cpp_TypeInfo;

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.GenericComparer`1
#include "mscorlib_System_Collections_Generic_GenericComparer_1.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_36.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t1366_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t138_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3274_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t522_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_36MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t3273_0_0_0;
extern Il2CppType Guid_t1811_0_0_0;
extern Il2CppType GenericComparer_1_t1366_0_0_0;
extern Il2CppType TypeU5BU5D_t138_0_0_0;
extern Il2CppType DefaultComparer_t3274_0_0_0;
extern MethodInfo Object__ctor_m127_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4313_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5553_MethodInfo;
extern MethodInfo Activator_CreateInstance_m5587_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m20027_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23845_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9445_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m20027_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23845_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
extern "C" void Comparer_1__ctor_m20023_gshared (Comparer_1_t3273 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m20024_GenericMethod;
extern "C" void Comparer_1__cctor_m20024_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3274 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3274 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3274 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t3273_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m20025_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m20025_gshared (Comparer_1_t3273 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
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
		if (!((Object_t *)IsInst(___x, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, Guid_t1811 , Guid_t1811  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(Guid_t1811 *)((Guid_t1811 *)UnBox (___x, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(Guid_t1811 *)((Guid_t1811 *)UnBox (___y, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t522 * L_1 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m9445(L_1, /*hidden argument*/&ArgumentException__ctor_m9445_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m20026_GenericMethod;
extern "C" Comparer_1_t3273 * Comparer_1_get_Default_m20026_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return (((Comparer_1_t3273_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4399_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo IComparable_t60_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern MethodInfo IComparable_CompareTo_m10265_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2758_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m20027_gshared (DefaultComparer_t3274 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t3273 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m20028_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m20028_gshared (DefaultComparer_t3274 * __this, Guid_t1811  ___x, Guid_t1811  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Guid_t1811  L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t1811  L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t1811  L_4 = ___y;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Guid_t1811  L_6 = ___x;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_6);
		if (!((Object_t*)IsInst(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		Guid_t1811  L_8 = ___x;
		Object_t * L_9 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t1811  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), ___y);
		return L_10;
	}

IL_003e:
	{
		Guid_t1811  L_11 = ___x;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t60_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		Guid_t1811  L_13 = ___x;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		Guid_t1811  L_15 = ___y;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t60_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m10265_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t60_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t522 * L_18 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_18, (String_t*) &_stringLiteral1402, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t1927_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_48MethodDeclarations.h"
extern Il2CppType IEquatable_1_t2308_0_0_0;
extern MethodInfo Object_GetHashCode_m227_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m23846_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m20031_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m23846_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m10429_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m10429_gshared (GenericEqualityComparer_1_t1927 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3275 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m20029_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m20029_gshared (GenericEqualityComparer_1_t1927 * __this, Guid_t1811  ___obj, MethodInfo* method)
{
	{
		Guid_t1811  L_0 = ___obj;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m227_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m20030_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m20030_gshared (GenericEqualityComparer_1_t1927 * __this, Guid_t1811  ___x, Guid_t1811  ___y, MethodInfo* method)
{
	{
		Guid_t1811  L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t1811  L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Guid_t1811  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), ___y);
		return L_4;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_48.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3275_il2cpp_TypeInfo;

// System.Collections.Generic.GenericEqualityComparer`1
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_49.h"
extern TypeInfo GenericEqualityComparer_1_t1376_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3276_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_49MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3275_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t1376_0_0_0;
extern Il2CppType DefaultComparer_t3276_0_0_0;
extern MethodInfo DefaultComparer__ctor_m20036_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23847_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23848_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m20036_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23847_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23848_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
extern "C" void EqualityComparer_1__ctor_m20031_gshared (EqualityComparer_1_t3275 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m20032_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m20032_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3276 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3276 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3276 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t3275_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20033_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20033_gshared (EqualityComparer_1_t3275 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, Guid_t1811  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(Guid_t1811 *)((Guid_t1811 *)UnBox (___obj, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20034_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20034_gshared (EqualityComparer_1_t3275 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, Guid_t1811 , Guid_t1811  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(Guid_t1811 *)((Guid_t1811 *)UnBox (___x, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(Guid_t1811 *)((Guid_t1811 *)UnBox (___y, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m20035_GenericMethod;
extern "C" EqualityComparer_1_t3275 * EqualityComparer_1_get_Default_m20035_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return (((EqualityComparer_1_t3275_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4400_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m225_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m20036_gshared (DefaultComparer_t3276 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3275 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m20037_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m20037_gshared (DefaultComparer_t3276 * __this, Guid_t1811  ___obj, MethodInfo* method)
{
	{
		Guid_t1811  L_0 = ___obj;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m227_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m20038_GenericMethod;
extern "C" bool DefaultComparer_Equals_m20038_gshared (DefaultComparer_t3276 * __this, Guid_t1811  ___x, Guid_t1811  ___y, MethodInfo* method)
{
	{
		Guid_t1811  L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t1811  L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Guid_t1811  L_4 = ___y;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m225_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_5);
		return L_6;
	}
}
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t1928_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2MethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
extern TypeInfo TimeSpan_t618_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t2317_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_36MethodDeclarations.h"
extern Il2CppType IComparable_1_t2317_0_0_0;
extern MethodInfo IComparable_1_CompareTo_m23849_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m20040_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m23849_GenericMethod;


// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern Il2CppGenericMethod GenericComparer_1__ctor_m10442_GenericMethod;
extern "C" void GenericComparer_1__ctor_m10442_gshared (GenericComparer_1_t1928 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t3277 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern Il2CppGenericMethod GenericComparer_1_Compare_m20039_GenericMethod;
extern "C" int32_t GenericComparer_1_Compare_m20039_gshared (GenericComparer_1_t1928 * __this, TimeSpan_t618  ___x, TimeSpan_t618  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t618  L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t618  L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		TimeSpan_t618  L_4 = ___y;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t618  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), ___y);
		return L_6;
	}
}
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_36.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t3277_il2cpp_TypeInfo;

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_37.h"
extern TypeInfo DefaultComparer_t3278_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_37MethodDeclarations.h"
extern Il2CppType Comparer_1_t3277_0_0_0;
extern Il2CppType TimeSpan_t618_0_0_0;
extern Il2CppType DefaultComparer_t3278_0_0_0;
extern MethodInfo DefaultComparer__ctor_m20044_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23850_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m20044_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23850_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
extern "C" void Comparer_1__ctor_m20040_gshared (Comparer_1_t3277 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m20041_GenericMethod;
extern "C" void Comparer_1__cctor_m20041_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3278 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3278 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3278 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t3277_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m20042_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m20042_gshared (Comparer_1_t3277 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
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
		if (!((Object_t *)IsInst(___x, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, TimeSpan_t618 , TimeSpan_t618  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(TimeSpan_t618 *)((TimeSpan_t618 *)UnBox (___x, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(TimeSpan_t618 *)((TimeSpan_t618 *)UnBox (___y, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t522 * L_1 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m9445(L_1, /*hidden argument*/&ArgumentException__ctor_m9445_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m20043_GenericMethod;
extern "C" Comparer_1_t3277 * Comparer_1_get_Default_m20043_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return (((Comparer_1_t3277_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4401_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20044_gshared (DefaultComparer_t3278 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t3277 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m20045_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m20045_gshared (DefaultComparer_t3278 * __this, TimeSpan_t618  ___x, TimeSpan_t618  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t618  L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t618  L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		TimeSpan_t618  L_4 = ___y;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		TimeSpan_t618  L_6 = ___x;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_6);
		if (!((Object_t*)IsInst(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		TimeSpan_t618  L_8 = ___x;
		Object_t * L_9 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t618  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), ___y);
		return L_10;
	}

IL_003e:
	{
		TimeSpan_t618  L_11 = ___x;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t60_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		TimeSpan_t618  L_13 = ___x;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		TimeSpan_t618  L_15 = ___y;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t60_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m10265_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t60_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t522 * L_18 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_18, (String_t*) &_stringLiteral1402, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t1929_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2318_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_49MethodDeclarations.h"
extern Il2CppType IEquatable_1_t2318_0_0_0;
extern MethodInfo IEquatable_1_Equals_m23851_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m20048_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m23851_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m10443_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m10443_gshared (GenericEqualityComparer_1_t1929 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3279 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m20046_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m20046_gshared (GenericEqualityComparer_1_t1929 * __this, TimeSpan_t618  ___obj, MethodInfo* method)
{
	{
		TimeSpan_t618  L_0 = ___obj;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m227_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m20047_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m20047_gshared (GenericEqualityComparer_1_t1929 * __this, TimeSpan_t618  ___x, TimeSpan_t618  ___y, MethodInfo* method)
{
	{
		TimeSpan_t618  L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t618  L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, TimeSpan_t618  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), ___y);
		return L_4;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_49.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3279_il2cpp_TypeInfo;

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_50.h"
extern TypeInfo DefaultComparer_t3280_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_50MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3279_0_0_0;
extern Il2CppType DefaultComparer_t3280_0_0_0;
extern MethodInfo DefaultComparer__ctor_m20053_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23852_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23853_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m20053_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23852_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23853_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void EqualityComparer_1__ctor_m20048_gshared (EqualityComparer_1_t3279 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m20049_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m20049_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3280 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3280 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3280 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t3279_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20050_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20050_gshared (EqualityComparer_1_t3279 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t618  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(TimeSpan_t618 *)((TimeSpan_t618 *)UnBox (___obj, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20051_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20051_gshared (EqualityComparer_1_t3279 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, TimeSpan_t618 , TimeSpan_t618  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(TimeSpan_t618 *)((TimeSpan_t618 *)UnBox (___x, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(TimeSpan_t618 *)((TimeSpan_t618 *)UnBox (___y, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m20052_GenericMethod;
extern "C" EqualityComparer_1_t3279 * EqualityComparer_1_get_Default_m20052_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return (((EqualityComparer_1_t3279_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4402_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20053_gshared (DefaultComparer_t3280 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3279 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m20054_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m20054_gshared (DefaultComparer_t3280 * __this, TimeSpan_t618  ___obj, MethodInfo* method)
{
	{
		TimeSpan_t618  L_0 = ___obj;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m227_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m20055_GenericMethod;
extern "C" bool DefaultComparer_Equals_m20055_gshared (DefaultComparer_t3280 * __this, TimeSpan_t618  ___x, TimeSpan_t618  ___y, MethodInfo* method)
{
	{
		TimeSpan_t618  L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t618  L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t618  L_4 = ___y;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m225_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_5);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2321_il2cpp_TypeInfo;

// System.Version
#include "mscorlib_System_Version.h"


// System.Int32 System.IComparable`1<System.Version>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2322_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Version>::Equals(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4403_il2cpp_TypeInfo;

// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_223.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3281_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_223MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo BigInteger_t2331_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3281_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m3860_MethodInfo;
extern MethodInfo Array_get_Length_m947_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m20072_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m20072(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t2331_m23282(__this, p0, method) (( BigInteger_t2331 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20060_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBigInteger_t2331_m23282_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4404_il2cpp_TypeInfo;

#include "Mono.Security_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4405_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4406_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4407_il2cpp_TypeInfo;

// System.Byte
#include "mscorlib_System_Byte.h"


// T System.Collections.Generic.IEnumerator`1<System.Byte[]>::get_Current()
// System.Array/InternalEnumerator`1<System.Byte[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_224.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3282_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Byte[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_224MethodDeclarations.h"

extern TypeInfo ByteU5BU5D_t13_il2cpp_TypeInfo;
extern TypeInfo Byte_t41_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3282_0_0_0;
extern Il2CppType ByteU5BU5D_t13_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
#define Array_InternalArray__get_Item_TisByteU5BU5D_t13_m23293(__this, p0, method) (( ByteU5BU5D_t13* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20065_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisByteU5BU5D_t13_m23293_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Byte[]>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Byte[]>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Byte[]>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4408_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Byte[]>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4409_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte[]>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4410_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Byte[]>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Byte[]>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4411_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_225.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3283_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_225MethodDeclarations.h"

extern TypeInfo ClientCertificateType_t2414_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3283_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisInt32_t43_m20156_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt32_t43_m20156(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t43_m20156_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
#define Array_InternalArray__get_Item_TisClientCertificateType_t2414_m23304(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t43_m20156_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20070_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisClientCertificateType_t2414_m23304_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4412_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4413_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4414_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::set_Item(System.Int32,T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
