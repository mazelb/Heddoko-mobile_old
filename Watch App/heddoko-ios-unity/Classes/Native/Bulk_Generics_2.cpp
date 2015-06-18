#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Action`2<System.Object,System.Object>
#include "System_Core_System_Action_2_gen_1.h"
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
extern TypeInfo Action_2_t2501_il2cpp_TypeInfo;
// System.Action`2<System.Object,System.Object>
#include "System_Core_System_Action_2_gen_1MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Action_2__ctor_m12451_GenericMethod;
extern "C" void Action_2__ctor_m12451_gshared (Action_2_t2501 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
extern Il2CppGenericMethod Action_2_Invoke_m12452_GenericMethod;
extern "C" void Action_2_Invoke_m12452_gshared (Action_2_t2501 * __this, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_2_Invoke_m12452((Action_2_t2501 *)__this->___prev_9,___arg1, ___arg2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg2, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Action_2_BeginInvoke_m12454_GenericMethod;
extern "C" Object_t * Action_2_BeginInvoke_m12454_gshared (Action_2_t2501 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg1;
	__d_args[1] = ___arg2;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Action_2_EndInvoke_m12456_GenericMethod;
extern "C" void Action_2_EndInvoke_m12456_gshared (Action_2_t2501 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Action`3<System.String,System.String,System.String>
#include "System_Core_System_Action_3_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_3_t7_il2cpp_TypeInfo;
// System.Action`3<System.String,System.String,System.String>
#include "System_Core_System_Action_3_genMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"


// System.Void System.Action`3<System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`3<System.String,System.String,System.String>::Invoke(T1,T2,T3)
// System.IAsyncResult System.Action`3<System.String,System.String,System.String>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
// System.Void System.Action`3<System.String,System.String,System.String>::EndInvoke(System.IAsyncResult)
// System.Action`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Action_3_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_3_t2502_il2cpp_TypeInfo;
// System.Action`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Action_3_gen_0MethodDeclarations.h"



// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Action_3__ctor_m12458_GenericMethod;
extern "C" void Action_3__ctor_m12458_gshared (Action_3_t2502 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
extern Il2CppGenericMethod Action_3_Invoke_m12459_GenericMethod;
extern "C" void Action_3_Invoke_m12459_gshared (Action_3_t2502 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_3_Invoke_m12459((Action_3_t2502 *)__this->___prev_9,___arg1, ___arg2, ___arg3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Action_3_BeginInvoke_m12461_GenericMethod;
extern "C" Object_t * Action_3_BeginInvoke_m12461_gshared (Action_3_t2502 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg1;
	__d_args[1] = ___arg2;
	__d_args[2] = ___arg3;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Action_3_EndInvoke_m12463_GenericMethod;
extern "C" void Action_3_EndInvoke_m12463_gshared (Action_3_t2502 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Action`2<System.String,System.Byte[]>
#include "System_Core_System_Action_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_2_t8_il2cpp_TypeInfo;
// System.Action`2<System.String,System.Byte[]>
#include "System_Core_System_Action_2_gen_0MethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void System.Action`2<System.String,System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`2<System.String,System.Byte[]>::Invoke(T1,T2)
// System.IAsyncResult System.Action`2<System.String,System.Byte[]>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
// System.Void System.Action`2<System.String,System.Byte[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3304_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Byte>::get_Current()
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_28.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2503_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_28MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Byte_t41_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2503_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m3860_MethodInfo;
extern MethodInfo Array_get_Length_m947_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t41_m20435_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t41_m20435(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t41_m20435_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12471_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisByte_t41_m20435_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Byte>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12467_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12467_gshared (InternalEnumerator_1_t2503 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12468_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12468_gshared (InternalEnumerator_1_t2503 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (InternalEnumerator_1_t2503 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Byte>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12469_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12469_gshared (InternalEnumerator_1_t2503 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Byte>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12470_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12470_gshared (InternalEnumerator_1_t2503 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Byte>::get_Current()
extern "C" uint8_t InternalEnumerator_1_get_Current_m12471_gshared (InternalEnumerator_1_t2503 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		uint8_t L_8 = (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3668_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Byte>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3669_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3670_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Byte>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Byte>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Byte>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Byte>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3671_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3672_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3673_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t1948_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Byte>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_29.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2504_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_29MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2504_0_0_0;
extern Il2CppType IComparable_1_t1948_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m20072_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m20072(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Byte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1948_m20446(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12476_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t1948_m20446_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3674_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3675_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3676_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3677_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t1949_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Byte>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_30.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2505_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_30MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2505_0_0_0;
extern Il2CppType IEquatable_1_t1949_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Byte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1949_m20457(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12481_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t1949_m20457_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3678_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t9_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
extern TypeInfo Void_t42_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t785_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2316_il2cpp_TypeInfo;
extern TypeInfo Link_t1367_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1377_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2525_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3291_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2523_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3445_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t134_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2506_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2529_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2527_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2531_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t786_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2481_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t220_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2210_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t17_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t522_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t74_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2520_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2716_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType Dictionary_2_t9_0_0_0;
extern Il2CppType IEqualityComparer_1_t2316_0_0_0;
extern Il2CppType ValueCollection_t2525_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3291_0_0_0;
extern Il2CppType KeyValuePair_2_t2523_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3445_0_0_0;
extern Il2CppType Transform_1_t2506_0_0_0;
extern Il2CppType Transform_1_t2529_0_0_0;
extern Il2CppType Enumerator_t2527_0_0_0;
extern Il2CppType ShimEnumerator_t2531_0_0_0;
extern Il2CppType EqualityComparer_1_t2481_0_0_0;
extern Il2CppType Int32U5BU5D_t220_0_0_0;
extern Il2CppType LinkU5BU5D_t2210_0_0_0;
extern Il2CppType StringU5BU5D_t17_0_0_0;
extern Il2CppType EqualityComparer_1_t2520_0_0_0;
extern Il2CppType IEqualityComparer_1_t2716_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t43_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m142_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m143_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m12521_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3869_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m23358_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m23359_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7051_MethodInfo;
extern MethodInfo ValueCollection__ctor_m12653_MethodInfo;
extern MethodInfo Object__ctor_m127_MethodInfo;
extern MethodInfo Dictionary_2_Add_m137_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m12546_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m12559_MethodInfo;
extern MethodInfo Transform_1__ctor_m12688_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m12529_MethodInfo;
extern MethodInfo Transform_1__ctor_m12692_MethodInfo;
extern MethodInfo Enumerator__ctor_m12672_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m12700_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3870_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2758_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m12518_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m12642_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m7223_MethodInfo;
extern MethodInfo Array_Copy_m6433_MethodInfo;
extern MethodInfo Array_Clear_m6430_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m23360_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3879_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3895_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m3894_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m3880_MethodInfo;
extern MethodInfo Type_ToString_m6514_MethodInfo;
extern MethodInfo String_Concat_m140_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3867_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6487_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3938_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23361_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m3861_MethodInfo;
struct Dictionary_2_t9;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m20521 (Dictionary_2_t9 * __this, DictionaryEntryU5BU5D_t3445* p0, int32_t p1, Transform_1_t2506 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t9;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Dictionary_2_t2509;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2523_m20524_gshared (Dictionary_2_t2509 * __this, Array_t * p0, int32_t p1, Transform_1_t2530 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2523_m20524(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, Transform_1_t2530 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2523_m20524_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2523_m20523(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t9 *, Array_t *, int32_t, Transform_1_t2529 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2523_m20524_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t9;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2523_TisKeyValuePair_2_t2523_m20526 (Dictionary_2_t9 * __this, KeyValuePair_2U5BU5D_t3291* p0, int32_t p1, Transform_1_t2529 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m142_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m12551_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m143_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m12553_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m12521_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m23358_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m23359_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m12535_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m12653_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m12523_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m137_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m12546_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m12643_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m12645_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m12555_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m12533_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m12527_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m12559_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12688_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m20521_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m12529_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12692_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2523_m20523_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12672_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m12700_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m12277_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m12525_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m12518_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m12642_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2523_TisKeyValuePair_2_t2523_m20526_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m12635_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m23360_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3938_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23361_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t2509_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2507_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2513_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3293_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2510_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2508_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2518_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2515_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2519_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2444_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t137_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType Dictionary_2_t2509_0_0_0;
extern Il2CppType IEqualityComparer_1_t2507_0_0_0;
extern Il2CppType ValueCollection_t2513_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3293_0_0_0;
extern Il2CppType KeyValuePair_2_t2510_0_0_0;
extern Il2CppType Transform_1_t2508_0_0_0;
extern Il2CppType Transform_1_t2518_0_0_0;
extern Il2CppType Enumerator_t2515_0_0_0;
extern Il2CppType ShimEnumerator_t2519_0_0_0;
extern Il2CppType EqualityComparer_1_t2444_0_0_0;
extern Il2CppType ObjectU5BU5D_t137_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m12539_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m12520_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m12522_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m23362_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m23363_MethodInfo;
extern MethodInfo ValueCollection__ctor_m12577_MethodInfo;
extern MethodInfo Dictionary_2_Add_m12537_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m12547_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m12560_MethodInfo;
extern MethodInfo Transform_1__ctor_m12612_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m12530_MethodInfo;
extern MethodInfo Transform_1__ctor_m12621_MethodInfo;
extern MethodInfo Enumerator__ctor_m12596_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m12625_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m12519_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m12561_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m12548_MethodInfo;
struct Dictionary_2_t2509;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m20503 (Dictionary_2_t2509 * __this, DictionaryEntryU5BU5D_t3445* p0, int32_t p1, Transform_1_t2508 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t2509;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2510_m20505_gshared (Dictionary_2_t2509 * __this, Array_t * p0, int32_t p1, Transform_1_t2518 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2510_m20505(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, Transform_1_t2518 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2510_m20505_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2509;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2510_TisKeyValuePair_2_t2510_m20506 (Dictionary_2_t2509 * __this, KeyValuePair_2U5BU5D_t3293* p0, int32_t p1, Transform_1_t2518 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m12539_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m12552_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m12520_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m12554_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m12522_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m23362_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m23363_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m12536_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m12577_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m12524_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m12537_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m12547_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m12562_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m12564_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m12556_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m12534_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m12528_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m12560_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12612_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m20503_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m12530_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12621_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2510_m20505_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12596_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m12625_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m12048_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m12526_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m12519_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m12561_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2510_TisKeyValuePair_2_t2510_m20506_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m12548_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m12482_GenericMethod;
extern "C" void Dictionary_2__ctor_m12482_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		(( void (*) (Dictionary_2_t2509 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m12484_GenericMethod;
extern "C" void Dictionary_2__ctor_m12484_gshared (Dictionary_2_t2509 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		(( void (*) (Dictionary_2_t2509 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), ___comparer, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m12485_GenericMethod;
extern "C" void Dictionary_2__ctor_m12485_gshared (Dictionary_2_t2509 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		(( void (*) (Dictionary_2_t2509 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ___capacity, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m12487_GenericMethod;
extern "C" void Dictionary_2__ctor_m12487_gshared (Dictionary_2_t2509 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___serialization_info_13 = ___info;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m12489_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12489_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		if (!((Object_t *)IsInst(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), __this, ((Object_t *)Castclass(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, ___key, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_1);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m12491_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12491_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, ___key, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, ___value, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m12493_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12493_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, ___key, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, ___value, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m12495_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12495_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		if (___key)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (!((Object_t *)IsInst(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0023;
		}
	}
	{
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, ((Object_t *)Castclass(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12497_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12497_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12499_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12499_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12501_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12501_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12503_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12503_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2_t2510  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12505_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12505_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2_t2510  ___keyValuePair, MethodInfo* method)
{
	{
		bool L_0 = (( bool (*) (Dictionary_2_t2509 *, KeyValuePair_2_t2510 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, ___keyValuePair, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12507_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12507_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2U5BU5D_t3293* ___array, int32_t ___index, MethodInfo* method)
{
	{
		(( void (*) (Dictionary_2_t2509 *, KeyValuePair_2U5BU5D_t3293*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, ___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12509_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12509_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2_t2510  ___keyValuePair, MethodInfo* method)
{
	{
		bool L_0 = (( bool (*) (Dictionary_2_t2509 *, KeyValuePair_2_t2510 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, ___keyValuePair, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m12511_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3445_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12511_gshared (Dictionary_2_t2509 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m12511_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m12511_init)
	{
		DictionaryEntryU5BU5D_t3445_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3445_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m12511_init = true;
	}
	KeyValuePair_2U5BU5D_t3293* V_0 = {0};
	DictionaryEntryU5BU5D_t3445* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3445* G_B5_1 = {0};
	Dictionary_2_t2509 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3445* G_B4_1 = {0};
	Dictionary_2_t2509 * G_B4_2 = {0};
	{
		V_0 = ((KeyValuePair_2U5BU5D_t3293*)IsInst(___array, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		(( void (*) (Dictionary_2_t2509 *, KeyValuePair_2U5BU5D_t3293*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, V_0, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}

IL_0013:
	{
		(( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, ___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		V_1 = ((DictionaryEntryU5BU5D_t3445*)IsInst(___array, DictionaryEntryU5BU5D_t3445_il2cpp_TypeInfo_var));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = ___index;
		G_B4_1 = V_1;
		G_B4_2 = ((Dictionary_2_t2509 *)(__this));
		if ((((Dictionary_2_t2509_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15))
		{
			G_B5_0 = ___index;
			G_B5_1 = V_1;
			G_B5_2 = ((Dictionary_2_t2509 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t98 L_0 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17) };
		Transform_1_t2508 * L_1 = (Transform_1_t2508 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		(( void (*) (Transform_1_t2508 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(L_1, NULL, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		((Dictionary_2_t2509_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2509 *)(G_B4_2));
	}

IL_0040:
	{
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t2509 *, DictionaryEntryU5BU5D_t3445*, int32_t, Transform_1_t2508 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(G_B5_2, G_B5_1, G_B5_0, (((Dictionary_2_t2509_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}

IL_004b:
	{
		IntPtr_t98 L_2 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t2518 * L_3 = (Transform_1_t2518 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t2518 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_3, NULL, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		(( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, Transform_1_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(__this, ___array, ___index, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12513_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12513_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		Enumerator_t2515  L_0 = {0};
		(( void (*) (Enumerator_t2515 *, Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t2515  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12515_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12515_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		Enumerator_t2515  L_0 = {0};
		(( void (*) (Enumerator_t2515 *, Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t2515  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12517_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12517_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t2519 * L_0 = (ShimEnumerator_t2519 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		(( void (*) (ShimEnumerator_t2519 *, Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12519_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12520_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))));
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_1);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		Int32U5BU5D_t220* L_13 = (__this->___valueSlots_7);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_1);
		int32_t L_14 = V_1;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_14));
	}

IL_007d:
	{
		LinkU5BU5D_t2210* L_15 = (__this->___linkSlots_5);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_15, V_1)));
		int32_t L_16 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_15, V_1))->___Next_1);
		V_1 = L_16;
	}

IL_008f:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t1377 * L_17 = (KeyNotFoundException_t1377 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t1377_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m7051(L_17, /*hidden argument*/&KeyNotFoundException__ctor_m7051_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12522_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))-(int32_t)1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_2);
		int32_t L_11 = V_2;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		LinkU5BU5D_t2210* L_13 = (__this->___linkSlots_5);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_2)));
		int32_t L_14 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_2))->___Next_1);
		V_2 = L_14;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_15 = (__this->___count_10);
		int32_t L_16 = ((int32_t)((int32_t)L_15+(int32_t)1));
		V_4 = L_16;
		__this->___count_10 = L_16;
		int32_t L_17 = (__this->___threshold_11);
		if ((((int32_t)V_4) <= ((int32_t)L_17)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		Int32U5BU5D_t220* L_18 = (__this->___table_4);
		NullCheck(L_18);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_18)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_19 = (__this->___emptySlot_9);
		V_2 = L_19;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_20 = (__this->___touchedSlots_8);
		int32_t L_21 = L_20;
		V_4 = L_21;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_21+(int32_t)1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2210* L_22 = (__this->___linkSlots_5);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, V_2)));
		int32_t L_23 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, V_2))->___Next_1);
		__this->___emptySlot_9 = L_23;
	}

IL_0101:
	{
		LinkU5BU5D_t2210* L_24 = (__this->___linkSlots_5);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, V_2);
		Int32U5BU5D_t220* L_25 = (__this->___table_4);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, V_1);
		int32_t L_26 = V_1;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_24, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_24, V_2))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_25, L_26))-(int32_t)1));
		Int32U5BU5D_t220* L_27 = (__this->___table_4);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, V_1)) = (int32_t)((int32_t)((int32_t)V_2+(int32_t)1));
		LinkU5BU5D_t2210* L_28 = (__this->___linkSlots_5);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_28, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_28, V_2))->___HashCode_0 = V_0;
		ObjectU5BU5D_t137* L_29 = (__this->___keySlots_6);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, V_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, V_2)) = (Object_t *)___key;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2210* L_30 = (__this->___linkSlots_5);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, V_3);
		LinkU5BU5D_t2210* L_31 = (__this->___linkSlots_5);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_31, V_2)));
		int32_t L_32 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_31, V_2))->___Next_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_30, V_3)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_30, V_3))->___Next_1 = L_32;
		LinkU5BU5D_t2210* L_33 = (__this->___linkSlots_5);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, V_2);
		Int32U5BU5D_t220* L_34 = (__this->___table_4);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, V_1);
		int32_t L_35 = V_1;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_33, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_33, V_2))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_34, L_35))-(int32_t)1));
		Int32U5BU5D_t220* L_36 = (__this->___table_4);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_36, V_1)) = (int32_t)((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_0194:
	{
		Int32U5BU5D_t220* L_37 = (__this->___valueSlots_7);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_37, V_2)) = (int32_t)___value;
		int32_t L_38 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_38+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2444_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m12524_gshared (Dictionary_2_t2509 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m12524_init;
	if (!Dictionary_2_Init_m12524_init)
	{
		EqualityComparer_1_t2444_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2444_0_0_0);
		Dictionary_2_Init_m12524_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2509 * G_B4_0 = {0};
	Dictionary_2_t2509 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2509 * G_B5_1 = {0};
	{
		if ((((int32_t)___capacity) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_0 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_0, (String_t*) &_stringLiteral1403, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000f:
	{
		G_B3_0 = ((Dictionary_2_t2509 *)(__this));
		if (!___hcp)
		{
			G_B4_0 = ((Dictionary_2_t2509 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = ___hcp;
		G_B5_0 = V_0;
		G_B5_1 = ((Dictionary_2_t2509 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2444_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2444 * L_1 = (( EqualityComparer_1_t2444 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		G_B5_0 = ((Object_t*)(L_1));
		G_B5_1 = ((Dictionary_2_t2509 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		if (___capacity)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = ((int32_t)10);
	}

IL_002b:
	{
		___capacity = ((int32_t)((int32_t)(((int32_t)((float)((float)(((float)___capacity))/(float)(0.9f)))))+(int32_t)1));
		(( void (*) (Dictionary_2_t2509 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(__this, ___capacity, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t220_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2210_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m12526_gshared (Dictionary_2_t2509 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m12526_init;
	if (!Dictionary_2_InitArrays_m12526_init)
	{
		Int32U5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t220_0_0_0);
		LinkU5BU5D_t2210_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2210_0_0_0);
		Dictionary_2_InitArrays_m12526_init = true;
	}
	{
		__this->___table_4 = ((Int32U5BU5D_t220*)SZArrayNew(Int32U5BU5D_t220_il2cpp_TypeInfo_var, ___size));
		__this->___linkSlots_5 = ((LinkU5BU5D_t2210*)SZArrayNew(LinkU5BU5D_t2210_il2cpp_TypeInfo_var, ___size));
		__this->___emptySlot_9 = (-1);
		__this->___keySlots_6 = ((ObjectU5BU5D_t137*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), ___size));
		__this->___valueSlots_7 = ((Int32U5BU5D_t220*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), ___size));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t220* L_0 = (__this->___table_4);
		NullCheck(L_0);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_0)->max_length)))))*(float)(0.9f)))));
		int32_t L_1 = (__this->___threshold_11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t220* L_2 = (__this->___table_4);
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12528_gshared (Dictionary_2_t2509 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		if (___array)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral403, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if ((((int32_t)___index) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_1 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_1, (String_t*) &_stringLiteral405, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		NullCheck(___array);
		int32_t L_2 = Array_get_Length_m947(___array, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		if ((((int32_t)___index) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_3, (String_t*) &_stringLiteral1404, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0031:
	{
		NullCheck(___array);
		int32_t L_4 = Array_get_Length_m947(___array, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), __this);
		if ((((int32_t)((int32_t)((int32_t)L_4-(int32_t)___index))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t522 * L_6 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_6, (String_t*) &_stringLiteral1405, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2510  Dictionary_2_make_pair_m12530_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		KeyValuePair_2_t2510  L_0 = {0};
		(( void (*) (KeyValuePair_2_t2510 *, Object_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(&L_0, ___key, ___value, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m12532_GenericMethod;
extern "C" int32_t Dictionary_2_pick_value_m12532_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		return ___value;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12534_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2U5BU5D_t3293* ___array, int32_t ___index, MethodInfo* method)
{
	{
		(( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, (Array_t *)(Array_t *)___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		IntPtr_t98 L_0 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t2518 * L_1 = (Transform_1_t2518 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t2518 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_1, NULL, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		(( void (*) (Dictionary_2_t2509 *, KeyValuePair_2U5BU5D_t3293*, int32_t, Transform_1_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, ___array, ___index, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern TypeInfo* Int32U5BU5D_t220_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2210_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m12536_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m12536_init;
	if (!Dictionary_2_Resize_m12536_init)
	{
		Int32U5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t220_0_0_0);
		LinkU5BU5D_t2210_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2210_0_0_0);
		Dictionary_2_Resize_m12536_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t220* V_1 = {0};
	LinkU5BU5D_t2210* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t137* V_7 = {0};
	Int32U5BU5D_t220* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t220* L_0 = (__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		int32_t L_1 = Hashtable_ToPrime_m7223(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/&Hashtable_ToPrime_m7223_MethodInfo);
		V_0 = L_1;
		V_1 = ((Int32U5BU5D_t220*)SZArrayNew(Int32U5BU5D_t220_il2cpp_TypeInfo_var, V_0));
		V_2 = ((LinkU5BU5D_t2210*)SZArrayNew(LinkU5BU5D_t2210_il2cpp_TypeInfo_var, V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t220* L_2 = (__this->___table_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, V_3);
		int32_t L_3 = V_3;
		V_4 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_4);
		Object_t* L_4 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_5 = (__this->___keySlots_6);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_4);
		int32_t L_6 = V_4;
		NullCheck(L_4);
		int32_t L_7 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_4, (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)));
		int32_t L_8 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)-2147483648)));
		V_9 = L_8;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(V_2, V_4)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(V_2, V_4))->___HashCode_0 = L_8;
		V_5 = V_9;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)V_5&(int32_t)((int32_t)2147483647)))%(int32_t)V_0));
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_4);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_6);
		int32_t L_9 = V_6;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(V_2, V_4)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(V_2, V_4))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(V_1, L_9))-(int32_t)1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_6);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)((int32_t)V_4+(int32_t)1));
		LinkU5BU5D_t2210* L_10 = (__this->___linkSlots_5);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_4);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, V_4)));
		int32_t L_11 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, V_4))->___Next_1);
		V_4 = L_11;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_00ab:
	{
		Int32U5BU5D_t220* L_12 = (__this->___table_4);
		NullCheck(L_12);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___table_4 = V_1;
		__this->___linkSlots_5 = V_2;
		V_7 = ((ObjectU5BU5D_t137*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), V_0));
		V_8 = ((Int32U5BU5D_t220*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), V_0));
		ObjectU5BU5D_t137* L_13 = (__this->___keySlots_6);
		int32_t L_14 = (__this->___touchedSlots_8);
		Array_Copy_m6433(NULL /*static, unused*/, (Array_t *)(Array_t *)L_13, 0, (Array_t *)(Array_t *)V_7, 0, L_14, /*hidden argument*/&Array_Copy_m6433_MethodInfo);
		Int32U5BU5D_t220* L_15 = (__this->___valueSlots_7);
		int32_t L_16 = (__this->___touchedSlots_8);
		Array_Copy_m6433(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, 0, (Array_t *)(Array_t *)V_8, 0, L_16, /*hidden argument*/&Array_Copy_m6433_MethodInfo);
		__this->___keySlots_6 = V_7;
		__this->___valueSlots_7 = V_8;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)V_0))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12537_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_2);
		int32_t L_11 = V_2;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t522 * L_13 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_13, (String_t*) &_stringLiteral1407, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_007d:
	{
		LinkU5BU5D_t2210* L_14 = (__this->___linkSlots_5);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_14, V_2)));
		int32_t L_15 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_14, V_2))->___Next_1);
		V_2 = L_15;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_16 = (__this->___count_10);
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		V_3 = L_17;
		__this->___count_10 = L_17;
		int32_t L_18 = (__this->___threshold_11);
		if ((((int32_t)V_3) <= ((int32_t)L_18)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		Int32U5BU5D_t220* L_19 = (__this->___table_4);
		NullCheck(L_19);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_19)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_20 = (__this->___emptySlot_9);
		V_2 = L_20;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_21 = (__this->___touchedSlots_8);
		int32_t L_22 = L_21;
		V_3 = L_22;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_22+(int32_t)1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2210* L_23 = (__this->___linkSlots_5);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_23, V_2)));
		int32_t L_24 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_23, V_2))->___Next_1);
		__this->___emptySlot_9 = L_24;
	}

IL_00f9:
	{
		LinkU5BU5D_t2210* L_25 = (__this->___linkSlots_5);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_25, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_25, V_2))->___HashCode_0 = V_0;
		LinkU5BU5D_t2210* L_26 = (__this->___linkSlots_5);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, V_2);
		Int32U5BU5D_t220* L_27 = (__this->___table_4);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, V_1);
		int32_t L_28 = V_1;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_26, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_26, V_2))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_27, L_28))-(int32_t)1));
		Int32U5BU5D_t220* L_29 = (__this->___table_4);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, V_1)) = (int32_t)((int32_t)((int32_t)V_2+(int32_t)1));
		ObjectU5BU5D_t137* L_30 = (__this->___keySlots_6);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, V_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, V_2)) = (Object_t *)___key;
		Int32U5BU5D_t220* L_31 = (__this->___valueSlots_7);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, V_2)) = (int32_t)___value;
		int32_t L_32 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_32+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m12538_GenericMethod;
extern "C" void Dictionary_2_Clear_m12538_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t220* L_0 = (__this->___table_4);
		Int32U5BU5D_t220* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m6430(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m6430_MethodInfo);
		ObjectU5BU5D_t137* L_2 = (__this->___keySlots_6);
		ObjectU5BU5D_t137* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m6430(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m6430_MethodInfo);
		Int32U5BU5D_t220* L_4 = (__this->___valueSlots_7);
		Int32U5BU5D_t220* L_5 = (__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m6430(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&Array_Clear_m6430_MethodInfo);
		LinkU5BU5D_t2210* L_6 = (__this->___linkSlots_5);
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m6430(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/&Array_Clear_m6430_MethodInfo);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12539_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))));
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_1);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2210* L_13 = (__this->___linkSlots_5);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_1)));
		int32_t L_14 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_1))->___Next_1);
		V_1 = L_14;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m12541_GenericMethod;
