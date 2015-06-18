#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "Boo_Lang_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t852_il2cpp_TypeInfo;
// <Module>
#include "Boo_Lang_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_Builtins.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Builtins_t853_il2cpp_TypeInfo;
// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_BuiltinsMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo StringBuilder_t154_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t244_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t124_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t135_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t42_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern MethodInfo StringBuilder__ctor_m714_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m4016_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m563_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m560_MethodInfo;
extern MethodInfo StringBuilder_Append_m3887_MethodInfo;
extern MethodInfo StringBuilder_Append_m3908_MethodInfo;
extern MethodInfo IDisposable_Dispose_m564_MethodInfo;
extern MethodInfo StringBuilder_ToString_m716_MethodInfo;


// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern MethodInfo Builtins_join_m4235_MethodInfo;
extern "C" String_t* Builtins_join_m4235 (Object_t * __this /* static, unused */, Object_t * ___enumerable, String_t* ___separator, MethodInfo* method)
{
	StringBuilder_t154 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		StringBuilder_t154 * L_0 = (StringBuilder_t154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t154_il2cpp_TypeInfo));
		StringBuilder__ctor_m714(L_0, /*hidden argument*/&StringBuilder__ctor_m714_MethodInfo);
		V_0 = L_0;
		NullCheck(___enumerable);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m4016_MethodInfo, ___enumerable);
		V_1 = L_1;
		V_2 = ((Object_t *)IsInst(V_1, InitializedTypeInfo(&IDisposable_t135_il2cpp_TypeInfo)));
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			NullCheck(V_1);
			bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m563_MethodInfo, V_1);
			if (!L_2)
			{
				goto IL_0051;
			}
		}

IL_001f:
		{
			NullCheck(V_1);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m560_MethodInfo, V_1);
			NullCheck(V_0);
			StringBuilder_Append_m3887(V_0, L_3, /*hidden argument*/&StringBuilder_Append_m3887_MethodInfo);
			goto IL_0046;
		}

IL_0031:
		{
			NullCheck(V_0);
			StringBuilder_Append_m3908(V_0, ___separator, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
			NullCheck(V_1);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m560_MethodInfo, V_1);
			NullCheck(V_0);
			StringBuilder_Append_m3887(V_0, L_4, /*hidden argument*/&StringBuilder_Append_m3887_MethodInfo);
		}

IL_0046:
		{
			NullCheck(V_1);
			bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m563_MethodInfo, V_1);
			if (L_5)
			{
				goto IL_0031;
			}
		}

IL_0051:
		{
			// IL_0051: leave IL_0063
			leaveInstructions[0] = 0x63; // 1
			THROW_SENTINEL(IL_0063);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0056;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0056;
	}

IL_0056:
	{ // begin finally (depth: 1)
		{
			if (!V_2)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			NullCheck(V_2);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m564_MethodInfo, V_2);
		}

IL_0062:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x63:
					goto IL_0063;
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

IL_0063:
	{
		NullCheck(V_0);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m716_MethodInfo, V_0);
		return L_6;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispatcherFactory_t859_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCacheMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispatcher.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern MethodInfo DispatcherFactory__ctor_m4236_MethodInfo;
extern "C" void DispatcherFactory__ctor_m4236 (DispatcherFactory_t859 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern MethodInfo DispatcherFactory_Invoke_m4237_MethodInfo;
extern "C" Dispatcher_t858 * DispatcherFactory_Invoke_m4237 (DispatcherFactory_t859 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DispatcherFactory_Invoke_m4237((DispatcherFactory_t859 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Dispatcher_t858 * (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Dispatcher_t858 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern TypeInfo Dispatcher_t858_il2cpp_TypeInfo;
extern "C" Dispatcher_t858 * pinvoke_delegate_wrapper_DispatcherFactory_t859(Il2CppObject* delegate)
{
	typedef methodPointerType (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	methodPointerType _return_value = _il2cpp_pinvoke_func();
	Dispatcher_t858 * __return_value_unmarshaled = { 0 };
	__return_value_unmarshaled = il2cpp_codegen_marshal_function_ptr_to_delegate<Dispatcher_t858>(_return_value, &Dispatcher_t858_il2cpp_TypeInfo);

	return __return_value_unmarshaled;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DispatcherFactory_BeginInvoke_m4238_MethodInfo;
extern "C" Object_t * DispatcherFactory_BeginInvoke_m4238 (DispatcherFactory_t859 * __this, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern MethodInfo DispatcherFactory_EndInvoke_m4239_MethodInfo;
extern "C" Dispatcher_t858 * DispatcherFactory_EndInvoke_m4239 (DispatcherFactory_t859 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Dispatcher_t858 *)__result;
}
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispatcherCache_t861_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0MethodDeclarations.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
extern TypeInfo DispatcherKey_t862_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t860_il2cpp_TypeInfo;
extern TypeInfo Dispatcher_t858_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKeyMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern Il2CppType Dictionary_2_t860_0_0_0;
extern MethodInfo Object__ctor_m127_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m4282_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m4283_MethodInfo;
extern MethodInfo Monitor_Enter_m3898_MethodInfo;
extern MethodInfo Dictionary_2_Add_m4284_MethodInfo;
extern MethodInfo Monitor_Exit_m3899_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m4282_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m4283_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m4284_GenericMethod;


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern MethodInfo DispatcherCache__ctor_m4240_MethodInfo;
extern "C" void DispatcherCache__ctor_m4240 (DispatcherCache_t861 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern MethodInfo DispatcherCache__cctor_m4241_MethodInfo;
extern TypeInfo* Dictionary_2_t860_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4282_MethodInfo_var;
extern "C" void DispatcherCache__cctor_m4241 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool DispatcherCache__cctor_m4241_init;
	if (!DispatcherCache__cctor_m4241_init)
	{
		Dictionary_2_t860_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t860_0_0_0);
		Dictionary_2__ctor_m4282_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4282_GenericMethod);
		DispatcherCache__cctor_m4241_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherKey_t862_il2cpp_TypeInfo));
		Dictionary_2_t860 * L_0 = (Dictionary_2_t860 *)il2cpp_codegen_object_new (Dictionary_2_t860_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4282(L_0, (((DispatcherKey_t862_StaticFields*)InitializedTypeInfo(&DispatcherKey_t862_il2cpp_TypeInfo)->static_fields)->___EqualityComparer_0), /*hidden argument*/Dictionary_2__ctor_m4282_MethodInfo_var);
		((DispatcherCache_t861_StaticFields*)InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo)->static_fields)->____cache_0 = L_0;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern MethodInfo DispatcherCache_Get_m4242_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m4283_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4284_MethodInfo_var;
extern "C" Dispatcher_t858 * DispatcherCache_Get_m4242 (DispatcherCache_t861 * __this, DispatcherKey_t862 * ___key, DispatcherFactory_t859 * ___factory, MethodInfo* method)
{
	static bool DispatcherCache_Get_m4242_init;
	if (!DispatcherCache_Get_m4242_init)
	{
		Dictionary_2_TryGetValue_m4283_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4283_GenericMethod);
		Dictionary_2_Add_m4284_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4284_GenericMethod);
		DispatcherCache_Get_m4242_init = true;
	}
	Dispatcher_t858 * V_0 = {0};
	Dictionary_2_t860 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo));
		NullCheck((((DispatcherCache_t861_StaticFields*)InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo)->static_fields)->____cache_0));
		bool L_0 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t862 *, Dispatcher_t858 ** >::Invoke(Dictionary_2_TryGetValue_m4283_MethodInfo_var, (((DispatcherCache_t861_StaticFields*)InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo)->static_fields)->____cache_0), ___key, (&V_0));
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo));
		V_1 = (((DispatcherCache_t861_StaticFields*)InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo)->static_fields)->____cache_0);
		Monitor_Enter_m3898(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo));
			NullCheck((((DispatcherCache_t861_StaticFields*)InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo)->static_fields)->____cache_0));
			bool L_1 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t862 *, Dispatcher_t858 ** >::Invoke(Dictionary_2_TryGetValue_m4283_MethodInfo_var, (((DispatcherCache_t861_StaticFields*)InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo)->static_fields)->____cache_0), ___key, (&V_0));
			if (L_1)
			{
				goto IL_0043;
			}
		}

