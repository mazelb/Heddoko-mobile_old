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
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t229_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// ShowFps
#include "AssemblyU2DUnityScript_ShowFps.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShowFps_t230_il2cpp_TypeInfo;
// ShowFps
#include "AssemblyU2DUnityScript_ShowFpsMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo TypeU5BU5D_t138_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo GUIText_t95_il2cpp_TypeInfo;
extern TypeInfo GameObject_t49_il2cpp_TypeInfo;
extern TypeInfo Vector3_t54_il2cpp_TypeInfo;
extern TypeInfo Vector2_t32_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t218_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
extern Il2CppType TypeU5BU5D_t138_0_0_0;
extern Il2CppType GUIText_t95_0_0_0;
extern MethodInfo MonoBehaviour__ctor_m130_MethodInfo;
extern MethodInfo Time_get_realtimeSinceStartup_m1027_MethodInfo;
extern MethodInfo Object_op_Implicit_m173_MethodInfo;
extern MethodInfo Component_get_gameObject_m562_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m174_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo GameObject__ctor_m596_MethodInfo;
extern MethodInfo Object_set_hideFlags_m172_MethodInfo;
extern MethodInfo GameObject_get_transform_m655_MethodInfo;
extern MethodInfo Vector3__ctor_m222_MethodInfo;
extern MethodInfo Transform_set_position_m551_MethodInfo;
extern MethodInfo GameObject_get_guiText_m1028_MethodInfo;
extern MethodInfo Vector2__ctor_m179_MethodInfo;
extern MethodInfo GUIText_set_pixelOffset_m1029_MethodInfo;
extern MethodInfo Mathf_Max_m915_MethodInfo;
extern MethodInfo Single_ToString_m1030_MethodInfo;
extern MethodInfo RuntimeServices_op_Addition_m929_MethodInfo;
extern MethodInfo GUIText_set_text_m1031_MethodInfo;