extern TypeInfo* EqualityComparer_1_t2520_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m12541_gshared (Dictionary_2_t2509 * __this, int32_t ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m12541_init;
	if (!Dictionary_2_ContainsValue_m12541_init)
	{
		EqualityComparer_1_t2520_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2520_0_0_0);
		Dictionary_2_ContainsValue_m12541_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2520_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2520 * L_0 = (( EqualityComparer_1_t2520 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t220* L_1 = (__this->___table_4);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		int32_t L_2 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Int32U5BU5D_t220* L_3 = (__this->___valueSlots_7);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, V_2);
		int32_t L_4 = V_2;
		NullCheck(V_0);
		bool L_5 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), V_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4)), ___value);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t2210* L_6 = (__this->___linkSlots_5);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_6, V_2)));
		int32_t L_7 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_6, V_2))->___Next_1);
		V_2 = L_7;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0048:
	{
		Int32U5BU5D_t220* L_8 = (__this->___table_4);
		NullCheck(L_8);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m12543_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m12543_gshared (Dictionary_2_t2509 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3293* V_0 = {0};
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
		int32_t L_1 = (__this->___generation_14);
		NullCheck(___info);
		SerializationInfo_AddValue_m3879(___info, (String_t*) &_stringLiteral414, L_1, /*hidden argument*/&SerializationInfo_AddValue_m3879_MethodInfo);
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral416, L_2, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		V_0 = (KeyValuePair_2U5BU5D_t3293*)NULL;
		int32_t L_3 = (__this->___count_10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3293*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), L_4));
		(( void (*) (Dictionary_2_t2509 *, KeyValuePair_2U5BU5D_t3293*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, V_0, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_004f:
	{
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		NullCheck(___info);
		SerializationInfo_AddValue_m3879(___info, (String_t*) &_stringLiteral1408, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m3879_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1409, (Object_t *)(Object_t *)V_0, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m12545_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m12545_gshared (Dictionary_2_t2509 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3293* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t612 * L_0 = (__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t612 * L_1 = (__this->___serialization_info_13);
		NullCheck(L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m3894(L_1, (String_t*) &_stringLiteral414, /*hidden argument*/&SerializationInfo_GetInt32_m3894_MethodInfo);
		__this->___generation_14 = L_2;
		SerializationInfo_t612 * L_3 = (__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m3880(L_3, (String_t*) &_stringLiteral416, L_4, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)));
		SerializationInfo_t612 * L_6 = (__this->___serialization_info_13);
		NullCheck(L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m3894(L_6, (String_t*) &_stringLiteral1408, /*hidden argument*/&SerializationInfo_GetInt32_m3894_MethodInfo);
		V_0 = L_7;
		SerializationInfo_t612 * L_8 = (__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m3880(L_8, (String_t*) &_stringLiteral1409, L_9, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		V_1 = ((KeyValuePair_2U5BU5D_t3293*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		(( void (*) (Dictionary_2_t2509 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(__this, V_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___count_10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(((KeyValuePair_2_t2510 *)(KeyValuePair_2_t2510 *)SZArrayLdElema(V_1, V_2)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_12 = (( int32_t (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(((KeyValuePair_2_t2510 *)(KeyValuePair_2_t2510 *)SZArrayLdElema(V_1, V_2)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_11, L_12);
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_00b4:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t612 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12547_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))-(int32_t)1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_2);
		int32_t L_11 = V_2;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		LinkU5BU5D_t2210* L_13 = (__this->___linkSlots_5);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_2)));
		int32_t L_14 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_2))->___Next_1);
		V_2 = L_14;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_15 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_15-(int32_t)1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t220* L_16 = (__this->___table_4);
		LinkU5BU5D_t2210* L_17 = (__this->___linkSlots_5);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_17, V_2)));
		int32_t L_18 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_17, V_2))->___Next_1);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_16, V_1)) = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2210* L_19 = (__this->___linkSlots_5);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, V_3);
		LinkU5BU5D_t2210* L_20 = (__this->___linkSlots_5);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_20, V_2)));
		int32_t L_21 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_20, V_2))->___Next_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_19, V_3)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_19, V_3))->___Next_1 = L_21;
	}