IL_0030:
		{
			NullCheck(___factory);
			Dispatcher_t858 * L_2 = (Dispatcher_t858 *)VirtFuncInvoker0< Dispatcher_t858 * >::Invoke(&DispatcherFactory_Invoke_m4237_MethodInfo, ___factory);
			V_0 = L_2;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo));
			NullCheck((((DispatcherCache_t861_StaticFields*)InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo)->static_fields)->____cache_0));
			VirtActionInvoker2< DispatcherKey_t862 *, Dispatcher_t858 * >::Invoke(Dictionary_2_Add_m4284_MethodInfo_var, (((DispatcherCache_t861_StaticFields*)InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo)->static_fields)->____cache_0), ___key, V_0);
		}

IL_0043:
		{
			// IL_0043: leave IL_004f
			leaveInstructions[0] = 0x4F; // 1
			THROW_SENTINEL(IL_004f);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0048;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0048;
	}

IL_0048:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x4F:
				goto IL_004f;
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

IL_004f:
	{
		return V_0;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo _EqualityComparer_t863_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo Type_GetHashCode_m4285_MethodInfo;
extern MethodInfo String_GetHashCode_m3889_MethodInfo;
extern MethodInfo String_op_Inequality_m2590_MethodInfo;


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
extern MethodInfo _EqualityComparer__ctor_m4243_MethodInfo;
extern "C" void _EqualityComparer__ctor_m4243 (_EqualityComparer_t863 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern MethodInfo _EqualityComparer_GetHashCode_m4244_MethodInfo;
extern "C" int32_t _EqualityComparer_GetHashCode_m4244 (_EqualityComparer_t863 * __this, DispatcherKey_t862 * ___key, MethodInfo* method)
{
	{
		NullCheck(___key);
		Type_t * L_0 = (___key->____type_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Type_GetHashCode_m4285_MethodInfo, L_0);
		NullCheck(___key);
		String_t* L_2 = (___key->____name_2);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3889_MethodInfo, L_2);
		NullCheck(___key);
		TypeU5BU5D_t138* L_4 = (___key->____arguments_3);
		NullCheck(L_4);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
	}
}
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern MethodInfo _EqualityComparer_Equals_m4245_MethodInfo;
extern "C" bool _EqualityComparer_Equals_m4245 (_EqualityComparer_t863 * __this, DispatcherKey_t862 * ___x, DispatcherKey_t862 * ___y, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		NullCheck(___x);
		Type_t * L_0 = (___x->____type_1);
		NullCheck(___y);
		Type_t * L_1 = (___y->____type_1);
		if ((((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		NullCheck(___x);
		TypeU5BU5D_t138* L_2 = (___x->____arguments_3);
		NullCheck(L_2);
		NullCheck(___y);
		TypeU5BU5D_t138* L_3 = (___y->____arguments_3);
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		NullCheck(___x);
		String_t* L_4 = (___x->____name_2);
		NullCheck(___y);
		String_t* L_5 = (___y->____name_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Inequality_m2590(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&String_op_Inequality_m2590_MethodInfo);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0049:
	{
		NullCheck(___x);
		TypeU5BU5D_t138* L_7 = (___x->____arguments_3);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_0);
		int32_t L_8 = V_0;
		NullCheck(___y);
		TypeU5BU5D_t138* L_9 = (___y->____arguments_3);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_0);
		int32_t L_10 = V_0;
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_7, L_8))) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_9, L_10)))))
		{
			goto IL_0060;
		}
	}
	{
		return 0;
	}