// System.Void ShowFps::.ctor()
extern MethodInfo ShowFps__ctor_m1001_MethodInfo;
extern "C" void ShowFps__ctor_m1001 (ShowFps_t230 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		__this->___updateInterval_2 = (1.0f);
		return;
	}
}
// System.Void ShowFps::Start()
extern MethodInfo ShowFps_Start_m1002_MethodInfo;
extern "C" void ShowFps_Start_m1002 (ShowFps_t230 * __this, MethodInfo* method)
{
	{
		float L_0 = Time_get_realtimeSinceStartup_m1027(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m1027_MethodInfo);
		__this->___lastInterval_3 = (((double)L_0));
		__this->___frames_4 = 0;
		return;
	}
}
// System.Void ShowFps::OnDisable()
extern MethodInfo ShowFps_OnDisable_m1003_MethodInfo;
extern "C" void ShowFps_OnDisable_m1003 (ShowFps_t230 * __this, MethodInfo* method)
{
	{
		GUIText_t95 * L_0 = (__this->___gui_1);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GUIText_t95 * L_2 = (__this->___gui_1);
		NullCheck(L_2);
		GameObject_t49 * L_3 = Component_get_gameObject_m562(L_2, /*hidden argument*/&Component_get_gameObject_m562_MethodInfo);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ShowFps::Update()
extern MethodInfo ShowFps_Update_m1004_MethodInfo;
extern TypeInfo* TypeU5BU5D_t138_il2cpp_TypeInfo_var;
extern "C" void ShowFps_Update_m1004 (ShowFps_t230 * __this, MethodInfo* method)
{
	static bool ShowFps_Update_m1004_init;
	if (!ShowFps_Update_m1004_init)
	{
		TypeU5BU5D_t138_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t138_0_0_0);
		ShowFps_Update_m1004_init = true;
	}
	float V_0 = 0.0f;
	GameObject_t49 * V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = (__this->___frames_4);
		__this->___frames_4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		float L_1 = Time_get_realtimeSinceStartup_m1027(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m1027_MethodInfo);
		V_0 = L_1;
		double L_2 = (__this->___lastInterval_3);
		float L_3 = (__this->___updateInterval_2);
		if ((((double)(((double)V_0))) <= ((double)((double)((double)L_2+(double)(((double)L_3)))))))
		{
			goto IL_0106;
		}
	}
	{
		GUIText_t95 * L_4 = (__this->___gui_1);
		bool L_5 = Object_op_Implicit_m173(NULL /*static, unused*/, L_4, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_5)
		{
			goto IL_0096;
		}
	}
	{
		TypeU5BU5D_t138* L_6 = ((TypeU5BU5D_t138*)SZArrayNew(TypeU5BU5D_t138_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_7 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&GUIText_t95_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 0)) = (Type_t *)L_7;
		GameObject_t49 * L_8 = (GameObject_t49 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t49_il2cpp_TypeInfo));
		GameObject__ctor_m596(L_8, (String_t*) &_stringLiteral329, L_6, /*hidden argument*/&GameObject__ctor_m596_MethodInfo);
		V_1 = L_8;
		NullCheck(V_1);
		Object_set_hideFlags_m172(V_1, ((int32_t)13), /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		NullCheck(V_1);
		Transform_t85 * L_9 = GameObject_get_transform_m655(V_1, /*hidden argument*/&GameObject_get_transform_m655_MethodInfo);
		Vector3_t54  L_10 = {0};
		Vector3__ctor_m222(&L_10, (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		NullCheck(L_9);
		Transform_set_position_m551(L_9, L_10, /*hidden argument*/&Transform_set_position_m551_MethodInfo);
		NullCheck(V_1);
		GUIText_t95 * L_11 = GameObject_get_guiText_m1028(V_1, /*hidden argument*/&GameObject_get_guiText_m1028_MethodInfo);
		__this->___gui_1 = L_11;
		GUIText_t95 * L_12 = (__this->___gui_1);
		Vector2_t32  L_13 = {0};
		Vector2__ctor_m179(&L_13, (((float)5)), (((float)((int32_t)55))), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		NullCheck(L_12);
		GUIText_set_pixelOffset_m1029(L_12, L_13, /*hidden argument*/&GUIText_set_pixelOffset_m1029_MethodInfo);
	}

IL_0096:
	{
		int32_t L_14 = (__this->___frames_4);
		double L_15 = (__this->___lastInterval_3);
		V_2 = (((float)((double)((double)(((double)L_14))/(double)((double)((double)(((double)V_0))-(double)L_15))))));
		float L_16 = Mathf_Max_m915(NULL /*static, unused*/, V_2, (1.0E-05f), /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		V_3 = ((float)((float)(1000.0f)/(float)L_16));
		GUIText_t95 * L_17 = (__this->___gui_1);
		String_t* L_18 = Single_ToString_m1030((&V_3), (String_t*) &_stringLiteral330, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		String_t* L_19 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_18, (String_t*) &_stringLiteral331, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_20 = Single_ToString_m1030((&V_2), (String_t*) &_stringLiteral332, /*hidden argument*/&Single_ToString_m1030_MethodInfo);
		String_t* L_21 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_22 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral333, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		NullCheck(L_17);
		GUIText_set_text_m1031(L_17, L_22, /*hidden argument*/&GUIText_set_text_m1031_MethodInfo);
		__this->___frames_4 = 0;
		__this->___lastInterval_3 = (((double)V_0));
	}

IL_0106:
	{
		return;
	}
}
// System.Void ShowFps::Main()
extern MethodInfo ShowFps_Main_m1005_MethodInfo;
extern "C" void ShowFps_Main_m1005 (ShowFps_t230 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// MouseOrbit
#include "AssemblyU2DUnityScript_MouseOrbit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MouseOrbit_t231_il2cpp_TypeInfo;
// MouseOrbit
#include "AssemblyU2DUnityScript_MouseOrbitMethodDeclarations.h"

// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern TypeInfo Input_t145_il2cpp_TypeInfo;
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern MethodInfo Component_get_transform_m534_MethodInfo;
extern MethodInfo Transform_get_eulerAngles_m552_MethodInfo;
extern MethodInfo Component_get_rigidbody_m1032_MethodInfo;
extern MethodInfo Rigidbody_set_freezeRotation_m1033_MethodInfo;
extern MethodInfo Input_GetMouseButton_m1034_MethodInfo;
extern MethodInfo Input_GetAxis_m1035_MethodInfo;
extern MethodInfo MouseOrbit_ClampAngle_m1009_MethodInfo;
extern MethodInfo Quaternion_Euler_m202_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m1036_MethodInfo;
extern MethodInfo Transform_get_position_m535_MethodInfo;
extern MethodInfo Vector3_op_Addition_m602_MethodInfo;
extern MethodInfo Transform_set_rotation_m556_MethodInfo;
extern MethodInfo Mathf_Clamp_m192_MethodInfo;


// System.Void MouseOrbit::.ctor()
extern MethodInfo MouseOrbit__ctor_m1006_MethodInfo;
extern "C" void MouseOrbit__ctor_m1006 (MouseOrbit_t231 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		__this->___distance_2 = (10.0f);
		__this->___xSpeed_3 = (250.0f);
		__this->___ySpeed_4 = (120.0f);
		__this->___yMinLimit_5 = ((int32_t)-20);
		__this->___yMaxLimit_6 = ((int32_t)80);
		return;
	}
}
// System.Void MouseOrbit::Start()
extern MethodInfo MouseOrbit_Start_m1007_MethodInfo;
extern "C" void MouseOrbit_Start_m1007 (MouseOrbit_t231 * __this, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		Transform_t85 * L_0 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_0);
		Vector3_t54  L_1 = Transform_get_eulerAngles_m552(L_0, /*hidden argument*/&Transform_get_eulerAngles_m552_MethodInfo);
		V_0 = L_1;
		NullCheck((&V_0));
		float L_2 = ((&V_0)->___y_2);
		__this->___x_7 = L_2;
		NullCheck((&V_0));
		float L_3 = ((&V_0)->___x_1);
		__this->___y_8 = L_3;
		Rigidbody_t241 * L_4 = Component_get_rigidbody_m1032(__this, /*hidden argument*/&Component_get_rigidbody_m1032_MethodInfo);
		bool L_5 = Object_op_Implicit_m173(NULL /*static, unused*/, L_4, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		Rigidbody_t241 * L_6 = Component_get_rigidbody_m1032(__this, /*hidden argument*/&Component_get_rigidbody_m1032_MethodInfo);
		NullCheck(L_6);
		Rigidbody_set_freezeRotation_m1033(L_6, 1, /*hidden argument*/&Rigidbody_set_freezeRotation_m1033_MethodInfo);
	}

IL_0042:
	{
		return;
	}
}
// System.Void MouseOrbit::LateUpdate()
extern MethodInfo MouseOrbit_LateUpdate_m1008_MethodInfo;
extern "C" void MouseOrbit_LateUpdate_m1008 (MouseOrbit_t231 * __this, MethodInfo* method)
{
	Quaternion_t55  V_0 = {0};
	Vector3_t54  V_1 = {0};
	{
		Transform_t85 * L_0 = (__this->___target_1);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_00d5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t145_il2cpp_TypeInfo));
		bool L_2 = Input_GetMouseButton_m1034(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m1034_MethodInfo);
		if (!L_2)
		{
			goto IL_00d5;
		}
	}
	{
		float L_3 = (__this->___x_7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t145_il2cpp_TypeInfo));
		float L_4 = Input_GetAxis_m1035(NULL /*static, unused*/, (String_t*) &_stringLiteral334, /*hidden argument*/&Input_GetAxis_m1035_MethodInfo);
		float L_5 = (__this->___xSpeed_3);
		__this->___x_7 = ((float)((float)L_3+(float)((float)((float)((float)((float)L_4*(float)L_5))*(float)(0.02f)))));
		float L_6 = (__this->___y_8);
		float L_7 = Input_GetAxis_m1035(NULL /*static, unused*/, (String_t*) &_stringLiteral335, /*hidden argument*/&Input_GetAxis_m1035_MethodInfo);
		float L_8 = (__this->___ySpeed_4);
		__this->___y_8 = ((float)((float)L_6-(float)((float)((float)((float)((float)L_7*(float)L_8))*(float)(0.02f)))));
		float L_9 = (__this->___y_8);
		int32_t L_10 = (__this->___yMinLimit_5);
		int32_t L_11 = (__this->___yMaxLimit_6);
		float L_12 = MouseOrbit_ClampAngle_m1009(NULL /*static, unused*/, L_9, (((float)L_10)), (((float)L_11)), /*hidden argument*/&MouseOrbit_ClampAngle_m1009_MethodInfo);
		__this->___y_8 = L_12;
		float L_13 = (__this->___y_8);
		float L_14 = (__this->___x_7);
		Quaternion_t55  L_15 = Quaternion_Euler_m202(NULL /*static, unused*/, L_13, L_14, (((float)0)), /*hidden argument*/&Quaternion_Euler_m202_MethodInfo);
		V_0 = L_15;
		float L_16 = (__this->___distance_2);
		Vector3_t54  L_17 = {0};
		Vector3__ctor_m222(&L_17, (((float)0)), (((float)0)), ((-L_16)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		Vector3_t54  L_18 = Quaternion_op_Multiply_m1036(NULL /*static, unused*/, V_0, L_17, /*hidden argument*/&Quaternion_op_Multiply_m1036_MethodInfo);
		Transform_t85 * L_19 = (__this->___target_1);
		NullCheck(L_19);
		Vector3_t54  L_20 = Transform_get_position_m535(L_19, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_21 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		V_1 = L_21;
		Transform_t85 * L_22 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_22);
		Transform_set_rotation_m556(L_22, V_0, /*hidden argument*/&Transform_set_rotation_m556_MethodInfo);
		Transform_t85 * L_23 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_23);
		Transform_set_position_m551(L_23, V_1, /*hidden argument*/&Transform_set_position_m551_MethodInfo);
	}

IL_00d5:
	{
		return;
	}
}
// System.Single MouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
extern "C" float MouseOrbit_ClampAngle_m1009 (Object_t * __this /* static, unused */, float ___angle, float ___min, float ___max, MethodInfo* method)
{
	{
		if ((((float)___angle) >= ((float)(((float)((int32_t)-360))))))
		{
			goto IL_001a;
		}
	}
	{
		___angle = ((float)((float)___angle+(float)(((float)((int32_t)360)))));
	}

IL_001a:
	{
		if ((((float)___angle) <= ((float)(((float)((int32_t)360))))))
		{
			goto IL_0034;
		}
	}
	{
		___angle = ((float)((float)___angle-(float)(((float)((int32_t)360)))));
	}

IL_0034:
	{
		float L_0 = Mathf_Clamp_m192(NULL /*static, unused*/, ___angle, ___min, ___max, /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		return L_0;
	}
}
// System.Void MouseOrbit::Main()
extern MethodInfo MouseOrbit_Main_m1010_MethodInfo;
extern "C" void MouseOrbit_Main_m1010 (MouseOrbit_t231 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// SmoothFollow
#include "AssemblyU2DUnityScript_SmoothFollow.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SmoothFollow_t232_il2cpp_TypeInfo;
// SmoothFollow
#include "AssemblyU2DUnityScript_SmoothFollowMethodDeclarations.h"

extern MethodInfo Time_get_deltaTime_m190_MethodInfo;
extern MethodInfo Mathf_LerpAngle_m1037_MethodInfo;
extern MethodInfo Mathf_Lerp_m1038_MethodInfo;
extern MethodInfo Vector3_get_forward_m910_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m601_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m923_MethodInfo;
extern MethodInfo Transform_LookAt_m1039_MethodInfo;


// System.Void SmoothFollow::.ctor()
extern MethodInfo SmoothFollow__ctor_m1011_MethodInfo;
extern "C" void SmoothFollow__ctor_m1011 (SmoothFollow_t232 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		__this->___distance_2 = (10.0f);
		__this->___height_3 = (5.0f);
		__this->___heightDamping_4 = (2.0f);
		__this->___rotationDamping_5 = (3.0f);
		return;
	}
}
// System.Void SmoothFollow::LateUpdate()
extern MethodInfo SmoothFollow_LateUpdate_m1012_MethodInfo;
extern "C" void SmoothFollow_LateUpdate_m1012 (SmoothFollow_t232 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t55  V_4 = {0};
	float V_5 = 0.0f;
	Vector3_t54  V_6 = {0};
	Vector3_t54  V_7 = {0};
	Vector3_t54  V_8 = {0};
	Vector3_t54  V_9 = {0};
	Vector3_t54  V_10 = {0};
	float V_11 = 0.0f;
	Vector3_t54  V_12 = {0};
	{
		Transform_t85 * L_0 = (__this->___target_1);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0133;
	}

IL_0015:
	{
		Transform_t85 * L_2 = (__this->___target_1);
		NullCheck(L_2);
		Vector3_t54  L_3 = Transform_get_eulerAngles_m552(L_2, /*hidden argument*/&Transform_get_eulerAngles_m552_MethodInfo);
		V_7 = L_3;
		NullCheck((&V_7));
		float L_4 = ((&V_7)->___y_2);
		V_0 = L_4;
		Transform_t85 * L_5 = (__this->___target_1);
		NullCheck(L_5);
		Vector3_t54  L_6 = Transform_get_position_m535(L_5, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		V_8 = L_6;
		NullCheck((&V_8));
		float L_7 = ((&V_8)->___y_2);
		float L_8 = (__this->___height_3);
		V_1 = ((float)((float)L_7+(float)L_8));
		Transform_t85 * L_9 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_9);
		Vector3_t54  L_10 = Transform_get_eulerAngles_m552(L_9, /*hidden argument*/&Transform_get_eulerAngles_m552_MethodInfo);
		V_9 = L_10;
		NullCheck((&V_9));
		float L_11 = ((&V_9)->___y_2);
		V_2 = L_11;
		Transform_t85 * L_12 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_12);
		Vector3_t54  L_13 = Transform_get_position_m535(L_12, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		V_10 = L_13;
		NullCheck((&V_10));
		float L_14 = ((&V_10)->___y_2);
		V_3 = L_14;
		float L_15 = (__this->___rotationDamping_5);
		float L_16 = Time_get_deltaTime_m190(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m190_MethodInfo);
		float L_17 = Mathf_LerpAngle_m1037(NULL /*static, unused*/, V_2, V_0, ((float)((float)L_15*(float)L_16)), /*hidden argument*/&Mathf_LerpAngle_m1037_MethodInfo);
		V_2 = L_17;
		float L_18 = (__this->___heightDamping_4);
		float L_19 = Time_get_deltaTime_m190(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m190_MethodInfo);
		float L_20 = Mathf_Lerp_m1038(NULL /*static, unused*/, V_3, V_1, ((float)((float)L_18*(float)L_19)), /*hidden argument*/&Mathf_Lerp_m1038_MethodInfo);
		V_3 = L_20;
		Quaternion_t55  L_21 = Quaternion_Euler_m202(NULL /*static, unused*/, (((float)0)), V_2, (((float)0)), /*hidden argument*/&Quaternion_Euler_m202_MethodInfo);
		V_4 = L_21;
		Transform_t85 * L_22 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Transform_t85 * L_23 = (__this->___target_1);
		NullCheck(L_23);
		Vector3_t54  L_24 = Transform_get_position_m535(L_23, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		NullCheck(L_22);
		Transform_set_position_m551(L_22, L_24, /*hidden argument*/&Transform_set_position_m551_MethodInfo);
		Transform_t85 * L_25 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Transform_t85 * L_26 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_26);
		Vector3_t54  L_27 = Transform_get_position_m535(L_26, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_28 = Vector3_get_forward_m910(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m910_MethodInfo);
		Vector3_t54  L_29 = Quaternion_op_Multiply_m1036(NULL /*static, unused*/, V_4, L_28, /*hidden argument*/&Quaternion_op_Multiply_m1036_MethodInfo);
		float L_30 = (__this->___distance_2);
		Vector3_t54  L_31 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Vector3_t54  L_32 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, L_27, L_31, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		NullCheck(L_25);
		Transform_set_position_m551(L_25, L_32, /*hidden argument*/&Transform_set_position_m551_MethodInfo);
		float L_33 = V_3;
		V_5 = L_33;
		Transform_t85 * L_34 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_34);
		Vector3_t54  L_35 = Transform_get_position_m535(L_34, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_36 = L_35;
		V_6 = L_36;
		float L_37 = V_5;
		V_11 = L_37;
		NullCheck((&V_6));
		(&V_6)->___y_2 = L_37;
		Transform_t85 * L_38 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Vector3_t54  L_39 = V_6;
		V_12 = L_39;
		NullCheck(L_38);
		Transform_set_position_m551(L_38, L_39, /*hidden argument*/&Transform_set_position_m551_MethodInfo);
		Transform_t85 * L_40 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Transform_t85 * L_41 = (__this->___target_1);
		NullCheck(L_40);
		Transform_LookAt_m1039(L_40, L_41, /*hidden argument*/&Transform_LookAt_m1039_MethodInfo);
	}

IL_0133:
	{
		return;
	}
}
// System.Void SmoothFollow::Main()
extern MethodInfo SmoothFollow_Main_m1013_MethodInfo;
extern "C" void SmoothFollow_Main_m1013 (SmoothFollow_t232 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// SmoothLookAt
#include "AssemblyU2DUnityScript_SmoothLookAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SmoothLookAt_t233_il2cpp_TypeInfo;
// SmoothLookAt
#include "AssemblyU2DUnityScript_SmoothLookAtMethodDeclarations.h"

extern MethodInfo Quaternion_LookRotation_m1040_MethodInfo;
extern MethodInfo Transform_get_rotation_m555_MethodInfo;
extern MethodInfo Quaternion_Slerp_m1041_MethodInfo;


// System.Void SmoothLookAt::.ctor()
extern MethodInfo SmoothLookAt__ctor_m1014_MethodInfo;
extern "C" void SmoothLookAt__ctor_m1014 (SmoothLookAt_t233 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		__this->___damping_2 = (6.0f);
		__this->___smooth_3 = 1;
		return;
	}
}
// System.Void SmoothLookAt::LateUpdate()
extern MethodInfo SmoothLookAt_LateUpdate_m1015_MethodInfo;
extern "C" void SmoothLookAt_LateUpdate_m1015 (SmoothLookAt_t233 * __this, MethodInfo* method)
{
	Quaternion_t55  V_0 = {0};
	{
		Transform_t85 * L_0 = (__this->___target_1);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		bool L_2 = (__this->___smooth_3);
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		Transform_t85 * L_3 = (__this->___target_1);
		NullCheck(L_3);
		Vector3_t54  L_4 = Transform_get_position_m535(L_3, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Transform_t85 * L_5 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_5);
		Vector3_t54  L_6 = Transform_get_position_m535(L_5, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_7 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		Quaternion_t55  L_8 = Quaternion_LookRotation_m1040(NULL /*static, unused*/, L_7, /*hidden argument*/&Quaternion_LookRotation_m1040_MethodInfo);
		V_0 = L_8;
		Transform_t85 * L_9 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Transform_t85 * L_10 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_10);
		Quaternion_t55  L_11 = Transform_get_rotation_m555(L_10, /*hidden argument*/&Transform_get_rotation_m555_MethodInfo);
		float L_12 = Time_get_deltaTime_m190(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m190_MethodInfo);
		float L_13 = (__this->___damping_2);
		Quaternion_t55  L_14 = Quaternion_Slerp_m1041(NULL /*static, unused*/, L_11, V_0, ((float)((float)L_12*(float)L_13)), /*hidden argument*/&Quaternion_Slerp_m1041_MethodInfo);
		NullCheck(L_9);
		Transform_set_rotation_m556(L_9, L_14, /*hidden argument*/&Transform_set_rotation_m556_MethodInfo);
		goto IL_007a;
	}

IL_0069:
	{
		Transform_t85 * L_15 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Transform_t85 * L_16 = (__this->___target_1);
		NullCheck(L_15);
		Transform_LookAt_m1039(L_15, L_16, /*hidden argument*/&Transform_LookAt_m1039_MethodInfo);
	}

IL_007a:
	{
		return;
	}
}
// System.Void SmoothLookAt::Start()
extern MethodInfo SmoothLookAt_Start_m1016_MethodInfo;
extern "C" void SmoothLookAt_Start_m1016 (SmoothLookAt_t233 * __this, MethodInfo* method)
{
	{
		Rigidbody_t241 * L_0 = Component_get_rigidbody_m1032(__this, /*hidden argument*/&Component_get_rigidbody_m1032_MethodInfo);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Rigidbody_t241 * L_2 = Component_get_rigidbody_m1032(__this, /*hidden argument*/&Component_get_rigidbody_m1032_MethodInfo);
		NullCheck(L_2);
		Rigidbody_set_freezeRotation_m1033(L_2, 1, /*hidden argument*/&Rigidbody_set_freezeRotation_m1033_MethodInfo);
	}

IL_001c:
	{
		return;
	}
}
// System.Void SmoothLookAt::Main()
extern MethodInfo SmoothLookAt_Main_m1017_MethodInfo;
extern "C" void SmoothLookAt_Main_m1017 (SmoothLookAt_t233 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// DragRigidbody/$DragObject$3/$
#include "AssemblyU2DUnityScript_DragRigidbody_$DragObject$3_$.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $_t235_il2cpp_TypeInfo;
// DragRigidbody/$DragObject$3/$
#include "AssemblyU2DUnityScript_DragRigidbody_$DragObject$3_$MethodDeclarations.h"

// DragRigidbody
#include "AssemblyU2DUnityScript_DragRigidbody.h"
// Boo.Lang.GenericGeneratorEnumerator`1<System.Object>
#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen.h"
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJoint.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern TypeInfo GenericGeneratorEnumerator_1_t236_il2cpp_TypeInfo;
extern TypeInfo DragRigidbody_t234_il2cpp_TypeInfo;
extern TypeInfo Camera_t56_il2cpp_TypeInfo;
// Boo.Lang.GenericGeneratorEnumerator`1<System.Object>
#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_genMethodDeclarations.h"
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_JointMethodDeclarations.h"
// DragRigidbody
#include "AssemblyU2DUnityScript_DragRigidbodyMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo Joint_get_connectedBody_m1042_MethodInfo;
extern MethodInfo Rigidbody_get_drag_m1043_MethodInfo;
extern MethodInfo Rigidbody_get_angularDrag_m1044_MethodInfo;
extern MethodInfo Rigidbody_set_drag_m1045_MethodInfo;
extern MethodInfo Rigidbody_set_angularDrag_m1046_MethodInfo;
extern MethodInfo DragRigidbody_FindCamera_m1025_MethodInfo;
extern MethodInfo Input_get_mousePosition_m1047_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m1048_MethodInfo;
extern MethodInfo Ray_GetPoint_m1049_MethodInfo;
extern MethodInfo Joint_set_connectedBody_m1050_MethodInfo;
extern Il2CppGenericMethod GenericGeneratorEnumerator_1__ctor_m1051_GenericMethod;
extern Il2CppGenericMethod GenericGeneratorEnumerator_1_YieldDefault_m1052_GenericMethod;


// System.Void DragRigidbody/$DragObject$3/$::.ctor(System.Single,DragRigidbody)
extern MethodInfo $__ctor_m1018_MethodInfo;
extern MethodInfo* GenericGeneratorEnumerator_1__ctor_m1051_MethodInfo_var;
extern "C" void $__ctor_m1018 ($_t235 * __this, float ___distance, DragRigidbody_t234 * ___self_, MethodInfo* method)
{
	static bool $__ctor_m1018_init;
	if (!$__ctor_m1018_init)
	{
		GenericGeneratorEnumerator_1__ctor_m1051_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GenericGeneratorEnumerator_1__ctor_m1051_GenericMethod);
		$__ctor_m1018_init = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m1051(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m1051_MethodInfo_var);
		__this->___$distance$8_6 = ___distance;
		__this->___$self_$9_7 = ___self_;
		return;
	}
}
// System.Boolean DragRigidbody/$DragObject$3/$::MoveNext()
extern MethodInfo $_MoveNext_m1019_MethodInfo;
extern MethodInfo* GenericGeneratorEnumerator_1_YieldDefault_m1052_MethodInfo_var;
extern "C" bool $_MoveNext_m1019 ($_t235 * __this, MethodInfo* method)
{
	static bool $_MoveNext_m1019_init;
	if (!$_MoveNext_m1019_init)
	{
		GenericGeneratorEnumerator_1_YieldDefault_m1052_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GenericGeneratorEnumerator_1_YieldDefault_m1052_GenericMethod);
		$_MoveNext_m1019_init = true;
	}
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = (__this->____state_1);
		if (L_0 == 0)
		{
			goto IL_0017;
		}
		if (L_0 == 1)
		{
			goto IL_015f;
		}
		if (L_0 == 2)
		{
			goto IL_00eb;
		}
	}

IL_0017:
	{
		DragRigidbody_t234 * L_1 = (__this->___$self_$9_7);
		NullCheck(L_1);
		SpringJoint_t240 * L_2 = (L_1->___springJoint_7);
		NullCheck(L_2);
		Rigidbody_t241 * L_3 = Joint_get_connectedBody_m1042(L_2, /*hidden argument*/&Joint_get_connectedBody_m1042_MethodInfo);
		NullCheck(L_3);
		float L_4 = Rigidbody_get_drag_m1043(L_3, /*hidden argument*/&Rigidbody_get_drag_m1043_MethodInfo);
		__this->___$oldDrag$4_2 = L_4;
		DragRigidbody_t234 * L_5 = (__this->___$self_$9_7);
		NullCheck(L_5);
		SpringJoint_t240 * L_6 = (L_5->___springJoint_7);
		NullCheck(L_6);
		Rigidbody_t241 * L_7 = Joint_get_connectedBody_m1042(L_6, /*hidden argument*/&Joint_get_connectedBody_m1042_MethodInfo);
		NullCheck(L_7);
		float L_8 = Rigidbody_get_angularDrag_m1044(L_7, /*hidden argument*/&Rigidbody_get_angularDrag_m1044_MethodInfo);
		__this->___$oldAngularDrag$5_3 = L_8;
		DragRigidbody_t234 * L_9 = (__this->___$self_$9_7);
		NullCheck(L_9);
		SpringJoint_t240 * L_10 = (L_9->___springJoint_7);
		NullCheck(L_10);
		Rigidbody_t241 * L_11 = Joint_get_connectedBody_m1042(L_10, /*hidden argument*/&Joint_get_connectedBody_m1042_MethodInfo);
		DragRigidbody_t234 * L_12 = (__this->___$self_$9_7);
		NullCheck(L_12);
		float L_13 = (L_12->___drag_3);
		NullCheck(L_11);
		Rigidbody_set_drag_m1045(L_11, L_13, /*hidden argument*/&Rigidbody_set_drag_m1045_MethodInfo);
		DragRigidbody_t234 * L_14 = (__this->___$self_$9_7);
		NullCheck(L_14);
		SpringJoint_t240 * L_15 = (L_14->___springJoint_7);
		NullCheck(L_15);
		Rigidbody_t241 * L_16 = Joint_get_connectedBody_m1042(L_15, /*hidden argument*/&Joint_get_connectedBody_m1042_MethodInfo);
		DragRigidbody_t234 * L_17 = (__this->___$self_$9_7);
		NullCheck(L_17);
		float L_18 = (L_17->___angularDrag_4);
		NullCheck(L_16);
		Rigidbody_set_angularDrag_m1046(L_16, L_18, /*hidden argument*/&Rigidbody_set_angularDrag_m1046_MethodInfo);
		DragRigidbody_t234 * L_19 = (__this->___$self_$9_7);
		NullCheck(L_19);
		Camera_t56 * L_20 = (Camera_t56 *)VirtFuncInvoker0< Camera_t56 * >::Invoke(&DragRigidbody_FindCamera_m1025_MethodInfo, L_19);
		__this->___$mainCamera$6_4 = L_20;
		goto IL_00eb;
	}

IL_00a3:
	{
		Camera_t56 * L_21 = (__this->___$mainCamera$6_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t145_il2cpp_TypeInfo));
		Vector3_t54  L_22 = Input_get_mousePosition_m1047(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m1047_MethodInfo);
		NullCheck(L_21);
		Ray_t237  L_23 = Camera_ScreenPointToRay_m1048(L_21, L_22, /*hidden argument*/&Camera_ScreenPointToRay_m1048_MethodInfo);
		__this->___$ray$7_5 = L_23;
		DragRigidbody_t234 * L_24 = (__this->___$self_$9_7);
		NullCheck(L_24);
		SpringJoint_t240 * L_25 = (L_24->___springJoint_7);
		NullCheck(L_25);
		Transform_t85 * L_26 = Component_get_transform_m534(L_25, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Ray_t237 * L_27 = &(__this->___$ray$7_5);
		float L_28 = (__this->___$distance$8_6);
		Vector3_t54  L_29 = Ray_GetPoint_m1049(L_27, L_28, /*hidden argument*/&Ray_GetPoint_m1049_MethodInfo);
		NullCheck(L_26);
		Transform_set_position_m551(L_26, L_29, /*hidden argument*/&Transform_set_position_m551_MethodInfo);
		bool L_30 = GenericGeneratorEnumerator_1_YieldDefault_m1052(__this, 2, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m1052_MethodInfo_var);
		G_B8_0 = ((int32_t)(L_30));
		goto IL_0160;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t145_il2cpp_TypeInfo));
		bool L_31 = Input_GetMouseButton_m1034(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m1034_MethodInfo);
		if (L_31)
		{
			goto IL_00a3;
		}
	}
	{
		DragRigidbody_t234 * L_32 = (__this->___$self_$9_7);
		NullCheck(L_32);
		SpringJoint_t240 * L_33 = (L_32->___springJoint_7);
		NullCheck(L_33);
		Rigidbody_t241 * L_34 = Joint_get_connectedBody_m1042(L_33, /*hidden argument*/&Joint_get_connectedBody_m1042_MethodInfo);
		bool L_35 = Object_op_Implicit_m173(NULL /*static, unused*/, L_34, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_35)
		{
			goto IL_0157;
		}
	}
	{
		DragRigidbody_t234 * L_36 = (__this->___$self_$9_7);
		NullCheck(L_36);
		SpringJoint_t240 * L_37 = (L_36->___springJoint_7);
		NullCheck(L_37);
		Rigidbody_t241 * L_38 = Joint_get_connectedBody_m1042(L_37, /*hidden argument*/&Joint_get_connectedBody_m1042_MethodInfo);
		float L_39 = (__this->___$oldDrag$4_2);
		NullCheck(L_38);
		Rigidbody_set_drag_m1045(L_38, L_39, /*hidden argument*/&Rigidbody_set_drag_m1045_MethodInfo);
		DragRigidbody_t234 * L_40 = (__this->___$self_$9_7);
		NullCheck(L_40);
		SpringJoint_t240 * L_41 = (L_40->___springJoint_7);
		NullCheck(L_41);
		Rigidbody_t241 * L_42 = Joint_get_connectedBody_m1042(L_41, /*hidden argument*/&Joint_get_connectedBody_m1042_MethodInfo);
		float L_43 = (__this->___$oldAngularDrag$5_3);
		NullCheck(L_42);
		Rigidbody_set_angularDrag_m1046(L_42, L_43, /*hidden argument*/&Rigidbody_set_angularDrag_m1046_MethodInfo);
		DragRigidbody_t234 * L_44 = (__this->___$self_$9_7);
		NullCheck(L_44);
		SpringJoint_t240 * L_45 = (L_44->___springJoint_7);
		NullCheck(L_45);
		Joint_set_connectedBody_m1050(L_45, (Rigidbody_t241 *)NULL, /*hidden argument*/&Joint_set_connectedBody_m1050_MethodInfo);
	}

IL_0157:
	{
		GenericGeneratorEnumerator_1_YieldDefault_m1052(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m1052_MethodInfo_var);
	}

IL_015f:
	{
		G_B8_0 = 0;
	}

IL_0160:
	{
		return G_B8_0;
	}
}
// DragRigidbody/$DragObject$3
#include "AssemblyU2DUnityScript_DragRigidbody_$DragObject$3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $DragObject$3_t238_il2cpp_TypeInfo;
// DragRigidbody/$DragObject$3
#include "AssemblyU2DUnityScript_DragRigidbody_$DragObject$3MethodDeclarations.h"

