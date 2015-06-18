#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"
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
extern TypeInfo TouchScreenKeyboard_InternalConstructorHelperArguments_t1084_il2cpp_TypeInfo;
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstrucMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchScreenKeyboardType_t515_il2cpp_TypeInfo;
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardTypeMethodDeclarations.h"



// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboard.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchScreenKeyboard_t393_il2cpp_TypeInfo;
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.String
#include "mscorlib_System_String.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo Convert_t47_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t42_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo Application_get_platform_m652_MethodInfo;
extern MethodInfo Object__ctor_m127_MethodInfo;
extern MethodInfo Convert_ToUInt32_m5604_MethodInfo;
extern MethodInfo Convert_ToUInt32_m5605_MethodInfo;
extern MethodInfo TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5256_MethodInfo;
extern MethodInfo TouchScreenKeyboard_Destroy_m5254_MethodInfo;
extern MethodInfo Object_Finalize_m226_MethodInfo;
extern MethodInfo TouchScreenKeyboard_Open_m5257_MethodInfo;
extern MethodInfo TouchScreenKeyboard__ctor_m5253_MethodInfo;


// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" void TouchScreenKeyboard__ctor_m5253 (TouchScreenKeyboard_t393 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method)
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1084  V_0 = {0};
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		Initobj (InitializedTypeInfo(&TouchScreenKeyboard_InternalConstructorHelperArguments_t1084_il2cpp_TypeInfo), (&V_0));
		int32_t L_0 = ___keyboardType;
		Object_t * L_1 = Box(InitializedTypeInfo(&TouchScreenKeyboardType_t515_il2cpp_TypeInfo), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t47_il2cpp_TypeInfo));
		uint32_t L_2 = Convert_ToUInt32_m5604(NULL /*static, unused*/, L_1, /*hidden argument*/&Convert_ToUInt32_m5604_MethodInfo);
		NullCheck((&V_0));
		(&V_0)->___keyboardType_0 = L_2;
		uint32_t L_3 = Convert_ToUInt32_m5605(NULL /*static, unused*/, ___autocorrection, /*hidden argument*/&Convert_ToUInt32_m5605_MethodInfo);
		NullCheck((&V_0));
		(&V_0)->___autocorrection_1 = L_3;
		uint32_t L_4 = Convert_ToUInt32_m5605(NULL /*static, unused*/, ___multiline, /*hidden argument*/&Convert_ToUInt32_m5605_MethodInfo);
		NullCheck((&V_0));
		(&V_0)->___multiline_2 = L_4;
		uint32_t L_5 = Convert_ToUInt32_m5605(NULL /*static, unused*/, ___secure, /*hidden argument*/&Convert_ToUInt32_m5605_MethodInfo);
		NullCheck((&V_0));
		(&V_0)->___secure_3 = L_5;
		uint32_t L_6 = Convert_ToUInt32_m5605(NULL /*static, unused*/, ___alert, /*hidden argument*/&Convert_ToUInt32_m5605_MethodInfo);
		NullCheck((&V_0));
		(&V_0)->___alert_4 = L_6;
		TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5256(__this, (&V_0), ___text, ___textPlaceholder, /*hidden argument*/&TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5256_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" void TouchScreenKeyboard_Destroy_m5254 (TouchScreenKeyboard_t393 * __this, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_Destroy_m5254_ftn) (TouchScreenKeyboard_t393 *);
	static TouchScreenKeyboard_Destroy_m5254_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Destroy_m5254_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern MethodInfo TouchScreenKeyboard_Finalize_m5255_MethodInfo;
extern "C" void TouchScreenKeyboard_Finalize_m5255 (TouchScreenKeyboard_t393 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		TouchScreenKeyboard_Destroy_m5254(__this, /*hidden argument*/&TouchScreenKeyboard_Destroy_m5254_MethodInfo);
		// IL_0006: leave IL_0012
		leaveInstructions[0] = 0x12; // 1
		THROW_SENTINEL(IL_0012);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_000b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_000b;
	}

IL_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m226(__this, /*hidden argument*/&Object_Finalize_m226_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x12:
				goto IL_0012;
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

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C" void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5256 (TouchScreenKeyboard_t393 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t1084 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5256_ftn) (TouchScreenKeyboard_t393 *, TouchScreenKeyboard_InternalConstructorHelperArguments_t1084 *, String_t*, String_t*);
	static TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)");
	_il2cpp_icall_func(__this, ___arguments, ___text, ___textPlaceholder);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
extern MethodInfo TouchScreenKeyboard_get_isSupported_m2588_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_isSupported_m2588 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = Application_get_platform_m652(NULL /*static, unused*/, /*hidden argument*/&Application_get_platform_m652_MethodInfo);
		V_0 = L_0;
		V_1 = V_0;
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 0)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 1)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 2)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 3)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 4)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 5)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 6)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 7)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 8)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 9)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 10)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 11)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 12)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 13)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 14)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)8)) == 15)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0059;
	}

IL_0055:
	{
		return 1;
	}

IL_0057:
	{
		return 0;
	}

IL_0059:
	{
		return 0;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern MethodInfo TouchScreenKeyboard_Open_m2647_MethodInfo;
extern "C" TouchScreenKeyboard_t393 * TouchScreenKeyboard_Open_m2647 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, MethodInfo* method)
{
	String_t* V_0 = {0};
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		V_1 = 0;
		TouchScreenKeyboard_t393 * L_0 = TouchScreenKeyboard_Open_m5257(NULL /*static, unused*/, ___text, ___keyboardType, ___autocorrection, ___multiline, ___secure, V_1, V_0, /*hidden argument*/&TouchScreenKeyboard_Open_m5257_MethodInfo);
		return L_0;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
extern MethodInfo TouchScreenKeyboard_Open_m2648_MethodInfo;
extern "C" TouchScreenKeyboard_t393 * TouchScreenKeyboard_Open_m2648 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, MethodInfo* method)
{
	String_t* V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		V_1 = 0;
		V_2 = 0;
		TouchScreenKeyboard_t393 * L_0 = TouchScreenKeyboard_Open_m5257(NULL /*static, unused*/, ___text, ___keyboardType, ___autocorrection, ___multiline, V_2, V_1, V_0, /*hidden argument*/&TouchScreenKeyboard_Open_m5257_MethodInfo);
		return L_0;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" TouchScreenKeyboard_t393 * TouchScreenKeyboard_Open_m5257 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method)
{
	{
		TouchScreenKeyboard_t393 * L_0 = (TouchScreenKeyboard_t393 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TouchScreenKeyboard_t393_il2cpp_TypeInfo));
		TouchScreenKeyboard__ctor_m5253(L_0, ___text, ___keyboardType, ___autocorrection, ___multiline, ___secure, ___alert, ___textPlaceholder, /*hidden argument*/&TouchScreenKeyboard__ctor_m5253_MethodInfo);
		return L_0;
	}
}
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern MethodInfo TouchScreenKeyboard_get_text_m2575_MethodInfo;
extern "C" String_t* TouchScreenKeyboard_get_text_m2575 (TouchScreenKeyboard_t393 * __this, MethodInfo* method)
{
	typedef String_t* (*TouchScreenKeyboard_get_text_m2575_ftn) (TouchScreenKeyboard_t393 *);
	static TouchScreenKeyboard_get_text_m2575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_text_m2575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern MethodInfo TouchScreenKeyboard_set_text_m2576_MethodInfo;
extern "C" void TouchScreenKeyboard_set_text_m2576 (TouchScreenKeyboard_t393 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_text_m2576_ftn) (TouchScreenKeyboard_t393 *, String_t*);
	static TouchScreenKeyboard_set_text_m2576_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_text_m2576_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern MethodInfo TouchScreenKeyboard_set_hideInput_m2646_MethodInfo;
extern "C" void TouchScreenKeyboard_set_hideInput_m2646 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_hideInput_m2646_ftn) (bool);
	static TouchScreenKeyboard_set_hideInput_m2646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_hideInput_m2646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern MethodInfo TouchScreenKeyboard_get_active_m2574_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_active_m2574 (TouchScreenKeyboard_t393 * __this, MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_active_m2574_ftn) (TouchScreenKeyboard_t393 *);
	static TouchScreenKeyboard_get_active_m2574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_active_m2574_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_active()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern MethodInfo TouchScreenKeyboard_set_active_m2645_MethodInfo;
extern "C" void TouchScreenKeyboard_set_active_m2645 (TouchScreenKeyboard_t393 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_active_m2645_ftn) (TouchScreenKeyboard_t393 *, bool);
	static TouchScreenKeyboard_set_active_m2645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_active_m2645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern MethodInfo TouchScreenKeyboard_get_done_m2592_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_done_m2592 (TouchScreenKeyboard_t393 * __this, MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_done_m2592_ftn) (TouchScreenKeyboard_t393 *);
	static TouchScreenKeyboard_get_done_m2592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_done_m2592_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_done()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
extern MethodInfo TouchScreenKeyboard_get_wasCanceled_m2589_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_wasCanceled_m2589 (TouchScreenKeyboard_t393 * __this, MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_wasCanceled_m2589_ftn) (TouchScreenKeyboard_t393 *);
	static TouchScreenKeyboard_get_wasCanceled_m2589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_wasCanceled_m2589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_wasCanceled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Event_t397_il2cpp_TypeInfo;
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"

// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo Vector2_t32_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t137_il2cpp_TypeInfo;
extern TypeInfo EventType_t1086_il2cpp_TypeInfo;
extern TypeInfo EventModifiers_t1087_il2cpp_TypeInfo;
extern TypeInfo KeyCode_t1085_il2cpp_TypeInfo;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t137_0_0_0;
extern MethodInfo Event_Internal_GetMousePosition_m5263_MethodInfo;
extern MethodInfo Event_get_type_m5261_MethodInfo;
extern MethodInfo Event_Init_m5258_MethodInfo;
extern MethodInfo Event_Cleanup_m5260_MethodInfo;
extern MethodInfo Event__ctor_m2585_MethodInfo;
extern MethodInfo Event_Internal_SetNativeEvent_m5266_MethodInfo;
extern MethodInfo Event_get_isKey_m5268_MethodInfo;
extern MethodInfo Event_get_keyCode_m2603_MethodInfo;
extern MethodInfo Event_get_isMouse_m5269_MethodInfo;
extern MethodInfo Event_get_mousePosition_m5262_MethodInfo;
extern MethodInfo Vector2_GetHashCode_m5274_MethodInfo;
extern MethodInfo Event_get_modifiers_m2602_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m5606_MethodInfo;
extern MethodInfo Object_GetType_m2357_MethodInfo;
extern MethodInfo Vector2_op_Equality_m2835_MethodInfo;
extern MethodInfo Event_get_character_m2604_MethodInfo;
extern MethodInfo UnityString_Format_m5383_MethodInfo;
extern MethodInfo String_Concat_m595_MethodInfo;
extern MethodInfo Event_get_commandName_m5264_MethodInfo;
extern MethodInfo String_Concat_m591_MethodInfo;


// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m2585 (Event_t397 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		Event_Init_m5258(__this, /*hidden argument*/&Event_Init_m5258_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m5258 (Event_t397 * __this, MethodInfo* method)
{
	typedef void (*Event_Init_m5258_ftn) (Event_t397 *);
	static Event_Init_m5258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Init_m5258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Finalize()
extern MethodInfo Event_Finalize_m5259_MethodInfo;
extern "C" void Event_Finalize_m5259 (Event_t397 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		Event_Cleanup_m5260(__this, /*hidden argument*/&Event_Cleanup_m5260_MethodInfo);
		// IL_0006: leave IL_0012
		leaveInstructions[0] = 0x12; // 1
		THROW_SENTINEL(IL_0012);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_000b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_000b;
	}

IL_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m226(__this, /*hidden argument*/&Object_Finalize_m226_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x12:
				goto IL_0012;
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

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m5260 (Event_t397 * __this, MethodInfo* method)
{
	typedef void (*Event_Cleanup_m5260_ftn) (Event_t397 *);
	static Event_Cleanup_m5260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Cleanup_m5260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern MethodInfo Event_get_rawType_m2606_MethodInfo;
extern "C" int32_t Event_get_rawType_m2606 (Event_t397 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_rawType_m2606_ftn) (Event_t397 *);
	static Event_get_rawType_m2606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m2606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m5261 (Event_t397 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_type_m5261_ftn) (Event_t397 *);
	static Event_get_type_m5261_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m5261_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t32  Event_get_mousePosition_m5262 (Event_t397 * __this, MethodInfo* method)
{
	Vector2_t32  V_0 = {0};
	{
		Event_Internal_GetMousePosition_m5263(__this, (&V_0), /*hidden argument*/&Event_Internal_GetMousePosition_m5263_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m5263 (Event_t397 * __this, Vector2_t32 * ___value, MethodInfo* method)
{
	typedef void (*Event_Internal_GetMousePosition_m5263_ftn) (Event_t397 *, Vector2_t32 *);
	static Event_Internal_GetMousePosition_m5263_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMousePosition_m5263_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m2602 (Event_t397 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_modifiers_m2602_ftn) (Event_t397 *);
	static Event_get_modifiers_m2602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m2602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m2604 (Event_t397 * __this, MethodInfo* method)
{
	typedef uint16_t (*Event_get_character_m2604_ftn) (Event_t397 *);
	static Event_get_character_m2604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m2604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m5264 (Event_t397 * __this, MethodInfo* method)
{
	typedef String_t* (*Event_get_commandName_m5264_ftn) (Event_t397 *);
	static Event_get_commandName_m5264_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m5264_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m2603 (Event_t397 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_keyCode_m2603_ftn) (Event_t397 *);
	static Event_get_keyCode_m2603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m2603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Event UnityEngine.Event::get_current()
extern MethodInfo Event_get_current_m5265_MethodInfo;
extern "C" Event_t397 * Event_get_current_m5265 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return (((Event_t397_StaticFields*)InitializedTypeInfo(&Event_t397_il2cpp_TypeInfo)->static_fields)->___s_Current_1);
	}
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m5266 (Object_t * __this /* static, unused */, IntPtr_t98 ___ptr, MethodInfo* method)
{
	typedef void (*Event_Internal_SetNativeEvent_m5266_ftn) (IntPtr_t98);
	static Event_Internal_SetNativeEvent_m5266_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m5266_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern MethodInfo Event_Internal_MakeMasterEventCurrent_m5267_MethodInfo;
extern "C" void Event_Internal_MakeMasterEventCurrent_m5267 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		if ((((Event_t397_StaticFields*)InitializedTypeInfo(&Event_t397_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2))
		{
			goto IL_0014;
		}
	}
	{
		Event_t397 * L_0 = (Event_t397 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Event_t397_il2cpp_TypeInfo));
		Event__ctor_m2585(L_0, /*hidden argument*/&Event__ctor_m2585_MethodInfo);
		((Event_t397_StaticFields*)InitializedTypeInfo(&Event_t397_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2 = L_0;
	}

IL_0014:
	{
		((Event_t397_StaticFields*)InitializedTypeInfo(&Event_t397_il2cpp_TypeInfo)->static_fields)->___s_Current_1 = (((Event_t397_StaticFields*)InitializedTypeInfo(&Event_t397_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2);
		NullCheck((((Event_t397_StaticFields*)InitializedTypeInfo(&Event_t397_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2));
		IntPtr_t98 L_1 = ((((Event_t397_StaticFields*)InitializedTypeInfo(&Event_t397_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2)->___m_Ptr_0);
		Event_Internal_SetNativeEvent_m5266(NULL /*static, unused*/, L_1, /*hidden argument*/&Event_Internal_SetNativeEvent_m5266_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern MethodInfo Event_PopEvent_m2607_MethodInfo;
extern "C" bool Event_PopEvent_m2607 (Object_t * __this /* static, unused */, Event_t397 * ___outEvent, MethodInfo* method)
{
	typedef bool (*Event_PopEvent_m2607_ftn) (Event_t397 *);
	static Event_PopEvent_m2607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_m2607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(___outEvent);
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m5268 (Event_t397 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		V_0 = L_0;
		if ((((int32_t)V_0) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((((int32_t)V_0) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m5269 (Event_t397 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		V_0 = L_0;
		if ((((int32_t)V_0) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		if (!V_0)
		{
			goto IL_0021;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		G_B5_0 = ((((int32_t)V_0) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
extern MethodInfo Event_GetHashCode_m5270_MethodInfo;
extern "C" int32_t Event_GetHashCode_m5270 (Event_t397 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t32  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m5268(__this, /*hidden argument*/&Event_get_isKey_m5268_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m2603(__this, /*hidden argument*/&Event_get_keyCode_m2603_MethodInfo);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = Event_get_isMouse_m5269(__this, /*hidden argument*/&Event_get_isMouse_m5269_MethodInfo);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t32  L_3 = Event_get_mousePosition_m5262(__this, /*hidden argument*/&Event_get_mousePosition_m5262_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m5274((&V_1), /*hidden argument*/&Vector2_GetHashCode_m5274_MethodInfo);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = Event_get_modifiers_m2602(__this, /*hidden argument*/&Event_get_modifiers_m2602_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0*(int32_t)((int32_t)37)))|(int32_t)L_5));
		return V_0;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern MethodInfo Event_Equals_m5271_MethodInfo;
extern "C" bool Event_Equals_m5271 (Event_t397 * __this, Object_t * ___obj, MethodInfo* method)
{
	Event_t397 * V_0 = {0};
	int32_t G_B13_0 = 0;
	{
		if (___obj)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		bool L_0 = Object_ReferenceEquals_m5606(NULL /*static, unused*/, __this, ___obj, /*hidden argument*/&Object_ReferenceEquals_m5606_MethodInfo);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		NullCheck(___obj);
		Type_t * L_1 = Object_GetType_m2357(___obj, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		Type_t * L_2 = Object_GetType_m2357(__this, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		if ((((Object_t*)(Type_t *)L_1) == ((Object_t*)(Type_t *)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		V_0 = ((Event_t397 *)Castclass(___obj, InitializedTypeInfo(&Event_t397_il2cpp_TypeInfo)));
		int32_t L_3 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		NullCheck(V_0);
		int32_t L_4 = Event_get_type_m5261(V_0, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		if ((((uint32_t)L_3) != ((uint32_t)L_4)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_5 = Event_get_modifiers_m2602(__this, /*hidden argument*/&Event_get_modifiers_m2602_MethodInfo);
		NullCheck(V_0);
		int32_t L_6 = Event_get_modifiers_m2602(V_0, /*hidden argument*/&Event_get_modifiers_m2602_MethodInfo);
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0054;
		}
	}

IL_0052:
	{
		return 0;
	}

IL_0054:
	{
		bool L_7 = Event_get_isKey_m5268(__this, /*hidden argument*/&Event_get_isKey_m5268_MethodInfo);
		if (!L_7)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_8 = Event_get_keyCode_m2603(__this, /*hidden argument*/&Event_get_keyCode_m2603_MethodInfo);
		NullCheck(V_0);
		int32_t L_9 = Event_get_keyCode_m2603(V_0, /*hidden argument*/&Event_get_keyCode_m2603_MethodInfo);
		if ((((uint32_t)L_8) != ((uint32_t)L_9)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m2602(__this, /*hidden argument*/&Event_get_modifiers_m2602_MethodInfo);
		NullCheck(V_0);
		int32_t L_11 = Event_get_modifiers_m2602(V_0, /*hidden argument*/&Event_get_modifiers_m2602_MethodInfo);
		G_B13_0 = ((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
		goto IL_0081;
	}

IL_0080:
	{
		G_B13_0 = 0;
	}

IL_0081:
	{
		return G_B13_0;
	}

IL_0082:
	{
		bool L_12 = Event_get_isMouse_m5269(__this, /*hidden argument*/&Event_get_isMouse_m5269_MethodInfo);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		Vector2_t32  L_13 = Event_get_mousePosition_m5262(__this, /*hidden argument*/&Event_get_mousePosition_m5262_MethodInfo);
		NullCheck(V_0);
		Vector2_t32  L_14 = Event_get_mousePosition_m5262(V_0, /*hidden argument*/&Event_get_mousePosition_m5262_MethodInfo);
		bool L_15 = Vector2_op_Equality_m2835(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&Vector2_op_Equality_m2835_MethodInfo);
		return L_15;
	}

IL_009f:
	{
		return 0;
	}
}
// System.String UnityEngine.Event::ToString()
extern MethodInfo Event_ToString_m5272_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Event_ToString_m5272 (Event_t397 * __this, MethodInfo* method)
{
	static bool Event_ToString_m5272_init;
	if (!Event_ToString_m5272_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Event_ToString_m5272_init = true;
	}
	{
		bool L_0 = Event_get_isKey_m5268(__this, /*hidden argument*/&Event_get_isKey_m5268_MethodInfo);
		if (!L_0)
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_1 = Event_get_character_m2604(__this, /*hidden argument*/&Event_get_character_m2604_MethodInfo);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t137* L_2 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 3));
		int32_t L_3 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&EventType_t1086_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		ObjectU5BU5D_t137* L_6 = L_2;
		int32_t L_7 = Event_get_modifiers_m2602(__this, /*hidden argument*/&Event_get_modifiers_m2602_MethodInfo);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&EventModifiers_t1087_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1)) = (Object_t *)L_9;
		ObjectU5BU5D_t137* L_10 = L_6;
		int32_t L_11 = Event_get_keyCode_m2603(__this, /*hidden argument*/&Event_get_keyCode_m2603_MethodInfo);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&KeyCode_t1085_il2cpp_TypeInfo), &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2)) = (Object_t *)L_13;
		String_t* L_14 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral911, L_10, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_14;
	}

IL_0051:
	{
		ObjectU5BU5D_t137* L_15 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 8));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral912);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0)) = (Object_t *)(String_t*) &_stringLiteral912;
		ObjectU5BU5D_t137* L_16 = L_15;
		int32_t L_17 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&EventType_t1086_il2cpp_TypeInfo), &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1)) = (Object_t *)L_19;
		ObjectU5BU5D_t137* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, (String_t*) &_stringLiteral913);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2)) = (Object_t *)(String_t*) &_stringLiteral913;
		ObjectU5BU5D_t137* L_21 = L_20;
		uint16_t L_22 = Event_get_character_m2604(__this, /*hidden argument*/&Event_get_character_m2604_MethodInfo);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t137* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, (String_t*) &_stringLiteral914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)(String_t*) &_stringLiteral914;
		ObjectU5BU5D_t137* L_26 = L_25;
		int32_t L_27 = Event_get_modifiers_m2602(__this, /*hidden argument*/&Event_get_modifiers_m2602_MethodInfo);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(InitializedTypeInfo(&EventModifiers_t1087_il2cpp_TypeInfo), &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5)) = (Object_t *)L_29;
		ObjectU5BU5D_t137* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, (String_t*) &_stringLiteral915);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6)) = (Object_t *)(String_t*) &_stringLiteral915;
		ObjectU5BU5D_t137* L_31 = L_30;
		int32_t L_32 = Event_get_keyCode_m2603(__this, /*hidden argument*/&Event_get_keyCode_m2603_MethodInfo);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&KeyCode_t1085_il2cpp_TypeInfo), &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 7);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 7)) = (Object_t *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_35 = String_Concat_m595(NULL /*static, unused*/, L_31, /*hidden argument*/&String_Concat_m595_MethodInfo);
		String_t* L_36 = UnityString_Format_m5383(NULL /*static, unused*/, L_35, ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_36;
	}

IL_00c0:
	{
		bool L_37 = Event_get_isMouse_m5269(__this, /*hidden argument*/&Event_get_isMouse_m5269_MethodInfo);
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		ObjectU5BU5D_t137* L_38 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 3));
		int32_t L_39 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		int32_t L_40 = L_39;
		Object_t * L_41 = Box(InitializedTypeInfo(&EventType_t1086_il2cpp_TypeInfo), &L_40);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 0);
		ArrayElementTypeCheck (L_38, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 0)) = (Object_t *)L_41;
		ObjectU5BU5D_t137* L_42 = L_38;
		Vector2_t32  L_43 = Event_get_mousePosition_m5262(__this, /*hidden argument*/&Event_get_mousePosition_m5262_MethodInfo);
		Vector2_t32  L_44 = L_43;
		Object_t * L_45 = Box(InitializedTypeInfo(&Vector2_t32_il2cpp_TypeInfo), &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 1)) = (Object_t *)L_45;
		ObjectU5BU5D_t137* L_46 = L_42;
		int32_t L_47 = Event_get_modifiers_m2602(__this, /*hidden argument*/&Event_get_modifiers_m2602_MethodInfo);
		int32_t L_48 = L_47;
		Object_t * L_49 = Box(InitializedTypeInfo(&EventModifiers_t1087_il2cpp_TypeInfo), &L_48);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		ArrayElementTypeCheck (L_46, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2)) = (Object_t *)L_49;
		String_t* L_50 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral916, L_46, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_50;
	}

IL_0106:
	{
		int32_t L_51 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		if ((((uint32_t)L_52) != ((uint32_t)((int32_t)13))))
		{
			goto IL_0148;
		}
	}

IL_0120:
	{
		ObjectU5BU5D_t137* L_53 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 2));
		int32_t L_54 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		int32_t L_55 = L_54;
		Object_t * L_56 = Box(InitializedTypeInfo(&EventType_t1086_il2cpp_TypeInfo), &L_55);
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
		ArrayElementTypeCheck (L_53, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 0)) = (Object_t *)L_56;
		ObjectU5BU5D_t137* L_57 = L_53;
		String_t* L_58 = Event_get_commandName_m5264(__this, /*hidden argument*/&Event_get_commandName_m5264_MethodInfo);
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 1);
		ArrayElementTypeCheck (L_57, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_57, 1)) = (Object_t *)L_58;
		String_t* L_59 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral917, L_57, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_59;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_60 = Event_get_type_m5261(__this, /*hidden argument*/&Event_get_type_m5261_MethodInfo);
		int32_t L_61 = L_60;
		Object_t * L_62 = Box(InitializedTypeInfo(&EventType_t1086_il2cpp_TypeInfo), &L_61);
		String_t* L_63 = String_Concat_m591(NULL /*static, unused*/, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), L_62, /*hidden argument*/&String_Concat_m591_MethodInfo);
		return L_63;
	}
}
// Conversion methods for marshalling of: UnityEngine.Event
void Event_t397_marshal(const Event_t397& unmarshaled, Event_t397_marshaled& marshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
void Event_t397_marshal_back(const Event_t397_marshaled& marshaled, Event_t397& unmarshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
void Event_t397_marshal_cleanup(Event_t397_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCodeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiersMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Single
#include "mscorlib_System_Single.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern TypeInfo IndexOutOfRangeException_t787_il2cpp_TypeInfo;
extern TypeInfo Single_t57_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
extern TypeInfo Vector3_t54_il2cpp_TypeInfo;
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern MethodInfo IndexOutOfRangeException__ctor_m3865_MethodInfo;
extern MethodInfo Vector2__ctor_m179_MethodInfo;
extern MethodInfo Single_GetHashCode_m5581_MethodInfo;
extern MethodInfo Single_Equals_m5607_MethodInfo;
extern MethodInfo Vector2_op_Subtraction_m2352_MethodInfo;
extern MethodInfo Vector2_SqrMagnitude_m5276_MethodInfo;
extern MethodInfo Vector3__ctor_m222_MethodInfo;


// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" void Vector2__ctor_m179 (Vector2_t32 * __this, float ___x, float ___y, MethodInfo* method)
{
	{
		__this->___x_1 = ___x;
		__this->___y_2 = ___y;
		return;
	}
}
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern MethodInfo Vector2_get_Item_m2551_MethodInfo;
extern "C" float Vector2_get_Item_m2551 (Vector2_t32 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ___index;
		if (!V_0)
		{
			goto IL_0014;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		float L_0 = (__this->___x_1);
		return L_0;
	}

IL_001b:
	{
		float L_1 = (__this->___y_2);
		return L_1;
	}

IL_0022:
	{
		IndexOutOfRangeException_t787 * L_2 = (IndexOutOfRangeException_t787 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t787_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3865(L_2, (String_t*) &_stringLiteral918, /*hidden argument*/&IndexOutOfRangeException__ctor_m3865_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern MethodInfo Vector2_set_Item_m2560_MethodInfo;
extern "C" void Vector2_set_Item_m2560 (Vector2_t32 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ___index;
		if (!V_0)
		{
			goto IL_0014;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		__this->___x_1 = ___value;
		goto IL_0037;
	}

IL_0020:
	{
		__this->___y_2 = ___value;
		goto IL_0037;
	}

IL_002c:
	{
		IndexOutOfRangeException_t787 * L_0 = (IndexOutOfRangeException_t787 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t787_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3865(L_0, (String_t*) &_stringLiteral918, /*hidden argument*/&IndexOutOfRangeException__ctor_m3865_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0037:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_Scale_m2635_MethodInfo;
extern "C" Vector2_t32  Vector2_Scale_m2635 (Object_t * __this /* static, unused */, Vector2_t32  ___a, Vector2_t32  ___b, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___b));
		float L_1 = ((&___b)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___b));
		float L_3 = ((&___b)->___y_2);
		Vector2_t32  L_4 = {0};
		Vector2__ctor_m179(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_4;
	}
}
// System.String UnityEngine.Vector2::ToString()
extern MethodInfo Vector2_ToString_m5273_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Vector2_ToString_m5273 (Vector2_t32 * __this, MethodInfo* method)
{
	static bool Vector2_ToString_m5273_init;
	if (!Vector2_ToString_m5273_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Vector2_ToString_m5273_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 2));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral919, L_4, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" int32_t Vector2_GetHashCode_m5274 (Vector2_t32 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m5581(L_0, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m5581(L_2, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern MethodInfo Vector2_Equals_m5275_MethodInfo;
extern "C" bool Vector2_Equals_m5275 (Vector2_t32 * __this, Object_t * ___other, MethodInfo* method)
{
	Vector2_t32  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Vector2_t32_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = ((*(Vector2_t32 *)((Vector2_t32 *)UnBox (___other, InitializedTypeInfo(&Vector2_t32_il2cpp_TypeInfo)))));
		float* L_0 = &(__this->___x_1);
		NullCheck((&V_0));
		float L_1 = ((&V_0)->___x_1);
		bool L_2 = Single_Equals_m5607(L_0, L_1, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		float* L_3 = &(__this->___y_2);
		NullCheck((&V_0));
		float L_4 = ((&V_0)->___y_2);
		bool L_5 = Single_Equals_m5607(L_3, L_4, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		G_B5_0 = ((int32_t)(L_5));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern MethodInfo Vector2_get_sqrMagnitude_m2334_MethodInfo;
extern "C" float Vector2_get_sqrMagnitude_m2334 (Vector2_t32 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m5276 (Object_t * __this /* static, unused */, Vector2_t32  ___a, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_3 = ((&___a)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern MethodInfo Vector2_get_zero_m2333_MethodInfo;
extern "C" Vector2_t32  Vector2_get_zero_m2333 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t32  L_0 = {0};
		Vector2__ctor_m179(&L_0, (0.0f), (0.0f), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern MethodInfo Vector2_get_one_m2547_MethodInfo;
extern "C" Vector2_t32  Vector2_get_one_m2547 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t32  L_0 = {0};
		Vector2__ctor_m179(&L_0, (1.0f), (1.0f), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern MethodInfo Vector2_get_up_m2779_MethodInfo;
extern "C" Vector2_t32  Vector2_get_up_m2779 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t32  L_0 = {0};
		Vector2__ctor_m179(&L_0, (0.0f), (1.0f), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_op_Addition_m2550_MethodInfo;
extern "C" Vector2_t32  Vector2_op_Addition_m2550 (Object_t * __this /* static, unused */, Vector2_t32  ___a, Vector2_t32  ___b, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___b));
		float L_1 = ((&___b)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___b));
		float L_3 = ((&___b)->___y_2);
		Vector2_t32  L_4 = {0};
		Vector2__ctor_m179(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t32  Vector2_op_Subtraction_m2352 (Object_t * __this /* static, unused */, Vector2_t32  ___a, Vector2_t32  ___b, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___b));
		float L_1 = ((&___b)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___b));
		float L_3 = ((&___b)->___y_2);
		Vector2_t32  L_4 = {0};
		Vector2__ctor_m179(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern MethodInfo Vector2_op_Multiply_m2548_MethodInfo;
extern "C" Vector2_t32  Vector2_op_Multiply_m2548 (Object_t * __this /* static, unused */, Vector2_t32  ___a, float ___d, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___y_2);
		Vector2_t32  L_2 = {0};
		Vector2__ctor_m179(&L_2, ((float)((float)L_0*(float)___d)), ((float)((float)L_1*(float)___d)), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern MethodInfo Vector2_op_Division_m2601_MethodInfo;
extern "C" Vector2_t32  Vector2_op_Division_m2601 (Object_t * __this /* static, unused */, Vector2_t32  ___a, float ___d, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___y_2);
		Vector2_t32  L_2 = {0};
		Vector2__ctor_m179(&L_2, ((float)((float)L_0/(float)___d)), ((float)((float)L_1/(float)___d)), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m2835 (Object_t * __this /* static, unused */, Vector2_t32  ___lhs, Vector2_t32  ___rhs, MethodInfo* method)
{
	{
		Vector2_t32  L_0 = Vector2_op_Subtraction_m2352(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&Vector2_op_Subtraction_m2352_MethodInfo);
		float L_1 = Vector2_SqrMagnitude_m5276(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector2_SqrMagnitude_m5276_MethodInfo);
		return ((((float)L_1) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_op_Inequality_m2628_MethodInfo;
extern "C" bool Vector2_op_Inequality_m2628 (Object_t * __this /* static, unused */, Vector2_t32  ___lhs, Vector2_t32  ___rhs, MethodInfo* method)
{
	{
		Vector2_t32  L_0 = Vector2_op_Subtraction_m2352(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&Vector2_op_Subtraction_m2352_MethodInfo);
		float L_1 = Vector2_SqrMagnitude_m5276(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector2_SqrMagnitude_m5276_MethodInfo);
		return ((((int32_t)((((float)L_1) < ((float)(9.99999944E-11f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern MethodInfo Vector2_op_Implicit_m2354_MethodInfo;
extern "C" Vector2_t32  Vector2_op_Implicit_m2354 (Object_t * __this /* static, unused */, Vector3_t54  ___v, MethodInfo* method)
{
	{
		NullCheck((&___v));
		float L_0 = ((&___v)->___x_1);
		NullCheck((&___v));
		float L_1 = ((&___v)->___y_2);
		Vector2_t32  L_2 = {0};
		Vector2__ctor_m179(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern MethodInfo Vector2_op_Implicit_m2397_MethodInfo;
extern "C" Vector3_t54  Vector2_op_Implicit_m2397 (Object_t * __this /* static, unused */, Vector2_t32  ___v, MethodInfo* method)
{
	{
		NullCheck((&___v));
		float L_0 = ((&___v)->___x_1);
		NullCheck((&___v));
		float L_1 = ((&___v)->___y_2);
		Vector3_t54  L_2 = {0};
		Vector3__ctor_m222(&L_2, L_0, L_1, (0.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern MethodInfo Vector3_Normalize_m5280_MethodInfo;
extern MethodInfo Mathf_Sqrt_m944_MethodInfo;
extern MethodInfo Mathf_Clamp01_m199_MethodInfo;
extern MethodInfo Vector3_INTERNAL_CALL_Slerp_m5277_MethodInfo;
extern MethodInfo Vector3_Magnitude_m5283_MethodInfo;
extern MethodInfo Vector3_op_Division_m5286_MethodInfo;
extern MethodInfo Vector3_get_zero_m201_MethodInfo;
extern MethodInfo Single_ToString_m1030_MethodInfo;
extern MethodInfo Vector3_get_normalized_m604_MethodInfo;
extern MethodInfo Vector3_Dot_m539_MethodInfo;
extern MethodInfo Mathf_Clamp_m192_MethodInfo;
extern MethodInfo Mathf_Acos_m5364_MethodInfo;
extern MethodInfo Mathf_Min_m916_MethodInfo;
extern MethodInfo Mathf_Max_m915_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m923_MethodInfo;
extern MethodInfo Vector3_SqrMagnitude_m5284_MethodInfo;


// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" void Vector3__ctor_m222 (Vector3_t54 * __this, float ___x, float ___y, float ___z, MethodInfo* method)
{
	{
		__this->___x_1 = ___x;
		__this->___y_2 = ___y;
		__this->___z_3 = ___z;
		return;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern MethodInfo Vector3__ctor_m665_MethodInfo;
extern "C" void Vector3__ctor_m665 (Vector3_t54 * __this, float ___x, float ___y, MethodInfo* method)
{
	{
		__this->___x_1 = ___x;
		__this->___y_2 = ___y;
		__this->___z_3 = (0.0f);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern MethodInfo Vector3_Lerp_m2688_MethodInfo;
extern "C" Vector3_t54  Vector3_Lerp_m2688 (Object_t * __this /* static, unused */, Vector3_t54  ___from, Vector3_t54  ___to, float ___t, MethodInfo* method)
{
	{
		float L_0 = Mathf_Clamp01_m199(NULL /*static, unused*/, ___t, /*hidden argument*/&Mathf_Clamp01_m199_MethodInfo);
		___t = L_0;
		NullCheck((&___from));
		float L_1 = ((&___from)->___x_1);
		NullCheck((&___to));
		float L_2 = ((&___to)->___x_1);
		NullCheck((&___from));
		float L_3 = ((&___from)->___x_1);
		NullCheck((&___from));
		float L_4 = ((&___from)->___y_2);
		NullCheck((&___to));
		float L_5 = ((&___to)->___y_2);
		NullCheck((&___from));
		float L_6 = ((&___from)->___y_2);
		NullCheck((&___from));
		float L_7 = ((&___from)->___z_3);
		NullCheck((&___to));
		float L_8 = ((&___to)->___z_3);
		NullCheck((&___from));
		float L_9 = ((&___from)->___z_3);
		Vector3_t54  L_10 = {0};
		Vector3__ctor_m222(&L_10, ((float)((float)L_1+(float)((float)((float)((float)((float)L_2-(float)L_3))*(float)___t)))), ((float)((float)L_4+(float)((float)((float)((float)((float)L_5-(float)L_6))*(float)___t)))), ((float)((float)L_7+(float)((float)((float)((float)((float)L_8-(float)L_9))*(float)___t)))), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_10;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern MethodInfo Vector3_Slerp_m933_MethodInfo;
extern "C" Vector3_t54  Vector3_Slerp_m933 (Object_t * __this /* static, unused */, Vector3_t54  ___from, Vector3_t54  ___to, float ___t, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Vector3_INTERNAL_CALL_Slerp_m5277(NULL /*static, unused*/, (&___from), (&___to), ___t, /*hidden argument*/&Vector3_INTERNAL_CALL_Slerp_m5277_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
extern "C" Vector3_t54  Vector3_INTERNAL_CALL_Slerp_m5277 (Object_t * __this /* static, unused */, Vector3_t54 * ___from, Vector3_t54 * ___to, float ___t, MethodInfo* method)
{
	typedef Vector3_t54  (*Vector3_INTERNAL_CALL_Slerp_m5277_ftn) (Vector3_t54 *, Vector3_t54 *, float);
	static Vector3_INTERNAL_CALL_Slerp_m5277_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Vector3_INTERNAL_CALL_Slerp_m5277_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)");
	return _il2cpp_icall_func(___from, ___to, ___t);
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern MethodInfo Vector3_get_Item_m2690_MethodInfo;
extern "C" float Vector3_get_Item_m2690 (Vector3_t54 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ___index;
		if (V_0 == 0)
		{
			goto IL_0019;
		}
		if (V_0 == 1)
		{
			goto IL_0020;
		}
		if (V_0 == 2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		float L_0 = (__this->___x_1);
		return L_0;
	}

IL_0020:
	{
		float L_1 = (__this->___y_2);
		return L_1;
	}

IL_0027:
	{
		float L_2 = (__this->___z_3);
		return L_2;
	}

IL_002e:
	{
		IndexOutOfRangeException_t787 * L_3 = (IndexOutOfRangeException_t787 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t787_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3865(L_3, (String_t*) &_stringLiteral920, /*hidden argument*/&IndexOutOfRangeException__ctor_m3865_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern MethodInfo Vector3_set_Item_m2691_MethodInfo;
extern "C" void Vector3_set_Item_m2691 (Vector3_t54 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ___index;
		if (V_0 == 0)
		{
			goto IL_0019;
		}
		if (V_0 == 1)
		{
			goto IL_0025;
		}
		if (V_0 == 2)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		__this->___x_1 = ___value;
		goto IL_0048;
	}

IL_0025:
	{
		__this->___y_2 = ___value;
		goto IL_0048;
	}

IL_0031:
	{
		__this->___z_3 = ___value;
		goto IL_0048;
	}

IL_003d:
	{
		IndexOutOfRangeException_t787 * L_0 = (IndexOutOfRangeException_t787 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t787_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3865(L_0, (String_t*) &_stringLiteral920, /*hidden argument*/&IndexOutOfRangeException__ctor_m3865_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0048:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern MethodInfo Vector3_GetHashCode_m5278_MethodInfo;
extern "C" int32_t Vector3_GetHashCode_m5278 (Vector3_t54 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m5581(L_0, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m5581(L_2, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m5581(L_4, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern MethodInfo Vector3_Equals_m5279_MethodInfo;
extern "C" bool Vector3_Equals_m5279 (Vector3_t54 * __this, Object_t * ___other, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Vector3_t54_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = ((*(Vector3_t54 *)((Vector3_t54 *)UnBox (___other, InitializedTypeInfo(&Vector3_t54_il2cpp_TypeInfo)))));
		float* L_0 = &(__this->___x_1);
		NullCheck((&V_0));
		float L_1 = ((&V_0)->___x_1);
		bool L_2 = Single_Equals_m5607(L_0, L_1, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		float* L_3 = &(__this->___y_2);
		NullCheck((&V_0));
		float L_4 = ((&V_0)->___y_2);
		bool L_5 = Single_Equals_m5607(L_3, L_4, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		float* L_6 = &(__this->___z_3);
		NullCheck((&V_0));
		float L_7 = ((&V_0)->___z_3);
		bool L_8 = Single_Equals_m5607(L_6, L_7, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		G_B6_0 = ((int32_t)(L_8));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t54  Vector3_Normalize_m5280 (Object_t * __this /* static, unused */, Vector3_t54  ___value, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Vector3_Magnitude_m5283(NULL /*static, unused*/, ___value, /*hidden argument*/&Vector3_Magnitude_m5283_MethodInfo);
		V_0 = L_0;
		if ((((float)V_0) <= ((float)(1.0E-05f))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t54  L_1 = Vector3_op_Division_m5286(NULL /*static, unused*/, ___value, V_0, /*hidden argument*/&Vector3_op_Division_m5286_MethodInfo);
		return L_1;
	}

IL_001a:
	{
		Vector3_t54  L_2 = Vector3_get_zero_m201(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m201_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Vector3::Normalize()
extern MethodInfo Vector3_Normalize_m971_MethodInfo;
extern "C" void Vector3_Normalize_m971 (Vector3_t54 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Vector3_Magnitude_m5283(NULL /*static, unused*/, (*(Vector3_t54 *)__this), /*hidden argument*/&Vector3_Magnitude_m5283_MethodInfo);
		V_0 = L_0;
		if ((((float)V_0) <= ((float)(1.0E-05f))))
		{
			goto IL_002e;
		}
	}
	{
		Vector3_t54  L_1 = Vector3_op_Division_m5286(NULL /*static, unused*/, (*(Vector3_t54 *)__this), V_0, /*hidden argument*/&Vector3_op_Division_m5286_MethodInfo);
		*__this = L_1;
		goto IL_0039;
	}

IL_002e:
	{
		Vector3_t54  L_2 = Vector3_get_zero_m201(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m201_MethodInfo);
		*__this = L_2;
	}

IL_0039:
	{
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" Vector3_t54  Vector3_get_normalized_m604 (Vector3_t54 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Vector3_Normalize_m5280(NULL /*static, unused*/, (*(Vector3_t54 *)__this), /*hidden argument*/&Vector3_Normalize_m5280_MethodInfo);
		return L_0;
	}
}
// System.String UnityEngine.Vector3::ToString()
extern MethodInfo Vector3_ToString_m5281_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Vector3_ToString_m5281 (Vector3_t54 * __this, MethodInfo* method)
{
	static bool Vector3_ToString_m5281_init;
	if (!Vector3_ToString_m5281_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Vector3_ToString_m5281_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 3));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t137* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral921, L_8, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_12;
	}
}
// System.String UnityEngine.Vector3::ToString(System.String)
extern MethodInfo Vector3_ToString_m5282_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Vector3_ToString_m5282 (Vector3_t54 * __this, String_t* ___format, MethodInfo* method)
{
	static bool Vector3_ToString_m5282_init;
	if (!Vector3_ToString_m5282_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Vector3_ToString_m5282_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 3));
		float* L_1 = &(__this->___x_1);
		String_t* L_2 = Single_ToString_m1030(L_1, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_2;
		ObjectU5BU5D_t137* L_3 = L_0;
		float* L_4 = &(__this->___y_2);
		String_t* L_5 = Single_ToString_m1030(L_4, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t137* L_6 = L_3;
		float* L_7 = &(__this->___z_3);
		String_t* L_8 = Single_ToString_m1030(L_7, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_8;
		String_t* L_9 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral922, L_6, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_9;
	}
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Dot_m539 (Object_t * __this /* static, unused */, Vector3_t54  ___lhs, Vector3_t54  ___rhs, MethodInfo* method)
{
	{
		NullCheck((&___lhs));
		float L_0 = ((&___lhs)->___x_1);
		NullCheck((&___rhs));
		float L_1 = ((&___rhs)->___x_1);
		NullCheck((&___lhs));
		float L_2 = ((&___lhs)->___y_2);
		NullCheck((&___rhs));
		float L_3 = ((&___rhs)->___y_2);
		NullCheck((&___lhs));
		float L_4 = ((&___lhs)->___z_3);
		NullCheck((&___rhs));
		float L_5 = ((&___rhs)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Angle_m925_MethodInfo;
extern "C" float Vector3_Angle_m925 (Object_t * __this /* static, unused */, Vector3_t54  ___from, Vector3_t54  ___to, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Vector3_get_normalized_m604((&___from), /*hidden argument*/&Vector3_get_normalized_m604_MethodInfo);
		Vector3_t54  L_1 = Vector3_get_normalized_m604((&___to), /*hidden argument*/&Vector3_get_normalized_m604_MethodInfo);
		float L_2 = Vector3_Dot_m539(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Dot_m539_MethodInfo);
		float L_3 = Mathf_Clamp_m192(NULL /*static, unused*/, L_2, (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		float L_4 = acosf(L_3);
		return ((float)((float)L_4*(float)(57.29578f)));
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Distance_m2403_MethodInfo;
extern "C" float Vector3_Distance_m2403 (Object_t * __this /* static, unused */, Vector3_t54  ___a, Vector3_t54  ___b, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___b));
		float L_1 = ((&___b)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___b));
		float L_3 = ((&___b)->___y_2);
		NullCheck((&___a));
		float L_4 = ((&___a)->___z_3);
		NullCheck((&___b));
		float L_5 = ((&___b)->___z_3);
		Vector3__ctor_m222((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		NullCheck((&V_0));
		float L_6 = ((&V_0)->___x_1);
		NullCheck((&V_0));
		float L_7 = ((&V_0)->___x_1);
		NullCheck((&V_0));
		float L_8 = ((&V_0)->___y_2);
		NullCheck((&V_0));
		float L_9 = ((&V_0)->___y_2);
		NullCheck((&V_0));
		float L_10 = ((&V_0)->___z_3);
		NullCheck((&V_0));
		float L_11 = ((&V_0)->___z_3);
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" float Vector3_Magnitude_m5283 (Object_t * __this /* static, unused */, Vector3_t54  ___a, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_3 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_4 = ((&___a)->___z_3);
		NullCheck((&___a));
		float L_5 = ((&___a)->___z_3);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::get_magnitude()
extern MethodInfo Vector3_get_magnitude_m924_MethodInfo;
extern "C" float Vector3_get_magnitude_m924 (Vector3_t54 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m5284 (Object_t * __this /* static, unused */, Vector3_t54  ___a, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_3 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_4 = ((&___a)->___z_3);
		NullCheck((&___a));
		float L_5 = ((&___a)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern MethodInfo Vector3_get_sqrMagnitude_m2717_MethodInfo;
extern "C" float Vector3_get_sqrMagnitude_m2717 (Vector3_t54 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Min_m2700_MethodInfo;
extern "C" Vector3_t54  Vector3_Min_m2700 (Object_t * __this /* static, unused */, Vector3_t54  ___lhs, Vector3_t54  ___rhs, MethodInfo* method)
{
	{
		NullCheck((&___lhs));
		float L_0 = ((&___lhs)->___x_1);
		NullCheck((&___rhs));
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = Mathf_Min_m916(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Min_m916_MethodInfo);
		NullCheck((&___lhs));
		float L_3 = ((&___lhs)->___y_2);
		NullCheck((&___rhs));
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Min_m916(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Min_m916_MethodInfo);
		NullCheck((&___lhs));
		float L_6 = ((&___lhs)->___z_3);
		NullCheck((&___rhs));
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Min_m916(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Mathf_Min_m916_MethodInfo);
		Vector3_t54  L_9 = {0};
		Vector3__ctor_m222(&L_9, L_2, L_5, L_8, /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Max_m2701_MethodInfo;
extern "C" Vector3_t54  Vector3_Max_m2701 (Object_t * __this /* static, unused */, Vector3_t54  ___lhs, Vector3_t54  ___rhs, MethodInfo* method)
{
	{
		NullCheck((&___lhs));
		float L_0 = ((&___lhs)->___x_1);
		NullCheck((&___rhs));
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = Mathf_Max_m915(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		NullCheck((&___lhs));
		float L_3 = ((&___lhs)->___y_2);
		NullCheck((&___rhs));
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Max_m915(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		NullCheck((&___lhs));
		float L_6 = ((&___lhs)->___z_3);
		NullCheck((&___rhs));
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Max_m915(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		Vector3_t54  L_9 = {0};
		Vector3__ctor_m222(&L_9, L_2, L_5, L_8, /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t54  Vector3_get_zero_m201 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern MethodInfo Vector3_get_one_m203_MethodInfo;
extern "C" Vector3_t54  Vector3_get_one_m203 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern MethodInfo Vector3_get_forward_m910_MethodInfo;
extern "C" Vector3_t54  Vector3_get_forward_m910 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, (0.0f), (0.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern MethodInfo Vector3_get_back_m5285_MethodInfo;
extern "C" Vector3_t54  Vector3_get_back_m5285 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern MethodInfo Vector3_get_up_m912_MethodInfo;
extern "C" Vector3_t54  Vector3_get_up_m912 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern MethodInfo Vector3_get_down_m2720_MethodInfo;
extern "C" Vector3_t54  Vector3_get_down_m2720 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, (0.0f), (-1.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern MethodInfo Vector3_get_left_m2719_MethodInfo;
extern "C" Vector3_t54  Vector3_get_left_m2719 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, (-1.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern MethodInfo Vector3_get_right_m911_MethodInfo;
extern "C" Vector3_t54  Vector3_get_right_m911 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, (1.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Addition_m602_MethodInfo;
extern "C" Vector3_t54  Vector3_op_Addition_m602 (Object_t * __this /* static, unused */, Vector3_t54  ___a, Vector3_t54  ___b, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___b));
		float L_1 = ((&___b)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___b));
		float L_3 = ((&___b)->___y_2);
		NullCheck((&___a));
		float L_4 = ((&___a)->___z_3);
		NullCheck((&___b));
		float L_5 = ((&___b)->___z_3);
		Vector3_t54  L_6 = {0};
		Vector3__ctor_m222(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t54  Vector3_op_Subtraction_m923 (Object_t * __this /* static, unused */, Vector3_t54  ___a, Vector3_t54  ___b, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___b));
		float L_1 = ((&___b)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___b));
		float L_3 = ((&___b)->___y_2);
		NullCheck((&___a));
		float L_4 = ((&___a)->___z_3);
		NullCheck((&___b));
		float L_5 = ((&___b)->___z_3);
		Vector3_t54  L_6 = {0};
		Vector3__ctor_m222(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern MethodInfo Vector3_op_Multiply_m601_MethodInfo;
extern "C" Vector3_t54  Vector3_op_Multiply_m601 (Object_t * __this /* static, unused */, Vector3_t54  ___a, float ___d, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_2 = ((&___a)->___z_3);
		Vector3_t54  L_3 = {0};
		Vector3__ctor_m222(&L_3, ((float)((float)L_0*(float)___d)), ((float)((float)L_1*(float)___d)), ((float)((float)L_2*(float)___d)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Multiply_m950_MethodInfo;
extern "C" Vector3_t54  Vector3_op_Multiply_m950 (Object_t * __this /* static, unused */, float ___d, Vector3_t54  ___a, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_2 = ((&___a)->___z_3);
		Vector3_t54  L_3 = {0};
		Vector3__ctor_m222(&L_3, ((float)((float)L_0*(float)___d)), ((float)((float)L_1*(float)___d)), ((float)((float)L_2*(float)___d)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t54  Vector3_op_Division_m5286 (Object_t * __this /* static, unused */, Vector3_t54  ___a, float ___d, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_2 = ((&___a)->___z_3);
		Vector3_t54  L_3 = {0};
		Vector3__ctor_m222(&L_3, ((float)((float)L_0/(float)___d)), ((float)((float)L_1/(float)___d)), ((float)((float)L_2/(float)___d)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Equality_m5287_MethodInfo;
extern "C" bool Vector3_op_Equality_m5287 (Object_t * __this /* static, unused */, Vector3_t54  ___lhs, Vector3_t54  ___rhs, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		float L_1 = Vector3_SqrMagnitude_m5284(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector3_SqrMagnitude_m5284_MethodInfo);
		return ((((float)L_1) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Inequality_m2627_MethodInfo;
extern "C" bool Vector3_op_Inequality_m2627 (Object_t * __this /* static, unused */, Vector3_t54  ___lhs, Vector3_t54  ___rhs, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		float L_1 = Vector3_SqrMagnitude_m5284(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector3_SqrMagnitude_m5284_MethodInfo);
		return ((((int32_t)((((float)L_1) < ((float)(9.99999944E-11f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Color_t29_il2cpp_TypeInfo;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"

// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern TypeInfo Vector4_t52_il2cpp_TypeInfo;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo Color__ctor_m196_MethodInfo;
extern MethodInfo Color_op_Implicit_m908_MethodInfo;
extern MethodInfo Vector4_GetHashCode_m5354_MethodInfo;
extern MethodInfo Vector4__ctor_m193_MethodInfo;


// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m196 (Color_t29 * __this, float ___r, float ___g, float ___b, float ___a, MethodInfo* method)
{
	{
		__this->___r_0 = ___r;
		__this->___g_1 = ___g;
		__this->___b_2 = ___b;
		__this->___a_3 = ___a;
		return;
	}
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern MethodInfo Color__ctor_m937_MethodInfo;
extern "C" void Color__ctor_m937 (Color_t29 * __this, float ___r, float ___g, float ___b, MethodInfo* method)
{
	{
		__this->___r_0 = ___r;
		__this->___g_1 = ___g;
		__this->___b_2 = ___b;
		__this->___a_3 = (1.0f);
		return;
	}
}
// System.String UnityEngine.Color::ToString()
extern MethodInfo Color_ToString_m5288_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Color_ToString_m5288 (Color_t29 * __this, MethodInfo* method)
{
	static bool Color_ToString_m5288_init;
	if (!Color_ToString_m5288_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Color_ToString_m5288_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___r_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		float L_5 = (__this->___g_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t137* L_8 = L_4;
		float L_9 = (__this->___b_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t137* L_12 = L_8;
		float L_13 = (__this->___a_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral923, L_12, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_16;
	}
}
// System.Int32 UnityEngine.Color::GetHashCode()
extern MethodInfo Color_GetHashCode_m5289_MethodInfo;
extern "C" int32_t Color_GetHashCode_m5289 (Color_t29 * __this, MethodInfo* method)
{
	Vector4_t52  V_0 = {0};
	{
		Vector4_t52  L_0 = Color_op_Implicit_m908(NULL /*static, unused*/, (*(Color_t29 *)__this), /*hidden argument*/&Color_op_Implicit_m908_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m5354((&V_0), /*hidden argument*/&Vector4_GetHashCode_m5354_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern MethodInfo Color_Equals_m2485_MethodInfo;
extern "C" bool Color_Equals_m2485 (Color_t29 * __this, Object_t * ___other, MethodInfo* method)
{
	Color_t29  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Color_t29_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = ((*(Color_t29 *)((Color_t29 *)UnBox (___other, InitializedTypeInfo(&Color_t29_il2cpp_TypeInfo)))));
		float* L_0 = &(__this->___r_0);
		NullCheck((&V_0));
		float L_1 = ((&V_0)->___r_0);
		bool L_2 = Single_Equals_m5607(L_0, L_1, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		float* L_3 = &(__this->___g_1);
		NullCheck((&V_0));
		float L_4 = ((&V_0)->___g_1);
		bool L_5 = Single_Equals_m5607(L_3, L_4, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		float* L_6 = &(__this->___b_2);
		NullCheck((&V_0));
		float L_7 = ((&V_0)->___b_2);
		bool L_8 = Single_Equals_m5607(L_6, L_7, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		float* L_9 = &(__this->___a_3);
		NullCheck((&V_0));
		float L_10 = ((&V_0)->___a_3);
		bool L_11 = Single_Equals_m5607(L_9, L_10, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern MethodInfo Color_Lerp_m2418_MethodInfo;
extern "C" Color_t29  Color_Lerp_m2418 (Object_t * __this /* static, unused */, Color_t29  ___a, Color_t29  ___b, float ___t, MethodInfo* method)
{
	{
		float L_0 = Mathf_Clamp01_m199(NULL /*static, unused*/, ___t, /*hidden argument*/&Mathf_Clamp01_m199_MethodInfo);
		___t = L_0;
		NullCheck((&___a));
		float L_1 = ((&___a)->___r_0);
		NullCheck((&___b));
		float L_2 = ((&___b)->___r_0);
		NullCheck((&___a));
		float L_3 = ((&___a)->___r_0);
		NullCheck((&___a));
		float L_4 = ((&___a)->___g_1);
		NullCheck((&___b));
		float L_5 = ((&___b)->___g_1);
		NullCheck((&___a));
		float L_6 = ((&___a)->___g_1);
		NullCheck((&___a));
		float L_7 = ((&___a)->___b_2);
		NullCheck((&___b));
		float L_8 = ((&___b)->___b_2);
		NullCheck((&___a));
		float L_9 = ((&___a)->___b_2);
		NullCheck((&___a));
		float L_10 = ((&___a)->___a_3);
		NullCheck((&___b));
		float L_11 = ((&___b)->___a_3);
		NullCheck((&___a));
		float L_12 = ((&___a)->___a_3);
		Color_t29  L_13 = {0};
		Color__ctor_m196(&L_13, ((float)((float)L_1+(float)((float)((float)((float)((float)L_2-(float)L_3))*(float)___t)))), ((float)((float)L_4+(float)((float)((float)((float)((float)L_5-(float)L_6))*(float)___t)))), ((float)((float)L_7+(float)((float)((float)((float)((float)L_8-(float)L_9))*(float)___t)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)___t)))), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		return L_13;
	}
}
// UnityEngine.Color UnityEngine.Color::get_red()
extern MethodInfo Color_get_red_m5290_MethodInfo;
extern "C" Color_t29  Color_get_red_m5290 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t29  L_0 = {0};
		Color__ctor_m196(&L_0, (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern MethodInfo Color_get_white_m903_MethodInfo;
extern "C" Color_t29  Color_get_white_m903 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t29  L_0 = {0};
		Color__ctor_m196(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_black()
extern MethodInfo Color_get_black_m623_MethodInfo;
extern "C" Color_t29  Color_get_black_m623 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t29  L_0 = {0};
		Color__ctor_m196(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_grey()
extern MethodInfo Color_get_grey_m617_MethodInfo;
extern "C" Color_t29  Color_get_grey_m617 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t29  L_0 = {0};
		Color__ctor_m196(&L_0, (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern MethodInfo Color_op_Multiply_m2714_MethodInfo;
extern "C" Color_t29  Color_op_Multiply_m2714 (Object_t * __this /* static, unused */, Color_t29  ___a, float ___b, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___r_0);
		NullCheck((&___a));
		float L_1 = ((&___a)->___g_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___b_2);
		NullCheck((&___a));
		float L_3 = ((&___a)->___a_3);
		Color_t29  L_4 = {0};
		Color__ctor_m196(&L_4, ((float)((float)L_0*(float)___b)), ((float)((float)L_1*(float)___b)), ((float)((float)L_2*(float)___b)), ((float)((float)L_3*(float)___b)), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(System.Single,UnityEngine.Color)
extern MethodInfo Color_op_Multiply_m907_MethodInfo;
extern "C" Color_t29  Color_op_Multiply_m907 (Object_t * __this /* static, unused */, float ___b, Color_t29  ___a, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___r_0);
		NullCheck((&___a));
		float L_1 = ((&___a)->___g_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___b_2);
		NullCheck((&___a));
		float L_3 = ((&___a)->___a_3);
		Color_t29  L_4 = {0};
		Color__ctor_m196(&L_4, ((float)((float)L_0*(float)___b)), ((float)((float)L_1*(float)___b)), ((float)((float)L_2*(float)___b)), ((float)((float)L_3*(float)___b)), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t52  Color_op_Implicit_m908 (Object_t * __this /* static, unused */, Color_t29  ___c, MethodInfo* method)
{
	{
		NullCheck((&___c));
		float L_0 = ((&___c)->___r_0);
		NullCheck((&___c));
		float L_1 = ((&___c)->___g_1);
		NullCheck((&___c));
		float L_2 = ((&___c)->___b_2);
		NullCheck((&___c));
		float L_3 = ((&___c)->___a_3);
		Vector4_t52  L_4 = {0};
		Vector4__ctor_m193(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Color32_t477_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Byte_t41_il2cpp_TypeInfo;
extern MethodInfo Color32__ctor_m2440_MethodInfo;


// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Color32__ctor_m2440 (Color32_t477 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, MethodInfo* method)
{
	{
		__this->___r_0 = ___r;
		__this->___g_1 = ___g;
		__this->___b_2 = ___b;
		__this->___a_3 = ___a;
		return;
	}
}
// System.String UnityEngine.Color32::ToString()
extern MethodInfo Color32_ToString_m5291_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Color32_ToString_m5291 (Color32_t477 * __this, MethodInfo* method)
{
	static bool Color32_ToString_m5291_init;
	if (!Color32_ToString_m5291_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Color32_ToString_m5291_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 4));
		uint8_t L_1 = (__this->___r_0);
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Byte_t41_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		uint8_t L_5 = (__this->___g_1);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Byte_t41_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t137* L_8 = L_4;
		uint8_t L_9 = (__this->___b_2);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Byte_t41_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t137* L_12 = L_8;
		uint8_t L_13 = (__this->___a_3);
		uint8_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Byte_t41_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral924, L_12, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_16;
	}
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern MethodInfo Color32_op_Implicit_m2477_MethodInfo;
extern "C" Color32_t477  Color32_op_Implicit_m2477 (Object_t * __this /* static, unused */, Color_t29  ___c, MethodInfo* method)
{
	{
		NullCheck((&___c));
		float L_0 = ((&___c)->___r_0);
		float L_1 = Mathf_Clamp01_m199(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m199_MethodInfo);
		NullCheck((&___c));
		float L_2 = ((&___c)->___g_1);
		float L_3 = Mathf_Clamp01_m199(NULL /*static, unused*/, L_2, /*hidden argument*/&Mathf_Clamp01_m199_MethodInfo);
		NullCheck((&___c));
		float L_4 = ((&___c)->___b_2);
		float L_5 = Mathf_Clamp01_m199(NULL /*static, unused*/, L_4, /*hidden argument*/&Mathf_Clamp01_m199_MethodInfo);
		NullCheck((&___c));
		float L_6 = ((&___c)->___a_3);
		float L_7 = Mathf_Clamp01_m199(NULL /*static, unused*/, L_6, /*hidden argument*/&Mathf_Clamp01_m199_MethodInfo);
		Color32_t477  L_8 = {0};
		Color32__ctor_m2440(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), /*hidden argument*/&Color32__ctor_m2440_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern MethodInfo Color32_op_Implicit_m2441_MethodInfo;
extern "C" Color_t29  Color32_op_Implicit_m2441 (Object_t * __this /* static, unused */, Color32_t477  ___c, MethodInfo* method)
{
	{
		NullCheck((&___c));
		uint8_t L_0 = ((&___c)->___r_0);
		NullCheck((&___c));
		uint8_t L_1 = ((&___c)->___g_1);
		NullCheck((&___c));
		uint8_t L_2 = ((&___c)->___b_2);
		NullCheck((&___c));
		uint8_t L_3 = ((&___c)->___a_3);
		Color_t29  L_4 = {0};
		Color__ctor_m196(&L_4, ((float)((float)(((float)L_0))/(float)(255.0f))), ((float)((float)(((float)L_1))/(float)(255.0f))), ((float)((float)(((float)L_2))/(float)(255.0f))), ((float)((float)(((float)L_3))/(float)(255.0f))), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Quaternion_t55_il2cpp_TypeInfo;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"

extern MethodInfo Quaternion__ctor_m643_MethodInfo;
extern MethodInfo Quaternion_Internal_ToEulerRad_m5298_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_LookRotation_m5293_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Slerp_m5294_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Inverse_m5295_MethodInfo;
extern MethodInfo Quaternion_Dot_m5292_MethodInfo;
extern MethodInfo Mathf_Abs_m651_MethodInfo;
extern MethodInfo Quaternion_Internal_FromEulerRad_m5300_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5299_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5301_MethodInfo;


// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m643 (Quaternion_t55 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method)
{
	{
		__this->___x_1 = ___x;
		__this->___y_2 = ___y;
		__this->___z_3 = ___z;
		__this->___w_4 = ___w;
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern MethodInfo Quaternion_get_identity_m572_MethodInfo;
extern "C" Quaternion_t55  Quaternion_get_identity_m572 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Quaternion_t55  L_0 = {0};
		Quaternion__ctor_m643(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Quaternion__ctor_m643_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m5292 (Object_t * __this /* static, unused */, Quaternion_t55  ___a, Quaternion_t55  ___b, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___b));
		float L_1 = ((&___b)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___b));
		float L_3 = ((&___b)->___y_2);
		NullCheck((&___a));
		float L_4 = ((&___a)->___z_3);
		NullCheck((&___b));
		float L_5 = ((&___b)->___z_3);
		NullCheck((&___a));
		float L_6 = ((&___a)->___w_4);
		NullCheck((&___b));
		float L_7 = ((&___b)->___w_4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern MethodInfo Quaternion_LookRotation_m1040_MethodInfo;
extern "C" Quaternion_t55  Quaternion_LookRotation_m1040 (Object_t * __this /* static, unused */, Vector3_t54  ___forward, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		Vector3_t54  L_0 = Vector3_get_up_m912(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m912_MethodInfo);
		V_0 = L_0;
		Quaternion_t55  L_1 = Quaternion_INTERNAL_CALL_LookRotation_m5293(NULL /*static, unused*/, (&___forward), (&V_0), /*hidden argument*/&Quaternion_INTERNAL_CALL_LookRotation_m5293_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t55  Quaternion_INTERNAL_CALL_LookRotation_m5293 (Object_t * __this /* static, unused */, Vector3_t54 * ___forward, Vector3_t54 * ___upwards, MethodInfo* method)
{
	typedef Quaternion_t55  (*Quaternion_INTERNAL_CALL_LookRotation_m5293_ftn) (Vector3_t54 *, Vector3_t54 *);
	static Quaternion_INTERNAL_CALL_LookRotation_m5293_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_LookRotation_m5293_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___forward, ___upwards);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern MethodInfo Quaternion_Slerp_m1041_MethodInfo;
extern "C" Quaternion_t55  Quaternion_Slerp_m1041 (Object_t * __this /* static, unused */, Quaternion_t55  ___from, Quaternion_t55  ___to, float ___t, MethodInfo* method)
{
	{
		Quaternion_t55  L_0 = Quaternion_INTERNAL_CALL_Slerp_m5294(NULL /*static, unused*/, (&___from), (&___to), ___t, /*hidden argument*/&Quaternion_INTERNAL_CALL_Slerp_m5294_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t55  Quaternion_INTERNAL_CALL_Slerp_m5294 (Object_t * __this /* static, unused */, Quaternion_t55 * ___from, Quaternion_t55 * ___to, float ___t, MethodInfo* method)
{
	typedef Quaternion_t55  (*Quaternion_INTERNAL_CALL_Slerp_m5294_ftn) (Quaternion_t55 *, Quaternion_t55 *, float);
	static Quaternion_INTERNAL_CALL_Slerp_m5294_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Slerp_m5294_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)");
	return _il2cpp_icall_func(___from, ___to, ___t);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern MethodInfo Quaternion_Inverse_m644_MethodInfo;
extern "C" Quaternion_t55  Quaternion_Inverse_m644 (Object_t * __this /* static, unused */, Quaternion_t55  ___rotation, MethodInfo* method)
{
	{
		Quaternion_t55  L_0 = Quaternion_INTERNAL_CALL_Inverse_m5295(NULL /*static, unused*/, (&___rotation), /*hidden argument*/&Quaternion_INTERNAL_CALL_Inverse_m5295_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t55  Quaternion_INTERNAL_CALL_Inverse_m5295 (Object_t * __this /* static, unused */, Quaternion_t55 * ___rotation, MethodInfo* method)
{
	typedef Quaternion_t55  (*Quaternion_INTERNAL_CALL_Inverse_m5295_ftn) (Quaternion_t55 *);
	static Quaternion_INTERNAL_CALL_Inverse_m5295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Inverse_m5295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___rotation);
}
// System.String UnityEngine.Quaternion::ToString()
extern MethodInfo Quaternion_ToString_m690_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Quaternion_ToString_m690 (Quaternion_t55 * __this, MethodInfo* method)
{
	static bool Quaternion_ToString_m690_init;
	if (!Quaternion_ToString_m690_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Quaternion_ToString_m690_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t137* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t137* L_12 = L_8;
		float L_13 = (__this->___w_4);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral925, L_12, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_16;
	}
}
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern MethodInfo Quaternion_Angle_m650_MethodInfo;
extern "C" float Quaternion_Angle_m650 (Object_t * __this /* static, unused */, Quaternion_t55  ___a, Quaternion_t55  ___b, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Quaternion_Dot_m5292(NULL /*static, unused*/, ___a, ___b, /*hidden argument*/&Quaternion_Dot_m5292_MethodInfo);
		V_0 = L_0;
		float L_1 = fabsf(V_0);
		float L_2 = Mathf_Min_m916(NULL /*static, unused*/, L_1, (1.0f), /*hidden argument*/&Mathf_Min_m916_MethodInfo);
		float L_3 = acosf(L_2);
		return ((float)((float)((float)((float)L_3*(float)(2.0f)))*(float)(57.29578f)));
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern MethodInfo Quaternion_get_eulerAngles_m5296_MethodInfo;
extern "C" Vector3_t54  Quaternion_get_eulerAngles_m5296 (Quaternion_t55 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Quaternion_Internal_ToEulerRad_m5298(NULL /*static, unused*/, (*(Quaternion_t55 *)__this), /*hidden argument*/&Quaternion_Internal_ToEulerRad_m5298_MethodInfo);
		Vector3_t54  L_1 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_0, (57.29578f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern MethodInfo Quaternion_Euler_m202_MethodInfo;
extern "C" Quaternion_t55  Quaternion_Euler_m202 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, ___x, ___y, ___z, /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		Vector3_t54  L_1 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_0, (0.0174532924f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Quaternion_t55  L_2 = Quaternion_Internal_FromEulerRad_m5300(NULL /*static, unused*/, L_1, /*hidden argument*/&Quaternion_Internal_FromEulerRad_m5300_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern MethodInfo Quaternion_Euler_m5297_MethodInfo;
extern "C" Quaternion_t55  Quaternion_Euler_m5297 (Object_t * __this /* static, unused */, Vector3_t54  ___euler, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Vector3_op_Multiply_m601(NULL /*static, unused*/, ___euler, (0.0174532924f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Quaternion_t55  L_1 = Quaternion_Internal_FromEulerRad_m5300(NULL /*static, unused*/, L_0, /*hidden argument*/&Quaternion_Internal_FromEulerRad_m5300_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t54  Quaternion_Internal_ToEulerRad_m5298 (Object_t * __this /* static, unused */, Quaternion_t55  ___rotation, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5299(NULL /*static, unused*/, (&___rotation), /*hidden argument*/&Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5299_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t54  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5299 (Object_t * __this /* static, unused */, Quaternion_t55 * ___rotation, MethodInfo* method)
{
	typedef Vector3_t54  (*Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5299_ftn) (Quaternion_t55 *);
	static Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5299_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5299_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___rotation);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t55  Quaternion_Internal_FromEulerRad_m5300 (Object_t * __this /* static, unused */, Vector3_t54  ___euler, MethodInfo* method)
{
	{
		Quaternion_t55  L_0 = Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5301(NULL /*static, unused*/, (&___euler), /*hidden argument*/&Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5301_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t55  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5301 (Object_t * __this /* static, unused */, Vector3_t54 * ___euler, MethodInfo* method)
{
	typedef Quaternion_t55  (*Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5301_ftn) (Vector3_t54 *);
	static Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___euler);
}
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern MethodInfo Quaternion_GetHashCode_m5302_MethodInfo;
extern "C" int32_t Quaternion_GetHashCode_m5302 (Quaternion_t55 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m5581(L_0, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m5581(L_2, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m5581(L_4, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float* L_6 = &(__this->___w_4);
		int32_t L_7 = Single_GetHashCode_m5581(L_6, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern MethodInfo Quaternion_Equals_m5303_MethodInfo;
extern "C" bool Quaternion_Equals_m5303 (Quaternion_t55 * __this, Object_t * ___other, MethodInfo* method)
{
	Quaternion_t55  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Quaternion_t55_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = ((*(Quaternion_t55 *)((Quaternion_t55 *)UnBox (___other, InitializedTypeInfo(&Quaternion_t55_il2cpp_TypeInfo)))));
		float* L_0 = &(__this->___x_1);
		NullCheck((&V_0));
		float L_1 = ((&V_0)->___x_1);
		bool L_2 = Single_Equals_m5607(L_0, L_1, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		float* L_3 = &(__this->___y_2);
		NullCheck((&V_0));
		float L_4 = ((&V_0)->___y_2);
		bool L_5 = Single_Equals_m5607(L_3, L_4, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		float* L_6 = &(__this->___z_3);
		NullCheck((&V_0));
		float L_7 = ((&V_0)->___z_3);
		bool L_8 = Single_Equals_m5607(L_6, L_7, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		float* L_9 = &(__this->___w_4);
		NullCheck((&V_0));
		float L_10 = ((&V_0)->___w_4);
		bool L_11 = Single_Equals_m5607(L_9, L_10, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern MethodInfo Quaternion_op_Multiply_m645_MethodInfo;
extern "C" Quaternion_t55  Quaternion_op_Multiply_m645 (Object_t * __this /* static, unused */, Quaternion_t55  ___lhs, Quaternion_t55  ___rhs, MethodInfo* method)
{
	{
		NullCheck((&___lhs));
		float L_0 = ((&___lhs)->___w_4);
		NullCheck((&___rhs));
		float L_1 = ((&___rhs)->___x_1);
		NullCheck((&___lhs));
		float L_2 = ((&___lhs)->___x_1);
		NullCheck((&___rhs));
		float L_3 = ((&___rhs)->___w_4);
		NullCheck((&___lhs));
		float L_4 = ((&___lhs)->___y_2);
		NullCheck((&___rhs));
		float L_5 = ((&___rhs)->___z_3);
		NullCheck((&___lhs));
		float L_6 = ((&___lhs)->___z_3);
		NullCheck((&___rhs));
		float L_7 = ((&___rhs)->___y_2);
		NullCheck((&___lhs));
		float L_8 = ((&___lhs)->___w_4);
		NullCheck((&___rhs));
		float L_9 = ((&___rhs)->___y_2);
		NullCheck((&___lhs));
		float L_10 = ((&___lhs)->___y_2);
		NullCheck((&___rhs));
		float L_11 = ((&___rhs)->___w_4);
		NullCheck((&___lhs));
		float L_12 = ((&___lhs)->___z_3);
		NullCheck((&___rhs));
		float L_13 = ((&___rhs)->___x_1);
		NullCheck((&___lhs));
		float L_14 = ((&___lhs)->___x_1);
		NullCheck((&___rhs));
		float L_15 = ((&___rhs)->___z_3);
		NullCheck((&___lhs));
		float L_16 = ((&___lhs)->___w_4);
		NullCheck((&___rhs));
		float L_17 = ((&___rhs)->___z_3);
		NullCheck((&___lhs));
		float L_18 = ((&___lhs)->___z_3);
		NullCheck((&___rhs));
		float L_19 = ((&___rhs)->___w_4);
		NullCheck((&___lhs));
		float L_20 = ((&___lhs)->___x_1);
		NullCheck((&___rhs));
		float L_21 = ((&___rhs)->___y_2);
		NullCheck((&___lhs));
		float L_22 = ((&___lhs)->___y_2);
		NullCheck((&___rhs));
		float L_23 = ((&___rhs)->___x_1);
		NullCheck((&___lhs));
		float L_24 = ((&___lhs)->___w_4);
		NullCheck((&___rhs));
		float L_25 = ((&___rhs)->___w_4);
		NullCheck((&___lhs));
		float L_26 = ((&___lhs)->___x_1);
		NullCheck((&___rhs));
		float L_27 = ((&___rhs)->___x_1);
		NullCheck((&___lhs));
		float L_28 = ((&___lhs)->___y_2);
		NullCheck((&___rhs));
		float L_29 = ((&___rhs)->___y_2);
		NullCheck((&___lhs));
		float L_30 = ((&___lhs)->___z_3);
		NullCheck((&___rhs));
		float L_31 = ((&___rhs)->___z_3);
		Quaternion_t55  L_32 = {0};
		Quaternion__ctor_m643(&L_32, ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))-(float)((float)((float)L_6*(float)L_7)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))-(float)((float)((float)L_14*(float)L_15)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))-(float)((float)((float)L_22*(float)L_23)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))-(float)((float)((float)L_26*(float)L_27))))-(float)((float)((float)L_28*(float)L_29))))-(float)((float)((float)L_30*(float)L_31)))), /*hidden argument*/&Quaternion__ctor_m643_MethodInfo);
		return L_32;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern MethodInfo Quaternion_op_Multiply_m1036_MethodInfo;
extern "C" Vector3_t54  Quaternion_op_Multiply_m1036 (Object_t * __this /* static, unused */, Quaternion_t55  ___rotation, Vector3_t54  ___point, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t54  V_12 = {0};
	{
		NullCheck((&___rotation));
		float L_0 = ((&___rotation)->___x_1);
		V_0 = ((float)((float)L_0*(float)(2.0f)));
		NullCheck((&___rotation));
		float L_1 = ((&___rotation)->___y_2);
		V_1 = ((float)((float)L_1*(float)(2.0f)));
		NullCheck((&___rotation));
		float L_2 = ((&___rotation)->___z_3);
		V_2 = ((float)((float)L_2*(float)(2.0f)));
		NullCheck((&___rotation));
		float L_3 = ((&___rotation)->___x_1);
		V_3 = ((float)((float)L_3*(float)V_0));
		NullCheck((&___rotation));
		float L_4 = ((&___rotation)->___y_2);
		V_4 = ((float)((float)L_4*(float)V_1));
		NullCheck((&___rotation));
		float L_5 = ((&___rotation)->___z_3);
		V_5 = ((float)((float)L_5*(float)V_2));
		NullCheck((&___rotation));
		float L_6 = ((&___rotation)->___x_1);
		V_6 = ((float)((float)L_6*(float)V_1));
		NullCheck((&___rotation));
		float L_7 = ((&___rotation)->___x_1);
		V_7 = ((float)((float)L_7*(float)V_2));
		NullCheck((&___rotation));
		float L_8 = ((&___rotation)->___y_2);
		V_8 = ((float)((float)L_8*(float)V_2));
		NullCheck((&___rotation));
		float L_9 = ((&___rotation)->___w_4);
		V_9 = ((float)((float)L_9*(float)V_0));
		NullCheck((&___rotation));
		float L_10 = ((&___rotation)->___w_4);
		V_10 = ((float)((float)L_10*(float)V_1));
		NullCheck((&___rotation));
		float L_11 = ((&___rotation)->___w_4);
		V_11 = ((float)((float)L_11*(float)V_2));
		NullCheck((&___point));
		float L_12 = ((&___point)->___x_1);
		NullCheck((&___point));
		float L_13 = ((&___point)->___y_2);
		NullCheck((&___point));
		float L_14 = ((&___point)->___z_3);
		NullCheck((&V_12));
		(&V_12)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)V_4+(float)V_5))))*(float)L_12))+(float)((float)((float)((float)((float)V_6-(float)V_11))*(float)L_13))))+(float)((float)((float)((float)((float)V_7+(float)V_10))*(float)L_14))));
		NullCheck((&___point));
		float L_15 = ((&___point)->___x_1);
		NullCheck((&___point));
		float L_16 = ((&___point)->___y_2);
		NullCheck((&___point));
		float L_17 = ((&___point)->___z_3);
		NullCheck((&V_12));
		(&V_12)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)V_6+(float)V_11))*(float)L_15))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)V_3+(float)V_5))))*(float)L_16))))+(float)((float)((float)((float)((float)V_8-(float)V_9))*(float)L_17))));
		NullCheck((&___point));
		float L_18 = ((&___point)->___x_1);
		NullCheck((&___point));
		float L_19 = ((&___point)->___y_2);
		NullCheck((&___point));
		float L_20 = ((&___point)->___z_3);
		NullCheck((&V_12));
		(&V_12)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)V_7-(float)V_10))*(float)L_18))+(float)((float)((float)((float)((float)V_8+(float)V_9))*(float)L_19))))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)V_3+(float)V_4))))*(float)L_20))));
		return V_12;
	}
}
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern MethodInfo Quaternion_op_Inequality_m687_MethodInfo;
extern "C" bool Quaternion_op_Inequality_m687 (Object_t * __this /* static, unused */, Quaternion_t55  ___lhs, Quaternion_t55  ___rhs, MethodInfo* method)
{
	{
		float L_0 = Quaternion_Dot_m5292(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&Quaternion_Dot_m5292_MethodInfo);
		return ((((int32_t)((((float)L_0) > ((float)(0.999999f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rect_t132_il2cpp_TypeInfo;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"

extern MethodInfo Rect_get_x_m2475_MethodInfo;
extern MethodInfo Rect_get_y_m2476_MethodInfo;
extern MethodInfo Rect_get_width_m2470_MethodInfo;
extern MethodInfo Rect_get_height_m2471_MethodInfo;
extern MethodInfo Rect_get_xMin_m2572_MethodInfo;
extern MethodInfo Rect_get_xMax_m2555_MethodInfo;
extern MethodInfo Rect_get_yMin_m2571_MethodInfo;
extern MethodInfo Rect_get_yMax_m2556_MethodInfo;


// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern MethodInfo Rect__ctor_m522_MethodInfo;
extern "C" void Rect__ctor_m522 (Rect_t132 * __this, float ___left, float ___top, float ___width, float ___height, MethodInfo* method)
{
	{
		__this->___m_XMin_0 = ___left;
		__this->___m_YMin_1 = ___top;
		__this->___m_Width_2 = ___width;
		__this->___m_Height_3 = ___height;
		return;
	}
}
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m2475 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_x(System.Single)
extern MethodInfo Rect_set_x_m2540_MethodInfo;
extern "C" void Rect_set_x_m2540 (Rect_t132 * __this, float ___value, MethodInfo* method)
{
	{
		__this->___m_XMin_0 = ___value;
		return;
	}
}
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m2476 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_y(System.Single)
extern MethodInfo Rect_set_y_m2538_MethodInfo;
extern "C" void Rect_set_y_m2538 (Rect_t132 * __this, float ___value, MethodInfo* method)
{
	{
		__this->___m_YMin_1 = ___value;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
extern MethodInfo Rect_get_position_m2549_MethodInfo;
extern "C" Vector2_t32  Rect_get_position_m2549 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		float L_1 = (__this->___m_YMin_1);
		Vector2_t32  L_2 = {0};
		Vector2__ctor_m179(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
extern MethodInfo Rect_get_center_m2677_MethodInfo;
extern "C" Vector2_t32  Rect_get_center_m2677 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = Rect_get_x_m2475(__this, /*hidden argument*/&Rect_get_x_m2475_MethodInfo);
		float L_1 = (__this->___m_Width_2);
		float L_2 = Rect_get_y_m2476(__this, /*hidden argument*/&Rect_get_y_m2476_MethodInfo);
		float L_3 = (__this->___m_Height_3);
		Vector2_t32  L_4 = {0};
		Vector2__ctor_m179(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_4;
	}
}
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m2470 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_width(System.Single)
extern MethodInfo Rect_set_width_m2539_MethodInfo;
extern "C" void Rect_set_width_m2539 (Rect_t132 * __this, float ___value, MethodInfo* method)
{
	{
		__this->___m_Width_2 = ___value;
		return;
	}
}
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m2471 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_height(System.Single)
extern MethodInfo Rect_set_height_m2536_MethodInfo;
extern "C" void Rect_set_height_m2536 (Rect_t132 * __this, float ___value, MethodInfo* method)
{
	{
		__this->___m_Height_3 = ___value;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern MethodInfo Rect_get_size_m2533_MethodInfo;
extern "C" Vector2_t32  Rect_get_size_m2533 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_Height_3);
		Vector2_t32  L_2 = {0};
		Vector2__ctor_m179(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m2572 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m2571 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m2555 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_XMin_0);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m2556 (Rect_t132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		float L_1 = (__this->___m_YMin_1);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.String UnityEngine.Rect::ToString()
extern MethodInfo Rect_ToString_m5304_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Rect_ToString_m5304 (Rect_t132 * __this, MethodInfo* method)
{
	static bool Rect_ToString_m5304_init;
	if (!Rect_ToString_m5304_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Rect_ToString_m5304_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 4));
		float L_1 = Rect_get_x_m2475(__this, /*hidden argument*/&Rect_get_x_m2475_MethodInfo);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		float L_5 = Rect_get_y_m2476(__this, /*hidden argument*/&Rect_get_y_m2476_MethodInfo);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t137* L_8 = L_4;
		float L_9 = Rect_get_width_m2470(__this, /*hidden argument*/&Rect_get_width_m2470_MethodInfo);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t137* L_12 = L_8;
		float L_13 = Rect_get_height_m2471(__this, /*hidden argument*/&Rect_get_height_m2471_MethodInfo);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral926, L_12, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_16;
	}
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern MethodInfo Rect_Contains_m5305_MethodInfo;
extern "C" bool Rect_Contains_m5305 (Rect_t132 * __this, Vector3_t54  ___point, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		NullCheck((&___point));
		float L_0 = ((&___point)->___x_1);
		float L_1 = Rect_get_xMin_m2572(__this, /*hidden argument*/&Rect_get_xMin_m2572_MethodInfo);
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0047;
		}
	}
	{
		NullCheck((&___point));
		float L_2 = ((&___point)->___x_1);
		float L_3 = Rect_get_xMax_m2555(__this, /*hidden argument*/&Rect_get_xMax_m2555_MethodInfo);
		if ((((float)L_2) >= ((float)L_3)))
		{
			goto IL_0047;
		}
	}
	{
		NullCheck((&___point));
		float L_4 = ((&___point)->___y_2);
		float L_5 = Rect_get_yMin_m2571(__this, /*hidden argument*/&Rect_get_yMin_m2571_MethodInfo);
		if ((((float)L_4) < ((float)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		NullCheck((&___point));
		float L_6 = ((&___point)->___y_2);
		float L_7 = Rect_get_yMax_m2556(__this, /*hidden argument*/&Rect_get_yMax_m2556_MethodInfo);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Rect::GetHashCode()
extern MethodInfo Rect_GetHashCode_m5306_MethodInfo;
extern "C" int32_t Rect_GetHashCode_m5306 (Rect_t132 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = Rect_get_x_m2475(__this, /*hidden argument*/&Rect_get_x_m2475_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m5581((&V_0), /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float L_2 = Rect_get_width_m2470(__this, /*hidden argument*/&Rect_get_width_m2470_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m5581((&V_1), /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float L_4 = Rect_get_y_m2476(__this, /*hidden argument*/&Rect_get_y_m2476_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m5581((&V_2), /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float L_6 = Rect_get_height_m2471(__this, /*hidden argument*/&Rect_get_height_m2471_MethodInfo);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m5581((&V_3), /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern MethodInfo Rect_Equals_m5307_MethodInfo;
extern "C" bool Rect_Equals_m5307 (Rect_t132 * __this, Object_t * ___other, MethodInfo* method)
{
	Rect_t132  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Rect_t132_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = ((*(Rect_t132 *)((Rect_t132 *)UnBox (___other, InitializedTypeInfo(&Rect_t132_il2cpp_TypeInfo)))));
		float L_0 = Rect_get_x_m2475(__this, /*hidden argument*/&Rect_get_x_m2475_MethodInfo);
		V_1 = L_0;
		float L_1 = Rect_get_x_m2475((&V_0), /*hidden argument*/&Rect_get_x_m2475_MethodInfo);
		bool L_2 = Single_Equals_m5607((&V_1), L_1, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		float L_3 = Rect_get_y_m2476(__this, /*hidden argument*/&Rect_get_y_m2476_MethodInfo);
		V_2 = L_3;
		float L_4 = Rect_get_y_m2476((&V_0), /*hidden argument*/&Rect_get_y_m2476_MethodInfo);
		bool L_5 = Single_Equals_m5607((&V_2), L_4, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_5)
		{
			goto IL_007a;
		}
	}
	{
		float L_6 = Rect_get_width_m2470(__this, /*hidden argument*/&Rect_get_width_m2470_MethodInfo);
		V_3 = L_6;
		float L_7 = Rect_get_width_m2470((&V_0), /*hidden argument*/&Rect_get_width_m2470_MethodInfo);
		bool L_8 = Single_Equals_m5607((&V_3), L_7, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		float L_9 = Rect_get_height_m2471(__this, /*hidden argument*/&Rect_get_height_m2471_MethodInfo);
		V_4 = L_9;
		float L_10 = Rect_get_height_m2471((&V_0), /*hidden argument*/&Rect_get_height_m2471_MethodInfo);
		bool L_11 = Single_Equals_m5607((&V_4), L_10, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern MethodInfo Rect_op_Equality_m2670_MethodInfo;
extern "C" bool Rect_op_Equality_m2670 (Object_t * __this /* static, unused */, Rect_t132  ___lhs, Rect_t132  ___rhs, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m2475((&___lhs), /*hidden argument*/&Rect_get_x_m2475_MethodInfo);
		float L_1 = Rect_get_x_m2475((&___rhs), /*hidden argument*/&Rect_get_x_m2475_MethodInfo);
		if ((((float)L_0) != ((float)L_1)))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = Rect_get_y_m2476((&___lhs), /*hidden argument*/&Rect_get_y_m2476_MethodInfo);
		float L_3 = Rect_get_y_m2476((&___rhs), /*hidden argument*/&Rect_get_y_m2476_MethodInfo);
		if ((((float)L_2) != ((float)L_3)))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = Rect_get_width_m2470((&___lhs), /*hidden argument*/&Rect_get_width_m2470_MethodInfo);
		float L_5 = Rect_get_width_m2470((&___rhs), /*hidden argument*/&Rect_get_width_m2470_MethodInfo);
		if ((((float)L_4) != ((float)L_5)))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = Rect_get_height_m2471((&___lhs), /*hidden argument*/&Rect_get_height_m2471_MethodInfo);
		float L_7 = Rect_get_height_m2471((&___rhs), /*hidden argument*/&Rect_get_height_m2471_MethodInfo);
		G_B5_0 = ((((float)L_6) == ((float)L_7))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		return G_B5_0;
	}
}
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Matrix4x4_t53_il2cpp_TypeInfo;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"

extern MethodInfo Matrix4x4_get_Item_m609_MethodInfo;
extern MethodInfo Matrix4x4_set_Item_m610_MethodInfo;
extern MethodInfo Matrix4x4_Inverse_m919_MethodInfo;
extern MethodInfo Matrix4x4_Transpose_m5313_MethodInfo;
extern MethodInfo Matrix4x4_GetColumn_m5319_MethodInfo;
extern MethodInfo Vector4_Equals_m5355_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_Inverse_m5312_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_Transpose_m5314_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_Invert_m5316_MethodInfo;
extern MethodInfo Matrix4x4_get_Item_m5308_MethodInfo;
extern MethodInfo Matrix4x4_set_Item_m5309_MethodInfo;
extern MethodInfo Matrix4x4_TRS_m204_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_TRS_m5323_MethodInfo;
extern MethodInfo Vector4_op_Equality_m5359_MethodInfo;
extern MethodInfo Matrix4x4_op_Equality_m5328_MethodInfo;


// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" float Matrix4x4_get_Item_m5308 (Matrix4x4_t53 * __this, int32_t ___row, int32_t ___column, MethodInfo* method)
{
	{
		float L_0 = Matrix4x4_get_Item_m609(__this, ((int32_t)((int32_t)___row+(int32_t)((int32_t)((int32_t)___column*(int32_t)4)))), /*hidden argument*/&Matrix4x4_get_Item_m609_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m5309 (Matrix4x4_t53 * __this, int32_t ___row, int32_t ___column, float ___value, MethodInfo* method)
{
	{
		Matrix4x4_set_Item_m610(__this, ((int32_t)((int32_t)___row+(int32_t)((int32_t)((int32_t)___column*(int32_t)4)))), ___value, /*hidden argument*/&Matrix4x4_set_Item_m610_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C" float Matrix4x4_get_Item_m609 (Matrix4x4_t53 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ___index;
		if (V_0 == 0)
		{
			goto IL_004d;
		}
		if (V_0 == 1)
		{
			goto IL_0054;
		}
		if (V_0 == 2)
		{
			goto IL_005b;
		}
		if (V_0 == 3)
		{
			goto IL_0062;
		}
		if (V_0 == 4)
		{
			goto IL_0069;
		}
		if (V_0 == 5)
		{
			goto IL_0070;
		}
		if (V_0 == 6)
		{
			goto IL_0077;
		}
		if (V_0 == 7)
		{
			goto IL_007e;
		}
		if (V_0 == 8)
		{
			goto IL_0085;
		}
		if (V_0 == 9)
		{
			goto IL_008c;
		}
		if (V_0 == 10)
		{
			goto IL_0093;
		}
		if (V_0 == 11)
		{
			goto IL_009a;
		}
		if (V_0 == 12)
		{
			goto IL_00a1;
		}
		if (V_0 == 13)
		{
			goto IL_00a8;
		}
		if (V_0 == 14)
		{
			goto IL_00af;
		}
		if (V_0 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_0 = (__this->___m00_0);
		return L_0;
	}

IL_0054:
	{
		float L_1 = (__this->___m10_1);
		return L_1;
	}

IL_005b:
	{
		float L_2 = (__this->___m20_2);
		return L_2;
	}

IL_0062:
	{
		float L_3 = (__this->___m30_3);
		return L_3;
	}

IL_0069:
	{
		float L_4 = (__this->___m01_4);
		return L_4;
	}

IL_0070:
	{
		float L_5 = (__this->___m11_5);
		return L_5;
	}

IL_0077:
	{
		float L_6 = (__this->___m21_6);
		return L_6;
	}

IL_007e:
	{
		float L_7 = (__this->___m31_7);
		return L_7;
	}

IL_0085:
	{
		float L_8 = (__this->___m02_8);
		return L_8;
	}

IL_008c:
	{
		float L_9 = (__this->___m12_9);
		return L_9;
	}

IL_0093:
	{
		float L_10 = (__this->___m22_10);
		return L_10;
	}

IL_009a:
	{
		float L_11 = (__this->___m32_11);
		return L_11;
	}

IL_00a1:
	{
		float L_12 = (__this->___m03_12);
		return L_12;
	}

IL_00a8:
	{
		float L_13 = (__this->___m13_13);
		return L_13;
	}

IL_00af:
	{
		float L_14 = (__this->___m23_14);
		return L_14;
	}

IL_00b6:
	{
		float L_15 = (__this->___m33_15);
		return L_15;
	}

IL_00bd:
	{
		IndexOutOfRangeException_t787 * L_16 = (IndexOutOfRangeException_t787 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t787_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3865(L_16, (String_t*) &_stringLiteral927, /*hidden argument*/&IndexOutOfRangeException__ctor_m3865_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m610 (Matrix4x4_t53 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ___index;
		if (V_0 == 0)
		{
			goto IL_004d;
		}
		if (V_0 == 1)
		{
			goto IL_0059;
		}
		if (V_0 == 2)
		{
			goto IL_0065;
		}
		if (V_0 == 3)
		{
			goto IL_0071;
		}
		if (V_0 == 4)
		{
			goto IL_007d;
		}
		if (V_0 == 5)
		{
			goto IL_0089;
		}
		if (V_0 == 6)
		{
			goto IL_0095;
		}
		if (V_0 == 7)
		{
			goto IL_00a1;
		}
		if (V_0 == 8)
		{
			goto IL_00ad;
		}
		if (V_0 == 9)
		{
			goto IL_00b9;
		}
		if (V_0 == 10)
		{
			goto IL_00c5;
		}
		if (V_0 == 11)
		{
			goto IL_00d1;
		}
		if (V_0 == 12)
		{
			goto IL_00dd;
		}
		if (V_0 == 13)
		{
			goto IL_00e9;
		}
		if (V_0 == 14)
		{
			goto IL_00f5;
		}
		if (V_0 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		__this->___m00_0 = ___value;
		goto IL_0118;
	}

IL_0059:
	{
		__this->___m10_1 = ___value;
		goto IL_0118;
	}

IL_0065:
	{
		__this->___m20_2 = ___value;
		goto IL_0118;
	}

IL_0071:
	{
		__this->___m30_3 = ___value;
		goto IL_0118;
	}

IL_007d:
	{
		__this->___m01_4 = ___value;
		goto IL_0118;
	}

IL_0089:
	{
		__this->___m11_5 = ___value;
		goto IL_0118;
	}

IL_0095:
	{
		__this->___m21_6 = ___value;
		goto IL_0118;
	}

IL_00a1:
	{
		__this->___m31_7 = ___value;
		goto IL_0118;
	}

IL_00ad:
	{
		__this->___m02_8 = ___value;
		goto IL_0118;
	}

IL_00b9:
	{
		__this->___m12_9 = ___value;
		goto IL_0118;
	}

IL_00c5:
	{
		__this->___m22_10 = ___value;
		goto IL_0118;
	}

IL_00d1:
	{
		__this->___m32_11 = ___value;
		goto IL_0118;
	}

IL_00dd:
	{
		__this->___m03_12 = ___value;
		goto IL_0118;
	}

IL_00e9:
	{
		__this->___m13_13 = ___value;
		goto IL_0118;
	}

IL_00f5:
	{
		__this->___m23_14 = ___value;
		goto IL_0118;
	}

IL_0101:
	{
		__this->___m33_15 = ___value;
		goto IL_0118;
	}

IL_010d:
	{
		IndexOutOfRangeException_t787 * L_0 = (IndexOutOfRangeException_t787 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t787_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3865(L_0, (String_t*) &_stringLiteral927, /*hidden argument*/&IndexOutOfRangeException__ctor_m3865_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0118:
	{
		return;
	}
}
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern MethodInfo Matrix4x4_GetHashCode_m5310_MethodInfo;
extern "C" int32_t Matrix4x4_GetHashCode_m5310 (Matrix4x4_t53 * __this, MethodInfo* method)
{
	Vector4_t52  V_0 = {0};
	Vector4_t52  V_1 = {0};
	Vector4_t52  V_2 = {0};
	Vector4_t52  V_3 = {0};
	{
		Vector4_t52  L_0 = Matrix4x4_GetColumn_m5319(__this, 0, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m5354((&V_0), /*hidden argument*/&Vector4_GetHashCode_m5354_MethodInfo);
		Vector4_t52  L_2 = Matrix4x4_GetColumn_m5319(__this, 1, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Vector4_GetHashCode_m5354((&V_1), /*hidden argument*/&Vector4_GetHashCode_m5354_MethodInfo);
		Vector4_t52  L_4 = Matrix4x4_GetColumn_m5319(__this, 2, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = Vector4_GetHashCode_m5354((&V_2), /*hidden argument*/&Vector4_GetHashCode_m5354_MethodInfo);
		Vector4_t52  L_6 = Matrix4x4_GetColumn_m5319(__this, 3, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		V_3 = L_6;
		int32_t L_7 = Vector4_GetHashCode_m5354((&V_3), /*hidden argument*/&Vector4_GetHashCode_m5354_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern MethodInfo Matrix4x4_Equals_m5311_MethodInfo;
extern "C" bool Matrix4x4_Equals_m5311 (Matrix4x4_t53 * __this, Object_t * ___other, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	Vector4_t52  V_1 = {0};
	Vector4_t52  V_2 = {0};
	Vector4_t52  V_3 = {0};
	Vector4_t52  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Matrix4x4_t53_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = ((*(Matrix4x4_t53 *)((Matrix4x4_t53 *)UnBox (___other, InitializedTypeInfo(&Matrix4x4_t53_il2cpp_TypeInfo)))));
		Vector4_t52  L_0 = Matrix4x4_GetColumn_m5319(__this, 0, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		V_1 = L_0;
		Vector4_t52  L_1 = Matrix4x4_GetColumn_m5319((&V_0), 0, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		Vector4_t52  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector4_t52_il2cpp_TypeInfo), &L_2);
		bool L_4 = Vector4_Equals_m5355((&V_1), L_3, /*hidden argument*/&Vector4_Equals_m5355_MethodInfo);
		if (!L_4)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t52  L_5 = Matrix4x4_GetColumn_m5319(__this, 1, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		V_2 = L_5;
		Vector4_t52  L_6 = Matrix4x4_GetColumn_m5319((&V_0), 1, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		Vector4_t52  L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&Vector4_t52_il2cpp_TypeInfo), &L_7);
		bool L_9 = Vector4_Equals_m5355((&V_2), L_8, /*hidden argument*/&Vector4_Equals_m5355_MethodInfo);
		if (!L_9)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t52  L_10 = Matrix4x4_GetColumn_m5319(__this, 2, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		V_3 = L_10;
		Vector4_t52  L_11 = Matrix4x4_GetColumn_m5319((&V_0), 2, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		Vector4_t52  L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&Vector4_t52_il2cpp_TypeInfo), &L_12);
		bool L_14 = Vector4_Equals_m5355((&V_3), L_13, /*hidden argument*/&Vector4_Equals_m5355_MethodInfo);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t52  L_15 = Matrix4x4_GetColumn_m5319(__this, 3, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		V_4 = L_15;
		Vector4_t52  L_16 = Matrix4x4_GetColumn_m5319((&V_0), 3, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		Vector4_t52  L_17 = L_16;
		Object_t * L_18 = Box(InitializedTypeInfo(&Vector4_t52_il2cpp_TypeInfo), &L_17);
		bool L_19 = Vector4_Equals_m5355((&V_4), L_18, /*hidden argument*/&Vector4_Equals_m5355_MethodInfo);
		G_B7_0 = ((int32_t)(L_19));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t53  Matrix4x4_Inverse_m919 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___m, MethodInfo* method)
{
	{
		Matrix4x4_t53  L_0 = Matrix4x4_INTERNAL_CALL_Inverse_m5312(NULL /*static, unused*/, (&___m), /*hidden argument*/&Matrix4x4_INTERNAL_CALL_Inverse_m5312_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t53  Matrix4x4_INTERNAL_CALL_Inverse_m5312 (Object_t * __this /* static, unused */, Matrix4x4_t53 * ___m, MethodInfo* method)
{
	typedef Matrix4x4_t53  (*Matrix4x4_INTERNAL_CALL_Inverse_m5312_ftn) (Matrix4x4_t53 *);
	static Matrix4x4_INTERNAL_CALL_Inverse_m5312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Inverse_m5312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t53  Matrix4x4_Transpose_m5313 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___m, MethodInfo* method)
{
	{
		Matrix4x4_t53  L_0 = Matrix4x4_INTERNAL_CALL_Transpose_m5314(NULL /*static, unused*/, (&___m), /*hidden argument*/&Matrix4x4_INTERNAL_CALL_Transpose_m5314_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t53  Matrix4x4_INTERNAL_CALL_Transpose_m5314 (Object_t * __this /* static, unused */, Matrix4x4_t53 * ___m, MethodInfo* method)
{
	typedef Matrix4x4_t53  (*Matrix4x4_INTERNAL_CALL_Transpose_m5314_ftn) (Matrix4x4_t53 *);
	static Matrix4x4_INTERNAL_CALL_Transpose_m5314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Transpose_m5314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern MethodInfo Matrix4x4_Invert_m5315_MethodInfo;
extern "C" bool Matrix4x4_Invert_m5315 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___inMatrix, Matrix4x4_t53 * ___dest, MethodInfo* method)
{
	{
		bool L_0 = Matrix4x4_INTERNAL_CALL_Invert_m5316(NULL /*static, unused*/, (&___inMatrix), ___dest, /*hidden argument*/&Matrix4x4_INTERNAL_CALL_Invert_m5316_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m5316 (Object_t * __this /* static, unused */, Matrix4x4_t53 * ___inMatrix, Matrix4x4_t53 * ___dest, MethodInfo* method)
{
	typedef bool (*Matrix4x4_INTERNAL_CALL_Invert_m5316_ftn) (Matrix4x4_t53 *, Matrix4x4_t53 *);
	static Matrix4x4_INTERNAL_CALL_Invert_m5316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Invert_m5316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___inMatrix, ___dest);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern MethodInfo Matrix4x4_get_inverse_m605_MethodInfo;
extern "C" Matrix4x4_t53  Matrix4x4_get_inverse_m605 (Matrix4x4_t53 * __this, MethodInfo* method)
{
	{
		Matrix4x4_t53  L_0 = Matrix4x4_Inverse_m919(NULL /*static, unused*/, (*(Matrix4x4_t53 *)__this), /*hidden argument*/&Matrix4x4_Inverse_m919_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern MethodInfo Matrix4x4_get_transpose_m5317_MethodInfo;
extern "C" Matrix4x4_t53  Matrix4x4_get_transpose_m5317 (Matrix4x4_t53 * __this, MethodInfo* method)
{
	{
		Matrix4x4_t53  L_0 = Matrix4x4_Transpose_m5313(NULL /*static, unused*/, (*(Matrix4x4_t53 *)__this), /*hidden argument*/&Matrix4x4_Transpose_m5313_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern MethodInfo Matrix4x4_get_isIdentity_m5318_MethodInfo;
extern "C" bool Matrix4x4_get_isIdentity_m5318 (Matrix4x4_t53 * __this, MethodInfo* method)
{
	typedef bool (*Matrix4x4_get_isIdentity_m5318_ftn) (Matrix4x4_t53 *);
	static Matrix4x4_get_isIdentity_m5318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_get_isIdentity_m5318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t52  Matrix4x4_GetColumn_m5319 (Matrix4x4_t53 * __this, int32_t ___i, MethodInfo* method)
{
	{
		float L_0 = Matrix4x4_get_Item_m5308(__this, 0, ___i, /*hidden argument*/&Matrix4x4_get_Item_m5308_MethodInfo);
		float L_1 = Matrix4x4_get_Item_m5308(__this, 1, ___i, /*hidden argument*/&Matrix4x4_get_Item_m5308_MethodInfo);
		float L_2 = Matrix4x4_get_Item_m5308(__this, 2, ___i, /*hidden argument*/&Matrix4x4_get_Item_m5308_MethodInfo);
		float L_3 = Matrix4x4_get_Item_m5308(__this, 3, ___i, /*hidden argument*/&Matrix4x4_get_Item_m5308_MethodInfo);
		Vector4_t52  L_4 = {0};
		Vector4__ctor_m193(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern MethodInfo Matrix4x4_GetRow_m5320_MethodInfo;
extern "C" Vector4_t52  Matrix4x4_GetRow_m5320 (Matrix4x4_t53 * __this, int32_t ___i, MethodInfo* method)
{
	{
		float L_0 = Matrix4x4_get_Item_m5308(__this, ___i, 0, /*hidden argument*/&Matrix4x4_get_Item_m5308_MethodInfo);
		float L_1 = Matrix4x4_get_Item_m5308(__this, ___i, 1, /*hidden argument*/&Matrix4x4_get_Item_m5308_MethodInfo);
		float L_2 = Matrix4x4_get_Item_m5308(__this, ___i, 2, /*hidden argument*/&Matrix4x4_get_Item_m5308_MethodInfo);
		float L_3 = Matrix4x4_get_Item_m5308(__this, ___i, 3, /*hidden argument*/&Matrix4x4_get_Item_m5308_MethodInfo);
		Vector4_t52  L_4 = {0};
		Vector4__ctor_m193(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_4;
	}
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern MethodInfo Matrix4x4_SetColumn_m5321_MethodInfo;
extern "C" void Matrix4x4_SetColumn_m5321 (Matrix4x4_t53 * __this, int32_t ___i, Vector4_t52  ___v, MethodInfo* method)
{
	{
		NullCheck((&___v));
		float L_0 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m5309(__this, 0, ___i, L_0, /*hidden argument*/&Matrix4x4_set_Item_m5309_MethodInfo);
		NullCheck((&___v));
		float L_1 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m5309(__this, 1, ___i, L_1, /*hidden argument*/&Matrix4x4_set_Item_m5309_MethodInfo);
		NullCheck((&___v));
		float L_2 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m5309(__this, 2, ___i, L_2, /*hidden argument*/&Matrix4x4_set_Item_m5309_MethodInfo);
		NullCheck((&___v));
		float L_3 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m5309(__this, 3, ___i, L_3, /*hidden argument*/&Matrix4x4_set_Item_m5309_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern MethodInfo Matrix4x4_SetRow_m972_MethodInfo;
extern "C" void Matrix4x4_SetRow_m972 (Matrix4x4_t53 * __this, int32_t ___i, Vector4_t52  ___v, MethodInfo* method)
{
	{
		NullCheck((&___v));
		float L_0 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m5309(__this, ___i, 0, L_0, /*hidden argument*/&Matrix4x4_set_Item_m5309_MethodInfo);
		NullCheck((&___v));
		float L_1 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m5309(__this, ___i, 1, L_1, /*hidden argument*/&Matrix4x4_set_Item_m5309_MethodInfo);
		NullCheck((&___v));
		float L_2 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m5309(__this, ___i, 2, L_2, /*hidden argument*/&Matrix4x4_set_Item_m5309_MethodInfo);
		NullCheck((&___v));
		float L_3 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m5309(__this, ___i, 3, L_3, /*hidden argument*/&Matrix4x4_set_Item_m5309_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_MultiplyPoint_m541_MethodInfo;
extern "C" Vector3_t54  Matrix4x4_MultiplyPoint_m541 (Matrix4x4_t53 * __this, Vector3_t54  ___v, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___m00_0);
		NullCheck((&___v));
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		NullCheck((&___v));
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		NullCheck((&___v));
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		NullCheck((&V_0));
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		NullCheck((&___v));
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		NullCheck((&___v));
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		NullCheck((&___v));
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		NullCheck((&V_0));
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		NullCheck((&___v));
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		NullCheck((&___v));
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		NullCheck((&___v));
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		NullCheck((&V_0));
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->___m30_3);
		NullCheck((&___v));
		float L_22 = ((&___v)->___x_1);
		float L_23 = (__this->___m31_7);
		NullCheck((&___v));
		float L_24 = ((&___v)->___y_2);
		float L_25 = (__this->___m32_11);
		NullCheck((&___v));
		float L_26 = ((&___v)->___z_3);
		float L_27 = (__this->___m33_15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		V_1 = ((float)((float)(1.0f)/(float)V_1));
		Vector3_t54 * L_28 = (&V_0);
		NullCheck(L_28);
		float L_29 = (L_28->___x_1);
		NullCheck(L_28);
		L_28->___x_1 = ((float)((float)L_29*(float)V_1));
		Vector3_t54 * L_30 = (&V_0);
		NullCheck(L_30);
		float L_31 = (L_30->___y_2);
		NullCheck(L_30);
		L_30->___y_2 = ((float)((float)L_31*(float)V_1));
		Vector3_t54 * L_32 = (&V_0);
		NullCheck(L_32);
		float L_33 = (L_32->___z_3);
		NullCheck(L_32);
		L_32->___z_3 = ((float)((float)L_33*(float)V_1));
		return V_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_MultiplyPoint3x4_m2699_MethodInfo;
extern "C" Vector3_t54  Matrix4x4_MultiplyPoint3x4_m2699 (Matrix4x4_t53 * __this, Vector3_t54  ___v, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		NullCheck((&___v));
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		NullCheck((&___v));
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		NullCheck((&___v));
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		NullCheck((&V_0));
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		NullCheck((&___v));
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		NullCheck((&___v));
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		NullCheck((&___v));
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		NullCheck((&V_0));
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		NullCheck((&___v));
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		NullCheck((&___v));
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		NullCheck((&___v));
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		NullCheck((&V_0));
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		return V_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_MultiplyVector_m603_MethodInfo;
extern "C" Vector3_t54  Matrix4x4_MultiplyVector_m603 (Matrix4x4_t53 * __this, Vector3_t54  ___v, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		NullCheck((&___v));
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		NullCheck((&___v));
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		NullCheck((&___v));
		float L_5 = ((&___v)->___z_3);
		NullCheck((&V_0));
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___m10_1);
		NullCheck((&___v));
		float L_7 = ((&___v)->___x_1);
		float L_8 = (__this->___m11_5);
		NullCheck((&___v));
		float L_9 = ((&___v)->___y_2);
		float L_10 = (__this->___m12_9);
		NullCheck((&___v));
		float L_11 = ((&___v)->___z_3);
		NullCheck((&V_0));
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m20_2);
		NullCheck((&___v));
		float L_13 = ((&___v)->___x_1);
		float L_14 = (__this->___m21_6);
		NullCheck((&___v));
		float L_15 = ((&___v)->___y_2);
		float L_16 = (__this->___m22_10);
		NullCheck((&___v));
		float L_17 = ((&___v)->___z_3);
		NullCheck((&V_0));
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		return V_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_Scale_m5322_MethodInfo;
extern "C" Matrix4x4_t53  Matrix4x4_Scale_m5322 (Object_t * __this /* static, unused */, Vector3_t54  ___v, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t53_il2cpp_TypeInfo), (&V_0));
		NullCheck((&___v));
		float L_0 = ((&___v)->___x_1);
		NullCheck((&V_0));
		(&V_0)->___m00_0 = L_0;
		NullCheck((&V_0));
		(&V_0)->___m01_4 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m02_8 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m03_12 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m10_1 = (0.0f);
		NullCheck((&___v));
		float L_1 = ((&___v)->___y_2);
		NullCheck((&V_0));
		(&V_0)->___m11_5 = L_1;
		NullCheck((&V_0));
		(&V_0)->___m12_9 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m13_13 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m20_2 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m21_6 = (0.0f);
		NullCheck((&___v));
		float L_2 = ((&___v)->___z_3);
		NullCheck((&V_0));
		(&V_0)->___m22_10 = L_2;
		NullCheck((&V_0));
		(&V_0)->___m23_14 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m30_3 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m31_7 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m32_11 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m33_15 = (1.0f);
		return V_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern MethodInfo Matrix4x4_get_zero_m540_MethodInfo;
extern "C" Matrix4x4_t53  Matrix4x4_get_zero_m540 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t53_il2cpp_TypeInfo), (&V_0));
		NullCheck((&V_0));
		(&V_0)->___m00_0 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m01_4 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m02_8 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m03_12 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m10_1 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m11_5 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m12_9 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m13_13 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m20_2 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m21_6 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m22_10 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m23_14 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m30_3 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m31_7 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m32_11 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m33_15 = (0.0f);
		return V_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern MethodInfo Matrix4x4_get_identity_m920_MethodInfo;
extern "C" Matrix4x4_t53  Matrix4x4_get_identity_m920 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t53_il2cpp_TypeInfo), (&V_0));
		NullCheck((&V_0));
		(&V_0)->___m00_0 = (1.0f);
		NullCheck((&V_0));
		(&V_0)->___m01_4 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m02_8 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m03_12 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m10_1 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m11_5 = (1.0f);
		NullCheck((&V_0));
		(&V_0)->___m12_9 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m13_13 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m20_2 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m21_6 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m22_10 = (1.0f);
		NullCheck((&V_0));
		(&V_0)->___m23_14 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m30_3 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m31_7 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m32_11 = (0.0f);
		NullCheck((&V_0));
		(&V_0)->___m33_15 = (1.0f);
		return V_0;
	}
}
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern MethodInfo Matrix4x4_SetTRS_m921_MethodInfo;
extern "C" void Matrix4x4_SetTRS_m921 (Matrix4x4_t53 * __this, Vector3_t54  ___pos, Quaternion_t55  ___q, Vector3_t54  ___s, MethodInfo* method)
{
	{
		Matrix4x4_t53  L_0 = Matrix4x4_TRS_m204(NULL /*static, unused*/, ___pos, ___q, ___s, /*hidden argument*/&Matrix4x4_TRS_m204_MethodInfo);
		*__this = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t53  Matrix4x4_TRS_m204 (Object_t * __this /* static, unused */, Vector3_t54  ___pos, Quaternion_t55  ___q, Vector3_t54  ___s, MethodInfo* method)
{
	{
		Matrix4x4_t53  L_0 = Matrix4x4_INTERNAL_CALL_TRS_m5323(NULL /*static, unused*/, (&___pos), (&___q), (&___s), /*hidden argument*/&Matrix4x4_INTERNAL_CALL_TRS_m5323_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t53  Matrix4x4_INTERNAL_CALL_TRS_m5323 (Object_t * __this /* static, unused */, Vector3_t54 * ___pos, Quaternion_t55 * ___q, Vector3_t54 * ___s, MethodInfo* method)
{
	typedef Matrix4x4_t53  (*Matrix4x4_INTERNAL_CALL_TRS_m5323_ftn) (Vector3_t54 *, Quaternion_t55 *, Vector3_t54 *);
	static Matrix4x4_INTERNAL_CALL_TRS_m5323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_TRS_m5323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___pos, ___q, ___s);
}
// System.String UnityEngine.Matrix4x4::ToString()
extern MethodInfo Matrix4x4_ToString_m5324_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Matrix4x4_ToString_m5324 (Matrix4x4_t53 * __this, MethodInfo* method)
{
	static bool Matrix4x4_ToString_m5324_init;
	if (!Matrix4x4_ToString_m5324_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Matrix4x4_ToString_m5324_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, ((int32_t)16)));
		float L_1 = (__this->___m00_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		float L_5 = (__this->___m01_4);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t137* L_8 = L_4;
		float L_9 = (__this->___m02_8);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t137* L_12 = L_8;
		float L_13 = (__this->___m03_12);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		ObjectU5BU5D_t137* L_16 = L_12;
		float L_17 = (__this->___m10_1);
		float L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_19;
		ObjectU5BU5D_t137* L_20 = L_16;
		float L_21 = (__this->___m11_5);
		float L_22 = L_21;
		Object_t * L_23 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5)) = (Object_t *)L_23;
		ObjectU5BU5D_t137* L_24 = L_20;
		float L_25 = (__this->___m12_9);
		float L_26 = L_25;
		Object_t * L_27 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6)) = (Object_t *)L_27;
		ObjectU5BU5D_t137* L_28 = L_24;
		float L_29 = (__this->___m13_13);
		float L_30 = L_29;
		Object_t * L_31 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7)) = (Object_t *)L_31;
		ObjectU5BU5D_t137* L_32 = L_28;
		float L_33 = (__this->___m20_2);
		float L_34 = L_33;
		Object_t * L_35 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8)) = (Object_t *)L_35;
		ObjectU5BU5D_t137* L_36 = L_32;
		float L_37 = (__this->___m21_6);
		float L_38 = L_37;
		Object_t * L_39 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_38);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9))) = (Object_t *)L_39;
		ObjectU5BU5D_t137* L_40 = L_36;
		float L_41 = (__this->___m22_10);
		float L_42 = L_41;
		Object_t * L_43 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_42);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10))) = (Object_t *)L_43;
		ObjectU5BU5D_t137* L_44 = L_40;
		float L_45 = (__this->___m23_14);
		float L_46 = L_45;
		Object_t * L_47 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11))) = (Object_t *)L_47;
		ObjectU5BU5D_t137* L_48 = L_44;
		float L_49 = (__this->___m30_3);
		float L_50 = L_49;
		Object_t * L_51 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12))) = (Object_t *)L_51;
		ObjectU5BU5D_t137* L_52 = L_48;
		float L_53 = (__this->___m31_7);
		float L_54 = L_53;
		Object_t * L_55 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13))) = (Object_t *)L_55;
		ObjectU5BU5D_t137* L_56 = L_52;
		float L_57 = (__this->___m32_11);
		float L_58 = L_57;
		Object_t * L_59 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_58);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14))) = (Object_t *)L_59;
		ObjectU5BU5D_t137* L_60 = L_56;
		float L_61 = (__this->___m33_15);
		float L_62 = L_61;
		Object_t * L_63 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_62);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral928, L_60, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_64;
	}
}
// System.String UnityEngine.Matrix4x4::ToString(System.String)
extern MethodInfo Matrix4x4_ToString_m5325_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Matrix4x4_ToString_m5325 (Matrix4x4_t53 * __this, String_t* ___format, MethodInfo* method)
{
	static bool Matrix4x4_ToString_m5325_init;
	if (!Matrix4x4_ToString_m5325_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Matrix4x4_ToString_m5325_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, ((int32_t)16)));
		float* L_1 = &(__this->___m00_0);
		String_t* L_2 = Single_ToString_m1030(L_1, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_2;
		ObjectU5BU5D_t137* L_3 = L_0;
		float* L_4 = &(__this->___m01_4);
		String_t* L_5 = Single_ToString_m1030(L_4, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t137* L_6 = L_3;
		float* L_7 = &(__this->___m02_8);
		String_t* L_8 = Single_ToString_m1030(L_7, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t137* L_9 = L_6;
		float* L_10 = &(__this->___m03_12);
		String_t* L_11 = Single_ToString_m1030(L_10, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t137* L_12 = L_9;
		float* L_13 = &(__this->___m10_1);
		String_t* L_14 = Single_ToString_m1030(L_13, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 4)) = (Object_t *)L_14;
		ObjectU5BU5D_t137* L_15 = L_12;
		float* L_16 = &(__this->___m11_5);
		String_t* L_17 = Single_ToString_m1030(L_16, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 5);
		ArrayElementTypeCheck (L_15, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 5)) = (Object_t *)L_17;
		ObjectU5BU5D_t137* L_18 = L_15;
		float* L_19 = &(__this->___m12_9);
		String_t* L_20 = Single_ToString_m1030(L_19, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 6);
		ArrayElementTypeCheck (L_18, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 6)) = (Object_t *)L_20;
		ObjectU5BU5D_t137* L_21 = L_18;
		float* L_22 = &(__this->___m13_13);
		String_t* L_23 = Single_ToString_m1030(L_22, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 7);
		ArrayElementTypeCheck (L_21, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 7)) = (Object_t *)L_23;
		ObjectU5BU5D_t137* L_24 = L_21;
		float* L_25 = &(__this->___m20_2);
		String_t* L_26 = Single_ToString_m1030(L_25, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 8);
		ArrayElementTypeCheck (L_24, L_26);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 8)) = (Object_t *)L_26;
		ObjectU5BU5D_t137* L_27 = L_24;
		float* L_28 = &(__this->___m21_6);
		String_t* L_29 = Single_ToString_m1030(L_28, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)9));
		ArrayElementTypeCheck (L_27, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, ((int32_t)9))) = (Object_t *)L_29;
		ObjectU5BU5D_t137* L_30 = L_27;
		float* L_31 = &(__this->___m22_10);
		String_t* L_32 = Single_ToString_m1030(L_31, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)10));
		ArrayElementTypeCheck (L_30, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, ((int32_t)10))) = (Object_t *)L_32;
		ObjectU5BU5D_t137* L_33 = L_30;
		float* L_34 = &(__this->___m23_14);
		String_t* L_35 = Single_ToString_m1030(L_34, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)11));
		ArrayElementTypeCheck (L_33, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)11))) = (Object_t *)L_35;
		ObjectU5BU5D_t137* L_36 = L_33;
		float* L_37 = &(__this->___m30_3);
		String_t* L_38 = Single_ToString_m1030(L_37, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)12));
		ArrayElementTypeCheck (L_36, L_38);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)12))) = (Object_t *)L_38;
		ObjectU5BU5D_t137* L_39 = L_36;
		float* L_40 = &(__this->___m31_7);
		String_t* L_41 = Single_ToString_m1030(L_40, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)13));
		ArrayElementTypeCheck (L_39, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)13))) = (Object_t *)L_41;
		ObjectU5BU5D_t137* L_42 = L_39;
		float* L_43 = &(__this->___m32_11);
		String_t* L_44 = Single_ToString_m1030(L_43, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)14));
		ArrayElementTypeCheck (L_42, L_44);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, ((int32_t)14))) = (Object_t *)L_44;
		ObjectU5BU5D_t137* L_45 = L_42;
		float* L_46 = &(__this->___m33_15);
		String_t* L_47 = Single_ToString_m1030(L_46, ___format, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)15));
		ArrayElementTypeCheck (L_45, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, ((int32_t)15))) = (Object_t *)L_47;
		String_t* L_48 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral929, L_45, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_48;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern MethodInfo Matrix4x4_Ortho_m5326_MethodInfo;
extern "C" Matrix4x4_t53  Matrix4x4_Ortho_m5326 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, MethodInfo* method)
{
	typedef Matrix4x4_t53  (*Matrix4x4_Ortho_m5326_ftn) (float, float, float, float, float, float);
	static Matrix4x4_Ortho_m5326_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Ortho_m5326_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___left, ___right, ___bottom, ___top, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern MethodInfo Matrix4x4_Perspective_m5327_MethodInfo;
extern "C" Matrix4x4_t53  Matrix4x4_Perspective_m5327 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, MethodInfo* method)
{
	typedef Matrix4x4_t53  (*Matrix4x4_Perspective_m5327_ftn) (float, float, float, float);
	static Matrix4x4_Perspective_m5327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Perspective_m5327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___fov, ___aspect, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern MethodInfo Matrix4x4_op_Multiply_m543_MethodInfo;
extern "C" Matrix4x4_t53  Matrix4x4_op_Multiply_m543 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___lhs, Matrix4x4_t53  ___rhs, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t53_il2cpp_TypeInfo), (&V_0));
		NullCheck((&___lhs));
		float L_0 = ((&___lhs)->___m00_0);
		NullCheck((&___rhs));
		float L_1 = ((&___rhs)->___m00_0);
		NullCheck((&___lhs));
		float L_2 = ((&___lhs)->___m01_4);
		NullCheck((&___rhs));
		float L_3 = ((&___rhs)->___m10_1);
		NullCheck((&___lhs));
		float L_4 = ((&___lhs)->___m02_8);
		NullCheck((&___rhs));
		float L_5 = ((&___rhs)->___m20_2);
		NullCheck((&___lhs));
		float L_6 = ((&___lhs)->___m03_12);
		NullCheck((&___rhs));
		float L_7 = ((&___rhs)->___m30_3);
		NullCheck((&V_0));
		(&V_0)->___m00_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		NullCheck((&___lhs));
		float L_8 = ((&___lhs)->___m00_0);
		NullCheck((&___rhs));
		float L_9 = ((&___rhs)->___m01_4);
		NullCheck((&___lhs));
		float L_10 = ((&___lhs)->___m01_4);
		NullCheck((&___rhs));
		float L_11 = ((&___rhs)->___m11_5);
		NullCheck((&___lhs));
		float L_12 = ((&___lhs)->___m02_8);
		NullCheck((&___rhs));
		float L_13 = ((&___rhs)->___m21_6);
		NullCheck((&___lhs));
		float L_14 = ((&___lhs)->___m03_12);
		NullCheck((&___rhs));
		float L_15 = ((&___rhs)->___m31_7);
		NullCheck((&V_0));
		(&V_0)->___m01_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		NullCheck((&___lhs));
		float L_16 = ((&___lhs)->___m00_0);
		NullCheck((&___rhs));
		float L_17 = ((&___rhs)->___m02_8);
		NullCheck((&___lhs));
		float L_18 = ((&___lhs)->___m01_4);
		NullCheck((&___rhs));
		float L_19 = ((&___rhs)->___m12_9);
		NullCheck((&___lhs));
		float L_20 = ((&___lhs)->___m02_8);
		NullCheck((&___rhs));
		float L_21 = ((&___rhs)->___m22_10);
		NullCheck((&___lhs));
		float L_22 = ((&___lhs)->___m03_12);
		NullCheck((&___rhs));
		float L_23 = ((&___rhs)->___m32_11);
		NullCheck((&V_0));
		(&V_0)->___m02_8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		NullCheck((&___lhs));
		float L_24 = ((&___lhs)->___m00_0);
		NullCheck((&___rhs));
		float L_25 = ((&___rhs)->___m03_12);
		NullCheck((&___lhs));
		float L_26 = ((&___lhs)->___m01_4);
		NullCheck((&___rhs));
		float L_27 = ((&___rhs)->___m13_13);
		NullCheck((&___lhs));
		float L_28 = ((&___lhs)->___m02_8);
		NullCheck((&___rhs));
		float L_29 = ((&___rhs)->___m23_14);
		NullCheck((&___lhs));
		float L_30 = ((&___lhs)->___m03_12);
		NullCheck((&___rhs));
		float L_31 = ((&___rhs)->___m33_15);
		NullCheck((&V_0));
		(&V_0)->___m03_12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		NullCheck((&___lhs));
		float L_32 = ((&___lhs)->___m10_1);
		NullCheck((&___rhs));
		float L_33 = ((&___rhs)->___m00_0);
		NullCheck((&___lhs));
		float L_34 = ((&___lhs)->___m11_5);
		NullCheck((&___rhs));
		float L_35 = ((&___rhs)->___m10_1);
		NullCheck((&___lhs));
		float L_36 = ((&___lhs)->___m12_9);
		NullCheck((&___rhs));
		float L_37 = ((&___rhs)->___m20_2);
		NullCheck((&___lhs));
		float L_38 = ((&___lhs)->___m13_13);
		NullCheck((&___rhs));
		float L_39 = ((&___rhs)->___m30_3);
		NullCheck((&V_0));
		(&V_0)->___m10_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		NullCheck((&___lhs));
		float L_40 = ((&___lhs)->___m10_1);
		NullCheck((&___rhs));
		float L_41 = ((&___rhs)->___m01_4);
		NullCheck((&___lhs));
		float L_42 = ((&___lhs)->___m11_5);
		NullCheck((&___rhs));
		float L_43 = ((&___rhs)->___m11_5);
		NullCheck((&___lhs));
		float L_44 = ((&___lhs)->___m12_9);
		NullCheck((&___rhs));
		float L_45 = ((&___rhs)->___m21_6);
		NullCheck((&___lhs));
		float L_46 = ((&___lhs)->___m13_13);
		NullCheck((&___rhs));
		float L_47 = ((&___rhs)->___m31_7);
		NullCheck((&V_0));
		(&V_0)->___m11_5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		NullCheck((&___lhs));
		float L_48 = ((&___lhs)->___m10_1);
		NullCheck((&___rhs));
		float L_49 = ((&___rhs)->___m02_8);
		NullCheck((&___lhs));
		float L_50 = ((&___lhs)->___m11_5);
		NullCheck((&___rhs));
		float L_51 = ((&___rhs)->___m12_9);
		NullCheck((&___lhs));
		float L_52 = ((&___lhs)->___m12_9);
		NullCheck((&___rhs));
		float L_53 = ((&___rhs)->___m22_10);
		NullCheck((&___lhs));
		float L_54 = ((&___lhs)->___m13_13);
		NullCheck((&___rhs));
		float L_55 = ((&___rhs)->___m32_11);
		NullCheck((&V_0));
		(&V_0)->___m12_9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		NullCheck((&___lhs));
		float L_56 = ((&___lhs)->___m10_1);
		NullCheck((&___rhs));
		float L_57 = ((&___rhs)->___m03_12);
		NullCheck((&___lhs));
		float L_58 = ((&___lhs)->___m11_5);
		NullCheck((&___rhs));
		float L_59 = ((&___rhs)->___m13_13);
		NullCheck((&___lhs));
		float L_60 = ((&___lhs)->___m12_9);
		NullCheck((&___rhs));
		float L_61 = ((&___rhs)->___m23_14);
		NullCheck((&___lhs));
		float L_62 = ((&___lhs)->___m13_13);
		NullCheck((&___rhs));
		float L_63 = ((&___rhs)->___m33_15);
		NullCheck((&V_0));
		(&V_0)->___m13_13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		NullCheck((&___lhs));
		float L_64 = ((&___lhs)->___m20_2);
		NullCheck((&___rhs));
		float L_65 = ((&___rhs)->___m00_0);
		NullCheck((&___lhs));
		float L_66 = ((&___lhs)->___m21_6);
		NullCheck((&___rhs));
		float L_67 = ((&___rhs)->___m10_1);
		NullCheck((&___lhs));
		float L_68 = ((&___lhs)->___m22_10);
		NullCheck((&___rhs));
		float L_69 = ((&___rhs)->___m20_2);
		NullCheck((&___lhs));
		float L_70 = ((&___lhs)->___m23_14);
		NullCheck((&___rhs));
		float L_71 = ((&___rhs)->___m30_3);
		NullCheck((&V_0));
		(&V_0)->___m20_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		NullCheck((&___lhs));
		float L_72 = ((&___lhs)->___m20_2);
		NullCheck((&___rhs));
		float L_73 = ((&___rhs)->___m01_4);
		NullCheck((&___lhs));
		float L_74 = ((&___lhs)->___m21_6);
		NullCheck((&___rhs));
		float L_75 = ((&___rhs)->___m11_5);
		NullCheck((&___lhs));
		float L_76 = ((&___lhs)->___m22_10);
		NullCheck((&___rhs));
		float L_77 = ((&___rhs)->___m21_6);
		NullCheck((&___lhs));
		float L_78 = ((&___lhs)->___m23_14);
		NullCheck((&___rhs));
		float L_79 = ((&___rhs)->___m31_7);
		NullCheck((&V_0));
		(&V_0)->___m21_6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		NullCheck((&___lhs));
		float L_80 = ((&___lhs)->___m20_2);
		NullCheck((&___rhs));
		float L_81 = ((&___rhs)->___m02_8);
		NullCheck((&___lhs));
		float L_82 = ((&___lhs)->___m21_6);
		NullCheck((&___rhs));
		float L_83 = ((&___rhs)->___m12_9);
		NullCheck((&___lhs));
		float L_84 = ((&___lhs)->___m22_10);
		NullCheck((&___rhs));
		float L_85 = ((&___rhs)->___m22_10);
		NullCheck((&___lhs));
		float L_86 = ((&___lhs)->___m23_14);
		NullCheck((&___rhs));
		float L_87 = ((&___rhs)->___m32_11);
		NullCheck((&V_0));
		(&V_0)->___m22_10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		NullCheck((&___lhs));
		float L_88 = ((&___lhs)->___m20_2);
		NullCheck((&___rhs));
		float L_89 = ((&___rhs)->___m03_12);
		NullCheck((&___lhs));
		float L_90 = ((&___lhs)->___m21_6);
		NullCheck((&___rhs));
		float L_91 = ((&___rhs)->___m13_13);
		NullCheck((&___lhs));
		float L_92 = ((&___lhs)->___m22_10);
		NullCheck((&___rhs));
		float L_93 = ((&___rhs)->___m23_14);
		NullCheck((&___lhs));
		float L_94 = ((&___lhs)->___m23_14);
		NullCheck((&___rhs));
		float L_95 = ((&___rhs)->___m33_15);
		NullCheck((&V_0));
		(&V_0)->___m23_14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		NullCheck((&___lhs));
		float L_96 = ((&___lhs)->___m30_3);
		NullCheck((&___rhs));
		float L_97 = ((&___rhs)->___m00_0);
		NullCheck((&___lhs));
		float L_98 = ((&___lhs)->___m31_7);
		NullCheck((&___rhs));
		float L_99 = ((&___rhs)->___m10_1);
		NullCheck((&___lhs));
		float L_100 = ((&___lhs)->___m32_11);
		NullCheck((&___rhs));
		float L_101 = ((&___rhs)->___m20_2);
		NullCheck((&___lhs));
		float L_102 = ((&___lhs)->___m33_15);
		NullCheck((&___rhs));
		float L_103 = ((&___rhs)->___m30_3);
		NullCheck((&V_0));
		(&V_0)->___m30_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		NullCheck((&___lhs));
		float L_104 = ((&___lhs)->___m30_3);
		NullCheck((&___rhs));
		float L_105 = ((&___rhs)->___m01_4);
		NullCheck((&___lhs));
		float L_106 = ((&___lhs)->___m31_7);
		NullCheck((&___rhs));
		float L_107 = ((&___rhs)->___m11_5);
		NullCheck((&___lhs));
		float L_108 = ((&___lhs)->___m32_11);
		NullCheck((&___rhs));
		float L_109 = ((&___rhs)->___m21_6);
		NullCheck((&___lhs));
		float L_110 = ((&___lhs)->___m33_15);
		NullCheck((&___rhs));
		float L_111 = ((&___rhs)->___m31_7);
		NullCheck((&V_0));
		(&V_0)->___m31_7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		NullCheck((&___lhs));
		float L_112 = ((&___lhs)->___m30_3);
		NullCheck((&___rhs));
		float L_113 = ((&___rhs)->___m02_8);
		NullCheck((&___lhs));
		float L_114 = ((&___lhs)->___m31_7);
		NullCheck((&___rhs));
		float L_115 = ((&___rhs)->___m12_9);
		NullCheck((&___lhs));
		float L_116 = ((&___lhs)->___m32_11);
		NullCheck((&___rhs));
		float L_117 = ((&___rhs)->___m22_10);
		NullCheck((&___lhs));
		float L_118 = ((&___lhs)->___m33_15);
		NullCheck((&___rhs));
		float L_119 = ((&___rhs)->___m32_11);
		NullCheck((&V_0));
		(&V_0)->___m32_11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		NullCheck((&___lhs));
		float L_120 = ((&___lhs)->___m30_3);
		NullCheck((&___rhs));
		float L_121 = ((&___rhs)->___m03_12);
		NullCheck((&___lhs));
		float L_122 = ((&___lhs)->___m31_7);
		NullCheck((&___rhs));
		float L_123 = ((&___rhs)->___m13_13);
		NullCheck((&___lhs));
		float L_124 = ((&___lhs)->___m32_11);
		NullCheck((&___rhs));
		float L_125 = ((&___rhs)->___m23_14);
		NullCheck((&___lhs));
		float L_126 = ((&___lhs)->___m33_15);
		NullCheck((&___rhs));
		float L_127 = ((&___rhs)->___m33_15);
		NullCheck((&V_0));
		(&V_0)->___m33_15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		return V_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern MethodInfo Matrix4x4_op_Multiply_m606_MethodInfo;
extern "C" Vector4_t52  Matrix4x4_op_Multiply_m606 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___lhs, Vector4_t52  ___v, MethodInfo* method)
{
	Vector4_t52  V_0 = {0};
	{
		NullCheck((&___lhs));
		float L_0 = ((&___lhs)->___m00_0);
		NullCheck((&___v));
		float L_1 = ((&___v)->___x_1);
		NullCheck((&___lhs));
		float L_2 = ((&___lhs)->___m01_4);
		NullCheck((&___v));
		float L_3 = ((&___v)->___y_2);
		NullCheck((&___lhs));
		float L_4 = ((&___lhs)->___m02_8);
		NullCheck((&___v));
		float L_5 = ((&___v)->___z_3);
		NullCheck((&___lhs));
		float L_6 = ((&___lhs)->___m03_12);
		NullCheck((&___v));
		float L_7 = ((&___v)->___w_4);
		NullCheck((&V_0));
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		NullCheck((&___lhs));
		float L_8 = ((&___lhs)->___m10_1);
		NullCheck((&___v));
		float L_9 = ((&___v)->___x_1);
		NullCheck((&___lhs));
		float L_10 = ((&___lhs)->___m11_5);
		NullCheck((&___v));
		float L_11 = ((&___v)->___y_2);
		NullCheck((&___lhs));
		float L_12 = ((&___lhs)->___m12_9);
		NullCheck((&___v));
		float L_13 = ((&___v)->___z_3);
		NullCheck((&___lhs));
		float L_14 = ((&___lhs)->___m13_13);
		NullCheck((&___v));
		float L_15 = ((&___v)->___w_4);
		NullCheck((&V_0));
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		NullCheck((&___lhs));
		float L_16 = ((&___lhs)->___m20_2);
		NullCheck((&___v));
		float L_17 = ((&___v)->___x_1);
		NullCheck((&___lhs));
		float L_18 = ((&___lhs)->___m21_6);
		NullCheck((&___v));
		float L_19 = ((&___v)->___y_2);
		NullCheck((&___lhs));
		float L_20 = ((&___lhs)->___m22_10);
		NullCheck((&___v));
		float L_21 = ((&___v)->___z_3);
		NullCheck((&___lhs));
		float L_22 = ((&___lhs)->___m23_14);
		NullCheck((&___v));
		float L_23 = ((&___v)->___w_4);
		NullCheck((&V_0));
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		NullCheck((&___lhs));
		float L_24 = ((&___lhs)->___m30_3);
		NullCheck((&___v));
		float L_25 = ((&___v)->___x_1);
		NullCheck((&___lhs));
		float L_26 = ((&___lhs)->___m31_7);
		NullCheck((&___v));
		float L_27 = ((&___v)->___y_2);
		NullCheck((&___lhs));
		float L_28 = ((&___lhs)->___m32_11);
		NullCheck((&___v));
		float L_29 = ((&___v)->___z_3);
		NullCheck((&___lhs));
		float L_30 = ((&___lhs)->___m33_15);
		NullCheck((&___v));
		float L_31 = ((&___v)->___w_4);
		NullCheck((&V_0));
		(&V_0)->___w_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		return V_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m5328 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___lhs, Matrix4x4_t53  ___rhs, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		Vector4_t52  L_0 = Matrix4x4_GetColumn_m5319((&___lhs), 0, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		Vector4_t52  L_1 = Matrix4x4_GetColumn_m5319((&___rhs), 0, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		bool L_2 = Vector4_op_Equality_m5359(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector4_op_Equality_m5359_MethodInfo);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t52  L_3 = Matrix4x4_GetColumn_m5319((&___lhs), 1, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		Vector4_t52  L_4 = Matrix4x4_GetColumn_m5319((&___rhs), 1, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		bool L_5 = Vector4_op_Equality_m5359(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector4_op_Equality_m5359_MethodInfo);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t52  L_6 = Matrix4x4_GetColumn_m5319((&___lhs), 2, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		Vector4_t52  L_7 = Matrix4x4_GetColumn_m5319((&___rhs), 2, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		bool L_8 = Vector4_op_Equality_m5359(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Vector4_op_Equality_m5359_MethodInfo);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t52  L_9 = Matrix4x4_GetColumn_m5319((&___lhs), 3, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		Vector4_t52  L_10 = Matrix4x4_GetColumn_m5319((&___rhs), 3, /*hidden argument*/&Matrix4x4_GetColumn_m5319_MethodInfo);
		bool L_11 = Vector4_op_Equality_m5359(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Vector4_op_Equality_m5359_MethodInfo);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern MethodInfo Matrix4x4_op_Inequality_m5329_MethodInfo;
extern "C" bool Matrix4x4_op_Inequality_m5329 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___lhs, Matrix4x4_t53  ___rhs, MethodInfo* method)
{
	{
		bool L_0 = Matrix4x4_op_Equality_m5328(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&Matrix4x4_op_Equality_m5328_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Bounds_t141_il2cpp_TypeInfo;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"

// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern MethodInfo Bounds_get_center_m2694_MethodInfo;
extern MethodInfo Bounds_get_extents_m5332_MethodInfo;
extern MethodInfo Bounds_get_max_m2703_MethodInfo;
extern MethodInfo Bounds_SetMinMax_m5336_MethodInfo;
extern MethodInfo Bounds_get_min_m2685_MethodInfo;
extern MethodInfo Bounds_set_extents_m5333_MethodInfo;
extern MethodInfo Bounds_set_center_m2696_MethodInfo;
extern MethodInfo Bounds_Encapsulate_m2702_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_Contains_m5342_MethodInfo;
extern MethodInfo Bounds_Internal_Contains_m5341_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_SqrDistance_m5345_MethodInfo;
extern MethodInfo Bounds_Internal_SqrDistance_m5344_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_IntersectRay_m5348_MethodInfo;
extern MethodInfo Bounds_Internal_IntersectRay_m5347_MethodInfo;
extern MethodInfo Bounds_op_Equality_m5353_MethodInfo;


// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Bounds__ctor_m2693_MethodInfo;
extern "C" void Bounds__ctor_m2693 (Bounds_t141 * __this, Vector3_t54  ___center, Vector3_t54  ___size, MethodInfo* method)
{
	{
		__this->___m_Center_0 = ___center;
		Vector3_t54  L_0 = Vector3_op_Multiply_m601(NULL /*static, unused*/, ___size, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		__this->___m_Extents_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern MethodInfo Bounds_GetHashCode_m5330_MethodInfo;
extern "C" int32_t Bounds_GetHashCode_m5330 (Bounds_t141 * __this, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	Vector3_t54  V_1 = {0};
	{
		Vector3_t54  L_0 = Bounds_get_center_m2694(__this, /*hidden argument*/&Bounds_get_center_m2694_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Vector3_GetHashCode_m5278((&V_0), /*hidden argument*/&Vector3_GetHashCode_m5278_MethodInfo);
		Vector3_t54  L_2 = Bounds_get_extents_m5332(__this, /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Vector3_GetHashCode_m5278((&V_1), /*hidden argument*/&Vector3_GetHashCode_m5278_MethodInfo);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern MethodInfo Bounds_Equals_m5331_MethodInfo;
extern "C" bool Bounds_Equals_m5331 (Bounds_t141 * __this, Object_t * ___other, MethodInfo* method)
{
	Bounds_t141  V_0 = {0};
	Vector3_t54  V_1 = {0};
	Vector3_t54  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Bounds_t141_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = ((*(Bounds_t141 *)((Bounds_t141 *)UnBox (___other, InitializedTypeInfo(&Bounds_t141_il2cpp_TypeInfo)))));
		Vector3_t54  L_0 = Bounds_get_center_m2694(__this, /*hidden argument*/&Bounds_get_center_m2694_MethodInfo);
		V_1 = L_0;
		Vector3_t54  L_1 = Bounds_get_center_m2694((&V_0), /*hidden argument*/&Bounds_get_center_m2694_MethodInfo);
		Vector3_t54  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t54_il2cpp_TypeInfo), &L_2);
		bool L_4 = Vector3_Equals_m5279((&V_1), L_3, /*hidden argument*/&Vector3_Equals_m5279_MethodInfo);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t54  L_5 = Bounds_get_extents_m5332(__this, /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		V_2 = L_5;
		Vector3_t54  L_6 = Bounds_get_extents_m5332((&V_0), /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		Vector3_t54  L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&Vector3_t54_il2cpp_TypeInfo), &L_7);
		bool L_9 = Vector3_Equals_m5279((&V_2), L_8, /*hidden argument*/&Vector3_Equals_m5279_MethodInfo);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t54  Bounds_get_center_m2694 (Bounds_t141 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = (__this->___m_Center_0);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m2696 (Bounds_t141 * __this, Vector3_t54  ___value, MethodInfo* method)
{
	{
		__this->___m_Center_0 = ___value;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern MethodInfo Bounds_get_size_m571_MethodInfo;
extern "C" Vector3_t54  Bounds_get_size_m571 (Bounds_t141 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = (__this->___m_Extents_1);
		Vector3_t54  L_1 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_0, (2.0f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern MethodInfo Bounds_set_size_m2695_MethodInfo;
extern "C" void Bounds_set_size_m2695 (Bounds_t141 * __this, Vector3_t54  ___value, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Vector3_op_Multiply_m601(NULL /*static, unused*/, ___value, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		__this->___m_Extents_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t54  Bounds_get_extents_m5332 (Bounds_t141 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = (__this->___m_Extents_1);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m5333 (Bounds_t141 * __this, Vector3_t54  ___value, MethodInfo* method)
{
	{
		__this->___m_Extents_1 = ___value;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t54  Bounds_get_min_m2685 (Bounds_t141 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Bounds_get_center_m2694(__this, /*hidden argument*/&Bounds_get_center_m2694_MethodInfo);
		Vector3_t54  L_1 = Bounds_get_extents_m5332(__this, /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		Vector3_t54  L_2 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern MethodInfo Bounds_set_min_m5334_MethodInfo;
extern "C" void Bounds_set_min_m5334 (Bounds_t141 * __this, Vector3_t54  ___value, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Bounds_get_max_m2703(__this, /*hidden argument*/&Bounds_get_max_m2703_MethodInfo);
		Bounds_SetMinMax_m5336(__this, ___value, L_0, /*hidden argument*/&Bounds_SetMinMax_m5336_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t54  Bounds_get_max_m2703 (Bounds_t141 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Bounds_get_center_m2694(__this, /*hidden argument*/&Bounds_get_center_m2694_MethodInfo);
		Vector3_t54  L_1 = Bounds_get_extents_m5332(__this, /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		Vector3_t54  L_2 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern MethodInfo Bounds_set_max_m5335_MethodInfo;
extern "C" void Bounds_set_max_m5335 (Bounds_t141 * __this, Vector3_t54  ___value, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Bounds_get_min_m2685(__this, /*hidden argument*/&Bounds_get_min_m2685_MethodInfo);
		Bounds_SetMinMax_m5336(__this, L_0, ___value, /*hidden argument*/&Bounds_SetMinMax_m5336_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m5336 (Bounds_t141 * __this, Vector3_t54  ___min, Vector3_t54  ___max, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, ___max, ___min, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		Vector3_t54  L_1 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_0, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Bounds_set_extents_m5333(__this, L_1, /*hidden argument*/&Bounds_set_extents_m5333_MethodInfo);
		Vector3_t54  L_2 = Bounds_get_extents_m5332(__this, /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		Vector3_t54  L_3 = Vector3_op_Addition_m602(NULL /*static, unused*/, ___min, L_2, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		Bounds_set_center_m2696(__this, L_3, /*hidden argument*/&Bounds_set_center_m2696_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m2702 (Bounds_t141 * __this, Vector3_t54  ___point, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Bounds_get_min_m2685(__this, /*hidden argument*/&Bounds_get_min_m2685_MethodInfo);
		Vector3_t54  L_1 = Vector3_Min_m2700(NULL /*static, unused*/, L_0, ___point, /*hidden argument*/&Vector3_Min_m2700_MethodInfo);
		Vector3_t54  L_2 = Bounds_get_max_m2703(__this, /*hidden argument*/&Bounds_get_max_m2703_MethodInfo);
		Vector3_t54  L_3 = Vector3_Max_m2701(NULL /*static, unused*/, L_2, ___point, /*hidden argument*/&Vector3_Max_m2701_MethodInfo);
		Bounds_SetMinMax_m5336(__this, L_1, L_3, /*hidden argument*/&Bounds_SetMinMax_m5336_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern MethodInfo Bounds_Encapsulate_m5337_MethodInfo;
extern "C" void Bounds_Encapsulate_m5337 (Bounds_t141 * __this, Bounds_t141  ___bounds, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Bounds_get_center_m2694((&___bounds), /*hidden argument*/&Bounds_get_center_m2694_MethodInfo);
		Vector3_t54  L_1 = Bounds_get_extents_m5332((&___bounds), /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		Vector3_t54  L_2 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		Bounds_Encapsulate_m2702(__this, L_2, /*hidden argument*/&Bounds_Encapsulate_m2702_MethodInfo);
		Vector3_t54  L_3 = Bounds_get_center_m2694((&___bounds), /*hidden argument*/&Bounds_get_center_m2694_MethodInfo);
		Vector3_t54  L_4 = Bounds_get_extents_m5332((&___bounds), /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		Vector3_t54  L_5 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		Bounds_Encapsulate_m2702(__this, L_5, /*hidden argument*/&Bounds_Encapsulate_m2702_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(System.Single)
extern MethodInfo Bounds_Expand_m5338_MethodInfo;
extern "C" void Bounds_Expand_m5338 (Bounds_t141 * __this, float ___amount, MethodInfo* method)
{
	{
		___amount = ((float)((float)___amount*(float)(0.5f)));
		Vector3_t54  L_0 = Bounds_get_extents_m5332(__this, /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		Vector3_t54  L_1 = {0};
		Vector3__ctor_m222(&L_1, ___amount, ___amount, ___amount, /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		Vector3_t54  L_2 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		Bounds_set_extents_m5333(__this, L_2, /*hidden argument*/&Bounds_set_extents_m5333_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern MethodInfo Bounds_Expand_m5339_MethodInfo;
extern "C" void Bounds_Expand_m5339 (Bounds_t141 * __this, Vector3_t54  ___amount, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Bounds_get_extents_m5332(__this, /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		Vector3_t54  L_1 = Vector3_op_Multiply_m601(NULL /*static, unused*/, ___amount, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Vector3_t54  L_2 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		Bounds_set_extents_m5333(__this, L_2, /*hidden argument*/&Bounds_set_extents_m5333_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern MethodInfo Bounds_Intersects_m5340_MethodInfo;
extern "C" bool Bounds_Intersects_m5340 (Bounds_t141 * __this, Bounds_t141  ___bounds, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	Vector3_t54  V_1 = {0};
	Vector3_t54  V_2 = {0};
	Vector3_t54  V_3 = {0};
	Vector3_t54  V_4 = {0};
	Vector3_t54  V_5 = {0};
	Vector3_t54  V_6 = {0};
	Vector3_t54  V_7 = {0};
	Vector3_t54  V_8 = {0};
	Vector3_t54  V_9 = {0};
	Vector3_t54  V_10 = {0};
	Vector3_t54  V_11 = {0};
	int32_t G_B7_0 = 0;
	{
		Vector3_t54  L_0 = Bounds_get_min_m2685(__this, /*hidden argument*/&Bounds_get_min_m2685_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		float L_1 = ((&V_0)->___x_1);
		Vector3_t54  L_2 = Bounds_get_max_m2703((&___bounds), /*hidden argument*/&Bounds_get_max_m2703_MethodInfo);
		V_1 = L_2;
		NullCheck((&V_1));
		float L_3 = ((&V_1)->___x_1);
		if ((((float)L_1) > ((float)L_3)))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t54  L_4 = Bounds_get_max_m2703(__this, /*hidden argument*/&Bounds_get_max_m2703_MethodInfo);
		V_2 = L_4;
		NullCheck((&V_2));
		float L_5 = ((&V_2)->___x_1);
		Vector3_t54  L_6 = Bounds_get_min_m2685((&___bounds), /*hidden argument*/&Bounds_get_min_m2685_MethodInfo);
		V_3 = L_6;
		NullCheck((&V_3));
		float L_7 = ((&V_3)->___x_1);
		if ((((float)L_5) < ((float)L_7)))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t54  L_8 = Bounds_get_min_m2685(__this, /*hidden argument*/&Bounds_get_min_m2685_MethodInfo);
		V_4 = L_8;
		NullCheck((&V_4));
		float L_9 = ((&V_4)->___y_2);
		Vector3_t54  L_10 = Bounds_get_max_m2703((&___bounds), /*hidden argument*/&Bounds_get_max_m2703_MethodInfo);
		V_5 = L_10;
		NullCheck((&V_5));
		float L_11 = ((&V_5)->___y_2);
		if ((((float)L_9) > ((float)L_11)))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t54  L_12 = Bounds_get_max_m2703(__this, /*hidden argument*/&Bounds_get_max_m2703_MethodInfo);
		V_6 = L_12;
		NullCheck((&V_6));
		float L_13 = ((&V_6)->___y_2);
		Vector3_t54  L_14 = Bounds_get_min_m2685((&___bounds), /*hidden argument*/&Bounds_get_min_m2685_MethodInfo);
		V_7 = L_14;
		NullCheck((&V_7));
		float L_15 = ((&V_7)->___y_2);
		if ((((float)L_13) < ((float)L_15)))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t54  L_16 = Bounds_get_min_m2685(__this, /*hidden argument*/&Bounds_get_min_m2685_MethodInfo);
		V_8 = L_16;
		NullCheck((&V_8));
		float L_17 = ((&V_8)->___z_3);
		Vector3_t54  L_18 = Bounds_get_max_m2703((&___bounds), /*hidden argument*/&Bounds_get_max_m2703_MethodInfo);
		V_9 = L_18;
		NullCheck((&V_9));
		float L_19 = ((&V_9)->___z_3);
		if ((((float)L_17) > ((float)L_19)))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t54  L_20 = Bounds_get_max_m2703(__this, /*hidden argument*/&Bounds_get_max_m2703_MethodInfo);
		V_10 = L_20;
		NullCheck((&V_10));
		float L_21 = ((&V_10)->___z_3);
		Vector3_t54  L_22 = Bounds_get_min_m2685((&___bounds), /*hidden argument*/&Bounds_get_min_m2685_MethodInfo);
		V_11 = L_22;
		NullCheck((&V_11));
		float L_23 = ((&V_11)->___z_3);
		G_B7_0 = ((((int32_t)((((float)L_21) < ((float)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m5341 (Object_t * __this /* static, unused */, Bounds_t141  ___m, Vector3_t54  ___point, MethodInfo* method)
{
	{
		bool L_0 = Bounds_INTERNAL_CALL_Internal_Contains_m5342(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_Contains_m5342_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m5342 (Object_t * __this /* static, unused */, Bounds_t141 * ___m, Vector3_t54 * ___point, MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_Contains_m5342_ftn) (Bounds_t141 *, Vector3_t54 *);
	static Bounds_INTERNAL_CALL_Internal_Contains_m5342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_Contains_m5342_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern MethodInfo Bounds_Contains_m5343_MethodInfo;
extern "C" bool Bounds_Contains_m5343 (Bounds_t141 * __this, Vector3_t54  ___point, MethodInfo* method)
{
	{
		bool L_0 = Bounds_Internal_Contains_m5341(NULL /*static, unused*/, (*(Bounds_t141 *)__this), ___point, /*hidden argument*/&Bounds_Internal_Contains_m5341_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m5344 (Object_t * __this /* static, unused */, Bounds_t141  ___m, Vector3_t54  ___point, MethodInfo* method)
{
	{
		float L_0 = Bounds_INTERNAL_CALL_Internal_SqrDistance_m5345(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_SqrDistance_m5345_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m5345 (Object_t * __this /* static, unused */, Bounds_t141 * ___m, Vector3_t54 * ___point, MethodInfo* method)
{
	typedef float (*Bounds_INTERNAL_CALL_Internal_SqrDistance_m5345_ftn) (Bounds_t141 *, Vector3_t54 *);
	static Bounds_INTERNAL_CALL_Internal_SqrDistance_m5345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_SqrDistance_m5345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern MethodInfo Bounds_SqrDistance_m5346_MethodInfo;
extern "C" float Bounds_SqrDistance_m5346 (Bounds_t141 * __this, Vector3_t54  ___point, MethodInfo* method)
{
	{
		float L_0 = Bounds_Internal_SqrDistance_m5344(NULL /*static, unused*/, (*(Bounds_t141 *)__this), ___point, /*hidden argument*/&Bounds_Internal_SqrDistance_m5344_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m5347 (Object_t * __this /* static, unused */, Ray_t237 * ___ray, Bounds_t141 * ___bounds, float* ___distance, MethodInfo* method)
{
	{
		bool L_0 = Bounds_INTERNAL_CALL_Internal_IntersectRay_m5348(NULL /*static, unused*/, ___ray, ___bounds, ___distance, /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_IntersectRay_m5348_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m5348 (Object_t * __this /* static, unused */, Ray_t237 * ___ray, Bounds_t141 * ___bounds, float* ___distance, MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_IntersectRay_m5348_ftn) (Ray_t237 *, Bounds_t141 *, float*);
	static Bounds_INTERNAL_CALL_Internal_IntersectRay_m5348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_IntersectRay_m5348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(___ray, ___bounds, ___distance);
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
extern MethodInfo Bounds_IntersectRay_m5349_MethodInfo;
extern "C" bool Bounds_IntersectRay_m5349 (Bounds_t141 * __this, Ray_t237  ___ray, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = Bounds_Internal_IntersectRay_m5347(NULL /*static, unused*/, (&___ray), __this, (&V_0), /*hidden argument*/&Bounds_Internal_IntersectRay_m5347_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern MethodInfo Bounds_IntersectRay_m5350_MethodInfo;
extern "C" bool Bounds_IntersectRay_m5350 (Bounds_t141 * __this, Ray_t237  ___ray, float* ___distance, MethodInfo* method)
{
	{
		bool L_0 = Bounds_Internal_IntersectRay_m5347(NULL /*static, unused*/, (&___ray), __this, ___distance, /*hidden argument*/&Bounds_Internal_IntersectRay_m5347_MethodInfo);
		return L_0;
	}
}
// System.String UnityEngine.Bounds::ToString()
extern MethodInfo Bounds_ToString_m5351_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Bounds_ToString_m5351 (Bounds_t141 * __this, MethodInfo* method)
{
	static bool Bounds_ToString_m5351_init;
	if (!Bounds_ToString_m5351_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Bounds_ToString_m5351_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 2));
		Vector3_t54  L_1 = (__this->___m_Center_0);
		Vector3_t54  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t54_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		Vector3_t54  L_5 = (__this->___m_Extents_1);
		Vector3_t54  L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Vector3_t54_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral930, L_4, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_8;
	}
}
// System.String UnityEngine.Bounds::ToString(System.String)
extern MethodInfo Bounds_ToString_m5352_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Bounds_ToString_m5352 (Bounds_t141 * __this, String_t* ___format, MethodInfo* method)
{
	static bool Bounds_ToString_m5352_init;
	if (!Bounds_ToString_m5352_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Bounds_ToString_m5352_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 2));
		Vector3_t54 * L_1 = &(__this->___m_Center_0);
		String_t* L_2 = Vector3_ToString_m5282(L_1, ___format, /*hidden argument*/&Vector3_ToString_m5282_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_2;
		ObjectU5BU5D_t137* L_3 = L_0;
		Vector3_t54 * L_4 = &(__this->___m_Extents_1);
		String_t* L_5 = Vector3_ToString_m5282(L_4, ___format, /*hidden argument*/&Vector3_ToString_m5282_MethodInfo);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_5;
		String_t* L_6 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral930, L_3, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_6;
	}
}
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m5353 (Object_t * __this /* static, unused */, Bounds_t141  ___lhs, Bounds_t141  ___rhs, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Vector3_t54  L_0 = Bounds_get_center_m2694((&___lhs), /*hidden argument*/&Bounds_get_center_m2694_MethodInfo);
		Vector3_t54  L_1 = Bounds_get_center_m2694((&___rhs), /*hidden argument*/&Bounds_get_center_m2694_MethodInfo);
		bool L_2 = Vector3_op_Equality_m5287(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Equality_m5287_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t54  L_3 = Bounds_get_extents_m5332((&___lhs), /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		Vector3_t54  L_4 = Bounds_get_extents_m5332((&___rhs), /*hidden argument*/&Bounds_get_extents_m5332_MethodInfo);
		bool L_5 = Vector3_op_Equality_m5287(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Equality_m5287_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern MethodInfo Bounds_op_Inequality_m2689_MethodInfo;
extern "C" bool Bounds_op_Inequality_m2689 (Object_t * __this /* static, unused */, Bounds_t141  ___lhs, Bounds_t141  ___rhs, MethodInfo* method)
{
	{
		bool L_0 = Bounds_op_Equality_m5353(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&Bounds_op_Equality_m5353_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Vector4_Dot_m607_MethodInfo;
extern MethodInfo Vector4_op_Subtraction_m5358_MethodInfo;
extern MethodInfo Vector4_SqrMagnitude_m5357_MethodInfo;


// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Vector4__ctor_m193 (Vector4_t52 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method)
{
	{
		__this->___x_1 = ___x;
		__this->___y_2 = ___y;
		__this->___z_3 = ___z;
		__this->___w_4 = ___w;
		return;
	}
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single)
extern MethodInfo Vector4__ctor_m973_MethodInfo;
extern "C" void Vector4__ctor_m973 (Vector4_t52 * __this, float ___x, float ___y, MethodInfo* method)
{
	{
		__this->___x_1 = ___x;
		__this->___y_2 = ___y;
		__this->___z_3 = (0.0f);
		__this->___w_4 = (0.0f);
		return;
	}
}
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern MethodInfo Vector4_get_Item_m611_MethodInfo;
extern "C" float Vector4_get_Item_m611 (Vector4_t52 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ___index;
		if (V_0 == 0)
		{
			goto IL_001d;
		}
		if (V_0 == 1)
		{
			goto IL_0024;
		}
		if (V_0 == 2)
		{
			goto IL_002b;
		}
		if (V_0 == 3)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_001d:
	{
		float L_0 = (__this->___x_1);
		return L_0;
	}

IL_0024:
	{
		float L_1 = (__this->___y_2);
		return L_1;
	}

IL_002b:
	{
		float L_2 = (__this->___z_3);
		return L_2;
	}

IL_0032:
	{
		float L_3 = (__this->___w_4);
		return L_3;
	}

IL_0039:
	{
		IndexOutOfRangeException_t787 * L_4 = (IndexOutOfRangeException_t787 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t787_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3865(L_4, (String_t*) &_stringLiteral931, /*hidden argument*/&IndexOutOfRangeException__ctor_m3865_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern MethodInfo Vector4_set_Item_m2552_MethodInfo;
extern "C" void Vector4_set_Item_m2552 (Vector4_t52 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ___index;
		if (V_0 == 0)
		{
			goto IL_001d;
		}
		if (V_0 == 1)
		{
			goto IL_0029;
		}
		if (V_0 == 2)
		{
			goto IL_0035;
		}
		if (V_0 == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_001d:
	{
		__this->___x_1 = ___value;
		goto IL_0058;
	}

IL_0029:
	{
		__this->___y_2 = ___value;
		goto IL_0058;
	}

IL_0035:
	{
		__this->___z_3 = ___value;
		goto IL_0058;
	}

IL_0041:
	{
		__this->___w_4 = ___value;
		goto IL_0058;
	}

IL_004d:
	{
		IndexOutOfRangeException_t787 * L_0 = (IndexOutOfRangeException_t787 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t787_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3865(L_0, (String_t*) &_stringLiteral931, /*hidden argument*/&IndexOutOfRangeException__ctor_m3865_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" int32_t Vector4_GetHashCode_m5354 (Vector4_t52 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m5581(L_0, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m5581(L_2, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m5581(L_4, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		float* L_6 = &(__this->___w_4);
		int32_t L_7 = Single_GetHashCode_m5581(L_6, /*hidden argument*/&Single_GetHashCode_m5581_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" bool Vector4_Equals_m5355 (Vector4_t52 * __this, Object_t * ___other, MethodInfo* method)
{
	Vector4_t52  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Vector4_t52_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = ((*(Vector4_t52 *)((Vector4_t52 *)UnBox (___other, InitializedTypeInfo(&Vector4_t52_il2cpp_TypeInfo)))));
		float* L_0 = &(__this->___x_1);
		NullCheck((&V_0));
		float L_1 = ((&V_0)->___x_1);
		bool L_2 = Single_Equals_m5607(L_0, L_1, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		float* L_3 = &(__this->___y_2);
		NullCheck((&V_0));
		float L_4 = ((&V_0)->___y_2);
		bool L_5 = Single_Equals_m5607(L_3, L_4, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		float* L_6 = &(__this->___z_3);
		NullCheck((&V_0));
		float L_7 = ((&V_0)->___z_3);
		bool L_8 = Single_Equals_m5607(L_6, L_7, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		float* L_9 = &(__this->___w_4);
		NullCheck((&V_0));
		float L_10 = ((&V_0)->___w_4);
		bool L_11 = Single_Equals_m5607(L_9, L_10, /*hidden argument*/&Single_Equals_m5607_MethodInfo);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.Vector4::ToString()
extern MethodInfo Vector4_ToString_m5356_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Vector4_ToString_m5356 (Vector4_t52 * __this, MethodInfo* method)
{
	static bool Vector4_ToString_m5356_init;
	if (!Vector4_ToString_m5356_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Vector4_ToString_m5356_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t137* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t137* L_12 = L_8;
		float L_13 = (__this->___w_4);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral925, L_12, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_16;
	}
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Dot_m607 (Object_t * __this /* static, unused */, Vector4_t52  ___a, Vector4_t52  ___b, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___b));
		float L_1 = ((&___b)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___b));
		float L_3 = ((&___b)->___y_2);
		NullCheck((&___a));
		float L_4 = ((&___a)->___z_3);
		NullCheck((&___b));
		float L_5 = ((&___b)->___z_3);
		NullCheck((&___a));
		float L_6 = ((&___a)->___w_4);
		NullCheck((&___b));
		float L_7 = ((&___b)->___w_4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" float Vector4_SqrMagnitude_m5357 (Object_t * __this /* static, unused */, Vector4_t52  ___a, MethodInfo* method)
{
	{
		float L_0 = Vector4_Dot_m607(NULL /*static, unused*/, ___a, ___a, /*hidden argument*/&Vector4_Dot_m607_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern MethodInfo Vector4_get_sqrMagnitude_m2528_MethodInfo;
extern "C" float Vector4_get_sqrMagnitude_m2528 (Vector4_t52 * __this, MethodInfo* method)
{
	{
		float L_0 = Vector4_Dot_m607(NULL /*static, unused*/, (*(Vector4_t52 *)__this), (*(Vector4_t52 *)__this), /*hidden argument*/&Vector4_Dot_m607_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern MethodInfo Vector4_get_zero_m922_MethodInfo;
extern "C" Vector4_t52  Vector4_get_zero_m922 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector4_t52  L_0 = {0};
		Vector4__ctor_m193(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
extern MethodInfo Vector4_get_one_m969_MethodInfo;
extern "C" Vector4_t52  Vector4_get_one_m969 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector4_t52  L_0 = {0};
		Vector4__ctor_m193(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t52  Vector4_op_Subtraction_m5358 (Object_t * __this /* static, unused */, Vector4_t52  ___a, Vector4_t52  ___b, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___b));
		float L_1 = ((&___b)->___x_1);
		NullCheck((&___a));
		float L_2 = ((&___a)->___y_2);
		NullCheck((&___b));
		float L_3 = ((&___b)->___y_2);
		NullCheck((&___a));
		float L_4 = ((&___a)->___z_3);
		NullCheck((&___b));
		float L_5 = ((&___b)->___z_3);
		NullCheck((&___a));
		float L_6 = ((&___a)->___w_4);
		NullCheck((&___b));
		float L_7 = ((&___b)->___w_4);
		Vector4_t52  L_8 = {0};
		Vector4__ctor_m193(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern MethodInfo Vector4_op_Multiply_m608_MethodInfo;
extern "C" Vector4_t52  Vector4_op_Multiply_m608 (Object_t * __this /* static, unused */, Vector4_t52  ___a, float ___d, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_2 = ((&___a)->___z_3);
		NullCheck((&___a));
		float L_3 = ((&___a)->___w_4);
		Vector4_t52  L_4 = {0};
		Vector4__ctor_m193(&L_4, ((float)((float)L_0*(float)___d)), ((float)((float)L_1*(float)___d)), ((float)((float)L_2*(float)___d)), ((float)((float)L_3*(float)___d)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(System.Single,UnityEngine.Vector4)
extern MethodInfo Vector4_op_Multiply_m970_MethodInfo;
extern "C" Vector4_t52  Vector4_op_Multiply_m970 (Object_t * __this /* static, unused */, float ___d, Vector4_t52  ___a, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_2 = ((&___a)->___z_3);
		NullCheck((&___a));
		float L_3 = ((&___a)->___w_4);
		Vector4_t52  L_4 = {0};
		Vector4__ctor_m193(&L_4, ((float)((float)L_0*(float)___d)), ((float)((float)L_1*(float)___d)), ((float)((float)L_2*(float)___d)), ((float)((float)L_3*(float)___d)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern MethodInfo Vector4_op_Division_m2546_MethodInfo;
extern "C" Vector4_t52  Vector4_op_Division_m2546 (Object_t * __this /* static, unused */, Vector4_t52  ___a, float ___d, MethodInfo* method)
{
	{
		NullCheck((&___a));
		float L_0 = ((&___a)->___x_1);
		NullCheck((&___a));
		float L_1 = ((&___a)->___y_2);
		NullCheck((&___a));
		float L_2 = ((&___a)->___z_3);
		NullCheck((&___a));
		float L_3 = ((&___a)->___w_4);
		Vector4_t52  L_4 = {0};
		Vector4__ctor_m193(&L_4, ((float)((float)L_0/(float)___d)), ((float)((float)L_1/(float)___d)), ((float)((float)L_2/(float)___d)), ((float)((float)L_3/(float)___d)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m5359 (Object_t * __this /* static, unused */, Vector4_t52  ___lhs, Vector4_t52  ___rhs, MethodInfo* method)
{
	{
		Vector4_t52  L_0 = Vector4_op_Subtraction_m5358(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&Vector4_op_Subtraction_m5358_MethodInfo);
		float L_1 = Vector4_SqrMagnitude_m5357(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector4_SqrMagnitude_m5357_MethodInfo);
		return ((((float)L_1) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern MethodInfo Vector4_op_Implicit_m223_MethodInfo;
extern "C" Vector4_t52  Vector4_op_Implicit_m223 (Object_t * __this /* static, unused */, Vector3_t54  ___v, MethodInfo* method)
{
	{
		NullCheck((&___v));
		float L_0 = ((&___v)->___x_1);
		NullCheck((&___v));
		float L_1 = ((&___v)->___y_2);
		NullCheck((&___v));
		float L_2 = ((&___v)->___z_3);
		Vector4_t52  L_3 = {0};
		Vector4__ctor_m193(&L_3, L_0, L_1, L_2, (0.0f), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Ray_t237_il2cpp_TypeInfo;
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"



// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Ray__ctor_m5360_MethodInfo;
extern "C" void Ray__ctor_m5360 (Ray_t237 * __this, Vector3_t54  ___origin, Vector3_t54  ___direction, MethodInfo* method)
{
	{
		__this->___m_Origin_0 = ___origin;
		Vector3_t54  L_0 = Vector3_get_normalized_m604((&___direction), /*hidden argument*/&Vector3_get_normalized_m604_MethodInfo);
		__this->___m_Direction_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern MethodInfo Ray_get_origin_m2398_MethodInfo;
extern "C" Vector3_t54  Ray_get_origin_m2398 (Ray_t237 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = (__this->___m_Origin_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern MethodInfo Ray_get_direction_m2399_MethodInfo;
extern "C" Vector3_t54  Ray_get_direction_m2399 (Ray_t237 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = (__this->___m_Direction_1);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern MethodInfo Ray_GetPoint_m1049_MethodInfo;
extern "C" Vector3_t54  Ray_GetPoint_m1049 (Ray_t237 * __this, float ___distance, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = (__this->___m_Origin_0);
		Vector3_t54  L_1 = (__this->___m_Direction_1);
		Vector3_t54  L_2 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_1, ___distance, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Vector3_t54  L_3 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		return L_3;
	}
}
// System.String UnityEngine.Ray::ToString()
extern MethodInfo Ray_ToString_m5361_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* Ray_ToString_m5361 (Ray_t237 * __this, MethodInfo* method)
{
	static bool Ray_ToString_m5361_init;
	if (!Ray_ToString_m5361_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Ray_ToString_m5361_init = true;
	}
	{
		ObjectU5BU5D_t137* L_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 2));
		Vector3_t54  L_1 = (__this->___m_Origin_0);
		Vector3_t54  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t54_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t137* L_4 = L_0;
		Vector3_t54  L_5 = (__this->___m_Direction_1);
		Vector3_t54  L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Vector3_t54_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m5383(NULL /*static, unused*/, (String_t*) &_stringLiteral932, L_4, /*hidden argument*/&UnityString_Format_m5383_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Plane_t516_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"

extern MethodInfo Plane_get_normal_m5362_MethodInfo;
extern MethodInfo Plane_get_distance_m5363_MethodInfo;
extern MethodInfo Mathf_Approximately_m2376_MethodInfo;


// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Plane__ctor_m2593_MethodInfo;
extern "C" void Plane__ctor_m2593 (Plane_t516 * __this, Vector3_t54  ___inNormal, Vector3_t54  ___inPoint, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Vector3_Normalize_m5280(NULL /*static, unused*/, ___inNormal, /*hidden argument*/&Vector3_Normalize_m5280_MethodInfo);
		__this->___m_Normal_0 = L_0;
		float L_1 = Vector3_Dot_m539(NULL /*static, unused*/, ___inNormal, ___inPoint, /*hidden argument*/&Vector3_Dot_m539_MethodInfo);
		__this->___m_Distance_1 = ((-L_1));
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t54  Plane_get_normal_m5362 (Plane_t516 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = (__this->___m_Normal_0);
		return L_0;
	}
}
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m5363 (Plane_t516 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern MethodInfo Plane_Raycast_m2594_MethodInfo;
extern "C" bool Plane_Raycast_m2594 (Plane_t516 * __this, Ray_t237  ___ray, float* ___enter, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t54  L_0 = Ray_get_direction_m2399((&___ray), /*hidden argument*/&Ray_get_direction_m2399_MethodInfo);
		Vector3_t54  L_1 = Plane_get_normal_m5362(__this, /*hidden argument*/&Plane_get_normal_m5362_MethodInfo);
		float L_2 = Vector3_Dot_m539(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Dot_m539_MethodInfo);
		V_0 = L_2;
		Vector3_t54  L_3 = Ray_get_origin_m2398((&___ray), /*hidden argument*/&Ray_get_origin_m2398_MethodInfo);
		Vector3_t54  L_4 = Plane_get_normal_m5362(__this, /*hidden argument*/&Plane_get_normal_m5362_MethodInfo);
		float L_5 = Vector3_Dot_m539(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_Dot_m539_MethodInfo);
		float L_6 = Plane_get_distance_m5363(__this, /*hidden argument*/&Plane_get_distance_m5363_MethodInfo);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		bool L_7 = Mathf_Approximately_m2376(NULL /*static, unused*/, V_0, (0.0f), /*hidden argument*/&Mathf_Approximately_m2376_MethodInfo);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		*((float*)(___enter)) = (float)(0.0f);
		return 0;
	}

IL_0047:
	{
		*((float*)(___enter)) = (float)((float)((float)V_1/(float)V_0));
		return ((((float)(*((float*)___enter))) > ((float)(0.0f)))? 1 : 0);
	}
}
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_Mathf.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Mathf_t1088_il2cpp_TypeInfo;

// System.Double
#include "mscorlib_System_Double.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern MethodInfo Math_Sin_m5608_MethodInfo;
extern MethodInfo Math_Cos_m5609_MethodInfo;
extern MethodInfo Math_Tan_m5610_MethodInfo;
extern MethodInfo Math_Acos_m5611_MethodInfo;
extern MethodInfo Math_Sqrt_m5612_MethodInfo;
extern MethodInfo Math_Abs_m5613_MethodInfo;
extern MethodInfo Math_Pow_m5614_MethodInfo;
extern MethodInfo Math_Log_m5615_MethodInfo;
extern MethodInfo Math_Floor_m5616_MethodInfo;
extern MethodInfo Math_Round_m5617_MethodInfo;
extern MethodInfo Math_Ceiling_m5618_MethodInfo;
extern MethodInfo Mathf_Repeat_m2562_MethodInfo;
extern MethodInfo Mathf_Floor_m936_MethodInfo;


// System.Single UnityEngine.Mathf::Sin(System.Single)
extern MethodInfo Mathf_Sin_m646_MethodInfo;
extern "C" float Mathf_Sin_m646 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = sin((((double)___f)));
		return (((float)L_0));
	}
}
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern MethodInfo Mathf_Cos_m647_MethodInfo;
extern "C" float Mathf_Cos_m647 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = cos((((double)___f)));
		return (((float)L_0));
	}
}
// System.Single UnityEngine.Mathf::Tan(System.Single)
extern MethodInfo Mathf_Tan_m220_MethodInfo;
extern "C" float Mathf_Tan_m220 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = tan((((double)___f)));
		return (((float)L_0));
	}
}
// System.Single UnityEngine.Mathf::Acos(System.Single)
extern "C" float Mathf_Acos_m5364 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = acos((((double)___f)));
		return (((float)L_0));
	}
}
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m944 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = sqrt((((double)___f)));
		return (((float)L_0));
	}
}
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m651 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = fabsf(___f);
		return (((float)L_0));
	}
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m916 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		if ((((float)___a) >= ((float)___b)))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ___a;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = ___b;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern MethodInfo Mathf_Min_m2612_MethodInfo;
extern "C" int32_t Mathf_Min_m2612 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		if ((((int32_t)___a) >= ((int32_t)___b)))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ___a;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = ___b;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m915 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		if ((((float)___a) <= ((float)___b)))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ___a;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = ___b;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern MethodInfo Mathf_Max_m2610_MethodInfo;
extern "C" int32_t Mathf_Max_m2610 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		if ((((int32_t)___a) <= ((int32_t)___b)))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ___a;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = ___b;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern MethodInfo Mathf_Pow_m191_MethodInfo;
extern "C" float Mathf_Pow_m191 (Object_t * __this /* static, unused */, float ___f, float ___p, MethodInfo* method)
{
	{
		double L_0 = pow((((double)___f)), (((double)___p)));
		return (((float)L_0));
	}
}
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
extern MethodInfo Mathf_Log_m998_MethodInfo;
extern "C" float Mathf_Log_m998 (Object_t * __this /* static, unused */, float ___f, float ___p, MethodInfo* method)
{
	{
		double L_0 = Math_Log_m5615(NULL /*static, unused*/, (((double)___f)), (((double)___p)), /*hidden argument*/&Math_Log_m5615_MethodInfo);
		return (((float)L_0));
	}
}
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m936 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = floor((((double)___f)));
		return (((float)L_0));
	}
}
// System.Single UnityEngine.Mathf::Round(System.Single)
extern MethodInfo Mathf_Round_m2674_MethodInfo;
extern "C" float Mathf_Round_m2674 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = round((((double)___f)));
		return (((float)L_0));
	}
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern MethodInfo Mathf_CeilToInt_m984_MethodInfo;
extern "C" int32_t Mathf_CeilToInt_m984 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = ceil((((double)___f)));
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern MethodInfo Mathf_FloorToInt_m625_MethodInfo;
extern "C" int32_t Mathf_FloorToInt_m625 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = floor((((double)___f)));
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern MethodInfo Mathf_RoundToInt_m2535_MethodInfo;
extern "C" int32_t Mathf_RoundToInt_m2535 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		double L_0 = round((((double)___f)));
		return (((int32_t)L_0));
	}
}
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern MethodInfo Mathf_Sign_m2692_MethodInfo;
extern "C" float Mathf_Sign_m2692 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		if ((((float)___f) < ((float)(0.0f))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (-1.0f);
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m192 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, MethodInfo* method)
{
	{
		if ((((float)___value) >= ((float)___min)))
		{
			goto IL_000f;
		}
	}
	{
		___value = ___min;
		goto IL_0019;
	}

IL_000f:
	{
		if ((((float)___value) <= ((float)___max)))
		{
			goto IL_0019;
		}
	}
	{
		___value = ___max;
	}

IL_0019:
	{
		return ___value;
	}
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern MethodInfo Mathf_Clamp_m198_MethodInfo;
extern "C" int32_t Mathf_Clamp_m198 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		if ((((int32_t)___value) >= ((int32_t)___min)))
		{
			goto IL_000f;
		}
	}
	{
		___value = ___min;
		goto IL_0019;
	}

IL_000f:
	{
		if ((((int32_t)___value) <= ((int32_t)___max)))
		{
			goto IL_0019;
		}
	}
	{
		___value = ___max;
	}

IL_0019:
	{
		return ___value;
	}
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m199 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method)
{
	{
		if ((((float)___value) >= ((float)(0.0f))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		if ((((float)___value) <= ((float)(1.0f))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		return ___value;
	}
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern MethodInfo Mathf_Lerp_m1038_MethodInfo;
extern "C" float Mathf_Lerp_m1038 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___t, MethodInfo* method)
{
	{
		float L_0 = Mathf_Clamp01_m199(NULL /*static, unused*/, ___t, /*hidden argument*/&Mathf_Clamp01_m199_MethodInfo);
		return ((float)((float)___from+(float)((float)((float)((float)((float)___to-(float)___from))*(float)L_0))));
	}
}
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
extern MethodInfo Mathf_LerpAngle_m1037_MethodInfo;
extern "C" float Mathf_LerpAngle_m1037 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___t, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Mathf_Repeat_m2562(NULL /*static, unused*/, ((float)((float)___b-(float)___a)), (360.0f), /*hidden argument*/&Mathf_Repeat_m2562_MethodInfo);
		V_0 = L_0;
		if ((((float)V_0) <= ((float)(180.0f))))
		{
			goto IL_0021;
		}
	}
	{
		V_0 = ((float)((float)V_0-(float)(360.0f)));
	}

IL_0021:
	{
		float L_1 = Mathf_Clamp01_m199(NULL /*static, unused*/, ___t, /*hidden argument*/&Mathf_Clamp01_m199_MethodInfo);
		return ((float)((float)___a+(float)((float)((float)V_0*(float)L_1))));
	}
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" bool Mathf_Approximately_m2376 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method)
{
	{
		float L_0 = fabsf(((float)((float)___b-(float)___a)));
		float L_1 = fabsf(___a);
		float L_2 = fabsf(___b);
		float L_3 = Mathf_Max_m915(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		float L_4 = Mathf_Max_m915(NULL /*static, unused*/, ((float)((float)(1.0E-06f)*(float)L_3)), (9.403955E-38f), /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		return ((((float)L_0) < ((float)L_4))? 1 : 0);
	}
}
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern MethodInfo Mathf_SmoothDamp_m2687_MethodInfo;
extern "C" float Mathf_SmoothDamp_m2687 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float L_0 = Mathf_Max_m915(NULL /*static, unused*/, (0.0001f), ___smoothTime, /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		___smoothTime = L_0;
		V_0 = ((float)((float)(2.0f)/(float)___smoothTime));
		V_1 = ((float)((float)V_0*(float)___deltaTime));
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)V_1))+(float)((float)((float)((float)((float)(0.48f)*(float)V_1))*(float)V_1))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)V_1))*(float)V_1))*(float)V_1))))));
		V_3 = ((float)((float)___current-(float)___target));
		V_4 = ___target;
		V_5 = ((float)((float)___maxSpeed*(float)___smoothTime));
		float L_1 = Mathf_Clamp_m192(NULL /*static, unused*/, V_3, ((-V_5)), V_5, /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		V_3 = L_1;
		___target = ((float)((float)___current-(float)V_3));
		V_6 = ((float)((float)((float)((float)(*((float*)___currentVelocity))+(float)((float)((float)V_0*(float)V_3))))*(float)___deltaTime));
		*((float*)(___currentVelocity)) = (float)((float)((float)((float)((float)(*((float*)___currentVelocity))-(float)((float)((float)V_0*(float)V_6))))*(float)V_2));
		V_7 = ((float)((float)___target+(float)((float)((float)((float)((float)V_3+(float)V_6))*(float)V_2))));
		if ((((uint32_t)((((float)((float)((float)V_4-(float)___current))) > ((float)(0.0f)))? 1 : 0)) != ((uint32_t)((((float)V_7) > ((float)V_4))? 1 : 0))))
		{
			goto IL_00a0;
		}
	}
	{
		V_7 = V_4;
		*((float*)(___currentVelocity)) = (float)((float)((float)((float)((float)V_7-(float)V_4))/(float)___deltaTime));
	}

IL_00a0:
	{
		return V_7;
	}
}
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern "C" float Mathf_Repeat_m2562 (Object_t * __this /* static, unused */, float ___t, float ___length, MethodInfo* method)
{
	{
		float L_0 = floorf(((float)((float)___t/(float)___length)));
		return ((float)((float)___t-(float)((float)((float)L_0*(float)___length))));
	}
}
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern MethodInfo Mathf_InverseLerp_m2561_MethodInfo;
extern "C" float Mathf_InverseLerp_m2561 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method)
{
	{
		if ((((float)___from) >= ((float)___to)))
		{
			goto IL_002f;
		}
	}
	{
		if ((((float)___value) >= ((float)___from)))
		{
			goto IL_0014;
		}
	}
	{
		return (0.0f);
	}

IL_0014:
	{
		if ((((float)___value) <= ((float)___to)))
		{
			goto IL_0021;
		}
	}
	{
		return (1.0f);
	}

IL_0021:
	{
		___value = ((float)((float)___value-(float)___from));
		___value = ((float)((float)___value/(float)((float)((float)___to-(float)___from))));
		return ___value;
	}

IL_002f:
	{
		if ((((float)___from) <= ((float)___to)))
		{
			goto IL_005e;
		}
	}
	{
		if ((((float)___value) >= ((float)___to)))
		{
			goto IL_0043;
		}
	}
	{
		return (1.0f);
	}

IL_0043:
	{
		if ((((float)___value) <= ((float)___from)))
		{
			goto IL_0050;
		}
	}
	{
		return (0.0f);
	}

IL_0050:
	{
		return ((float)((float)(1.0f)-(float)((float)((float)((float)((float)___value-(float)___to))/(float)((float)((float)___from-(float)___to))))));
	}

IL_005e:
	{
		return (0.0f);
	}
}
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariables.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SerializePrivateVariables_t1089_il2cpp_TypeInfo;
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariablesMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3848_MethodInfo;


// System.Void UnityEngine.SerializePrivateVariables::.ctor()
extern MethodInfo SerializePrivateVariables__ctor_m5365_MethodInfo;
extern "C" void SerializePrivateVariables__ctor_m5365 (SerializePrivateVariables_t1089 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		return;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SerializeField_t532_il2cpp_TypeInfo;
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"



// System.Void UnityEngine.SerializeField::.ctor()
extern MethodInfo SerializeField__ctor_m2837_MethodInfo;
extern "C" void SerializeField__ctor_m2837 (SerializeField_t532 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ISerializationCallbackReceiver_t534_il2cpp_TypeInfo;



// System.Void UnityEngine.ISerializationCallbackReceiver::OnBeforeSerialize()
// System.Void UnityEngine.ISerializationCallbackReceiver::OnAfterDeserialize()
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Shader_t18_il2cpp_TypeInfo;
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"



// System.Boolean UnityEngine.Shader::get_isSupported()
extern MethodInfo Shader_get_isSupported_m178_MethodInfo;
extern "C" bool Shader_get_isSupported_m178 (Shader_t18 * __this, MethodInfo* method)
{
	typedef bool (*Shader_get_isSupported_m178_ftn) (Shader_t18 *);
	static Shader_get_isSupported_m178_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_get_isSupported_m178_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::get_isSupported()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
extern MethodInfo Shader_EnableKeyword_m557_MethodInfo;
extern "C" void Shader_EnableKeyword_m557 (Object_t * __this /* static, unused */, String_t* ___keyword, MethodInfo* method)
{
	typedef void (*Shader_EnableKeyword_m557_ftn) (String_t*);
	static Shader_EnableKeyword_m557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_EnableKeyword_m557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::EnableKeyword(System.String)");
	_il2cpp_icall_func(___keyword);
}
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
extern MethodInfo Shader_DisableKeyword_m558_MethodInfo;
extern "C" void Shader_DisableKeyword_m558 (Object_t * __this /* static, unused */, String_t* ___keyword, MethodInfo* method)
{
	typedef void (*Shader_DisableKeyword_m558_ftn) (String_t*);
	static Shader_DisableKeyword_m558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_DisableKeyword_m558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::DisableKeyword(System.String)");
	_il2cpp_icall_func(___keyword);
}
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
extern MethodInfo Shader_set_maximumLOD_m636_MethodInfo;
extern "C" void Shader_set_maximumLOD_m636 (Shader_t18 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Shader_set_maximumLOD_m636_ftn) (Shader_t18 *, int32_t);
	static Shader_set_maximumLOD_m636_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_set_maximumLOD_m636_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::set_maximumLOD(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern MethodInfo Shader_PropertyToID_m5366_MethodInfo;
extern "C" int32_t Shader_PropertyToID_m5366 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Shader_PropertyToID_m5366_ftn) (String_t*);
	static Shader_PropertyToID_m5366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m5366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Material_t19_il2cpp_TypeInfo;
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBuffer.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern MethodInfo Material_SetColor_m940_MethodInfo;
extern MethodInfo Material_GetTexture_m5372_MethodInfo;
extern MethodInfo Object__ctor_m5455_MethodInfo;
extern MethodInfo Material_Internal_CreateWithShader_m5380_MethodInfo;
extern MethodInfo Material_Internal_CreateWithMaterial_m5381_MethodInfo;
extern MethodInfo Material_SetColor_m5367_MethodInfo;
extern MethodInfo Material_INTERNAL_CALL_SetColor_m5368_MethodInfo;
extern MethodInfo Material_GetColor_m5370_MethodInfo;
extern MethodInfo Material_GetColor_m5369_MethodInfo;
extern MethodInfo Material_SetTexture_m5371_MethodInfo;
extern MethodInfo Material_GetTexture_m5373_MethodInfo;
extern MethodInfo Material_SetMatrix_m5374_MethodInfo;
extern MethodInfo Material_INTERNAL_CALL_SetMatrix_m5375_MethodInfo;
extern MethodInfo Material_SetFloat_m5376_MethodInfo;
extern MethodInfo Material_GetFloat_m5377_MethodInfo;
extern MethodInfo Material_SetFloat_m195_MethodInfo;
extern MethodInfo Material_HasProperty_m5378_MethodInfo;
extern MethodInfo Material_GetTag_m5379_MethodInfo;


// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern MethodInfo Material__ctor_m171_MethodInfo;
extern "C" void Material__ctor_m171 (Material_t19 * __this, Shader_t18 * ___shader, MethodInfo* method)
{
	{
		Object__ctor_m5455(__this, /*hidden argument*/&Object__ctor_m5455_MethodInfo);
		Material_Internal_CreateWithShader_m5380(NULL /*static, unused*/, __this, ___shader, /*hidden argument*/&Material_Internal_CreateWithShader_m5380_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern MethodInfo Material__ctor_m2737_MethodInfo;
extern "C" void Material__ctor_m2737 (Material_t19 * __this, Material_t19 * ___source, MethodInfo* method)
{
	{
		Object__ctor_m5455(__this, /*hidden argument*/&Object__ctor_m5455_MethodInfo);
		Material_Internal_CreateWithMaterial_m5381(NULL /*static, unused*/, __this, ___source, /*hidden argument*/&Material_Internal_CreateWithMaterial_m5381_MethodInfo);
		return;
	}
}
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern MethodInfo Material_get_shader_m177_MethodInfo;
extern "C" Shader_t18 * Material_get_shader_m177 (Material_t19 * __this, MethodInfo* method)
{
	typedef Shader_t18 * (*Material_get_shader_m177_ftn) (Material_t19 *);
	static Material_get_shader_m177_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_get_shader_m177_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::get_shader()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern MethodInfo Material_set_color_m197_MethodInfo;
extern "C" void Material_set_color_m197 (Material_t19 * __this, Color_t29  ___value, MethodInfo* method)
{
	{
		Material_SetColor_m940(__this, (String_t*) &_stringLiteral933, ___value, /*hidden argument*/&Material_SetColor_m940_MethodInfo);
		return;
	}
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern MethodInfo Material_get_mainTexture_m2744_MethodInfo;
extern "C" Texture_t22 * Material_get_mainTexture_m2744 (Material_t19 * __this, MethodInfo* method)
{
	{
		Texture_t22 * L_0 = Material_GetTexture_m5372(__this, (String_t*) &_stringLiteral42, /*hidden argument*/&Material_GetTexture_m5372_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m940 (Material_t19 * __this, String_t* ___propertyName, Color_t29  ___color, MethodInfo* method)
{
	{
		int32_t L_0 = Shader_PropertyToID_m5366(NULL /*static, unused*/, ___propertyName, /*hidden argument*/&Shader_PropertyToID_m5366_MethodInfo);
		Material_SetColor_m5367(__this, L_0, ___color, /*hidden argument*/&Material_SetColor_m5367_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m5367 (Material_t19 * __this, int32_t ___nameID, Color_t29  ___color, MethodInfo* method)
{
	{
		Material_INTERNAL_CALL_SetColor_m5368(NULL /*static, unused*/, __this, ___nameID, (&___color), /*hidden argument*/&Material_INTERNAL_CALL_SetColor_m5368_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m5368 (Object_t * __this /* static, unused */, Material_t19 * ___self, int32_t ___nameID, Color_t29 * ___color, MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetColor_m5368_ftn) (Material_t19 *, int32_t, Color_t29 *);
	static Material_INTERNAL_CALL_SetColor_m5368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetColor_m5368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___nameID, ___color);
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C" Color_t29  Material_GetColor_m5369 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method)
{
	{
		int32_t L_0 = Shader_PropertyToID_m5366(NULL /*static, unused*/, ___propertyName, /*hidden argument*/&Shader_PropertyToID_m5366_MethodInfo);
		Color_t29  L_1 = Material_GetColor_m5370(__this, L_0, /*hidden argument*/&Material_GetColor_m5370_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C" Color_t29  Material_GetColor_m5370 (Material_t19 * __this, int32_t ___nameID, MethodInfo* method)
{
	typedef Color_t29  (*Material_GetColor_m5370_ftn) (Material_t19 *, int32_t);
	static Material_GetColor_m5370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetColor_m5370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetColor(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern MethodInfo Material_SetVector_m194_MethodInfo;
extern "C" void Material_SetVector_m194 (Material_t19 * __this, String_t* ___propertyName, Vector4_t52  ___vector, MethodInfo* method)
{
	{
		NullCheck((&___vector));
		float L_0 = ((&___vector)->___x_1);
		NullCheck((&___vector));
		float L_1 = ((&___vector)->___y_2);
		NullCheck((&___vector));
		float L_2 = ((&___vector)->___z_3);
		NullCheck((&___vector));
		float L_3 = ((&___vector)->___w_4);
		Color_t29  L_4 = {0};
		Color__ctor_m196(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/&Color__ctor_m196_MethodInfo);
		Material_SetColor_m940(__this, ___propertyName, L_4, /*hidden argument*/&Material_SetColor_m940_MethodInfo);
		return;
	}
}
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
extern MethodInfo Material_GetVector_m566_MethodInfo;
extern "C" Vector4_t52  Material_GetVector_m566 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method)
{
	Color_t29  V_0 = {0};
	{
		Color_t29  L_0 = Material_GetColor_m5369(__this, ___propertyName, /*hidden argument*/&Material_GetColor_m5369_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		float L_1 = ((&V_0)->___r_0);
		NullCheck((&V_0));
		float L_2 = ((&V_0)->___g_1);
		NullCheck((&V_0));
		float L_3 = ((&V_0)->___b_2);
		NullCheck((&V_0));
		float L_4 = ((&V_0)->___a_3);
		Vector4_t52  L_5 = {0};
		Vector4__ctor_m193(&L_5, L_1, L_2, L_3, L_4, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		return L_5;
	}
}
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern MethodInfo Material_SetTexture_m186_MethodInfo;
extern "C" void Material_SetTexture_m186 (Material_t19 * __this, String_t* ___propertyName, Texture_t22 * ___texture, MethodInfo* method)
{
	{
		int32_t L_0 = Shader_PropertyToID_m5366(NULL /*static, unused*/, ___propertyName, /*hidden argument*/&Shader_PropertyToID_m5366_MethodInfo);
		Material_SetTexture_m5371(__this, L_0, ___texture, /*hidden argument*/&Material_SetTexture_m5371_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m5371 (Material_t19 * __this, int32_t ___nameID, Texture_t22 * ___texture, MethodInfo* method)
{
	typedef void (*Material_SetTexture_m5371_ftn) (Material_t19 *, int32_t, Texture_t22 *);
	static Material_SetTexture_m5371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetTexture_m5371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___nameID, ___texture);
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t22 * Material_GetTexture_m5372 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method)
{
	{
		int32_t L_0 = Shader_PropertyToID_m5366(NULL /*static, unused*/, ___propertyName, /*hidden argument*/&Shader_PropertyToID_m5366_MethodInfo);
		Texture_t22 * L_1 = Material_GetTexture_m5373(__this, L_0, /*hidden argument*/&Material_GetTexture_m5373_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t22 * Material_GetTexture_m5373 (Material_t19 * __this, int32_t ___nameID, MethodInfo* method)
{
	typedef Texture_t22 * (*Material_GetTexture_m5373_ftn) (Material_t19 *, int32_t);
	static Material_GetTexture_m5373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTexture_m5373_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
extern MethodInfo Material_SetMatrix_m205_MethodInfo;
extern "C" void Material_SetMatrix_m205 (Material_t19 * __this, String_t* ___propertyName, Matrix4x4_t53  ___matrix, MethodInfo* method)
{
	{
		int32_t L_0 = Shader_PropertyToID_m5366(NULL /*static, unused*/, ___propertyName, /*hidden argument*/&Shader_PropertyToID_m5366_MethodInfo);
		Material_SetMatrix_m5374(__this, L_0, ___matrix, /*hidden argument*/&Material_SetMatrix_m5374_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C" void Material_SetMatrix_m5374 (Material_t19 * __this, int32_t ___nameID, Matrix4x4_t53  ___matrix, MethodInfo* method)
{
	{
		Material_INTERNAL_CALL_SetMatrix_m5375(NULL /*static, unused*/, __this, ___nameID, (&___matrix), /*hidden argument*/&Material_INTERNAL_CALL_SetMatrix_m5375_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)
extern "C" void Material_INTERNAL_CALL_SetMatrix_m5375 (Object_t * __this /* static, unused */, Material_t19 * ___self, int32_t ___nameID, Matrix4x4_t53 * ___matrix, MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetMatrix_m5375_ftn) (Material_t19 *, int32_t, Matrix4x4_t53 *);
	static Material_INTERNAL_CALL_SetMatrix_m5375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetMatrix_m5375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___self, ___nameID, ___matrix);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m195 (Material_t19 * __this, String_t* ___propertyName, float ___value, MethodInfo* method)
{
	{
		int32_t L_0 = Shader_PropertyToID_m5366(NULL /*static, unused*/, ___propertyName, /*hidden argument*/&Shader_PropertyToID_m5366_MethodInfo);
		Material_SetFloat_m5376(__this, L_0, ___value, /*hidden argument*/&Material_SetFloat_m5376_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m5376 (Material_t19 * __this, int32_t ___nameID, float ___value, MethodInfo* method)
{
	typedef void (*Material_SetFloat_m5376_ftn) (Material_t19 *, int32_t, float);
	static Material_SetFloat_m5376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetFloat_m5376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___nameID, ___value);
}
// System.Single UnityEngine.Material::GetFloat(System.String)
extern MethodInfo Material_GetFloat_m567_MethodInfo;
extern "C" float Material_GetFloat_m567 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method)
{
	{
		int32_t L_0 = Shader_PropertyToID_m5366(NULL /*static, unused*/, ___propertyName, /*hidden argument*/&Shader_PropertyToID_m5366_MethodInfo);
		float L_1 = Material_GetFloat_m5377(__this, L_0, /*hidden argument*/&Material_GetFloat_m5377_MethodInfo);
		return L_1;
	}
}
// System.Single UnityEngine.Material::GetFloat(System.Int32)
extern "C" float Material_GetFloat_m5377 (Material_t19 * __this, int32_t ___nameID, MethodInfo* method)
{
	typedef float (*Material_GetFloat_m5377_ftn) (Material_t19 *, int32_t);
	static Material_GetFloat_m5377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetFloat_m5377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetFloat(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern MethodInfo Material_SetInt_m2738_MethodInfo;
extern "C" void Material_SetInt_m2738 (Material_t19 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method)
{
	{
		Material_SetFloat_m195(__this, ___propertyName, (((float)___value)), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
extern MethodInfo Material_SetBuffer_m967_MethodInfo;
extern "C" void Material_SetBuffer_m967 (Material_t19 * __this, String_t* ___propertyName, ComputeBuffer_t195 * ___buffer, MethodInfo* method)
{
	typedef void (*Material_SetBuffer_m967_ftn) (Material_t19 *, String_t*, ComputeBuffer_t195 *);
	static Material_SetBuffer_m967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetBuffer_m967_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)");
	_il2cpp_icall_func(__this, ___propertyName, ___buffer);
}
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern MethodInfo Material_HasProperty_m633_MethodInfo;
extern "C" bool Material_HasProperty_m633 (Material_t19 * __this, String_t* ___propertyName, MethodInfo* method)
{
	{
		int32_t L_0 = Shader_PropertyToID_m5366(NULL /*static, unused*/, ___propertyName, /*hidden argument*/&Shader_PropertyToID_m5366_MethodInfo);
		bool L_1 = Material_HasProperty_m5378(__this, L_0, /*hidden argument*/&Material_HasProperty_m5378_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m5378 (Material_t19 * __this, int32_t ___nameID, MethodInfo* method)
{
	typedef bool (*Material_HasProperty_m5378_ftn) (Material_t19 *, int32_t);
	static Material_HasProperty_m5378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_HasProperty_m5378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean,System.String)
extern "C" String_t* Material_GetTag_m5379 (Material_t19 * __this, String_t* ___tag, bool ___searchFallbacks, String_t* ___defaultValue, MethodInfo* method)
{
	typedef String_t* (*Material_GetTag_m5379_ftn) (Material_t19 *, String_t*, bool, String_t*);
	static Material_GetTag_m5379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTag_m5379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTag(System.String,System.Boolean,System.String)");
	return _il2cpp_icall_func(__this, ___tag, ___searchFallbacks, ___defaultValue);
}
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean)
extern MethodInfo Material_GetTag_m600_MethodInfo;
extern "C" String_t* Material_GetTag_m600 (Material_t19 * __this, String_t* ___tag, bool ___searchFallbacks, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		String_t* L_0 = Material_GetTag_m5379(__this, ___tag, ___searchFallbacks, V_0, /*hidden argument*/&Material_GetTag_m5379_MethodInfo);
		return L_0;
	}
}
// System.Int32 UnityEngine.Material::get_passCount()
extern MethodInfo Material_get_passCount_m214_MethodInfo;
extern "C" int32_t Material_get_passCount_m214 (Material_t19 * __this, MethodInfo* method)
{
	typedef int32_t (*Material_get_passCount_m214_ftn) (Material_t19 *);
	static Material_get_passCount_m214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_get_passCount_m214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::get_passCount()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern MethodInfo Material_SetPass_m956_MethodInfo;
extern "C" bool Material_SetPass_m956 (Material_t19 * __this, int32_t ___pass, MethodInfo* method)
{
	typedef bool (*Material_SetPass_m956_ftn) (Material_t19 *, int32_t);
	static Material_SetPass_m956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetPass_m956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetPass(System.Int32)");
	return _il2cpp_icall_func(__this, ___pass);
}
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m5380 (Object_t * __this /* static, unused */, Material_t19 * ___mono, Shader_t18 * ___shader, MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithShader_m5380_ftn) (Material_t19 *, Shader_t18 *);
	static Material_Internal_CreateWithShader_m5380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithShader_m5380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)");
	_il2cpp_icall_func(___mono, ___shader);
}
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m5381 (Object_t * __this /* static, unused */, Material_t19 * ___mono, Material_t19 * ___source, MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithMaterial_m5381_ftn) (Material_t19 *, Material_t19 *);
	static Material_Internal_CreateWithMaterial_m5381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithMaterial_m5381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(___mono, ___source);
}
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Sprite_t376_il2cpp_TypeInfo;
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"


// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern MethodInfo Sprite_get_rect_m2532_MethodInfo;
extern "C" Rect_t132  Sprite_get_rect_m2532 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef Rect_t132  (*Sprite_get_rect_m2532_ftn) (Sprite_t376 *);
	static Sprite_get_rect_m2532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_rect_m2532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern MethodInfo Sprite_get_pixelsPerUnit_m2529_MethodInfo;
extern "C" float Sprite_get_pixelsPerUnit_m2529 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m2529_ftn) (Sprite_t376 *);
	static Sprite_get_pixelsPerUnit_m2529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m2529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern MethodInfo Sprite_get_texture_m2526_MethodInfo;
extern "C" Texture2D_t36 * Sprite_get_texture_m2526 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef Texture2D_t36 * (*Sprite_get_texture_m2526_ftn) (Sprite_t376 *);
	static Sprite_get_texture_m2526_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m2526_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern MethodInfo Sprite_get_textureRect_m2554_MethodInfo;
extern "C" Rect_t132  Sprite_get_textureRect_m2554 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef Rect_t132  (*Sprite_get_textureRect_m2554_ftn) (Sprite_t376 *);
	static Sprite_get_textureRect_m2554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_textureRect_m2554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern MethodInfo Sprite_get_border_m2527_MethodInfo;
extern "C" Vector4_t52  Sprite_get_border_m2527 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef Vector4_t52  (*Sprite_get_border_m2527_ftn) (Sprite_t376 *);
	static Sprite_get_border_m2527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_border_m2527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpriteRenderer_t486_il2cpp_TypeInfo;
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"



// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DataUtility_t1090_il2cpp_TypeInfo;
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"

extern MethodInfo DataUtility_Internal_GetMinSize_m5382_MethodInfo;


// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetInnerUV_m2545_MethodInfo;
extern "C" Vector4_t52  DataUtility_GetInnerUV_m2545 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t52  (*DataUtility_GetInnerUV_m2545_ftn) (Sprite_t376 *);
	static DataUtility_GetInnerUV_m2545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m2545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetOuterUV_m2544_MethodInfo;
extern "C" Vector4_t52  DataUtility_GetOuterUV_m2544 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t52  (*DataUtility_GetOuterUV_m2544_ftn) (Sprite_t376 *);
	static DataUtility_GetOuterUV_m2544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m2544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetPadding_m2534_MethodInfo;
extern "C" Vector4_t52  DataUtility_GetPadding_m2534 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t52  (*DataUtility_GetPadding_m2534_ftn) (Sprite_t376 *);
	static DataUtility_GetPadding_m2534_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m2534_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetMinSize_m2531_MethodInfo;
extern "C" Vector2_t32  DataUtility_GetMinSize_m2531 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, MethodInfo* method)
{
	Vector2_t32  V_0 = {0};
	{
		DataUtility_Internal_GetMinSize_m5382(NULL /*static, unused*/, ___sprite, (&V_0), /*hidden argument*/&DataUtility_Internal_GetMinSize_m5382_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m5382 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, Vector2_t32 * ___output, MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m5382_ftn) (Sprite_t376 *, Vector2_t32 *);
	static DataUtility_Internal_GetMinSize_m5382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m5382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___sprite, ___output);
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CacheIndex_t1091_il2cpp_TypeInfo;
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void CacheIndex_t1091_marshal(const CacheIndex_t1091& unmarshaled, CacheIndex_t1091_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
void CacheIndex_t1091_marshal_back(const CacheIndex_t1091_marshaled& marshaled, CacheIndex_t1091& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void CacheIndex_t1091_marshal_cleanup(CacheIndex_t1091_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityString_t1092_il2cpp_TypeInfo;

extern MethodInfo String_Format_m3847_MethodInfo;


// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" String_t* UnityString_Format_m5383 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t137* ___args, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = String_Format_m3847(NULL /*static, unused*/, ___fmt, ___args, /*hidden argument*/&String_Format_m3847_MethodInfo);
		return L_0;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AsyncOperation_t1029_il2cpp_TypeInfo;
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"

// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern MethodInfo YieldInstruction__ctor_m5492_MethodInfo;
extern MethodInfo AsyncOperation_InternalDestroy_m5385_MethodInfo;


// System.Void UnityEngine.AsyncOperation::.ctor()
extern MethodInfo AsyncOperation__ctor_m5384_MethodInfo;
extern "C" void AsyncOperation__ctor_m5384 (AsyncOperation_t1029 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m5492(__this, /*hidden argument*/&YieldInstruction__ctor_m5492_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m5385 (AsyncOperation_t1029 * __this, MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m5385_ftn) (AsyncOperation_t1029 *);
	static AsyncOperation_InternalDestroy_m5385_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m5385_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern MethodInfo AsyncOperation_Finalize_m5386_MethodInfo;
extern "C" void AsyncOperation_Finalize_m5386 (AsyncOperation_t1029 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		AsyncOperation_InternalDestroy_m5385(__this, /*hidden argument*/&AsyncOperation_InternalDestroy_m5385_MethodInfo);
		// IL_0006: leave IL_0012
		leaveInstructions[0] = 0x12; // 1
		THROW_SENTINEL(IL_0012);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_000b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_000b;
	}

IL_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m226(__this, /*hidden argument*/&Object_Finalize_m226_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x12:
				goto IL_0012;
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

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t1029_marshal(const AsyncOperation_t1029& unmarshaled, AsyncOperation_t1029_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t1029_marshal_back(const AsyncOperation_t1029_marshaled& marshaled, AsyncOperation_t1029& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t1029_marshal_cleanup(AsyncOperation_t1029_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LogCallback_t1093_il2cpp_TypeInfo;
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"

// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo LogCallback__ctor_m5387_MethodInfo;
extern "C" void LogCallback__ctor_m5387 (LogCallback_t1093 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern MethodInfo LogCallback_Invoke_m5388_MethodInfo;
extern "C" void LogCallback_Invoke_m5388 (LogCallback_t1093 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m5388((LogCallback_t1093 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t1093(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern MethodInfo LogCallback_BeginInvoke_m5389_MethodInfo;
extern "C" Object_t * LogCallback_BeginInvoke_m5389 (LogCallback_t1093 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(InitializedTypeInfo(&LogType_t1036_il2cpp_TypeInfo), &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo LogCallback_EndInvoke_m5390_MethodInfo;
extern "C" void LogCallback_EndInvoke_m5390 (LogCallback_t1093 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Application_t1094_il2cpp_TypeInfo;

// UnityEngine.UserAuthorization
#include "UnityEngine_UnityEngine_UserAuthorization.h"
extern TypeInfo LogType_t1036_il2cpp_TypeInfo;
extern MethodInfo Application_LoadLevelAsync_m5391_MethodInfo;
extern MethodInfo Application_ReplyToUserAuthorizationRequest_m5393_MethodInfo;
extern MethodInfo Application_GetUserAuthorizationRequestMode_Internal_m5395_MethodInfo;


// System.Void UnityEngine.Application::Quit()
extern MethodInfo Application_Quit_m664_MethodInfo;
extern "C" void Application_Quit_m664 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*Application_Quit_m664_ftn) ();
	static Application_Quit_m664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_Quit_m664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern MethodInfo Application_LoadLevel_m724_MethodInfo;
extern "C" void Application_LoadLevel_m724 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		Application_LoadLevelAsync_m5391(NULL /*static, unused*/, ___name, (-1), 0, 1, /*hidden argument*/&Application_LoadLevelAsync_m5391_MethodInfo);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t1029 * Application_LoadLevelAsync_m5391 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, MethodInfo* method)
{
	typedef AsyncOperation_t1029 * (*Application_LoadLevelAsync_m5391_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m5391_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m5391_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern MethodInfo Application_get_isPlaying_m2668_MethodInfo;
extern "C" bool Application_get_isPlaying_m2668 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m2668_ftn) ();
	static Application_get_isPlaying_m2668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m2668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern MethodInfo Application_get_isEditor_m162_MethodInfo;
extern "C" bool Application_get_isEditor_m162 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m162_ftn) ();
	static Application_get_isEditor_m162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m652 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m652_ftn) ();
	static Application_get_platform_m652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern MethodInfo Application_set_targetFrameRate_m526_MethodInfo;
extern "C" void Application_set_targetFrameRate_m526 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Application_set_targetFrameRate_m526_ftn) (int32_t);
	static Application_set_targetFrameRate_m526_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_set_targetFrameRate_m526_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::set_targetFrameRate(System.Int32)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType)
extern MethodInfo Application_CallLogCallback_m5392_MethodInfo;
extern "C" void Application_CallLogCallback_m5392 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, MethodInfo* method)
{
	{
		if (!(((Application_t1094_StaticFields*)InitializedTypeInfo(&Application_t1094_il2cpp_TypeInfo)->static_fields)->___s_LogCallback_0))
		{
			goto IL_001b;
		}
	}
	{
		NullCheck((((Application_t1094_StaticFields*)InitializedTypeInfo(&Application_t1094_il2cpp_TypeInfo)->static_fields)->___s_LogCallback_0));
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m5388_MethodInfo, (((Application_t1094_StaticFields*)InitializedTypeInfo(&Application_t1094_il2cpp_TypeInfo)->static_fields)->___s_LogCallback_0), ___logString, ___stackTrace, ___type);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Application::ReplyToUserAuthorizationRequest(System.Boolean,System.Boolean)
extern "C" void Application_ReplyToUserAuthorizationRequest_m5393 (Object_t * __this /* static, unused */, bool ___reply, bool ___remember, MethodInfo* method)
{
	typedef void (*Application_ReplyToUserAuthorizationRequest_m5393_ftn) (bool, bool);
	static Application_ReplyToUserAuthorizationRequest_m5393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_ReplyToUserAuthorizationRequest_m5393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::ReplyToUserAuthorizationRequest(System.Boolean,System.Boolean)");
	_il2cpp_icall_func(___reply, ___remember);
}
// System.Void UnityEngine.Application::ReplyToUserAuthorizationRequest(System.Boolean)
extern MethodInfo Application_ReplyToUserAuthorizationRequest_m5394_MethodInfo;
extern "C" void Application_ReplyToUserAuthorizationRequest_m5394 (Object_t * __this /* static, unused */, bool ___reply, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Application_ReplyToUserAuthorizationRequest_m5393(NULL /*static, unused*/, ___reply, V_0, /*hidden argument*/&Application_ReplyToUserAuthorizationRequest_m5393_MethodInfo);
		return;
	}
}
// System.Int32 UnityEngine.Application::GetUserAuthorizationRequestMode_Internal()
extern "C" int32_t Application_GetUserAuthorizationRequestMode_Internal_m5395 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_GetUserAuthorizationRequestMode_Internal_m5395_ftn) ();
	static Application_GetUserAuthorizationRequestMode_Internal_m5395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_GetUserAuthorizationRequestMode_Internal_m5395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::GetUserAuthorizationRequestMode_Internal()");
	return _il2cpp_icall_func();
}
// UnityEngine.UserAuthorization UnityEngine.Application::GetUserAuthorizationRequestMode()
extern MethodInfo Application_GetUserAuthorizationRequestMode_m5396_MethodInfo;
extern "C" int32_t Application_GetUserAuthorizationRequestMode_m5396 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		int32_t L_0 = Application_GetUserAuthorizationRequestMode_Internal_m5395(NULL /*static, unused*/, /*hidden argument*/&Application_GetUserAuthorizationRequestMode_Internal_m5395_MethodInfo);
		return (int32_t)(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UserAuthorization_t1095_il2cpp_TypeInfo;
// UnityEngine.UserAuthorization
#include "UnityEngine_UnityEngine_UserAuthorizationMethodDeclarations.h"



// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Behaviour_t143_il2cpp_TypeInfo;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"



// System.Boolean UnityEngine.Behaviour::get_enabled()
extern MethodInfo Behaviour_get_enabled_m529_MethodInfo;
extern "C" bool Behaviour_get_enabled_m529 (Behaviour_t143 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m529_ftn) (Behaviour_t143 *);
	static Behaviour_get_enabled_m529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern MethodInfo Behaviour_set_enabled_m176_MethodInfo;
extern "C" void Behaviour_set_enabled_m176 (Behaviour_t143 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m176_ftn) (Behaviour_t143 *, bool);
	static Behaviour_set_enabled_m176_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m176_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern MethodInfo Behaviour_get_isActiveAndEnabled_m2332_MethodInfo;
extern "C" bool Behaviour_get_isActiveAndEnabled_m2332 (Behaviour_t143 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m2332_ftn) (Behaviour_t143 *);
	static Behaviour_get_isActiveAndEnabled_m2332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m2332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RenderingPath
#include "UnityEngine_UnityEngine_RenderingPath.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderingPath_t224_il2cpp_TypeInfo;
// UnityEngine.RenderingPath
#include "UnityEngine_UnityEngine_RenderingPathMethodDeclarations.h"



// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Camera_t56_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
#include "UnityEngine_ArrayTypes.h"
extern MethodInfo Camera_INTERNAL_get_backgroundColor_m5398_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_backgroundColor_m5399_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_pixelRect_m5400_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_worldToCameraMatrix_m5402_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_worldToCameraMatrix_m5403_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_projectionMatrix_m5404_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_projectionMatrix_m5405_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_WorldToScreenPoint_m5406_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_WorldToViewportPoint_m5407_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToViewportPoint_m5408_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenPointToRay_m5409_MethodInfo;


// System.Single UnityEngine.Camera::get_fieldOfView()
extern MethodInfo Camera_get_fieldOfView_m218_MethodInfo;
extern "C" float Camera_get_fieldOfView_m218 (Camera_t56 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_fieldOfView_m218_ftn) (Camera_t56 *);
	static Camera_get_fieldOfView_m218_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_fieldOfView_m218_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_fieldOfView()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern MethodInfo Camera_set_fieldOfView_m586_MethodInfo;
extern "C" void Camera_set_fieldOfView_m586 (Camera_t56 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_fieldOfView_m586_ftn) (Camera_t56 *, float);
	static Camera_set_fieldOfView_m586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_fieldOfView_m586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_fieldOfView(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern MethodInfo Camera_get_nearClipPlane_m582_MethodInfo;
extern "C" float Camera_get_nearClipPlane_m582 (Camera_t56 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m582_ftn) (Camera_t56 *);
	static Camera_get_nearClipPlane_m582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
extern MethodInfo Camera_set_nearClipPlane_m583_MethodInfo;
extern "C" void Camera_set_nearClipPlane_m583 (Camera_t56 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_nearClipPlane_m583_ftn) (Camera_t56 *, float);
	static Camera_set_nearClipPlane_m583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_nearClipPlane_m583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_nearClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern MethodInfo Camera_get_farClipPlane_m219_MethodInfo;
extern "C" float Camera_get_farClipPlane_m219 (Camera_t56 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m219_ftn) (Camera_t56 *);
	static Camera_get_farClipPlane_m219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m219_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
extern MethodInfo Camera_set_farClipPlane_m581_MethodInfo;
extern "C" void Camera_set_farClipPlane_m581 (Camera_t56 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_farClipPlane_m581_ftn) (Camera_t56 *, float);
	static Camera_set_farClipPlane_m581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_farClipPlane_m581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_farClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
extern MethodInfo Camera_set_renderingPath_m634_MethodInfo;
extern "C" void Camera_set_renderingPath_m634 (Camera_t56 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_renderingPath_m634_ftn) (Camera_t56 *, int32_t);
	static Camera_set_renderingPath_m634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_renderingPath_m634_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Camera::get_hdr()
extern MethodInfo Camera_get_hdr_m905_MethodInfo;
extern "C" bool Camera_get_hdr_m905 (Camera_t56 * __this, MethodInfo* method)
{
	typedef bool (*Camera_get_hdr_m905_ftn) (Camera_t56 *);
	static Camera_get_hdr_m905_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_hdr_m905_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_hdr()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
extern MethodInfo Camera_get_orthographicSize_m588_MethodInfo;
extern "C" float Camera_get_orthographicSize_m588 (Camera_t56 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_orthographicSize_m588_ftn) (Camera_t56 *);
	static Camera_get_orthographicSize_m588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographicSize_m588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographicSize()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern MethodInfo Camera_set_orthographicSize_m589_MethodInfo;
extern "C" void Camera_set_orthographicSize_m589 (Camera_t56 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m589_ftn) (Camera_t56 *, float);
	static Camera_set_orthographicSize_m589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Camera::get_orthographic()
extern MethodInfo Camera_get_orthographic_m584_MethodInfo;
extern "C" bool Camera_get_orthographic_m584 (Camera_t56 * __this, MethodInfo* method)
{
	typedef bool (*Camera_get_orthographic_m584_ftn) (Camera_t56 *);
	static Camera_get_orthographic_m584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographic_m584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographic()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern MethodInfo Camera_set_orthographic_m585_MethodInfo;
extern "C" void Camera_set_orthographic_m585 (Camera_t56 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Camera_set_orthographic_m585_ftn) (Camera_t56 *, bool);
	static Camera_set_orthographic_m585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographic_m585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern MethodInfo Camera_get_depth_m2267_MethodInfo;
extern "C" float Camera_get_depth_m2267 (Camera_t56 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_depth_m2267_ftn) (Camera_t56 *);
	static Camera_get_depth_m2267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m2267_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_aspect()
extern MethodInfo Camera_get_aspect_m221_MethodInfo;
extern "C" float Camera_get_aspect_m221 (Camera_t56 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_aspect_m221_ftn) (Camera_t56 *);
	static Camera_get_aspect_m221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_aspect_m221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_aspect()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_aspect(System.Single)
extern MethodInfo Camera_set_aspect_m587_MethodInfo;
extern "C" void Camera_set_aspect_m587 (Camera_t56 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_aspect_m587_ftn) (Camera_t56 *, float);
	static Camera_set_aspect_m587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_aspect_m587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_aspect(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern MethodInfo Camera_get_cullingMask_m2410_MethodInfo;
extern "C" int32_t Camera_get_cullingMask_m2410 (Camera_t56 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m2410_ftn) (Camera_t56 *);
	static Camera_get_cullingMask_m2410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m2410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern MethodInfo Camera_set_cullingMask_m548_MethodInfo;
extern "C" void Camera_set_cullingMask_m548 (Camera_t56 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_cullingMask_m548_ftn) (Camera_t56 *, int32_t);
	static Camera_set_cullingMask_m548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_cullingMask_m548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_cullingMask(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern MethodInfo Camera_get_eventMask_m5397_MethodInfo;
extern "C" int32_t Camera_get_eventMask_m5397 (Camera_t56 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m5397_ftn) (Camera_t56 *);
	static Camera_get_eventMask_m5397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m5397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_get_backgroundColor_m5398 (Camera_t56 * __this, Color_t29 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_backgroundColor_m5398_ftn) (Camera_t56 *, Color_t29 *);
	static Camera_INTERNAL_get_backgroundColor_m5398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_backgroundColor_m5398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m5399 (Camera_t56 * __this, Color_t29 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_backgroundColor_m5399_ftn) (Camera_t56 *, Color_t29 *);
	static Camera_INTERNAL_set_backgroundColor_m5399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_backgroundColor_m5399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
extern MethodInfo Camera_get_backgroundColor_m575_MethodInfo;
extern "C" Color_t29  Camera_get_backgroundColor_m575 (Camera_t56 * __this, MethodInfo* method)
{
	Color_t29  V_0 = {0};
	{
		Camera_INTERNAL_get_backgroundColor_m5398(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_backgroundColor_m5398_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern MethodInfo Camera_set_backgroundColor_m576_MethodInfo;
extern "C" void Camera_set_backgroundColor_m576 (Camera_t56 * __this, Color_t29  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_backgroundColor_m5399(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_backgroundColor_m5399_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m5400 (Camera_t56 * __this, Rect_t132 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m5400_ftn) (Camera_t56 *, Rect_t132 *);
	static Camera_INTERNAL_get_pixelRect_m5400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m5400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern MethodInfo Camera_get_pixelRect_m5401_MethodInfo;
extern "C" Rect_t132  Camera_get_pixelRect_m5401 (Camera_t56 * __this, MethodInfo* method)
{
	Rect_t132  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m5400(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_pixelRect_m5400_MethodInfo);
		return V_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern MethodInfo Camera_get_targetTexture_m620_MethodInfo;
extern "C" RenderTexture_t21 * Camera_get_targetTexture_m620 (Camera_t56 * __this, MethodInfo* method)
{
	typedef RenderTexture_t21 * (*Camera_get_targetTexture_m620_ftn) (Camera_t56 *);
	static Camera_get_targetTexture_m620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m620_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern MethodInfo Camera_set_targetTexture_m549_MethodInfo;
extern "C" void Camera_set_targetTexture_m549 (Camera_t56 * __this, RenderTexture_t21 * ___value, MethodInfo* method)
{
	typedef void (*Camera_set_targetTexture_m549_ftn) (Camera_t56 *, RenderTexture_t21 *);
	static Camera_set_targetTexture_m549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_targetTexture_m549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_pixelWidth()
extern MethodInfo Camera_get_pixelWidth_m624_MethodInfo;
extern "C" float Camera_get_pixelWidth_m624 (Camera_t56 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_pixelWidth_m624_ftn) (Camera_t56 *);
	static Camera_get_pixelWidth_m624_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_pixelWidth_m624_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_pixelWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_pixelHeight()
extern MethodInfo Camera_get_pixelHeight_m626_MethodInfo;
extern "C" float Camera_get_pixelHeight_m626 (Camera_t56 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_pixelHeight_m626_ftn) (Camera_t56 *);
	static Camera_get_pixelHeight_m626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_pixelHeight_m626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_pixelHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_worldToCameraMatrix_m5402 (Camera_t56 * __this, Matrix4x4_t53 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_worldToCameraMatrix_m5402_ftn) (Camera_t56 *, Matrix4x4_t53 *);
	static Camera_INTERNAL_get_worldToCameraMatrix_m5402_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_worldToCameraMatrix_m5402_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_worldToCameraMatrix_m5403 (Camera_t56 * __this, Matrix4x4_t53 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_worldToCameraMatrix_m5403_ftn) (Camera_t56 *, Matrix4x4_t53 *);
	static Camera_INTERNAL_set_worldToCameraMatrix_m5403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_worldToCameraMatrix_m5403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern MethodInfo Camera_get_worldToCameraMatrix_m542_MethodInfo;
extern "C" Matrix4x4_t53  Camera_get_worldToCameraMatrix_m542 (Camera_t56 * __this, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	{
		Camera_INTERNAL_get_worldToCameraMatrix_m5402(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_worldToCameraMatrix_m5402_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
extern MethodInfo Camera_set_worldToCameraMatrix_m544_MethodInfo;
extern "C" void Camera_set_worldToCameraMatrix_m544 (Camera_t56 * __this, Matrix4x4_t53  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_worldToCameraMatrix_m5403(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_worldToCameraMatrix_m5403_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m5404 (Camera_t56 * __this, Matrix4x4_t53 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m5404_ftn) (Camera_t56 *, Matrix4x4_t53 *);
	static Camera_INTERNAL_get_projectionMatrix_m5404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m5404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_projectionMatrix_m5405 (Camera_t56 * __this, Matrix4x4_t53 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_projectionMatrix_m5405_ftn) (Camera_t56 *, Matrix4x4_t53 *);
	static Camera_INTERNAL_set_projectionMatrix_m5405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_projectionMatrix_m5405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern MethodInfo Camera_get_projectionMatrix_m545_MethodInfo;
extern "C" Matrix4x4_t53  Camera_get_projectionMatrix_m545 (Camera_t56 * __this, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m5404(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_projectionMatrix_m5404_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern MethodInfo Camera_set_projectionMatrix_m546_MethodInfo;
extern "C" void Camera_set_projectionMatrix_m546 (Camera_t56 * __this, Matrix4x4_t53  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_projectionMatrix_m5405(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_projectionMatrix_m5405_MethodInfo);
		return;
	}
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern MethodInfo Camera_get_clearFlags_m573_MethodInfo;
extern "C" int32_t Camera_get_clearFlags_m573 (Camera_t56 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m573_ftn) (Camera_t56 *);
	static Camera_get_clearFlags_m573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern MethodInfo Camera_set_clearFlags_m574_MethodInfo;
extern "C" void Camera_set_clearFlags_m574 (Camera_t56 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_clearFlags_m574_ftn) (Camera_t56 *, int32_t);
	static Camera_set_clearFlags_m574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_clearFlags_m574_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern MethodInfo Camera_WorldToScreenPoint_m667_MethodInfo;
extern "C" Vector3_t54  Camera_WorldToScreenPoint_m667 (Camera_t56 * __this, Vector3_t54  ___position, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Camera_INTERNAL_CALL_WorldToScreenPoint_m5406(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_WorldToScreenPoint_m5406_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t54  Camera_INTERNAL_CALL_WorldToScreenPoint_m5406 (Object_t * __this /* static, unused */, Camera_t56 * ___self, Vector3_t54 * ___position, MethodInfo* method)
{
	typedef Vector3_t54  (*Camera_INTERNAL_CALL_WorldToScreenPoint_m5406_ftn) (Camera_t56 *, Vector3_t54 *);
	static Camera_INTERNAL_CALL_WorldToScreenPoint_m5406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToScreenPoint_m5406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_WorldToViewportPoint_m951_MethodInfo;
extern "C" Vector3_t54  Camera_WorldToViewportPoint_m951 (Camera_t56 * __this, Vector3_t54  ___position, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Camera_INTERNAL_CALL_WorldToViewportPoint_m5407(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_WorldToViewportPoint_m5407_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t54  Camera_INTERNAL_CALL_WorldToViewportPoint_m5407 (Object_t * __this /* static, unused */, Camera_t56 * ___self, Vector3_t54 * ___position, MethodInfo* method)
{
	typedef Vector3_t54  (*Camera_INTERNAL_CALL_WorldToViewportPoint_m5407_ftn) (Camera_t56 *, Vector3_t54 *);
	static Camera_INTERNAL_CALL_WorldToViewportPoint_m5407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToViewportPoint_m5407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToViewportPoint_m2505_MethodInfo;
extern "C" Vector3_t54  Camera_ScreenToViewportPoint_m2505 (Camera_t56 * __this, Vector3_t54  ___position, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m5408(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToViewportPoint_m5408_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t54  Camera_INTERNAL_CALL_ScreenToViewportPoint_m5408 (Object_t * __this /* static, unused */, Camera_t56 * ___self, Vector3_t54 * ___position, MethodInfo* method)
{
	typedef Vector3_t54  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m5408_ftn) (Camera_t56 *, Vector3_t54 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m5408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m5408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenPointToRay_m1048_MethodInfo;
extern "C" Ray_t237  Camera_ScreenPointToRay_m1048 (Camera_t56 * __this, Vector3_t54  ___position, MethodInfo* method)
{
	{
		Ray_t237  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m5409(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenPointToRay_m5409_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t237  Camera_INTERNAL_CALL_ScreenPointToRay_m5409 (Object_t * __this /* static, unused */, Camera_t56 * ___self, Vector3_t54 * ___position, MethodInfo* method)
{
	typedef Ray_t237  (*Camera_INTERNAL_CALL_ScreenPointToRay_m5409_ftn) (Camera_t56 *, Vector3_t54 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m5409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m5409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern MethodInfo Camera_get_main_m637_MethodInfo;
extern "C" Camera_t56 * Camera_get_main_m637 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t56 * (*Camera_get_main_m637_ftn) ();
	static Camera_get_main_m637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern MethodInfo Camera_get_current_m533_MethodInfo;
extern "C" Camera_t56 * Camera_get_current_m533 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t56 * (*Camera_get_current_m533_ftn) ();
	static Camera_get_current_m533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_current_m533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_current()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern MethodInfo Camera_get_allCamerasCount_m5410_MethodInfo;
extern "C" int32_t Camera_get_allCamerasCount_m5410 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m5410_ftn) ();
	static Camera_get_allCamerasCount_m5410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m5410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern MethodInfo Camera_GetAllCameras_m5411_MethodInfo;
extern "C" int32_t Camera_GetAllCameras_m5411 (Object_t * __this /* static, unused */, CameraU5BU5D_t952* ___cameras, MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m5411_ftn) (CameraU5BU5D_t952*);
	static Camera_GetAllCameras_m5411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m5411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::Render()
extern MethodInfo Camera_Render_m554_MethodInfo;
extern "C" void Camera_Render_m554 (Camera_t56 * __this, MethodInfo* method)
{
	typedef void (*Camera_Render_m554_ftn) (Camera_t56 *);
	static Camera_Render_m554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_Render_m554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::Render()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
extern MethodInfo Camera_RenderWithShader_m927_MethodInfo;
extern "C" void Camera_RenderWithShader_m927 (Camera_t56 * __this, Shader_t18 * ___shader, String_t* ___replacementTag, MethodInfo* method)
{
	typedef void (*Camera_RenderWithShader_m927_ftn) (Camera_t56 *, Shader_t18 *, String_t*);
	static Camera_RenderWithShader_m927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_RenderWithShader_m927_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)");
	_il2cpp_icall_func(__this, ___shader, ___replacementTag);
}
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern MethodInfo Camera_CopyFrom_m932_MethodInfo;
extern "C" void Camera_CopyFrom_m932 (Camera_t56 * __this, Camera_t56 * ___other, MethodInfo* method)
{
	typedef void (*Camera_CopyFrom_m932_ftn) (Camera_t56 *, Camera_t56 *);
	static Camera_CopyFrom_m932_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_CopyFrom_m932_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::CopyFrom(UnityEngine.Camera)");
	_il2cpp_icall_func(__this, ___other);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern MethodInfo Camera_get_depthTextureMode_m216_MethodInfo;
extern "C" int32_t Camera_get_depthTextureMode_m216 (Camera_t56 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_depthTextureMode_m216_ftn) (Camera_t56 *);
	static Camera_get_depthTextureMode_m216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depthTextureMode_m216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depthTextureMode()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern MethodInfo Camera_set_depthTextureMode_m217_MethodInfo;
extern "C" void Camera_set_depthTextureMode_m217 (Camera_t56 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_depthTextureMode_m217_ftn) (Camera_t56 *, int32_t);
	static Camera_set_depthTextureMode_m217_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_depthTextureMode_m217_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComputeBufferType_t1096_il2cpp_TypeInfo;
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComputeBuffer_t195_il2cpp_TypeInfo;
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBufferMethodDeclarations.h"

extern TypeInfo IntPtr_t98_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Marshal_t148_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"
extern MethodInfo ComputeBuffer_InitBuffer_m5415_MethodInfo;
extern MethodInfo ComputeBuffer_Dispose_m5414_MethodInfo;
extern MethodInfo GC_SuppressFinalize_m5619_MethodInfo;
extern MethodInfo ComputeBuffer_DestroyBuffer_m5416_MethodInfo;
extern MethodInfo ComputeBuffer_Dispose_m5413_MethodInfo;
extern MethodInfo Type_GetElementType_m5620_MethodInfo;
extern MethodInfo Marshal_SizeOf_m5621_MethodInfo;
extern MethodInfo ComputeBuffer_InternalSetData_m5417_MethodInfo;


// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern MethodInfo ComputeBuffer__ctor_m961_MethodInfo;
extern "C" void ComputeBuffer__ctor_m961 (ComputeBuffer_t195 * __this, int32_t ___count, int32_t ___stride, int32_t ___type, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___m_Ptr_0 = (((IntPtr_t98_StaticFields*)InitializedTypeInfo(&IntPtr_t98_il2cpp_TypeInfo)->static_fields)->___Zero_1);
		ComputeBuffer_InitBuffer_m5415(NULL /*static, unused*/, __this, ___count, ___stride, ___type, /*hidden argument*/&ComputeBuffer_InitBuffer_m5415_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::Finalize()
extern MethodInfo ComputeBuffer_Finalize_m5412_MethodInfo;
extern "C" void ComputeBuffer_Finalize_m5412 (ComputeBuffer_t195 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		ComputeBuffer_Dispose_m5414(__this, 0, /*hidden argument*/&ComputeBuffer_Dispose_m5414_MethodInfo);
		// IL_0007: leave IL_0013
		leaveInstructions[0] = 0x13; // 1
		THROW_SENTINEL(IL_0013);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_000c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_000c;
	}

IL_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m226(__this, /*hidden argument*/&Object_Finalize_m226_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x13:
				goto IL_0013;
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

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::Dispose()
extern "C" void ComputeBuffer_Dispose_m5413 (ComputeBuffer_t195 * __this, MethodInfo* method)
{
	{
		ComputeBuffer_Dispose_m5414(__this, 1, /*hidden argument*/&ComputeBuffer_Dispose_m5414_MethodInfo);
		GC_SuppressFinalize_m5619(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5619_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::Dispose(System.Boolean)
extern "C" void ComputeBuffer_Dispose_m5414 (ComputeBuffer_t195 * __this, bool ___disposing, MethodInfo* method)
{
	{
		ComputeBuffer_DestroyBuffer_m5416(NULL /*static, unused*/, __this, /*hidden argument*/&ComputeBuffer_DestroyBuffer_m5416_MethodInfo);
		__this->___m_Ptr_0 = (((IntPtr_t98_StaticFields*)InitializedTypeInfo(&IntPtr_t98_il2cpp_TypeInfo)->static_fields)->___Zero_1);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C" void ComputeBuffer_InitBuffer_m5415 (Object_t * __this /* static, unused */, ComputeBuffer_t195 * ___buf, int32_t ___count, int32_t ___stride, int32_t ___type, MethodInfo* method)
{
	typedef void (*ComputeBuffer_InitBuffer_m5415_ftn) (ComputeBuffer_t195 *, int32_t, int32_t, int32_t);
	static ComputeBuffer_InitBuffer_m5415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_InitBuffer_m5415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)");
	_il2cpp_icall_func(___buf, ___count, ___stride, ___type);
}
// System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
extern "C" void ComputeBuffer_DestroyBuffer_m5416 (Object_t * __this /* static, unused */, ComputeBuffer_t195 * ___buf, MethodInfo* method)
{
	typedef void (*ComputeBuffer_DestroyBuffer_m5416_ftn) (ComputeBuffer_t195 *);
	static ComputeBuffer_DestroyBuffer_m5416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_DestroyBuffer_m5416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)");
	_il2cpp_icall_func(___buf);
}
// System.Void UnityEngine.ComputeBuffer::Release()
extern MethodInfo ComputeBuffer_Release_m959_MethodInfo;
extern "C" void ComputeBuffer_Release_m959 (ComputeBuffer_t195 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&ComputeBuffer_Dispose_m5413_MethodInfo, __this);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
extern MethodInfo ComputeBuffer_SetData_m962_MethodInfo;
extern "C" void ComputeBuffer_SetData_m962 (ComputeBuffer_t195 * __this, Array_t * ___data, MethodInfo* method)
{
	{
		NullCheck(___data);
		Type_t * L_0 = Object_GetType_m2357(___data, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Marshal_t148_il2cpp_TypeInfo));
		int32_t L_2 = Marshal_SizeOf_m5621(NULL /*static, unused*/, L_1, /*hidden argument*/&Marshal_SizeOf_m5621_MethodInfo);
		ComputeBuffer_InternalSetData_m5417(__this, ___data, L_2, /*hidden argument*/&ComputeBuffer_InternalSetData_m5417_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)
extern "C" void ComputeBuffer_InternalSetData_m5417 (ComputeBuffer_t195 * __this, Array_t * ___data, int32_t ___elemSize, MethodInfo* method)
{
	typedef void (*ComputeBuffer_InternalSetData_m5417_ftn) (ComputeBuffer_t195 *, Array_t *, int32_t);
	static ComputeBuffer_InternalSetData_m5417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_InternalSetData_m5417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)");
	_il2cpp_icall_func(__this, ___data, ___elemSize);
}
// System.Void UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)
extern MethodInfo ComputeBuffer_CopyCount_m966_MethodInfo;
extern "C" void ComputeBuffer_CopyCount_m966 (Object_t * __this /* static, unused */, ComputeBuffer_t195 * ___src, ComputeBuffer_t195 * ___dst, int32_t ___dstOffset, MethodInfo* method)
{
	typedef void (*ComputeBuffer_CopyCount_m966_ftn) (ComputeBuffer_t195 *, ComputeBuffer_t195 *, int32_t);
	static ComputeBuffer_CopyCount_m966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_CopyCount_m966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)");
	_il2cpp_icall_func(___src, ___dst, ___dstOffset);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Debug_t1097_il2cpp_TypeInfo;
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
extern MethodInfo Object_ToString_m228_MethodInfo;
extern MethodInfo Debug_Internal_Log_m5418_MethodInfo;
extern MethodInfo Debug_Internal_LogException_m5419_MethodInfo;


// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m5418 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t50 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m5418_ftn) (int32_t, String_t*, Object_t50 *);
	static Debug_Internal_Log_m5418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m5418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m5419 (Object_t * __this /* static, unused */, Exception_t140 * ___exception, Object_t50 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m5419_ftn) (Exception_t140 *, Object_t50 *);
	static Debug_Internal_LogException_m5419_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m5419_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern MethodInfo Debug_Log_m141_MethodInfo;
extern "C" void Debug_Log_m141 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		G_B1_0 = 0;
		if (!___message)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		NullCheck(___message);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, ___message);
		G_B3_0 = L_0;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral934;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m5418(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t50 *)NULL, /*hidden argument*/&Debug_Internal_Log_m5418_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern MethodInfo Debug_LogError_m948_MethodInfo;
extern "C" void Debug_LogError_m948 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		G_B1_0 = 2;
		if (!___message)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		NullCheck(___message);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, ___message);
		G_B3_0 = L_0;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral934;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m5418(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t50 *)NULL, /*hidden argument*/&Debug_Internal_Log_m5418_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogError_m2559_MethodInfo;
extern "C" void Debug_LogError_m2559 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t50 * ___context, MethodInfo* method)
{
	{
		NullCheck(___message);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, ___message);
		Debug_Internal_Log_m5418(NULL /*static, unused*/, 2, L_0, ___context, /*hidden argument*/&Debug_Internal_Log_m5418_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern MethodInfo Debug_LogException_m5420_MethodInfo;
extern "C" void Debug_LogException_m5420 (Object_t * __this /* static, unused */, Exception_t140 * ___exception, MethodInfo* method)
{
	{
		Debug_Internal_LogException_m5419(NULL /*static, unused*/, ___exception, (Object_t50 *)NULL, /*hidden argument*/&Debug_Internal_LogException_m5419_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern MethodInfo Debug_LogException_m2432_MethodInfo;
extern "C" void Debug_LogException_m2432 (Object_t * __this /* static, unused */, Exception_t140 * ___exception, Object_t50 * ___context, MethodInfo* method)
{
	{
		Debug_Internal_LogException_m5419(NULL /*static, unused*/, ___exception, ___context, /*hidden argument*/&Debug_Internal_LogException_m5419_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern MethodInfo Debug_LogWarning_m945_MethodInfo;
extern "C" void Debug_LogWarning_m945 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		NullCheck(___message);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, ___message);
		Debug_Internal_Log_m5418(NULL /*static, unused*/, 1, L_0, (Object_t50 *)NULL, /*hidden argument*/&Debug_Internal_Log_m5418_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogWarning_m979_MethodInfo;
extern "C" void Debug_LogWarning_m979 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t50 * ___context, MethodInfo* method)
{
	{
		NullCheck(___message);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, ___message);
		Debug_Internal_Log_m5418(NULL /*static, unused*/, 1, L_0, ___context, /*hidden argument*/&Debug_Internal_Log_m5418_MethodInfo);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DisplaysUpdatedDelegate_t1098_il2cpp_TypeInfo;
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo DisplaysUpdatedDelegate__ctor_m5421_MethodInfo;
extern "C" void DisplaysUpdatedDelegate__ctor_m5421 (DisplaysUpdatedDelegate_t1098 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern MethodInfo DisplaysUpdatedDelegate_Invoke_m5422_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_Invoke_m5422 (DisplaysUpdatedDelegate_t1098 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m5422((DisplaysUpdatedDelegate_t1098 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t1098(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DisplaysUpdatedDelegate_BeginInvoke_m5423_MethodInfo;
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m5423 (DisplaysUpdatedDelegate_t1098 * __this, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo DisplaysUpdatedDelegate_EndInvoke_m5424_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m5424 (DisplaysUpdatedDelegate_t1098 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Display_t1100_il2cpp_TypeInfo;
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern TypeInfo DisplayU5BU5D_t1099_il2cpp_TypeInfo;
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern Il2CppType DisplayU5BU5D_t1099_0_0_0;
extern MethodInfo Display_GetRenderingExtImpl_m5442_MethodInfo;
extern MethodInfo Display_GetSystemExtImpl_m5441_MethodInfo;
extern MethodInfo Display_GetRenderingBuffersImpl_m5443_MethodInfo;
extern MethodInfo IntPtr__ctor_m5622_MethodInfo;
extern MethodInfo Display__ctor_m5425_MethodInfo;
extern MethodInfo Delegate_Combine_m2449_MethodInfo;
extern MethodInfo Delegate_Remove_m2488_MethodInfo;
extern MethodInfo Display_ActivateDisplayImpl_m5445_MethodInfo;
extern MethodInfo Display_SetRenderingResolutionImpl_m5444_MethodInfo;
extern MethodInfo Display__ctor_m5426_MethodInfo;


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m5425 (Display_t1100 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		IntPtr_t98 L_0 = {0};
		IntPtr__ctor_m5622(&L_0, 0, /*hidden argument*/&IntPtr__ctor_m5622_MethodInfo);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m5426 (Display_t1100 * __this, IntPtr_t98 ___nativeDisplay, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___nativeDisplay_0 = ___nativeDisplay;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern MethodInfo Display__cctor_m5427_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t1099_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m5427 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Display__cctor_m5427_init;
	if (!Display__cctor_m5427_init)
	{
		DisplayU5BU5D_t1099_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t1099_0_0_0);
		Display__cctor_m5427_init = true;
	}
	{
		DisplayU5BU5D_t1099* L_0 = ((DisplayU5BU5D_t1099*)SZArrayNew(DisplayU5BU5D_t1099_il2cpp_TypeInfo_var, 1));
		Display_t1100 * L_1 = (Display_t1100 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display__ctor_m5425(L_1, /*hidden argument*/&Display__ctor_m5425_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t1100 **)(Display_t1100 **)SZArrayLdElema(L_0, 0)) = (Display_t1100 *)L_1;
		((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1 = L_0;
		NullCheck((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1), 0);
		int32_t L_2 = 0;
		((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t1100 **)(Display_t1100 **)SZArrayLdElema((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1), L_2));
		((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t1098 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_add_onDisplaysUpdated_m5428_MethodInfo;
extern "C" void Display_add_onDisplaysUpdated_m5428 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t1098 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Delegate_t494 * L_0 = Delegate_Combine_m2449(NULL /*static, unused*/, (((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3), ___value, /*hidden argument*/&Delegate_Combine_m2449_MethodInfo);
		((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t1098 *)Castclass(L_0, InitializedTypeInfo(&DisplaysUpdatedDelegate_t1098_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_remove_onDisplaysUpdated_m5429_MethodInfo;
extern "C" void Display_remove_onDisplaysUpdated_m5429 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t1098 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Delegate_t494 * L_0 = Delegate_Remove_m2488(NULL /*static, unused*/, (((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3), ___value, /*hidden argument*/&Delegate_Remove_m2488_MethodInfo);
		((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t1098 *)Castclass(L_0, InitializedTypeInfo(&DisplaysUpdatedDelegate_t1098_il2cpp_TypeInfo)));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern MethodInfo Display_get_renderingWidth_m5430_MethodInfo;
extern "C" int32_t Display_get_renderingWidth_m5430 (Display_t1100 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t98 L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m5442(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m5442_MethodInfo);
		return V_0;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern MethodInfo Display_get_renderingHeight_m5431_MethodInfo;
extern "C" int32_t Display_get_renderingHeight_m5431 (Display_t1100 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t98 L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m5442(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m5442_MethodInfo);
		return V_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern MethodInfo Display_get_systemWidth_m5432_MethodInfo;
extern "C" int32_t Display_get_systemWidth_m5432 (Display_t1100 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t98 L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m5441(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m5441_MethodInfo);
		return V_0;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern MethodInfo Display_get_systemHeight_m5433_MethodInfo;
extern "C" int32_t Display_get_systemHeight_m5433 (Display_t1100 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t98 L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m5441(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m5441_MethodInfo);
		return V_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern MethodInfo Display_get_colorBuffer_m5434_MethodInfo;
extern "C" RenderBuffer_t1050  Display_get_colorBuffer_m5434 (Display_t1100 * __this, MethodInfo* method)
{
	RenderBuffer_t1050  V_0 = {0};
	RenderBuffer_t1050  V_1 = {0};
	{
		IntPtr_t98 L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m5443(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m5443_MethodInfo);
		return V_0;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern MethodInfo Display_get_depthBuffer_m5435_MethodInfo;
extern "C" RenderBuffer_t1050  Display_get_depthBuffer_m5435 (Display_t1100 * __this, MethodInfo* method)
{
	RenderBuffer_t1050  V_0 = {0};
	RenderBuffer_t1050  V_1 = {0};
	{
		IntPtr_t98 L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m5443(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m5443_MethodInfo);
		return V_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern MethodInfo Display_Activate_m5436_MethodInfo;
extern "C" void Display_Activate_m5436 (Display_t1100 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m5445(NULL /*static, unused*/, L_0, /*hidden argument*/&Display_ActivateDisplayImpl_m5445_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern MethodInfo Display_SetRenderingResolution_m5437_MethodInfo;
extern "C" void Display_SetRenderingResolution_m5437 (Display_t1100 * __this, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display_SetRenderingResolutionImpl_m5444(NULL /*static, unused*/, L_0, ___w, ___h, /*hidden argument*/&Display_SetRenderingResolutionImpl_m5444_MethodInfo);
		return;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern MethodInfo Display_get_main_m5438_MethodInfo;
extern "C" Display_t1100 * Display_get_main_m5438 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		return (((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2);
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern MethodInfo Display_RecreateDisplayList_m5439_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t1099_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m5439 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t1101* ___nativeDisplay, MethodInfo* method)
{
	static bool Display_RecreateDisplayList_m5439_init;
	if (!Display_RecreateDisplayList_m5439_init)
	{
		DisplayU5BU5D_t1099_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t1099_0_0_0);
		Display_RecreateDisplayList_m5439_init = true;
	}
	int32_t V_0 = 0;
	{
		NullCheck(___nativeDisplay);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1 = ((DisplayU5BU5D_t1099*)SZArrayNew(DisplayU5BU5D_t1099_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)___nativeDisplay)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		NullCheck(___nativeDisplay);
		IL2CPP_ARRAY_BOUNDS_CHECK(___nativeDisplay, V_0);
		int32_t L_0 = V_0;
		Display_t1100 * L_1 = (Display_t1100 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		Display__ctor_m5426(L_1, (*(IntPtr_t98*)(IntPtr_t98*)SZArrayLdElema(___nativeDisplay, L_0)), /*hidden argument*/&Display__ctor_m5426_MethodInfo);
		NullCheck((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1), V_0);
		ArrayElementTypeCheck ((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1), L_1);
		*((Display_t1100 **)(Display_t1100 **)SZArrayLdElema((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1), V_0)) = (Display_t1100 *)L_1;
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0027:
	{
		NullCheck(___nativeDisplay);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((Array_t *)___nativeDisplay)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		NullCheck((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1), 0);
		int32_t L_2 = 0;
		((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t1100 **)(Display_t1100 **)SZArrayLdElema((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___displays_1), L_2));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern MethodInfo Display_FireDisplaysUpdated_m5440_MethodInfo;
extern "C" void Display_FireDisplaysUpdated_m5440 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		if (!(((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo));
		NullCheck((((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3));
		VirtActionInvoker0::Invoke(&DisplaysUpdatedDelegate_Invoke_m5422_MethodInfo, (((Display_t1100_StaticFields*)InitializedTypeInfo(&Display_t1100_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3));
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m5441 (Object_t * __this /* static, unused */, IntPtr_t98 ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m5441_ftn) (IntPtr_t98, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m5441_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m5441_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m5442 (Object_t * __this /* static, unused */, IntPtr_t98 ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m5442_ftn) (IntPtr_t98, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m5442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m5442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m5443 (Object_t * __this /* static, unused */, IntPtr_t98 ___nativeDisplay, RenderBuffer_t1050 * ___color, RenderBuffer_t1050 * ___depth, MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m5443_ftn) (IntPtr_t98, RenderBuffer_t1050 *, RenderBuffer_t1050 *);
	static Display_GetRenderingBuffersImpl_m5443_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m5443_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m5444 (Object_t * __this /* static, unused */, IntPtr_t98 ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m5444_ftn) (IntPtr_t98, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m5444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m5444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr)
extern "C" void Display_ActivateDisplayImpl_m5445 (Object_t * __this /* static, unused */, IntPtr_t98 ___nativeDisplay, MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m5445_ftn) (IntPtr_t98);
	static Display_ActivateDisplayImpl_m5445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m5445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr)");
	_il2cpp_icall_func(___nativeDisplay);
}
// UnityEngine.NotConvertedAttribute
#include "UnityEngine_UnityEngine_NotConvertedAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NotConvertedAttribute_t1102_il2cpp_TypeInfo;
// UnityEngine.NotConvertedAttribute
#include "UnityEngine_UnityEngine_NotConvertedAttributeMethodDeclarations.h"



// System.Void UnityEngine.NotConvertedAttribute::.ctor()
extern MethodInfo NotConvertedAttribute__ctor_m5446_MethodInfo;
extern "C" void NotConvertedAttribute__ctor_m5446 (NotConvertedAttribute_t1102 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		return;
	}
}
// UnityEngine.NotRenamedAttribute
#include "UnityEngine_UnityEngine_NotRenamedAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NotRenamedAttribute_t1103_il2cpp_TypeInfo;
// UnityEngine.NotRenamedAttribute
#include "UnityEngine_UnityEngine_NotRenamedAttributeMethodDeclarations.h"



// System.Void UnityEngine.NotRenamedAttribute::.ctor()
extern MethodInfo NotRenamedAttribute__ctor_m5447_MethodInfo;
extern "C" void NotRenamedAttribute__ctor_m5447 (NotRenamedAttribute_t1103 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		return;
	}
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoBehaviour_t12_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern MethodInfo MonoBehaviour_StartCoroutine_Auto_m5448_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5450_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_Auto_m5451_MethodInfo;


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern MethodInfo MonoBehaviour__ctor_m130_MethodInfo;
extern "C" void MonoBehaviour__ctor_m130 (MonoBehaviour_t12 * __this, MethodInfo* method)
{
	typedef void (*MonoBehaviour__ctor_m130_ftn) (MonoBehaviour_t12 *);
	static MonoBehaviour__ctor_m130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour__ctor_m130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::.ctor()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StartCoroutine_m648_MethodInfo;
extern "C" Coroutine_t396 * MonoBehaviour_StartCoroutine_m648 (MonoBehaviour_t12 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Coroutine_t396 * L_0 = MonoBehaviour_StartCoroutine_Auto_m5448(__this, ___routine, /*hidden argument*/&MonoBehaviour_StartCoroutine_Auto_m5448_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t396 * MonoBehaviour_StartCoroutine_Auto_m5448 (MonoBehaviour_t12 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef Coroutine_t396 * (*MonoBehaviour_StartCoroutine_Auto_m5448_ftn) (MonoBehaviour_t12 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m5448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m5448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern MethodInfo MonoBehaviour_StartCoroutine_m1068_MethodInfo;
extern "C" Coroutine_t396 * MonoBehaviour_StartCoroutine_m1068 (MonoBehaviour_t12 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method)
{
	typedef Coroutine_t396 * (*MonoBehaviour_StartCoroutine_m1068_ftn) (MonoBehaviour_t12 *, String_t*, Object_t *);
	static MonoBehaviour_StartCoroutine_m1068_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_m1068_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)");
	return _il2cpp_icall_func(__this, ___methodName, ___value);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StopCoroutine_m5449_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m5449 (MonoBehaviour_t12 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5450(__this, ___routine, /*hidden argument*/&MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5450_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern MethodInfo MonoBehaviour_StopCoroutine_m2673_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m2673 (MonoBehaviour_t12 * __this, Coroutine_t396 * ___routine, MethodInfo* method)
{
	{
		MonoBehaviour_StopCoroutine_Auto_m5451(__this, ___routine, /*hidden argument*/&MonoBehaviour_StopCoroutine_Auto_m5451_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5450 (MonoBehaviour_t12 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5450_ftn) (MonoBehaviour_t12 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5450_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m5451 (MonoBehaviour_t12 * __this, Coroutine_t396 * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m5451_ftn) (MonoBehaviour_t12 *, Coroutine_t396 *);
	static MonoBehaviour_StopCoroutine_Auto_m5451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m5451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchPhase_t1104_il2cpp_TypeInfo;
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IMECompositionMode_t1105_il2cpp_TypeInfo;
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Touch_t319_il2cpp_TypeInfo;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"



// System.Int32 UnityEngine.Touch::get_fingerId()
extern MethodInfo Touch_get_fingerId_m2349_MethodInfo;
extern "C" int32_t Touch_get_fingerId_m2349 (Touch_t319 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern MethodInfo Touch_get_position_m2351_MethodInfo;
extern "C" Vector2_t32  Touch_get_position_m2351 (Touch_t319 * __this, MethodInfo* method)
{
	{
		Vector2_t32  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern MethodInfo Touch_get_phase_m2350_MethodInfo;
extern "C" int32_t Touch_get_phase_m2350 (Touch_t319 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t319_marshal(const Touch_t319& unmarshaled, Touch_t319_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t319_marshal_back(const Touch_t319_marshaled& marshaled, Touch_t319& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t319_marshal_cleanup(Touch_t319_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Input_t145_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

extern MethodInfo Input_get_touchSupported_m2392_MethodInfo;
extern MethodInfo Input_INTERNAL_set_compositionCursorPos_m5454_MethodInfo;
extern MethodInfo Input_GetKeyDownInt_m5453_MethodInfo;


// System.Void UnityEngine.Input::.cctor()
extern MethodInfo Input__cctor_m5452_MethodInfo;
extern "C" void Input__cctor_m5452 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C" bool Input_GetKeyDownInt_m5453 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	typedef bool (*Input_GetKeyDownInt_m5453_ftn) (int32_t);
	static Input_GetKeyDownInt_m5453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyDownInt_m5453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyDownInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
extern MethodInfo Input_GetAxis_m1035_MethodInfo;
extern "C" float Input_GetAxis_m1035 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxis_m1035_ftn) (String_t*);
	static Input_GetAxis_m1035_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxis_m1035_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern MethodInfo Input_GetAxisRaw_m2375_MethodInfo;
extern "C" float Input_GetAxisRaw_m2375 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m2375_ftn) (String_t*);
	static Input_GetAxisRaw_m2375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m2375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern MethodInfo Input_GetButtonDown_m2374_MethodInfo;
extern "C" bool Input_GetButtonDown_m2374 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m2374_ftn) (String_t*);
	static Input_GetButtonDown_m2374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m2374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern MethodInfo Input_GetKeyDown_m661_MethodInfo;
extern "C" bool Input_GetKeyDown_m661 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t145_il2cpp_TypeInfo));
		bool L_0 = Input_GetKeyDownInt_m5453(NULL /*static, unused*/, ___key, /*hidden argument*/&Input_GetKeyDownInt_m5453_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern MethodInfo Input_GetMouseButton_m1034_MethodInfo;
extern "C" bool Input_GetMouseButton_m1034 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m1034_ftn) (int32_t);
	static Input_GetMouseButton_m1034_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m1034_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern MethodInfo Input_GetMouseButtonDown_m1054_MethodInfo;
extern "C" bool Input_GetMouseButtonDown_m1054 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m1054_ftn) (int32_t);
	static Input_GetMouseButtonDown_m1054_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m1054_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern MethodInfo Input_GetMouseButtonUp_m2353_MethodInfo;
extern "C" bool Input_GetMouseButtonUp_m2353 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m2353_ftn) (int32_t);
	static Input_GetMouseButtonUp_m2353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m2353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern MethodInfo Input_get_mousePosition_m1047_MethodInfo;
extern "C" Vector3_t54  Input_get_mousePosition_m1047 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t54  (*Input_get_mousePosition_m1047_ftn) ();
	static Input_get_mousePosition_m1047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m1047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Input::get_mouseScrollDelta()
extern MethodInfo Input_get_mouseScrollDelta_m2355_MethodInfo;
extern "C" Vector3_t54  Input_get_mouseScrollDelta_m2355 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t54  (*Input_get_mouseScrollDelta_m2355_ftn) ();
	static Input_get_mouseScrollDelta_m2355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m2355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern MethodInfo Input_get_mousePresent_m2373_MethodInfo;
extern "C" bool Input_get_mousePresent_m2373 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t145_il2cpp_TypeInfo));
		bool L_0 = Input_get_touchSupported_m2392(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchSupported_m2392_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern MethodInfo Input_GetTouch_m2393_MethodInfo;
extern "C" Touch_t319  Input_GetTouch_m2393 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	typedef Touch_t319  (*Input_GetTouch_m2393_ftn) (int32_t);
	static Input_GetTouch_m2393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m2393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern MethodInfo Input_get_touchCount_m2394_MethodInfo;
extern "C" int32_t Input_get_touchCount_m2394 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m2394_ftn) ();
	static Input_get_touchCount_m2394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m2394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m2392 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern MethodInfo Input_set_imeCompositionMode_m2649_MethodInfo;
extern "C" void Input_set_imeCompositionMode_m2649 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m2649_ftn) (int32_t);
	static Input_set_imeCompositionMode_m2649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m2649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern MethodInfo Input_get_compositionString_m2577_MethodInfo;
extern "C" String_t* Input_get_compositionString_m2577 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2577_ftn) ();
	static Input_get_compositionString_m2577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m5454 (Object_t * __this /* static, unused */, Vector2_t32 * ___value, MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m5454_ftn) (Vector2_t32 *);
	static Input_INTERNAL_set_compositionCursorPos_m5454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m5454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern MethodInfo Input_set_compositionCursorPos_m2637_MethodInfo;
extern "C" void Input_set_compositionCursorPos_m2637 (Object_t * __this /* static, unused */, Vector2_t32  ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t145_il2cpp_TypeInfo));
		Input_INTERNAL_set_compositionCursorPos_m5454(NULL /*static, unused*/, (&___value), /*hidden argument*/&Input_INTERNAL_set_compositionCursorPos_m5454_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Object_t50_il2cpp_TypeInfo;

// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.ReferenceData
#include "UnityEngine_UnityEngine_ReferenceData.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo ReferenceData_t1032_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t522_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo Object_CompareBaseObjects_m5456_MethodInfo;
extern MethodInfo Object_GetInstanceID_m590_MethodInfo;
extern MethodInfo Object_CompareBaseObjectsInternal_m5457_MethodInfo;
extern MethodInfo Object_INTERNAL_CALL_Internal_InstantiateSingle_m5459_MethodInfo;
extern MethodInfo Object_CheckNullArgument_m5460_MethodInfo;
extern MethodInfo Object_Internal_InstantiateSingle_m5458_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2758_MethodInfo;
extern MethodInfo Object_Destroy_m5461_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m5462_MethodInfo;
extern MethodInfo Object_DestroyObject_m5463_MethodInfo;


// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m5455 (Object_t50 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern MethodInfo Object_Equals_m229_MethodInfo;
extern "C" bool Object_Equals_m229 (Object_t50 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		bool L_0 = Object_CompareBaseObjects_m5456(NULL /*static, unused*/, __this, ((Object_t50 *)IsInst(___o, InitializedTypeInfo(&Object_t50_il2cpp_TypeInfo))), /*hidden argument*/&Object_CompareBaseObjects_m5456_MethodInfo);
		return L_0;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern MethodInfo Object_GetHashCode_m230_MethodInfo;
extern "C" int32_t Object_GetHashCode_m230 (Object_t50 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m590(__this, /*hidden argument*/&Object_GetInstanceID_m590_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m5456 (Object_t * __this /* static, unused */, Object_t50 * ___lhs, Object_t50 * ___rhs, MethodInfo* method)
{
	{
		bool L_0 = Object_CompareBaseObjectsInternal_m5457(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&Object_CompareBaseObjectsInternal_m5457_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjectsInternal(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjectsInternal_m5457 (Object_t * __this /* static, unused */, Object_t50 * ___lhs, Object_t50 * ___rhs, MethodInfo* method)
{
	typedef bool (*Object_CompareBaseObjectsInternal_m5457_ftn) (Object_t50 *, Object_t50 *);
	static Object_CompareBaseObjectsInternal_m5457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_CompareBaseObjectsInternal_m5457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::CompareBaseObjectsInternal(UnityEngine.Object,UnityEngine.Object)");
	return _il2cpp_icall_func(___lhs, ___rhs);
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m590 (Object_t50 * __this, MethodInfo* method)
{
	{
		ReferenceData_t1032 * L_0 = &(__this->___m_UnityRuntimeReferenceData_0);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___instanceID_0);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t50 * Object_Internal_InstantiateSingle_m5458 (Object_t * __this /* static, unused */, Object_t50 * ___data, Vector3_t54  ___pos, Quaternion_t55  ___rot, MethodInfo* method)
{
	{
		Object_t50 * L_0 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m5459(NULL /*static, unused*/, ___data, (&___pos), (&___rot), /*hidden argument*/&Object_INTERNAL_CALL_Internal_InstantiateSingle_m5459_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t50 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m5459 (Object_t * __this /* static, unused */, Object_t50 * ___data, Vector3_t54 * ___pos, Quaternion_t55 * ___rot, MethodInfo* method)
{
	typedef Object_t50 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m5459_ftn) (Object_t50 *, Vector3_t54 *, Quaternion_t55 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m5459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m5459_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern MethodInfo Object_Instantiate_m656_MethodInfo;
extern "C" Object_t50 * Object_Instantiate_m656 (Object_t * __this /* static, unused */, Object_t50 * ___original, Vector3_t54  ___position, Quaternion_t55  ___rotation, MethodInfo* method)
{
	{
		Object_CheckNullArgument_m5460(NULL /*static, unused*/, ___original, (String_t*) &_stringLiteral935, /*hidden argument*/&Object_CheckNullArgument_m5460_MethodInfo);
		Object_t50 * L_0 = Object_Internal_InstantiateSingle_m5458(NULL /*static, unused*/, ___original, ___position, ___rotation, /*hidden argument*/&Object_Internal_InstantiateSingle_m5458_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m5460 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method)
{
	{
		if (___arg)
		{
			goto IL_000d;
		}
	}
	{
		ArgumentException_t522 * L_0 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_0, ___message, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000d:
	{
		return;
	}
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m5461 (Object_t * __this /* static, unused */, Object_t50 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_Destroy_m5461_ftn) (Object_t50 *, float);
	static Object_Destroy_m5461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m5461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern MethodInfo Object_Destroy_m167_MethodInfo;
extern "C" void Object_Destroy_m167 (Object_t * __this /* static, unused */, Object_t50 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_Destroy_m5461(NULL /*static, unused*/, ___obj, V_0, /*hidden argument*/&Object_Destroy_m5461_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m5462 (Object_t * __this /* static, unused */, Object_t50 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m5462_ftn) (Object_t50 *, bool);
	static Object_DestroyImmediate_m5462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m5462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern MethodInfo Object_DestroyImmediate_m174_MethodInfo;
extern "C" void Object_DestroyImmediate_m174 (Object_t * __this /* static, unused */, Object_t50 * ___obj, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_DestroyImmediate_m5462(NULL /*static, unused*/, ___obj, V_0, /*hidden argument*/&Object_DestroyImmediate_m5462_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Object::get_name()
extern MethodInfo Object_get_name_m618_MethodInfo;
extern "C" String_t* Object_get_name_m618 (Object_t50 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m618_ftn) (Object_t50 *);
	static Object_get_name_m618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern MethodInfo Object_set_name_m592_MethodInfo;
extern "C" void Object_set_name_m592 (Object_t50 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*Object_set_name_m592_ftn) (Object_t50 *, String_t*);
	static Object_set_name_m592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m592_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern MethodInfo Object_DontDestroyOnLoad_m681_MethodInfo;
extern "C" void Object_DontDestroyOnLoad_m681 (Object_t * __this /* static, unused */, Object_t50 * ___target, MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m681_ftn) (Object_t50 *);
	static Object_DontDestroyOnLoad_m681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern MethodInfo Object_set_hideFlags_m172_MethodInfo;
extern "C" void Object_set_hideFlags_m172 (Object_t50 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m172_ftn) (Object_t50 *, int32_t);
	static Object_set_hideFlags_m172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C" void Object_DestroyObject_m5463 (Object_t * __this /* static, unused */, Object_t50 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_DestroyObject_m5463_ftn) (Object_t50 *, float);
	static Object_DestroyObject_m5463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyObject_m5463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern MethodInfo Object_DestroyObject_m657_MethodInfo;
extern "C" void Object_DestroyObject_m657 (Object_t * __this /* static, unused */, Object_t50 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_DestroyObject_m5463(NULL /*static, unused*/, ___obj, V_0, /*hidden argument*/&Object_DestroyObject_m5463_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Object::ToString()
extern MethodInfo Object_ToString_m231_MethodInfo;
extern "C" String_t* Object_ToString_m231 (Object_t50 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m231_ftn) (Object_t50 *);
	static Object_ToString_m231_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m231_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern MethodInfo Object_op_Implicit_m173_MethodInfo;
extern "C" bool Object_op_Implicit_m173 (Object_t * __this /* static, unused */, Object_t50 * ___exists, MethodInfo* method)
{
	{
		bool L_0 = Object_CompareBaseObjects_m5456(NULL /*static, unused*/, ___exists, (Object_t50 *)NULL, /*hidden argument*/&Object_CompareBaseObjects_m5456_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Equality_m164_MethodInfo;
extern "C" bool Object_op_Equality_m164 (Object_t * __this /* static, unused */, Object_t50 * ___x, Object_t50 * ___y, MethodInfo* method)
{
	{
		bool L_0 = Object_CompareBaseObjects_m5456(NULL /*static, unused*/, ___x, ___y, /*hidden argument*/&Object_CompareBaseObjects_m5456_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Inequality_m166_MethodInfo;
extern "C" bool Object_op_Inequality_m166 (Object_t * __this /* static, unused */, Object_t50 * ___x, Object_t50 * ___y, MethodInfo* method)
{
	{
		bool L_0 = Object_CompareBaseObjects_m5456(NULL /*static, unused*/, ___x, ___y, /*hidden argument*/&Object_CompareBaseObjects_m5456_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t50_marshal(const Object_t50& unmarshaled, Object_t50_marshaled& marshaled)
{
	marshaled.___m_UnityRuntimeReferenceData_0 = unmarshaled.___m_UnityRuntimeReferenceData_0;
}
void Object_t50_marshal_back(const Object_t50_marshaled& marshaled, Object_t50& unmarshaled)
{
	unmarshaled.___m_UnityRuntimeReferenceData_0 = marshaled.___m_UnityRuntimeReferenceData_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t50_marshal_cleanup(Object_t50_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Component_t142_il2cpp_TypeInfo;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern Il2CppType Component_t142_0_0_0;
extern MethodInfo Component_InternalGetTransform_m5464_MethodInfo;
extern MethodInfo Component_InternalGetGameObject_m5465_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo Component_GetComponentsForListInternal_m5466_MethodInfo;


// UnityEngine.Transform UnityEngine.Component::get_transform()
extern MethodInfo Component_get_transform_m534_MethodInfo;
extern "C" Transform_t85 * Component_get_transform_m534 (Component_t142 * __this, MethodInfo* method)
{
	{
		Transform_t85 * L_0 = Component_InternalGetTransform_m5464(__this, /*hidden argument*/&Component_InternalGetTransform_m5464_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Component::InternalGetTransform()
extern "C" Transform_t85 * Component_InternalGetTransform_m5464 (Component_t142 * __this, MethodInfo* method)
{
	typedef Transform_t85 * (*Component_InternalGetTransform_m5464_ftn) (Component_t142 *);
	static Component_InternalGetTransform_m5464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_InternalGetTransform_m5464_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::InternalGetTransform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rigidbody UnityEngine.Component::get_rigidbody()
extern MethodInfo Component_get_rigidbody_m1032_MethodInfo;
extern "C" Rigidbody_t241 * Component_get_rigidbody_m1032 (Component_t142 * __this, MethodInfo* method)
{
	typedef Rigidbody_t241 * (*Component_get_rigidbody_m1032_ftn) (Component_t142 *);
	static Component_get_rigidbody_m1032_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_rigidbody_m1032_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_rigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Component::get_camera()
extern MethodInfo Component_get_camera_m215_MethodInfo;
extern "C" Camera_t56 * Component_get_camera_m215 (Component_t142 * __this, MethodInfo* method)
{
	typedef Camera_t56 * (*Component_get_camera_m215_ftn) (Component_t142 *);
	static Component_get_camera_m215_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_camera_m215_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_camera()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Renderer UnityEngine.Component::get_renderer()
extern MethodInfo Component_get_renderer_m530_MethodInfo;
extern "C" Renderer_t139 * Component_get_renderer_m530 (Component_t142 * __this, MethodInfo* method)
{
	typedef Renderer_t139 * (*Component_get_renderer_m530_ftn) (Component_t142 *);
	static Component_get_renderer_m530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_renderer_m530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_renderer()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern MethodInfo Component_get_gameObject_m562_MethodInfo;
extern "C" GameObject_t49 * Component_get_gameObject_m562 (Component_t142 * __this, MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_InternalGetGameObject_m5465(__this, /*hidden argument*/&Component_InternalGetGameObject_m5465_MethodInfo);
		return L_0;
	}
}
// UnityEngine.GameObject UnityEngine.Component::InternalGetGameObject()
extern "C" GameObject_t49 * Component_InternalGetGameObject_m5465 (Component_t142 * __this, MethodInfo* method)
{
	typedef GameObject_t49 * (*Component_InternalGetGameObject_m5465_ftn) (Component_t142 *);
	static Component_InternalGetGameObject_m5465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_InternalGetGameObject_m5465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::InternalGetGameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern MethodInfo Component_GetComponent_m578_MethodInfo;
extern "C" Component_t142 * Component_GetComponent_m578 (Component_t142 * __this, Type_t * ___type, MethodInfo* method)
{
	typedef Component_t142 * (*Component_GetComponent_m578_ftn) (Component_t142 *, Type_t *);
	static Component_GetComponent_m578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponent_m578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Type,System.Boolean,System.Boolean,System.Object)
extern "C" void Component_GetComponentsForListInternal_m5466 (Component_t142 * __this, Type_t * ___searchType, Type_t * ___listElementType, bool ___recursive, bool ___includeInactive, Object_t * ___resultList, MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m5466_ftn) (Component_t142 *, Type_t *, Type_t *, bool, bool, Object_t *);
	static Component_GetComponentsForListInternal_m5466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m5466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Type,System.Boolean,System.Boolean,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___listElementType, ___recursive, ___includeInactive, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern MethodInfo Component_GetComponents_m2456_MethodInfo;
extern "C" void Component_GetComponents_m2456 (Component_t142 * __this, Type_t * ___type, List_1_t458 * ___results, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Component_t142_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		Component_GetComponentsForListInternal_m5466(__this, ___type, L_0, 0, 1, ___results, /*hidden argument*/&Component_GetComponentsForListInternal_m5466_MethodInfo);
		return;
	}
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t1106_il2cpp_TypeInfo;
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo Transform_GetChild_m2793_MethodInfo;
extern MethodInfo Transform_get_childCount_m2796_MethodInfo;


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern MethodInfo Enumerator__ctor_m5467_MethodInfo;
extern "C" void Enumerator__ctor_m5467 (Enumerator_t1106 * __this, Transform_t85 * ___outer, MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___outer_0 = ___outer;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m5468_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m5468 (Enumerator_t1106 * __this, MethodInfo* method)
{
	{
		Transform_t85 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t85 * L_2 = Transform_GetChild_m2793(L_0, L_1, /*hidden argument*/&Transform_GetChild_m2793_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m5469_MethodInfo;
extern "C" bool Enumerator_MoveNext_m5469 (Enumerator_t1106 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t85 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m2796(L_0, /*hidden argument*/&Transform_get_childCount_m2796_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		return ((((int32_t)V_1) < ((int32_t)V_0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_t85_il2cpp_TypeInfo;

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
extern TypeInfo RectTransform_t354_il2cpp_TypeInfo;
extern MethodInfo Transform_INTERNAL_get_position_m5470_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_position_m5471_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localPosition_m5472_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localPosition_m5473_MethodInfo;
extern MethodInfo Transform_get_rotation_m555_MethodInfo;
extern MethodInfo Transform_set_rotation_m556_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localEulerAngles_m5474_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_rotation_m5475_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_rotation_m5476_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localRotation_m5477_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localRotation_m5478_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localScale_m5479_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localScale_m5480_MethodInfo;
extern MethodInfo Transform_get_parentInternal_m5481_MethodInfo;
extern MethodInfo Transform_set_parentInternal_m5482_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_worldToLocalMatrix_m5484_MethodInfo;
extern MethodInfo Transform_SetParent_m5483_MethodInfo;
extern MethodInfo Transform_LookAt_m5485_MethodInfo;
extern MethodInfo Transform_get_position_m535_MethodInfo;
extern MethodInfo Transform_LookAt_m5486_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_LookAt_m5487_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformDirection_m5488_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformPoint_m5489_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_InverseTransformPoint_m5490_MethodInfo;


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m5470 (Transform_t85 * __this, Vector3_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m5470_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_get_position_m5470_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m5470_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m5471 (Transform_t85 * __this, Vector3_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m5471_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_set_position_m5471_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m5471_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t54  Transform_get_position_m535 (Transform_t85 * __this, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m5470(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_position_m5470_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern MethodInfo Transform_set_position_m551_MethodInfo;
extern "C" void Transform_set_position_m551 (Transform_t85 * __this, Vector3_t54  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m5471(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_position_m5471_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m5472 (Transform_t85 * __this, Vector3_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m5472_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_get_localPosition_m5472_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m5472_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m5473 (Transform_t85 * __this, Vector3_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m5473_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_set_localPosition_m5473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m5473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern MethodInfo Transform_get_localPosition_m666_MethodInfo;
extern "C" Vector3_t54  Transform_get_localPosition_m666 (Transform_t85 * __this, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m5472(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localPosition_m5472_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern MethodInfo Transform_set_localPosition_m641_MethodInfo;
extern "C" void Transform_set_localPosition_m641 (Transform_t85 * __this, Vector3_t54  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m5473(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localPosition_m5473_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern MethodInfo Transform_get_eulerAngles_m552_MethodInfo;
extern "C" Vector3_t54  Transform_get_eulerAngles_m552 (Transform_t85 * __this, MethodInfo* method)
{
	Quaternion_t55  V_0 = {0};
	{
		Quaternion_t55  L_0 = Transform_get_rotation_m555(__this, /*hidden argument*/&Transform_get_rotation_m555_MethodInfo);
		V_0 = L_0;
		Vector3_t54  L_1 = Quaternion_get_eulerAngles_m5296((&V_0), /*hidden argument*/&Quaternion_get_eulerAngles_m5296_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern MethodInfo Transform_set_eulerAngles_m553_MethodInfo;
extern "C" void Transform_set_eulerAngles_m553 (Transform_t85 * __this, Vector3_t54  ___value, MethodInfo* method)
{
	{
		Quaternion_t55  L_0 = Quaternion_Euler_m5297(NULL /*static, unused*/, ___value, /*hidden argument*/&Quaternion_Euler_m5297_MethodInfo);
		Transform_set_rotation_m556(__this, L_0, /*hidden argument*/&Transform_set_rotation_m556_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localEulerAngles(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localEulerAngles_m5474 (Transform_t85 * __this, Vector3_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localEulerAngles_m5474_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_get_localEulerAngles_m5474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localEulerAngles_m5474_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localEulerAngles(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern MethodInfo Transform_get_localEulerAngles_m673_MethodInfo;
extern "C" Vector3_t54  Transform_get_localEulerAngles_m673 (Transform_t85 * __this, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		Transform_INTERNAL_get_localEulerAngles_m5474(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localEulerAngles_m5474_MethodInfo);
		return V_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern MethodInfo Transform_get_right_m926_MethodInfo;
extern "C" Vector3_t54  Transform_get_right_m926 (Transform_t85 * __this, MethodInfo* method)
{
	{
		Quaternion_t55  L_0 = Transform_get_rotation_m555(__this, /*hidden argument*/&Transform_get_rotation_m555_MethodInfo);
		Vector3_t54  L_1 = Vector3_get_right_m911(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m911_MethodInfo);
		Vector3_t54  L_2 = Quaternion_op_Multiply_m1036(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m1036_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern MethodInfo Transform_get_up_m536_MethodInfo;
extern "C" Vector3_t54  Transform_get_up_m536 (Transform_t85 * __this, MethodInfo* method)
{
	{
		Quaternion_t55  L_0 = Transform_get_rotation_m555(__this, /*hidden argument*/&Transform_get_rotation_m555_MethodInfo);
		Vector3_t54  L_1 = Vector3_get_up_m912(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m912_MethodInfo);
		Vector3_t54  L_2 = Quaternion_op_Multiply_m1036(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m1036_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern MethodInfo Transform_get_forward_m635_MethodInfo;
extern "C" Vector3_t54  Transform_get_forward_m635 (Transform_t85 * __this, MethodInfo* method)
{
	{
		Quaternion_t55  L_0 = Transform_get_rotation_m555(__this, /*hidden argument*/&Transform_get_rotation_m555_MethodInfo);
		Vector3_t54  L_1 = Vector3_get_forward_m910(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m910_MethodInfo);
		Vector3_t54  L_2 = Quaternion_op_Multiply_m1036(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m1036_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m5475 (Transform_t85 * __this, Quaternion_t55 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m5475_ftn) (Transform_t85 *, Quaternion_t55 *);
	static Transform_INTERNAL_get_rotation_m5475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m5475_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m5476 (Transform_t85 * __this, Quaternion_t55 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m5476_ftn) (Transform_t85 *, Quaternion_t55 *);
	static Transform_INTERNAL_set_rotation_m5476_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m5476_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t55  Transform_get_rotation_m555 (Transform_t85 * __this, MethodInfo* method)
{
	Quaternion_t55  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m5475(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_rotation_m5475_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m556 (Transform_t85 * __this, Quaternion_t55  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m5476(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_rotation_m5476_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m5477 (Transform_t85 * __this, Quaternion_t55 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m5477_ftn) (Transform_t85 *, Quaternion_t55 *);
	static Transform_INTERNAL_get_localRotation_m5477_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m5477_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m5478 (Transform_t85 * __this, Quaternion_t55 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m5478_ftn) (Transform_t85 *, Quaternion_t55 *);
	static Transform_INTERNAL_set_localRotation_m5478_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m5478_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern MethodInfo Transform_get_localRotation_m649_MethodInfo;
extern "C" Quaternion_t55  Transform_get_localRotation_m649 (Transform_t85 * __this, MethodInfo* method)
{
	Quaternion_t55  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m5477(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localRotation_m5477_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern MethodInfo Transform_set_localRotation_m642_MethodInfo;
extern "C" void Transform_set_localRotation_m642 (Transform_t85 * __this, Quaternion_t55  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m5478(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localRotation_m5478_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m5479 (Transform_t85 * __this, Vector3_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m5479_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_get_localScale_m5479_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m5479_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m5480 (Transform_t85 * __this, Vector3_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m5480_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_set_localScale_m5480_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m5480_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern MethodInfo Transform_get_localScale_m930_MethodInfo;
extern "C" Vector3_t54  Transform_get_localScale_m930 (Transform_t85 * __this, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m5479(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localScale_m5479_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern MethodInfo Transform_set_localScale_m931_MethodInfo;
extern "C" void Transform_set_localScale_m931 (Transform_t85 * __this, Vector3_t54  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m5480(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localScale_m5480_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern MethodInfo Transform_get_parent_m638_MethodInfo;
extern "C" Transform_t85 * Transform_get_parent_m638 (Transform_t85 * __this, MethodInfo* method)
{
	{
		Transform_t85 * L_0 = Transform_get_parentInternal_m5481(__this, /*hidden argument*/&Transform_get_parentInternal_m5481_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern MethodInfo Transform_set_parent_m2669_MethodInfo;
extern "C" void Transform_set_parent_m2669 (Transform_t85 * __this, Transform_t85 * ___value, MethodInfo* method)
{
	{
		if (!((RectTransform_t354 *)IsInst(__this, InitializedTypeInfo(&RectTransform_t354_il2cpp_TypeInfo))))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m979(NULL /*static, unused*/, (String_t*) &_stringLiteral936, __this, /*hidden argument*/&Debug_LogWarning_m979_MethodInfo);
	}

IL_0016:
	{
		Transform_set_parentInternal_m5482(__this, ___value, /*hidden argument*/&Transform_set_parentInternal_m5482_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t85 * Transform_get_parentInternal_m5481 (Transform_t85 * __this, MethodInfo* method)
{
	typedef Transform_t85 * (*Transform_get_parentInternal_m5481_ftn) (Transform_t85 *);
	static Transform_get_parentInternal_m5481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m5481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m5482 (Transform_t85 * __this, Transform_t85 * ___value, MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m5482_ftn) (Transform_t85 *, Transform_t85 *);
	static Transform_set_parentInternal_m5482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m5482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern MethodInfo Transform_SetParent_m2622_MethodInfo;
extern "C" void Transform_SetParent_m2622 (Transform_t85 * __this, Transform_t85 * ___parent, MethodInfo* method)
{
	{
		Transform_SetParent_m5483(__this, ___parent, 1, /*hidden argument*/&Transform_SetParent_m5483_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m5483 (Transform_t85 * __this, Transform_t85 * ___parent, bool ___worldPositionStays, MethodInfo* method)
{
	typedef void (*Transform_SetParent_m5483_ftn) (Transform_t85 *, Transform_t85 *, bool);
	static Transform_SetParent_m5483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m5483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m5484 (Transform_t85 * __this, Matrix4x4_t53 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m5484_ftn) (Transform_t85 *, Matrix4x4_t53 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m5484_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m5484_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern MethodInfo Transform_get_worldToLocalMatrix_m2697_MethodInfo;
extern "C" Matrix4x4_t53  Transform_get_worldToLocalMatrix_m2697 (Transform_t85 * __this, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m5484(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_worldToLocalMatrix_m5484_MethodInfo);
		return V_0;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern MethodInfo Transform_LookAt_m1039_MethodInfo;
extern "C" void Transform_LookAt_m1039 (Transform_t85 * __this, Transform_t85 * ___target, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		Vector3_t54  L_0 = Vector3_get_up_m912(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m912_MethodInfo);
		V_0 = L_0;
		Transform_LookAt_m5485(__this, ___target, V_0, /*hidden argument*/&Transform_LookAt_m5485_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m5485 (Transform_t85 * __this, Transform_t85 * ___target, Vector3_t54  ___worldUp, MethodInfo* method)
{
	{
		bool L_0 = Object_op_Implicit_m173(NULL /*static, unused*/, ___target, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		NullCheck(___target);
		Vector3_t54  L_1 = Transform_get_position_m535(___target, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Transform_LookAt_m5486(__this, L_1, ___worldUp, /*hidden argument*/&Transform_LookAt_m5486_MethodInfo);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m5486 (Transform_t85 * __this, Vector3_t54  ___worldPosition, Vector3_t54  ___worldUp, MethodInfo* method)
{
	{
		Transform_INTERNAL_CALL_LookAt_m5487(NULL /*static, unused*/, __this, (&___worldPosition), (&___worldUp), /*hidden argument*/&Transform_INTERNAL_CALL_LookAt_m5487_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m5487 (Object_t * __this /* static, unused */, Transform_t85 * ___self, Vector3_t54 * ___worldPosition, Vector3_t54 * ___worldUp, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_LookAt_m5487_ftn) (Transform_t85 *, Vector3_t54 *, Vector3_t54 *);
	static Transform_INTERNAL_CALL_LookAt_m5487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_LookAt_m5487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___worldPosition, ___worldUp);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern MethodInfo Transform_TransformDirection_m1061_MethodInfo;
extern "C" Vector3_t54  Transform_TransformDirection_m1061 (Transform_t85 * __this, Vector3_t54  ___direction, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Transform_INTERNAL_CALL_TransformDirection_m5488(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/&Transform_INTERNAL_CALL_TransformDirection_m5488_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t54  Transform_INTERNAL_CALL_TransformDirection_m5488 (Object_t * __this /* static, unused */, Transform_t85 * ___self, Vector3_t54 * ___direction, MethodInfo* method)
{
	typedef Vector3_t54  (*Transform_INTERNAL_CALL_TransformDirection_m5488_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_CALL_TransformDirection_m5488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m5488_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_TransformPoint_m2715_MethodInfo;
extern "C" Vector3_t54  Transform_TransformPoint_m2715 (Transform_t85 * __this, Vector3_t54  ___position, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Transform_INTERNAL_CALL_TransformPoint_m5489(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_TransformPoint_m5489_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t54  Transform_INTERNAL_CALL_TransformPoint_m5489 (Object_t * __this /* static, unused */, Transform_t85 * ___self, Vector3_t54 * ___position, MethodInfo* method)
{
	typedef Vector3_t54  (*Transform_INTERNAL_CALL_TransformPoint_m5489_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_CALL_TransformPoint_m5489_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m5489_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_InverseTransformPoint_m1062_MethodInfo;
extern "C" Vector3_t54  Transform_InverseTransformPoint_m1062 (Transform_t85 * __this, Vector3_t54  ___position, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m5490(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_InverseTransformPoint_m5490_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t54  Transform_INTERNAL_CALL_InverseTransformPoint_m5490 (Object_t * __this /* static, unused */, Transform_t85 * ___self, Vector3_t54 * ___position, MethodInfo* method)
{
	typedef Vector3_t54  (*Transform_INTERNAL_CALL_InverseTransformPoint_m5490_ftn) (Transform_t85 *, Vector3_t54 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m5490_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m5490_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m2796 (Transform_t85 * __this, MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m2796_ftn) (Transform_t85 *);
	static Transform_get_childCount_m2796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m2796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern MethodInfo Transform_SetAsFirstSibling_m2623_MethodInfo;
extern "C" void Transform_SetAsFirstSibling_m2623 (Transform_t85 * __this, MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m2623_ftn) (Transform_t85 *);
	static Transform_SetAsFirstSibling_m2623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m2623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern MethodInfo Transform_GetEnumerator_m5491_MethodInfo;
extern "C" Object_t * Transform_GetEnumerator_m5491 (Transform_t85 * __this, MethodInfo* method)
{
	{
		Enumerator_t1106 * L_0 = (Enumerator_t1106 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t1106_il2cpp_TypeInfo));
		Enumerator__ctor_m5467(L_0, __this, /*hidden argument*/&Enumerator__ctor_m5467_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t85 * Transform_GetChild_m2793 (Transform_t85 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Transform_t85 * (*Transform_GetChild_m2793_ftn) (Transform_t85 *, int32_t);
	static Transform_GetChild_m2793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m2793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Time_t1107_il2cpp_TypeInfo;
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
extern MethodInfo Time_get_timeSinceLevelLoad_m568_MethodInfo;
extern "C" float Time_get_timeSinceLevelLoad_m568 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_timeSinceLevelLoad_m568_ftn) ();
	static Time_get_timeSinceLevelLoad_m568_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeSinceLevelLoad_m568_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeSinceLevelLoad()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern MethodInfo Time_get_deltaTime_m190_MethodInfo;
extern "C" float Time_get_deltaTime_m190 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m190_ftn) ();
	static Time_get_deltaTime_m190_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m190_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern MethodInfo Time_get_unscaledTime_m2377_MethodInfo;
extern "C" float Time_get_unscaledTime_m2377 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m2377_ftn) ();
	static Time_get_unscaledTime_m2377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m2377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern MethodInfo Time_get_unscaledDeltaTime_m2422_MethodInfo;
extern "C" float Time_get_unscaledDeltaTime_m2422 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m2422_ftn) ();
	static Time_get_unscaledDeltaTime_m2422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m2422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Time::get_frameCount()
extern MethodInfo Time_get_frameCount_m928_MethodInfo;
extern "C" int32_t Time_get_frameCount_m928 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Time_get_frameCount_m928_ftn) ();
	static Time_get_frameCount_m928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_frameCount_m928_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern MethodInfo Time_get_realtimeSinceStartup_m1027_MethodInfo;
extern "C" float Time_get_realtimeSinceStartup_m1027 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_realtimeSinceStartup_m1027_ftn) ();
	static Time_get_realtimeSinceStartup_m1027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_realtimeSinceStartup_m1027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_realtimeSinceStartup()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Random_t1108_il2cpp_TypeInfo;
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"



// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern MethodInfo Random_Range_m212_MethodInfo;
extern "C" float Random_Range_m212 (Object_t * __this /* static, unused */, float ___min, float ___max, MethodInfo* method)
{
	typedef float (*Random_Range_m212_ftn) (float, float);
	static Random_Range_m212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Single UnityEngine.Random::get_value()
extern MethodInfo Random_get_value_m207_MethodInfo;
extern "C" float Random_get_value_m207 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Random_get_value_m207_ftn) ();
	static Random_get_value_m207_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_value_m207_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_value()");
	return _il2cpp_icall_func();
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo YieldInstruction_t1038_il2cpp_TypeInfo;



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m5492 (YieldInstruction_t1038 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t1038_marshal(const YieldInstruction_t1038& unmarshaled, YieldInstruction_t1038_marshaled& marshaled)
{
}
void YieldInstruction_t1038_marshal_back(const YieldInstruction_t1038_marshaled& marshaled, YieldInstruction_t1038& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t1038_marshal_cleanup(YieldInstruction_t1038_marshaled& marshaled)
{
}
// UnityEngine.Motion
#include "UnityEngine_UnityEngine_Motion.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Motion_t1009_il2cpp_TypeInfo;
// UnityEngine.Motion
#include "UnityEngine_UnityEngine_MotionMethodDeclarations.h"



// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_t357_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern MethodInfo UnityAction__ctor_m2586_MethodInfo;
extern "C" void UnityAction__ctor_m2586 (UnityAction_t357 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern MethodInfo UnityAction_Invoke_m2463_MethodInfo;
extern "C" void UnityAction_Invoke_m2463 (UnityAction_t357 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m2463((UnityAction_t357 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t357(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo UnityAction_BeginInvoke_m5493_MethodInfo;
extern "C" Object_t * UnityAction_BeginInvoke_m5493 (UnityAction_t357 * __this, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern MethodInfo UnityAction_EndInvoke_m5494_MethodInfo;
extern "C" void UnityAction_EndInvoke_m5494 (UnityAction_t357 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