IL_0060:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0064:
	{
		NullCheck(___x);
		TypeU5BU5D_t138* L_11 = (___x->____arguments_3);
		NullCheck(L_11);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
extern MethodInfo DispatcherKey__ctor_m4246_MethodInfo;
extern "C" void DispatcherKey__ctor_m4246 (DispatcherKey_t862 * __this, Type_t * ___type, String_t* ___name, TypeU5BU5D_t138* ___arguments, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->____type_1 = ___type;
		__this->____name_2 = ___name;
		__this->____arguments_3 = ___arguments;
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.cctor()
extern MethodInfo DispatcherKey__cctor_m4247_MethodInfo;
extern "C" void DispatcherKey__cctor_m4247 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		_EqualityComparer_t863 * L_0 = (_EqualityComparer_t863 *)il2cpp_codegen_object_new (InitializedTypeInfo(&_EqualityComparer_t863_il2cpp_TypeInfo));
		_EqualityComparer__ctor_m4243(L_0, /*hidden argument*/&_EqualityComparer__ctor_m4243_MethodInfo);
		((DispatcherKey_t862_StaticFields*)InitializedTypeInfo(&DispatcherKey_t862_il2cpp_TypeInfo)->static_fields)->___EqualityComparer_0 = L_0;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NumericPromotions_t865_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotioMethodDeclarations.h"



// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistry.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExtensionRegistry_t867_il2cpp_TypeInfo;
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistryMethodDeclarations.h"

// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_gen.h"
extern TypeInfo List_1_t866_il2cpp_TypeInfo;
// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_genMethodDeclarations.h"
extern Il2CppType List_1_t866_0_0_0;
extern MethodInfo List_1__ctor_m4286_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m4286_GenericMethod;


// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
extern MethodInfo ExtensionRegistry__ctor_m4248_MethodInfo;
extern TypeInfo* List_1_t866_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m4286_MethodInfo_var;
extern "C" void ExtensionRegistry__ctor_m4248 (ExtensionRegistry_t867 * __this, MethodInfo* method)
{
	static bool ExtensionRegistry__ctor_m4248_init;
	if (!ExtensionRegistry__ctor_m4248_init)
	{
		List_1_t866_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t866_0_0_0);
		List_1__ctor_m4286_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4286_GenericMethod);
		ExtensionRegistry__ctor_m4248_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t866_il2cpp_TypeInfo_var);
		List_1_t866 * L_0 = (List_1_t866 *)il2cpp_codegen_object_new (List_1_t866_il2cpp_TypeInfo_var);
		List_1__ctor_m4286(L_0, /*hidden argument*/List_1__ctor_m4286_MethodInfo_var);
		__this->____extensions_0 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m127(L_1, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->____classLock_1 = L_1;
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
extern MethodInfo ExtensionRegistry_get_Extensions_m4249_MethodInfo;
extern "C" Object_t* ExtensionRegistry_get_Extensions_m4249 (ExtensionRegistry_t867 * __this, MethodInfo* method)
{
	{
		List_1_t866 * L_0 = (__this->____extensions_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICoercible_t877_il2cpp_TypeInfo;



// System.Object Boo.Lang.Runtime.ICoercible::Coerce(System.Type)
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMet.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t872_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMetMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
extern TypeInfo IEnumerator_1_t873_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t218_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t868_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t869_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t870_il2cpp_TypeInfo;
extern TypeInfo MemberTypes_t878_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t871_il2cpp_TypeInfo;
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
extern Il2CppType IEnumerable_1_t868_0_0_0;
extern Il2CppType IEnumerator_1_t869_0_0_0;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m4254_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m4287_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m4250_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m4288_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4289_MethodInfo;
extern MethodInfo MemberInfo_get_MemberType_m4290_MethodInfo;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m4288_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4289_GenericMethod;


// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::.ctor()
extern "C" void U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m4250 (U3CGetExtensionMethodsU3Ec__IteratorC_t872 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m4251_MethodInfo;
extern "C" MethodInfo_t871 * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m4251 (U3CGetExtensionMethodsU3Ec__IteratorC_t872 * __this, MethodInfo* method)
{
	{
		MethodInfo_t871 * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m4252_MethodInfo;
extern "C" Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m4252 (U3CGetExtensionMethodsU3Ec__IteratorC_t872 * __this, MethodInfo* method)
{
	{
		MethodInfo_t871 * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Collections.IEnumerator Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m4253_MethodInfo;
extern "C" Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m4253 (U3CGetExtensionMethodsU3Ec__IteratorC_t872 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m4254_MethodInfo, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
extern "C" Object_t* U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m4254 (U3CGetExtensionMethodsU3Ec__IteratorC_t872 * __this, MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___$PC_2);
		int32_t L_1 = Interlocked_CompareExchange_m4287(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/&Interlocked_CompareExchange_m4287_MethodInfo);
		if ((((uint32_t)L_1) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t872 * L_2 = (U3CGetExtensionMethodsU3Ec__IteratorC_t872 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetExtensionMethodsU3Ec__IteratorC_t872_il2cpp_TypeInfo));
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m4250(L_2, /*hidden argument*/&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m4250_MethodInfo);
		return L_2;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::MoveNext()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m4255_MethodInfo;
extern MethodInfo* IEnumerable_1_GetEnumerator_m4288_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m4289_MethodInfo_var;
extern "C" bool U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m4255 (U3CGetExtensionMethodsU3Ec__IteratorC_t872 * __this, MethodInfo* method)
{
	static bool U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m4255_init;
	if (!U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m4255_init)
	{
		IEnumerable_1_GetEnumerator_m4288_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m4288_GenericMethod);
		IEnumerator_1_get_Current_m4289_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m4289_GenericMethod);
		U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m4255_init = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___$PC_2);
		V_0 = L_0;
		__this->___$PC_2 = (-1);
		V_1 = 0;
		if (V_0 == 0)
		{
			goto IL_0023;
		}
		if (V_0 == 1)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c2;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		NullCheck((((RuntimeServices_t218_StaticFields*)InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo)->static_fields)->____extensions_3));
		Object_t* L_1 = ExtensionRegistry_get_Extensions_m4249((((RuntimeServices_t218_StaticFields*)InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo)->static_fields)->____extensions_3), /*hidden argument*/&ExtensionRegistry_get_Extensions_m4249_MethodInfo);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m4288_MethodInfo_var, L_1);
		__this->___U3C$s_49U3E__0_0 = L_2;
		V_0 = ((int32_t)-3);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			if (((int32_t)((int32_t)V_0-(int32_t)1)) == 0)
			{
				goto IL_008d;
			}
		}

IL_0047:
		{
			goto IL_008d;
		}

IL_004c:
		{
			Object_t* L_3 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_3);
			MemberInfo_t870 * L_4 = (MemberInfo_t870 *)InterfaceFuncInvoker0< MemberInfo_t870 * >::Invoke(IEnumerator_1_get_Current_m4289_MethodInfo_var, L_3);
			__this->___U3CmemberU3E__1_1 = L_4;
			MemberInfo_t870 * L_5 = (__this->___U3CmemberU3E__1_1);
			NullCheck(L_5);
			int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MemberInfo_get_MemberType_m4290_MethodInfo, L_5);
			if ((((uint32_t)L_6) != ((uint32_t)8)))
			{
				goto IL_008d;
			}
		}

IL_006e:
		{
			MemberInfo_t870 * L_7 = (__this->___U3CmemberU3E__1_1);
			__this->___$current_3 = ((MethodInfo_t871 *)Castclass(L_7, InitializedTypeInfo(&MethodInfo_t871_il2cpp_TypeInfo)));
			__this->___$PC_2 = 1;
			V_1 = 1;
			// IL_0088: leave IL_00c4
			leaveInstructions[0] = 0xC4; // 1
			THROW_SENTINEL(IL_00c4);
			// finally target depth: 1
		}

IL_008d:
		{
			Object_t* L_8 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m563_MethodInfo, L_8);
			if (L_9)
			{
				goto IL_004c;
			}
		}

IL_009d:
		{
			// IL_009d: leave IL_00bb
			leaveInstructions[0] = 0xBB; // 1
			THROW_SENTINEL(IL_00bb);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00a2;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_00a2;
	}

IL_00a2:
	{ // begin finally (depth: 1)
		{
			if (!V_1)
			{
				goto IL_00a6;
			}
		}

IL_00a5:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC4:
					goto IL_00c4;
				case 0xBB:
					goto IL_00bb;
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

IL_00a6:
		{
			Object_t* L_10 = (__this->___U3C$s_49U3E__0_0);
			if (L_10)
			{
				goto IL_00af;
			}
		}

IL_00ae:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC4:
					goto IL_00c4;
				case 0xBB:
					goto IL_00bb;
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

IL_00af:
		{
			Object_t* L_11 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m564_MethodInfo, L_11);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC4:
					goto IL_00c4;
				case 0xBB:
					goto IL_00bb;
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

IL_00bb:
	{
		__this->___$PC_2 = (-1);
	}

IL_00c2:
	{
		return 0;
	}

IL_00c4:
	{
		return 1;
	}
	// Dead block : IL_00c6: ldloc.2
}
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Dispose()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m4256_MethodInfo;
extern "C" void U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m4256 (U3CGetExtensionMethodsU3Ec__IteratorC_t872 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___$PC_2);
		V_0 = L_0;
		__this->___$PC_2 = (-1);
		if (V_0 == 0)
		{
			goto IL_003b;
		}
		if (V_0 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// IL_0021: leave IL_003b
		leaveInstructions[0] = 0x3B; // 1
		THROW_SENTINEL(IL_003b);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0026;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0026;
	}

IL_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_1 = (__this->___U3C$s_49U3E__0_0);
			if (L_1)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
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

IL_002f:
		{
			Object_t* L_2 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_2);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m564_MethodInfo, L_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
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

IL_003b:
	{
		return;
	}
}
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__Ano.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t874_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__AnoMethodDeclarations.h"

extern MethodInfo RuntimeServices_CreateCoerceDispatcher_m4264_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::.ctor()
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D__ctor_m4257_MethodInfo;
extern "C" void U3CCoerceU3Ec__AnonStorey1D__ctor_m4257 (U3CCoerceU3Ec__AnonStorey1D_t874 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::<>m__15()
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m4258_MethodInfo;
extern "C" Dispatcher_t858 * U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m4258 (U3CCoerceU3Ec__AnonStorey1D_t874 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___value_0);
		Type_t * L_1 = (__this->___toType_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		Dispatcher_t858 * L_2 = RuntimeServices_CreateCoerceDispatcher_m4264(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&RuntimeServices_CreateCoerceDispatcher_m4264_MethodInfo);
		return L_2;
	}
}
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitCon.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t875_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitConMethodDeclarations.h"

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
extern TypeInfo ObjectU5BU5D_t137_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t879_il2cpp_TypeInfo;
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t137_0_0_0;
extern MethodInfo MethodBase_Invoke_m4291_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::.ctor()
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m4259_MethodInfo;
extern "C" void U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m4259 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t875 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::<>m__16(System.Object,System.Object[])
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m4260_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" Object_t * U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m4260 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t875 * __this, Object_t * ___target, ObjectU5BU5D_t137* ___args, MethodInfo* method)
{
	static bool U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m4260_init;
	if (!U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m4260_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m4260_init = true;
	}
	{
		MethodInfo_t871 * L_0 = (__this->___method_0);
		ObjectU5BU5D_t137* L_1 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, ___target);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)___target;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t137* >::Invoke(&MethodBase_Invoke_m4291_MethodInfo, L_0, NULL, L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
extern TypeInfo TypeU5BU5D_t138_il2cpp_TypeInfo;
extern TypeInfo TypeCode_t880_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t522_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t59_il2cpp_TypeInfo;
extern TypeInfo Decimal_t881_il2cpp_TypeInfo;
extern TypeInfo IFormatProvider_t882_il2cpp_TypeInfo;
extern TypeInfo Double_t243_il2cpp_TypeInfo;
extern TypeInfo Single_t57_il2cpp_TypeInfo;
extern TypeInfo UInt64_t883_il2cpp_TypeInfo;
extern TypeInfo Int64_t147_il2cpp_TypeInfo;
extern TypeInfo UInt32_t884_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t885_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t886_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t876_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t887_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t888_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern Il2CppType RuntimeServices_t218_0_0_0;
extern Il2CppType TypeU5BU5D_t138_0_0_0;
extern Il2CppType Dispatcher_t858_0_0_0;
extern Il2CppType NumericPromotions_t865_0_0_0;
extern Il2CppType IEnumerable_1_t876_0_0_0;
extern Il2CppType IEnumerator_1_t873_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo Object_GetType_m2357_MethodInfo;
extern MethodInfo RuntimeServices_GetDispatcher_m4262_MethodInfo;
extern MethodInfo Dispatcher_Invoke_m4279_MethodInfo;
extern MethodInfo Type_IsInstanceOfType_m4292_MethodInfo;
extern MethodInfo RuntimeServices_IdentityDispatcher_m4269_MethodInfo;
extern MethodInfo Dispatcher__ctor_m4278_MethodInfo;
extern MethodInfo RuntimeServices_CoercibleDispatcher_m4268_MethodInfo;
extern MethodInfo RuntimeServices_IsPromotableNumeric_m4266_MethodInfo;
extern MethodInfo RuntimeServices_EmitPromotionDispatcher_m4265_MethodInfo;
extern MethodInfo RuntimeServices_FindImplicitConversionOperator_m4275_MethodInfo;
extern MethodInfo RuntimeServices_EmitImplicitConversionDispatcher_m4267_MethodInfo;
extern MethodInfo Type_GetTypeCode_m4293_MethodInfo;
extern MethodInfo String_Concat_m595_MethodInfo;
extern MethodInfo Type_GetMethod_m4294_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m4295_MethodInfo;
extern MethodInfo RuntimeServices_IsPromotableNumeric_m4274_MethodInfo;
extern MethodInfo ICoercible_Coerce_m4296_MethodInfo;
extern MethodInfo String_Concat_m140_MethodInfo;
extern MethodInfo Object_Equals_m225_MethodInfo;
extern MethodInfo RuntimeServices_IsNumeric_m4270_MethodInfo;
extern MethodInfo RuntimeServices_EqualityOperator_m4273_MethodInfo;
extern MethodInfo RuntimeServices_ArrayEqualityImpl_m4271_MethodInfo;
extern MethodInfo Array_get_Rank_m3872_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2758_MethodInfo;
extern MethodInfo Array_get_Length_m947_MethodInfo;
extern MethodInfo Array_GetValue_m4297_MethodInfo;
extern MethodInfo RuntimeServices_EqualityOperator_m960_MethodInfo;
extern MethodInfo RuntimeServices_GetConvertTypeCode_m4272_MethodInfo;
extern MethodInfo IConvertible_ToDecimal_m4298_MethodInfo;
extern MethodInfo Decimal_op_Equality_m4299_MethodInfo;
extern MethodInfo IConvertible_ToDouble_m4300_MethodInfo;
extern MethodInfo IConvertible_ToSingle_m4301_MethodInfo;
extern MethodInfo IConvertible_ToUInt64_m4302_MethodInfo;
extern MethodInfo IConvertible_ToInt64_m4303_MethodInfo;
extern MethodInfo IConvertible_ToUInt32_m4304_MethodInfo;
extern MethodInfo IConvertible_ToInt32_m4305_MethodInfo;
extern MethodInfo Type_GetMethods_m4306_MethodInfo;
extern MethodInfo RuntimeServices_FindImplicitConversionMethod_m4277_MethodInfo;
extern MethodInfo RuntimeServices_GetExtensionMethods_m4276_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m4307_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4308_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m4309_MethodInfo;
extern MethodInfo MethodInfo_get_ReturnType_m4310_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m4311_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m4312_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4313_MethodInfo;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m4307_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4308_GenericMethod;


// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern MethodInfo RuntimeServices__cctor_m4261_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" void RuntimeServices__cctor_m4261 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool RuntimeServices__cctor_m4261_init;
	if (!RuntimeServices__cctor_m4261_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		RuntimeServices__cctor_m4261_init = true;
	}
	{
		((RuntimeServices_t218_StaticFields*)InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo)->static_fields)->___NoArguments_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 0));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&RuntimeServices_t218_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		((RuntimeServices_t218_StaticFields*)InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo)->static_fields)->___RuntimeServicesType_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo));
		DispatcherCache_t861 * L_1 = (DispatcherCache_t861 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherCache_t861_il2cpp_TypeInfo));
		DispatcherCache__ctor_m4240(L_1, /*hidden argument*/&DispatcherCache__ctor_m4240_MethodInfo);
		((RuntimeServices_t218_StaticFields*)InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo)->static_fields)->____cache_2 = L_1;
		ExtensionRegistry_t867 * L_2 = (ExtensionRegistry_t867 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtensionRegistry_t867_il2cpp_TypeInfo));
		ExtensionRegistry__ctor_m4248(L_2, /*hidden argument*/&ExtensionRegistry__ctor_m4248_MethodInfo);
		((RuntimeServices_t218_StaticFields*)InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo)->static_fields)->____extensions_3 = L_2;
		bool L_3 = 1;
		Object_t * L_4 = Box(InitializedTypeInfo(&Boolean_t44_il2cpp_TypeInfo), &L_3);
		((RuntimeServices_t218_StaticFields*)InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo)->static_fields)->___True_4 = L_4;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" Dispatcher_t858 * RuntimeServices_GetDispatcher_m4262 (Object_t * __this /* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t138* ___cacheKeyTypes, DispatcherFactory_t859 * ___factory, MethodInfo* method)
{
	Type_t * V_0 = {0};
	DispatcherKey_t862 * V_1 = {0};
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	{
		Type_t * L_0 = ((Type_t *)IsInst(___target, InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)));
		G_B1_0 = L_0;
		if (L_0)
		{
			G_B2_0 = L_0;
			goto IL_0013;
		}
	}
	{
		NullCheck(___target);
		Type_t * L_1 = Object_GetType_m2357(___target, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		G_B2_0 = L_1;
	}

IL_0013:
	{
		V_0 = G_B2_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherKey_t862_il2cpp_TypeInfo));
		DispatcherKey_t862 * L_2 = (DispatcherKey_t862 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherKey_t862_il2cpp_TypeInfo));
		DispatcherKey__ctor_m4246(L_2, V_0, ___cacheKeyName, ___cacheKeyTypes, /*hidden argument*/&DispatcherKey__ctor_m4246_MethodInfo);
		V_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		NullCheck((((RuntimeServices_t218_StaticFields*)InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo)->static_fields)->____cache_2));
		Dispatcher_t858 * L_3 = DispatcherCache_Get_m4242((((RuntimeServices_t218_StaticFields*)InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo)->static_fields)->____cache_2), V_1, ___factory, /*hidden argument*/&DispatcherCache_Get_m4242_MethodInfo);
		return L_3;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern MethodInfo RuntimeServices_Coerce_m4263_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t138_il2cpp_TypeInfo_var;