// Boo.Lang.GenericGenerator`1<System.Object>
#include "Boo_Lang_Boo_Lang_GenericGenerator_1_genMethodDeclarations.h"
extern Il2CppGenericMethod GenericGenerator_1__ctor_m1053_GenericMethod;


// System.Void DragRigidbody/$DragObject$3::.ctor(System.Single,DragRigidbody)
extern MethodInfo $DragObject$3__ctor_m1020_MethodInfo;
extern MethodInfo* GenericGenerator_1__ctor_m1053_MethodInfo_var;
extern "C" void $DragObject$3__ctor_m1020 ($DragObject$3_t238 * __this, float ___distance, DragRigidbody_t234 * ___self_, MethodInfo* method)
{
	static bool $DragObject$3__ctor_m1020_init;
	if (!$DragObject$3__ctor_m1020_init)
	{
		GenericGenerator_1__ctor_m1053_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GenericGenerator_1__ctor_m1053_GenericMethod);
		$DragObject$3__ctor_m1020_init = true;
	}
	{
		GenericGenerator_1__ctor_m1053(__this, /*hidden argument*/GenericGenerator_1__ctor_m1053_MethodInfo_var);
		__this->___$distance$10_0 = ___distance;
		__this->___$self_$11_1 = ___self_;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> DragRigidbody/$DragObject$3::GetEnumerator()
extern MethodInfo $DragObject$3_GetEnumerator_m1021_MethodInfo;
extern "C" Object_t* $DragObject$3_GetEnumerator_m1021 ($DragObject$3_t238 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___$distance$10_0);
		DragRigidbody_t234 * L_1 = (__this->___$self_$11_1);
		$_t235 * L_2 = ($_t235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&$_t235_il2cpp_TypeInfo));
		$__ctor_m1018(L_2, L_0, L_1, /*hidden argument*/&$__ctor_m1018_MethodInfo);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo RaycastHit_t242_il2cpp_TypeInfo;