IL_00e9:
	{
		LinkU5BU5D_t2210* L_22 = (__this->___linkSlots_5);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, V_2);
		int32_t L_23 = (__this->___emptySlot_9);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, V_2))->___Next_1 = L_23;
		__this->___emptySlot_9 = V_2;
		LinkU5BU5D_t2210* L_24 = (__this->___linkSlots_5);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_24, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_24, V_2))->___HashCode_0 = 0;
		ObjectU5BU5D_t137* L_25 = (__this->___keySlots_6);
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_4));
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, V_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, V_2)) = (Object_t *)V_4;
		Int32U5BU5D_t220* L_26 = (__this->___valueSlots_7);
		Initobj (InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), (&V_5));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_2)) = (int32_t)V_5;
		int32_t L_27 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_27+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12548_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))));
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_1);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		Int32U5BU5D_t220* L_13 = (__this->___valueSlots_7);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_1);
		int32_t L_14 = V_1;
		*___value = (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_14));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2210* L_15 = (__this->___linkSlots_5);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_15, V_1)));
		int32_t L_16 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_15, V_1))->___Next_1);
		V_1 = L_16;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), (&V_2));
		*___value = V_2;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern Il2CppGenericMethod Dictionary_2_get_Values_m12550_GenericMethod;
extern "C" ValueCollection_t2513 * Dictionary_2_get_Values_m12550_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2513 * L_0 = (ValueCollection_t2513 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		(( void (*) (ValueCollection_t2513 *, Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12552_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		if (___key)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (((Object_t *)IsInst(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m140(NULL /*static, unused*/, (String_t*) &_stringLiteral1410, L_2, /*hidden argument*/&String_Concat_m140_MethodInfo);
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_4, L_3, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003a:
	{
		return ((Object_t *)Castclass(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12554_gshared (Dictionary_2_t2509 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		if (___value)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6487_MethodInfo, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((Object_t *)IsInst(___value, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m140(NULL /*static, unused*/, (String_t*) &_stringLiteral1410, L_3, /*hidden argument*/&String_Concat_m140_MethodInfo);
		ArgumentException_t522 * L_5 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_5, L_4, (String_t*) &_stringLiteral610, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_004a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (___value, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t2520_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12556_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2_t2510  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m12556_init;
	if (!Dictionary_2_ContainsKeyValuePair_m12556_init)
	{
		EqualityComparer_1_t2520_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2520_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m12556_init = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50), __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2520_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2520 * L_2 = (( EqualityComparer_1_t2520 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51), L_2, L_3, V_0);
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m12558_GenericMethod;
extern "C" Enumerator_t2515  Dictionary_2_GetEnumerator_m12558_gshared (Dictionary_2_t2509 * __this, MethodInfo* method)
{
	{
		Enumerator_t2515  L_0 = {0};
		(( void (*) (Enumerator_t2515 *, Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t134  Dictionary_2_U3CCopyToU3Em__0_m12560_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		DictionaryEntry_t134  L_3 = {0};
		DictionaryEntry__ctor_m3861(&L_3, ((Object_t *)L_0), L_2, /*hidden argument*/&DictionaryEntry__ctor_m3861_MethodInfo);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3679_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3680_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3294_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_ToString_m228_MethodInfo;
extern MethodInfo String_Concat_m157_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m12563_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m12565_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m12561_gshared (KeyValuePair_2_t2510 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		(( void (*) (KeyValuePair_2_t2510 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ___key, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (KeyValuePair_2_t2510 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, ___value, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m12562_gshared (KeyValuePair_2_t2510 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m12563_gshared (KeyValuePair_2_t2510 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		__this->___key_0 = ___value;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m12564_gshared (KeyValuePair_2_t2510 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m12565_gshared (KeyValuePair_2_t2510 * __this, int32_t ___value, MethodInfo* method)
{
	{
		__this->___value_1 = ___value;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m12566_GenericMethod;
extern TypeInfo* StringU5BU5D_t17_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m12566_gshared (KeyValuePair_2_t2510 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m12566_init;
	if (!KeyValuePair_2_ToString_m12566_init)
	{
		StringU5BU5D_t17_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t17_0_0_0);
		KeyValuePair_2_ToString_m12566_init = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t17* G_B2_1 = {0};
	StringU5BU5D_t17* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t17* G_B1_1 = {0};
	StringU5BU5D_t17* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t17* G_B3_2 = {0};
	StringU5BU5D_t17* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t17* G_B5_1 = {0};
	StringU5BU5D_t17* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t17* G_B4_1 = {0};
	StringU5BU5D_t17* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t17* G_B6_2 = {0};
	StringU5BU5D_t17* G_B6_3 = {0};
	{
		StringU5BU5D_t17* L_0 = ((StringU5BU5D_t17*)SZArrayNew(StringU5BU5D_t17_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral706);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral706;
		StringU5BU5D_t17* L_1 = L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_4;
		NullCheck((*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		G_B3_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t17* L_6 = G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral149);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral149;
		StringU5BU5D_t17* L_7 = L_6;
		int32_t L_8 = (( int32_t (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_9);
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_10)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_11;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		G_B6_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t17* L_13 = G_B6_3;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral158);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, 4)) = (String_t*)(String_t*) &_stringLiteral158;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = String_Concat_m157(NULL /*static, unused*/, L_13, /*hidden argument*/&String_Concat_m157_MethodInfo);
		return L_14;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2511_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2511_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t2510  Array_InternalArray__get_Item_TisKeyValuePair_2_t2510_m20468_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2510_m20468(__this, p0, method) (( KeyValuePair_2_t2510  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2510_m20468_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12571_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2510_m20468_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12567_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12567_gshared (InternalEnumerator_1_t2511 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12568_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12568_gshared (InternalEnumerator_1_t2511 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2510  L_0 = (( KeyValuePair_2_t2510  (*) (InternalEnumerator_1_t2511 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2510  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12569_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12569_gshared (InternalEnumerator_1_t2511 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12570_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12570_gshared (InternalEnumerator_1_t2511 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2510  InternalEnumerator_1_get_Current_m12571_gshared (InternalEnumerator_1_t2511 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t2510  L_8 = (( KeyValuePair_2_t2510  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3681_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3682_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3683_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.Link>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2512_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2512_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.Link>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.Link>(System.Int32)
extern "C" Link_t1367  Array_InternalArray__get_Item_TisLink_t1367_m20479_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisLink_t1367_m20479(__this, p0, method) (( Link_t1367  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisLink_t1367_m20479_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12576_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisLink_t1367_m20479_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12572_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12572_gshared (InternalEnumerator_1_t2512 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12573_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12573_gshared (InternalEnumerator_1_t2512 * __this, MethodInfo* method)
{
	{
		Link_t1367  L_0 = (( Link_t1367  (*) (InternalEnumerator_1_t2512 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Link_t1367  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12574_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12574_gshared (InternalEnumerator_1_t2512 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12575_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12575_gshared (InternalEnumerator_1_t2512 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::get_Current()
extern "C" Link_t1367  InternalEnumerator_1_get_Current_m12576_gshared (InternalEnumerator_1_t2512 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		Link_t1367  L_8 = (( Link_t1367  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3684_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3685_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.Link>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3686_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.Link>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.Link>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.Link>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.Link>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.Link>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0.h"
extern TypeInfo ICollection_t715_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t150_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2514_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2516_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6MethodDeclarations.h"
extern Il2CppType Enumerator_t2514_0_0_0;
extern Il2CppType Transform_1_t2516_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m10299_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m3883_MethodInfo;
extern MethodInfo ValueCollection_CopyTo_m12588_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m12532_MethodInfo;
extern MethodInfo Transform_1__ctor_m12608_MethodInfo;
extern MethodInfo Enumerator__ctor_m12591_MethodInfo;
struct Dictionary_2_t2509;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t43_m20490_gshared (Dictionary_2_t2509 * __this, Array_t * p0, int32_t p1, Transform_1_t2516 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t43_m20490(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, Transform_1_t2516 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t43_m20490_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2509;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t43_TisInt32_t43_m20491 (Dictionary_2_t2509 * __this, Int32U5BU5D_t220* p0, int32_t p1, Transform_1_t2516 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m12589_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m12588_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12608_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t43_m20490_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t43_TisInt32_t43_m20491_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12591_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m12577_gshared (ValueCollection_t2513 * __this, Dictionary_2_t2509 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		if (___dictionary)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1413, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		__this->___dictionary_0 = ___dictionary;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12578_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12578_gshared (ValueCollection_t2513 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1414, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12579_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12579_gshared (ValueCollection_t2513 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1414, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12580_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12580_gshared (ValueCollection_t2513 * __this, int32_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2509 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		bool L_1 = (( bool (*) (Dictionary_2_t2509 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12581_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12581_gshared (ValueCollection_t2513 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1414, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12582_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12582_gshared (ValueCollection_t2513 * __this, MethodInfo* method)
{
	{
		Enumerator_t2514  L_0 = (( Enumerator_t2514  (*) (ValueCollection_t2513 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2514  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m12583_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m12583_gshared (ValueCollection_t2513 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	Int32U5BU5D_t220* V_0 = {0};
	{
		V_0 = ((Int32U5BU5D_t220*)IsInst(___array, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< Int32U5BU5D_t220*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, V_0, ___index);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2509 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, ___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2509 * L_1 = (__this->___dictionary_0);
		IntPtr_t98 L_2 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2516 * L_3 = (Transform_1_t2516 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2516 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_3, NULL, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_1);
		(( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, Transform_1_t2516 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_1, ___array, ___index, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12584_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12584_gshared (ValueCollection_t2513 * __this, MethodInfo* method)
{
	{
		Enumerator_t2514  L_0 = (( Enumerator_t2514  (*) (ValueCollection_t2513 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2514  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12585_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12585_gshared (ValueCollection_t2513 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12586_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12586_gshared (ValueCollection_t2513 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m12587_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m12587_gshared (ValueCollection_t2513 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2509 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10299_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m12588_gshared (ValueCollection_t2513 * __this, Int32U5BU5D_t220* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2509 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2509 * L_1 = (__this->___dictionary_0);
		IntPtr_t98 L_2 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2516 * L_3 = (Transform_1_t2516 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2516 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_3, NULL, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_1);
		(( void (*) (Dictionary_2_t2509 *, Int32U5BU5D_t220*, int32_t, Transform_1_t2516 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_1, ___array, ___index, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2514  ValueCollection_GetEnumerator_m12589_gshared (ValueCollection_t2513 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2509 * L_0 = (__this->___dictionary_0);
		Enumerator_t2514  L_1 = {0};
		(( void (*) (Enumerator_t2514 *, Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m12590_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m12590_gshared (ValueCollection_t2513 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2509 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentValue_m12604_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m12607_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m12601_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12591_gshared (Enumerator_t2514 * __this, Dictionary_2_t2509 * ___host, MethodInfo* method)
{
	{
		NullCheck(___host);
		Enumerator_t2515  L_0 = (( Enumerator_t2515  (*) (Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(___host, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m12592_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12592_gshared (Enumerator_t2514 * __this, MethodInfo* method)
{
	{
		Enumerator_t2515 * L_0 = &(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m12593_GenericMethod;
extern "C" void Enumerator_Dispose_m12593_gshared (Enumerator_t2514 * __this, MethodInfo* method)
{
	{
		Enumerator_t2515 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m12594_GenericMethod;
extern "C" bool Enumerator_MoveNext_m12594_gshared (Enumerator_t2514 * __this, MethodInfo* method)
{
	{
		Enumerator_t2515 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m12595_GenericMethod;
extern "C" int32_t Enumerator_get_Current_m12595_gshared (Enumerator_t2514 * __this, MethodInfo* method)
{
	{
		Enumerator_t2515 * L_0 = &(__this->___host_enumerator_0);
		NullCheck(L_0);
		KeyValuePair_2_t2510 * L_1 = &(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo ObjectDisposedException_t1831_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo ObjectDisposedException__ctor_m10087_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m12606_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m12603_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m12605_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12596_gshared (Enumerator_t2515 * __this, Dictionary_2_t2509 * ___dictionary, MethodInfo* method)
{
	{
		__this->___dictionary_0 = ___dictionary;
		NullCheck(___dictionary);
		int32_t L_0 = (___dictionary->___generation_14);
		__this->___stamp_2 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m12597_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12597_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2510  L_0 = (__this->___current_3);
		KeyValuePair_2_t2510  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12598_GenericMethod;
extern "C" DictionaryEntry_t134  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12598_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2510 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t2510 * L_3 = &(__this->___current_3);
		int32_t L_4 = (( int32_t (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t134  L_7 = {0};
		DictionaryEntry__ctor_m3861(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m3861_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12599_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12599_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12600_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12600_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12601_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___next_1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_0 = V_1;
		Dictionary_2_t2509 * L_3 = (__this->___dictionary_0);
		NullCheck(L_3);
		LinkU5BU5D_t2210* L_4 = (L_3->___linkSlots_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_0);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_4, V_0)));
		int32_t L_5 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_4, V_0))->___HashCode_0);
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t2509 * L_6 = (__this->___dictionary_0);
		NullCheck(L_6);
		ObjectU5BU5D_t137* L_7 = (L_6->___keySlots_6);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_0);
		int32_t L_8 = V_0;
		Dictionary_2_t2509 * L_9 = (__this->___dictionary_0);
		NullCheck(L_9);
		Int32U5BU5D_t220* L_10 = (L_9->___valueSlots_7);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_0);
		int32_t L_11 = V_0;
		KeyValuePair_2_t2510  L_12 = {0};
		(( void (*) (KeyValuePair_2_t2510 *, Object_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_12, (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_11)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_12;
		return 1;
	}

IL_0072:
	{
		int32_t L_13 = (__this->___next_1);
		Dictionary_2_t2509 * L_14 = (__this->___dictionary_0);
		NullCheck(L_14);
		int32_t L_15 = (L_14->___touchedSlots_8);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m12602_GenericMethod;
extern "C" KeyValuePair_2_t2510  Enumerator_get_Current_m12602_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2510  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12603_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2510 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12604_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2510 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12605_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2509 * L_0 = (__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t2509 * L_2 = (__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___generation_14);
		int32_t L_4 = (__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t784 * L_5 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_5, (String_t*) &_stringLiteral1411, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12606_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1412, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12607_gshared (Enumerator_t2515 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2509 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12608_gshared (Transform_1_t2516 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m12609_GenericMethod;
extern "C" int32_t Transform_1_Invoke_m12609_gshared (Transform_1_t2516 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12609((Transform_1_t2516 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m12610_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m12610_gshared (Transform_1_t2516 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m12611_GenericMethod;
extern "C" int32_t Transform_1_EndInvoke_m12611_gshared (Transform_1_t2516 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12612_gshared (Transform_1_t2508 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m12613_GenericMethod;
extern "C" DictionaryEntry_t134  Transform_1_Invoke_m12613_gshared (Transform_1_t2508 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12613((Transform_1_t2508 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t134  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t134  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t134  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m12614_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m12614_gshared (Transform_1_t2508 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m12615_GenericMethod;
extern "C" DictionaryEntry_t134  Transform_1_EndInvoke_m12615_gshared (Transform_1_t2508 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t134 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3687_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2517_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2517_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
extern "C" DictionaryEntry_t134  Array_InternalArray__get_Item_TisDictionaryEntry_t134_m20493_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDictionaryEntry_t134_m20493(__this, p0, method) (( DictionaryEntry_t134  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDictionaryEntry_t134_m20493_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12620_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDictionaryEntry_t134_m20493_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12616_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12616_gshared (InternalEnumerator_1_t2517 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12617_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12617_gshared (InternalEnumerator_1_t2517 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t134  L_0 = (( DictionaryEntry_t134  (*) (InternalEnumerator_1_t2517 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DictionaryEntry_t134  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12618_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12618_gshared (InternalEnumerator_1_t2517 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12619_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12619_gshared (InternalEnumerator_1_t2517 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t134  InternalEnumerator_1_get_Current_m12620_gshared (InternalEnumerator_1_t2517 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		DictionaryEntry_t134  L_8 = (( DictionaryEntry_t134  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3688_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3689_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3690_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12621_gshared (Transform_1_t2518 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m12622_GenericMethod;
extern "C" KeyValuePair_2_t2510  Transform_1_Invoke_m12622_gshared (Transform_1_t2518 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12622((Transform_1_t2518 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2510  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2510  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2510  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m12623_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m12623_gshared (Transform_1_t2518 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m12624_GenericMethod;
extern "C" KeyValuePair_2_t2510  Transform_1_EndInvoke_m12624_gshared (Transform_1_t2518 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2510 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IDictionaryEnumerator_t133_il2cpp_TypeInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m10302_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m12627_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m12627_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12625_gshared (ShimEnumerator_t2519 * __this, Dictionary_2_t2509 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		NullCheck(___host);
		Enumerator_t2515  L_0 = (( Enumerator_t2515  (*) (Dictionary_2_t2509 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(___host, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_0;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m12626_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m12626_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method)
{
	{
		Enumerator_t2515 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t134  ShimEnumerator_get_Entry_m12627_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method)
{
	{
		Enumerator_t2515  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2515  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t134  L_3 = (DictionaryEntry_t134 )InterfaceFuncInvoker0< DictionaryEntry_t134  >::Invoke(&IDictionaryEnumerator_get_Entry_m10302_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m12628_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m12628_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2510  V_0 = {0};
	{
		Enumerator_t2515 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2510  L_1 = (( KeyValuePair_2_t2510  (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m12629_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m12629_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2510  V_0 = {0};
	{
		Enumerator_t2515 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2510  L_1 = (( KeyValuePair_2_t2510  (*) (Enumerator_t2515 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2510 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m12630_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m12630_gshared (ShimEnumerator_t2519 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t134  L_0 = (DictionaryEntry_t134 )VirtFuncInvoker0< DictionaryEntry_t134  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t134  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t134_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.GenericEqualityComparer`1
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
extern TypeInfo IEquatable_1_t1933_il2cpp_TypeInfo;
extern TypeInfo GenericEqualityComparer_1_t1376_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t138_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2522_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"
extern Il2CppType IEquatable_1_t1933_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t1376_0_0_0;
extern Il2CppType TypeU5BU5D_t138_0_0_0;
extern Il2CppType DefaultComparer_t2522_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m4313_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5553_MethodInfo;
extern MethodInfo Activator_CreateInstance_m5587_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m12639_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23364_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12639_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23364_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m12631_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m12631_gshared (EqualityComparer_1_t2520 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m12632_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m12632_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2522 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2522 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2522 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2520_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12633_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12633_gshared (EqualityComparer_1_t2520 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int32_t*)((int32_t*)UnBox (___obj, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12634_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12634_gshared (EqualityComparer_1_t2520 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(int32_t*)((int32_t*)UnBox (___x, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int32_t*)((int32_t*)UnBox (___y, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int32>::get_Default()
extern "C" EqualityComparer_1_t2520 * EqualityComparer_1_get_Default_m12635_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return (((EqualityComparer_1_t2520_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0);
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2521_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6MethodDeclarations.h"

extern MethodInfo Object_GetHashCode_m227_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m23365_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m23365_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m12636_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m12636_gshared (GenericEqualityComparer_1_t2521 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2520 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m12637_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12637_gshared (GenericEqualityComparer_1_t2521 * __this, int32_t ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m12638_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m12638_gshared (GenericEqualityComparer_1_t2521 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), ___y);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m225_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m12639_gshared (DefaultComparer_t2522 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2520 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m12640_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m12640_gshared (DefaultComparer_t2522 * __this, int32_t ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m12641_GenericMethod;
extern "C" bool DefaultComparer_Equals_m12641_gshared (DefaultComparer_t2522 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		Object_t * L_1 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___y;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_4 = ___y;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m225_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_5);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3691_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3692_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3292_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m12644_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m12646_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2524_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2524_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t2523  Array_InternalArray__get_Item_TisKeyValuePair_2_t2523_m20508_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2523_m20508(__this, p0, method) (( KeyValuePair_2_t2523  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2523_m20508_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12652_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2523_m20508_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12648_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12648_gshared (InternalEnumerator_1_t2524 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12649_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12649_gshared (InternalEnumerator_1_t2524 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2523  L_0 = (( KeyValuePair_2_t2523  (*) (InternalEnumerator_1_t2524 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2523  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12650_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12650_gshared (InternalEnumerator_1_t2524 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12651_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12651_gshared (InternalEnumerator_1_t2524 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2523  InternalEnumerator_1_get_Current_m12652_gshared (InternalEnumerator_1_t2524 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t2523  L_8 = (( KeyValuePair_2_t2523  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3693_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3694_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3.h"
extern TypeInfo Enumerator_t2526_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2528_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
extern Il2CppType Enumerator_t2526_0_0_0;
extern Il2CppType Transform_1_t2528_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m12664_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m12531_MethodInfo;
extern MethodInfo Transform_1__ctor_m12684_MethodInfo;
extern MethodInfo Enumerator__ctor_m12667_MethodInfo;
struct Dictionary_2_t9;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t43_m20519(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t9 *, Array_t *, int32_t, Transform_1_t2528 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t43_m20490_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t9;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t43_TisInt32_t43_m20520 (Dictionary_2_t9 * __this, Int32U5BU5D_t220* p0, int32_t p1, Transform_1_t2528 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m12540_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m12665_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m12664_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m12531_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12684_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t43_m20519_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t43_TisInt32_t43_m20520_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12667_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentValue_m12680_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m12557_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m12683_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m12677_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m12682_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m12679_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m12681_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2530_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m12693_GenericMethod;
extern "C" void Transform_1__ctor_m12693_gshared (Transform_1_t2530 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m12695_GenericMethod;
extern "C" KeyValuePair_2_t2523  Transform_1_Invoke_m12695_gshared (Transform_1_t2530 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12695((Transform_1_t2530 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2523  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2523  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2523  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m12697_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m12697_gshared (Transform_1_t2530 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m12699_GenericMethod;
extern "C" KeyValuePair_2_t2523  Transform_1_EndInvoke_m12699_gshared (Transform_1_t2530 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2523 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m12702_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m12678_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m12702_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Current()
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t10_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3.h"
extern TypeInfo ValueCollection_t2545_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3296_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2543_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2532_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2549_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2547_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2551_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3MethodDeclarations.h"
extern Il2CppType Dictionary_2_t10_0_0_0;
extern Il2CppType ValueCollection_t2545_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3296_0_0_0;
extern Il2CppType KeyValuePair_2_t2543_0_0_0;
extern Il2CppType Transform_1_t2532_0_0_0;
extern Il2CppType Transform_1_t2549_0_0_0;
extern Il2CppType Enumerator_t2547_0_0_0;
extern Il2CppType ShimEnumerator_t2551_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m138_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m139_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m12746_MethodInfo;
extern MethodInfo ValueCollection__ctor_m12859_MethodInfo;
extern MethodInfo Dictionary_2_Add_m158_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m12772_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m12786_MethodInfo;
extern MethodInfo Transform_1__ctor_m12894_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m12754_MethodInfo;
extern MethodInfo Transform_1__ctor_m12898_MethodInfo;
extern MethodInfo Enumerator__ctor_m12878_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m12906_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m12743_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m12848_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m12774_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20395_MethodInfo;
struct Dictionary_2_t10;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m20558 (Dictionary_2_t10 * __this, DictionaryEntryU5BU5D_t3445* p0, int32_t p1, Transform_1_t2532 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t10;
struct Dictionary_2_t2534;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2543_m20561_gshared (Dictionary_2_t2534 * __this, Array_t * p0, int32_t p1, Transform_1_t2550 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2543_m20561(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, Transform_1_t2550 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2543_m20561_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2543_m20560(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t10 *, Array_t *, int32_t, Transform_1_t2549 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2543_m20561_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t10;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2543_TisKeyValuePair_2_t2543_m20563 (Dictionary_2_t10 * __this, KeyValuePair_2U5BU5D_t3296* p0, int32_t p1, Transform_1_t2549 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m138_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m12778_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m139_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m12780_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m12746_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m12760_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m12859_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m12748_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m158_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m12772_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m12849_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m12851_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m12782_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m12758_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m12752_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m12786_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12894_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m20558_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m12754_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12898_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2543_m20560_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12878_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m12906_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m12750_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m12743_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m12848_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2543_TisKeyValuePair_2_t2543_m20563_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m12774_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20395_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t2534_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_9.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2.h"
extern TypeInfo ValueCollection_t2537_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3298_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2535_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2533_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2541_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2539_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2542_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_9MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2MethodDeclarations.h"
extern Il2CppType Dictionary_2_t2534_0_0_0;
extern Il2CppType ValueCollection_t2537_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3298_0_0_0;
extern Il2CppType KeyValuePair_2_t2535_0_0_0;
extern Il2CppType Transform_1_t2533_0_0_0;
extern Il2CppType Transform_1_t2541_0_0_0;
extern Il2CppType Enumerator_t2539_0_0_0;
extern Il2CppType ShimEnumerator_t2542_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m12765_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m12745_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m12747_MethodInfo;
extern MethodInfo ValueCollection__ctor_m12799_MethodInfo;
extern MethodInfo Dictionary_2_Add_m12762_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m12773_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m12787_MethodInfo;
extern MethodInfo Transform_1__ctor_m12834_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m12755_MethodInfo;
extern MethodInfo Transform_1__ctor_m12838_MethodInfo;
extern MethodInfo Enumerator__ctor_m12818_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m12842_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m12744_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m12788_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m12775_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20084_MethodInfo;
struct Dictionary_2_t2534;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m20540 (Dictionary_2_t2534 * __this, DictionaryEntryU5BU5D_t3445* p0, int32_t p1, Transform_1_t2533 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t2534;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2535_m20542_gshared (Dictionary_2_t2534 * __this, Array_t * p0, int32_t p1, Transform_1_t2541 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2535_m20542(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, Transform_1_t2541 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2535_m20542_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2534;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2535_TisKeyValuePair_2_t2535_m20543 (Dictionary_2_t2534 * __this, KeyValuePair_2U5BU5D_t3298* p0, int32_t p1, Transform_1_t2541 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m12765_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m12779_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m12745_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m12781_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m12747_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m12761_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m12799_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m12749_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m12762_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m12773_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m12789_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m12791_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m12783_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m12759_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m12753_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m12787_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12834_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m20540_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m12755_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12838_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2535_m20542_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12818_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m12842_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m12751_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m12744_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m12788_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2535_TisKeyValuePair_2_t2535_m20543_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m12775_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20084_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m12706_GenericMethod;
extern "C" void Dictionary_2__ctor_m12706_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		(( void (*) (Dictionary_2_t2534 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m12708_GenericMethod;
extern "C" void Dictionary_2__ctor_m12708_gshared (Dictionary_2_t2534 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		(( void (*) (Dictionary_2_t2534 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), ___comparer, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m12710_GenericMethod;
extern "C" void Dictionary_2__ctor_m12710_gshared (Dictionary_2_t2534 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		(( void (*) (Dictionary_2_t2534 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ___capacity, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m12712_GenericMethod;
extern "C" void Dictionary_2__ctor_m12712_gshared (Dictionary_2_t2534 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___serialization_info_13 = ___info;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m12714_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12714_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		if (!((Object_t *)IsInst(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), __this, ((Object_t *)Castclass(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, ___key, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_1);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m12716_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12716_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, ___key, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, ___value, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m12718_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12718_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, ___key, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, ___value, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m12720_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12720_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		if (___key)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (!((Object_t *)IsInst(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0023;
		}
	}
	{
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, ((Object_t *)Castclass(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12722_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12722_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12724_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12724_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12726_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12726_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12728_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12728_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2_t2535  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12730_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12730_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2_t2535  ___keyValuePair, MethodInfo* method)
{
	{
		bool L_0 = (( bool (*) (Dictionary_2_t2534 *, KeyValuePair_2_t2535 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, ___keyValuePair, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12732_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12732_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2U5BU5D_t3298* ___array, int32_t ___index, MethodInfo* method)
{
	{
		(( void (*) (Dictionary_2_t2534 *, KeyValuePair_2U5BU5D_t3298*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, ___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12734_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12734_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2_t2535  ___keyValuePair, MethodInfo* method)
{
	{
		bool L_0 = (( bool (*) (Dictionary_2_t2534 *, KeyValuePair_2_t2535 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, ___keyValuePair, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m12736_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3445_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12736_gshared (Dictionary_2_t2534 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m12736_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m12736_init)
	{
		DictionaryEntryU5BU5D_t3445_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3445_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m12736_init = true;
	}
	KeyValuePair_2U5BU5D_t3298* V_0 = {0};
	DictionaryEntryU5BU5D_t3445* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3445* G_B5_1 = {0};
	Dictionary_2_t2534 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3445* G_B4_1 = {0};
	Dictionary_2_t2534 * G_B4_2 = {0};
	{
		V_0 = ((KeyValuePair_2U5BU5D_t3298*)IsInst(___array, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		(( void (*) (Dictionary_2_t2534 *, KeyValuePair_2U5BU5D_t3298*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, V_0, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}

IL_0013:
	{
		(( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, ___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		V_1 = ((DictionaryEntryU5BU5D_t3445*)IsInst(___array, DictionaryEntryU5BU5D_t3445_il2cpp_TypeInfo_var));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = ___index;
		G_B4_1 = V_1;
		G_B4_2 = ((Dictionary_2_t2534 *)(__this));
		if ((((Dictionary_2_t2534_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15))
		{
			G_B5_0 = ___index;
			G_B5_1 = V_1;
			G_B5_2 = ((Dictionary_2_t2534 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t98 L_0 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17) };
		Transform_1_t2533 * L_1 = (Transform_1_t2533 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		(( void (*) (Transform_1_t2533 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(L_1, NULL, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		((Dictionary_2_t2534_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2534 *)(G_B4_2));
	}

IL_0040:
	{
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t2534 *, DictionaryEntryU5BU5D_t3445*, int32_t, Transform_1_t2533 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(G_B5_2, G_B5_1, G_B5_0, (((Dictionary_2_t2534_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}

IL_004b:
	{
		IntPtr_t98 L_2 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t2541 * L_3 = (Transform_1_t2541 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t2541 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_3, NULL, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		(( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, Transform_1_t2541 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(__this, ___array, ___index, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12738_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12738_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		Enumerator_t2539  L_0 = {0};
		(( void (*) (Enumerator_t2539 *, Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t2539  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12740_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12740_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		Enumerator_t2539  L_0 = {0};
		(( void (*) (Enumerator_t2539 *, Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t2539  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12742_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12742_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t2542 * L_0 = (ShimEnumerator_t2542 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		(( void (*) (ShimEnumerator_t2542 *, Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12744_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12745_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))));
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_1);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_t137* L_13 = (__this->___valueSlots_7);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_1);
		int32_t L_14 = V_1;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14));
	}

IL_007d:
	{
		LinkU5BU5D_t2210* L_15 = (__this->___linkSlots_5);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_15, V_1)));
		int32_t L_16 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_15, V_1))->___Next_1);
		V_1 = L_16;
	}

IL_008f:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t1377 * L_17 = (KeyNotFoundException_t1377 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t1377_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m7051(L_17, /*hidden argument*/&KeyNotFoundException__ctor_m7051_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12747_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))-(int32_t)1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_2);
		int32_t L_11 = V_2;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		LinkU5BU5D_t2210* L_13 = (__this->___linkSlots_5);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_2)));
		int32_t L_14 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_2))->___Next_1);
		V_2 = L_14;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_15 = (__this->___count_10);
		int32_t L_16 = ((int32_t)((int32_t)L_15+(int32_t)1));
		V_4 = L_16;
		__this->___count_10 = L_16;
		int32_t L_17 = (__this->___threshold_11);
		if ((((int32_t)V_4) <= ((int32_t)L_17)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		Int32U5BU5D_t220* L_18 = (__this->___table_4);
		NullCheck(L_18);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_18)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_19 = (__this->___emptySlot_9);
		V_2 = L_19;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_20 = (__this->___touchedSlots_8);
		int32_t L_21 = L_20;
		V_4 = L_21;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_21+(int32_t)1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2210* L_22 = (__this->___linkSlots_5);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, V_2)));
		int32_t L_23 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, V_2))->___Next_1);
		__this->___emptySlot_9 = L_23;
	}

IL_0101:
	{
		LinkU5BU5D_t2210* L_24 = (__this->___linkSlots_5);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, V_2);
		Int32U5BU5D_t220* L_25 = (__this->___table_4);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, V_1);
		int32_t L_26 = V_1;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_24, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_24, V_2))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_25, L_26))-(int32_t)1));
		Int32U5BU5D_t220* L_27 = (__this->___table_4);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, V_1)) = (int32_t)((int32_t)((int32_t)V_2+(int32_t)1));
		LinkU5BU5D_t2210* L_28 = (__this->___linkSlots_5);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_28, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_28, V_2))->___HashCode_0 = V_0;
		ObjectU5BU5D_t137* L_29 = (__this->___keySlots_6);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, V_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, V_2)) = (Object_t *)___key;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2210* L_30 = (__this->___linkSlots_5);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, V_3);
		LinkU5BU5D_t2210* L_31 = (__this->___linkSlots_5);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_31, V_2)));
		int32_t L_32 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_31, V_2))->___Next_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_30, V_3)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_30, V_3))->___Next_1 = L_32;
		LinkU5BU5D_t2210* L_33 = (__this->___linkSlots_5);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, V_2);
		Int32U5BU5D_t220* L_34 = (__this->___table_4);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, V_1);
		int32_t L_35 = V_1;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_33, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_33, V_2))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_34, L_35))-(int32_t)1));
		Int32U5BU5D_t220* L_36 = (__this->___table_4);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_36, V_1)) = (int32_t)((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_0194:
	{
		ObjectU5BU5D_t137* L_37 = (__this->___valueSlots_7);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, V_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, V_2)) = (Object_t *)___value;
		int32_t L_38 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_38+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2444_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m12749_gshared (Dictionary_2_t2534 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m12749_init;
	if (!Dictionary_2_Init_m12749_init)
	{
		EqualityComparer_1_t2444_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2444_0_0_0);
		Dictionary_2_Init_m12749_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2534 * G_B4_0 = {0};
	Dictionary_2_t2534 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2534 * G_B5_1 = {0};
	{
		if ((((int32_t)___capacity) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_0 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_0, (String_t*) &_stringLiteral1403, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000f:
	{
		G_B3_0 = ((Dictionary_2_t2534 *)(__this));
		if (!___hcp)
		{
			G_B4_0 = ((Dictionary_2_t2534 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = ___hcp;
		G_B5_0 = V_0;
		G_B5_1 = ((Dictionary_2_t2534 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2444_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2444 * L_1 = (( EqualityComparer_1_t2444 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		G_B5_0 = ((Object_t*)(L_1));
		G_B5_1 = ((Dictionary_2_t2534 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		if (___capacity)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = ((int32_t)10);
	}

IL_002b:
	{
		___capacity = ((int32_t)((int32_t)(((int32_t)((float)((float)(((float)___capacity))/(float)(0.9f)))))+(int32_t)1));
		(( void (*) (Dictionary_2_t2534 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(__this, ___capacity, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t220_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2210_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m12751_gshared (Dictionary_2_t2534 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m12751_init;
	if (!Dictionary_2_InitArrays_m12751_init)
	{
		Int32U5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t220_0_0_0);
		LinkU5BU5D_t2210_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2210_0_0_0);
		Dictionary_2_InitArrays_m12751_init = true;
	}
	{
		__this->___table_4 = ((Int32U5BU5D_t220*)SZArrayNew(Int32U5BU5D_t220_il2cpp_TypeInfo_var, ___size));
		__this->___linkSlots_5 = ((LinkU5BU5D_t2210*)SZArrayNew(LinkU5BU5D_t2210_il2cpp_TypeInfo_var, ___size));
		__this->___emptySlot_9 = (-1);
		__this->___keySlots_6 = ((ObjectU5BU5D_t137*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), ___size));
		__this->___valueSlots_7 = ((ObjectU5BU5D_t137*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), ___size));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t220* L_0 = (__this->___table_4);
		NullCheck(L_0);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_0)->max_length)))))*(float)(0.9f)))));
		int32_t L_1 = (__this->___threshold_11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t220* L_2 = (__this->___table_4);
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12753_gshared (Dictionary_2_t2534 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		if (___array)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral403, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if ((((int32_t)___index) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_1 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_1, (String_t*) &_stringLiteral405, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		NullCheck(___array);
		int32_t L_2 = Array_get_Length_m947(___array, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		if ((((int32_t)___index) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_3, (String_t*) &_stringLiteral1404, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0031:
	{
		NullCheck(___array);
		int32_t L_4 = Array_get_Length_m947(___array, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), __this);
		if ((((int32_t)((int32_t)((int32_t)L_4-(int32_t)___index))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t522 * L_6 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_6, (String_t*) &_stringLiteral1405, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2535  Dictionary_2_make_pair_m12755_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		KeyValuePair_2_t2535  L_0 = {0};
		(( void (*) (KeyValuePair_2_t2535 *, Object_t *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(&L_0, ___key, ___value, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m12757_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_value_m12757_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		return ___value;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12759_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2U5BU5D_t3298* ___array, int32_t ___index, MethodInfo* method)
{
	{
		(( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, (Array_t *)(Array_t *)___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		IntPtr_t98 L_0 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t2541 * L_1 = (Transform_1_t2541 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t2541 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_1, NULL, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		(( void (*) (Dictionary_2_t2534 *, KeyValuePair_2U5BU5D_t3298*, int32_t, Transform_1_t2541 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, ___array, ___index, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern TypeInfo* Int32U5BU5D_t220_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2210_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m12761_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m12761_init;
	if (!Dictionary_2_Resize_m12761_init)
	{
		Int32U5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t220_0_0_0);
		LinkU5BU5D_t2210_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2210_0_0_0);
		Dictionary_2_Resize_m12761_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t220* V_1 = {0};
	LinkU5BU5D_t2210* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t137* V_7 = {0};
	ObjectU5BU5D_t137* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t220* L_0 = (__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t74_il2cpp_TypeInfo));
		int32_t L_1 = Hashtable_ToPrime_m7223(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/&Hashtable_ToPrime_m7223_MethodInfo);
		V_0 = L_1;
		V_1 = ((Int32U5BU5D_t220*)SZArrayNew(Int32U5BU5D_t220_il2cpp_TypeInfo_var, V_0));
		V_2 = ((LinkU5BU5D_t2210*)SZArrayNew(LinkU5BU5D_t2210_il2cpp_TypeInfo_var, V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t220* L_2 = (__this->___table_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, V_3);
		int32_t L_3 = V_3;
		V_4 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_4);
		Object_t* L_4 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_5 = (__this->___keySlots_6);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_4);
		int32_t L_6 = V_4;
		NullCheck(L_4);
		int32_t L_7 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_4, (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)));
		int32_t L_8 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)-2147483648)));
		V_9 = L_8;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(V_2, V_4)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(V_2, V_4))->___HashCode_0 = L_8;
		V_5 = V_9;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)V_5&(int32_t)((int32_t)2147483647)))%(int32_t)V_0));
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_4);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_6);
		int32_t L_9 = V_6;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(V_2, V_4)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(V_2, V_4))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(V_1, L_9))-(int32_t)1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_6);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)((int32_t)V_4+(int32_t)1));
		LinkU5BU5D_t2210* L_10 = (__this->___linkSlots_5);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_4);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, V_4)));
		int32_t L_11 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, V_4))->___Next_1);
		V_4 = L_11;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_00ab:
	{
		Int32U5BU5D_t220* L_12 = (__this->___table_4);
		NullCheck(L_12);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___table_4 = V_1;
		__this->___linkSlots_5 = V_2;
		V_7 = ((ObjectU5BU5D_t137*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), V_0));
		V_8 = ((ObjectU5BU5D_t137*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), V_0));
		ObjectU5BU5D_t137* L_13 = (__this->___keySlots_6);
		int32_t L_14 = (__this->___touchedSlots_8);
		Array_Copy_m6433(NULL /*static, unused*/, (Array_t *)(Array_t *)L_13, 0, (Array_t *)(Array_t *)V_7, 0, L_14, /*hidden argument*/&Array_Copy_m6433_MethodInfo);
		ObjectU5BU5D_t137* L_15 = (__this->___valueSlots_7);
		int32_t L_16 = (__this->___touchedSlots_8);
		Array_Copy_m6433(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, 0, (Array_t *)(Array_t *)V_8, 0, L_16, /*hidden argument*/&Array_Copy_m6433_MethodInfo);
		__this->___keySlots_6 = V_7;
		__this->___valueSlots_7 = V_8;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)V_0))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12762_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_2);
		int32_t L_11 = V_2;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t522 * L_13 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_13, (String_t*) &_stringLiteral1407, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_007d:
	{
		LinkU5BU5D_t2210* L_14 = (__this->___linkSlots_5);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_14, V_2)));
		int32_t L_15 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_14, V_2))->___Next_1);
		V_2 = L_15;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_16 = (__this->___count_10);
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		V_3 = L_17;
		__this->___count_10 = L_17;
		int32_t L_18 = (__this->___threshold_11);
		if ((((int32_t)V_3) <= ((int32_t)L_18)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		Int32U5BU5D_t220* L_19 = (__this->___table_4);
		NullCheck(L_19);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_19)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_20 = (__this->___emptySlot_9);
		V_2 = L_20;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_21 = (__this->___touchedSlots_8);
		int32_t L_22 = L_21;
		V_3 = L_22;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_22+(int32_t)1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2210* L_23 = (__this->___linkSlots_5);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_23, V_2)));
		int32_t L_24 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_23, V_2))->___Next_1);
		__this->___emptySlot_9 = L_24;
	}

IL_00f9:
	{
		LinkU5BU5D_t2210* L_25 = (__this->___linkSlots_5);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_25, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_25, V_2))->___HashCode_0 = V_0;
		LinkU5BU5D_t2210* L_26 = (__this->___linkSlots_5);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, V_2);
		Int32U5BU5D_t220* L_27 = (__this->___table_4);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, V_1);
		int32_t L_28 = V_1;
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_26, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_26, V_2))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_27, L_28))-(int32_t)1));
		Int32U5BU5D_t220* L_29 = (__this->___table_4);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, V_1)) = (int32_t)((int32_t)((int32_t)V_2+(int32_t)1));
		ObjectU5BU5D_t137* L_30 = (__this->___keySlots_6);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, V_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, V_2)) = (Object_t *)___key;
		ObjectU5BU5D_t137* L_31 = (__this->___valueSlots_7);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, V_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, V_2)) = (Object_t *)___value;
		int32_t L_32 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_32+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m12764_GenericMethod;
extern "C" void Dictionary_2_Clear_m12764_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t220* L_0 = (__this->___table_4);
		Int32U5BU5D_t220* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m6430(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m6430_MethodInfo);
		ObjectU5BU5D_t137* L_2 = (__this->___keySlots_6);
		ObjectU5BU5D_t137* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m6430(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m6430_MethodInfo);
		ObjectU5BU5D_t137* L_4 = (__this->___valueSlots_7);
		ObjectU5BU5D_t137* L_5 = (__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m6430(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&Array_Clear_m6430_MethodInfo);
		LinkU5BU5D_t2210* L_6 = (__this->___linkSlots_5);
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m6430(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/&Array_Clear_m6430_MethodInfo);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12765_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))));
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_1);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2210* L_13 = (__this->___linkSlots_5);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_1)));
		int32_t L_14 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_1))->___Next_1);
		V_1 = L_14;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m12767_GenericMethod;
extern TypeInfo* EqualityComparer_1_t2444_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m12767_gshared (Dictionary_2_t2534 * __this, Object_t * ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m12767_init;
	if (!Dictionary_2_ContainsValue_m12767_init)
	{
		EqualityComparer_1_t2444_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2444_0_0_0);
		Dictionary_2_ContainsValue_m12767_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2444_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2444 * L_0 = (( EqualityComparer_1_t2444 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t220* L_1 = (__this->___table_4);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		int32_t L_2 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		ObjectU5BU5D_t137* L_3 = (__this->___valueSlots_7);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, V_2);
		int32_t L_4 = V_2;
		NullCheck(V_0);
		bool L_5 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), V_0, (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_4)), ___value);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t2210* L_6 = (__this->___linkSlots_5);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_6, V_2)));
		int32_t L_7 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_6, V_2))->___Next_1);
		V_2 = L_7;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0048:
	{
		Int32U5BU5D_t220* L_8 = (__this->___table_4);
		NullCheck(L_8);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m12769_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m12769_gshared (Dictionary_2_t2534 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3298* V_0 = {0};
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
		int32_t L_1 = (__this->___generation_14);
		NullCheck(___info);
		SerializationInfo_AddValue_m3879(___info, (String_t*) &_stringLiteral414, L_1, /*hidden argument*/&SerializationInfo_AddValue_m3879_MethodInfo);
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral416, L_2, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		V_0 = (KeyValuePair_2U5BU5D_t3298*)NULL;
		int32_t L_3 = (__this->___count_10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3298*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), L_4));
		(( void (*) (Dictionary_2_t2534 *, KeyValuePair_2U5BU5D_t3298*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, V_0, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_004f:
	{
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		NullCheck(___info);
		SerializationInfo_AddValue_m3879(___info, (String_t*) &_stringLiteral1408, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m3879_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1409, (Object_t *)(Object_t *)V_0, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m12771_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m12771_gshared (Dictionary_2_t2534 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3298* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t612 * L_0 = (__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t612 * L_1 = (__this->___serialization_info_13);
		NullCheck(L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m3894(L_1, (String_t*) &_stringLiteral414, /*hidden argument*/&SerializationInfo_GetInt32_m3894_MethodInfo);
		__this->___generation_14 = L_2;
		SerializationInfo_t612 * L_3 = (__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m3880(L_3, (String_t*) &_stringLiteral416, L_4, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)));
		SerializationInfo_t612 * L_6 = (__this->___serialization_info_13);
		NullCheck(L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m3894(L_6, (String_t*) &_stringLiteral1408, /*hidden argument*/&SerializationInfo_GetInt32_m3894_MethodInfo);
		V_0 = L_7;
		SerializationInfo_t612 * L_8 = (__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m3880(L_8, (String_t*) &_stringLiteral1409, L_9, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		V_1 = ((KeyValuePair_2U5BU5D_t3298*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		(( void (*) (Dictionary_2_t2534 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(__this, V_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___count_10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(((KeyValuePair_2_t2535 *)(KeyValuePair_2_t2535 *)SZArrayLdElema(V_1, V_2)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		Object_t * L_12 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(((KeyValuePair_2_t2535 *)(KeyValuePair_2_t2535 *)SZArrayLdElema(V_1, V_2)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_11, L_12);
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_00b4:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t612 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12773_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))-(int32_t)1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_2))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_2);
		int32_t L_11 = V_2;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		LinkU5BU5D_t2210* L_13 = (__this->___linkSlots_5);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_2)));
		int32_t L_14 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_13, V_2))->___Next_1);
		V_2 = L_14;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_15 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_15-(int32_t)1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t220* L_16 = (__this->___table_4);
		LinkU5BU5D_t2210* L_17 = (__this->___linkSlots_5);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_17, V_2)));
		int32_t L_18 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_17, V_2))->___Next_1);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_16, V_1)) = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2210* L_19 = (__this->___linkSlots_5);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, V_3);
		LinkU5BU5D_t2210* L_20 = (__this->___linkSlots_5);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_20, V_2)));
		int32_t L_21 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_20, V_2))->___Next_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_19, V_3)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_19, V_3))->___Next_1 = L_21;
	}

IL_00e9:
	{
		LinkU5BU5D_t2210* L_22 = (__this->___linkSlots_5);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, V_2);
		int32_t L_23 = (__this->___emptySlot_9);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, V_2))->___Next_1 = L_23;
		__this->___emptySlot_9 = V_2;
		LinkU5BU5D_t2210* L_24 = (__this->___linkSlots_5);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, V_2);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_24, V_2)));
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_24, V_2))->___HashCode_0 = 0;
		ObjectU5BU5D_t137* L_25 = (__this->___keySlots_6);
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_4));
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, V_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, V_2)) = (Object_t *)V_4;
		ObjectU5BU5D_t137* L_26 = (__this->___valueSlots_7);
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_5));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, V_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, V_2)) = (Object_t *)V_5;
		int32_t L_27 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_27+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12775_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		Object_t * L_0 = ___key;
		if (((Object_t *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___hcp_12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_2, ___key);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t220* L_4 = (__this->___table_4);
		Int32U5BU5D_t220* L_5 = (__this->___table_4);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))));
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2210* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1)));
		int32_t L_8 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, V_1))->___HashCode_0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t137* L_10 = (__this->___keySlots_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_1);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), ___key);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		ObjectU5BU5D_t137* L_13 = (__this->___valueSlots_7);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, V_1);
		int32_t L_14 = V_1;
		*___value = (*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2210* L_15 = (__this->___linkSlots_5);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, V_1);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_15, V_1)));
		int32_t L_16 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_15, V_1))->___Next_1);
		V_1 = L_16;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_2));
		*___value = V_2;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern Il2CppGenericMethod Dictionary_2_get_Values_m12777_GenericMethod;
extern "C" ValueCollection_t2537 * Dictionary_2_get_Values_m12777_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2537 * L_0 = (ValueCollection_t2537 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		(( void (*) (ValueCollection_t2537 *, Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12779_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		if (___key)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (((Object_t *)IsInst(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m140(NULL /*static, unused*/, (String_t*) &_stringLiteral1410, L_2, /*hidden argument*/&String_Concat_m140_MethodInfo);
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_4, L_3, (String_t*) &_stringLiteral401, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003a:
	{
		return ((Object_t *)Castclass(___key, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12781_gshared (Dictionary_2_t2534 * __this, Object_t * ___value, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		if (___value)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6487_MethodInfo, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((Object_t *)IsInst(___value, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m140(NULL /*static, unused*/, (String_t*) &_stringLiteral1410, L_3, /*hidden argument*/&String_Concat_m140_MethodInfo);
		ArgumentException_t522 * L_5 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_5, L_4, (String_t*) &_stringLiteral610, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_004a:
	{
		return ((Object_t *)Castclass(___value, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t2444_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12783_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2_t2535  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m12783_init;
	if (!Dictionary_2_ContainsKeyValuePair_m12783_init)
	{
		EqualityComparer_1_t2444_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2444_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m12783_init = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50), __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2444_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2444 * L_2 = (( EqualityComparer_1_t2444 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51), L_2, L_3, V_0);
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m12785_GenericMethod;
extern "C" Enumerator_t2539  Dictionary_2_GetEnumerator_m12785_gshared (Dictionary_2_t2534 * __this, MethodInfo* method)
{
	{
		Enumerator_t2539  L_0 = {0};
		(( void (*) (Enumerator_t2539 *, Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t134  Dictionary_2_U3CCopyToU3Em__0_m12787_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		DictionaryEntry_t134  L_2 = {0};
		DictionaryEntry__ctor_m3861(&L_2, ((Object_t *)L_0), ((Object_t *)L_1), /*hidden argument*/&DictionaryEntry__ctor_m3861_MethodInfo);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3695_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3696_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3299_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m12790_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m12792_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m12788_gshared (KeyValuePair_2_t2535 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		(( void (*) (KeyValuePair_2_t2535 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ___key, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (KeyValuePair_2_t2535 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, ___value, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m12789_gshared (KeyValuePair_2_t2535 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m12790_gshared (KeyValuePair_2_t2535 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		__this->___key_0 = ___value;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m12791_gshared (KeyValuePair_2_t2535 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m12792_gshared (KeyValuePair_2_t2535 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		__this->___value_1 = ___value;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m12793_GenericMethod;
extern TypeInfo* StringU5BU5D_t17_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m12793_gshared (KeyValuePair_2_t2535 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m12793_init;
	if (!KeyValuePair_2_ToString_m12793_init)
	{
		StringU5BU5D_t17_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t17_0_0_0);
		KeyValuePair_2_ToString_m12793_init = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t17* G_B2_1 = {0};
	StringU5BU5D_t17* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t17* G_B1_1 = {0};
	StringU5BU5D_t17* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t17* G_B3_2 = {0};
	StringU5BU5D_t17* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t17* G_B5_1 = {0};
	StringU5BU5D_t17* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t17* G_B4_1 = {0};
	StringU5BU5D_t17* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t17* G_B6_2 = {0};
	StringU5BU5D_t17* G_B6_3 = {0};
	{
		StringU5BU5D_t17* L_0 = ((StringU5BU5D_t17*)SZArrayNew(StringU5BU5D_t17_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral706);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral706;
		StringU5BU5D_t17* L_1 = L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_4;
		NullCheck((*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		G_B3_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t17* L_6 = G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral149);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral149;
		StringU5BU5D_t17* L_7 = L_6;
		Object_t * L_8 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_9 = L_8;
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!((Object_t *)L_9))
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_10;
		NullCheck((*(&V_1)));
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, (*(&V_1)));
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		G_B6_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t17* L_12 = G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral158);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4)) = (String_t*)(String_t*) &_stringLiteral158;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = String_Concat_m157(NULL /*static, unused*/, L_12, /*hidden argument*/&String_Concat_m157_MethodInfo);
		return L_13;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2536_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2536_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t2535  Array_InternalArray__get_Item_TisKeyValuePair_2_t2535_m20528_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2535_m20528(__this, p0, method) (( KeyValuePair_2_t2535  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2535_m20528_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12798_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2535_m20528_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12794_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12794_gshared (InternalEnumerator_1_t2536 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12795_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12795_gshared (InternalEnumerator_1_t2536 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2535  L_0 = (( KeyValuePair_2_t2535  (*) (InternalEnumerator_1_t2536 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2535  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12796_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12796_gshared (InternalEnumerator_1_t2536 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12797_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12797_gshared (InternalEnumerator_1_t2536 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2535  InternalEnumerator_1_get_Current_m12798_gshared (InternalEnumerator_1_t2536 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t2535  L_8 = (( KeyValuePair_2_t2535  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3697_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3698_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7.h"
extern TypeInfo Enumerator_t2538_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2540_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10MethodDeclarations.h"
extern Il2CppType Enumerator_t2538_0_0_0;
extern Il2CppType Transform_1_t2540_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m12810_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m12757_MethodInfo;
extern MethodInfo Transform_1__ctor_m12830_MethodInfo;
extern MethodInfo Enumerator__ctor_m12813_MethodInfo;
struct Dictionary_2_t2534;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20539_gshared (Dictionary_2_t2534 * __this, Array_t * p0, int32_t p1, Transform_1_t2540 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20539(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, Transform_1_t2540 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20539_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2534;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20538 (Dictionary_2_t2534 * __this, ObjectU5BU5D_t137* p0, int32_t p1, Transform_1_t2540 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m12811_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m12810_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12830_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20539_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20538_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12813_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m12799_gshared (ValueCollection_t2537 * __this, Dictionary_2_t2534 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		if (___dictionary)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1413, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		__this->___dictionary_0 = ___dictionary;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12800_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12800_gshared (ValueCollection_t2537 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1414, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12801_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12801_gshared (ValueCollection_t2537 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1414, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12802_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12802_gshared (ValueCollection_t2537 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2534 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		bool L_1 = (( bool (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12803_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12803_gshared (ValueCollection_t2537 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1414, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12804_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12804_gshared (ValueCollection_t2537 * __this, MethodInfo* method)
{
	{
		Enumerator_t2538  L_0 = (( Enumerator_t2538  (*) (ValueCollection_t2537 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2538  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m12805_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m12805_gshared (ValueCollection_t2537 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ObjectU5BU5D_t137* V_0 = {0};
	{
		V_0 = ((ObjectU5BU5D_t137*)IsInst(___array, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< ObjectU5BU5D_t137*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, V_0, ___index);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2534 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, ___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2534 * L_1 = (__this->___dictionary_0);
		IntPtr_t98 L_2 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2540 * L_3 = (Transform_1_t2540 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2540 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_3, NULL, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_1);
		(( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, Transform_1_t2540 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_1, ___array, ___index, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12806_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12806_gshared (ValueCollection_t2537 * __this, MethodInfo* method)
{
	{
		Enumerator_t2538  L_0 = (( Enumerator_t2538  (*) (ValueCollection_t2537 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2538  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12807_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12807_gshared (ValueCollection_t2537 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12808_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12808_gshared (ValueCollection_t2537 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m12809_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m12809_gshared (ValueCollection_t2537 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2534 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10299_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m12810_gshared (ValueCollection_t2537 * __this, ObjectU5BU5D_t137* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2534 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)___array, ___index, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2534 * L_1 = (__this->___dictionary_0);
		IntPtr_t98 L_2 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2540 * L_3 = (Transform_1_t2540 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2540 *, Object_t *, IntPtr_t98, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_3, NULL, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_1);
		(( void (*) (Dictionary_2_t2534 *, ObjectU5BU5D_t137*, int32_t, Transform_1_t2540 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_1, ___array, ___index, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2538  ValueCollection_GetEnumerator_m12811_gshared (ValueCollection_t2537 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2534 * L_0 = (__this->___dictionary_0);
		Enumerator_t2538  L_1 = {0};
		(( void (*) (Enumerator_t2538 *, Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m12812_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m12812_gshared (ValueCollection_t2537 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2534 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentValue_m12826_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m12829_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m12823_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12813_gshared (Enumerator_t2538 * __this, Dictionary_2_t2534 * ___host, MethodInfo* method)
{
	{
		NullCheck(___host);
		Enumerator_t2539  L_0 = (( Enumerator_t2539  (*) (Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(___host, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m12814_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12814_gshared (Enumerator_t2538 * __this, MethodInfo* method)
{
	{
		Enumerator_t2539 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m12815_GenericMethod;
extern "C" void Enumerator_Dispose_m12815_gshared (Enumerator_t2538 * __this, MethodInfo* method)
{
	{
		Enumerator_t2539 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m12816_GenericMethod;
extern "C" bool Enumerator_MoveNext_m12816_gshared (Enumerator_t2538 * __this, MethodInfo* method)
{
	{
		Enumerator_t2539 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m12817_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m12817_gshared (Enumerator_t2538 * __this, MethodInfo* method)
{
	{
		Enumerator_t2539 * L_0 = &(__this->___host_enumerator_0);
		NullCheck(L_0);
		KeyValuePair_2_t2535 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m12828_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m12825_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m12827_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12818_gshared (Enumerator_t2539 * __this, Dictionary_2_t2534 * ___dictionary, MethodInfo* method)
{
	{
		__this->___dictionary_0 = ___dictionary;
		NullCheck(___dictionary);
		int32_t L_0 = (___dictionary->___generation_14);
		__this->___stamp_2 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m12819_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12819_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2535  L_0 = (__this->___current_3);
		KeyValuePair_2_t2535  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12820_GenericMethod;
extern "C" DictionaryEntry_t134  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12820_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2535 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t2535 * L_3 = &(__this->___current_3);
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_5 = L_4;
		DictionaryEntry_t134  L_6 = {0};
		DictionaryEntry__ctor_m3861(&L_6, ((Object_t *)L_2), ((Object_t *)L_5), /*hidden argument*/&DictionaryEntry__ctor_m3861_MethodInfo);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12821_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12821_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12822_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12822_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12823_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___next_1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_0 = V_1;
		Dictionary_2_t2534 * L_3 = (__this->___dictionary_0);
		NullCheck(L_3);
		LinkU5BU5D_t2210* L_4 = (L_3->___linkSlots_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_0);
		NullCheck(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_4, V_0)));
		int32_t L_5 = (((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_4, V_0))->___HashCode_0);
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t2534 * L_6 = (__this->___dictionary_0);
		NullCheck(L_6);
		ObjectU5BU5D_t137* L_7 = (L_6->___keySlots_6);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_0);
		int32_t L_8 = V_0;
		Dictionary_2_t2534 * L_9 = (__this->___dictionary_0);
		NullCheck(L_9);
		ObjectU5BU5D_t137* L_10 = (L_9->___valueSlots_7);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_0);
		int32_t L_11 = V_0;
		KeyValuePair_2_t2535  L_12 = {0};
		(( void (*) (KeyValuePair_2_t2535 *, Object_t *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_12, (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_11)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_12;
		return 1;
	}

IL_0072:
	{
		int32_t L_13 = (__this->___next_1);
		Dictionary_2_t2534 * L_14 = (__this->___dictionary_0);
		NullCheck(L_14);
		int32_t L_15 = (L_14->___touchedSlots_8);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m12824_GenericMethod;
extern "C" KeyValuePair_2_t2535  Enumerator_get_Current_m12824_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2535  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12825_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2535 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12826_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2535 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12827_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2534 * L_0 = (__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t2534 * L_2 = (__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___generation_14);
		int32_t L_4 = (__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t784 * L_5 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_5, (String_t*) &_stringLiteral1411, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12828_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1412, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12829_gshared (Enumerator_t2539 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2534 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12830_gshared (Transform_1_t2540 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m12831_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m12831_gshared (Transform_1_t2540 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12831((Transform_1_t2540 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m12832_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m12832_gshared (Transform_1_t2540 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m12833_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m12833_gshared (Transform_1_t2540 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12834_gshared (Transform_1_t2533 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m12835_GenericMethod;
extern "C" DictionaryEntry_t134  Transform_1_Invoke_m12835_gshared (Transform_1_t2533 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12835((Transform_1_t2533 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t134  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t134  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t134  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m12836_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m12836_gshared (Transform_1_t2533 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m12837_GenericMethod;
extern "C" DictionaryEntry_t134  Transform_1_EndInvoke_m12837_gshared (Transform_1_t2533 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t134 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12838_gshared (Transform_1_t2541 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m12839_GenericMethod;
extern "C" KeyValuePair_2_t2535  Transform_1_Invoke_m12839_gshared (Transform_1_t2541 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12839((Transform_1_t2541 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2535  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2535  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2535  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m12840_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m12840_gshared (Transform_1_t2541 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m12841_GenericMethod;
extern "C" KeyValuePair_2_t2535  Transform_1_EndInvoke_m12841_gshared (Transform_1_t2541 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2535 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m12844_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m12844_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12842_gshared (ShimEnumerator_t2542 * __this, Dictionary_2_t2534 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		NullCheck(___host);
		Enumerator_t2539  L_0 = (( Enumerator_t2539  (*) (Dictionary_2_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(___host, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_0;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m12843_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m12843_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method)
{
	{
		Enumerator_t2539 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t134  ShimEnumerator_get_Entry_m12844_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method)
{
	{
		Enumerator_t2539  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2539  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t134  L_3 = (DictionaryEntry_t134 )InterfaceFuncInvoker0< DictionaryEntry_t134  >::Invoke(&IDictionaryEnumerator_get_Entry_m10302_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m12845_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m12845_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2535  V_0 = {0};
	{
		Enumerator_t2539 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2535  L_1 = (( KeyValuePair_2_t2535  (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m12846_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m12846_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2535  V_0 = {0};
	{
		Enumerator_t2539 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2535  L_1 = (( KeyValuePair_2_t2535  (*) (Enumerator_t2539 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m12847_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m12847_gshared (ShimEnumerator_t2542 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t134  L_0 = (DictionaryEntry_t134 )VirtFuncInvoker0< DictionaryEntry_t134  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t134  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t134_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3699_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3700_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3297_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m12850_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m12852_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.String>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.String>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.String>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.String>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2544_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2544_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Int32)
extern "C" KeyValuePair_2_t2543  Array_InternalArray__get_Item_TisKeyValuePair_2_t2543_m20545_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2543_m20545(__this, p0, method) (( KeyValuePair_2_t2543  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2543_m20545_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12858_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2543_m20545_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12854_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12854_gshared (InternalEnumerator_1_t2544 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12855_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12855_gshared (InternalEnumerator_1_t2544 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2543  L_0 = (( KeyValuePair_2_t2543  (*) (InternalEnumerator_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2543  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12856_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12856_gshared (InternalEnumerator_1_t2544 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12857_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12857_gshared (InternalEnumerator_1_t2544 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current()
extern "C" KeyValuePair_2_t2543  InternalEnumerator_1_get_Current_m12858_gshared (InternalEnumerator_1_t2544 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t2543  L_8 = (( KeyValuePair_2_t2543  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3701_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3702_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10.h"
extern TypeInfo Enumerator_t2546_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2548_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12MethodDeclarations.h"
extern Il2CppType Enumerator_t2546_0_0_0;
extern Il2CppType Transform_1_t2548_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m12870_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m12756_MethodInfo;
extern MethodInfo Transform_1__ctor_m12890_MethodInfo;
extern MethodInfo Enumerator__ctor_m12873_MethodInfo;
struct Dictionary_2_t10;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m20556(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t10 *, Array_t *, int32_t, Transform_1_t2548 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20539_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t10;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m20557 (Dictionary_2_t10 * __this, StringU5BU5D_t17* p0, int32_t p1, Transform_1_t2548 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m12766_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m12871_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m12870_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m12756_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m12890_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m20556_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m20557_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12873_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentValue_m12886_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m12784_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m12889_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m12883_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m12888_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m12885_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m12887_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.String>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2550_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m12899_GenericMethod;
extern "C" void Transform_1__ctor_m12899_gshared (Transform_1_t2550 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m12901_GenericMethod;
extern "C" KeyValuePair_2_t2543  Transform_1_Invoke_m12901_gshared (Transform_1_t2550 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12901((Transform_1_t2550 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2543  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2543  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2543  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m12903_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m12903_gshared (Transform_1_t2550 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m12905_GenericMethod;
extern "C" KeyValuePair_2_t2543  Transform_1_EndInvoke_m12905_gshared (Transform_1_t2550 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2543 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m12908_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m12884_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m12908_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3703_il2cpp_TypeInfo;

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2552_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37MethodDeclarations.h"

extern TypeInfo Vector2_t32_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2552_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
extern "C" Vector2_t32  Array_InternalArray__get_Item_TisVector2_t32_m20565_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector2_t32_m20565(__this, p0, method) (( Vector2_t32  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisVector2_t32_m20565_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12916_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisVector2_t32_m20565_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12912_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12912_gshared (InternalEnumerator_1_t2552 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12913_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12913_gshared (InternalEnumerator_1_t2552 * __this, MethodInfo* method)
{
	{
		Vector2_t32  L_0 = (( Vector2_t32  (*) (InternalEnumerator_1_t2552 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector2_t32  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12914_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12914_gshared (InternalEnumerator_1_t2552 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12915_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12915_gshared (InternalEnumerator_1_t2552 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
extern "C" Vector2_t32  InternalEnumerator_1_get_Current_m12916_gshared (InternalEnumerator_1_t2552 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		Vector2_t32  L_8 = (( Vector2_t32  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3704_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Remove(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