extern "C" Object_t * RuntimeServices_Coerce_m4263 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method)
{
	static bool RuntimeServices_Coerce_m4263_init;
	if (!RuntimeServices_Coerce_m4263_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		TypeU5BU5D_t138_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t138_0_0_0);
		RuntimeServices_Coerce_m4263_init = true;
	}
	ObjectU5BU5D_t137* V_0 = {0};
	Dispatcher_t858 * V_1 = {0};
	U3CCoerceU3Ec__AnonStorey1D_t874 * V_2 = {0};
	{
		U3CCoerceU3Ec__AnonStorey1D_t874 * L_0 = (U3CCoerceU3Ec__AnonStorey1D_t874 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CCoerceU3Ec__AnonStorey1D_t874_il2cpp_TypeInfo));
		U3CCoerceU3Ec__AnonStorey1D__ctor_m4257(L_0, /*hidden argument*/&U3CCoerceU3Ec__AnonStorey1D__ctor_m4257_MethodInfo);
		V_2 = L_0;
		NullCheck(V_2);
		V_2->___value_0 = ___value;
		NullCheck(V_2);
		V_2->___toType_1 = ___toType;
		NullCheck(V_2);
		Object_t * L_1 = (V_2->___value_0);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		return NULL;
	}

IL_0021:
	{
		ObjectU5BU5D_t137* L_2 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 1));
		NullCheck(V_2);
		Type_t * L_3 = (V_2->___toType_1);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		V_0 = L_2;
		NullCheck(V_2);
		Object_t * L_4 = (V_2->___value_0);
		TypeU5BU5D_t138* L_5 = ((TypeU5BU5D_t138*)SZArrayNew(TypeU5BU5D_t138_il2cpp_TypeInfo_var, 1));
		NullCheck(V_2);
		Type_t * L_6 = (V_2->___toType_1);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 0)) = (Type_t *)L_6;
		IntPtr_t98 L_7 = { &U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m4258_MethodInfo };
		DispatcherFactory_t859 * L_8 = (DispatcherFactory_t859 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherFactory_t859_il2cpp_TypeInfo));
		DispatcherFactory__ctor_m4236(L_8, V_2, L_7, /*hidden argument*/&DispatcherFactory__ctor_m4236_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		Dispatcher_t858 * L_9 = RuntimeServices_GetDispatcher_m4262(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral768, L_5, L_8, /*hidden argument*/&RuntimeServices_GetDispatcher_m4262_MethodInfo);
		V_1 = L_9;
		NullCheck(V_2);
		Object_t * L_10 = (V_2->___value_0);
		NullCheck(V_1);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t137* >::Invoke(&Dispatcher_Invoke_m4279_MethodInfo, V_1, L_10, V_0);
		return L_11;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern "C" Dispatcher_t858 * RuntimeServices_CreateCoerceDispatcher_m4264 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method)
{
	Type_t * V_0 = {0};
	MethodInfo_t871 * V_1 = {0};
	{
		NullCheck(___toType);
		bool L_0 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Type_IsInstanceOfType_m4292_MethodInfo, ___toType, ___value);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IntPtr_t98 L_1 = { &RuntimeServices_IdentityDispatcher_m4269_MethodInfo };
		Dispatcher_t858 * L_2 = (Dispatcher_t858 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t858_il2cpp_TypeInfo));
		Dispatcher__ctor_m4278(L_2, NULL, L_1, /*hidden argument*/&Dispatcher__ctor_m4278_MethodInfo);
		return L_2;
	}