extern TypeInfo Rigidbody_t241_il2cpp_TypeInfo;
extern TypeInfo SpringJoint_t240_il2cpp_TypeInfo;
extern TypeInfo Single_t57_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t160_il2cpp_TypeInfo;
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJointMethodDeclarations.h"
extern MethodInfo Input_GetMouseButtonDown_m1054_MethodInfo;
extern MethodInfo Physics_Raycast_m1055_MethodInfo;
extern MethodInfo RaycastHit_get_rigidbody_m1056_MethodInfo;
extern MethodInfo Rigidbody_get_isKinematic_m1057_MethodInfo;
extern MethodInfo GameObject__ctor_m165_MethodInfo;
extern MethodInfo GameObject_AddComponent_m598_MethodInfo;
extern MethodInfo Rigidbody_set_isKinematic_m1058_MethodInfo;
extern MethodInfo RaycastHit_get_point_m1059_MethodInfo;
extern MethodInfo Rigidbody_get_centerOfMass_m1060_MethodInfo;
extern MethodInfo Transform_TransformDirection_m1061_MethodInfo;
extern MethodInfo Transform_InverseTransformPoint_m1062_MethodInfo;
extern MethodInfo Joint_set_anchor_m1063_MethodInfo;
extern MethodInfo Vector3_get_zero_m201_MethodInfo;
extern MethodInfo SpringJoint_set_spring_m1064_MethodInfo;
extern MethodInfo SpringJoint_set_damper_m1065_MethodInfo;
extern MethodInfo SpringJoint_set_maxDistance_m1066_MethodInfo;
extern MethodInfo RaycastHit_get_distance_m1067_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m1068_MethodInfo;
extern MethodInfo Component_get_camera_m215_MethodInfo;
extern MethodInfo Camera_get_main_m637_MethodInfo;