IL_0019:
	{
		if (!((Object_t *)IsInst(___value, InitializedTypeInfo(&ICoercible_t877_il2cpp_TypeInfo))))
		{
			goto IL_0031;
		}
	}
	{
		IntPtr_t98 L_3 = { &RuntimeServices_CoercibleDispatcher_m4268_MethodInfo };
		Dispatcher_t858 * L_4 = (Dispatcher_t858 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t858_il2cpp_TypeInfo));
		Dispatcher__ctor_m4278(L_4, NULL, L_3, /*hidden argument*/&Dispatcher__ctor_m4278_MethodInfo);
		return L_4;
	}

IL_0031:
	{
		NullCheck(___value);
		Type_t * L_5 = Object_GetType_m2357(___value, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_6 = RuntimeServices_IsPromotableNumeric_m4266(NULL /*static, unused*/, V_0, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m4266_MethodInfo);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_7 = RuntimeServices_IsPromotableNumeric_m4266(NULL /*static, unused*/, ___toType, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m4266_MethodInfo);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		Dispatcher_t858 * L_8 = RuntimeServices_EmitPromotionDispatcher_m4265(NULL /*static, unused*/, V_0, ___toType, /*hidden argument*/&RuntimeServices_EmitPromotionDispatcher_m4265_MethodInfo);
		return L_8;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		MethodInfo_t871 * L_9 = RuntimeServices_FindImplicitConversionOperator_m4275(NULL /*static, unused*/, V_0, ___toType, /*hidden argument*/&RuntimeServices_FindImplicitConversionOperator_m4275_MethodInfo);
		V_1 = L_9;
		if (V_1)
		{
			goto IL_0071;
		}
	}
	{
		IntPtr_t98 L_10 = { &RuntimeServices_IdentityDispatcher_m4269_MethodInfo };
		Dispatcher_t858 * L_11 = (Dispatcher_t858 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t858_il2cpp_TypeInfo));
		Dispatcher__ctor_m4278(L_11, NULL, L_10, /*hidden argument*/&Dispatcher__ctor_m4278_MethodInfo);
		return L_11;
	}

IL_0071:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		Dispatcher_t858 * L_12 = RuntimeServices_EmitImplicitConversionDispatcher_m4267(NULL /*static, unused*/, V_1, /*hidden argument*/&RuntimeServices_EmitImplicitConversionDispatcher_m4267_MethodInfo);
		return L_12;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" Dispatcher_t858 * RuntimeServices_EmitPromotionDispatcher_m4265 (Object_t * __this /* static, unused */, Type_t * ___fromType, Type_t * ___toType, MethodInfo* method)
{
	static bool RuntimeServices_EmitPromotionDispatcher_m4265_init;
	if (!RuntimeServices_EmitPromotionDispatcher_m4265_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		RuntimeServices_EmitPromotionDispatcher_m4265_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Dispatcher_t858_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		Type_t * L_1 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&NumericPromotions_t865_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		ObjectU5BU5D_t137* L_2 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 4));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral769);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)(String_t*) &_stringLiteral769;
		ObjectU5BU5D_t137* L_3 = L_2;
		int32_t L_4 = Type_GetTypeCode_m4293(NULL /*static, unused*/, ___fromType, /*hidden argument*/&Type_GetTypeCode_m4293_MethodInfo);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&TypeCode_t880_il2cpp_TypeInfo), &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t137* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral770);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)(String_t*) &_stringLiteral770;
		ObjectU5BU5D_t137* L_8 = L_7;
		int32_t L_9 = Type_GetTypeCode_m4293(NULL /*static, unused*/, ___toType, /*hidden argument*/&Type_GetTypeCode_m4293_MethodInfo);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&TypeCode_t880_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Concat_m595(NULL /*static, unused*/, L_8, /*hidden argument*/&String_Concat_m595_MethodInfo);
		NullCheck(L_1);
		MethodInfo_t871 * L_13 = (MethodInfo_t871 *)VirtFuncInvoker1< MethodInfo_t871 *, String_t* >::Invoke(&Type_GetMethod_m4294_MethodInfo, L_1, L_12);
		Delegate_t494 * L_14 = Delegate_CreateDelegate_m4295(NULL /*static, unused*/, L_0, L_13, /*hidden argument*/&Delegate_CreateDelegate_m4295_MethodInfo);
		return ((Dispatcher_t858 *)Castclass(L_14, InitializedTypeInfo(&Dispatcher_t858_il2cpp_TypeInfo)));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern "C" bool RuntimeServices_IsPromotableNumeric_m4266 (Object_t * __this /* static, unused */, Type_t * ___fromType, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_0 = Type_GetTypeCode_m4293(NULL /*static, unused*/, ___fromType, /*hidden argument*/&Type_GetTypeCode_m4293_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_1 = RuntimeServices_IsPromotableNumeric_m4274(NULL /*static, unused*/, L_0, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m4274_MethodInfo);
		return L_1;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern "C" Dispatcher_t858 * RuntimeServices_EmitImplicitConversionDispatcher_m4267 (Object_t * __this /* static, unused */, MethodInfo_t871 * ___method, MethodInfo* method)
{
	U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t875 * V_0 = {0};
	{
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t875 * L_0 = (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t875 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t875_il2cpp_TypeInfo));
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m4259(L_0, /*hidden argument*/&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m4259_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___method_0 = ___method;
		IntPtr_t98 L_1 = { &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m4260_MethodInfo };
		Dispatcher_t858 * L_2 = (Dispatcher_t858 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t858_il2cpp_TypeInfo));
		Dispatcher__ctor_m4278(L_2, V_0, L_1, /*hidden argument*/&Dispatcher__ctor_m4278_MethodInfo);
		return L_2;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_CoercibleDispatcher_m4268 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t137* ___args, MethodInfo* method)
{
	{
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, 0);
		int32_t L_0 = 0;
		NullCheck(((Object_t *)Castclass(___o, InitializedTypeInfo(&ICoercible_t877_il2cpp_TypeInfo))));
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(&ICoercible_Coerce_m4296_MethodInfo, ((Object_t *)Castclass(___o, InitializedTypeInfo(&ICoercible_t877_il2cpp_TypeInfo))), ((Type_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(___args, L_0)), InitializedTypeInfo(&Type_t_il2cpp_TypeInfo))));
		return L_1;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_IdentityDispatcher_m4269 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t137* ___args, MethodInfo* method)
{
	{
		return ___o;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern "C" bool RuntimeServices_IsNumeric_m4270 (Object_t * __this /* static, unused */, int32_t ___code, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = ___code;
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 0)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 2)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 3)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 4)
		{
			goto IL_0041;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 5)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 6)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 7)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 9)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)5)) == 10)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0051;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return 1;
	}

IL_003f:
	{
		return 1;
	}

IL_0041:
	{
		return 1;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 0;
	}
}
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern MethodInfo RuntimeServices_op_Addition_m929_MethodInfo;
extern "C" String_t* RuntimeServices_op_Addition_m929 (Object_t * __this /* static, unused */, String_t* ___lhs, String_t* ___rhs, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = String_Concat_m140(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&String_Concat_m140_MethodInfo);
		return L_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern "C" bool RuntimeServices_EqualityOperator_m960 (Object_t * __this /* static, unused */, Object_t * ___lhs, Object_t * ___rhs, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	Array_t * V_2 = {0};
	Array_t * V_3 = {0};
	int32_t G_B15_0 = 0;
	{
		if ((((Object_t*)(Object_t *)___lhs) != ((Object_t*)(Object_t *)___rhs)))
		{
			goto IL_0009;
		}
	}
	{
		return 1;
	}

IL_0009:
	{
		if (___lhs)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck(___rhs);
		bool L_0 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m225_MethodInfo, ___rhs, ___lhs);
		return L_0;
	}

IL_0017:
	{
		if (___rhs)
		{
			goto IL_0025;
		}
	}
	{
		NullCheck(___lhs);
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m225_MethodInfo, ___lhs, ___rhs);
		return L_1;
	}

IL_0025:
	{
		NullCheck(___lhs);
		Type_t * L_2 = Object_GetType_m2357(___lhs, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_3 = Type_GetTypeCode_m4293(NULL /*static, unused*/, L_2, /*hidden argument*/&Type_GetTypeCode_m4293_MethodInfo);
		V_0 = L_3;
		NullCheck(___rhs);
		Type_t * L_4 = Object_GetType_m2357(___rhs, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		int32_t L_5 = Type_GetTypeCode_m4293(NULL /*static, unused*/, L_4, /*hidden argument*/&Type_GetTypeCode_m4293_MethodInfo);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_6 = RuntimeServices_IsNumeric_m4270(NULL /*static, unused*/, V_0, /*hidden argument*/&RuntimeServices_IsNumeric_m4270_MethodInfo);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_7 = RuntimeServices_IsNumeric_m4270(NULL /*static, unused*/, V_1, /*hidden argument*/&RuntimeServices_IsNumeric_m4270_MethodInfo);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_8 = RuntimeServices_EqualityOperator_m4273(NULL /*static, unused*/, ___lhs, V_0, ___rhs, V_1, /*hidden argument*/&RuntimeServices_EqualityOperator_m4273_MethodInfo);
		return L_8;
	}

IL_005d:
	{
		V_2 = ((Array_t *)IsInst(___lhs, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo)));
		if (!V_2)
		{
			goto IL_007f;
		}
	}
	{
		V_3 = ((Array_t *)IsInst(___rhs, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo)));
		if (!V_3)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_9 = RuntimeServices_ArrayEqualityImpl_m4271(NULL /*static, unused*/, V_2, V_3, /*hidden argument*/&RuntimeServices_ArrayEqualityImpl_m4271_MethodInfo);
		return L_9;
	}

IL_007f:
	{
		NullCheck(___lhs);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m225_MethodInfo, ___lhs, ___rhs);
		if (L_10)
		{
			goto IL_0094;
		}
	}
	{
		NullCheck(___rhs);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m225_MethodInfo, ___rhs, ___lhs);
		G_B15_0 = ((int32_t)(L_11));
		goto IL_0095;
	}