// System.Void DragRigidbody::.ctor()
extern MethodInfo DragRigidbody__ctor_m1022_MethodInfo;
extern "C" void DragRigidbody__ctor_m1022 (DragRigidbody_t234 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		__this->___spring_1 = (50.0f);
		__this->___damper_2 = (5.0f);
		__this->___drag_3 = (10.0f);
		__this->___angularDrag_4 = (5.0f);
		__this->___distance_5 = (0.2f);
		return;
	}
}
// System.Void DragRigidbody::Update()
extern MethodInfo DragRigidbody_Update_m1023_MethodInfo;
extern "C" void DragRigidbody_Update_m1023 (DragRigidbody_t234 * __this, MethodInfo* method)
{
	Camera_t56 * V_0 = {0};
	RaycastHit_t242  V_1 = {0};
	GameObject_t49 * V_2 = {0};
	Rigidbody_t241 * V_3 = {0};
	Vector3_t54  V_4 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t145_il2cpp_TypeInfo));
		bool L_0 = Input_GetMouseButtonDown_m1054(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m1054_MethodInfo);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0192;
	}

IL_0010:
	{
		Camera_t56 * L_1 = (Camera_t56 *)VirtFuncInvoker0< Camera_t56 * >::Invoke(&DragRigidbody_FindCamera_m1025_MethodInfo, __this);
		V_0 = L_1;
		Initobj (InitializedTypeInfo(&RaycastHit_t242_il2cpp_TypeInfo), (&V_1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t145_il2cpp_TypeInfo));
		Vector3_t54  L_2 = Input_get_mousePosition_m1047(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m1047_MethodInfo);
		NullCheck(V_0);
		Ray_t237  L_3 = Camera_ScreenPointToRay_m1048(V_0, L_2, /*hidden argument*/&Camera_ScreenPointToRay_m1048_MethodInfo);
		bool L_4 = Physics_Raycast_m1055(NULL /*static, unused*/, L_3, (&V_1), (((float)((int32_t)100))), /*hidden argument*/&Physics_Raycast_m1055_MethodInfo);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0192;
	}