IL_0094:
	{
		G_B15_0 = 1;
	}

IL_0095:
	{
		return G_B15_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern "C" bool RuntimeServices_ArrayEqualityImpl_m4271 (Object_t * __this /* static, unused */, Array_t * ___lhs, Array_t * ___rhs, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		NullCheck(___lhs);
		int32_t L_0 = Array_get_Rank_m3872(___lhs, /*hidden argument*/&Array_get_Rank_m3872_MethodInfo);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		NullCheck(___rhs);
		int32_t L_1 = Array_get_Rank_m3872(___rhs, /*hidden argument*/&Array_get_Rank_m3872_MethodInfo);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral771, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0023:
	{
		NullCheck(___lhs);
		int32_t L_3 = Array_get_Length_m947(___lhs, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		NullCheck(___rhs);
		int32_t L_4 = Array_get_Length_m947(___rhs, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0036;
		}
	}
	{
		return 0;
	}

IL_0036:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003d:
	{
		NullCheck(___lhs);
		Object_t * L_5 = Array_GetValue_m4297(___lhs, V_0, /*hidden argument*/&Array_GetValue_m4297_MethodInfo);
		NullCheck(___rhs);
		Object_t * L_6 = Array_GetValue_m4297(___rhs, V_0, /*hidden argument*/&Array_GetValue_m4297_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_7 = RuntimeServices_EqualityOperator_m960(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&RuntimeServices_EqualityOperator_m960_MethodInfo);
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		return 0;
	}

IL_0057:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_005b:
	{
		NullCheck(___lhs);
		int32_t L_8 = Array_get_Length_m947(___lhs, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		if ((((int32_t)V_0) < ((int32_t)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		return 1;
	}
}
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C" int32_t RuntimeServices_GetConvertTypeCode_m4272 (Object_t * __this /* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, MethodInfo* method)
{
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)15))))
		{
			goto IL_0010;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)15))))
		{
			goto IL_0013;
		}
	}

IL_0010:
	{
		return (int32_t)(((int32_t)15));
	}

IL_0013:
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)14))))
		{
			goto IL_0023;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)14))))
		{
			goto IL_0026;
		}
	}

IL_0023:
	{
		return (int32_t)(((int32_t)14));
	}

IL_0026:
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)13))))
		{
			goto IL_0039;
		}
	}

IL_0036:
	{
		return (int32_t)(((int32_t)13));
	}

IL_0039:
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)12))))
		{
			goto IL_0065;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)7)))
		{
			goto IL_005f;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)((int32_t)9))))
		{
			goto IL_005f;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)11))))
		{
			goto IL_0062;
		}
	}

IL_005f:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0062:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0065:
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)12))))
		{
			goto IL_0091;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)5)))
		{
			goto IL_008b;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)7)))
		{
			goto IL_008b;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)9))))
		{
			goto IL_008b;
		}
	}
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)11))))
		{
			goto IL_008e;
		}
	}

IL_008b:
	{
		return (int32_t)(((int32_t)11));
	}

IL_008e:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0091:
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)11))))
		{
			goto IL_00a1;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)11))))
		{
			goto IL_00a4;
		}
	}

IL_00a1:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00a4:
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)10))))
		{
			goto IL_00c8;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)5)))
		{
			goto IL_00c2;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)7)))
		{
			goto IL_00c2;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)9))))
		{
			goto IL_00c5;
		}
	}

IL_00c2:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00c5:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00c8:
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)10))))
		{
			goto IL_00ec;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)5)))
		{
			goto IL_00e6;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)7)))
		{
			goto IL_00e6;
		}
	}
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)9))))
		{
			goto IL_00e9;
		}
	}

IL_00e6:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00e9:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00ec:
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern "C" bool RuntimeServices_EqualityOperator_m4273 (Object_t * __this /* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = {0};
	{
		V_0 = ((Object_t *)Castclass(___lhs, InitializedTypeInfo(&IConvertible_t59_il2cpp_TypeInfo)));
		V_1 = ((Object_t *)Castclass(___rhs, InitializedTypeInfo(&IConvertible_t59_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		int32_t L_0 = RuntimeServices_GetConvertTypeCode_m4272(NULL /*static, unused*/, ___lhsTypeCode, ___rhsTypeCode, /*hidden argument*/&RuntimeServices_GetConvertTypeCode_m4272_MethodInfo);
		V_2 = L_0;
		if (((int32_t)((int32_t)V_2-(int32_t)((int32_t)10))) == 0)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)((int32_t)10))) == 1)
		{
			goto IL_0083;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)((int32_t)10))) == 2)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)((int32_t)10))) == 3)
		{
			goto IL_0061;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)((int32_t)10))) == 4)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)((int32_t)10))) == 5)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a5;
	}

IL_003c:
	{
		NullCheck(V_0);
		Decimal_t881  L_1 = (Decimal_t881 )InterfaceFuncInvoker1< Decimal_t881 , Object_t * >::Invoke(&IConvertible_ToDecimal_m4298_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		Decimal_t881  L_2 = (Decimal_t881 )InterfaceFuncInvoker1< Decimal_t881 , Object_t * >::Invoke(&IConvertible_ToDecimal_m4298_MethodInfo, V_1, (Object_t *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Decimal_t881_il2cpp_TypeInfo));
		bool L_3 = Decimal_op_Equality_m4299(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Decimal_op_Equality_m4299_MethodInfo);
		return L_3;
	}

IL_0050:
	{
		NullCheck(V_0);
		double L_4 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(&IConvertible_ToDouble_m4300_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		double L_5 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(&IConvertible_ToDouble_m4300_MethodInfo, V_1, (Object_t *)NULL);
		return ((((double)L_4) == ((double)L_5))? 1 : 0);
	}

IL_0061:
	{
		NullCheck(V_0);
		float L_6 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(&IConvertible_ToSingle_m4301_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		float L_7 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(&IConvertible_ToSingle_m4301_MethodInfo, V_1, (Object_t *)NULL);
		return ((((float)L_6) == ((float)L_7))? 1 : 0);
	}

IL_0072:
	{
		NullCheck(V_0);
		uint64_t L_8 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(&IConvertible_ToUInt64_m4302_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		uint64_t L_9 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(&IConvertible_ToUInt64_m4302_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int64_t)L_8) == ((int64_t)L_9))? 1 : 0);
	}

IL_0083:
	{
		NullCheck(V_0);
		int64_t L_10 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(&IConvertible_ToInt64_m4303_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		int64_t L_11 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(&IConvertible_ToInt64_m4303_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int64_t)L_10) == ((int64_t)L_11))? 1 : 0);
	}

IL_0094:
	{
		NullCheck(V_0);
		uint32_t L_12 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(&IConvertible_ToUInt32_m4304_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		uint32_t L_13 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(&IConvertible_ToUInt32_m4304_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
	}

IL_00a5:
	{
		NullCheck(V_0);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IConvertible_ToInt32_m4305_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		int32_t L_15 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IConvertible_ToInt32_m4305_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C" bool RuntimeServices_IsPromotableNumeric_m4274 (Object_t * __this /* static, unused */, int32_t ___code, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = ___code;
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 0)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 1)
		{
			goto IL_005b;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 3)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 4)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 5)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 6)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 7)
		{
			goto IL_004f;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 9)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 10)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 11)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)3)) == 12)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_005d;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 1;
	}