IL_003e:
	{
		Rigidbody_t241 * L_5 = RaycastHit_get_rigidbody_m1056((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m1056_MethodInfo);
		bool L_6 = Object_op_Implicit_m173(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		Rigidbody_t241 * L_7 = RaycastHit_get_rigidbody_m1056((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m1056_MethodInfo);
		NullCheck(L_7);
		bool L_8 = Rigidbody_get_isKinematic_m1057(L_7, /*hidden argument*/&Rigidbody_get_isKinematic_m1057_MethodInfo);
		if (!L_8)
		{
			goto IL_0065;
		}
	}

IL_0060:
	{
		goto IL_0192;
	}

IL_0065:
	{
		SpringJoint_t240 * L_9 = (__this->___springJoint_7);
		bool L_10 = Object_op_Implicit_m173(NULL /*static, unused*/, L_9, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_10)
		{
			goto IL_00ae;
		}
	}
	{
		GameObject_t49 * L_11 = (GameObject_t49 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t49_il2cpp_TypeInfo));
		GameObject__ctor_m165(L_11, (String_t*) &_stringLiteral336, /*hidden argument*/&GameObject__ctor_m165_MethodInfo);
		V_2 = L_11;
		NullCheck(V_2);
		Component_t142 * L_12 = GameObject_AddComponent_m598(V_2, (String_t*) &_stringLiteral337, /*hidden argument*/&GameObject_AddComponent_m598_MethodInfo);
		V_3 = ((Rigidbody_t241 *)IsInst(L_12, InitializedTypeInfo(&Rigidbody_t241_il2cpp_TypeInfo)));
		NullCheck(V_2);
		Component_t142 * L_13 = GameObject_AddComponent_m598(V_2, (String_t*) &_stringLiteral338, /*hidden argument*/&GameObject_AddComponent_m598_MethodInfo);
		__this->___springJoint_7 = ((SpringJoint_t240 *)Castclass(L_13, InitializedTypeInfo(&SpringJoint_t240_il2cpp_TypeInfo)));
		NullCheck(V_3);
		Rigidbody_set_isKinematic_m1058(V_3, 1, /*hidden argument*/&Rigidbody_set_isKinematic_m1058_MethodInfo);
	}

IL_00ae:
	{
		SpringJoint_t240 * L_14 = (__this->___springJoint_7);
		NullCheck(L_14);
		Transform_t85 * L_15 = Component_get_transform_m534(L_14, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Vector3_t54  L_16 = RaycastHit_get_point_m1059((&V_1), /*hidden argument*/&RaycastHit_get_point_m1059_MethodInfo);
		NullCheck(L_15);
		Transform_set_position_m551(L_15, L_16, /*hidden argument*/&Transform_set_position_m551_MethodInfo);
		bool L_17 = (__this->___attachToCenterOfMass_6);
		if (!L_17)
		{
			goto IL_0125;
		}
	}
	{
		Transform_t85 * L_18 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Rigidbody_t241 * L_19 = RaycastHit_get_rigidbody_m1056((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m1056_MethodInfo);
		NullCheck(L_19);
		Vector3_t54  L_20 = Rigidbody_get_centerOfMass_m1060(L_19, /*hidden argument*/&Rigidbody_get_centerOfMass_m1060_MethodInfo);
		NullCheck(L_18);
		Vector3_t54  L_21 = Transform_TransformDirection_m1061(L_18, L_20, /*hidden argument*/&Transform_TransformDirection_m1061_MethodInfo);
		Rigidbody_t241 * L_22 = RaycastHit_get_rigidbody_m1056((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m1056_MethodInfo);
		NullCheck(L_22);
		Transform_t85 * L_23 = Component_get_transform_m534(L_22, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_23);
		Vector3_t54  L_24 = Transform_get_position_m535(L_23, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_25 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		V_4 = L_25;
		SpringJoint_t240 * L_26 = (__this->___springJoint_7);
		NullCheck(L_26);
		Transform_t85 * L_27 = Component_get_transform_m534(L_26, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_27);
		Vector3_t54  L_28 = Transform_InverseTransformPoint_m1062(L_27, V_4, /*hidden argument*/&Transform_InverseTransformPoint_m1062_MethodInfo);
		V_4 = L_28;
		SpringJoint_t240 * L_29 = (__this->___springJoint_7);
		NullCheck(L_29);
		Joint_set_anchor_m1063(L_29, V_4, /*hidden argument*/&Joint_set_anchor_m1063_MethodInfo);
		goto IL_0135;
	}

IL_0125:
	{
		SpringJoint_t240 * L_30 = (__this->___springJoint_7);
		Vector3_t54  L_31 = Vector3_get_zero_m201(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m201_MethodInfo);
		NullCheck(L_30);
		Joint_set_anchor_m1063(L_30, L_31, /*hidden argument*/&Joint_set_anchor_m1063_MethodInfo);
	}

IL_0135:
	{
		SpringJoint_t240 * L_32 = (__this->___springJoint_7);
		float L_33 = (__this->___spring_1);
		NullCheck(L_32);
		SpringJoint_set_spring_m1064(L_32, L_33, /*hidden argument*/&SpringJoint_set_spring_m1064_MethodInfo);
		SpringJoint_t240 * L_34 = (__this->___springJoint_7);
		float L_35 = (__this->___damper_2);
		NullCheck(L_34);
		SpringJoint_set_damper_m1065(L_34, L_35, /*hidden argument*/&SpringJoint_set_damper_m1065_MethodInfo);
		SpringJoint_t240 * L_36 = (__this->___springJoint_7);
		float L_37 = (__this->___distance_5);
		NullCheck(L_36);
		SpringJoint_set_maxDistance_m1066(L_36, L_37, /*hidden argument*/&SpringJoint_set_maxDistance_m1066_MethodInfo);
		SpringJoint_t240 * L_38 = (__this->___springJoint_7);
		Rigidbody_t241 * L_39 = RaycastHit_get_rigidbody_m1056((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m1056_MethodInfo);
		NullCheck(L_38);
		Joint_set_connectedBody_m1050(L_38, L_39, /*hidden argument*/&Joint_set_connectedBody_m1050_MethodInfo);
		float L_40 = RaycastHit_get_distance_m1067((&V_1), /*hidden argument*/&RaycastHit_get_distance_m1067_MethodInfo);
		float L_41 = L_40;
		Object_t * L_42 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_41);
		MonoBehaviour_StartCoroutine_m1068(__this, (String_t*) &_stringLiteral339, L_42, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1068_MethodInfo);
	}

IL_0192:
	{
		return;
	}
}
// System.Collections.IEnumerator DragRigidbody::DragObject(System.Single)
extern MethodInfo DragRigidbody_DragObject_m1024_MethodInfo;
extern "C" Object_t * DragRigidbody_DragObject_m1024 (DragRigidbody_t234 * __this, float ___distance, MethodInfo* method)
{
	{
		$DragObject$3_t238 * L_0 = ($DragObject$3_t238 *)il2cpp_codegen_object_new (InitializedTypeInfo(&$DragObject$3_t238_il2cpp_TypeInfo));
		$DragObject$3__ctor_m1020(L_0, ___distance, __this, /*hidden argument*/&$DragObject$3__ctor_m1020_MethodInfo);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(&$DragObject$3_GetEnumerator_m1021_MethodInfo, L_0);
		return L_1;
	}
}
// UnityEngine.Camera DragRigidbody::FindCamera()
extern "C" Camera_t56 * DragRigidbody_FindCamera_m1025 (DragRigidbody_t234 * __this, MethodInfo* method)
{
	Camera_t56 * G_B3_0 = {0};
	{
		Camera_t56 * L_0 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Camera_t56 * L_2 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		G_B3_0 = L_2;
		goto IL_0025;
	}

IL_001b:
	{
		Camera_t56 * L_3 = Camera_get_main_m637(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m637_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Void DragRigidbody::Main()
extern MethodInfo DragRigidbody_Main_m1026_MethodInfo;
extern "C" void DragRigidbody_Main_m1026 (DragRigidbody_t234 * __this, MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