IL_0055:
	{
		return 1;
	}

IL_0057:
	{
		return 1;
	}

IL_0059:
	{
		return 1;
	}

IL_005b:
	{
		return 1;
	}

IL_005d:
	{
		return 0;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern "C" MethodInfo_t871 * RuntimeServices_FindImplicitConversionOperator_m4275 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	int32_t V_0 = {0};
	MethodInfo_t871 * G_B3_0 = {0};
	MethodInfo_t871 * G_B1_0 = {0};
	MethodInfo_t871 * G_B2_0 = {0};
	{
		NullCheck(___from);
		MethodInfoU5BU5D_t885* L_0 = (MethodInfoU5BU5D_t885*)VirtFuncInvoker1< MethodInfoU5BU5D_t885*, int32_t >::Invoke(&Type_GetMethods_m4306_MethodInfo, ___from, ((int32_t)88));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		MethodInfo_t871 * L_1 = RuntimeServices_FindImplicitConversionMethod_m4277(NULL /*static, unused*/, (Object_t*)(Object_t*)L_0, ___from, ___to, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m4277_MethodInfo);
		MethodInfo_t871 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0038;
		}
	}
	{
		NullCheck(___to);
		MethodInfoU5BU5D_t885* L_3 = (MethodInfoU5BU5D_t885*)VirtFuncInvoker1< MethodInfoU5BU5D_t885*, int32_t >::Invoke(&Type_GetMethods_m4306_MethodInfo, ___to, ((int32_t)88));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		MethodInfo_t871 * L_4 = RuntimeServices_FindImplicitConversionMethod_m4277(NULL /*static, unused*/, (Object_t*)(Object_t*)L_3, ___from, ___to, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m4277_MethodInfo);
		MethodInfo_t871 * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		Object_t* L_6 = RuntimeServices_GetExtensionMethods_m4276(NULL /*static, unused*/, /*hidden argument*/&RuntimeServices_GetExtensionMethods_m4276_MethodInfo);
		MethodInfo_t871 * L_7 = RuntimeServices_FindImplicitConversionMethod_m4277(NULL /*static, unused*/, L_6, ___from, ___to, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m4277_MethodInfo);
		G_B3_0 = L_7;
	}

IL_0038:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern "C" Object_t* RuntimeServices_GetExtensionMethods_m4276 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	U3CGetExtensionMethodsU3Ec__IteratorC_t872 * V_0 = {0};
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t872 * L_0 = (U3CGetExtensionMethodsU3Ec__IteratorC_t872 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetExtensionMethodsU3Ec__IteratorC_t872_il2cpp_TypeInfo));
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m4250(L_0, /*hidden argument*/&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m4250_MethodInfo);
		V_0 = L_0;
		U3CGetExtensionMethodsU3Ec__IteratorC_t872 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___$PC_2 = ((int32_t)-2);
		return L_1;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern MethodInfo* IEnumerable_1_GetEnumerator_m4307_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m4308_MethodInfo_var;
extern "C" MethodInfo_t871 * RuntimeServices_FindImplicitConversionMethod_m4277 (Object_t * __this /* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	static bool RuntimeServices_FindImplicitConversionMethod_m4277_init;
	if (!RuntimeServices_FindImplicitConversionMethod_m4277_init)
	{
		IEnumerable_1_GetEnumerator_m4307_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m4307_GenericMethod);
		IEnumerator_1_get_Current_m4308_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m4308_GenericMethod);
		RuntimeServices_FindImplicitConversionMethod_m4277_init = true;
	}
	MethodInfo_t871 * V_0 = {0};
	Object_t* V_1 = {0};
	ParameterInfoU5BU5D_t887* V_2 = {0};
	MethodInfo_t871 * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		NullCheck(___candidates);
		Object_t* L_0 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m4307_MethodInfo_var, ___candidates);
		V_1 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_000c:
		{
			NullCheck(V_1);
			MethodInfo_t871 * L_1 = (MethodInfo_t871 *)InterfaceFuncInvoker0< MethodInfo_t871 * >::Invoke(IEnumerator_1_get_Current_m4308_MethodInfo_var, V_1);
			V_0 = L_1;
			NullCheck(V_0);
			String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, V_0);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_3 = String_op_Inequality_m2590(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral772, /*hidden argument*/&String_op_Inequality_m2590_MethodInfo);
			if (!L_3)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			goto IL_0072;
		}

IL_002d:
		{
			NullCheck(V_0);
			Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m4310_MethodInfo, V_0);
			if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)___to)))
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			goto IL_0072;
		}

IL_003e:
		{
			NullCheck(V_0);
			ParameterInfoU5BU5D_t887* L_5 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, V_0);
			V_2 = L_5;
			NullCheck(V_2);
			if ((((int32_t)(((int32_t)(((Array_t *)V_2)->max_length)))) == ((int32_t)1)))
			{
				goto IL_0053;
			}
		}

IL_004e:
		{
			goto IL_0072;
		}

IL_0053:
		{
			NullCheck(V_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(V_2, 0);
			int32_t L_6 = 0;
			NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_2, L_6)));
			Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_2, L_6)));
			NullCheck(L_7);
			bool L_8 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4313_MethodInfo, L_7, ___from);
			if (L_8)
			{
				goto IL_006b;
			}
		}

IL_0066:
		{
			goto IL_0072;
		}

IL_006b:
		{
			V_3 = V_0;
			// IL_006d: leave IL_008f
			leaveInstructions[0] = 0x8F; // 1
			THROW_SENTINEL(IL_008f);
			// finally target depth: 1
		}

IL_0072:
		{
			NullCheck(V_1);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m563_MethodInfo, V_1);
			if (L_9)
			{
				goto IL_000c;
			}
		}

IL_007d:
		{
			// IL_007d: leave IL_008d
			leaveInstructions[0] = 0x8D; // 1
			THROW_SENTINEL(IL_008d);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0082;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0082;
	}

IL_0082:
	{ // begin finally (depth: 1)
		{
			if (V_1)
			{
				goto IL_0086;
			}
		}

IL_0085:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8F:
					goto IL_008f;
				case 0x8D:
					goto IL_008d;
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

IL_0086:
		{
			NullCheck(V_1);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m564_MethodInfo, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8F:
					goto IL_008f;
				case 0x8D:
					goto IL_008d;
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

IL_008d:
	{
		return (MethodInfo_t871 *)NULL;
	}

IL_008f:
	{
		return V_3;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C" void Dispatcher__ctor_m4278 (Dispatcher_t858 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C" Object_t * Dispatcher_Invoke_m4279 (Dispatcher_t858 * __this, Object_t * ___target, ObjectU5BU5D_t137* ___args, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Dispatcher_Invoke_m4279((Dispatcher_t858 *)__this->___prev_9,___target, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___target, ObjectU5BU5D_t137* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___target, ObjectU5BU5D_t137* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t137* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_Dispatcher_t858(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t137* ___args)
{
	// Marshaling of parameter '___target' to native representation
	Object_t * ____target_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern MethodInfo Dispatcher_BeginInvoke_m4280_MethodInfo;
extern "C" Object_t * Dispatcher_BeginInvoke_m4280 (Dispatcher_t858 * __this, Object_t * ___target, ObjectU5BU5D_t137* ___args, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___target;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern MethodInfo Dispatcher_EndInvoke_m4281_MethodInfo;
extern "C" Object_t * Dispatcher_EndInvoke_m4281 (Dispatcher_t858 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
