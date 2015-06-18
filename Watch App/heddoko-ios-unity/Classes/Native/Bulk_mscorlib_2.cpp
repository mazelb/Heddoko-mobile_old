#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
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
extern TypeInfo NumberStyles_t1423_il2cpp_TypeInfo;
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStylesMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Globalization.TextInfo/Data
#include "mscorlib_System_Globalization_TextInfo_Data.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Data_t1424_il2cpp_TypeInfo;
// System.Globalization.TextInfo/Data
#include "mscorlib_System_Globalization_TextInfo_DataMethodDeclarations.h"



// System.Globalization.TextInfo
#include "mscorlib_System_Globalization_TextInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextInfo_t1303_il2cpp_TypeInfo;
// System.Globalization.TextInfo
#include "mscorlib_System_Globalization_TextInfoMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo CultureInfo_t791_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
extern TypeInfo Char_t46_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t785_il2cpp_TypeInfo;
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
extern MethodInfo CultureInfo_get_Name_m7335_MethodInfo;
extern MethodInfo Object__ctor_m127_MethodInfo;
extern MethodInfo CultureInfo_get_Parent_m7336_MethodInfo;
extern MethodInfo CultureInfo_get_LCID_m7334_MethodInfo;
extern MethodInfo String_Concat_m591_MethodInfo;
extern MethodInfo Char_ToLowerInvariant_m6027_MethodInfo;
extern MethodInfo Char_ToUpperInvariant_m3966_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3869_MethodInfo;
extern MethodInfo String_get_Length_m133_MethodInfo;
extern MethodInfo String_InternalAllocateStr_m6117_MethodInfo;
extern MethodInfo RuntimeHelpers_get_OffsetToStringData_m6560_MethodInfo;
extern MethodInfo TextInfo_ToLower_m7456_MethodInfo;


// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.CultureInfo,System.Int32,System.Void*,System.Boolean)
extern MethodInfo TextInfo__ctor_m7450_MethodInfo;
extern "C" void TextInfo__ctor_m7450 (TextInfo_t1303 * __this, CultureInfo_t791 * ___ci, int32_t ___lcid, void* ___data, bool ___read_only, MethodInfo* method)
{
	CultureInfo_t791 * V_0 = {0};
	Data_t1424  V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___m_isReadOnly_0 = ___read_only;
		__this->___m_win32LangID_2 = ___lcid;
		__this->___ci_3 = ___ci;
		if (!___data)
		{
			goto IL_002d;
		}
	}
	{
		__this->___data_5 = (*(Data_t1424 *)___data);
		goto IL_0049;
	}

IL_002d:
	{
		Initobj (InitializedTypeInfo(&Data_t1424_il2cpp_TypeInfo), (&V_1));
		__this->___data_5 = V_1;
		Data_t1424 * L_0 = &(__this->___data_5);
		NullCheck(L_0);
		L_0->___list_sep_4 = ((int32_t)44);
	}

IL_0049:
	{
		V_0 = ___ci;
		goto IL_0054;
	}

IL_004d:
	{
		NullCheck(V_0);
		CultureInfo_t791 * L_1 = (CultureInfo_t791 *)VirtFuncInvoker0< CultureInfo_t791 * >::Invoke(&CultureInfo_get_Parent_m7336_MethodInfo, V_0);
		V_0 = L_1;
	}

IL_0054:
	{
		NullCheck(V_0);
		CultureInfo_t791 * L_2 = (CultureInfo_t791 *)VirtFuncInvoker0< CultureInfo_t791 * >::Invoke(&CultureInfo_get_Parent_m7336_MethodInfo, V_0);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		NullCheck(V_0);
		CultureInfo_t791 * L_3 = (CultureInfo_t791 *)VirtFuncInvoker0< CultureInfo_t791 * >::Invoke(&CultureInfo_get_Parent_m7336_MethodInfo, V_0);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7334_MethodInfo, L_3);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)127))))
		{
			goto IL_0074;
		}
	}
	{
		NullCheck(V_0);
		CultureInfo_t791 * L_5 = (CultureInfo_t791 *)VirtFuncInvoker0< CultureInfo_t791 * >::Invoke(&CultureInfo_get_Parent_m7336_MethodInfo, V_0);
		if ((((Object_t*)(CultureInfo_t791 *)L_5) != ((Object_t*)(CultureInfo_t791 *)V_0)))
		{
			goto IL_004d;
		}
	}

IL_0074:
	{
		if (!V_0)
		{
			goto IL_0093;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7334_MethodInfo, V_0);
		V_2 = L_6;
		if ((((int32_t)V_2) == ((int32_t)((int32_t)31))))
		{
			goto IL_008a;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)((int32_t)44))))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0093;
	}

IL_008a:
	{
		__this->___handleDotI_4 = 1;
		goto IL_0093;
	}

IL_0093:
	{
		return;
	}
}
// System.Void System.Globalization.TextInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern MethodInfo TextInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7451_MethodInfo;
extern "C" void TextInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7451 (TextInfo_t1303 * __this, Object_t * ___sender, MethodInfo* method)
{
	{
		return;
	}
}
// System.String System.Globalization.TextInfo::get_CultureName()
extern MethodInfo TextInfo_get_CultureName_m7452_MethodInfo;
extern "C" String_t* TextInfo_get_CultureName_m7452 (TextInfo_t1303 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___customCultureName_1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		CultureInfo_t791 * L_1 = (__this->___ci_3);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&CultureInfo_get_Name_m7335_MethodInfo, L_1);
		__this->___customCultureName_1 = L_2;
	}

IL_0019:
	{
		String_t* L_3 = (__this->___customCultureName_1);
		return L_3;
	}
}
// System.Boolean System.Globalization.TextInfo::Equals(System.Object)
extern MethodInfo TextInfo_Equals_m7453_MethodInfo;
extern "C" bool TextInfo_Equals_m7453 (TextInfo_t1303 * __this, Object_t * ___obj, MethodInfo* method)
{
	TextInfo_t1303 * V_0 = {0};
	{
		if (___obj)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = ((TextInfo_t1303 *)IsInst(___obj, InitializedTypeInfo(&TextInfo_t1303_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		NullCheck(V_0);
		int32_t L_0 = (V_0->___m_win32LangID_2);
		int32_t L_1 = (__this->___m_win32LangID_2);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		return 0;
	}

IL_0021:
	{
		NullCheck(V_0);
		CultureInfo_t791 * L_2 = (V_0->___ci_3);
		CultureInfo_t791 * L_3 = (__this->___ci_3);
		if ((((Object_t*)(CultureInfo_t791 *)L_2) == ((Object_t*)(CultureInfo_t791 *)L_3)))
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		return 1;
	}
}
// System.Int32 System.Globalization.TextInfo::GetHashCode()
extern MethodInfo TextInfo_GetHashCode_m7454_MethodInfo;
extern "C" int32_t TextInfo_GetHashCode_m7454 (TextInfo_t1303 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_win32LangID_2);
		return L_0;
	}
}
// System.String System.Globalization.TextInfo::ToString()
extern MethodInfo TextInfo_ToString_m7455_MethodInfo;
extern "C" String_t* TextInfo_ToString_m7455 (TextInfo_t1303 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_win32LangID_2);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m591(NULL /*static, unused*/, (String_t*) &_stringLiteral1585, L_2, /*hidden argument*/&String_Concat_m591_MethodInfo);
		return L_3;
	}
}
// System.Char System.Globalization.TextInfo::ToLower(System.Char)
extern "C" uint16_t TextInfo_ToLower_m7456 (TextInfo_t1303 * __this, uint16_t ___c, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		if ((((int32_t)___c) < ((int32_t)((int32_t)64))))
		{
			goto IL_0012;
		}
	}
	{
		if ((((int32_t)((int32_t)96)) >= ((int32_t)___c)))
		{
			goto IL_0014;
		}
	}
	{
		if ((((int32_t)___c) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return ___c;
	}

IL_0014:
	{
		if ((((int32_t)((int32_t)65)) > ((int32_t)___c)))
		{
			goto IL_0031;
		}
	}
	{
		if ((((int32_t)___c) > ((int32_t)((int32_t)90))))
		{
			goto IL_0031;
		}
	}
	{
		bool L_0 = (__this->___handleDotI_4);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		if ((((int32_t)___c) == ((int32_t)((int32_t)73))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		return (((uint16_t)((int32_t)((int32_t)___c+(int32_t)((int32_t)32)))));
	}

IL_0031:
	{
		CultureInfo_t791 * L_1 = (__this->___ci_3);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		CultureInfo_t791 * L_2 = (__this->___ci_3);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7334_MethodInfo, L_2);
		if ((((uint32_t)L_3) != ((uint32_t)((int32_t)127))))
		{
			goto IL_004f;
		}
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo));
		uint16_t L_4 = Char_ToLowerInvariant_m6027(NULL /*static, unused*/, ___c, /*hidden argument*/&Char_ToLowerInvariant_m6027_MethodInfo);
		return L_4;
	}

IL_004f:
	{
		V_0 = ___c;
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)453))) == 0)
		{
			goto IL_00b7;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)453))) == 1)
		{
			goto IL_006d;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)453))) == 2)
		{
			goto IL_006d;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)453))) == 3)
		{
			goto IL_00bd;
		}
	}

IL_006d:
	{
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)978))) == 0)
		{
			goto IL_00cf;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)978))) == 1)
		{
			goto IL_00d5;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)978))) == 2)
		{
			goto IL_00db;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)73))))
		{
			goto IL_00a4;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)304))))
		{
			goto IL_00b4;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)459))))
		{
			goto IL_00c3;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)498))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00e1;
	}

IL_00a4:
	{
		bool L_5 = (__this->___handleDotI_4);
		if (!L_5)
		{
			goto IL_00b2;
		}
	}
	{
		return ((int32_t)305);
	}

IL_00b2:
	{
		goto IL_00e1;
	}

IL_00b4:
	{
		return ((int32_t)105);
	}

IL_00b7:
	{
		return ((int32_t)454);
	}

IL_00bd:
	{
		return ((int32_t)457);
	}

IL_00c3:
	{
		return ((int32_t)460);
	}

IL_00c9:
	{
		return ((int32_t)499);
	}

IL_00cf:
	{
		return ((int32_t)965);
	}

IL_00d5:
	{
		return ((int32_t)973);
	}

IL_00db:
	{
		return ((int32_t)971);
	}

IL_00e1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo));
		uint16_t L_6 = Char_ToLowerInvariant_m6027(NULL /*static, unused*/, ___c, /*hidden argument*/&Char_ToLowerInvariant_m6027_MethodInfo);
		return L_6;
	}
}
// System.Char System.Globalization.TextInfo::ToUpper(System.Char)
extern MethodInfo TextInfo_ToUpper_m7457_MethodInfo;
extern "C" uint16_t TextInfo_ToUpper_m7457 (TextInfo_t1303 * __this, uint16_t ___c, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		if ((((int32_t)___c) >= ((int32_t)((int32_t)96))))
		{
			goto IL_0007;
		}
	}
	{
		return ___c;
	}

IL_0007:
	{
		if ((((int32_t)((int32_t)97)) > ((int32_t)___c)))
		{
			goto IL_0024;
		}
	}
	{
		if ((((int32_t)___c) > ((int32_t)((int32_t)122))))
		{
			goto IL_0024;
		}
	}
	{
		bool L_0 = (__this->___handleDotI_4);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		if ((((int32_t)___c) == ((int32_t)((int32_t)105))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		return (((uint16_t)((int32_t)((int32_t)___c-(int32_t)((int32_t)32)))));
	}

IL_0024:
	{
		CultureInfo_t791 * L_1 = (__this->___ci_3);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		CultureInfo_t791 * L_2 = (__this->___ci_3);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7334_MethodInfo, L_2);
		if ((((uint32_t)L_3) != ((uint32_t)((int32_t)127))))
		{
			goto IL_0042;
		}
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo));
		uint16_t L_4 = Char_ToUpperInvariant_m3966(NULL /*static, unused*/, ___c, /*hidden argument*/&Char_ToUpperInvariant_m3966_MethodInfo);
		return L_4;
	}

IL_0042:
	{
		V_0 = ___c;
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)976))) == 0)
		{
			goto IL_0104;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)976))) == 1)
		{
			goto IL_010a;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)976))) == 2)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)976))) == 3)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)976))) == 4)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)976))) == 5)
		{
			goto IL_0110;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)976))) == 6)
		{
			goto IL_0116;
		}
	}

IL_006c:
	{
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)453))) == 0)
		{
			goto IL_00e0;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)453))) == 1)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)453))) == 2)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)V_0-(int32_t)((int32_t)453))) == 3)
		{
			goto IL_00e6;
		}
	}

IL_0088:
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)1008))))
		{
			goto IL_011c;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)1009))))
		{
			goto IL_0122;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)105))))
		{
			goto IL_00cd;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)305))))
		{
			goto IL_00dd;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)459))))
		{
			goto IL_00ec;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)498))))
		{
			goto IL_00f2;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)912))))
		{
			goto IL_00f8;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)944))))
		{
			goto IL_00fe;
		}
	}
	{
		goto IL_0128;
	}

IL_00cd:
	{
		bool L_5 = (__this->___handleDotI_4);
		if (!L_5)
		{
			goto IL_00db;
		}
	}
	{
		return ((int32_t)304);
	}

IL_00db:
	{
		goto IL_0128;
	}

IL_00dd:
	{
		return ((int32_t)73);
	}

IL_00e0:
	{
		return ((int32_t)452);
	}

IL_00e6:
	{
		return ((int32_t)455);
	}

IL_00ec:
	{
		return ((int32_t)458);
	}

IL_00f2:
	{
		return ((int32_t)497);
	}

IL_00f8:
	{
		return ((int32_t)938);
	}

IL_00fe:
	{
		return ((int32_t)939);
	}

IL_0104:
	{
		return ((int32_t)914);
	}

IL_010a:
	{
		return ((int32_t)920);
	}

IL_0110:
	{
		return ((int32_t)934);
	}

IL_0116:
	{
		return ((int32_t)928);
	}

IL_011c:
	{
		return ((int32_t)922);
	}

IL_0122:
	{
		return ((int32_t)929);
	}

IL_0128:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo));
		uint16_t L_6 = Char_ToUpperInvariant_m3966(NULL /*static, unused*/, ___c, /*hidden argument*/&Char_ToUpperInvariant_m3966_MethodInfo);
		return L_6;
	}
}
// System.String System.Globalization.TextInfo::ToLower(System.String)
extern MethodInfo TextInfo_ToLower_m7458_MethodInfo;
extern "C" String_t* TextInfo_ToLower_m7458 (TextInfo_t1303 * __this, String_t* ___str, MethodInfo* method)
{
	String_t* V_0 = {0};
	uint16_t* V_1 = {0};
	uint16_t* V_2 = {0};
	uint16_t* V_3 = {0};
	uint16_t* V_4 = {0};
	int32_t V_5 = 0;
	String_t* V_6 = {0};
	String_t* V_7 = {0};
	{
		if (___str)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1586, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		NullCheck(___str);
		int32_t L_1 = String_get_Length_m133(___str, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}

IL_001c:
	{
		NullCheck(___str);
		int32_t L_2 = String_get_Length_m133(___str, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_InternalAllocateStr_m6117(NULL /*static, unused*/, L_2, /*hidden argument*/&String_InternalAllocateStr_m6117_MethodInfo);
		V_0 = L_3;
		V_6 = ___str;
		int32_t L_4 = RuntimeHelpers_get_OffsetToStringData_m6560(NULL /*static, unused*/, /*hidden argument*/&RuntimeHelpers_get_OffsetToStringData_m6560_MethodInfo);
		V_1 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)V_6))+(int32_t)L_4));
		V_7 = V_0;
		int32_t L_5 = RuntimeHelpers_get_OffsetToStringData_m6560(NULL /*static, unused*/, /*hidden argument*/&RuntimeHelpers_get_OffsetToStringData_m6560_MethodInfo);
		V_2 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)V_7))+(int32_t)L_5));
		V_3 = (uint16_t*)V_2;
		V_4 = (uint16_t*)V_1;
		V_5 = 0;
		goto IL_0069;
	}

IL_004c:
	{
		uint16_t L_6 = (uint16_t)VirtFuncInvoker1< uint16_t, uint16_t >::Invoke(&TextInfo_ToLower_m7456_MethodInfo, __this, (*((uint16_t*)V_4)));
		*((int16_t*)(V_3)) = (int16_t)L_6;
		V_4 = (uint16_t*)((intptr_t)((intptr_t)V_4+(intptr_t)(((intptr_t)2))));
		V_3 = (uint16_t*)((intptr_t)((intptr_t)V_3+(intptr_t)(((intptr_t)2))));
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_0069:
	{
		NullCheck(___str);
		int32_t L_7 = String_get_Length_m133(___str, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)V_5) < ((int32_t)L_7)))
		{
			goto IL_004c;
		}
	}
	{
		V_6 = (String_t*)NULL;
		V_7 = (String_t*)NULL;
		return V_0;
	}
}
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnicodeCategory_t832_il2cpp_TypeInfo;
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategoryMethodDeclarations.h"



// System.IO.IsolatedStorage.IsolatedStorageException
#include "mscorlib_System_IO_IsolatedStorage_IsolatedStorageException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IsolatedStorageException_t1425_il2cpp_TypeInfo;
// System.IO.IsolatedStorage.IsolatedStorageException
#include "mscorlib_System_IO_IsolatedStorage_IsolatedStorageExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Locale_GetText_m6561_MethodInfo;
extern MethodInfo Exception__ctor_m3900_MethodInfo;
extern MethodInfo Exception__ctor_m5537_MethodInfo;


// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor()
extern MethodInfo IsolatedStorageException__ctor_m7459_MethodInfo;
extern "C" void IsolatedStorageException__ctor_m7459 (IsolatedStorageException_t1425 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1587, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		Exception__ctor_m3900(__this, L_0, /*hidden argument*/&Exception__ctor_m3900_MethodInfo);
		return;
	}
}
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.String)
extern MethodInfo IsolatedStorageException__ctor_m7460_MethodInfo;
extern "C" void IsolatedStorageException__ctor_m7460 (IsolatedStorageException_t1425 * __this, String_t* ___message, MethodInfo* method)
{
	{
		Exception__ctor_m3900(__this, ___message, /*hidden argument*/&Exception__ctor_m3900_MethodInfo);
		return;
	}
}
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo IsolatedStorageException__ctor_m7461_MethodInfo;
extern "C" void IsolatedStorageException__ctor_m7461 (IsolatedStorageException_t1425 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		Exception__ctor_m5537(__this, ___info, ___context, /*hidden argument*/&Exception__ctor_m5537_MethodInfo);
		return;
	}
}
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BinaryReader_t1428_il2cpp_TypeInfo;
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReaderMethodDeclarations.h"

// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Text.Decoder
#include "mscorlib_System_Text_Decoder.h"
#include "mscorlib_ArrayTypes.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOException.h"
// System.IO.EndOfStreamException
#include "mscorlib_System_IO_EndOfStreamException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.BitConverter
#include "mscorlib_System_BitConverter.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
extern TypeInfo Encoding_t805_il2cpp_TypeInfo;
extern TypeInfo Stream_t1426_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t522_il2cpp_TypeInfo;
extern TypeInfo Decoder_t1427_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t13_il2cpp_TypeInfo;
extern TypeInfo Byte_t41_il2cpp_TypeInfo;
extern TypeInfo Void_t42_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1831_il2cpp_TypeInfo;
extern TypeInfo IOException_t1433_il2cpp_TypeInfo;
extern TypeInfo EndOfStreamException_t1434_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t45_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t786_il2cpp_TypeInfo;
extern TypeInfo FormatException_t774_il2cpp_TypeInfo;
extern TypeInfo BitConverter_t48_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t154_il2cpp_TypeInfo;
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOExceptionMethodDeclarations.h"
// System.IO.EndOfStreamException
#include "mscorlib_System_IO_EndOfStreamExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.BitConverter
#include "mscorlib_System_BitConverterMethodDeclarations.h"
// Mono.Security.BitConverterLE
#include "mscorlib_Mono_Security_BitConverterLEMethodDeclarations.h"
// System.Text.Decoder
#include "mscorlib_System_Text_DecoderMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t13_0_0_0;
extern Il2CppType CharU5BU5D_t45_0_0_0;
extern MethodInfo Encoding_get_UTF8UnmarkedUnsafe_m9226_MethodInfo;
extern MethodInfo BinaryReader__ctor_m7463_MethodInfo;
extern MethodInfo Stream_get_CanRead_m10307_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2758_MethodInfo;
extern MethodInfo Encoding_GetDecoder_m9213_MethodInfo;
extern MethodInfo BinaryReader_Dispose_m7465_MethodInfo;
extern MethodInfo Stream_Close_m7650_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m10088_MethodInfo;
extern MethodInfo IOException__ctor_m7574_MethodInfo;
extern MethodInfo BinaryReader_CheckBuffer_m7486_MethodInfo;
extern MethodInfo Stream_Read_m10308_MethodInfo;
extern MethodInfo EndOfStreamException__ctor_m7504_MethodInfo;
extern MethodInfo BinaryReader_Read_m7469_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3870_MethodInfo;
extern MethodInfo BinaryReader_ReadCharBytes_m7470_MethodInfo;
extern MethodInfo Stream_ReadByte_m7651_MethodInfo;
extern MethodInfo Encoding_GetChars_m10309_MethodInfo;
extern MethodInfo BinaryReader_ReadByte_m7473_MethodInfo;
extern MethodInfo FormatException__ctor_m3901_MethodInfo;
extern MethodInfo BinaryReader_Read_m7467_MethodInfo;
extern MethodInfo BinaryReader_FillBuffer_m7466_MethodInfo;
extern MethodInfo BitConverterLE_ToDouble_m6994_MethodInfo;
extern MethodInfo BinaryReader_Read7BitEncodedInt_m7471_MethodInfo;
extern MethodInfo Decoder_GetChars_m10310_MethodInfo;
extern MethodInfo String__ctor_m6032_MethodInfo;
extern MethodInfo StringBuilder__ctor_m5525_MethodInfo;
extern MethodInfo StringBuilder_Append_m9258_MethodInfo;
extern MethodInfo StringBuilder_ToString_m716_MethodInfo;
extern MethodInfo BitConverterLE_ToSingle_m6993_MethodInfo;
extern MethodInfo Buffer_BlockCopyInternal_m9478_MethodInfo;


// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern MethodInfo BinaryReader__ctor_m7462_MethodInfo;
extern "C" void BinaryReader__ctor_m7462 (BinaryReader_t1428 * __this, Stream_t1426 * ___input, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_0 = Encoding_get_UTF8UnmarkedUnsafe_m9226(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8UnmarkedUnsafe_m9226_MethodInfo);
		BinaryReader__ctor_m7463(__this, ___input, L_0, /*hidden argument*/&BinaryReader__ctor_m7463_MethodInfo);
		return;
	}
}
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void BinaryReader__ctor_m7463 (BinaryReader_t1428 * __this, Stream_t1426 * ___input, Encoding_t805 * ___encoding, MethodInfo* method)
{
	static bool BinaryReader__ctor_m7463_init;
	if (!BinaryReader__ctor_m7463_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		BinaryReader__ctor_m7463_init = true;
	}
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		if (!___input)
		{
			goto IL_000c;
		}
	}
	{
		if (___encoding)
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1588, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, L_0, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001c:
	{
		NullCheck(___input);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanRead_m10307_MethodInfo, ___input);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1589, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, L_3, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0034:
	{
		__this->___m_stream_0 = ___input;
		__this->___m_encoding_1 = ___encoding;
		NullCheck(___encoding);
		Decoder_t1427 * L_5 = (Decoder_t1427 *)VirtFuncInvoker0< Decoder_t1427 * >::Invoke(&Encoding_GetDecoder_m9213_MethodInfo, ___encoding);
		__this->___decoder_3 = L_5;
		__this->___m_buffer_2 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, ((int32_t)32)));
		return;
	}
}
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
extern MethodInfo BinaryReader_System_IDisposable_Dispose_m7464_MethodInfo;
extern "C" void BinaryReader_System_IDisposable_Dispose_m7464 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&BinaryReader_Dispose_m7465_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
extern "C" void BinaryReader_Dispose_m7465 (BinaryReader_t1428 * __this, bool ___disposing, MethodInfo* method)
{
	{
		if (!___disposing)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t1426 * L_0 = (__this->___m_stream_0);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t1426 * L_1 = (__this->___m_stream_0);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&Stream_Close_m7650_MethodInfo, L_1);
	}

IL_0016:
	{
		__this->___m_disposed_5 = 1;
		__this->___m_buffer_2 = (ByteU5BU5D_t13*)NULL;
		__this->___m_encoding_1 = (Encoding_t805 *)NULL;
		__this->___m_stream_0 = (Stream_t1426 *)NULL;
		__this->___charBuffer_4 = (CharU5BU5D_t45*)NULL;
		return;
	}
}
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
extern "C" void BinaryReader_FillBuffer_m7466 (BinaryReader_t1428 * __this, int32_t ___numBytes, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->___m_disposed_5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_1, (String_t*) &_stringLiteral1590, (String_t*) &_stringLiteral1591, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		Stream_t1426 * L_2 = (__this->___m_stream_0);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IOException_t1433 * L_3 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_3, (String_t*) &_stringLiteral1592, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		BinaryReader_CheckBuffer_m7486(__this, ___numBytes, /*hidden argument*/&BinaryReader_CheckBuffer_m7486_MethodInfo);
		V_0 = 0;
		goto IL_0059;
	}

IL_0036:
	{
		Stream_t1426 * L_4 = (__this->___m_stream_0);
		ByteU5BU5D_t13* L_5 = (__this->___m_buffer_2);
		NullCheck(L_4);
		int32_t L_6 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Read_m10308_MethodInfo, L_4, L_5, V_0, ((int32_t)((int32_t)___numBytes-(int32_t)V_0)));
		V_1 = L_6;
		if (V_1)
		{
			goto IL_0055;
		}
	}
	{
		EndOfStreamException_t1434 * L_7 = (EndOfStreamException_t1434 *)il2cpp_codegen_object_new (InitializedTypeInfo(&EndOfStreamException_t1434_il2cpp_TypeInfo));
		EndOfStreamException__ctor_m7504(L_7, /*hidden argument*/&EndOfStreamException__ctor_m7504_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0055:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)V_1));
	}

IL_0059:
	{
		if ((((int32_t)V_0) < ((int32_t)___numBytes)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
// System.Int32 System.IO.BinaryReader::Read()
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" int32_t BinaryReader_Read_m7467 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	static bool BinaryReader_Read_m7467_init;
	if (!BinaryReader_Read_m7467_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		BinaryReader_Read_m7467_init = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t45* L_0 = (__this->___charBuffer_4);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		__this->___charBuffer_4 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, ((int32_t)128)));
	}

IL_0018:
	{
		CharU5BU5D_t45* L_1 = (__this->___charBuffer_4);
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t45*, int32_t, int32_t >::Invoke(&BinaryReader_Read_m7469_MethodInfo, __this, L_1, 0, 1);
		V_0 = L_2;
		if (V_0)
		{
			goto IL_002c;
		}
	}
	{
		return (-1);
	}

IL_002c:
	{
		CharU5BU5D_t45* L_3 = (__this->___charBuffer_4);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_4));
	}
}
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
extern MethodInfo BinaryReader_Read_m7468_MethodInfo;
extern "C" int32_t BinaryReader_Read_m7468 (BinaryReader_t1428 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Stream_t1426 * L_0 = (__this->___m_stream_0);
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1 = (__this->___m_disposed_5);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_2, (String_t*) &_stringLiteral1590, (String_t*) &_stringLiteral1591, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		IOException_t1433 * L_3 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_3, (String_t*) &_stringLiteral1592, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		if (___buffer)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentNullException_t785 * L_4 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_4, (String_t*) &_stringLiteral1593, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0039:
	{
		if ((((int32_t)___index) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_5 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_5, (String_t*) &_stringLiteral406, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_6 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_6, (String_t*) &_stringLiteral1594, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0057:
	{
		NullCheck(___buffer);
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length)))-(int32_t)___index))) >= ((int32_t)___count)))
		{
			goto IL_006a;
		}
	}
	{
		ArgumentException_t522 * L_7 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_7, (String_t*) &_stringLiteral1595, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_006a:
	{
		Stream_t1426 * L_8 = (__this->___m_stream_0);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Read_m10308_MethodInfo, L_8, ___buffer, ___index, ___count);
		V_0 = L_9;
		return V_0;
	}
}
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m7469 (BinaryReader_t1428 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Stream_t1426 * L_0 = (__this->___m_stream_0);
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1 = (__this->___m_disposed_5);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_2, (String_t*) &_stringLiteral1590, (String_t*) &_stringLiteral1591, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		IOException_t1433 * L_3 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_3, (String_t*) &_stringLiteral1592, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		if (___buffer)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentNullException_t785 * L_4 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_4, (String_t*) &_stringLiteral1593, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0039:
	{
		if ((((int32_t)___index) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_5 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_5, (String_t*) &_stringLiteral406, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_6 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_6, (String_t*) &_stringLiteral1594, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0057:
	{
		NullCheck(___buffer);
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length)))-(int32_t)___index))) >= ((int32_t)___count)))
		{
			goto IL_006a;
		}
	}
	{
		ArgumentException_t522 * L_7 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_7, (String_t*) &_stringLiteral1595, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_006a:
	{
		int32_t L_8 = BinaryReader_ReadCharBytes_m7470(__this, ___buffer, ___index, ___count, (&V_0), /*hidden argument*/&BinaryReader_ReadCharBytes_m7470_MethodInfo);
		return L_8;
	}
}
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C" int32_t BinaryReader_ReadCharBytes_m7470 (BinaryReader_t1428 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		*((int32_t*)(___bytes_read)) = (int32_t)0;
		goto IL_005f;
	}

IL_0008:
	{
		V_1 = 0;
	}

IL_000a:
	{
		BinaryReader_CheckBuffer_m7486(__this, ((int32_t)((int32_t)V_1+(int32_t)1)), /*hidden argument*/&BinaryReader_CheckBuffer_m7486_MethodInfo);
		Stream_t1426 * L_0 = (__this->___m_stream_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Stream_ReadByte_m7651_MethodInfo, L_0);
		V_2 = L_1;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0025;
		}
	}
	{
		return V_0;
	}

IL_0025:
	{
		ByteU5BU5D_t13* L_2 = (__this->___m_buffer_2);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3)) = (uint8_t)(((uint8_t)V_2));
		*((int32_t*)(___bytes_read)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)___bytes_read))+(int32_t)1));
		Encoding_t805 * L_4 = (__this->___m_encoding_1);
		ByteU5BU5D_t13* L_5 = (__this->___m_buffer_2);
		NullCheck(L_4);
		int32_t L_6 = (int32_t)VirtFuncInvoker5< int32_t, ByteU5BU5D_t13*, int32_t, int32_t, CharU5BU5D_t45*, int32_t >::Invoke(&Encoding_GetChars_m10309_MethodInfo, L_4, L_5, 0, V_1, ___buffer, ((int32_t)((int32_t)___index+(int32_t)V_0)));
		V_3 = L_6;
		if ((((int32_t)V_3) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_005b;
	}

IL_0059:
	{
		goto IL_000a;
	}

IL_005b:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_005f:
	{
		if ((((int32_t)V_0) < ((int32_t)___count)))
		{
			goto IL_0008;
		}
	}
	{
		return V_0;
	}
}
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
extern "C" int32_t BinaryReader_Read7BitEncodedInt_m7471 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_002e;
	}

IL_0008:
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m7473_MethodInfo, __this);
		V_3 = L_0;
		V_0 = ((int32_t)((int32_t)V_0|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_3&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)V_1&(int32_t)((int32_t)31)))))));
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)7));
		if (((int32_t)((int32_t)V_3&(int32_t)((int32_t)128))))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_0032;
	}

IL_002a:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_002e:
	{
		if ((((int32_t)V_2) < ((int32_t)5)))
		{
			goto IL_0008;
		}
	}

IL_0032:
	{
		if ((((int32_t)V_2) >= ((int32_t)5)))
		{
			goto IL_0038;
		}
	}
	{
		return V_0;
	}

IL_0038:
	{
		FormatException_t774 * L_1 = (FormatException_t774 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t774_il2cpp_TypeInfo));
		FormatException__ctor_m3901(L_1, (String_t*) &_stringLiteral1596, /*hidden argument*/&FormatException__ctor_m3901_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Boolean System.IO.BinaryReader::ReadBoolean()
extern MethodInfo BinaryReader_ReadBoolean_m7472_MethodInfo;
extern "C" bool BinaryReader_ReadBoolean_m7472 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m7473_MethodInfo, __this);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Byte System.IO.BinaryReader::ReadByte()
extern "C" uint8_t BinaryReader_ReadByte_m7473 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Stream_t1426 * L_0 = (__this->___m_stream_0);
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1 = (__this->___m_disposed_5);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_2, (String_t*) &_stringLiteral1590, (String_t*) &_stringLiteral1591, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		IOException_t1433 * L_3 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_3, (String_t*) &_stringLiteral1592, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		Stream_t1426 * L_4 = (__this->___m_stream_0);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Stream_ReadByte_m7651_MethodInfo, L_4);
		V_0 = L_5;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_003e;
		}
	}
	{
		return (((uint8_t)V_0));
	}

IL_003e:
	{
		EndOfStreamException_t1434 * L_6 = (EndOfStreamException_t1434 *)il2cpp_codegen_object_new (InitializedTypeInfo(&EndOfStreamException_t1434_il2cpp_TypeInfo));
		EndOfStreamException__ctor_m7504(L_6, /*hidden argument*/&EndOfStreamException__ctor_m7504_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Char System.IO.BinaryReader::ReadChar()
extern MethodInfo BinaryReader_ReadChar_m7474_MethodInfo;
extern "C" uint16_t BinaryReader_ReadChar_m7474 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_Read_m7467_MethodInfo, __this);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_0011;
		}
	}
	{
		EndOfStreamException_t1434 * L_1 = (EndOfStreamException_t1434 *)il2cpp_codegen_object_new (InitializedTypeInfo(&EndOfStreamException_t1434_il2cpp_TypeInfo));
		EndOfStreamException__ctor_m7504(L_1, /*hidden argument*/&EndOfStreamException__ctor_m7504_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		return (((uint16_t)V_0));
	}
}
// System.Decimal System.IO.BinaryReader::ReadDecimal()
extern MethodInfo BinaryReader_ReadDecimal_m7475_MethodInfo;
extern "C" Decimal_t881  BinaryReader_ReadDecimal_m7475 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	Decimal_t881  V_0 = {0};
	uint8_t* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, ((int32_t)16));
		V_1 = (uint8_t*)(&V_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BitConverter_t48_il2cpp_TypeInfo));
		if (!(((BitConverter_t48_StaticFields*)InitializedTypeInfo(&BitConverter_t48_il2cpp_TypeInfo)->static_fields)->___IsLittleEndian_1))
		{
			goto IL_0072;
		}
	}
	{
		V_2 = 0;
		goto IL_006b;
	}

IL_0016:
	{
		if ((((int32_t)V_2) >= ((int32_t)4)))
		{
			goto IL_002a;
		}
	}
	{
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, V_2);
		int32_t L_1 = V_2;
		*((int8_t*)(((intptr_t)((intptr_t)V_1+(int32_t)((int32_t)((int32_t)V_2+(int32_t)8)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1));
		goto IL_0067;
	}

IL_002a:
	{
		if ((((int32_t)V_2) >= ((int32_t)8)))
		{
			goto IL_003e;
		}
	}
	{
		ByteU5BU5D_t13* L_2 = (__this->___m_buffer_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, V_2);
		int32_t L_3 = V_2;
		*((int8_t*)(((intptr_t)((intptr_t)V_1+(int32_t)((int32_t)((int32_t)V_2+(int32_t)8)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3));
		goto IL_0067;
	}

IL_003e:
	{
		if ((((int32_t)V_2) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0053;
		}
	}
	{
		ByteU5BU5D_t13* L_4 = (__this->___m_buffer_2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_2);
		int32_t L_5 = V_2;
		*((int8_t*)(((intptr_t)((intptr_t)V_1+(int32_t)((int32_t)((int32_t)V_2-(int32_t)4)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5));
		goto IL_0067;
	}

IL_0053:
	{
		if ((((int32_t)V_2) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0067;
		}
	}
	{
		ByteU5BU5D_t13* L_6 = (__this->___m_buffer_2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_2);
		int32_t L_7 = V_2;
		*((int8_t*)(((intptr_t)((intptr_t)V_1+(int32_t)((int32_t)((int32_t)V_2-(int32_t)((int32_t)12))))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7));
	}

IL_0067:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_006b:
	{
		if ((((int32_t)V_2) < ((int32_t)((int32_t)16))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_00d3;
	}

IL_0072:
	{
		V_3 = 0;
		goto IL_00ce;
	}

IL_0076:
	{
		if ((((int32_t)V_3) >= ((int32_t)4)))
		{
			goto IL_008b;
		}
	}
	{
		ByteU5BU5D_t13* L_8 = (__this->___m_buffer_2);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, V_3);
		int32_t L_9 = V_3;
		*((int8_t*)(((intptr_t)((intptr_t)V_1+(int32_t)((int32_t)((int32_t)((int32_t)11)-(int32_t)V_3)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9));
		goto IL_00ca;
	}

IL_008b:
	{
		if ((((int32_t)V_3) >= ((int32_t)8)))
		{
			goto IL_00a0;
		}
	}
	{
		ByteU5BU5D_t13* L_10 = (__this->___m_buffer_2);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_3);
		int32_t L_11 = V_3;
		*((int8_t*)(((intptr_t)((intptr_t)V_1+(int32_t)((int32_t)((int32_t)((int32_t)19)-(int32_t)V_3)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11));
		goto IL_00ca;
	}

IL_00a0:
	{
		if ((((int32_t)V_3) >= ((int32_t)((int32_t)12))))
		{
			goto IL_00b6;
		}
	}
	{
		ByteU5BU5D_t13* L_12 = (__this->___m_buffer_2);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, V_3);
		int32_t L_13 = V_3;
		*((int8_t*)(((intptr_t)((intptr_t)V_1+(int32_t)((int32_t)((int32_t)((int32_t)15)-(int32_t)V_3)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13));
		goto IL_00ca;
	}

IL_00b6:
	{
		if ((((int32_t)V_3) >= ((int32_t)((int32_t)16))))
		{
			goto IL_00ca;
		}
	}
	{
		ByteU5BU5D_t13* L_14 = (__this->___m_buffer_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, V_3);
		int32_t L_15 = V_3;
		*((int8_t*)(((intptr_t)((intptr_t)V_1+(int32_t)((int32_t)((int32_t)((int32_t)15)-(int32_t)V_3)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15));
	}

IL_00ca:
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_00ce:
	{
		if ((((int32_t)V_3) < ((int32_t)((int32_t)16))))
		{
			goto IL_0076;
		}
	}

IL_00d3:
	{
		return V_0;
	}
}
// System.Double System.IO.BinaryReader::ReadDouble()
extern MethodInfo BinaryReader_ReadDouble_m7476_MethodInfo;
extern "C" double BinaryReader_ReadDouble_m7476 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, 8);
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		double L_1 = BitConverterLE_ToDouble_m6994(NULL /*static, unused*/, L_0, 0, /*hidden argument*/&BitConverterLE_ToDouble_m6994_MethodInfo);
		return L_1;
	}
}
// System.Int16 System.IO.BinaryReader::ReadInt16()
extern MethodInfo BinaryReader_ReadInt16_m7477_MethodInfo;
extern "C" int16_t BinaryReader_ReadInt16_m7477 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, 2);
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		ByteU5BU5D_t13* L_2 = (__this->___m_buffer_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		return (((int16_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))));
	}
}
// System.Int32 System.IO.BinaryReader::ReadInt32()
extern MethodInfo BinaryReader_ReadInt32_m7478_MethodInfo;
extern "C" int32_t BinaryReader_ReadInt32_m7478 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, 4);
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		ByteU5BU5D_t13* L_2 = (__this->___m_buffer_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		ByteU5BU5D_t13* L_4 = (__this->___m_buffer_2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		int32_t L_5 = 2;
		ByteU5BU5D_t13* L_6 = (__this->___m_buffer_2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		int32_t L_7 = 3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
	}
}
// System.Int64 System.IO.BinaryReader::ReadInt64()
extern MethodInfo BinaryReader_ReadInt64_m7479_MethodInfo;
extern "C" int64_t BinaryReader_ReadInt64_m7479 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, 8);
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		ByteU5BU5D_t13* L_2 = (__this->___m_buffer_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		ByteU5BU5D_t13* L_4 = (__this->___m_buffer_2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		int32_t L_5 = 2;
		ByteU5BU5D_t13* L_6 = (__this->___m_buffer_2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		int32_t L_7 = 3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
		ByteU5BU5D_t13* L_8 = (__this->___m_buffer_2);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		int32_t L_9 = 4;
		ByteU5BU5D_t13* L_10 = (__this->___m_buffer_2);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		int32_t L_11 = 5;
		ByteU5BU5D_t13* L_12 = (__this->___m_buffer_2);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 6);
		int32_t L_13 = 6;
		ByteU5BU5D_t13* L_14 = (__this->___m_buffer_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		int32_t L_15 = 7;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)((int32_t)24)))));
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((uint64_t)V_1))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)V_0))));
	}
}
// System.SByte System.IO.BinaryReader::ReadSByte()
extern MethodInfo BinaryReader_ReadSByte_m7480_MethodInfo;
extern "C" int8_t BinaryReader_ReadSByte_m7480 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m7473_MethodInfo, __this);
		return (((int8_t)L_0));
	}
}
// System.String System.IO.BinaryReader::ReadString()
extern MethodInfo BinaryReader_ReadString_m7481_MethodInfo;
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" String_t* BinaryReader_ReadString_m7481 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	static bool BinaryReader_ReadString_m7481_init;
	if (!BinaryReader_ReadString_m7481_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		BinaryReader_ReadString_m7481_init = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t154 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = BinaryReader_Read7BitEncodedInt_m7471(__this, /*hidden argument*/&BinaryReader_Read7BitEncodedInt_m7471_MethodInfo);
		V_0 = L_0;
		if ((((int32_t)V_0) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		IOException_t1433 * L_1 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_1, (String_t*) &_stringLiteral1597, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		if (V_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}

IL_001f:
	{
		CharU5BU5D_t45* L_2 = (__this->___charBuffer_4);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__this->___charBuffer_4 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, ((int32_t)128)));
	}

IL_0037:
	{
		V_1 = (StringBuilder_t154 *)NULL;
	}

IL_0039:
	{
		if ((((int32_t)V_0) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = ((int32_t)128);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = V_0;
	}

IL_0049:
	{
		V_2 = G_B10_0;
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, V_2);
		Decoder_t1427 * L_3 = (__this->___decoder_3);
		ByteU5BU5D_t13* L_4 = (__this->___m_buffer_2);
		CharU5BU5D_t45* L_5 = (__this->___charBuffer_4);
		NullCheck(L_3);
		int32_t L_6 = (int32_t)VirtFuncInvoker5< int32_t, ByteU5BU5D_t13*, int32_t, int32_t, CharU5BU5D_t45*, int32_t >::Invoke(&Decoder_GetChars_m10310_MethodInfo, L_3, L_4, 0, V_2, L_5, 0);
		V_3 = L_6;
		if (V_1)
		{
			goto IL_0081;
		}
	}
	{
		if ((((uint32_t)V_2) != ((uint32_t)V_0)))
		{
			goto IL_0081;
		}
	}
	{
		CharU5BU5D_t45* L_7 = (__this->___charBuffer_4);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_8 = String_CreateString_m6106(L_8, L_7, 0, V_3, /*hidden argument*/&String__ctor_m6032_MethodInfo);
		return L_8;
	}

IL_0081:
	{
		if (V_1)
		{
			goto IL_008b;
		}
	}
	{
		StringBuilder_t154 * L_9 = (StringBuilder_t154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t154_il2cpp_TypeInfo));
		StringBuilder__ctor_m5525(L_9, V_0, /*hidden argument*/&StringBuilder__ctor_m5525_MethodInfo);
		V_1 = L_9;
	}

IL_008b:
	{
		CharU5BU5D_t45* L_10 = (__this->___charBuffer_4);
		NullCheck(V_1);
		StringBuilder_Append_m9258(V_1, L_10, 0, V_3, /*hidden argument*/&StringBuilder_Append_m9258_MethodInfo);
		V_0 = ((int32_t)((int32_t)V_0-(int32_t)V_2));
		if ((((int32_t)V_0) > ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		NullCheck(V_1);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m716_MethodInfo, V_1);
		return L_11;
	}
}
// System.Single System.IO.BinaryReader::ReadSingle()
extern MethodInfo BinaryReader_ReadSingle_m7482_MethodInfo;
extern "C" float BinaryReader_ReadSingle_m7482 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, 4);
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		float L_1 = BitConverterLE_ToSingle_m6993(NULL /*static, unused*/, L_0, 0, /*hidden argument*/&BitConverterLE_ToSingle_m6993_MethodInfo);
		return L_1;
	}
}
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
extern MethodInfo BinaryReader_ReadUInt16_m7483_MethodInfo;
extern "C" uint16_t BinaryReader_ReadUInt16_m7483 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, 2);
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		ByteU5BU5D_t13* L_2 = (__this->___m_buffer_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		return (((uint16_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))));
	}
}
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
extern MethodInfo BinaryReader_ReadUInt32_m7484_MethodInfo;
extern "C" uint32_t BinaryReader_ReadUInt32_m7484 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, 4);
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		ByteU5BU5D_t13* L_2 = (__this->___m_buffer_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		ByteU5BU5D_t13* L_4 = (__this->___m_buffer_2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		int32_t L_5 = 2;
		ByteU5BU5D_t13* L_6 = (__this->___m_buffer_2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		int32_t L_7 = 3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
	}
}
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
extern MethodInfo BinaryReader_ReadUInt64_m7485_MethodInfo;
extern "C" uint64_t BinaryReader_ReadUInt64_m7485 (BinaryReader_t1428 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&BinaryReader_FillBuffer_m7466_MethodInfo, __this, 8);
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		ByteU5BU5D_t13* L_2 = (__this->___m_buffer_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		ByteU5BU5D_t13* L_4 = (__this->___m_buffer_2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		int32_t L_5 = 2;
		ByteU5BU5D_t13* L_6 = (__this->___m_buffer_2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		int32_t L_7 = 3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
		ByteU5BU5D_t13* L_8 = (__this->___m_buffer_2);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		int32_t L_9 = 4;
		ByteU5BU5D_t13* L_10 = (__this->___m_buffer_2);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		int32_t L_11 = 5;
		ByteU5BU5D_t13* L_12 = (__this->___m_buffer_2);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 6);
		int32_t L_13 = 6;
		ByteU5BU5D_t13* L_14 = (__this->___m_buffer_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		int32_t L_15 = 7;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)((int32_t)24)))));
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((uint64_t)V_1))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)V_0))));
	}
}
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void BinaryReader_CheckBuffer_m7486 (BinaryReader_t1428 * __this, int32_t ___length, MethodInfo* method)
{
	static bool BinaryReader_CheckBuffer_m7486_init;
	if (!BinaryReader_CheckBuffer_m7486_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		BinaryReader_CheckBuffer_m7486_init = true;
	}
	ByteU5BU5D_t13* V_0 = {0};
	{
		ByteU5BU5D_t13* L_0 = (__this->___m_buffer_2);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) > ((int32_t)___length)))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, ___length));
		ByteU5BU5D_t13* L_1 = (__this->___m_buffer_2);
		ByteU5BU5D_t13* L_2 = (__this->___m_buffer_2);
		NullCheck(L_2);
		Buffer_BlockCopyInternal_m9478(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, 0, (Array_t *)(Array_t *)V_0, 0, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/&Buffer_BlockCopyInternal_m9478_MethodInfo);
		__this->___m_buffer_2 = V_0;
	}

IL_0030:
	{
		return;
	}
}
// System.IO.Directory
#include "mscorlib_System_IO_Directory.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Directory_t1429_il2cpp_TypeInfo;
// System.IO.Directory
#include "mscorlib_System_IO_DirectoryMethodDeclarations.h"

// System.IO.DirectoryInfo
#include "mscorlib_System_IO_DirectoryInfo.h"
// System.IO.Path
#include "mscorlib_System_IO_Path.h"
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOError.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"
// System.IO.SearchPattern
#include "mscorlib_System_IO_SearchPattern.h"
// System.IO.DirectoryNotFoundException
#include "mscorlib_System_IO_DirectoryNotFoundException.h"
extern TypeInfo Path_t817_il2cpp_TypeInfo;
extern TypeInfo DirectoryInfo_t1430_il2cpp_TypeInfo;
extern TypeInfo MonoIO_t1451_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t17_il2cpp_TypeInfo;
extern TypeInfo SearchPattern_t1454_il2cpp_TypeInfo;
extern TypeInfo DirectoryNotFoundException_t1432_il2cpp_TypeInfo;
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.IO.DirectoryInfo
#include "mscorlib_System_IO_DirectoryInfoMethodDeclarations.h"
// System.IO.MonoIO
#include "mscorlib_System_IO_MonoIOMethodDeclarations.h"
// System.IO.SearchPattern
#include "mscorlib_System_IO_SearchPatternMethodDeclarations.h"
// System.IO.DirectoryNotFoundException
#include "mscorlib_System_IO_DirectoryNotFoundExceptionMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t17_0_0_0;
extern MethodInfo String_IndexOfAny_m6070_MethodInfo;
extern MethodInfo String_Trim_m3928_MethodInfo;
extern MethodInfo File_Exists_m7507_MethodInfo;
extern MethodInfo String_Concat_m169_MethodInfo;
extern MethodInfo String_op_Equality_m145_MethodInfo;
extern MethodInfo Directory_CreateDirectoriesInternal_m7488_MethodInfo;
extern MethodInfo DirectoryInfo__ctor_m7494_MethodInfo;
extern MethodInfo DirectoryInfo_get_Parent_m7498_MethodInfo;
extern MethodInfo DirectoryInfo_get_Exists_m7497_MethodInfo;
extern MethodInfo DirectoryInfo_Create_m7499_MethodInfo;
extern MethodInfo MonoIO_CreateDirectory_m7604_MethodInfo;
extern MethodInfo MonoIO_GetException_m7603_MethodInfo;
extern MethodInfo MonoIO_ExistsDirectory_m7611_MethodInfo;
extern MethodInfo MonoIO_GetCurrentDirectory_m7606_MethodInfo;
extern MethodInfo MonoIO_GetException_m7602_MethodInfo;
extern MethodInfo Directory_GetFileSystemEntries_m7492_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m9451_MethodInfo;
extern MethodInfo Path_Combine_m7628_MethodInfo;
extern MethodInfo Path_GetDirectoryName_m7630_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3867_MethodInfo;
extern MethodInfo MonoIO_ExistsFile_m7610_MethodInfo;
extern MethodInfo DirectoryNotFoundException__ctor_m7502_MethodInfo;
extern MethodInfo MonoIO_GetFileSystemEntries_m7605_MethodInfo;


// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern MethodInfo Directory_CreateDirectory_m7487_MethodInfo;
extern "C" DirectoryInfo_t1430 * Directory_CreateDirectory_m7487 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	{
		if (___path)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1598, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		NullCheck(___path);
		int32_t L_1 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral1599, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_3 = String_IndexOfAny_m6070(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, (String_t*) &_stringLiteral1600, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003a:
	{
		NullCheck(___path);
		String_t* L_5 = String_Trim_m3928(___path, /*hidden argument*/&String_Trim_m3928_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m133(L_5, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		ArgumentException_t522 * L_7 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_7, (String_t*) &_stringLiteral1601, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0052:
	{
		bool L_8 = File_Exists_m7507(NULL /*static, unused*/, ___path, /*hidden argument*/&File_Exists_m7507_MethodInfo);
		if (!L_8)
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Concat_m169(NULL /*static, unused*/, (String_t*) &_stringLiteral1602, ___path, (String_t*) &_stringLiteral1603, /*hidden argument*/&String_Concat_m169_MethodInfo);
		IOException_t1433 * L_10 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_10, L_9, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0070:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_11 = String_op_Equality_m145(NULL /*static, unused*/, ___path, (String_t*) &_stringLiteral479, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		ArgumentException_t522 * L_12 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_12, (String_t*) &_stringLiteral1604, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0088:
	{
		DirectoryInfo_t1430 * L_13 = Directory_CreateDirectoriesInternal_m7488(NULL /*static, unused*/, ___path, /*hidden argument*/&Directory_CreateDirectoriesInternal_m7488_MethodInfo);
		return L_13;
	}
}
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
extern "C" DirectoryInfo_t1430 * Directory_CreateDirectoriesInternal_m7488 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	DirectoryInfo_t1430 * V_0 = {0};
	int32_t V_1 = {0};
	{
		DirectoryInfo_t1430 * L_0 = (DirectoryInfo_t1430 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DirectoryInfo_t1430_il2cpp_TypeInfo));
		DirectoryInfo__ctor_m7494(L_0, ___path, 1, /*hidden argument*/&DirectoryInfo__ctor_m7494_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		DirectoryInfo_t1430 * L_1 = DirectoryInfo_get_Parent_m7498(V_0, /*hidden argument*/&DirectoryInfo_get_Parent_m7498_MethodInfo);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		NullCheck(V_0);
		DirectoryInfo_t1430 * L_2 = DirectoryInfo_get_Parent_m7498(V_0, /*hidden argument*/&DirectoryInfo_get_Parent_m7498_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&DirectoryInfo_get_Exists_m7497_MethodInfo, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		NullCheck(V_0);
		DirectoryInfo_t1430 * L_4 = DirectoryInfo_get_Parent_m7498(V_0, /*hidden argument*/&DirectoryInfo_get_Parent_m7498_MethodInfo);
		NullCheck(L_4);
		DirectoryInfo_Create_m7499(L_4, /*hidden argument*/&DirectoryInfo_Create_m7499_MethodInfo);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_5 = MonoIO_CreateDirectory_m7604(NULL /*static, unused*/, ___path, (&V_1), /*hidden argument*/&MonoIO_CreateDirectory_m7604_MethodInfo);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)183))))
		{
			goto IL_0047;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)80))))
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_6 = MonoIO_GetException_m7603(NULL /*static, unused*/, ___path, V_1, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0047:
	{
		return V_0;
	}
}
// System.Boolean System.IO.Directory::Exists(System.String)
extern MethodInfo Directory_Exists_m7489_MethodInfo;
extern "C" bool Directory_Exists_m7489 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = {0};
	bool V_1 = false;
	{
		if (___path)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_0 = MonoIO_ExistsDirectory_m7611(NULL /*static, unused*/, ___path, (&V_0), /*hidden argument*/&MonoIO_ExistsDirectory_m7611_MethodInfo);
		V_1 = L_0;
		return V_1;
	}
}
// System.String System.IO.Directory::GetCurrentDirectory()
extern MethodInfo Directory_GetCurrentDirectory_m7490_MethodInfo;
extern "C" String_t* Directory_GetCurrentDirectory_m7490 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		String_t* L_0 = MonoIO_GetCurrentDirectory_m7606(NULL /*static, unused*/, (&V_0), /*hidden argument*/&MonoIO_GetCurrentDirectory_m7606_MethodInfo);
		V_1 = L_0;
		if (!V_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_1 = MonoIO_GetException_m7602(NULL /*static, unused*/, V_0, /*hidden argument*/&MonoIO_GetException_m7602_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		return V_1;
	}
}
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern MethodInfo Directory_GetFiles_m7491_MethodInfo;
extern "C" StringU5BU5D_t17* Directory_GetFiles_m7491 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, MethodInfo* method)
{
	{
		StringU5BU5D_t17* L_0 = Directory_GetFileSystemEntries_m7492(NULL /*static, unused*/, ___path, ___searchPattern, ((int32_t)16), 0, /*hidden argument*/&Directory_GetFileSystemEntries_m7492_MethodInfo);
		return L_0;
	}
}
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
extern TypeInfo* StringU5BU5D_t17_il2cpp_TypeInfo_var;
extern "C" StringU5BU5D_t17* Directory_GetFileSystemEntries_m7492 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, int32_t ___mask, int32_t ___attrs, MethodInfo* method)
{
	static bool Directory_GetFileSystemEntries_m7492_init;
	if (!Directory_GetFileSystemEntries_m7492_init)
	{
		StringU5BU5D_t17_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t17_0_0_0);
		Directory_GetFileSystemEntries_m7492_init = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t17* V_5 = {0};
	{
		if (!___path)
		{
			goto IL_0006;
		}
	}
	{
		if (___searchPattern)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m9451(L_0, /*hidden argument*/&ArgumentNullException__ctor_m9451_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000c:
	{
		NullCheck(___searchPattern);
		int32_t L_1 = String_get_Length_m133(___searchPattern, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		return ((StringU5BU5D_t17*)SZArrayNew(StringU5BU5D_t17_il2cpp_TypeInfo_var, 0));
	}

IL_001b:
	{
		NullCheck(___path);
		String_t* L_2 = String_Trim_m3928(___path, /*hidden argument*/&String_Trim_m3928_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m133(L_2, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, (String_t*) &_stringLiteral1605, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_5 = Path_Combine_m7628(NULL /*static, unused*/, ___path, ___searchPattern, /*hidden argument*/&Path_Combine_m7628_MethodInfo);
		V_0 = L_5;
		String_t* L_6 = Path_GetDirectoryName_m7630(NULL /*static, unused*/, V_0, /*hidden argument*/&Path_GetDirectoryName_m7630_MethodInfo);
		V_1 = L_6;
		NullCheck(V_1);
		int32_t L_7 = String_IndexOfAny_m6070(V_1, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_t522 * L_8 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_8, (String_t*) &_stringLiteral1606, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(V_1);
		int32_t L_9 = String_IndexOfAny_m6070(V_1, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0097;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SearchPattern_t1454_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_10 = String_IndexOfAny_m6070(___path, (((SearchPattern_t1454_StaticFields*)InitializedTypeInfo(&SearchPattern_t1454_il2cpp_TypeInfo)->static_fields)->___InvalidChars_1), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((uint32_t)L_10) != ((uint32_t)(-1))))
		{
			goto IL_0087;
		}
	}
	{
		ArgumentException_t522 * L_11 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_11, (String_t*) &_stringLiteral1606, (String_t*) &_stringLiteral1598, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0087:
	{
		ArgumentException_t522 * L_12 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_12, (String_t*) &_stringLiteral1607, (String_t*) &_stringLiteral682, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0097:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_13 = MonoIO_ExistsDirectory_m7611(NULL /*static, unused*/, V_1, (&V_2), /*hidden argument*/&MonoIO_ExistsDirectory_m7611_MethodInfo);
		if (L_13)
		{
			goto IL_011a;
		}
	}
	{
		if (V_2)
		{
			goto IL_00bc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_14 = MonoIO_ExistsFile_m7610(NULL /*static, unused*/, V_1, (&V_3), /*hidden argument*/&MonoIO_ExistsFile_m7610_MethodInfo);
		if (!L_14)
		{
			goto IL_00bc;
		}
	}
	{
		StringU5BU5D_t17* L_15 = ((StringU5BU5D_t17*)SZArrayNew(StringU5BU5D_t17_il2cpp_TypeInfo_var, 1));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, V_1);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 0)) = (String_t*)V_1;
		return L_15;
	}

IL_00bc:
	{
		if ((((int32_t)V_2) == ((int32_t)3)))
		{
			goto IL_00c8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_16 = MonoIO_GetException_m7603(NULL /*static, unused*/, V_1, V_2, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_00c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SearchPattern_t1454_il2cpp_TypeInfo));
		NullCheck(V_1);
		int32_t L_17 = String_IndexOfAny_m6070(V_1, (((SearchPattern_t1454_StaticFields*)InitializedTypeInfo(&SearchPattern_t1454_il2cpp_TypeInfo)->static_fields)->___WildcardChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((uint32_t)L_17) != ((uint32_t)(-1))))
		{
			goto IL_00ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_18 = String_Concat_m169(NULL /*static, unused*/, (String_t*) &_stringLiteral1608, V_1, (String_t*) &_stringLiteral1609, /*hidden argument*/&String_Concat_m169_MethodInfo);
		DirectoryNotFoundException_t1432 * L_19 = (DirectoryNotFoundException_t1432 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DirectoryNotFoundException_t1432_il2cpp_TypeInfo));
		DirectoryNotFoundException__ctor_m7502(L_19, L_18, /*hidden argument*/&DirectoryNotFoundException__ctor_m7502_MethodInfo);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SearchPattern_t1454_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_20 = String_IndexOfAny_m6070(___path, (((SearchPattern_t1454_StaticFields*)InitializedTypeInfo(&SearchPattern_t1454_il2cpp_TypeInfo)->static_fields)->___WildcardChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((uint32_t)L_20) != ((uint32_t)(-1))))
		{
			goto IL_010a;
		}
	}
	{
		ArgumentException_t522 * L_21 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_21, (String_t*) &_stringLiteral1610, (String_t*) &_stringLiteral1611, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_010a:
	{
		ArgumentException_t522 * L_22 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_22, (String_t*) &_stringLiteral1612, (String_t*) &_stringLiteral1598, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_011a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_23 = Path_Combine_m7628(NULL /*static, unused*/, V_1, ___searchPattern, /*hidden argument*/&Path_Combine_m7628_MethodInfo);
		V_4 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		StringU5BU5D_t17* L_24 = MonoIO_GetFileSystemEntries_m7605(NULL /*static, unused*/, ___path, V_4, ___attrs, ___mask, (&V_2), /*hidden argument*/&MonoIO_GetFileSystemEntries_m7605_MethodInfo);
		V_5 = L_24;
		if (!V_2)
		{
			goto IL_013c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_25 = MonoIO_GetException_m7603(NULL /*static, unused*/, V_1, V_2, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_013c:
	{
		return V_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.FileSystemInfo
#include "mscorlib_System_IO_FileSystemInfo.h"
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStat.h"
// System.IO.MonoIO
#include "mscorlib_System_IO_MonoIO.h"
extern TypeInfo FileSystemInfo_t1431_il2cpp_TypeInfo;
extern TypeInfo MonoIOStat_t1448_il2cpp_TypeInfo;
// System.IO.FileSystemInfo
#include "mscorlib_System_IO_FileSystemInfoMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
extern MethodInfo FileSystemInfo_Refresh_m7570_MethodInfo;
extern MethodInfo DirectoryInfo__ctor_m7493_MethodInfo;
extern MethodInfo FileSystemInfo__ctor_m7566_MethodInfo;
extern MethodInfo FileSystemInfo_CheckPath_m7572_MethodInfo;
extern MethodInfo Path_GetFullPath_m7632_MethodInfo;
extern MethodInfo Path_GetFileName_m7631_MethodInfo;
extern MethodInfo DirectoryInfo_Initialize_m7496_MethodInfo;
extern MethodInfo FileSystemInfo__ctor_m7567_MethodInfo;
extern MethodInfo String_get_Chars_m2591_MethodInfo;
extern MethodInfo String_LastIndexOf_m6081_MethodInfo;
extern MethodInfo String_Substring_m150_MethodInfo;
extern MethodInfo Environment_get_IsRunningOnWindows_m9850_MethodInfo;
extern MethodInfo Char_IsLetter_m2639_MethodInfo;


// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C" void DirectoryInfo__ctor_m7493 (DirectoryInfo_t1430 * __this, String_t* ___path, MethodInfo* method)
{
	{
		DirectoryInfo__ctor_m7494(__this, ___path, 0, /*hidden argument*/&DirectoryInfo__ctor_m7494_MethodInfo);
		return;
	}
}
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C" void DirectoryInfo__ctor_m7494 (DirectoryInfo_t1430 * __this, String_t* ___path, bool ___simpleOriginalPath, MethodInfo* method)
{
	{
		FileSystemInfo__ctor_m7566(__this, /*hidden argument*/&FileSystemInfo__ctor_m7566_MethodInfo);
		FileSystemInfo_CheckPath_m7572(__this, ___path, /*hidden argument*/&FileSystemInfo_CheckPath_m7572_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_0 = Path_GetFullPath_m7632(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_GetFullPath_m7632_MethodInfo);
		__this->___FullPath_1 = L_0;
		if (!___simpleOriginalPath)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_1 = Path_GetFileName_m7631(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_GetFileName_m7631_MethodInfo);
		__this->___OriginalPath_2 = L_1;
		goto IL_0031;
	}

IL_002a:
	{
		__this->___OriginalPath_2 = ___path;
	}

IL_0031:
	{
		DirectoryInfo_Initialize_m7496(__this, /*hidden argument*/&DirectoryInfo_Initialize_m7496_MethodInfo);
		return;
	}
}
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo DirectoryInfo__ctor_m7495_MethodInfo;
extern "C" void DirectoryInfo__ctor_m7495 (DirectoryInfo_t1430 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		FileSystemInfo__ctor_m7567(__this, ___info, ___context, /*hidden argument*/&FileSystemInfo__ctor_m7567_MethodInfo);
		DirectoryInfo_Initialize_m7496(__this, /*hidden argument*/&DirectoryInfo_Initialize_m7496_MethodInfo);
		return;
	}
}
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C" void DirectoryInfo_Initialize_m7496 (DirectoryInfo_t1430 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = (__this->___FullPath_1);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m133(L_0, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		if ((((int32_t)V_0) <= ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = (__this->___FullPath_1);
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m2591(L_2, V_0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)L_3) != ((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_0029;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0-(int32_t)1));
	}

IL_0029:
	{
		String_t* L_4 = (__this->___FullPath_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(L_4);
		int32_t L_5 = String_LastIndexOf_m6081(L_4, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2), V_0, /*hidden argument*/&String_LastIndexOf_m6081_MethodInfo);
		V_1 = L_5;
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		if (V_1)
		{
			goto IL_005d;
		}
	}
	{
		if (V_0)
		{
			goto IL_005d;
		}
	}

IL_0045:
	{
		String_t* L_6 = (__this->___FullPath_1);
		__this->___current_5 = L_6;
		__this->___parent_6 = (String_t*)NULL;
		goto IL_00f1;
	}

IL_005d:
	{
		String_t* L_7 = (__this->___FullPath_1);
		NullCheck(L_7);
		String_t* L_8 = String_Substring_m150(L_7, ((int32_t)((int32_t)V_1+(int32_t)1)), ((int32_t)((int32_t)V_0-(int32_t)V_1)), /*hidden argument*/&String_Substring_m150_MethodInfo);
		__this->___current_5 = L_8;
		if (V_1)
		{
			goto IL_008b;
		}
	}
	{
		bool L_9 = Environment_get_IsRunningOnWindows_m9850(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m9850_MethodInfo);
		if (L_9)
		{
			goto IL_008b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		__this->___parent_6 = (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4);
		goto IL_009e;
	}

IL_008b:
	{
		String_t* L_10 = (__this->___FullPath_1);
		NullCheck(L_10);
		String_t* L_11 = String_Substring_m150(L_10, 0, V_1, /*hidden argument*/&String_Substring_m150_MethodInfo);
		__this->___parent_6 = L_11;
	}

IL_009e:
	{
		bool L_12 = Environment_get_IsRunningOnWindows_m9850(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m9850_MethodInfo);
		if (!L_12)
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_13 = (__this->___parent_6);
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m133(L_13, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((uint32_t)L_14) != ((uint32_t)2)))
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_15 = (__this->___parent_6);
		NullCheck(L_15);
		uint16_t L_16 = String_get_Chars_m2591(L_15, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		if ((((uint32_t)L_16) != ((uint32_t)((int32_t)58))))
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_17 = (__this->___parent_6);
		NullCheck(L_17);
		uint16_t L_18 = String_get_Chars_m2591(L_17, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo));
		bool L_19 = Char_IsLetter_m2639(NULL /*static, unused*/, L_18, /*hidden argument*/&Char_IsLetter_m2639_MethodInfo);
		if (!L_19)
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_20 = (__this->___parent_6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		uint16_t L_21 = (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2);
		Object_t * L_22 = Box(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo), &L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m591(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/&String_Concat_m591_MethodInfo);
		__this->___parent_6 = L_23;
	}

IL_00f1:
	{
		return;
	}
}
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C" bool DirectoryInfo_get_Exists_m7497 (DirectoryInfo_t1430 * __this, MethodInfo* method)
{
	{
		FileSystemInfo_Refresh_m7570(__this, 0, /*hidden argument*/&FileSystemInfo_Refresh_m7570_MethodInfo);
		MonoIOStat_t1448 * L_0 = &(__this->___stat_3);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___Attributes_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		if ((((uint32_t)L_1) != ((uint32_t)(((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0))))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		MonoIOStat_t1448 * L_2 = &(__this->___stat_3);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___Attributes_1);
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)16))))
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		return 1;
	}
}
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C" DirectoryInfo_t1430 * DirectoryInfo_get_Parent_m7498 (DirectoryInfo_t1430 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___parent_6);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = (__this->___parent_6);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m133(L_1, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return (DirectoryInfo_t1430 *)NULL;
	}

IL_0017:
	{
		String_t* L_3 = (__this->___parent_6);
		DirectoryInfo_t1430 * L_4 = (DirectoryInfo_t1430 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DirectoryInfo_t1430_il2cpp_TypeInfo));
		DirectoryInfo__ctor_m7493(L_4, L_3, /*hidden argument*/&DirectoryInfo__ctor_m7493_MethodInfo);
		return L_4;
	}
}
// System.Void System.IO.DirectoryInfo::Create()
extern "C" void DirectoryInfo_Create_m7499 (DirectoryInfo_t1430 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___FullPath_1);
		Directory_CreateDirectory_m7487(NULL /*static, unused*/, L_0, /*hidden argument*/&Directory_CreateDirectory_m7487_MethodInfo);
		return;
	}
}
// System.String System.IO.DirectoryInfo::ToString()
extern MethodInfo DirectoryInfo_ToString_m7500_MethodInfo;
extern "C" String_t* DirectoryInfo_ToString_m7500 (DirectoryInfo_t1430 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___OriginalPath_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IOException__ctor_m7576_MethodInfo;


// System.Void System.IO.DirectoryNotFoundException::.ctor()
extern MethodInfo DirectoryNotFoundException__ctor_m7501_MethodInfo;
extern "C" void DirectoryNotFoundException__ctor_m7501 (DirectoryNotFoundException_t1432 * __this, MethodInfo* method)
{
	{
		IOException__ctor_m7574(__this, (String_t*) &_stringLiteral1613, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		return;
	}
}
// System.Void System.IO.DirectoryNotFoundException::.ctor(System.String)
extern "C" void DirectoryNotFoundException__ctor_m7502 (DirectoryNotFoundException_t1432 * __this, String_t* ___message, MethodInfo* method)
{
	{
		IOException__ctor_m7574(__this, ___message, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		return;
	}
}
// System.Void System.IO.DirectoryNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo DirectoryNotFoundException__ctor_m7503_MethodInfo;
extern "C" void DirectoryNotFoundException__ctor_m7503 (DirectoryNotFoundException_t1432 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		IOException__ctor_m7576(__this, ___info, ___context, /*hidden argument*/&IOException__ctor_m7576_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.EndOfStreamException::.ctor()
extern "C" void EndOfStreamException__ctor_m7504 (EndOfStreamException_t1434 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1614, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		IOException__ctor_m7574(__this, L_0, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		return;
	}
}
// System.Void System.IO.EndOfStreamException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo EndOfStreamException__ctor_m7505_MethodInfo;
extern "C" void EndOfStreamException__ctor_m7505 (EndOfStreamException_t1434 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		IOException__ctor_m7576(__this, ___info, ___context, /*hidden argument*/&IOException__ctor_m7576_MethodInfo);
		return;
	}
}
// System.IO.File
#include "mscorlib_System_IO_File.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo File_t1435_il2cpp_TypeInfo;

// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessException.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
extern TypeInfo ObjectU5BU5D_t137_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo UnauthorizedAccessException_t1845_il2cpp_TypeInfo;
extern TypeInfo FileStream_t1436_il2cpp_TypeInfo;
extern TypeInfo StreamReader_t1437_il2cpp_TypeInfo;
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessExceptionMethodDeclarations.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStreamMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t137_0_0_0;
extern MethodInfo Locale_GetText_m6562_MethodInfo;
extern MethodInfo UnauthorizedAccessException__ctor_m10188_MethodInfo;
extern MethodInfo String_op_Inequality_m2590_MethodInfo;
extern MethodInfo MonoIO_DeleteFile_m7607_MethodInfo;
extern MethodInfo FileStream__ctor_m7527_MethodInfo;
extern MethodInfo StreamReader__ctor_m7690_MethodInfo;


// System.Void System.IO.File::Delete(System.String)
extern MethodInfo File_Delete_m7506_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" void File_Delete_m7506 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	static bool File_Delete_m7506_init;
	if (!File_Delete_m7506_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		File_Delete_m7506_init = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		if (___path)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1598, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		NullCheck(___path);
		String_t* L_1 = String_Trim_m3928(___path, /*hidden argument*/&String_Trim_m3928_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m133(L_1, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_3 = String_IndexOfAny_m6070(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, (String_t*) &_stringLiteral1598, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0034:
	{
		bool L_5 = Directory_Exists_m7489(NULL /*static, unused*/, ___path, /*hidden argument*/&Directory_Exists_m7489_MethodInfo);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		ObjectU5BU5D_t137* L_6 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, ___path);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 0)) = (Object_t *)___path;
		String_t* L_7 = Locale_GetText_m6562(NULL /*static, unused*/, (String_t*) &_stringLiteral1615, L_6, /*hidden argument*/&Locale_GetText_m6562_MethodInfo);
		UnauthorizedAccessException_t1845 * L_8 = (UnauthorizedAccessException_t1845 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnauthorizedAccessException_t1845_il2cpp_TypeInfo));
		UnauthorizedAccessException__ctor_m10188(L_8, L_7, /*hidden argument*/&UnauthorizedAccessException__ctor_m10188_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_9 = Path_GetDirectoryName_m7630(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_GetDirectoryName_m7630_MethodInfo);
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_10 = String_op_Inequality_m2590(NULL /*static, unused*/, V_0, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_op_Inequality_m2590_MethodInfo);
		if (!L_10)
		{
			goto IL_008c;
		}
	}
	{
		bool L_11 = Directory_Exists_m7489(NULL /*static, unused*/, V_0, /*hidden argument*/&Directory_Exists_m7489_MethodInfo);
		if (L_11)
		{
			goto IL_008c;
		}
	}
	{
		ObjectU5BU5D_t137* L_12 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 1));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, ___path);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 0)) = (Object_t *)___path;
		String_t* L_13 = Locale_GetText_m6562(NULL /*static, unused*/, (String_t*) &_stringLiteral1616, L_12, /*hidden argument*/&Locale_GetText_m6562_MethodInfo);
		DirectoryNotFoundException_t1432 * L_14 = (DirectoryNotFoundException_t1432 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DirectoryNotFoundException_t1432_il2cpp_TypeInfo));
		DirectoryNotFoundException__ctor_m7502(L_14, L_13, /*hidden argument*/&DirectoryNotFoundException__ctor_m7502_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_008c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_15 = MonoIO_DeleteFile_m7607(NULL /*static, unused*/, ___path, (&V_1), /*hidden argument*/&MonoIO_DeleteFile_m7607_MethodInfo);
		if (L_15)
		{
			goto IL_00a2;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)2)))
		{
			goto IL_00a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_16 = MonoIO_GetException_m7603(NULL /*static, unused*/, ___path, V_1, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_00a2:
	{
		return;
	}
}
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m7507 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		if (!___path)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck(___path);
		String_t* L_0 = String_Trim_m3928(___path, /*hidden argument*/&String_Trim_m3928_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m133(L_0, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_2 = String_IndexOfAny_m6070(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		return 0;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_3 = MonoIO_ExistsFile_m7610(NULL /*static, unused*/, ___path, (&V_0), /*hidden argument*/&MonoIO_ExistsFile_m7610_MethodInfo);
		return L_3;
	}
}
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern MethodInfo File_Open_m7508_MethodInfo;
extern "C" FileStream_t1436 * File_Open_m7508 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, MethodInfo* method)
{
	int32_t G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	int32_t G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		G_B1_0 = ___mode;
		G_B1_1 = ___path;
		if ((((uint32_t)___mode) != ((uint32_t)6)))
		{
			G_B2_0 = ___mode;
			G_B2_1 = ___path;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = 3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000a:
	{
		FileStream_t1436 * L_0 = (FileStream_t1436 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FileStream_t1436_il2cpp_TypeInfo));
		FileStream__ctor_m7527(L_0, G_B3_2, G_B3_1, G_B3_0, 0, /*hidden argument*/&FileStream__ctor_m7527_MethodInfo);
		return L_0;
	}
}
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern MethodInfo File_OpenRead_m7509_MethodInfo;
extern "C" FileStream_t1436 * File_OpenRead_m7509 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	{
		FileStream_t1436 * L_0 = (FileStream_t1436 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FileStream_t1436_il2cpp_TypeInfo));
		FileStream__ctor_m7527(L_0, ___path, 3, 1, 1, /*hidden argument*/&FileStream__ctor_m7527_MethodInfo);
		return L_0;
	}
}
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern MethodInfo File_OpenText_m7510_MethodInfo;
extern "C" StreamReader_t1437 * File_OpenText_m7510 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StreamReader_t1437_il2cpp_TypeInfo));
		StreamReader_t1437 * L_0 = (StreamReader_t1437 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamReader_t1437_il2cpp_TypeInfo));
		StreamReader__ctor_m7690(L_0, ___path, /*hidden argument*/&StreamReader__ctor_m7690_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FileAccess_t789_il2cpp_TypeInfo;
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccessMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo FileAttributes_t1438_il2cpp_TypeInfo;
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo FileMode_t1439_il2cpp_TypeInfo;
// System.IO.FileMode
#include "mscorlib_System_IO_FileModeMethodDeclarations.h"



// System.IO.FileNotFoundException
#include "mscorlib_System_IO_FileNotFoundException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FileNotFoundException_t1440_il2cpp_TypeInfo;
// System.IO.FileNotFoundException
#include "mscorlib_System_IO_FileNotFoundExceptionMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo Exception_t140_il2cpp_TypeInfo;
extern TypeInfo SerializationInfo_t612_il2cpp_TypeInfo;
extern TypeInfo StreamingContext_t614_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern MethodInfo CultureInfo_get_CurrentCulture_m7330_MethodInfo;
extern MethodInfo String_Format_m6090_MethodInfo;
extern MethodInfo Exception_set_HResult_m5535_MethodInfo;
extern MethodInfo SerializationInfo_GetString_m3892_MethodInfo;
extern MethodInfo Exception_GetObjectData_m4158_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3895_MethodInfo;
extern MethodInfo Exception_GetType_m4222_MethodInfo;
extern MethodInfo Type_get_FullName_m5572_MethodInfo;
extern MethodInfo StringBuilder__ctor_m2358_MethodInfo;
extern MethodInfo FileNotFoundException_get_Message_m7514_MethodInfo;
extern MethodInfo StringBuilder_AppendFormat_m3909_MethodInfo;
extern MethodInfo Environment_get_NewLine_m3963_MethodInfo;
extern MethodInfo StringBuilder_Append_m3908_MethodInfo;
extern MethodInfo Exception_get_InnerException_m4219_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m4221_MethodInfo;


// System.Void System.IO.FileNotFoundException::.ctor()
extern MethodInfo FileNotFoundException__ctor_m7511_MethodInfo;
extern "C" void FileNotFoundException__ctor_m7511 (FileNotFoundException_t1440 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1618, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		IOException__ctor_m7574(__this, L_0, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146232799), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
extern MethodInfo FileNotFoundException__ctor_m7512_MethodInfo;
extern "C" void FileNotFoundException__ctor_m7512 (FileNotFoundException_t1440 * __this, String_t* ___message, String_t* ___fileName, MethodInfo* method)
{
	{
		IOException__ctor_m7574(__this, ___message, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		Exception_set_HResult_m5535(__this, ((int32_t)-2146232799), /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		__this->___fileName_11 = ___fileName;
		return;
	}
}
// System.Void System.IO.FileNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo FileNotFoundException__ctor_m7513_MethodInfo;
extern "C" void FileNotFoundException__ctor_m7513 (FileNotFoundException_t1440 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		IOException__ctor_m7576(__this, ___info, ___context, /*hidden argument*/&IOException__ctor_m7576_MethodInfo);
		NullCheck(___info);
		String_t* L_0 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1619, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->___fileName_11 = L_0;
		NullCheck(___info);
		String_t* L_1 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1620, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->___fusionLog_12 = L_1;
		return;
	}
}
// System.String System.IO.FileNotFoundException::get_Message()
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" String_t* FileNotFoundException_get_Message_m7514 (FileNotFoundException_t1440 * __this, MethodInfo* method)
{
	static bool FileNotFoundException_get_Message_m7514_init;
	if (!FileNotFoundException_get_Message_m7514_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		FileNotFoundException_get_Message_m7514_init = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = (__this->___message_2);
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_1 = (__this->___fileName_11);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t791_il2cpp_TypeInfo));
		CultureInfo_t791 * L_2 = CultureInfo_get_CurrentCulture_m7330(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_CurrentCulture_m7330_MethodInfo);
		ObjectU5BU5D_t137* L_3 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 1));
		String_t* L_4 = (__this->___fileName_11);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)L_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Format_m6090(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral1617, L_3, /*hidden argument*/&String_Format_m6090_MethodInfo);
		V_0 = L_5;
		return V_0;
	}

IL_0031:
	{
		String_t* L_6 = (__this->___message_2);
		return L_6;
	}
}
// System.Void System.IO.FileNotFoundException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo FileNotFoundException_GetObjectData_m7515_MethodInfo;
extern "C" void FileNotFoundException_GetObjectData_m7515 (FileNotFoundException_t1440 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		Exception_GetObjectData_m4158(__this, ___info, ___context, /*hidden argument*/&Exception_GetObjectData_m4158_MethodInfo);
		String_t* L_0 = (__this->___fileName_11);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1619, L_0, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		String_t* L_1 = (__this->___fusionLog_12);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1620, L_1, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		return;
	}
}
// System.String System.IO.FileNotFoundException::ToString()
extern MethodInfo FileNotFoundException_ToString_m7516_MethodInfo;
extern "C" String_t* FileNotFoundException_ToString_m7516 (FileNotFoundException_t1440 * __this, MethodInfo* method)
{
	StringBuilder_t154 * V_0 = {0};
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Exception_GetType_m4222_MethodInfo, __this);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5572_MethodInfo, L_0);
		StringBuilder_t154 * L_2 = (StringBuilder_t154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t154_il2cpp_TypeInfo));
		StringBuilder__ctor_m2358(L_2, L_1, /*hidden argument*/&StringBuilder__ctor_m2358_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&FileNotFoundException_get_Message_m7514_MethodInfo, __this);
		NullCheck(V_0);
		StringBuilder_AppendFormat_m3909(V_0, (String_t*) &_stringLiteral1621, L_3, /*hidden argument*/&StringBuilder_AppendFormat_m3909_MethodInfo);
		String_t* L_4 = (__this->___fileName_11);
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_5 = (__this->___fileName_11);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m133(L_5, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_7 = Environment_get_NewLine_m3963(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m3963_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_7, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		String_t* L_8 = (__this->___fileName_11);
		NullCheck(V_0);
		StringBuilder_AppendFormat_m3909(V_0, (String_t*) &_stringLiteral1622, L_8, /*hidden argument*/&StringBuilder_AppendFormat_m3909_MethodInfo);
	}

IL_0057:
	{
		Exception_t140 * L_9 = (Exception_t140 *)VirtFuncInvoker0< Exception_t140 * >::Invoke(&Exception_get_InnerException_m4219_MethodInfo, __this);
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		Exception_t140 * L_10 = (Exception_t140 *)VirtFuncInvoker0< Exception_t140 * >::Invoke(&Exception_get_InnerException_m4219_MethodInfo, __this);
		NullCheck(V_0);
		StringBuilder_AppendFormat_m3909(V_0, (String_t*) &_stringLiteral1623, L_10, /*hidden argument*/&StringBuilder_AppendFormat_m3909_MethodInfo);
	}

IL_0071:
	{
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m4221_MethodInfo, __this);
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		String_t* L_12 = Environment_get_NewLine_m3963(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m3963_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_12, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m4221_MethodInfo, __this);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_13, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0092:
	{
		NullCheck(V_0);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m716_MethodInfo, V_0);
		return L_14;
	}
}
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FileOptions_t1441_il2cpp_TypeInfo;
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptionsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo FileShare_t1442_il2cpp_TypeInfo;
// System.IO.FileShare
#include "mscorlib_System_IO_FileShareMethodDeclarations.h"



// System.IO.FileStream/ReadDelegate
#include "mscorlib_System_IO_FileStream_ReadDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReadDelegate_t1443_il2cpp_TypeInfo;
// System.IO.FileStream/ReadDelegate
#include "mscorlib_System_IO_FileStream_ReadDelegateMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.IO.FileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo ReadDelegate__ctor_m7517_MethodInfo;
extern "C" void ReadDelegate__ctor_m7517 (ReadDelegate_t1443 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern MethodInfo ReadDelegate_Invoke_m7518_MethodInfo;
extern "C" int32_t ReadDelegate_Invoke_m7518 (ReadDelegate_t1443 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ReadDelegate_Invoke_m7518((ReadDelegate_t1443 *)__this->___prev_9,___buffer, ___offset, ___count, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___buffer, ___offset, ___count,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___buffer, ___offset, ___count,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___offset, int32_t ___count, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___buffer, ___offset, ___count,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" int32_t pinvoke_delegate_wrapper_ReadDelegate_t1443(Il2CppObject* delegate, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(uint8_t*, int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___buffer' to native representation
	uint8_t* ____buffer_marshaled = { 0 };
	____buffer_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)___buffer);

	// Marshaling of parameter '___offset' to native representation

	// Marshaling of parameter '___count' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____buffer_marshaled, ___offset, ___count);

	// Marshaling cleanup of parameter '___buffer' native representation

	// Marshaling cleanup of parameter '___offset' native representation

	// Marshaling cleanup of parameter '___count' native representation

	return _return_value;
}
// System.IAsyncResult System.IO.FileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo ReadDelegate_BeginInvoke_m7519_MethodInfo;
extern "C" Object_t * ReadDelegate_BeginInvoke_m7519 (ReadDelegate_t1443 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &___offset);
	__d_args[2] = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &___count);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.IO.FileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo ReadDelegate_EndInvoke_m7520_MethodInfo;
extern "C" int32_t ReadDelegate_EndInvoke_m7520 (ReadDelegate_t1443 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.IO.FileStream/WriteDelegate
#include "mscorlib_System_IO_FileStream_WriteDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WriteDelegate_t1444_il2cpp_TypeInfo;
// System.IO.FileStream/WriteDelegate
#include "mscorlib_System_IO_FileStream_WriteDelegateMethodDeclarations.h"



// System.Void System.IO.FileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo WriteDelegate__ctor_m7521_MethodInfo;
extern "C" void WriteDelegate__ctor_m7521 (WriteDelegate_t1444 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.IO.FileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern MethodInfo WriteDelegate_Invoke_m7522_MethodInfo;
extern "C" void WriteDelegate_Invoke_m7522 (WriteDelegate_t1444 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WriteDelegate_Invoke_m7522((WriteDelegate_t1444 *)__this->___prev_9,___buffer, ___offset, ___count, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___buffer, ___offset, ___count,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___buffer, ___offset, ___count,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___offset, int32_t ___count, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___buffer, ___offset, ___count,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t1444(Il2CppObject* delegate, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count)
{
	typedef void (STDCALL *native_function_ptr_type)(uint8_t*, int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___buffer' to native representation
	uint8_t* ____buffer_marshaled = { 0 };
	____buffer_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)___buffer);

	// Marshaling of parameter '___offset' to native representation

	// Marshaling of parameter '___count' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____buffer_marshaled, ___offset, ___count);

	// Marshaling cleanup of parameter '___buffer' native representation

	// Marshaling cleanup of parameter '___offset' native representation

	// Marshaling cleanup of parameter '___count' native representation

}
// System.IAsyncResult System.IO.FileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo WriteDelegate_BeginInvoke_m7523_MethodInfo;
extern "C" Object_t * WriteDelegate_BeginInvoke_m7523 (WriteDelegate_t1444 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &___offset);
	__d_args[2] = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &___count);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.IO.FileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo WriteDelegate_EndInvoke_m7524_MethodInfo;
extern "C" void WriteDelegate_EndInvoke_m7524 (WriteDelegate_t1444 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileType.h"
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
// System.IO.FileStreamAsyncResult
#include "mscorlib_System_IO_FileStreamAsyncResult.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
extern TypeInfo NotSupportedException_t150_il2cpp_TypeInfo;
extern TypeInfo Int64_t147_il2cpp_TypeInfo;
extern TypeInfo SeekOrigin_t1455_il2cpp_TypeInfo;
extern TypeInfo IAsyncResult_t265_il2cpp_TypeInfo;
extern TypeInfo AsyncCallback_t266_il2cpp_TypeInfo;
extern TypeInfo AsyncResult_t1579_il2cpp_TypeInfo;
extern TypeInfo FileStreamAsyncResult_t1446_il2cpp_TypeInfo;
extern TypeInfo MemoryStream_t1449_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"
// System.IO.FileStreamAsyncResult
#include "mscorlib_System_IO_FileStreamAsyncResultMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
extern MethodInfo IntPtr_op_Equality_m5542_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m10087_MethodInfo;
extern MethodInfo FileStream_get_CanSeek_m7532_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m3883_MethodInfo;
extern MethodInfo FileStream_FlushBufferIfDirty_m7555_MethodInfo;
extern MethodInfo MonoIO_GetLength_m7618_MethodInfo;
extern MethodInfo FileStream_GetSecureFileName_m7559_MethodInfo;
extern MethodInfo FileStream_Seek_m7546_MethodInfo;
extern MethodInfo Stream__ctor_m7646_MethodInfo;
extern MethodInfo MonoIO_GetFileType_m7609_MethodInfo;
extern MethodInfo FileStream_InitBuffer_m7558_MethodInfo;
extern MethodInfo MonoIO_Seek_m7617_MethodInfo;
extern MethodInfo FileStream__ctor_m7528_MethodInfo;
extern MethodInfo FileStream__ctor_m7529_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3864_MethodInfo;
extern MethodInfo FileStream_GetSecureFileName_m7560_MethodInfo;
extern MethodInfo String_Format_m160_MethodInfo;
extern MethodInfo String_Format_m149_MethodInfo;
extern MethodInfo String_IndexOf_m2644_MethodInfo;
extern MethodInfo MonoIO_Open_m7613_MethodInfo;
extern MethodInfo FileStream_get_Length_m7533_MethodInfo;
extern MethodInfo FileStream_get_Position_m7534_MethodInfo;
extern MethodInfo FileStream_get_CanRead_m7530_MethodInfo;
extern MethodInfo FileStream_ReadData_m7557_MethodInfo;
extern MethodInfo FileStream_RefillBuffer_m7556_MethodInfo;
extern MethodInfo FileStream_get_CanWrite_m7531_MethodInfo;
extern MethodInfo FileStream_FlushBuffer_m7554_MethodInfo;
extern MethodInfo FileStream_BeginRead_m7540_MethodInfo;
extern MethodInfo FileStream_EndRead_m7541_MethodInfo;
extern MethodInfo FileStream_ReadInternal_m7539_MethodInfo;
extern MethodInfo FileStream_ReadSegment_m7551_MethodInfo;
extern MethodInfo Stream_BeginRead_m7653_MethodInfo;
extern MethodInfo Stream_EndRead_m7655_MethodInfo;
extern MethodInfo AsyncResult_get_AsyncDelegate_m8342_MethodInfo;
extern MethodInfo FileStream_BeginWrite_m7544_MethodInfo;
extern MethodInfo FileStream_EndWrite_m7545_MethodInfo;
extern MethodInfo FileStream_WriteInternal_m7543_MethodInfo;
extern MethodInfo MonoIO_Write_m7616_MethodInfo;
extern MethodInfo FileStream_WriteSegment_m7552_MethodInfo;
extern MethodInfo Stream_BeginWrite_m7654_MethodInfo;
extern MethodInfo FileStreamAsyncResult__ctor_m7561_MethodInfo;
extern MethodInfo MemoryStream__ctor_m7578_MethodInfo;
extern MethodInfo FileStream_FlushBuffer_m7553_MethodInfo;
extern MethodInfo MemoryStream_Write_m7599_MethodInfo;
extern MethodInfo MemoryStream_get_Length_m7587_MethodInfo;
extern MethodInfo Stream_EndWrite_m7656_MethodInfo;
extern MethodInfo FileStream_Flush_m7548_MethodInfo;
extern MethodInfo MonoIO_SetLength_m7619_MethodInfo;
extern MethodInfo FileStream_set_Position_m7535_MethodInfo;
extern MethodInfo FileStream_Dispose_m7550_MethodInfo;
extern MethodInfo Object_Finalize_m226_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m6296_MethodInfo;
extern MethodInfo MonoIO_Close_m7614_MethodInfo;
extern MethodInfo GC_SuppressFinalize_m5619_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m135_MethodInfo;
extern MethodInfo Stream_Write_m10311_MethodInfo;
extern MethodInfo MonoIO_Read_m7615_MethodInfo;
extern MethodInfo IOException__ctor_m7573_MethodInfo;


// System.Void System.IO.FileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern MethodInfo FileStream__ctor_m7525_MethodInfo;
extern "C" void FileStream__ctor_m7525 (FileStream_t1436 * __this, IntPtr_t98 ___handle, int32_t ___access, bool ___ownsHandle, int32_t ___bufferSize, bool ___isAsync, bool ___noBuffering, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		__this->___name_13 = (String_t*) &_stringLiteral1627;
		Stream__ctor_m7646(__this, /*hidden argument*/&Stream__ctor_m7646_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		__this->___handle_14 = (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1);
		IntPtr_t98 L_0 = (__this->___handle_14);
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, ___handle, L_0, /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1629, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_3, (String_t*) &_stringLiteral1628, L_2, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_003f:
	{
		if ((((int32_t)___access) < ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		if ((((int32_t)___access) <= ((int32_t)3)))
		{
			goto IL_0052;
		}
	}

IL_0047:
	{
		ArgumentOutOfRangeException_t786 * L_4 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_4, (String_t*) &_stringLiteral1630, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0052:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		int32_t L_5 = MonoIO_GetFileType_m7609(NULL /*static, unused*/, ___handle, (&V_0), /*hidden argument*/&MonoIO_GetFileType_m7609_MethodInfo);
		V_1 = L_5;
		if (!V_0)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_6 = (__this->___name_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_7 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_6, V_0, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_006b:
	{
		if (V_1)
		{
			goto IL_0079;
		}
	}
	{
		IOException_t1433 * L_8 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_8, (String_t*) &_stringLiteral1631, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0079:
	{
		if ((((uint32_t)V_1) != ((uint32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		__this->___canseek_4 = 1;
		goto IL_008d;
	}

IL_0086:
	{
		__this->___canseek_4 = 0;
	}

IL_008d:
	{
		__this->___handle_14 = ___handle;
		__this->___access_1 = ___access;
		__this->___owner_2 = ___ownsHandle;
		__this->___async_3 = ___isAsync;
		__this->___anonymous_6 = 0;
		FileStream_InitBuffer_m7558(__this, ___bufferSize, ___noBuffering, /*hidden argument*/&FileStream_InitBuffer_m7558_MethodInfo);
		bool L_9 = (__this->___canseek_4);
		if (!L_9)
		{
			goto IL_00e4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		int64_t L_10 = MonoIO_Seek_m7617(NULL /*static, unused*/, ___handle, (((int64_t)0)), 1, (&V_0), /*hidden argument*/&MonoIO_Seek_m7617_MethodInfo);
		__this->___buf_start_12 = L_10;
		if (!V_0)
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_11 = (__this->___name_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_12 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_11, V_0, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_00e4:
	{
		__this->___append_startpos_5 = (((int64_t)0));
		return;
	}
}
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
extern MethodInfo FileStream__ctor_m7526_MethodInfo;
extern "C" void FileStream__ctor_m7526 (FileStream_t1436 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, MethodInfo* method)
{
	int32_t G_B2_0 = {0};
	int32_t G_B2_1 = {0};
	String_t* G_B2_2 = {0};
	FileStream_t1436 * G_B2_3 = {0};
	int32_t G_B1_0 = {0};
	int32_t G_B1_1 = {0};
	String_t* G_B1_2 = {0};
	FileStream_t1436 * G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = {0};
	int32_t G_B3_2 = {0};
	String_t* G_B3_3 = {0};
	FileStream_t1436 * G_B3_4 = {0};
	{
		G_B1_0 = ___access;
		G_B1_1 = ___mode;
		G_B1_2 = ___path;
		G_B1_3 = __this;
		if ((((uint32_t)___access) != ((uint32_t)2)))
		{
			G_B2_0 = ___access;
			G_B2_1 = ___mode;
			G_B2_2 = ___path;
			G_B2_3 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_000c:
	{
		NullCheck(G_B3_4);
		FileStream__ctor_m7528(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, ((int32_t)8192), 0, 0, /*hidden argument*/&FileStream__ctor_m7528_MethodInfo);
		return;
	}
}
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" void FileStream__ctor_m7527 (FileStream_t1436 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, MethodInfo* method)
{
	{
		FileStream__ctor_m7529(__this, ___path, ___mode, ___access, ___share, ((int32_t)8192), 0, 0, /*hidden argument*/&FileStream__ctor_m7529_MethodInfo);
		return;
	}
}
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.Boolean)
extern "C" void FileStream__ctor_m7528 (FileStream_t1436 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___isAsync, bool ___anonymous, MethodInfo* method)
{
	bool G_B2_0 = false;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = {0};
	int32_t G_B2_3 = {0};
	int32_t G_B2_4 = {0};
	String_t* G_B2_5 = {0};
	FileStream_t1436 * G_B2_6 = {0};
	bool G_B1_0 = false;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = {0};
	int32_t G_B1_3 = {0};
	int32_t G_B1_4 = {0};
	String_t* G_B1_5 = {0};
	FileStream_t1436 * G_B1_6 = {0};
	int32_t G_B3_0 = 0;
	bool G_B3_1 = false;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = {0};
	int32_t G_B3_4 = {0};
	int32_t G_B3_5 = {0};
	String_t* G_B3_6 = {0};
	FileStream_t1436 * G_B3_7 = {0};
	{
		G_B1_0 = ___anonymous;
		G_B1_1 = ___bufferSize;
		G_B1_2 = ___share;
		G_B1_3 = ___access;
		G_B1_4 = ___mode;
		G_B1_5 = ___path;
		G_B1_6 = __this;
		if (!___isAsync)
		{
			G_B2_0 = ___anonymous;
			G_B2_1 = ___bufferSize;
			G_B2_2 = ___share;
			G_B2_3 = ___access;
			G_B2_4 = ___mode;
			G_B2_5 = ___path;
			G_B2_6 = __this;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = ((int32_t)1073741824);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		G_B3_6 = G_B1_5;
		G_B3_7 = G_B1_6;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
		G_B3_6 = G_B2_5;
		G_B3_7 = G_B2_6;
	}

IL_0016:
	{
		NullCheck(G_B3_7);
		FileStream__ctor_m7529(G_B3_7, G_B3_6, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/&FileStream__ctor_m7529_MethodInfo);
		return;
	}
}
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.IO.FileOptions)
extern "C" void FileStream__ctor_m7529 (FileStream_t1436 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___anonymous, int32_t ___options, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	String_t* V_7 = {0};
	int32_t V_8 = {0};
	int64_t V_9 = 0;
	String_t* G_B41_0 = {0};
	int64_t G_B62_0 = 0;
	{
		__this->___name_13 = (String_t*) &_stringLiteral1627;
		Stream__ctor_m7646(__this, /*hidden argument*/&Stream__ctor_m7646_MethodInfo);
		if (___path)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1598, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_001f:
	{
		NullCheck(___path);
		int32_t L_1 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral1599, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0032:
	{
		___share = ((int32_t)((int32_t)___share&(int32_t)((int32_t)-17)));
		if ((((int32_t)___bufferSize) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_3 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_3, (String_t*) &_stringLiteral1632, (String_t*) &_stringLiteral1496, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0050:
	{
		if ((((int32_t)___mode) < ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		if ((((int32_t)___mode) <= ((int32_t)6)))
		{
			goto IL_007c;
		}
	}

IL_0058:
	{
		if (!___anonymous)
		{
			goto IL_006c;
		}
	}
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_4, (String_t*) &_stringLiteral1633, (String_t*) &_stringLiteral1634, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_006c:
	{
		ArgumentOutOfRangeException_t786 * L_5 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_5, (String_t*) &_stringLiteral1633, (String_t*) &_stringLiteral1634, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_007c:
	{
		if ((((int32_t)___access) < ((int32_t)1)))
		{
			goto IL_0084;
		}
	}
	{
		if ((((int32_t)___access) <= ((int32_t)3)))
		{
			goto IL_00a3;
		}
	}

IL_0084:
	{
		if (!___anonymous)
		{
			goto IL_0093;
		}
	}
	{
		IsolatedStorageException_t1425 * L_6 = (IsolatedStorageException_t1425 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1425_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m7460(L_6, (String_t*) &_stringLiteral1635, /*hidden argument*/&IsolatedStorageException__ctor_m7460_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0093:
	{
		ArgumentOutOfRangeException_t786 * L_7 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_7, (String_t*) &_stringLiteral1630, (String_t*) &_stringLiteral1634, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_00a3:
	{
		if ((((int32_t)___share) < ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		if ((((int32_t)___share) <= ((int32_t)7)))
		{
			goto IL_00cc;
		}
	}

IL_00ad:
	{
		if (!___anonymous)
		{
			goto IL_00bc;
		}
	}
	{
		IsolatedStorageException_t1425 * L_8 = (IsolatedStorageException_t1425 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1425_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m7460(L_8, (String_t*) &_stringLiteral1636, /*hidden argument*/&IsolatedStorageException__ctor_m7460_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_00bc:
	{
		ArgumentOutOfRangeException_t786 * L_9 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_9, (String_t*) &_stringLiteral1637, (String_t*) &_stringLiteral1634, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_00cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_10 = String_IndexOfAny_m6070(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00e5;
		}
	}
	{
		ArgumentException_t522 * L_11 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_11, (String_t*) &_stringLiteral1638, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_00e5:
	{
		bool L_12 = Directory_Exists_m7489(NULL /*static, unused*/, ___path, /*hidden argument*/&Directory_Exists_m7489_MethodInfo);
		if (!L_12)
		{
			goto IL_010c;
		}
	}
	{
		String_t* L_13 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1639, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		V_0 = L_13;
		String_t* L_14 = FileStream_GetSecureFileName_m7560(__this, ___path, 0, /*hidden argument*/&FileStream_GetSecureFileName_m7560_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Format_m160(NULL /*static, unused*/, V_0, L_14, /*hidden argument*/&String_Format_m160_MethodInfo);
		UnauthorizedAccessException_t1845 * L_16 = (UnauthorizedAccessException_t1845 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnauthorizedAccessException_t1845_il2cpp_TypeInfo));
		UnauthorizedAccessException__ctor_m10188(L_16, L_15, /*hidden argument*/&UnauthorizedAccessException__ctor_m10188_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_010c:
	{
		if ((((uint32_t)___mode) != ((uint32_t)6)))
		{
			goto IL_0121;
		}
	}
	{
		if ((((uint32_t)((int32_t)((int32_t)___access&(int32_t)1))) != ((uint32_t)1)))
		{
			goto IL_0121;
		}
	}
	{
		ArgumentException_t522 * L_17 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_17, (String_t*) &_stringLiteral1640, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0121:
	{
		if (((int32_t)((int32_t)___access&(int32_t)2)))
		{
			goto IL_0151;
		}
	}
	{
		if ((((int32_t)___mode) == ((int32_t)3)))
		{
			goto IL_0151;
		}
	}
	{
		if ((((int32_t)___mode) == ((int32_t)4)))
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_18 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1641, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		V_1 = L_18;
		int32_t L_19 = ___access;
		Object_t * L_20 = Box(InitializedTypeInfo(&FileAccess_t789_il2cpp_TypeInfo), &L_19);
		int32_t L_21 = ___mode;
		Object_t * L_22 = Box(InitializedTypeInfo(&FileMode_t1439_il2cpp_TypeInfo), &L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Format_m149(NULL /*static, unused*/, V_1, L_20, L_22, /*hidden argument*/&String_Format_m149_MethodInfo);
		ArgumentException_t522 * L_24 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_24, L_23, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0151:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2)) == ((int32_t)((int32_t)47))))
		{
			goto IL_0173;
		}
	}
	{
		NullCheck(___path);
		int32_t L_25 = String_IndexOf_m2644(___path, ((int32_t)47), /*hidden argument*/&String_IndexOf_m2644_MethodInfo);
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_0173;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_26 = Path_GetFullPath_m7632(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_GetFullPath_m7632_MethodInfo);
		String_t* L_27 = Path_GetDirectoryName_m7630(NULL /*static, unused*/, L_26, /*hidden argument*/&Path_GetDirectoryName_m7630_MethodInfo);
		V_2 = L_27;
		goto IL_017a;
	}

IL_0173:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_28 = Path_GetDirectoryName_m7630(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_GetDirectoryName_m7630_MethodInfo);
		V_2 = L_28;
	}

IL_017a:
	{
		NullCheck(V_2);
		int32_t L_29 = String_get_Length_m133(V_2, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_01bc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_30 = Path_GetFullPath_m7632(NULL /*static, unused*/, V_2, /*hidden argument*/&Path_GetFullPath_m7632_MethodInfo);
		V_3 = L_30;
		bool L_31 = Directory_Exists_m7489(NULL /*static, unused*/, V_3, /*hidden argument*/&Directory_Exists_m7489_MethodInfo);
		if (L_31)
		{
			goto IL_01bc;
		}
	}
	{
		String_t* L_32 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1616, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		V_4 = L_32;
		if (!___anonymous)
		{
			goto IL_01a5;
		}
	}
	{
		G_B41_0 = V_2;
		goto IL_01ab;
	}

IL_01a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_33 = Path_GetFullPath_m7632(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_GetFullPath_m7632_MethodInfo);
		G_B41_0 = L_33;
	}

IL_01ab:
	{
		V_5 = G_B41_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_34 = String_Format_m160(NULL /*static, unused*/, V_4, V_5, /*hidden argument*/&String_Format_m160_MethodInfo);
		IsolatedStorageException_t1425 * L_35 = (IsolatedStorageException_t1425 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1425_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m7460(L_35, L_34, /*hidden argument*/&IsolatedStorageException__ctor_m7460_MethodInfo);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_01bc:
	{
		if ((((uint32_t)___access) != ((uint32_t)1)))
		{
			goto IL_01f8;
		}
	}
	{
		if ((((int32_t)___mode) == ((int32_t)2)))
		{
			goto IL_01f8;
		}
	}
	{
		if ((((int32_t)___mode) == ((int32_t)4)))
		{
			goto IL_01f8;
		}
	}
	{
		if ((((int32_t)___mode) == ((int32_t)1)))
		{
			goto IL_01f8;
		}
	}
	{
		bool L_36 = File_Exists_m7507(NULL /*static, unused*/, ___path, /*hidden argument*/&File_Exists_m7507_MethodInfo);
		if (L_36)
		{
			goto IL_01f8;
		}
	}
	{
		String_t* L_37 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1642, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		V_6 = L_37;
		String_t* L_38 = FileStream_GetSecureFileName_m7559(__this, ___path, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		V_7 = L_38;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_39 = String_Format_m160(NULL /*static, unused*/, V_6, V_7, /*hidden argument*/&String_Format_m160_MethodInfo);
		IsolatedStorageException_t1425 * L_40 = (IsolatedStorageException_t1425 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1425_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m7460(L_40, L_39, /*hidden argument*/&IsolatedStorageException__ctor_m7460_MethodInfo);
		il2cpp_codegen_raise_exception(L_40);
	}

IL_01f8:
	{
		if (___anonymous)
		{
			goto IL_0203;
		}
	}
	{
		__this->___name_13 = ___path;
	}

IL_0203:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		IntPtr_t98 L_41 = MonoIO_Open_m7613(NULL /*static, unused*/, ___path, ___mode, ___access, ___share, ___options, (&V_8), /*hidden argument*/&MonoIO_Open_m7613_MethodInfo);
		__this->___handle_14 = L_41;
		IntPtr_t98 L_42 = (__this->___handle_14);
		bool L_43 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_42, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_43)
		{
			goto IL_0238;
		}
	}
	{
		String_t* L_44 = FileStream_GetSecureFileName_m7559(__this, ___path, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_45 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_44, V_8, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_45);
	}

IL_0238:
	{
		__this->___access_1 = ___access;
		__this->___owner_2 = 1;
		__this->___anonymous_6 = ___anonymous;
		IntPtr_t98 L_46 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		int32_t L_47 = MonoIO_GetFileType_m7609(NULL /*static, unused*/, L_46, (&V_8), /*hidden argument*/&MonoIO_GetFileType_m7609_MethodInfo);
		if ((((uint32_t)L_47) != ((uint32_t)1)))
		{
			goto IL_027b;
		}
	}
	{
		__this->___canseek_4 = 1;
		__this->___async_3 = ((((int32_t)((((int32_t)((int32_t)((int32_t)___options&(int32_t)((int32_t)1073741824)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0289;
	}

IL_027b:
	{
		__this->___canseek_4 = 0;
		__this->___async_3 = 0;
	}

IL_0289:
	{
		if ((((uint32_t)___access) != ((uint32_t)1)))
		{
			goto IL_02c6;
		}
	}
	{
		bool L_48 = (__this->___canseek_4);
		if (!L_48)
		{
			goto IL_02c6;
		}
	}
	{
		if ((((uint32_t)___bufferSize) != ((uint32_t)((int32_t)8192))))
		{
			goto IL_02c6;
		}
	}
	{
		int64_t L_49 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&FileStream_get_Length_m7533_MethodInfo, __this);
		V_9 = L_49;
		if ((((int64_t)(((int64_t)___bufferSize))) <= ((int64_t)V_9)))
		{
			goto IL_02c6;
		}
	}
	{
		if ((((int64_t)V_9) >= ((int64_t)(((int64_t)((int32_t)1000))))))
		{
			goto IL_02bf;
		}
	}
	{
		G_B62_0 = (((int64_t)((int32_t)1000)));
		goto IL_02c1;
	}

IL_02bf:
	{
		G_B62_0 = V_9;
	}

IL_02c1:
	{
		___bufferSize = (((int32_t)G_B62_0));
	}

IL_02c6:
	{
		FileStream_InitBuffer_m7558(__this, ___bufferSize, 0, /*hidden argument*/&FileStream_InitBuffer_m7558_MethodInfo);
		if ((((uint32_t)___mode) != ((uint32_t)6)))
		{
			goto IL_02eb;
		}
	}
	{
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(&FileStream_Seek_m7546_MethodInfo, __this, (((int64_t)0)), 2);
		int64_t L_50 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&FileStream_get_Position_m7534_MethodInfo, __this);
		__this->___append_startpos_5 = L_50;
		goto IL_02f3;
	}

IL_02eb:
	{
		__this->___append_startpos_5 = (((int64_t)0));
	}

IL_02f3:
	{
		return;
	}
}
// System.Boolean System.IO.FileStream::get_CanRead()
extern "C" bool FileStream_get_CanRead_m7530 (FileStream_t1436 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___access_1);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = (__this->___access_1);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
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
// System.Boolean System.IO.FileStream::get_CanWrite()
extern "C" bool FileStream_get_CanWrite_m7531 (FileStream_t1436 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___access_1);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = (__this->___access_1);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
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
// System.Boolean System.IO.FileStream::get_CanSeek()
extern "C" bool FileStream_get_CanSeek_m7532 (FileStream_t1436 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___canseek_4);
		return L_0;
	}
}
// System.Int64 System.IO.FileStream::get_Length()
extern "C" int64_t FileStream_get_Length_m7533 (FileStream_t1436 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int64_t V_1 = 0;
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanSeek_m7532_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, (String_t*) &_stringLiteral1625, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0030:
	{
		FileStream_FlushBufferIfDirty_m7555(__this, /*hidden argument*/&FileStream_FlushBufferIfDirty_m7555_MethodInfo);
		IntPtr_t98 L_5 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		int64_t L_6 = MonoIO_GetLength_m7618(NULL /*static, unused*/, L_5, (&V_0), /*hidden argument*/&MonoIO_GetLength_m7618_MethodInfo);
		V_1 = L_6;
		if (!V_0)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_7 = (__this->___name_13);
		String_t* L_8 = FileStream_GetSecureFileName_m7559(__this, L_7, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_9 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_8, V_0, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_005a:
	{
		return V_1;
	}
}
// System.Int64 System.IO.FileStream::get_Position()
extern "C" int64_t FileStream_get_Position_m7534 (FileStream_t1436 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanSeek_m7532_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, (String_t*) &_stringLiteral1625, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0030:
	{
		int64_t L_5 = (__this->___buf_start_12);
		int32_t L_6 = (__this->___buf_offset_10);
		return ((int64_t)((int64_t)L_5+(int64_t)(((int64_t)L_6))));
	}
}
// System.Void System.IO.FileStream::set_Position(System.Int64)
extern "C" void FileStream_set_Position_m7535 (FileStream_t1436 * __this, int64_t ___value, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanSeek_m7532_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, (String_t*) &_stringLiteral1625, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0030:
	{
		if ((((int64_t)___value) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_5 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_5, (String_t*) &_stringLiteral1626, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0040:
	{
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(&FileStream_Seek_m7546_MethodInfo, __this, ___value, 0);
		return;
	}
}
// System.Int32 System.IO.FileStream::ReadByte()
extern MethodInfo FileStream_ReadByte_m7536_MethodInfo;
extern "C" int32_t FileStream_ReadByte_m7536 (FileStream_t1436 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanRead_m7530_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, (String_t*) &_stringLiteral1643, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0030:
	{
		int32_t L_5 = (__this->___buf_size_8);
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		IntPtr_t98 L_6 = (__this->___handle_14);
		ByteU5BU5D_t13* L_7 = (__this->___buf_7);
		int32_t L_8 = FileStream_ReadData_m7557(__this, L_6, L_7, 0, 1, /*hidden argument*/&FileStream_ReadData_m7557_MethodInfo);
		V_0 = L_8;
		if (V_0)
		{
			goto IL_0052;
		}
	}
	{
		return (-1);
	}

IL_0052:
	{
		ByteU5BU5D_t13* L_9 = (__this->___buf_7);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
	}

IL_005b:
	{
		int32_t L_11 = (__this->___buf_offset_10);
		int32_t L_12 = (__this->___buf_length_9);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0079;
		}
	}
	{
		FileStream_RefillBuffer_m7556(__this, /*hidden argument*/&FileStream_RefillBuffer_m7556_MethodInfo);
		int32_t L_13 = (__this->___buf_length_9);
		if (L_13)
		{
			goto IL_0079;
		}
	}
	{
		return (-1);
	}

IL_0079:
	{
		ByteU5BU5D_t13* L_14 = (__this->___buf_7);
		int32_t L_15 = (__this->___buf_offset_10);
		int32_t L_16 = L_15;
		V_1 = L_16;
		__this->___buf_offset_10 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, V_1);
		int32_t L_17 = V_1;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_17));
	}
}
// System.Void System.IO.FileStream::WriteByte(System.Byte)
extern MethodInfo FileStream_WriteByte_m7537_MethodInfo;
extern "C" void FileStream_WriteByte_m7537 (FileStream_t1436 * __this, uint8_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanWrite_m7531_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, (String_t*) &_stringLiteral1644, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0030:
	{
		int32_t L_5 = (__this->___buf_offset_10);
		int32_t L_6 = (__this->___buf_size_8);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_0044;
		}
	}
	{
		FileStream_FlushBuffer_m7554(__this, /*hidden argument*/&FileStream_FlushBuffer_m7554_MethodInfo);
	}

IL_0044:
	{
		int32_t L_7 = (__this->___buf_size_8);
		if (L_7)
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_t13* L_8 = (__this->___buf_7);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 0)) = (uint8_t)___value;
		__this->___buf_dirty_11 = 1;
		__this->___buf_length_9 = 1;
		FileStream_FlushBuffer_m7554(__this, /*hidden argument*/&FileStream_FlushBuffer_m7554_MethodInfo);
		return;
	}

IL_006a:
	{
		ByteU5BU5D_t13* L_9 = (__this->___buf_7);
		int32_t L_10 = (__this->___buf_offset_10);
		int32_t L_11 = L_10;
		V_0 = L_11;
		__this->___buf_offset_10 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, V_0)) = (uint8_t)___value;
		int32_t L_12 = (__this->___buf_offset_10);
		int32_t L_13 = (__this->___buf_length_9);
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_14 = (__this->___buf_offset_10);
		__this->___buf_length_9 = L_14;
	}

IL_009d:
	{
		__this->___buf_dirty_11 = 1;
		return;
	}
}
// System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32)
extern MethodInfo FileStream_Read_m7538_MethodInfo;
extern "C" int32_t FileStream_Read_m7538 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		if (___array)
		{
			goto IL_002b;
		}
	}
	{
		ArgumentNullException_t785 * L_3 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_3, (String_t*) &_stringLiteral403, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanRead_m7530_MethodInfo, __this);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		NotSupportedException_t150 * L_5 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_5, (String_t*) &_stringLiteral1643, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003e:
	{
		NullCheck(___array);
		V_0 = (((int32_t)(((Array_t *)___array)->max_length)));
		if ((((int32_t)___offset) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_6 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_6, (String_t*) &_stringLiteral1645, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0056:
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_7 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_7, (String_t*) &_stringLiteral489, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_006a:
	{
		if ((((int32_t)___offset) <= ((int32_t)V_0)))
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_t522 * L_8 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_8, (String_t*) &_stringLiteral1646, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0079:
	{
		if ((((int32_t)___offset) <= ((int32_t)((int32_t)((int32_t)V_0-(int32_t)___count)))))
		{
			goto IL_008a;
		}
	}
	{
		ArgumentException_t522 * L_9 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_9, (String_t*) &_stringLiteral1647, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_008a:
	{
		bool L_10 = (__this->___async_3);
		if (!L_10)
		{
			goto IL_00a6;
		}
	}
	{
		Object_t * L_11 = (Object_t *)VirtFuncInvoker5< Object_t *, ByteU5BU5D_t13*, int32_t, int32_t, AsyncCallback_t266 *, Object_t * >::Invoke(&FileStream_BeginRead_m7540_MethodInfo, __this, ___array, ___offset, ___count, (AsyncCallback_t266 *)NULL, NULL);
		V_1 = L_11;
		int32_t L_12 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&FileStream_EndRead_m7541_MethodInfo, __this, V_1);
		return L_12;
	}

IL_00a6:
	{
		int32_t L_13 = FileStream_ReadInternal_m7539(__this, ___array, ___offset, ___count, /*hidden argument*/&FileStream_ReadInternal_m7539_MethodInfo);
		return L_13;
	}
}
// System.Int32 System.IO.FileStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadInternal_m7539 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___dest, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = FileStream_ReadSegment_m7551(__this, ___dest, ___offset, ___count, /*hidden argument*/&FileStream_ReadSegment_m7551_MethodInfo);
		V_1 = L_0;
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)V_1));
		___count = ((int32_t)((int32_t)___count-(int32_t)V_1));
		if (___count)
		{
			goto IL_001c;
		}
	}
	{
		return V_0;
	}

IL_001c:
	{
		int32_t L_1 = (__this->___buf_size_8);
		if ((((int32_t)___count) <= ((int32_t)L_1)))
		{
			goto IL_004e;
		}
	}
	{
		FileStream_FlushBuffer_m7554(__this, /*hidden argument*/&FileStream_FlushBuffer_m7554_MethodInfo);
		IntPtr_t98 L_2 = (__this->___handle_14);
		int32_t L_3 = FileStream_ReadData_m7557(__this, L_2, ___dest, ((int32_t)((int32_t)___offset+(int32_t)V_0)), ___count, /*hidden argument*/&FileStream_ReadData_m7557_MethodInfo);
		V_1 = L_3;
		int64_t L_4 = (__this->___buf_start_12);
		__this->___buf_start_12 = ((int64_t)((int64_t)L_4+(int64_t)(((int64_t)V_1))));
		goto IL_0060;
	}

IL_004e:
	{
		FileStream_RefillBuffer_m7556(__this, /*hidden argument*/&FileStream_RefillBuffer_m7556_MethodInfo);
		int32_t L_5 = FileStream_ReadSegment_m7551(__this, ___dest, ((int32_t)((int32_t)___offset+(int32_t)V_0)), ___count, /*hidden argument*/&FileStream_ReadSegment_m7551_MethodInfo);
		V_1 = L_5;
	}

IL_0060:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)V_1));
		return V_0;
	}
}
// System.IAsyncResult System.IO.FileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FileStream_BeginRead_m7540 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t266 * ___userCallback, Object_t * ___stateObject, MethodInfo* method)
{
	ReadDelegate_t1443 * V_0 = {0};
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanRead_m7530_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, (String_t*) &_stringLiteral1648, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0030:
	{
		if (___array)
		{
			goto IL_003e;
		}
	}
	{
		ArgumentNullException_t785 * L_5 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_5, (String_t*) &_stringLiteral403, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003e:
	{
		if ((((int32_t)___numBytes) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_6 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_6, (String_t*) &_stringLiteral1649, (String_t*) &_stringLiteral1650, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0052:
	{
		if ((((int32_t)___offset) >= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_7 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_7, (String_t*) &_stringLiteral1645, (String_t*) &_stringLiteral1650, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0066:
	{
		NullCheck(___array);
		if ((((int32_t)___numBytes) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___array)->max_length)))-(int32_t)___offset)))))
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_t522 * L_8 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_8, (String_t*) &_stringLiteral1651, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0079:
	{
		bool L_9 = (__this->___async_3);
		if (L_9)
		{
			goto IL_008f;
		}
	}
	{
		Object_t * L_10 = Stream_BeginRead_m7653(__this, ___array, ___offset, ___numBytes, ___userCallback, ___stateObject, /*hidden argument*/&Stream_BeginRead_m7653_MethodInfo);
		return L_10;
	}

IL_008f:
	{
		IntPtr_t98 L_11 = { &FileStream_ReadInternal_m7539_MethodInfo };
		ReadDelegate_t1443 * L_12 = (ReadDelegate_t1443 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ReadDelegate_t1443_il2cpp_TypeInfo));
		ReadDelegate__ctor_m7517(L_12, __this, L_11, /*hidden argument*/&ReadDelegate__ctor_m7517_MethodInfo);
		V_0 = L_12;
		NullCheck(V_0);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker5< Object_t *, ByteU5BU5D_t13*, int32_t, int32_t, AsyncCallback_t266 *, Object_t * >::Invoke(&ReadDelegate_BeginInvoke_m7519_MethodInfo, V_0, ___array, ___offset, ___numBytes, ___userCallback, ___stateObject);
		return L_13;
	}
}
// System.Int32 System.IO.FileStream::EndRead(System.IAsyncResult)
extern "C" int32_t FileStream_EndRead_m7541 (FileStream_t1436 * __this, Object_t * ___asyncResult, MethodInfo* method)
{
	AsyncResult_t1579 * V_0 = {0};
	ReadDelegate_t1443 * V_1 = {0};
	{
		if (___asyncResult)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		bool L_1 = (__this->___async_3);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = Stream_EndRead_m7655(__this, ___asyncResult, /*hidden argument*/&Stream_EndRead_m7655_MethodInfo);
		return L_2;
	}

IL_001e:
	{
		V_0 = ((AsyncResult_t1579 *)IsInst(___asyncResult, InitializedTypeInfo(&AsyncResult_t1579_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_3, (String_t*) &_stringLiteral1653, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0038:
	{
		NullCheck(V_0);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&AsyncResult_get_AsyncDelegate_m8342_MethodInfo, V_0);
		V_1 = ((ReadDelegate_t1443 *)IsInst(L_4, InitializedTypeInfo(&ReadDelegate_t1443_il2cpp_TypeInfo)));
		if (V_1)
		{
			goto IL_0057;
		}
	}
	{
		ArgumentException_t522 * L_5 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_5, (String_t*) &_stringLiteral1653, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0057:
	{
		NullCheck(V_1);
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ReadDelegate_EndInvoke_m7520_MethodInfo, V_1, ___asyncResult);
		return L_6;
	}
}
// System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32)
extern MethodInfo FileStream_Write_m7542_MethodInfo;
extern "C" void FileStream_Write_m7542 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		if (___array)
		{
			goto IL_002b;
		}
	}
	{
		ArgumentNullException_t785 * L_3 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_3, (String_t*) &_stringLiteral403, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		if ((((int32_t)___offset) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_4 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_4, (String_t*) &_stringLiteral1645, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003f:
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_5 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_5, (String_t*) &_stringLiteral489, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0053:
	{
		NullCheck(___array);
		if ((((int32_t)___offset) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___array)->max_length)))-(int32_t)___count)))))
		{
			goto IL_0066;
		}
	}
	{
		ArgumentException_t522 * L_6 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_6, (String_t*) &_stringLiteral1647, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0066:
	{
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanWrite_m7531_MethodInfo, __this);
		if (L_7)
		{
			goto IL_0079;
		}
	}
	{
		NotSupportedException_t150 * L_8 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_8, (String_t*) &_stringLiteral1644, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0079:
	{
		bool L_9 = (__this->___async_3);
		if (!L_9)
		{
			goto IL_0095;
		}
	}
	{
		Object_t * L_10 = (Object_t *)VirtFuncInvoker5< Object_t *, ByteU5BU5D_t13*, int32_t, int32_t, AsyncCallback_t266 *, Object_t * >::Invoke(&FileStream_BeginWrite_m7544_MethodInfo, __this, ___array, ___offset, ___count, (AsyncCallback_t266 *)NULL, NULL);
		V_0 = L_10;
		VirtActionInvoker1< Object_t * >::Invoke(&FileStream_EndWrite_m7545_MethodInfo, __this, V_0);
		return;
	}

IL_0095:
	{
		FileStream_WriteInternal_m7543(__this, ___array, ___offset, ___count, /*hidden argument*/&FileStream_WriteInternal_m7543_MethodInfo);
		return;
	}
}
// System.Void System.IO.FileStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C" void FileStream_WriteInternal_m7543 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___src, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = (__this->___buf_size_8);
		if ((((int32_t)___count) <= ((int32_t)L_0)))
		{
			goto IL_005a;
		}
	}
	{
		FileStream_FlushBuffer_m7554(__this, /*hidden argument*/&FileStream_FlushBuffer_m7554_MethodInfo);
		V_1 = ___count;
		goto IL_0045;
	}

IL_0013:
	{
		IntPtr_t98 L_1 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		int32_t L_2 = MonoIO_Write_m7616(NULL /*static, unused*/, L_1, ___src, ___offset, V_1, (&V_0), /*hidden argument*/&MonoIO_Write_m7616_MethodInfo);
		V_2 = L_2;
		if (!V_0)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_3 = (__this->___name_13);
		String_t* L_4 = FileStream_GetSecureFileName_m7559(__this, L_3, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_5 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_4, V_0, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003a:
	{
		V_1 = ((int32_t)((int32_t)V_1-(int32_t)V_2));
		___offset = ((int32_t)((int32_t)___offset+(int32_t)V_2));
	}

IL_0045:
	{
		if ((((int32_t)V_1) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int64_t L_6 = (__this->___buf_start_12);
		__this->___buf_start_12 = ((int64_t)((int64_t)L_6+(int64_t)(((int64_t)___count))));
		goto IL_0087;
	}

IL_005a:
	{
		V_3 = 0;
		goto IL_0083;
	}

IL_005e:
	{
		int32_t L_7 = FileStream_WriteSegment_m7552(__this, ___src, ((int32_t)((int32_t)___offset+(int32_t)V_3)), ___count, /*hidden argument*/&FileStream_WriteSegment_m7552_MethodInfo);
		V_4 = L_7;
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)V_4));
		___count = ((int32_t)((int32_t)___count-(int32_t)V_4));
		if (___count)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0087;
	}

IL_007d:
	{
		FileStream_FlushBuffer_m7554(__this, /*hidden argument*/&FileStream_FlushBuffer_m7554_MethodInfo);
	}

IL_0083:
	{
		if ((((int32_t)___count) > ((int32_t)0)))
		{
			goto IL_005e;
		}
	}

IL_0087:
	{
		return;
	}
}
// System.IAsyncResult System.IO.FileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FileStream_BeginWrite_m7544 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t266 * ___userCallback, Object_t * ___stateObject, MethodInfo* method)
{
	FileStreamAsyncResult_t1446 * V_0 = {0};
	MemoryStream_t1449 * V_1 = {0};
	WriteDelegate_t1444 * V_2 = {0};
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanWrite_m7531_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, (String_t*) &_stringLiteral1654, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0030:
	{
		if (___array)
		{
			goto IL_003e;
		}
	}
	{
		ArgumentNullException_t785 * L_5 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_5, (String_t*) &_stringLiteral403, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003e:
	{
		if ((((int32_t)___numBytes) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_6 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_6, (String_t*) &_stringLiteral1649, (String_t*) &_stringLiteral1650, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0052:
	{
		if ((((int32_t)___offset) >= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_7 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_7, (String_t*) &_stringLiteral1645, (String_t*) &_stringLiteral1650, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0066:
	{
		NullCheck(___array);
		if ((((int32_t)___numBytes) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___array)->max_length)))-(int32_t)___offset)))))
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_t522 * L_8 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_8, (String_t*) &_stringLiteral1655, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0079:
	{
		bool L_9 = (__this->___async_3);
		if (L_9)
		{
			goto IL_008f;
		}
	}
	{
		Object_t * L_10 = Stream_BeginWrite_m7654(__this, ___array, ___offset, ___numBytes, ___userCallback, ___stateObject, /*hidden argument*/&Stream_BeginWrite_m7654_MethodInfo);
		return L_10;
	}

IL_008f:
	{
		FileStreamAsyncResult_t1446 * L_11 = (FileStreamAsyncResult_t1446 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FileStreamAsyncResult_t1446_il2cpp_TypeInfo));
		FileStreamAsyncResult__ctor_m7561(L_11, ___userCallback, ___stateObject, /*hidden argument*/&FileStreamAsyncResult__ctor_m7561_MethodInfo);
		V_0 = L_11;
		NullCheck(V_0);
		V_0->___BytesRead_6 = (-1);
		NullCheck(V_0);
		V_0->___Count_4 = ___numBytes;
		NullCheck(V_0);
		V_0->___OriginalCount_5 = ___numBytes;
		bool L_12 = (__this->___buf_dirty_11);
		if (!L_12)
		{
			goto IL_00dc;
		}
	}
	{
		MemoryStream_t1449 * L_13 = (MemoryStream_t1449 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemoryStream_t1449_il2cpp_TypeInfo));
		MemoryStream__ctor_m7578(L_13, /*hidden argument*/&MemoryStream__ctor_m7578_MethodInfo);
		V_1 = L_13;
		FileStream_FlushBuffer_m7553(__this, V_1, /*hidden argument*/&FileStream_FlushBuffer_m7553_MethodInfo);
		NullCheck(V_1);
		VirtActionInvoker3< ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m7599_MethodInfo, V_1, ___array, ___offset, ___numBytes);
		___offset = 0;
		NullCheck(V_1);
		int64_t L_14 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&MemoryStream_get_Length_m7587_MethodInfo, V_1);
		___numBytes = (((int32_t)L_14));
	}

IL_00dc:
	{
		IntPtr_t98 L_15 = { &FileStream_WriteInternal_m7543_MethodInfo };
		WriteDelegate_t1444 * L_16 = (WriteDelegate_t1444 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WriteDelegate_t1444_il2cpp_TypeInfo));
		WriteDelegate__ctor_m7521(L_16, __this, L_15, /*hidden argument*/&WriteDelegate__ctor_m7521_MethodInfo);
		V_2 = L_16;
		NullCheck(V_2);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker5< Object_t *, ByteU5BU5D_t13*, int32_t, int32_t, AsyncCallback_t266 *, Object_t * >::Invoke(&WriteDelegate_BeginInvoke_m7523_MethodInfo, V_2, ___array, ___offset, ___numBytes, ___userCallback, ___stateObject);
		return L_17;
	}
}
// System.Void System.IO.FileStream::EndWrite(System.IAsyncResult)
extern "C" void FileStream_EndWrite_m7545 (FileStream_t1436 * __this, Object_t * ___asyncResult, MethodInfo* method)
{
	AsyncResult_t1579 * V_0 = {0};
	WriteDelegate_t1444 * V_1 = {0};
	{
		if (___asyncResult)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		bool L_1 = (__this->___async_3);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Stream_EndWrite_m7656(__this, ___asyncResult, /*hidden argument*/&Stream_EndWrite_m7656_MethodInfo);
		return;
	}

IL_001e:
	{
		V_0 = ((AsyncResult_t1579 *)IsInst(___asyncResult, InitializedTypeInfo(&AsyncResult_t1579_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_2, (String_t*) &_stringLiteral1653, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0038:
	{
		NullCheck(V_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&AsyncResult_get_AsyncDelegate_m8342_MethodInfo, V_0);
		V_1 = ((WriteDelegate_t1444 *)IsInst(L_3, InitializedTypeInfo(&WriteDelegate_t1444_il2cpp_TypeInfo)));
		if (V_1)
		{
			goto IL_0057;
		}
	}
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_4, (String_t*) &_stringLiteral1653, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0057:
	{
		NullCheck(V_1);
		VirtActionInvoker1< Object_t * >::Invoke(&WriteDelegate_EndInvoke_m7524_MethodInfo, V_1, ___asyncResult);
		return;
	}
}
// System.Int64 System.IO.FileStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t FileStream_Seek_m7546 (FileStream_t1436 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanSeek_m7532_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, (String_t*) &_stringLiteral1625, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0030:
	{
		V_2 = ___origin;
		if (V_2 == 0)
		{
			goto IL_005c;
		}
		if (V_2 == 1)
		{
			goto IL_0051;
		}
		if (V_2 == 2)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0060;
	}

IL_0046:
	{
		int64_t L_5 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&FileStream_get_Length_m7533_MethodInfo, __this);
		V_0 = ((int64_t)((int64_t)L_5+(int64_t)___offset));
		goto IL_0070;
	}

IL_0051:
	{
		int64_t L_6 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&FileStream_get_Position_m7534_MethodInfo, __this);
		V_0 = ((int64_t)((int64_t)L_6+(int64_t)___offset));
		goto IL_0070;
	}

IL_005c:
	{
		V_0 = ___offset;
		goto IL_0070;
	}

IL_0060:
	{
		ArgumentException_t522 * L_7 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_7, (String_t*) &_stringLiteral1656, (String_t*) &_stringLiteral1657, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0070:
	{
		if ((((int64_t)V_0) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0080;
		}
	}
	{
		IOException_t1433 * L_8 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_8, (String_t*) &_stringLiteral1658, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0080:
	{
		int64_t L_9 = (__this->___append_startpos_5);
		if ((((int64_t)V_0) >= ((int64_t)L_9)))
		{
			goto IL_0094;
		}
	}
	{
		IOException_t1433 * L_10 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_10, (String_t*) &_stringLiteral1659, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0094:
	{
		FileStream_FlushBuffer_m7554(__this, /*hidden argument*/&FileStream_FlushBuffer_m7554_MethodInfo);
		IntPtr_t98 L_11 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		int64_t L_12 = MonoIO_Seek_m7617(NULL /*static, unused*/, L_11, V_0, 0, (&V_1), /*hidden argument*/&MonoIO_Seek_m7617_MethodInfo);
		__this->___buf_start_12 = L_12;
		if (!V_1)
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_13 = (__this->___name_13);
		String_t* L_14 = FileStream_GetSecureFileName_m7559(__this, L_13, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_15 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_14, V_1, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_00c5:
	{
		int64_t L_16 = (__this->___buf_start_12);
		return L_16;
	}
}
// System.Void System.IO.FileStream::SetLength(System.Int64)
extern MethodInfo FileStream_SetLength_m7547_MethodInfo;
extern "C" void FileStream_SetLength_m7547 (FileStream_t1436 * __this, int64_t ___value, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanSeek_m7532_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_4, (String_t*) &_stringLiteral1625, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0030:
	{
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanWrite_m7531_MethodInfo, __this);
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		NotSupportedException_t150 * L_6 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_6, (String_t*) &_stringLiteral1660, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0043:
	{
		if ((((int64_t)___value) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0053;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_7 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_7, (String_t*) &_stringLiteral1661, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0053:
	{
		VirtActionInvoker0::Invoke(&FileStream_Flush_m7548_MethodInfo, __this);
		IntPtr_t98 L_8 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		MonoIO_SetLength_m7619(NULL /*static, unused*/, L_8, ___value, (&V_0), /*hidden argument*/&MonoIO_SetLength_m7619_MethodInfo);
		if (!V_0)
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_9 = (__this->___name_13);
		String_t* L_10 = FileStream_GetSecureFileName_m7559(__this, L_9, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_11 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_10, V_0, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_007e:
	{
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&FileStream_get_Position_m7534_MethodInfo, __this);
		if ((((int64_t)L_12) <= ((int64_t)___value)))
		{
			goto IL_008e;
		}
	}
	{
		VirtActionInvoker1< int64_t >::Invoke(&FileStream_set_Position_m7535_MethodInfo, __this, ___value);
	}

IL_008e:
	{
		return;
	}
}
// System.Void System.IO.FileStream::Flush()
extern "C" void FileStream_Flush_m7548 (FileStream_t1436 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_2, (String_t*) &_stringLiteral1624, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		FileStream_FlushBuffer_m7554(__this, /*hidden argument*/&FileStream_FlushBuffer_m7554_MethodInfo);
		return;
	}
}
// System.Void System.IO.FileStream::Finalize()
extern MethodInfo FileStream_Finalize_m7549_MethodInfo;
extern "C" void FileStream_Finalize_m7549 (FileStream_t1436 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(&FileStream_Dispose_m7550_MethodInfo, __this, 0);
		// IL_0007: leave.s IL_0010
		leaveInstructions[0] = 0x10; // 1
		THROW_SENTINEL(IL_0010);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0009;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0009;
	}

IL_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m226(__this, /*hidden argument*/&Object_Finalize_m226_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x10:
				goto IL_0010;
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

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.FileStream::Dispose(System.Boolean)
extern "C" void FileStream_Dispose_m7550 (FileStream_t1436 * __this, bool ___disposing, MethodInfo* method)
{
	Exception_t140 * V_0 = {0};
	Exception_t140 * V_1 = {0};
	int32_t V_2 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = (Exception_t140 *)NULL;
		IntPtr_t98 L_0 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		bool L_1 = IntPtr_op_Inequality_m6296(NULL /*static, unused*/, L_0, (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1), /*hidden argument*/&IntPtr_op_Inequality_m6296_MethodInfo);
		if (!L_1)
		{
			goto IL_0058;
		}
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		FileStream_FlushBuffer_m7554(__this, /*hidden argument*/&FileStream_FlushBuffer_m7554_MethodInfo);
		// IL_001a: leave.s IL_0021
		goto IL_0021;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_001c;
		throw e;
	}

IL_001c:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t140 *)__exception_local);
		V_0 = V_1;
		// IL_001f: leave.s IL_0021
		goto IL_0021;
	} // end catch (depth: 1)

IL_0021:
	{
		bool L_2 = (__this->___owner_2);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		IntPtr_t98 L_3 = (__this->___handle_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		MonoIO_Close_m7614(NULL /*static, unused*/, L_3, (&V_2), /*hidden argument*/&MonoIO_Close_m7614_MethodInfo);
		if (!V_2)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_4 = (__this->___name_13);
		String_t* L_5 = FileStream_GetSecureFileName_m7559(__this, L_4, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_6 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_5, V_2, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		__this->___handle_14 = (((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1);
	}

IL_0058:
	{
		__this->___canseek_4 = 0;
		__this->___access_1 = 0;
		if (!___disposing)
		{
			goto IL_0070;
		}
	}
	{
		__this->___buf_7 = (ByteU5BU5D_t13*)NULL;
	}

IL_0070:
	{
		if (!___disposing)
		{
			goto IL_0079;
		}
	}
	{
		GC_SuppressFinalize_m5619(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5619_MethodInfo);
	}

IL_0079:
	{
		if (!V_0)
		{
			goto IL_007e;
		}
	}
	{
		il2cpp_codegen_raise_exception(V_0);
	}

IL_007e:
	{
		return;
	}
}
// System.Int32 System.IO.FileStream::ReadSegment(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadSegment_m7551 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___dest, int32_t ___dest_offset, int32_t ___count, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___buf_length_9);
		int32_t L_1 = (__this->___buf_offset_10);
		if ((((int32_t)___count) <= ((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = (__this->___buf_length_9);
		int32_t L_3 = (__this->___buf_offset_10);
		___count = ((int32_t)((int32_t)L_2-(int32_t)L_3));
	}

IL_0021:
	{
		if ((((int32_t)___count) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		ByteU5BU5D_t13* L_4 = (__this->___buf_7);
		int32_t L_5 = (__this->___buf_offset_10);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, L_5, (Array_t *)(Array_t *)___dest, ___dest_offset, ___count, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
		int32_t L_6 = (__this->___buf_offset_10);
		__this->___buf_offset_10 = ((int32_t)((int32_t)L_6+(int32_t)___count));
	}

IL_0047:
	{
		return ___count;
	}
}
// System.Int32 System.IO.FileStream::WriteSegment(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_WriteSegment_m7552 (FileStream_t1436 * __this, ByteU5BU5D_t13* ___src, int32_t ___src_offset, int32_t ___count, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___buf_size_8);
		int32_t L_1 = (__this->___buf_offset_10);
		if ((((int32_t)___count) <= ((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = (__this->___buf_size_8);
		int32_t L_3 = (__this->___buf_offset_10);
		___count = ((int32_t)((int32_t)L_2-(int32_t)L_3));
	}

IL_0021:
	{
		if ((((int32_t)___count) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		ByteU5BU5D_t13* L_4 = (__this->___buf_7);
		int32_t L_5 = (__this->___buf_offset_10);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)___src, ___src_offset, (Array_t *)(Array_t *)L_4, L_5, ___count, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
		int32_t L_6 = (__this->___buf_offset_10);
		__this->___buf_offset_10 = ((int32_t)((int32_t)L_6+(int32_t)___count));
		int32_t L_7 = (__this->___buf_offset_10);
		int32_t L_8 = (__this->___buf_length_9);
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = (__this->___buf_offset_10);
		__this->___buf_length_9 = L_9;
	}

IL_0061:
	{
		__this->___buf_dirty_11 = 1;
	}

IL_0068:
	{
		return ___count;
	}
}
// System.Void System.IO.FileStream::FlushBuffer(System.IO.Stream)
extern "C" void FileStream_FlushBuffer_m7553 (FileStream_t1436 * __this, Stream_t1426 * ___st, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->___buf_dirty_11);
		if (!L_0)
		{
			goto IL_0087;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&FileStream_get_CanSeek_m7532_MethodInfo, __this);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		IntPtr_t98 L_2 = (__this->___handle_14);
		int64_t L_3 = (__this->___buf_start_12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		MonoIO_Seek_m7617(NULL /*static, unused*/, L_2, L_3, 0, (&V_0), /*hidden argument*/&MonoIO_Seek_m7617_MethodInfo);
		if (!V_0)
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_4 = (__this->___name_13);
		String_t* L_5 = FileStream_GetSecureFileName_m7559(__this, L_4, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_6 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_5, V_0, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003e:
	{
		if (___st)
		{
			goto IL_0074;
		}
	}
	{
		IntPtr_t98 L_7 = (__this->___handle_14);
		ByteU5BU5D_t13* L_8 = (__this->___buf_7);
		int32_t L_9 = (__this->___buf_length_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		MonoIO_Write_m7616(NULL /*static, unused*/, L_7, L_8, 0, L_9, (&V_0), /*hidden argument*/&MonoIO_Write_m7616_MethodInfo);
		if (!V_0)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_10 = (__this->___name_13);
		String_t* L_11 = FileStream_GetSecureFileName_m7559(__this, L_10, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_12 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_11, V_0, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0072:
	{
		goto IL_0087;
	}

IL_0074:
	{
		ByteU5BU5D_t13* L_13 = (__this->___buf_7);
		int32_t L_14 = (__this->___buf_length_9);
		NullCheck(___st);
		VirtActionInvoker3< ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Write_m10311_MethodInfo, ___st, L_13, 0, L_14);
	}

IL_0087:
	{
		int64_t L_15 = (__this->___buf_start_12);
		int32_t L_16 = (__this->___buf_offset_10);
		__this->___buf_start_12 = ((int64_t)((int64_t)L_15+(int64_t)(((int64_t)L_16))));
		int32_t L_17 = 0;
		V_1 = L_17;
		__this->___buf_length_9 = L_17;
		__this->___buf_offset_10 = V_1;
		__this->___buf_dirty_11 = 0;
		return;
	}
}
// System.Void System.IO.FileStream::FlushBuffer()
extern "C" void FileStream_FlushBuffer_m7554 (FileStream_t1436 * __this, MethodInfo* method)
{
	{
		FileStream_FlushBuffer_m7553(__this, (Stream_t1426 *)NULL, /*hidden argument*/&FileStream_FlushBuffer_m7553_MethodInfo);
		return;
	}
}
// System.Void System.IO.FileStream::FlushBufferIfDirty()
extern "C" void FileStream_FlushBufferIfDirty_m7555 (FileStream_t1436 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___buf_dirty_11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		FileStream_FlushBuffer_m7553(__this, (Stream_t1426 *)NULL, /*hidden argument*/&FileStream_FlushBuffer_m7553_MethodInfo);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.IO.FileStream::RefillBuffer()
extern "C" void FileStream_RefillBuffer_m7556 (FileStream_t1436 * __this, MethodInfo* method)
{
	{
		FileStream_FlushBuffer_m7553(__this, (Stream_t1426 *)NULL, /*hidden argument*/&FileStream_FlushBuffer_m7553_MethodInfo);
		IntPtr_t98 L_0 = (__this->___handle_14);
		ByteU5BU5D_t13* L_1 = (__this->___buf_7);
		int32_t L_2 = (__this->___buf_size_8);
		int32_t L_3 = FileStream_ReadData_m7557(__this, L_0, L_1, 0, L_2, /*hidden argument*/&FileStream_ReadData_m7557_MethodInfo);
		__this->___buf_length_9 = L_3;
		return;
	}
}
// System.Int32 System.IO.FileStream::ReadData(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadData_m7557 (FileStream_t1436 * __this, IntPtr_t98 ___handle, ByteU5BU5D_t13* ___buf, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		int32_t L_0 = MonoIO_Read_m7615(NULL /*static, unused*/, ___handle, ___buf, ___offset, ___count, (&V_0), /*hidden argument*/&MonoIO_Read_m7615_MethodInfo);
		V_1 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)((int32_t)109))))
		{
			goto IL_0018;
		}
	}
	{
		V_1 = 0;
		goto IL_002e;
	}

IL_0018:
	{
		if (!V_0)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_1 = (__this->___name_13);
		String_t* L_2 = FileStream_GetSecureFileName_m7559(__this, L_1, /*hidden argument*/&FileStream_GetSecureFileName_m7559_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_3 = MonoIO_GetException_m7603(NULL /*static, unused*/, L_2, V_0, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002e:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0038;
		}
	}
	{
		IOException_t1433 * L_4 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7573(L_4, /*hidden argument*/&IOException__ctor_m7573_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0038:
	{
		return V_1;
	}
}
// System.Void System.IO.FileStream::InitBuffer(System.Int32,System.Boolean)
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void FileStream_InitBuffer_m7558 (FileStream_t1436 * __this, int32_t ___size, bool ___noBuffering, MethodInfo* method)
{
	static bool FileStream_InitBuffer_m7558_init;
	if (!FileStream_InitBuffer_m7558_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		FileStream_InitBuffer_m7558_init = true;
	}
	int32_t V_0 = 0;
	{
		if (!___noBuffering)
		{
			goto IL_0016;
		}
	}
	{
		___size = 0;
		__this->___buf_7 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, 1));
		goto IL_003f;
	}

IL_0016:
	{
		if ((((int32_t)___size) > ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_0 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_0, (String_t*) &_stringLiteral1632, (String_t*) &_stringLiteral1496, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_002a:
	{
		if ((((int32_t)___size) >= ((int32_t)8)))
		{
			goto IL_0033;
		}
	}
	{
		___size = 8;
	}

IL_0033:
	{
		__this->___buf_7 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, ___size));
	}

IL_003f:
	{
		__this->___buf_size_8 = ___size;
		__this->___buf_start_12 = (((int64_t)0));
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___buf_length_9 = L_1;
		__this->___buf_offset_10 = V_0;
		__this->___buf_dirty_11 = 0;
		return;
	}
}
// System.String System.IO.FileStream::GetSecureFileName(System.String)
extern "C" String_t* FileStream_GetSecureFileName_m7559 (FileStream_t1436 * __this, String_t* ___filename, MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		bool L_0 = (__this->___anonymous_6);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_1 = Path_GetFileName_m7631(NULL /*static, unused*/, ___filename, /*hidden argument*/&Path_GetFileName_m7631_MethodInfo);
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_2 = Path_GetFullPath_m7632(NULL /*static, unused*/, ___filename, /*hidden argument*/&Path_GetFullPath_m7632_MethodInfo);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
// System.String System.IO.FileStream::GetSecureFileName(System.String,System.Boolean)
extern "C" String_t* FileStream_GetSecureFileName_m7560 (FileStream_t1436 * __this, String_t* ___filename, bool ___full, MethodInfo* method)
{
	String_t* G_B5_0 = {0};
	{
		bool L_0 = (__this->___anonymous_6);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_1 = Path_GetFileName_m7631(NULL /*static, unused*/, ___filename, /*hidden argument*/&Path_GetFileName_m7631_MethodInfo);
		G_B5_0 = L_1;
		goto IL_001c;
	}

IL_0010:
	{
		if (!___full)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_2 = Path_GetFullPath_m7632(NULL /*static, unused*/, ___filename, /*hidden argument*/&Path_GetFullPath_m7632_MethodInfo);
		G_B5_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B5_0 = ___filename;
	}

IL_001c:
	{
		return G_B5_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
extern TypeInfo ManualResetEvent_t1445_il2cpp_TypeInfo;
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
extern MethodInfo FileStreamAsyncResult_CBWrapper_m7562_MethodInfo;
extern MethodInfo AsyncCallback__ctor_m6551_MethodInfo;
extern MethodInfo ManualResetEvent__ctor_m9369_MethodInfo;
extern MethodInfo AsyncCallback_BeginInvoke_m6553_MethodInfo;


// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m7561 (FileStreamAsyncResult_t1446 * __this, AsyncCallback_t266 * ___cb, Object_t * ___state, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___state_0 = ___state;
		__this->___realcb_7 = ___cb;
		AsyncCallback_t266 * L_0 = (__this->___realcb_7);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		IntPtr_t98 L_1 = { &FileStreamAsyncResult_CBWrapper_m7562_MethodInfo };
		AsyncCallback_t266 * L_2 = (AsyncCallback_t266 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AsyncCallback_t266_il2cpp_TypeInfo));
		AsyncCallback__ctor_m6551(L_2, NULL, L_1, /*hidden argument*/&AsyncCallback__ctor_m6551_MethodInfo);
		__this->___cb_3 = L_2;
	}

IL_002e:
	{
		ManualResetEvent_t1445 * L_3 = (ManualResetEvent_t1445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ManualResetEvent_t1445_il2cpp_TypeInfo));
		ManualResetEvent__ctor_m9369(L_3, 0, /*hidden argument*/&ManualResetEvent__ctor_m9369_MethodInfo);
		__this->___wh_2 = L_3;
		return;
	}
}
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m7562 (Object_t * __this /* static, unused */, Object_t * ___ares, MethodInfo* method)
{
	FileStreamAsyncResult_t1446 * V_0 = {0};
	{
		V_0 = ((FileStreamAsyncResult_t1446 *)Castclass(___ares, InitializedTypeInfo(&FileStreamAsyncResult_t1446_il2cpp_TypeInfo)));
		NullCheck(V_0);
		AsyncCallback_t266 * L_0 = (V_0->___realcb_7);
		NullCheck(L_0);
		VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t266 *, Object_t * >::Invoke(&AsyncCallback_BeginInvoke_m6553_MethodInfo, L_0, ___ares, (AsyncCallback_t266 *)NULL, NULL);
		return;
	}
}
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern MethodInfo FileStreamAsyncResult_get_AsyncState_m7563_MethodInfo;
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m7563 (FileStreamAsyncResult_t1446 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern MethodInfo FileStreamAsyncResult_get_AsyncWaitHandle_m7564_MethodInfo;
extern "C" WaitHandle_t1447 * FileStreamAsyncResult_get_AsyncWaitHandle_m7564 (FileStreamAsyncResult_t1446 * __this, MethodInfo* method)
{
	{
		ManualResetEvent_t1445 * L_0 = (__this->___wh_2);
		return L_0;
	}
}
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern MethodInfo FileStreamAsyncResult_get_IsCompleted_m7565_MethodInfo;
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m7565 (FileStreamAsyncResult_t1446 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern MethodInfo MarshalByRefObject__ctor_m3932_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3877_MethodInfo;
extern MethodInfo FileSystemInfo_get_FullName_m7569_MethodInfo;
extern MethodInfo MonoIO_GetFileStat_m7612_MethodInfo;
extern MethodInfo FileSystemInfo_InternalRefresh_m7571_MethodInfo;


// System.Void System.IO.FileSystemInfo::.ctor()
extern "C" void FileSystemInfo__ctor_m7566 (FileSystemInfo_t1431 * __this, MethodInfo* method)
{
	{
		MarshalByRefObject__ctor_m3932(__this, /*hidden argument*/&MarshalByRefObject__ctor_m3932_MethodInfo);
		__this->___valid_4 = 0;
		__this->___FullPath_1 = (String_t*)NULL;
		return;
	}
}
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileSystemInfo__ctor_m7567 (FileSystemInfo_t1431 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		MarshalByRefObject__ctor_m3932(__this, /*hidden argument*/&MarshalByRefObject__ctor_m3932_MethodInfo);
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
		String_t* L_1 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1662, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->___FullPath_1 = L_1;
		NullCheck(___info);
		String_t* L_2 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1663, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->___OriginalPath_2 = L_2;
		return;
	}
}
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo FileSystemInfo_GetObjectData_m7568_MethodInfo;
extern "C" void FileSystemInfo_GetObjectData_m7568 (FileSystemInfo_t1431 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___OriginalPath_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral1663, L_0, L_1, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		String_t* L_2 = (__this->___FullPath_1);
		Type_t * L_3 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral1662, L_2, L_3, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		return;
	}
}
// System.Boolean System.IO.FileSystemInfo::get_Exists()
// System.String System.IO.FileSystemInfo::get_FullName()
extern "C" String_t* FileSystemInfo_get_FullName_m7569 (FileSystemInfo_t1431 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___FullPath_1);
		return L_0;
	}
}
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
extern "C" void FileSystemInfo_Refresh_m7570 (FileSystemInfo_t1431 * __this, bool ___force, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		bool L_0 = (__this->___valid_4);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		if (___force)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&FileSystemInfo_get_FullName_m7569_MethodInfo, __this);
		MonoIOStat_t1448 * L_2 = &(__this->___stat_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		MonoIO_GetFileStat_m7612(NULL /*static, unused*/, L_1, L_2, (&V_0), /*hidden argument*/&MonoIO_GetFileStat_m7612_MethodInfo);
		__this->___valid_4 = 1;
		VirtActionInvoker0::Invoke(&FileSystemInfo_InternalRefresh_m7571_MethodInfo, __this);
		return;
	}
}
// System.Void System.IO.FileSystemInfo::InternalRefresh()
extern "C" void FileSystemInfo_InternalRefresh_m7571 (FileSystemInfo_t1431 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
extern "C" void FileSystemInfo_CheckPath_m7572 (FileSystemInfo_t1431 * __this, String_t* ___path, MethodInfo* method)
{
	{
		if (___path)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1598, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		NullCheck(___path);
		int32_t L_1 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral1664, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_3 = String_IndexOfAny_m6070(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, (String_t*) &_stringLiteral1665, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern MethodInfo SystemException__ctor_m4066_MethodInfo;
extern MethodInfo SystemException__ctor_m10125_MethodInfo;
extern MethodInfo SystemException__ctor_m10124_MethodInfo;


// System.Void System.IO.IOException::.ctor()
extern "C" void IOException__ctor_m7573 (IOException_t1433 * __this, MethodInfo* method)
{
	{
		SystemException__ctor_m4066(__this, (String_t*) &_stringLiteral1666, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		return;
	}
}
// System.Void System.IO.IOException::.ctor(System.String)
extern "C" void IOException__ctor_m7574 (IOException_t1433 * __this, String_t* ___message, MethodInfo* method)
{
	{
		SystemException__ctor_m4066(__this, ___message, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		return;
	}
}
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
extern MethodInfo IOException__ctor_m7575_MethodInfo;
extern "C" void IOException__ctor_m7575 (IOException_t1433 * __this, String_t* ___message, Exception_t140 * ___innerException, MethodInfo* method)
{
	{
		SystemException__ctor_m10125(__this, ___message, ___innerException, /*hidden argument*/&SystemException__ctor_m10125_MethodInfo);
		return;
	}
}
// System.Void System.IO.IOException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IOException__ctor_m7576 (IOException_t1433 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		SystemException__ctor_m10124(__this, ___info, ___context, /*hidden argument*/&SystemException__ctor_m10124_MethodInfo);
		return;
	}
}
// System.Void System.IO.IOException::.ctor(System.String,System.Int32)
extern MethodInfo IOException__ctor_m7577_MethodInfo;
extern "C" void IOException__ctor_m7577 (IOException_t1433 * __this, String_t* ___message, int32_t ___hresult, MethodInfo* method)
{
	{
		SystemException__ctor_m4066(__this, ___message, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		Exception_set_HResult_m5535(__this, ___hresult, /*hidden argument*/&Exception_set_HResult_m5535_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo;
extern MethodInfo String_Concat_m595_MethodInfo;
extern MethodInfo MemoryStream__ctor_m7579_MethodInfo;
extern MethodInfo MemoryStream_InternalConstructor_m7581_MethodInfo;
extern MethodInfo MemoryStream_CalculateNewCapacity_m7595_MethodInfo;
extern MethodInfo MemoryStream_set_Capacity_m7586_MethodInfo;
extern MethodInfo Array_Clear_m6430_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4062_MethodInfo;
extern MethodInfo MemoryStream_Expand_m7596_MethodInfo;


// System.Void System.IO.MemoryStream::.ctor()
extern "C" void MemoryStream__ctor_m7578 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	{
		MemoryStream__ctor_m7579(__this, 0, /*hidden argument*/&MemoryStream__ctor_m7579_MethodInfo);
		return;
	}
}
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void MemoryStream__ctor_m7579 (MemoryStream_t1449 * __this, int32_t ___capacity, MethodInfo* method)
{
	static bool MemoryStream__ctor_m7579_init;
	if (!MemoryStream__ctor_m7579_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		MemoryStream__ctor_m7579_init = true;
	}
	{
		Stream__ctor_m7646(__this, /*hidden argument*/&Stream__ctor_m7646_MethodInfo);
		if ((((int32_t)___capacity) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_0 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_0, (String_t*) &_stringLiteral1403, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0015:
	{
		__this->___canWrite_1 = 1;
		__this->___capacity_3 = ___capacity;
		__this->___internalBuffer_5 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, ___capacity));
		__this->___expandable_7 = 1;
		__this->___allowGetBuffer_2 = 1;
		return;
	}
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern MethodInfo MemoryStream__ctor_m7580_MethodInfo;
extern "C" void MemoryStream__ctor_m7580 (MemoryStream_t1449 * __this, ByteU5BU5D_t13* ___buffer, MethodInfo* method)
{
	{
		Stream__ctor_m7646(__this, /*hidden argument*/&Stream__ctor_m7646_MethodInfo);
		if (___buffer)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		NullCheck(___buffer);
		MemoryStream_InternalConstructor_m7581(__this, ___buffer, 0, (((int32_t)(((Array_t *)___buffer)->max_length))), 1, 0, /*hidden argument*/&MemoryStream_InternalConstructor_m7581_MethodInfo);
		return;
	}
}
// System.Void System.IO.MemoryStream::InternalConstructor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" void MemoryStream_InternalConstructor_m7581 (MemoryStream_t1449 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___index, int32_t ___count, bool ___writable, bool ___publicallyVisible, MethodInfo* method)
{
	{
		if (___buffer)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if ((((int32_t)___index) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		ArgumentOutOfRangeException_t786 * L_1 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_1, (String_t*) &_stringLiteral1672, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0021:
	{
		NullCheck(___buffer);
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length)))-(int32_t)___index))) >= ((int32_t)___count)))
		{
			goto IL_0039;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_2, (String_t*) &_stringLiteral1673, (String_t*) &_stringLiteral1674, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0039:
	{
		__this->___canWrite_1 = ___writable;
		__this->___internalBuffer_5 = ___buffer;
		__this->___capacity_3 = ((int32_t)((int32_t)___count+(int32_t)___index));
		int32_t L_3 = (__this->___capacity_3);
		__this->___length_4 = L_3;
		__this->___position_9 = ___index;
		__this->___initialIndex_6 = ___index;
		__this->___allowGetBuffer_2 = ___publicallyVisible;
		__this->___expandable_7 = 0;
		return;
	}
}
// System.Void System.IO.MemoryStream::CheckIfClosedThrowDisposed()
extern "C" void MemoryStream_CheckIfClosedThrowDisposed_m7582 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___streamClosed_8);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_1, (String_t*) &_stringLiteral1675, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean System.IO.MemoryStream::get_CanRead()
extern MethodInfo MemoryStream_get_CanRead_m7583_MethodInfo;
extern "C" bool MemoryStream_get_CanRead_m7583 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___streamClosed_8);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.IO.MemoryStream::get_CanSeek()
extern MethodInfo MemoryStream_get_CanSeek_m7584_MethodInfo;
extern "C" bool MemoryStream_get_CanSeek_m7584 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___streamClosed_8);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.IO.MemoryStream::get_CanWrite()
extern MethodInfo MemoryStream_get_CanWrite_m7585_MethodInfo;
extern "C" bool MemoryStream_get_CanWrite_m7585 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->___streamClosed_8);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (__this->___canWrite_1);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		return G_B3_0;
	}
}
// System.Void System.IO.MemoryStream::set_Capacity(System.Int32)
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void MemoryStream_set_Capacity_m7586 (MemoryStream_t1449 * __this, int32_t ___value, MethodInfo* method)
{
	static bool MemoryStream_set_Capacity_m7586_init;
	if (!MemoryStream_set_Capacity_m7586_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		MemoryStream_set_Capacity_m7586_init = true;
	}
	ByteU5BU5D_t13* V_0 = {0};
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		int32_t L_0 = (__this->___capacity_3);
		if ((((uint32_t)___value) != ((uint32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		bool L_1 = (__this->___expandable_7);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t150 * L_2 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_2, (String_t*) &_stringLiteral1667, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0023:
	{
		if ((((int32_t)___value) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_3 = (__this->___length_4);
		if ((((int32_t)___value) >= ((int32_t)L_3)))
		{
			goto IL_006d;
		}
	}

IL_0030:
	{
		ObjectU5BU5D_t137* L_4 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 4));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral1668);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0)) = (Object_t *)(String_t*) &_stringLiteral1668;
		ObjectU5BU5D_t137* L_5 = L_4;
		int32_t L_6 = ___value;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_6);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t137* L_8 = L_5;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral186);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)(String_t*) &_stringLiteral186;
		ObjectU5BU5D_t137* L_9 = L_8;
		int32_t L_10 = (__this->___capacity_3);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = String_Concat_m595(NULL /*static, unused*/, L_9, /*hidden argument*/&String_Concat_m595_MethodInfo);
		ArgumentOutOfRangeException_t786 * L_14 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_14, (String_t*) &_stringLiteral610, L_13, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_006d:
	{
		V_0 = (ByteU5BU5D_t13*)NULL;
		if (!___value)
		{
			goto IL_008d;
		}
	}
	{
		V_0 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, ___value));
		ByteU5BU5D_t13* L_15 = (__this->___internalBuffer_5);
		int32_t L_16 = (__this->___length_4);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, 0, (Array_t *)(Array_t *)V_0, 0, L_16, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
	}

IL_008d:
	{
		__this->___dirty_bytes_10 = 0;
		__this->___internalBuffer_5 = V_0;
		__this->___capacity_3 = ___value;
		return;
	}
}
// System.Int64 System.IO.MemoryStream::get_Length()
extern "C" int64_t MemoryStream_get_Length_m7587 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		int32_t L_0 = (__this->___length_4);
		int32_t L_1 = (__this->___initialIndex_6);
		return (((int64_t)((int32_t)((int32_t)L_0-(int32_t)L_1))));
	}
}
// System.Int64 System.IO.MemoryStream::get_Position()
extern MethodInfo MemoryStream_get_Position_m7588_MethodInfo;
extern "C" int64_t MemoryStream_get_Position_m7588 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		int32_t L_0 = (__this->___position_9);
		int32_t L_1 = (__this->___initialIndex_6);
		return (((int64_t)((int32_t)((int32_t)L_0-(int32_t)L_1))));
	}
}
// System.Void System.IO.MemoryStream::set_Position(System.Int64)
extern MethodInfo MemoryStream_set_Position_m7589_MethodInfo;
extern "C" void MemoryStream_set_Position_m7589 (MemoryStream_t1449 * __this, int64_t ___value, MethodInfo* method)
{
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		if ((((int64_t)___value) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_0 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_0, (String_t*) &_stringLiteral610, (String_t*) &_stringLiteral1669, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_001b:
	{
		if ((((int64_t)___value) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_1 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_1, (String_t*) &_stringLiteral610, (String_t*) &_stringLiteral1670, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0034:
	{
		int32_t L_2 = (__this->___initialIndex_6);
		__this->___position_9 = ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)___value))));
		return;
	}
}
// System.Void System.IO.MemoryStream::Dispose(System.Boolean)
extern MethodInfo MemoryStream_Dispose_m7590_MethodInfo;
extern "C" void MemoryStream_Dispose_m7590 (MemoryStream_t1449 * __this, bool ___disposing, MethodInfo* method)
{
	{
		__this->___streamClosed_8 = 1;
		__this->___expandable_7 = 0;
		return;
	}
}
// System.Void System.IO.MemoryStream::Flush()
extern MethodInfo MemoryStream_Flush_m7591_MethodInfo;
extern "C" void MemoryStream_Flush_m7591 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern MethodInfo MemoryStream_Read_m7592_MethodInfo;
extern "C" int32_t MemoryStream_Read_m7592 (MemoryStream_t1449 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		if (___buffer)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		if ((((int32_t)___offset) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}

IL_001c:
	{
		ArgumentOutOfRangeException_t786 * L_1 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_1, (String_t*) &_stringLiteral1676, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0027:
	{
		NullCheck(___buffer);
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length)))-(int32_t)___offset))) >= ((int32_t)___count)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_2, (String_t*) &_stringLiteral1677, (String_t*) &_stringLiteral1678, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_003f:
	{
		int32_t L_3 = (__this->___position_9);
		int32_t L_4 = (__this->___length_4);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0050;
		}
	}
	{
		if (___count)
		{
			goto IL_0052;
		}
	}

IL_0050:
	{
		return 0;
	}

IL_0052:
	{
		int32_t L_5 = (__this->___position_9);
		int32_t L_6 = (__this->___length_4);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)((int32_t)L_6-(int32_t)___count)))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_7 = (__this->___length_4);
		int32_t L_8 = (__this->___position_9);
		___count = ((int32_t)((int32_t)L_7-(int32_t)L_8));
	}

IL_0073:
	{
		ByteU5BU5D_t13* L_9 = (__this->___internalBuffer_5);
		int32_t L_10 = (__this->___position_9);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_9, L_10, (Array_t *)(Array_t *)___buffer, ___offset, ___count, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
		int32_t L_11 = (__this->___position_9);
		__this->___position_9 = ((int32_t)((int32_t)L_11+(int32_t)___count));
		return ___count;
	}
}
// System.Int32 System.IO.MemoryStream::ReadByte()
extern MethodInfo MemoryStream_ReadByte_m7593_MethodInfo;
extern "C" int32_t MemoryStream_ReadByte_m7593 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		int32_t L_0 = (__this->___position_9);
		int32_t L_1 = (__this->___length_4);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		ByteU5BU5D_t13* L_2 = (__this->___internalBuffer_5);
		int32_t L_3 = (__this->___position_9);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->___position_9 = ((int32_t)((int32_t)L_4+(int32_t)1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, V_0);
		int32_t L_5 = V_0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_5));
	}
}
// System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern MethodInfo MemoryStream_Seek_m7594_MethodInfo;
extern "C" int64_t MemoryStream_Seek_m7594 (MemoryStream_t1449 * __this, int64_t ___offset, int32_t ___loc, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		if ((((int64_t)___offset) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0025;
		}
	}
	{
		int64_t L_0 = ___offset;
		Object_t * L_1 = Box(InitializedTypeInfo(&Int64_t147_il2cpp_TypeInfo), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m591(NULL /*static, unused*/, (String_t*) &_stringLiteral1679, L_1, /*hidden argument*/&String_Concat_m591_MethodInfo);
		ArgumentOutOfRangeException_t786 * L_3 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_3, L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		V_1 = ___loc;
		if (V_1 == 0)
		{
			goto IL_003b;
		}
		if (V_1 == 1)
		{
			goto IL_0054;
		}
		if (V_1 == 2)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_0066;
	}

IL_003b:
	{
		if ((((int64_t)___offset) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_004b;
		}
	}
	{
		IOException_t1433 * L_4 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_4, (String_t*) &_stringLiteral1680, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_004b:
	{
		int32_t L_5 = (__this->___initialIndex_6);
		V_0 = L_5;
		goto IL_0076;
	}

IL_0054:
	{
		int32_t L_6 = (__this->___position_9);
		V_0 = L_6;
		goto IL_0076;
	}

IL_005d:
	{
		int32_t L_7 = (__this->___length_4);
		V_0 = L_7;
		goto IL_0076;
	}

IL_0066:
	{
		ArgumentException_t522 * L_8 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_8, (String_t*) &_stringLiteral1681, (String_t*) &_stringLiteral1657, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0076:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)(((int32_t)___offset))));
		int32_t L_9 = (__this->___initialIndex_6);
		if ((((int32_t)V_0) >= ((int32_t)L_9)))
		{
			goto IL_008f;
		}
	}
	{
		IOException_t1433 * L_10 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7574(L_10, (String_t*) &_stringLiteral1680, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_008f:
	{
		__this->___position_9 = V_0;
		int32_t L_11 = (__this->___position_9);
		return (((int64_t)L_11));
	}
}
// System.Int32 System.IO.MemoryStream::CalculateNewCapacity(System.Int32)
extern "C" int32_t MemoryStream_CalculateNewCapacity_m7595 (MemoryStream_t1449 * __this, int32_t ___minimum, MethodInfo* method)
{
	{
		if ((((int32_t)___minimum) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0011;
		}
	}
	{
		___minimum = ((int32_t)256);
	}

IL_0011:
	{
		int32_t L_0 = (__this->___capacity_3);
		if ((((int32_t)___minimum) >= ((int32_t)((int32_t)((int32_t)L_0*(int32_t)2)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = (__this->___capacity_3);
		___minimum = ((int32_t)((int32_t)L_1*(int32_t)2));
	}

IL_0028:
	{
		return ___minimum;
	}
}
// System.Void System.IO.MemoryStream::Expand(System.Int32)
extern "C" void MemoryStream_Expand_m7596 (MemoryStream_t1449 * __this, int32_t ___newSize, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___capacity_3);
		if ((((int32_t)___newSize) <= ((int32_t)L_0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = MemoryStream_CalculateNewCapacity_m7595(__this, ___newSize, /*hidden argument*/&MemoryStream_CalculateNewCapacity_m7595_MethodInfo);
		VirtActionInvoker1< int32_t >::Invoke(&MemoryStream_set_Capacity_m7586_MethodInfo, __this, L_1);
		goto IL_003f;
	}

IL_0018:
	{
		int32_t L_2 = (__this->___dirty_bytes_10);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		ByteU5BU5D_t13* L_3 = (__this->___internalBuffer_5);
		int32_t L_4 = (__this->___length_4);
		int32_t L_5 = (__this->___dirty_bytes_10);
		Array_Clear_m6430(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, L_4, L_5, /*hidden argument*/&Array_Clear_m6430_MethodInfo);
		__this->___dirty_bytes_10 = 0;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.IO.MemoryStream::SetLength(System.Int64)
extern MethodInfo MemoryStream_SetLength_m7597_MethodInfo;
extern "C" void MemoryStream_SetLength_m7597 (MemoryStream_t1449 * __this, int64_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___expandable_7);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = (__this->___capacity_3);
		if ((((int64_t)___value) <= ((int64_t)(((int64_t)L_1)))))
		{
			goto IL_001d;
		}
	}
	{
		NotSupportedException_t150 * L_2 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_2, (String_t*) &_stringLiteral1682, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		bool L_3 = (__this->___canWrite_1);
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_4 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1683, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		NotSupportedException_t150 * L_5 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_5, L_4, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003b:
	{
		if ((((int64_t)___value) < ((int64_t)(((int64_t)0)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = (__this->___initialIndex_6);
		if ((((int64_t)((int64_t)((int64_t)___value+(int64_t)(((int64_t)L_6))))) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		ArgumentOutOfRangeException_t786 * L_7 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4062(L_7, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4062_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0057:
	{
		int32_t L_8 = (__this->___initialIndex_6);
		V_0 = ((int32_t)((int32_t)(((int32_t)___value))+(int32_t)L_8));
		int32_t L_9 = (__this->___length_4);
		if ((((int32_t)V_0) <= ((int32_t)L_9)))
		{
			goto IL_0073;
		}
	}
	{
		MemoryStream_Expand_m7596(__this, V_0, /*hidden argument*/&MemoryStream_Expand_m7596_MethodInfo);
		goto IL_0091;
	}

IL_0073:
	{
		int32_t L_10 = (__this->___length_4);
		if ((((int32_t)V_0) >= ((int32_t)L_10)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_11 = (__this->___dirty_bytes_10);
		int32_t L_12 = (__this->___length_4);
		__this->___dirty_bytes_10 = ((int32_t)((int32_t)L_11+(int32_t)((int32_t)((int32_t)L_12-(int32_t)V_0))));
	}

IL_0091:
	{
		__this->___length_4 = V_0;
		int32_t L_13 = (__this->___position_9);
		int32_t L_14 = (__this->___length_4);
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_15 = (__this->___length_4);
		__this->___position_9 = L_15;
	}

IL_00b2:
	{
		return;
	}
}
// System.Byte[] System.IO.MemoryStream::ToArray()
extern MethodInfo MemoryStream_ToArray_m7598_MethodInfo;
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t13* MemoryStream_ToArray_m7598 (MemoryStream_t1449 * __this, MethodInfo* method)
{
	static bool MemoryStream_ToArray_m7598_init;
	if (!MemoryStream_ToArray_m7598_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		MemoryStream_ToArray_m7598_init = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t13* V_1 = {0};
	{
		int32_t L_0 = (__this->___length_4);
		int32_t L_1 = (__this->___initialIndex_6);
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		V_1 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, V_0));
		ByteU5BU5D_t13* L_2 = (__this->___internalBuffer_5);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		ByteU5BU5D_t13* L_3 = (__this->___internalBuffer_5);
		int32_t L_4 = (__this->___initialIndex_6);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, L_4, (Array_t *)(Array_t *)V_1, 0, V_0, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
	}

IL_0031:
	{
		return V_1;
	}
}
// System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void MemoryStream_Write_m7599 (MemoryStream_t1449 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		bool L_0 = (__this->___canWrite_1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		NotSupportedException_t150 * L_1 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_1, (String_t*) &_stringLiteral1684, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0019:
	{
		if (___buffer)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t785 * L_2 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_2, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0027:
	{
		if ((((int32_t)___offset) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		ArgumentOutOfRangeException_t786 * L_3 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4062(L_3, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4062_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0035:
	{
		NullCheck(___buffer);
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length)))-(int32_t)___offset))) >= ((int32_t)___count)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_4, (String_t*) &_stringLiteral1677, (String_t*) &_stringLiteral1678, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_004d:
	{
		int32_t L_5 = (__this->___position_9);
		int32_t L_6 = (__this->___length_4);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)((int32_t)L_6-(int32_t)___count)))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_7 = (__this->___position_9);
		MemoryStream_Expand_m7596(__this, ((int32_t)((int32_t)L_7+(int32_t)___count)), /*hidden argument*/&MemoryStream_Expand_m7596_MethodInfo);
	}

IL_006b:
	{
		ByteU5BU5D_t13* L_8 = (__this->___internalBuffer_5);
		int32_t L_9 = (__this->___position_9);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)___buffer, ___offset, (Array_t *)(Array_t *)L_8, L_9, ___count, /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
		int32_t L_10 = (__this->___position_9);
		__this->___position_9 = ((int32_t)((int32_t)L_10+(int32_t)___count));
		int32_t L_11 = (__this->___position_9);
		int32_t L_12 = (__this->___length_4);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_13 = (__this->___position_9);
		__this->___length_4 = L_13;
	}

IL_00a7:
	{
		return;
	}
}
// System.Void System.IO.MemoryStream::WriteByte(System.Byte)
extern MethodInfo MemoryStream_WriteByte_m7600_MethodInfo;
extern "C" void MemoryStream_WriteByte_m7600 (MemoryStream_t1449 * __this, uint8_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		MemoryStream_CheckIfClosedThrowDisposed_m7582(__this, /*hidden argument*/&MemoryStream_CheckIfClosedThrowDisposed_m7582_MethodInfo);
		bool L_0 = (__this->___canWrite_1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		NotSupportedException_t150 * L_1 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_1, (String_t*) &_stringLiteral1684, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0019:
	{
		int32_t L_2 = (__this->___position_9);
		int32_t L_3 = (__this->___length_4);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (__this->___position_9);
		MemoryStream_Expand_m7596(__this, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/&MemoryStream_Expand_m7596_MethodInfo);
		int32_t L_5 = (__this->___position_9);
		__this->___length_4 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0043:
	{
		ByteU5BU5D_t13* L_6 = (__this->___internalBuffer_5);
		int32_t L_7 = (__this->___position_9);
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->___position_9 = ((int32_t)((int32_t)L_8+(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, V_0)) = (uint8_t)___value;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoFileType_t1450_il2cpp_TypeInfo;
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.IO.PathTooLongException
#include "mscorlib_System_IO_PathTooLongException.h"
extern TypeInfo PathTooLongException_t1453_il2cpp_TypeInfo;
extern TypeInfo MonoIOError_t1452_il2cpp_TypeInfo;
// System.IO.PathTooLongException
#include "mscorlib_System_IO_PathTooLongExceptionMethodDeclarations.h"
extern MethodInfo IntPtr_op_Explicit_m6298_MethodInfo;
extern MethodInfo PathTooLongException__ctor_m7643_MethodInfo;
extern MethodInfo String_Format_m3847_MethodInfo;
extern MethodInfo MonoIO_GetFileAttributes_m7608_MethodInfo;


// System.Void System.IO.MonoIO::.cctor()
extern MethodInfo MonoIO__cctor_m7601_MethodInfo;
extern "C" void MonoIO__cctor_m7601 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0 = (-1);
		IntPtr_t98 L_0 = IntPtr_op_Explicit_m6298(NULL /*static, unused*/, (((int64_t)(-1))), /*hidden argument*/&IntPtr_op_Explicit_m6298_MethodInfo);
		((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1 = L_0;
		return;
	}
}
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
extern "C" Exception_t140 * MonoIO_GetException_m7602 (Object_t * __this /* static, unused */, int32_t ___error, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		V_1 = ___error;
		if ((((int32_t)V_1) == ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)80))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_002c;
	}

IL_000d:
	{
		UnauthorizedAccessException_t1845 * L_0 = (UnauthorizedAccessException_t1845 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnauthorizedAccessException_t1845_il2cpp_TypeInfo));
		UnauthorizedAccessException__ctor_m10188(L_0, (String_t*) &_stringLiteral1685, /*hidden argument*/&UnauthorizedAccessException__ctor_m10188_MethodInfo);
		return L_0;
	}

IL_0018:
	{
		V_0 = (String_t*) &_stringLiteral1686;
		IOException_t1433 * L_1 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_1, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_1;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		Exception_t140 * L_2 = MonoIO_GetException_m7603(NULL /*static, unused*/, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), ___error, /*hidden argument*/&MonoIO_GetException_m7603_MethodInfo);
		return L_2;
	}
}
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" Exception_t140 * MonoIO_GetException_m7603 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___error, MethodInfo* method)
{
	static bool MonoIO_GetException_m7603_init;
	if (!MonoIO_GetException_m7603_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		MonoIO_GetException_m7603_init = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		V_1 = ___error;
		if (((int32_t)((int32_t)V_1-(int32_t)2)) == 0)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)2)) == 1)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)2)) == 2)
		{
			goto IL_00ae;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)2)) == 3)
		{
			goto IL_00d3;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)2)) == 4)
		{
			goto IL_00e6;
		}
	}
	{
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)29))) == 0)
		{
			goto IL_0166;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)29))) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)29))) == 2)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)29))) == 3)
		{
			goto IL_0180;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)29))) == 4)
		{
			goto IL_019a;
		}
	}

IL_003b:
	{
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)15))) == 0)
		{
			goto IL_0100;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)15))) == 1)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)15))) == 2)
		{
			goto IL_0214;
		}
	}

IL_0050:
	{
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)V_1-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_01fa;
		}
	}

IL_0065:
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)39))))
		{
			goto IL_01b4;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)87))))
		{
			goto IL_0147;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)145))))
		{
			goto IL_01ce;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)206))))
		{
			goto IL_0134;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)6000))))
		{
			goto IL_01e8;
		}
	}
	{
		goto IL_0228;
	}

IL_009b:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1687, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_0;
		IsolatedStorageException_t1425 * L_1 = (IsolatedStorageException_t1425 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1425_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m7460(L_1, V_0, /*hidden argument*/&IsolatedStorageException__ctor_m7460_MethodInfo);
		return L_1;
	}

IL_00ae:
	{
		IOException_t1433 * L_2 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_2, (String_t*) &_stringLiteral1688, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_2;
	}

IL_00c0:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1689, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_3;
		IsolatedStorageException_t1425 * L_4 = (IsolatedStorageException_t1425 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1425_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m7460(L_4, V_0, /*hidden argument*/&IsolatedStorageException__ctor_m7460_MethodInfo);
		return L_4;
	}

IL_00d3:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1690, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_5;
		UnauthorizedAccessException_t1845 * L_6 = (UnauthorizedAccessException_t1845 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnauthorizedAccessException_t1845_il2cpp_TypeInfo));
		UnauthorizedAccessException__ctor_m10188(L_6, V_0, /*hidden argument*/&UnauthorizedAccessException__ctor_m10188_MethodInfo);
		return L_6;
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1691, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_7;
		IOException_t1433 * L_8 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_8, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_8;
	}

IL_0100:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1692, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_9;
		IOException_t1433 * L_10 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_10, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_10;
	}

IL_011a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_11 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1693, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_11;
		IOException_t1433 * L_12 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_12, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_12;
	}

IL_0134:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1694, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_13;
		PathTooLongException_t1453 * L_14 = (PathTooLongException_t1453 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PathTooLongException_t1453_il2cpp_TypeInfo));
		PathTooLongException__ctor_m7643(L_14, V_0, /*hidden argument*/&PathTooLongException__ctor_m7643_MethodInfo);
		return L_14;
	}

IL_0147:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Format_m3847(NULL /*static, unused*/, (String_t*) &_stringLiteral1695, ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&String_Format_m3847_MethodInfo);
		V_0 = L_15;
		IOException_t1433 * L_16 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_16, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_16;
	}

IL_0166:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_17 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1696, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_17;
		IOException_t1433 * L_18 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_18, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_18;
	}

IL_0180:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1697, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_19;
		IOException_t1433 * L_20 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_20, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_20;
	}

IL_019a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1698, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_21;
		IOException_t1433 * L_22 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_22, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_22;
	}

IL_01b4:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1699, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_23;
		IOException_t1433 * L_24 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_24, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_24;
	}

IL_01ce:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_25 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1700, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_25;
		IOException_t1433 * L_26 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_26, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_26;
	}

IL_01e8:
	{
		IOException_t1433 * L_27 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_27, (String_t*) &_stringLiteral1701, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_27;
	}

IL_01fa:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_28 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1702, ___path, /*hidden argument*/&String_Format_m160_MethodInfo);
		V_0 = L_28;
		IOException_t1433 * L_29 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_29, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_29;
	}

IL_0214:
	{
		V_0 = (String_t*) &_stringLiteral1703;
		IOException_t1433 * L_30 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_30, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_30;
	}

IL_0228:
	{
		int32_t L_31 = ___error;
		Object_t * L_32 = Box(InitializedTypeInfo(&MonoIOError_t1452_il2cpp_TypeInfo), &L_31);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_33 = String_Format_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral1704, L_32, ___path, /*hidden argument*/&String_Format_m149_MethodInfo);
		V_0 = L_33;
		IOException_t1433 * L_34 = (IOException_t1433 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1433_il2cpp_TypeInfo));
		IOException__ctor_m7577(L_34, V_0, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)___error)), /*hidden argument*/&IOException__ctor_m7577_MethodInfo);
		return L_34;
	}
}
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_CreateDirectory_m7604 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_CreateDirectory_m7604_ftn) (String_t*, int32_t*);
	static MonoIO_CreateDirectory_m7604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_CreateDirectory_m7604_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" StringU5BU5D_t17* MonoIO_GetFileSystemEntries_m7605 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___path_with_pattern, int32_t ___attrs, int32_t ___mask, int32_t* ___error, MethodInfo* method)
{
	typedef StringU5BU5D_t17* (*MonoIO_GetFileSystemEntries_m7605_ftn) (String_t*, String_t*, int32_t, int32_t, int32_t*);
	static MonoIO_GetFileSystemEntries_m7605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileSystemEntries_m7605_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___path_with_pattern, ___attrs, ___mask, ___error);
}
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
extern "C" String_t* MonoIO_GetCurrentDirectory_m7606 (Object_t * __this /* static, unused */, int32_t* ___error, MethodInfo* method)
{
	typedef String_t* (*MonoIO_GetCurrentDirectory_m7606_ftn) (int32_t*);
	static MonoIO_GetCurrentDirectory_m7606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetCurrentDirectory_m7606_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___error);
}
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_DeleteFile_m7607 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_DeleteFile_m7607_ftn) (String_t*, int32_t*);
	static MonoIO_DeleteFile_m7607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_DeleteFile_m7607_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileAttributes_m7608 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_GetFileAttributes_m7608_ftn) (String_t*, int32_t*);
	static MonoIO_GetFileAttributes_m7608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileAttributes_m7608_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileType_m7609 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_GetFileType_m7609_ftn) (IntPtr_t98, int32_t*);
	static MonoIO_GetFileType_m7609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileType_m7609_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_ExistsFile_m7610 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		int32_t L_0 = MonoIO_GetFileAttributes_m7608(NULL /*static, unused*/, ___path, ___error, /*hidden argument*/&MonoIO_GetFileAttributes_m7608_MethodInfo);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)(((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		if (!((int32_t)((int32_t)V_0&(int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		return 1;
	}
}
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_ExistsDirectory_m7611 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		int32_t L_0 = MonoIO_GetFileAttributes_m7608(NULL /*static, unused*/, ___path, ___error, /*hidden argument*/&MonoIO_GetFileAttributes_m7608_MethodInfo);
		V_0 = L_0;
		if ((((uint32_t)(*((int32_t*)___error))) != ((uint32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		*((int32_t*)(___error)) = (int32_t)3;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		if ((((uint32_t)V_0) != ((uint32_t)(((MonoIO_t1451_StaticFields*)InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		if (((int32_t)((int32_t)V_0&(int32_t)((int32_t)16))))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		return 1;
	}
}
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
extern "C" bool MonoIO_GetFileStat_m7612 (Object_t * __this /* static, unused */, String_t* ___path, MonoIOStat_t1448 * ___stat, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_GetFileStat_m7612_ftn) (String_t*, MonoIOStat_t1448 *, int32_t*);
	static MonoIO_GetFileStat_m7612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileStat_m7612_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___stat, ___error);
}
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
extern "C" IntPtr_t98 MonoIO_Open_m7613 (Object_t * __this /* static, unused */, String_t* ___filename, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___options, int32_t* ___error, MethodInfo* method)
{
	typedef IntPtr_t98 (*MonoIO_Open_m7613_ftn) (String_t*, int32_t, int32_t, int32_t, int32_t, int32_t*);
	static MonoIO_Open_m7613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Open_m7613_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___filename, ___mode, ___access, ___share, ___options, ___error);
}
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C" bool MonoIO_Close_m7614 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_Close_m7614_ftn) (IntPtr_t98, int32_t*);
	static MonoIO_Close_m7614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Close_m7614_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_Read_m7615 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, ByteU5BU5D_t13* ___dest, int32_t ___dest_offset, int32_t ___count, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_Read_m7615_ftn) (IntPtr_t98, ByteU5BU5D_t13*, int32_t, int32_t, int32_t*);
	static MonoIO_Read_m7615_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Read_m7615_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___dest, ___dest_offset, ___count, ___error);
}
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_Write_m7616 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, ByteU5BU5D_t13* ___src, int32_t ___src_offset, int32_t ___count, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_Write_m7616_ftn) (IntPtr_t98, ByteU5BU5D_t13*, int32_t, int32_t, int32_t*);
	static MonoIO_Write_m7616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Write_m7616_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___src, ___src_offset, ___count, ___error);
}
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
extern "C" int64_t MonoIO_Seek_m7617 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, int64_t ___offset, int32_t ___origin, int32_t* ___error, MethodInfo* method)
{
	typedef int64_t (*MonoIO_Seek_m7617_ftn) (IntPtr_t98, int64_t, int32_t, int32_t*);
	static MonoIO_Seek_m7617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Seek_m7617_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___offset, ___origin, ___error);
}
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
extern "C" int64_t MonoIO_GetLength_m7618 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, int32_t* ___error, MethodInfo* method)
{
	typedef int64_t (*MonoIO_GetLength_m7618_ftn) (IntPtr_t98, int32_t*);
	static MonoIO_GetLength_m7618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetLength_m7618_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
extern "C" bool MonoIO_SetLength_m7619 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, int64_t ___length, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_SetLength_m7619_ftn) (IntPtr_t98, int64_t, int32_t*);
	static MonoIO_SetLength_m7619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_SetLength_m7619_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___length, ___error);
}
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern MethodInfo MonoIO_get_ConsoleOutput_m7620_MethodInfo;
extern "C" IntPtr_t98 MonoIO_get_ConsoleOutput_m7620 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef IntPtr_t98 (*MonoIO_get_ConsoleOutput_m7620_ftn) ();
	static MonoIO_get_ConsoleOutput_m7620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleOutput_m7620_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleOutput()");
	return _il2cpp_icall_func();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern MethodInfo MonoIO_get_ConsoleInput_m7621_MethodInfo;
extern "C" IntPtr_t98 MonoIO_get_ConsoleInput_m7621 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef IntPtr_t98 (*MonoIO_get_ConsoleInput_m7621_ftn) ();
	static MonoIO_get_ConsoleInput_m7621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleInput_m7621_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleInput()");
	return _il2cpp_icall_func();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern MethodInfo MonoIO_get_ConsoleError_m7622_MethodInfo;
extern "C" IntPtr_t98 MonoIO_get_ConsoleError_m7622 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef IntPtr_t98 (*MonoIO_get_ConsoleError_m7622_ftn) ();
	static MonoIO_get_ConsoleError_m7622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleError_m7622_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleError()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
extern MethodInfo MonoIO_get_VolumeSeparatorChar_m7623_MethodInfo;
extern "C" uint16_t MonoIO_get_VolumeSeparatorChar_m7623 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_VolumeSeparatorChar_m7623_ftn) ();
	static MonoIO_get_VolumeSeparatorChar_m7623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_VolumeSeparatorChar_m7623_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_VolumeSeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
extern MethodInfo MonoIO_get_DirectorySeparatorChar_m7624_MethodInfo;
extern "C" uint16_t MonoIO_get_DirectorySeparatorChar_m7624 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_DirectorySeparatorChar_m7624_ftn) ();
	static MonoIO_get_DirectorySeparatorChar_m7624_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_DirectorySeparatorChar_m7624_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_DirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
extern MethodInfo MonoIO_get_AltDirectorySeparatorChar_m7625_MethodInfo;
extern "C" uint16_t MonoIO_get_AltDirectorySeparatorChar_m7625 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_AltDirectorySeparatorChar_m7625_ftn) ();
	static MonoIO_get_AltDirectorySeparatorChar_m7625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_AltDirectorySeparatorChar_m7625_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_AltDirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_PathSeparator()
extern MethodInfo MonoIO_get_PathSeparator_m7626_MethodInfo;
extern "C" uint16_t MonoIO_get_PathSeparator_m7626 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_PathSeparator_m7626_ftn) ();
	static MonoIO_get_PathSeparator_m7626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_PathSeparator_m7626_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_PathSeparator()");
	return _il2cpp_icall_func();
}
#ifndef _MSC_VER
#else
#endif
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOErrorMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStatMethodDeclarations.h"



// Conversion methods for marshalling of: System.IO.MonoIOStat
void MonoIOStat_t1448_marshal(const MonoIOStat_t1448& unmarshaled, MonoIOStat_t1448_marshaled& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___Name_0);
	marshaled.___Attributes_1 = unmarshaled.___Attributes_1;
	marshaled.___Length_2 = unmarshaled.___Length_2;
	marshaled.___CreationTime_3 = unmarshaled.___CreationTime_3;
	marshaled.___LastAccessTime_4 = unmarshaled.___LastAccessTime_4;
	marshaled.___LastWriteTime_5 = unmarshaled.___LastWriteTime_5;
}
void MonoIOStat_t1448_marshal_back(const MonoIOStat_t1448_marshaled& marshaled, MonoIOStat_t1448& unmarshaled)
{
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___Name_0);
	unmarshaled.___Attributes_1 = marshaled.___Attributes_1;
	unmarshaled.___Length_2 = marshaled.___Length_2;
	unmarshaled.___CreationTime_3 = marshaled.___CreationTime_3;
	unmarshaled.___LastAccessTime_4 = marshaled.___LastAccessTime_4;
	unmarshaled.___LastWriteTime_5 = marshaled.___LastWriteTime_5;
}
// Conversion method for clean up from marshalling of: System.IO.MonoIOStat
void MonoIOStat_t1448_marshal_cleanup(MonoIOStat_t1448_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
}
#ifndef _MSC_VER
#else
#endif

// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$72.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1873_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
extern MethodInfo Path_GetInvalidPathChars_m7638_MethodInfo;
extern MethodInfo Char_ToString_m2614_MethodInfo;
extern MethodInfo Path_IsPathRooted_m7637_MethodInfo;
extern MethodInfo String_Concat_m140_MethodInfo;
extern MethodInfo String__ctor_m4099_MethodInfo;
extern MethodInfo Path_GetPathRoot_m7636_MethodInfo;
extern MethodInfo String_LastIndexOfAny_m6079_MethodInfo;
extern MethodInfo Path_CleanPath_m7629_MethodInfo;
extern MethodInfo String_Substring_m2616_MethodInfo;
extern MethodInfo Path_InsecureGetFullPath_m7634_MethodInfo;
extern MethodInfo Path_WindowsDriveAdjustment_m7633_MethodInfo;
extern MethodInfo Path_IsDsc_m7635_MethodInfo;
extern MethodInfo String_IndexOf_m4150_MethodInfo;
extern MethodInfo String_Replace_m4153_MethodInfo;
extern MethodInfo Path_CanonicalizePath_m7641_MethodInfo;
extern MethodInfo String_IndexOf_m3904_MethodInfo;
extern MethodInfo RuntimeHelpers_InitializeArray_m3923_MethodInfo;
extern MethodInfo Path_GetServerAndShare_m7639_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m3905_MethodInfo;
extern MethodInfo String_Compare_m3931_MethodInfo;
extern MethodInfo Char_Equals_m6022_MethodInfo;
extern MethodInfo String_Split_m144_MethodInfo;
extern MethodInfo String_TrimEnd_m3965_MethodInfo;
extern MethodInfo String_Join_m6094_MethodInfo;
extern MethodInfo Path_SameRoot_m7640_MethodInfo;
extern MethodInfo String_EndsWith_m4155_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t1873____$$fieldU2D30_20_FieldInfo;


// System.Void System.IO.Path::.cctor()
extern MethodInfo Path__cctor_m7627_MethodInfo;
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" void Path__cctor_m7627 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Path__cctor_m7627_init;
	if (!Path__cctor_m7627_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		Path__cctor_m7627_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1451_il2cpp_TypeInfo));
		uint16_t L_0 = MonoIO_get_VolumeSeparatorChar_m7623(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_VolumeSeparatorChar_m7623_MethodInfo);
		((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5 = L_0;
		uint16_t L_1 = MonoIO_get_DirectorySeparatorChar_m7624(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_DirectorySeparatorChar_m7624_MethodInfo);
		((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2 = L_1;
		uint16_t L_2 = MonoIO_get_AltDirectorySeparatorChar_m7625(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_AltDirectorySeparatorChar_m7625_MethodInfo);
		((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1 = L_2;
		uint16_t L_3 = MonoIO_get_PathSeparator_m7626(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_PathSeparator_m7626_MethodInfo);
		((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___PathSeparator_3 = L_3;
		CharU5BU5D_t45* L_4 = Path_GetInvalidPathChars_m7638(NULL /*static, unused*/, /*hidden argument*/&Path_GetInvalidPathChars_m7638_MethodInfo);
		((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0 = L_4;
		String_t* L_5 = Char_ToString_m2614((&((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2), /*hidden argument*/&Char_ToString_m2614_MethodInfo);
		((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4 = L_5;
		CharU5BU5D_t45* L_6 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2);
		CharU5BU5D_t45* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_7, 1)) = (uint16_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1);
		CharU5BU5D_t45* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, 2)) = (uint16_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5);
		((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___PathSeparatorChars_6 = L_8;
		((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___dirEqualsVolume_7 = ((((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2)) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5)))? 1 : 0);
		return;
	}
}
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" String_t* Path_Combine_m7628 (Object_t * __this /* static, unused */, String_t* ___path1, String_t* ___path2, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		if (___path1)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1705, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (___path2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral1706, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001c:
	{
		NullCheck(___path1);
		int32_t L_2 = String_get_Length_m133(___path1, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		return ___path2;
	}

IL_0026:
	{
		NullCheck(___path2);
		int32_t L_3 = String_get_Length_m133(___path2, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		return ___path1;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path1);
		int32_t L_4 = String_IndexOfAny_m6070(___path1, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t522 * L_5 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_5, (String_t*) &_stringLiteral1665, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path2);
		int32_t L_6 = String_IndexOfAny_m6070(___path2, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentException_t522 * L_7 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_7, (String_t*) &_stringLiteral1665, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_8 = Path_IsPathRooted_m7637(NULL /*static, unused*/, ___path2, /*hidden argument*/&Path_IsPathRooted_m7637_MethodInfo);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		return ___path2;
	}

IL_006c:
	{
		NullCheck(___path1);
		int32_t L_9 = String_get_Length_m133(___path1, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(___path1);
		uint16_t L_10 = String_get_Chars_m2591(___path1, ((int32_t)((int32_t)L_9-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_0 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_0) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_0) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1))))
		{
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_0) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5))))
		{
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_11 = String_Concat_m169(NULL /*static, unused*/, ___path1, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4), ___path2, /*hidden argument*/&String_Concat_m169_MethodInfo);
		return L_11;
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Concat_m140(NULL /*static, unused*/, ___path1, ___path2, /*hidden argument*/&String_Concat_m140_MethodInfo);
		return L_12;
	}
}
// System.String System.IO.Path::CleanPath(System.String)
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" String_t* Path_CleanPath_m7629 (Object_t * __this /* static, unused */, String_t* ___s, MethodInfo* method)
{
	static bool Path_CleanPath_m7629_init;
	if (!Path_CleanPath_m7629_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		Path_CleanPath_m7629_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	CharU5BU5D_t45* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	{
		NullCheck(___s);
		int32_t L_0 = String_get_Length_m133(___s, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		NullCheck(___s);
		uint16_t L_1 = String_get_Chars_m2591(___s, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_3 = L_1;
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		if ((((uint32_t)V_3) != ((uint32_t)((int32_t)92))))
		{
			goto IL_0029;
		}
	}
	{
		NullCheck(___s);
		uint16_t L_2 = String_get_Chars_m2591(___s, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		if ((((uint32_t)L_2) != ((uint32_t)((int32_t)92))))
		{
			goto IL_0029;
		}
	}
	{
		V_2 = 2;
	}

IL_0029:
	{
		if ((((uint32_t)V_0) != ((uint32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_3) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)V_3) != ((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1))))
		{
			goto IL_003f;
		}
	}

IL_003d:
	{
		return ___s;
	}

IL_003f:
	{
		V_4 = V_2;
		goto IL_0097;
	}

IL_0044:
	{
		NullCheck(___s);
		uint16_t L_3 = String_get_Chars_m2591(___s, V_4, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_5 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_5) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_5) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1))))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0091;
	}

IL_0062:
	{
		if ((((uint32_t)((int32_t)((int32_t)V_4+(int32_t)1))) != ((uint32_t)V_0)))
		{
			goto IL_006f;
		}
	}
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
		goto IL_0091;
	}

IL_006f:
	{
		NullCheck(___s);
		uint16_t L_4 = String_get_Chars_m2591(___s, ((int32_t)((int32_t)V_4+(int32_t)1)), /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_5 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_5) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_008d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)V_5) != ((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1))))
		{
			goto IL_0091;
		}
	}

IL_008d:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0091:
	{
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
	}

IL_0097:
	{
		if ((((int32_t)V_4) < ((int32_t)V_0)))
		{
			goto IL_0044;
		}
	}
	{
		if (V_1)
		{
			goto IL_00a1;
		}
	}
	{
		return ___s;
	}

IL_00a1:
	{
		V_6 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, ((int32_t)((int32_t)V_0-(int32_t)V_1))));
		if (!V_2)
		{
			goto IL_00ba;
		}
	}
	{
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(V_6, 0)) = (uint16_t)((int32_t)92);
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(V_6, 1)) = (uint16_t)((int32_t)92);
	}

IL_00ba:
	{
		V_7 = V_2;
		V_8 = V_2;
		goto IL_013d;
	}

IL_00c5:
	{
		NullCheck(___s);
		uint16_t L_5 = String_get_Chars_m2591(___s, V_7, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_9 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_9) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_00ef;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_9) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1))))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_6 = V_8;
		V_8 = ((int32_t)((int32_t)L_6+(int32_t)1));
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, L_6);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(V_6, L_6)) = (uint16_t)V_9;
		goto IL_0137;
	}

IL_00ef:
	{
		NullCheck(V_6);
		if ((((int32_t)((int32_t)((int32_t)V_8+(int32_t)1))) == ((int32_t)(((int32_t)(((Array_t *)V_6)->max_length))))))
		{
			goto IL_0137;
		}
	}
	{
		int32_t L_7 = V_8;
		V_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, L_7);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(V_6, L_7)) = (uint16_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2);
		goto IL_0130;
	}

IL_010a:
	{
		NullCheck(___s);
		uint16_t L_8 = String_get_Chars_m2591(___s, ((int32_t)((int32_t)V_7+(int32_t)1)), /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_9 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_9) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_012a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_9) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1))))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_0137;
	}

IL_012a:
	{
		V_7 = ((int32_t)((int32_t)V_7+(int32_t)1));
	}

IL_0130:
	{
		if ((((int32_t)V_7) < ((int32_t)((int32_t)((int32_t)V_0-(int32_t)1)))))
		{
			goto IL_010a;
		}
	}

IL_0137:
	{
		V_7 = ((int32_t)((int32_t)V_7+(int32_t)1));
	}

IL_013d:
	{
		if ((((int32_t)V_7) >= ((int32_t)V_0)))
		{
			goto IL_014d;
		}
	}
	{
		NullCheck(V_6);
		if ((((int32_t)V_8) < ((int32_t)(((int32_t)(((Array_t *)V_6)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_9 = String_CreateString_m4100(L_9, V_6, /*hidden argument*/&String__ctor_m4099_MethodInfo);
		return L_9;
	}
}
// System.String System.IO.Path::GetDirectoryName(System.String)
extern "C" String_t* Path_GetDirectoryName_m7630 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_0 = String_op_Equality_m145(NULL /*static, unused*/, ___path, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t522 * L_1 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_1, (String_t*) &_stringLiteral1707, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		if (!___path)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_2 = Path_GetPathRoot_m7636(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_GetPathRoot_m7636_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Equality_m145(NULL /*static, unused*/, L_2, ___path, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (String_t*)NULL;
	}

IL_002b:
	{
		NullCheck(___path);
		String_t* L_4 = String_Trim_m3928(___path, /*hidden argument*/&String_Trim_m3928_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m133(L_4, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		ArgumentException_t522 * L_6 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_6, (String_t*) &_stringLiteral1708, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_7 = String_IndexOfAny_m6070(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_7) <= ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_t522 * L_8 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_8, (String_t*) &_stringLiteral1606, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_005c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_9 = String_LastIndexOfAny_m6079(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___PathSeparatorChars_6), /*hidden argument*/&String_LastIndexOfAny_m6079_MethodInfo);
		V_0 = L_9;
		if (V_0)
		{
			goto IL_006f;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_006f:
	{
		if ((((int32_t)V_0) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		NullCheck(___path);
		String_t* L_10 = String_Substring_m150(___path, 0, V_0, /*hidden argument*/&String_Substring_m150_MethodInfo);
		V_1 = L_10;
		NullCheck(V_1);
		int32_t L_11 = String_get_Length_m133(V_1, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		V_2 = L_11;
		if ((((int32_t)V_2) < ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2)) != ((uint32_t)((int32_t)92))))
		{
			goto IL_00b1;
		}
	}
	{
		NullCheck(V_1);
		uint16_t L_12 = String_get_Chars_m2591(V_1, ((int32_t)((int32_t)V_2-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)L_12) != ((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5))))
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		uint16_t L_13 = (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2);
		Object_t * L_14 = Box(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo), &L_13);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m591(NULL /*static, unused*/, V_1, L_14, /*hidden argument*/&String_Concat_m591_MethodInfo);
		return L_15;
	}

IL_00b1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_16 = Path_CleanPath_m7629(NULL /*static, unused*/, V_1, /*hidden argument*/&Path_CleanPath_m7629_MethodInfo);
		return L_16;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}
}
// System.String System.IO.Path::GetFileName(System.String)
extern "C" String_t* Path_GetFileName_m7631 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		if (!___path)
		{
			goto IL_000b;
		}
	}
	{
		NullCheck(___path);
		int32_t L_0 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_0)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return ___path;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_1 = String_IndexOfAny_m6070(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral1665, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_3 = String_LastIndexOfAny_m6079(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___PathSeparatorChars_6), /*hidden argument*/&String_LastIndexOfAny_m6079_MethodInfo);
		V_0 = L_3;
		if ((((int32_t)V_0) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		NullCheck(___path);
		String_t* L_4 = String_Substring_m2616(___path, ((int32_t)((int32_t)V_0+(int32_t)1)), /*hidden argument*/&String_Substring_m2616_MethodInfo);
		return L_4;
	}

IL_0040:
	{
		return ___path;
	}
}
// System.String System.IO.Path::GetFullPath(System.String)
extern "C" String_t* Path_GetFullPath_m7632 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_0 = Path_InsecureGetFullPath_m7634(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_InsecureGetFullPath_m7634_MethodInfo);
		V_0 = L_0;
		return V_0;
	}
}
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
extern "C" String_t* Path_WindowsDriveAdjustment_m7633 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		NullCheck(___path);
		int32_t L_0 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		return ___path;
	}

IL_000b:
	{
		NullCheck(___path);
		uint16_t L_1 = String_get_Chars_m2591(___path, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		if ((((uint32_t)L_1) != ((uint32_t)((int32_t)58))))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_2 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo));
		bool L_3 = Char_IsLetter_m2639(NULL /*static, unused*/, L_2, /*hidden argument*/&Char_IsLetter_m2639_MethodInfo);
		if (L_3)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		return ___path;
	}

IL_0026:
	{
		String_t* L_4 = Directory_GetCurrentDirectory_m7490(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7490_MethodInfo);
		V_0 = L_4;
		NullCheck(___path);
		int32_t L_5 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((uint32_t)L_5) != ((uint32_t)2)))
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(V_0);
		uint16_t L_6 = String_get_Chars_m2591(V_0, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		NullCheck(___path);
		uint16_t L_7 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		if ((((uint32_t)L_6) != ((uint32_t)L_7)))
		{
			goto IL_004c;
		}
	}
	{
		___path = V_0;
		goto IL_005d;
	}

IL_004c:
	{
		uint16_t L_8 = ((int32_t)92);
		Object_t * L_9 = Box(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m591(NULL /*static, unused*/, ___path, L_9, /*hidden argument*/&String_Concat_m591_MethodInfo);
		___path = L_10;
	}

IL_005d:
	{
		goto IL_00cb;
	}

IL_005f:
	{
		NullCheck(___path);
		uint16_t L_11 = String_get_Chars_m2591(___path, 2, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)L_11) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_00cb;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_12 = String_get_Chars_m2591(___path, 2, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)L_12) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1))))
		{
			goto IL_00cb;
		}
	}
	{
		NullCheck(V_0);
		uint16_t L_13 = String_get_Chars_m2591(V_0, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		NullCheck(___path);
		uint16_t L_14 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		if ((((uint32_t)L_13) != ((uint32_t)L_14)))
		{
			goto IL_00a6;
		}
	}
	{
		NullCheck(___path);
		int32_t L_15 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(___path);
		String_t* L_16 = String_Substring_m150(___path, 2, ((int32_t)((int32_t)L_15-(int32_t)2)), /*hidden argument*/&String_Substring_m150_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_17 = Path_Combine_m7628(NULL /*static, unused*/, V_0, L_16, /*hidden argument*/&Path_Combine_m7628_MethodInfo);
		___path = L_17;
		goto IL_00cb;
	}

IL_00a6:
	{
		NullCheck(___path);
		String_t* L_18 = String_Substring_m150(___path, 0, 2, /*hidden argument*/&String_Substring_m150_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_19 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(___path);
		String_t* L_20 = String_Substring_m150(___path, 2, ((int32_t)((int32_t)L_19-(int32_t)2)), /*hidden argument*/&String_Substring_m150_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m169(NULL /*static, unused*/, L_18, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4), L_20, /*hidden argument*/&String_Concat_m169_MethodInfo);
		___path = L_21;
	}

IL_00cb:
	{
		return ___path;
	}
}
// System.String System.IO.Path::InsecureGetFullPath(System.String)
extern "C" String_t* Path_InsecureGetFullPath_m7634 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	uint16_t V_1 = 0x0;
	String_t* V_2 = {0};
	{
		if (___path)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1598, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		NullCheck(___path);
		String_t* L_1 = String_Trim_m3928(___path, /*hidden argument*/&String_Trim_m3928_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m133(L_1, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1709, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		V_0 = L_3;
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, V_0, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002d:
	{
		bool L_5 = Environment_get_IsRunningOnWindows_m9850(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m9850_MethodInfo);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_6 = Path_WindowsDriveAdjustment_m7633(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_WindowsDriveAdjustment_m7633_MethodInfo);
		___path = L_6;
	}

IL_003e:
	{
		NullCheck(___path);
		int32_t L_7 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(___path);
		uint16_t L_8 = String_get_Chars_m2591(___path, ((int32_t)((int32_t)L_7-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_1 = L_8;
		NullCheck(___path);
		int32_t L_9 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_9) < ((int32_t)2)))
		{
			goto IL_00cb;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_10 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_11 = Path_IsDsc_m7635(NULL /*static, unused*/, L_10, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_11)
		{
			goto IL_00cb;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_12 = String_get_Chars_m2591(___path, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_13 = Path_IsDsc_m7635(NULL /*static, unused*/, L_12, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		NullCheck(___path);
		int32_t L_14 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_15 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		NullCheck(___path);
		int32_t L_16 = String_IndexOf_m4150(___path, L_15, 2, /*hidden argument*/&String_IndexOf_m4150_MethodInfo);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}

IL_008f:
	{
		ArgumentException_t522 * L_17 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_17, (String_t*) &_stringLiteral1710, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_009a:
	{
		NullCheck(___path);
		uint16_t L_18 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)L_18) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_00bc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		String_t* L_19 = String_Replace_m4153(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1), (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2), /*hidden argument*/&String_Replace_m4153_MethodInfo);
		___path = L_19;
	}

IL_00bc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_20 = Path_CanonicalizePath_m7641(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_CanonicalizePath_m7641_MethodInfo);
		___path = L_20;
		goto IL_016c;
	}

IL_00cb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_21 = Path_IsPathRooted_m7637(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_IsPathRooted_m7637_MethodInfo);
		if (L_21)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_22 = Directory_GetCurrentDirectory_m7490(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7490_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m169(NULL /*static, unused*/, L_22, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4), ___path, /*hidden argument*/&String_Concat_m169_MethodInfo);
		___path = L_23;
		goto IL_0162;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2)) != ((uint32_t)((int32_t)92))))
		{
			goto IL_0162;
		}
	}
	{
		NullCheck(___path);
		int32_t L_24 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_24) < ((int32_t)2)))
		{
			goto IL_0162;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_25 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_26 = Path_IsDsc_m7635(NULL /*static, unused*/, L_25, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_26)
		{
			goto IL_0162;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_27 = String_get_Chars_m2591(___path, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_28 = Path_IsDsc_m7635(NULL /*static, unused*/, L_27, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (L_28)
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_29 = Directory_GetCurrentDirectory_m7490(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7490_MethodInfo);
		V_2 = L_29;
		NullCheck(V_2);
		uint16_t L_30 = String_get_Chars_m2591(V_2, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)L_30) != ((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5))))
		{
			goto IL_0142;
		}
	}
	{
		NullCheck(V_2);
		String_t* L_31 = String_Substring_m150(V_2, 0, 2, /*hidden argument*/&String_Substring_m150_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_32 = String_Concat_m140(NULL /*static, unused*/, L_31, ___path, /*hidden argument*/&String_Concat_m140_MethodInfo);
		___path = L_32;
		goto IL_0162;
	}

IL_0142:
	{
		NullCheck(V_2);
		int32_t L_33 = String_IndexOf_m3904(V_2, (String_t*) &_stringLiteral1711, /*hidden argument*/&String_IndexOf_m3904_MethodInfo);
		NullCheck(V_2);
		int32_t L_34 = String_IndexOf_m4150(V_2, ((int32_t)92), ((int32_t)((int32_t)L_33+(int32_t)1)), /*hidden argument*/&String_IndexOf_m4150_MethodInfo);
		NullCheck(V_2);
		String_t* L_35 = String_Substring_m150(V_2, 0, L_34, /*hidden argument*/&String_Substring_m150_MethodInfo);
		___path = L_35;
	}

IL_0162:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_36 = Path_CanonicalizePath_m7641(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_CanonicalizePath_m7641_MethodInfo);
		___path = L_36;
	}

IL_016c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_37 = Path_IsDsc_m7635(NULL /*static, unused*/, V_1, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_37)
		{
			goto IL_019d;
		}
	}
	{
		NullCheck(___path);
		int32_t L_38 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(___path);
		uint16_t L_39 = String_get_Chars_m2591(___path, ((int32_t)((int32_t)L_38-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)L_39) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_019d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		uint16_t L_40 = (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2);
		Object_t * L_41 = Box(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo), &L_40);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_42 = String_Concat_m591(NULL /*static, unused*/, ___path, L_41, /*hidden argument*/&String_Concat_m591_MethodInfo);
		___path = L_42;
	}

IL_019d:
	{
		return ___path;
	}
}
// System.Boolean System.IO.Path::IsDsc(System.Char)
extern "C" bool Path_IsDsc_m7635 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)___c) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		G_B3_0 = ((((int32_t)___c) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1)))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.String System.IO.Path::GetPathRoot(System.String)
extern "C" String_t* Path_GetPathRoot_m7636 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* G_B10_0 = {0};
	{
		if (___path)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		NullCheck(___path);
		String_t* L_0 = String_Trim_m3928(___path, /*hidden argument*/&String_Trim_m3928_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m133(L_0, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral1712, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_3 = Path_IsPathRooted_m7637(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_IsPathRooted_m7637_MethodInfo);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2)) != ((uint32_t)((int32_t)47))))
		{
			goto IL_004f;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_4 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_5 = Path_IsDsc_m7635(NULL /*static, unused*/, L_4, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		G_B10_0 = (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4);
		goto IL_004e;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		G_B10_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}

IL_004e:
	{
		return G_B10_0;
	}

IL_004f:
	{
		V_0 = 2;
		NullCheck(___path);
		int32_t L_6 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((uint32_t)L_6) != ((uint32_t)1)))
		{
			goto IL_006e;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_7 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_8 = Path_IsDsc_m7635(NULL /*static, unused*/, L_7, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		return (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4);
	}

IL_006e:
	{
		NullCheck(___path);
		int32_t L_9 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_9) >= ((int32_t)2)))
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}

IL_007d:
	{
		NullCheck(___path);
		uint16_t L_10 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_11 = Path_IsDsc_m7635(NULL /*static, unused*/, L_10, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_11)
		{
			goto IL_010f;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_12 = String_get_Chars_m2591(___path, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_13 = Path_IsDsc_m7635(NULL /*static, unused*/, L_12, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_13)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_00a5;
	}

IL_00a1:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_00a5:
	{
		NullCheck(___path);
		int32_t L_14 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)V_0) >= ((int32_t)L_14)))
		{
			goto IL_00bc;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_15 = String_get_Chars_m2591(___path, V_0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_16 = Path_IsDsc_m7635(NULL /*static, unused*/, L_15, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_16)
		{
			goto IL_00a1;
		}
	}

IL_00bc:
	{
		NullCheck(___path);
		int32_t L_17 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)V_0) >= ((int32_t)L_17)))
		{
			goto IL_00e6;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
		goto IL_00cf;
	}

IL_00cb:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_00cf:
	{
		NullCheck(___path);
		int32_t L_18 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)V_0) >= ((int32_t)L_18)))
		{
			goto IL_00e6;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_19 = String_get_Chars_m2591(___path, V_0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_20 = Path_IsDsc_m7635(NULL /*static, unused*/, L_19, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_20)
		{
			goto IL_00cb;
		}
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		String_t* L_21 = String_Substring_m150(___path, 2, ((int32_t)((int32_t)V_0-(int32_t)2)), /*hidden argument*/&String_Substring_m150_MethodInfo);
		NullCheck(L_21);
		String_t* L_22 = String_Replace_m4153(L_21, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1), (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2), /*hidden argument*/&String_Replace_m4153_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m169(NULL /*static, unused*/, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4), (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4), L_22, /*hidden argument*/&String_Concat_m169_MethodInfo);
		return L_23;
	}

IL_010f:
	{
		NullCheck(___path);
		uint16_t L_24 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_25 = Path_IsDsc_m7635(NULL /*static, unused*/, L_24, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_25)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		return (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4);
	}

IL_0123:
	{
		NullCheck(___path);
		uint16_t L_26 = String_get_Chars_m2591(___path, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)L_26) != ((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5))))
		{
			goto IL_014e;
		}
	}
	{
		NullCheck(___path);
		int32_t L_27 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_27) < ((int32_t)3)))
		{
			goto IL_014c;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_28 = String_get_Chars_m2591(___path, 2, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_29 = Path_IsDsc_m7635(NULL /*static, unused*/, L_28, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_29)
		{
			goto IL_014c;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_014c:
	{
		goto IL_015b;
	}

IL_014e:
	{
		String_t* L_30 = Directory_GetCurrentDirectory_m7490(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7490_MethodInfo);
		NullCheck(L_30);
		String_t* L_31 = String_Substring_m150(L_30, 0, 2, /*hidden argument*/&String_Substring_m150_MethodInfo);
		return L_31;
	}

IL_015b:
	{
		NullCheck(___path);
		String_t* L_32 = String_Substring_m150(___path, 0, V_0, /*hidden argument*/&String_Substring_m150_MethodInfo);
		return L_32;
	}
}
// System.Boolean System.IO.Path::IsPathRooted(System.String)
extern "C" bool Path_IsPathRooted_m7637 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	{
		if (!___path)
		{
			goto IL_000b;
		}
	}
	{
		NullCheck(___path);
		int32_t L_0 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_0)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_1 = String_IndexOfAny_m6070(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral1665, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0026:
	{
		NullCheck(___path);
		uint16_t L_3 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_0) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2))))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)V_0) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1))))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___dirEqualsVolume_7))
		{
			goto IL_005e;
		}
	}
	{
		NullCheck(___path);
		int32_t L_4 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_5 = String_get_Chars_m2591(___path, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		G_B11_0 = ((((int32_t)L_5) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B11_0 = 0;
	}

IL_005f:
	{
		G_B13_0 = G_B11_0;
		goto IL_0062;
	}

IL_0061:
	{
		G_B13_0 = 1;
	}

IL_0062:
	{
		return G_B13_0;
	}
}
// System.Char[] System.IO.Path::GetInvalidPathChars()
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" CharU5BU5D_t45* Path_GetInvalidPathChars_m7638 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Path_GetInvalidPathChars_m7638_init;
	if (!Path_GetInvalidPathChars_m7638_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		Path_GetInvalidPathChars_m7638_init = true;
	}
	{
		bool L_0 = Environment_get_IsRunningOnWindows_m9850(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m9850_MethodInfo);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t45* L_1 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, ((int32_t)36)));
		RuntimeHelpers_InitializeArray_m3923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t1873____$$fieldU2D30_20_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m3923_MethodInfo);
		return L_1;
	}

IL_001a:
	{
		return ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, 1));
	}
}
// System.String System.IO.Path::GetServerAndShare(System.String)
extern "C" String_t* Path_GetServerAndShare_m7639 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0008;
	}

IL_0004:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0008:
	{
		NullCheck(___path);
		int32_t L_0 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)V_0) >= ((int32_t)L_0)))
		{
			goto IL_001f;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_1 = String_get_Chars_m2591(___path, V_0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_2 = Path_IsDsc_m7635(NULL /*static, unused*/, L_1, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_2)
		{
			goto IL_0004;
		}
	}

IL_001f:
	{
		NullCheck(___path);
		int32_t L_3 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)V_0) >= ((int32_t)L_3)))
		{
			goto IL_0049;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
		goto IL_0032;
	}

IL_002e:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0032:
	{
		NullCheck(___path);
		int32_t L_4 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)V_0) >= ((int32_t)L_4)))
		{
			goto IL_0049;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_5 = String_get_Chars_m2591(___path, V_0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_6 = Path_IsDsc_m7635(NULL /*static, unused*/, L_5, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_6)
		{
			goto IL_002e;
		}
	}

IL_0049:
	{
		NullCheck(___path);
		String_t* L_7 = String_Substring_m150(___path, 2, ((int32_t)((int32_t)V_0-(int32_t)2)), /*hidden argument*/&String_Substring_m150_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(L_7);
		String_t* L_8 = String_Replace_m4153(L_7, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1), (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2), /*hidden argument*/&String_Replace_m4153_MethodInfo);
		return L_8;
	}
}
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
extern "C" bool Path_SameRoot_m7640 (Object_t * __this /* static, unused */, String_t* ___root, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	uint16_t V_2 = 0x0;
	int32_t G_B18_0 = 0;
	{
		NullCheck(___root);
		int32_t L_0 = String_get_Length_m133(___root, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		NullCheck(___path);
		int32_t L_1 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		NullCheck(___root);
		uint16_t L_2 = String_get_Chars_m2591(___root, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_3 = Path_IsDsc_m7635(NULL /*static, unused*/, L_2, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		NullCheck(___root);
		uint16_t L_4 = String_get_Chars_m2591(___root, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_5 = Path_IsDsc_m7635(NULL /*static, unused*/, L_4, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_6 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_7 = Path_IsDsc_m7635(NULL /*static, unused*/, L_6, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_8 = String_get_Chars_m2591(___path, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_9 = Path_IsDsc_m7635(NULL /*static, unused*/, L_8, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (L_9)
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		return 0;
	}

IL_004e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_10 = Path_GetServerAndShare_m7639(NULL /*static, unused*/, ___root, /*hidden argument*/&Path_GetServerAndShare_m7639_MethodInfo);
		V_0 = L_10;
		String_t* L_11 = Path_GetServerAndShare_m7639(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_GetServerAndShare_m7639_MethodInfo);
		V_1 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t791_il2cpp_TypeInfo));
		CultureInfo_t791 * L_12 = CultureInfo_get_InvariantCulture_m3905(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3905_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_13 = String_Compare_m3931(NULL /*static, unused*/, V_0, V_1, 1, L_12, /*hidden argument*/&String_Compare_m3931_MethodInfo);
		return ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		NullCheck(___root);
		uint16_t L_14 = String_get_Chars_m2591(___root, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		V_2 = L_14;
		NullCheck(___path);
		uint16_t L_15 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		bool L_16 = Char_Equals_m6022((&V_2), L_15, /*hidden argument*/&Char_Equals_m6022_MethodInfo);
		if (L_16)
		{
			goto IL_0087;
		}
	}
	{
		return 0;
	}

IL_0087:
	{
		NullCheck(___path);
		uint16_t L_17 = String_get_Chars_m2591(___path, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((int32_t)L_17) == ((int32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5))))
		{
			goto IL_0097;
		}
	}
	{
		return 0;
	}

IL_0097:
	{
		NullCheck(___root);
		int32_t L_18 = String_get_Length_m133(___root, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		NullCheck(___path);
		int32_t L_19 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_19) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		NullCheck(___root);
		uint16_t L_20 = String_get_Chars_m2591(___root, 2, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_21 = Path_IsDsc_m7635(NULL /*static, unused*/, L_20, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_21)
		{
			goto IL_00c5;
		}
	}
	{
		NullCheck(___path);
		uint16_t L_22 = String_get_Chars_m2591(___path, 2, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_23 = Path_IsDsc_m7635(NULL /*static, unused*/, L_22, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		G_B18_0 = ((int32_t)(L_23));
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B18_0 = 0;
	}

IL_00c6:
	{
		return G_B18_0;
	}

IL_00c7:
	{
		return 1;
	}
}
// System.String System.IO.Path::CanonicalizePath(System.String)
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" String_t* Path_CanonicalizePath_m7641 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	static bool Path_CanonicalizePath_m7641_init;
	if (!Path_CanonicalizePath_m7641_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		Path_CanonicalizePath_m7641_init = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t17* V_1 = {0};
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = {0};
	String_t* V_7 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		if (___path)
		{
			goto IL_0005;
		}
	}
	{
		return ___path;
	}

IL_0005:
	{
		bool L_0 = Environment_get_IsRunningOnWindows_m9850(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m9850_MethodInfo);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck(___path);
		String_t* L_1 = String_Trim_m3928(___path, /*hidden argument*/&String_Trim_m3928_MethodInfo);
		___path = L_1;
	}

IL_0016:
	{
		NullCheck(___path);
		int32_t L_2 = String_get_Length_m133(___path, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		return ___path;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		String_t* L_3 = Path_GetPathRoot_m7636(NULL /*static, unused*/, ___path, /*hidden argument*/&Path_GetPathRoot_m7636_MethodInfo);
		V_0 = L_3;
		CharU5BU5D_t45* L_4 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, 2));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 0)) = (uint16_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2);
		CharU5BU5D_t45* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 1)) = (uint16_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1);
		NullCheck(___path);
		StringU5BU5D_t17* L_6 = String_Split_m144(___path, L_5, /*hidden argument*/&String_Split_m144_MethodInfo);
		V_1 = L_6;
		V_2 = 0;
		bool L_7 = Environment_get_IsRunningOnWindows_m9850(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m9850_MethodInfo);
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_8 = String_get_Length_m133(V_0, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_8) <= ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		NullCheck(V_0);
		uint16_t L_9 = String_get_Chars_m2591(V_0, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_10 = Path_IsDsc_m7635(NULL /*static, unused*/, L_9, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		NullCheck(V_0);
		uint16_t L_11 = String_get_Chars_m2591(V_0, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_12 = Path_IsDsc_m7635(NULL /*static, unused*/, L_11, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		G_B11_0 = ((int32_t)(L_12));
		goto IL_0073;
	}

IL_0072:
	{
		G_B11_0 = 0;
	}

IL_0073:
	{
		V_3 = G_B11_0;
		if (!V_3)
		{
			goto IL_007a;
		}
	}
	{
		G_B14_0 = 3;
		goto IL_007b;
	}

IL_007a:
	{
		G_B14_0 = 0;
	}

IL_007b:
	{
		V_4 = G_B14_0;
		V_5 = 0;
		goto IL_00e9;
	}

IL_0082:
	{
		bool L_13 = Environment_get_IsRunningOnWindows_m9850(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m9850_MethodInfo);
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_5);
		int32_t L_14 = V_5;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(V_1, L_14)));
		String_t* L_15 = String_TrimEnd_m3965((*(String_t**)(String_t**)SZArrayLdElema(V_1, L_14)), ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&String_TrimEnd_m3965_MethodInfo);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_5);
		ArrayElementTypeCheck (V_1, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(V_1, V_5)) = (String_t*)L_15;
	}

IL_009c:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_5);
		int32_t L_16 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_17 = String_op_Equality_m145(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_16)), (String_t*) &_stringLiteral385, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (L_17)
		{
			goto IL_00bb;
		}
	}
	{
		if (!V_5)
		{
			goto IL_00bd;
		}
	}
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_5);
		int32_t L_18 = V_5;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(V_1, L_18)));
		int32_t L_19 = String_get_Length_m133((*(String_t**)(String_t**)SZArrayLdElema(V_1, L_18)), /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_19)
		{
			goto IL_00bd;
		}
	}

IL_00bb:
	{
		goto IL_00e3;
	}

IL_00bd:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_5);
		int32_t L_20 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_21 = String_op_Equality_m145(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_20)), (String_t*) &_stringLiteral759, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_21)
		{
			goto IL_00d8;
		}
	}
	{
		if ((((int32_t)V_2) <= ((int32_t)V_4)))
		{
			goto IL_00d6;
		}
	}
	{
		V_2 = ((int32_t)((int32_t)V_2-(int32_t)1));
	}

IL_00d6:
	{
		goto IL_00e3;
	}

IL_00d8:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_5);
		int32_t L_23 = V_5;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_22);
		ArrayElementTypeCheck (V_1, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_23)));
		*((String_t**)(String_t**)SZArrayLdElema(V_1, L_22)) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(V_1, L_23));
	}

IL_00e3:
	{
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_00e9:
	{
		NullCheck(V_1);
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_0082;
		}
	}
	{
		if (!V_2)
		{
			goto IL_0106;
		}
	}
	{
		if ((((uint32_t)V_2) != ((uint32_t)1)))
		{
			goto IL_0108;
		}
	}
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, 0);
		int32_t L_24 = 0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_25 = String_op_Equality_m145(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_1, L_24)), (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_25)
		{
			goto IL_0108;
		}
	}

IL_0106:
	{
		return V_0;
	}

IL_0108:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_26 = String_Join_m6094(NULL /*static, unused*/, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4), V_1, 0, V_2, /*hidden argument*/&String_Join_m6094_MethodInfo);
		V_6 = L_26;
		bool L_27 = Environment_get_IsRunningOnWindows_m9850(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m9850_MethodInfo);
		if (!L_27)
		{
			goto IL_022a;
		}
	}
	{
		if (!V_3)
		{
			goto IL_0132;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_28 = String_Concat_m140(NULL /*static, unused*/, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4), V_6, /*hidden argument*/&String_Concat_m140_MethodInfo);
		V_6 = L_28;
	}

IL_0132:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_29 = Path_SameRoot_m7640(NULL /*static, unused*/, V_0, V_6, /*hidden argument*/&Path_SameRoot_m7640_MethodInfo);
		if (L_29)
		{
			goto IL_0146;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_30 = String_Concat_m140(NULL /*static, unused*/, V_0, V_6, /*hidden argument*/&String_Concat_m140_MethodInfo);
		V_6 = L_30;
	}

IL_0146:
	{
		if (!V_3)
		{
			goto IL_014c;
		}
	}
	{
		return V_6;
	}

IL_014c:
	{
		NullCheck(___path);
		uint16_t L_31 = String_get_Chars_m2591(___path, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_32 = Path_IsDsc_m7635(NULL /*static, unused*/, L_31, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (L_32)
		{
			goto IL_0191;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_33 = Path_SameRoot_m7640(NULL /*static, unused*/, V_0, ___path, /*hidden argument*/&Path_SameRoot_m7640_MethodInfo);
		if (!L_33)
		{
			goto IL_0191;
		}
	}
	{
		NullCheck(V_6);
		int32_t L_34 = String_get_Length_m133(V_6, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_34) > ((int32_t)2)))
		{
			goto IL_018e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(V_6);
		bool L_35 = String_EndsWith_m4155(V_6, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4), /*hidden argument*/&String_EndsWith_m4155_MethodInfo);
		if (L_35)
		{
			goto IL_018e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		uint16_t L_36 = (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2);
		Object_t * L_37 = Box(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo), &L_36);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_38 = String_Concat_m591(NULL /*static, unused*/, V_6, L_37, /*hidden argument*/&String_Concat_m591_MethodInfo);
		V_6 = L_38;
	}

IL_018e:
	{
		return V_6;
	}

IL_0191:
	{
		String_t* L_39 = Directory_GetCurrentDirectory_m7490(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7490_MethodInfo);
		V_7 = L_39;
		NullCheck(V_7);
		int32_t L_40 = String_get_Length_m133(V_7, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_40) <= ((int32_t)1)))
		{
			goto IL_01ea;
		}
	}
	{
		NullCheck(V_7);
		uint16_t L_41 = String_get_Chars_m2591(V_7, 1, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		if ((((uint32_t)L_41) != ((uint32_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5))))
		{
			goto IL_01ea;
		}
	}
	{
		NullCheck(V_6);
		int32_t L_42 = String_get_Length_m133(V_6, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (!L_42)
		{
			goto IL_01c9;
		}
	}
	{
		NullCheck(V_6);
		uint16_t L_43 = String_get_Chars_m2591(V_6, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_44 = Path_IsDsc_m7635(NULL /*static, unused*/, L_43, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_44)
		{
			goto IL_01d9;
		}
	}

IL_01c9:
	{
		uint16_t L_45 = ((int32_t)92);
		Object_t * L_46 = Box(InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo), &L_45);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_47 = String_Concat_m591(NULL /*static, unused*/, V_6, L_46, /*hidden argument*/&String_Concat_m591_MethodInfo);
		V_6 = L_47;
	}

IL_01d9:
	{
		NullCheck(V_7);
		String_t* L_48 = String_Substring_m150(V_7, 0, 2, /*hidden argument*/&String_Substring_m150_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_49 = String_Concat_m140(NULL /*static, unused*/, L_48, V_6, /*hidden argument*/&String_Concat_m140_MethodInfo);
		return L_49;
	}

IL_01ea:
	{
		NullCheck(V_7);
		int32_t L_50 = String_get_Length_m133(V_7, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(V_7);
		uint16_t L_51 = String_get_Chars_m2591(V_7, ((int32_t)((int32_t)L_50-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_52 = Path_IsDsc_m7635(NULL /*static, unused*/, L_51, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_52)
		{
			goto IL_0220;
		}
	}
	{
		NullCheck(V_6);
		uint16_t L_53 = String_get_Chars_m2591(V_6, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		bool L_54 = Path_IsDsc_m7635(NULL /*static, unused*/, L_53, /*hidden argument*/&Path_IsDsc_m7635_MethodInfo);
		if (!L_54)
		{
			goto IL_0220;
		}
	}
	{
		NullCheck(V_6);
		String_t* L_55 = String_Substring_m2616(V_6, 1, /*hidden argument*/&String_Substring_m2616_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_56 = String_Concat_m140(NULL /*static, unused*/, V_7, L_55, /*hidden argument*/&String_Concat_m140_MethodInfo);
		return L_56;
	}

IL_0220:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_57 = String_Concat_m140(NULL /*static, unused*/, V_7, V_6, /*hidden argument*/&String_Concat_m140_MethodInfo);
		return L_57;
	}

IL_022a:
	{
		return V_6;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.PathTooLongException::.ctor()
extern MethodInfo PathTooLongException__ctor_m7642_MethodInfo;
extern "C" void PathTooLongException__ctor_m7642 (PathTooLongException_t1453 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1713, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		IOException__ctor_m7574(__this, L_0, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		return;
	}
}
// System.Void System.IO.PathTooLongException::.ctor(System.String)
extern "C" void PathTooLongException__ctor_m7643 (PathTooLongException_t1453 * __this, String_t* ___message, MethodInfo* method)
{
	{
		IOException__ctor_m7574(__this, ___message, /*hidden argument*/&IOException__ctor_m7574_MethodInfo);
		return;
	}
}
// System.Void System.IO.PathTooLongException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo PathTooLongException__ctor_m7644_MethodInfo;
extern "C" void PathTooLongException__ctor_m7644 (PathTooLongException_t1453 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		IOException__ctor_m7576(__this, ___info, ___context, /*hidden argument*/&IOException__ctor_m7576_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.SearchPattern::.cctor()
extern MethodInfo SearchPattern__cctor_m7645_MethodInfo;
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" void SearchPattern__cctor_m7645 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool SearchPattern__cctor_m7645_init;
	if (!SearchPattern__cctor_m7645_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		SearchPattern__cctor_m7645_init = true;
	}
	{
		CharU5BU5D_t45* L_0 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)42);
		CharU5BU5D_t45* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)63);
		((SearchPattern_t1454_StaticFields*)InitializedTypeInfo(&SearchPattern_t1454_il2cpp_TypeInfo)->static_fields)->___WildcardChars_0 = L_1;
		CharU5BU5D_t45* L_2 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2);
		CharU5BU5D_t45* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 1)) = (uint16_t)(((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1);
		((SearchPattern_t1454_StaticFields*)InitializedTypeInfo(&SearchPattern_t1454_il2cpp_TypeInfo)->static_fields)->___InvalidChars_1 = L_3;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOriginMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.IO.NullStream
#include "mscorlib_System_IO_NullStream.h"
// System.IO.StreamAsyncResult
#include "mscorlib_System_IO_StreamAsyncResult.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo NullStream_t1456_il2cpp_TypeInfo;
extern TypeInfo StreamAsyncResult_t1457_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t784_il2cpp_TypeInfo;
// System.IO.NullStream
#include "mscorlib_System_IO_NullStreamMethodDeclarations.h"
// System.IO.StreamAsyncResult
#include "mscorlib_System_IO_StreamAsyncResultMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern MethodInfo NullStream__ctor_m7657_MethodInfo;
extern MethodInfo Stream_Dispose_m7649_MethodInfo;
extern MethodInfo StreamAsyncResult__ctor_m7671_MethodInfo;
extern MethodInfo StreamAsyncResult_SetComplete_m7673_MethodInfo;
extern MethodInfo AsyncCallback_Invoke_m6552_MethodInfo;
extern MethodInfo Stream_get_CanWrite_m10312_MethodInfo;
extern MethodInfo StreamAsyncResult_SetComplete_m7672_MethodInfo;
extern MethodInfo StreamAsyncResult_get_NBytes_m7678_MethodInfo;
extern MethodInfo StreamAsyncResult_get_Done_m7679_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m3860_MethodInfo;
extern MethodInfo StreamAsyncResult_set_Done_m7680_MethodInfo;
extern MethodInfo StreamAsyncResult_get_Exception_m7677_MethodInfo;


// System.Void System.IO.Stream::.ctor()
extern "C" void Stream__ctor_m7646 (Stream_t1426 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.IO.Stream::.cctor()
extern MethodInfo Stream__cctor_m7647_MethodInfo;
extern "C" void Stream__cctor_m7647 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullStream_t1456 * L_0 = (NullStream_t1456 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullStream_t1456_il2cpp_TypeInfo));
		NullStream__ctor_m7657(L_0, /*hidden argument*/&NullStream__ctor_m7657_MethodInfo);
		((Stream_t1426_StaticFields*)InitializedTypeInfo(&Stream_t1426_il2cpp_TypeInfo)->static_fields)->___Null_0 = L_0;
		return;
	}
}
// System.Boolean System.IO.Stream::get_CanRead()
// System.Boolean System.IO.Stream::get_CanSeek()
// System.Boolean System.IO.Stream::get_CanWrite()
// System.Int64 System.IO.Stream::get_Length()
// System.Int64 System.IO.Stream::get_Position()
// System.Void System.IO.Stream::set_Position(System.Int64)
// System.Void System.IO.Stream::Dispose()
extern MethodInfo Stream_Dispose_m7648_MethodInfo;
extern "C" void Stream_Dispose_m7648 (Stream_t1426 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&Stream_Close_m7650_MethodInfo, __this);
		return;
	}
}
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" void Stream_Dispose_m7649 (Stream_t1426 * __this, bool ___disposing, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.Stream::Close()
extern "C" void Stream_Close_m7650 (Stream_t1426 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&Stream_Dispose_m7649_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.Stream::Flush()
// System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.IO.Stream::ReadByte()
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" int32_t Stream_ReadByte_m7651 (Stream_t1426 * __this, MethodInfo* method)
{
	static bool Stream_ReadByte_m7651_init;
	if (!Stream_ReadByte_m7651_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		Stream_ReadByte_m7651_init = true;
	}
	ByteU5BU5D_t13* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, 1));
		int32_t L_0 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Read_m10308_MethodInfo, __this, V_0, 0, 1);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, 0);
		int32_t L_1 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(V_0, L_1));
	}

IL_0017:
	{
		return (-1);
	}
}
// System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin)
// System.Void System.IO.Stream::SetLength(System.Int64)
// System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32)
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern MethodInfo Stream_WriteByte_m7652_MethodInfo;
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void Stream_WriteByte_m7652 (Stream_t1426 * __this, uint8_t ___value, MethodInfo* method)
{
	static bool Stream_WriteByte_m7652_init;
	if (!Stream_WriteByte_m7652_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		Stream_WriteByte_m7652_init = true;
	}
	ByteU5BU5D_t13* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, 1));
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(V_0, 0)) = (uint8_t)___value;
		VirtActionInvoker3< ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Write_m10311_MethodInfo, __this, V_0, 0, 1);
		return;
	}
}
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginRead_m7653 (Stream_t1426 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t266 * ___callback, Object_t * ___state, MethodInfo* method)
{
	StreamAsyncResult_t1457 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t140 * V_2 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanRead_m10307_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t150 * L_1 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_1, (String_t*) &_stringLiteral1648, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		StreamAsyncResult_t1457 * L_2 = (StreamAsyncResult_t1457 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamAsyncResult_t1457_il2cpp_TypeInfo));
		StreamAsyncResult__ctor_m7671(L_2, ___state, /*hidden argument*/&StreamAsyncResult__ctor_m7671_MethodInfo);
		V_0 = L_2;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Read_m10308_MethodInfo, __this, ___buffer, ___offset, ___count);
		V_1 = L_3;
		NullCheck(V_0);
		StreamAsyncResult_SetComplete_m7673(V_0, (Exception_t140 *)NULL, V_1, /*hidden argument*/&StreamAsyncResult_SetComplete_m7673_MethodInfo);
		// IL_002d: leave.s IL_003a
		goto IL_003a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_002f;
		throw e;
	}

IL_002f:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t140 *)__exception_local);
		NullCheck(V_0);
		StreamAsyncResult_SetComplete_m7673(V_0, V_2, 0, /*hidden argument*/&StreamAsyncResult_SetComplete_m7673_MethodInfo);
		// IL_0038: leave.s IL_003a
		goto IL_003a;
	} // end catch (depth: 1)

IL_003a:
	{
		if (!___callback)
		{
			goto IL_0046;
		}
	}
	{
		NullCheck(___callback);
		VirtActionInvoker1< Object_t * >::Invoke(&AsyncCallback_Invoke_m6552_MethodInfo, ___callback, V_0);
	}

IL_0046:
	{
		return V_0;
	}
}
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginWrite_m7654 (Stream_t1426 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t266 * ___callback, Object_t * ___state, MethodInfo* method)
{
	StreamAsyncResult_t1457 * V_0 = {0};
	Exception_t140 * V_1 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanWrite_m10312_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t150 * L_1 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_1, (String_t*) &_stringLiteral1654, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		StreamAsyncResult_t1457 * L_2 = (StreamAsyncResult_t1457 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamAsyncResult_t1457_il2cpp_TypeInfo));
		StreamAsyncResult__ctor_m7671(L_2, ___state, /*hidden argument*/&StreamAsyncResult__ctor_m7671_MethodInfo);
		V_0 = L_2;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker3< ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Write_m10311_MethodInfo, __this, ___buffer, ___offset, ___count);
		NullCheck(V_0);
		StreamAsyncResult_SetComplete_m7672(V_0, (Exception_t140 *)NULL, /*hidden argument*/&StreamAsyncResult_SetComplete_m7672_MethodInfo);
		// IL_002b: leave.s IL_0037
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_002d;
		throw e;
	}

IL_002d:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t140 *)__exception_local);
		NullCheck(V_0);
		StreamAsyncResult_SetComplete_m7672(V_0, V_1, /*hidden argument*/&StreamAsyncResult_SetComplete_m7672_MethodInfo);
		// IL_0035: leave.s IL_0037
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		if (!___callback)
		{
			goto IL_0046;
		}
	}
	{
		NullCheck(___callback);
		VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t266 *, Object_t * >::Invoke(&AsyncCallback_BeginInvoke_m6553_MethodInfo, ___callback, V_0, (AsyncCallback_t266 *)NULL, NULL);
	}

IL_0046:
	{
		return V_0;
	}
}
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern "C" int32_t Stream_EndRead_m7655 (Stream_t1426 * __this, Object_t * ___asyncResult, MethodInfo* method)
{
	StreamAsyncResult_t1457 * V_0 = {0};
	{
		if (___asyncResult)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		V_0 = ((StreamAsyncResult_t1457 *)IsInst(___asyncResult, InitializedTypeInfo(&StreamAsyncResult_t1457_il2cpp_TypeInfo)));
		if (!V_0)
		{
			goto IL_0021;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_1 = StreamAsyncResult_get_NBytes_m7678(V_0, /*hidden argument*/&StreamAsyncResult_get_NBytes_m7678_MethodInfo);
		if ((((uint32_t)L_1) != ((uint32_t)(-1))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_2, (String_t*) &_stringLiteral1653, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0031:
	{
		NullCheck(V_0);
		bool L_3 = StreamAsyncResult_get_Done_m7679(V_0, /*hidden argument*/&StreamAsyncResult_get_Done_m7679_MethodInfo);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		InvalidOperationException_t784 * L_4 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_4, (String_t*) &_stringLiteral1714, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0044:
	{
		NullCheck(V_0);
		StreamAsyncResult_set_Done_m7680(V_0, 1, /*hidden argument*/&StreamAsyncResult_set_Done_m7680_MethodInfo);
		NullCheck(V_0);
		Exception_t140 * L_5 = StreamAsyncResult_get_Exception_m7677(V_0, /*hidden argument*/&StreamAsyncResult_get_Exception_m7677_MethodInfo);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		NullCheck(V_0);
		Exception_t140 * L_6 = StreamAsyncResult_get_Exception_m7677(V_0, /*hidden argument*/&StreamAsyncResult_get_Exception_m7677_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_005a:
	{
		NullCheck(V_0);
		int32_t L_7 = StreamAsyncResult_get_NBytes_m7678(V_0, /*hidden argument*/&StreamAsyncResult_get_NBytes_m7678_MethodInfo);
		return L_7;
	}
}
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern "C" void Stream_EndWrite_m7656 (Stream_t1426 * __this, Object_t * ___asyncResult, MethodInfo* method)
{
	StreamAsyncResult_t1457 * V_0 = {0};
	{
		if (___asyncResult)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		V_0 = ((StreamAsyncResult_t1457 *)IsInst(___asyncResult, InitializedTypeInfo(&StreamAsyncResult_t1457_il2cpp_TypeInfo)));
		if (!V_0)
		{
			goto IL_0021;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_1 = StreamAsyncResult_get_NBytes_m7678(V_0, /*hidden argument*/&StreamAsyncResult_get_NBytes_m7678_MethodInfo);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_2, (String_t*) &_stringLiteral1653, (String_t*) &_stringLiteral1652, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0031:
	{
		NullCheck(V_0);
		bool L_3 = StreamAsyncResult_get_Done_m7679(V_0, /*hidden argument*/&StreamAsyncResult_get_Done_m7679_MethodInfo);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		InvalidOperationException_t784 * L_4 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_4, (String_t*) &_stringLiteral1715, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0044:
	{
		NullCheck(V_0);
		StreamAsyncResult_set_Done_m7680(V_0, 1, /*hidden argument*/&StreamAsyncResult_set_Done_m7680_MethodInfo);
		NullCheck(V_0);
		Exception_t140 * L_5 = StreamAsyncResult_get_Exception_m7677(V_0, /*hidden argument*/&StreamAsyncResult_get_Exception_m7677_MethodInfo);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		NullCheck(V_0);
		Exception_t140 * L_6 = StreamAsyncResult_get_Exception_m7677(V_0, /*hidden argument*/&StreamAsyncResult_get_Exception_m7677_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.NullStream::.ctor()
extern "C" void NullStream__ctor_m7657 (NullStream_t1456 * __this, MethodInfo* method)
{
	{
		Stream__ctor_m7646(__this, /*hidden argument*/&Stream__ctor_m7646_MethodInfo);
		return;
	}
}
// System.Boolean System.IO.NullStream::get_CanRead()
extern MethodInfo NullStream_get_CanRead_m7658_MethodInfo;
extern "C" bool NullStream_get_CanRead_m7658 (NullStream_t1456 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.IO.NullStream::get_CanSeek()
extern MethodInfo NullStream_get_CanSeek_m7659_MethodInfo;
extern "C" bool NullStream_get_CanSeek_m7659 (NullStream_t1456 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.IO.NullStream::get_CanWrite()
extern MethodInfo NullStream_get_CanWrite_m7660_MethodInfo;
extern "C" bool NullStream_get_CanWrite_m7660 (NullStream_t1456 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int64 System.IO.NullStream::get_Length()
extern MethodInfo NullStream_get_Length_m7661_MethodInfo;
extern "C" int64_t NullStream_get_Length_m7661 (NullStream_t1456 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Int64 System.IO.NullStream::get_Position()
extern MethodInfo NullStream_get_Position_m7662_MethodInfo;
extern "C" int64_t NullStream_get_Position_m7662 (NullStream_t1456 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Void System.IO.NullStream::set_Position(System.Int64)
extern MethodInfo NullStream_set_Position_m7663_MethodInfo;
extern "C" void NullStream_set_Position_m7663 (NullStream_t1456 * __this, int64_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::Flush()
extern MethodInfo NullStream_Flush_m7664_MethodInfo;
extern "C" void NullStream_Flush_m7664 (NullStream_t1456 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 System.IO.NullStream::Read(System.Byte[],System.Int32,System.Int32)
extern MethodInfo NullStream_Read_m7665_MethodInfo;
extern "C" int32_t NullStream_Read_m7665 (NullStream_t1456 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 System.IO.NullStream::ReadByte()
extern MethodInfo NullStream_ReadByte_m7666_MethodInfo;
extern "C" int32_t NullStream_ReadByte_m7666 (NullStream_t1456 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int64 System.IO.NullStream::Seek(System.Int64,System.IO.SeekOrigin)
extern MethodInfo NullStream_Seek_m7667_MethodInfo;
extern "C" int64_t NullStream_Seek_m7667 (NullStream_t1456 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Void System.IO.NullStream::SetLength(System.Int64)
extern MethodInfo NullStream_SetLength_m7668_MethodInfo;
extern "C" void NullStream_SetLength_m7668 (NullStream_t1456 * __this, int64_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::Write(System.Byte[],System.Int32,System.Int32)
extern MethodInfo NullStream_Write_m7669_MethodInfo;
extern "C" void NullStream_Write_m7669 (NullStream_t1456 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::WriteByte(System.Byte)
extern MethodInfo NullStream_WriteByte_m7670_MethodInfo;
extern "C" void NullStream_WriteByte_m7670 (NullStream_t1456 * __this, uint8_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
extern MethodInfo Monitor_Enter_m3898_MethodInfo;
extern MethodInfo Monitor_Exit_m3899_MethodInfo;
extern MethodInfo EventWaitHandle_Set_m9365_MethodInfo;


// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C" void StreamAsyncResult__ctor_m7671 (StreamAsyncResult_t1457 * __this, Object_t * ___state, MethodInfo* method)
{
	{
		__this->___nbytes_4 = (-1);
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___state_0 = ___state;
		return;
	}
}
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C" void StreamAsyncResult_SetComplete_m7672 (StreamAsyncResult_t1457 * __this, Exception_t140 * ___e, MethodInfo* method)
{
	StreamAsyncResult_t1457 * V_0 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		__this->___exc_3 = ___e;
		__this->___completed_1 = 1;
		V_0 = __this;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			ManualResetEvent_t1445 * L_0 = (__this->___wh_5);
			if (!L_0)
			{
				goto IL_002a;
			}
		}

IL_001e:
		{
			ManualResetEvent_t1445 * L_1 = (__this->___wh_5);
			NullCheck(L_1);
			EventWaitHandle_Set_m9365(L_1, /*hidden argument*/&EventWaitHandle_Set_m9365_MethodInfo);
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
		return;
	}
}
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void StreamAsyncResult_SetComplete_m7673 (StreamAsyncResult_t1457 * __this, Exception_t140 * ___e, int32_t ___nbytes, MethodInfo* method)
{
	{
		__this->___nbytes_4 = ___nbytes;
		StreamAsyncResult_SetComplete_m7672(__this, ___e, /*hidden argument*/&StreamAsyncResult_SetComplete_m7672_MethodInfo);
		return;
	}
}
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern MethodInfo StreamAsyncResult_get_AsyncState_m7674_MethodInfo;
extern "C" Object_t * StreamAsyncResult_get_AsyncState_m7674 (StreamAsyncResult_t1457 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern MethodInfo StreamAsyncResult_get_AsyncWaitHandle_m7675_MethodInfo;
extern "C" WaitHandle_t1447 * StreamAsyncResult_get_AsyncWaitHandle_m7675 (StreamAsyncResult_t1457 * __this, MethodInfo* method)
{
	StreamAsyncResult_t1457 * V_0 = {0};
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
			ManualResetEvent_t1445 * L_0 = (__this->___wh_5);
			if (L_0)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_1 = (__this->___completed_1);
			ManualResetEvent_t1445 * L_2 = (ManualResetEvent_t1445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ManualResetEvent_t1445_il2cpp_TypeInfo));
			ManualResetEvent__ctor_m9369(L_2, L_1, /*hidden argument*/&ManualResetEvent__ctor_m9369_MethodInfo);
			__this->___wh_5 = L_2;
		}

IL_0021:
		{
			ManualResetEvent_t1445 * L_3 = (__this->___wh_5);
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
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern MethodInfo StreamAsyncResult_get_IsCompleted_m7676_MethodInfo;
extern "C" bool StreamAsyncResult_get_IsCompleted_m7676 (StreamAsyncResult_t1457 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_1);
		return L_0;
	}
}
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C" Exception_t140 * StreamAsyncResult_get_Exception_m7677 (StreamAsyncResult_t1457 * __this, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = (__this->___exc_3);
		return L_0;
	}
}
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C" int32_t StreamAsyncResult_get_NBytes_m7678 (StreamAsyncResult_t1457 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___nbytes_4);
		return L_0;
	}
}
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C" bool StreamAsyncResult_get_Done_m7679 (StreamAsyncResult_t1457 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___done_2);
		return L_0;
	}
}
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C" void StreamAsyncResult_set_Done_m7680 (StreamAsyncResult_t1457 * __this, bool ___value, MethodInfo* method)
{
	{
		__this->___done_2 = ___value;
		return;
	}
}
// System.IO.StreamReader/NullStreamReader
#include "mscorlib_System_IO_StreamReader_NullStreamReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NullStreamReader_t1458_il2cpp_TypeInfo;
// System.IO.StreamReader/NullStreamReader
#include "mscorlib_System_IO_StreamReader_NullStreamReaderMethodDeclarations.h"

extern MethodInfo StreamReader__ctor_m7687_MethodInfo;


// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
extern MethodInfo NullStreamReader__ctor_m7681_MethodInfo;
extern "C" void NullStreamReader__ctor_m7681 (NullStreamReader_t1458 * __this, MethodInfo* method)
{
	{
		StreamReader__ctor_m7687(__this, /*hidden argument*/&StreamReader__ctor_m7687_MethodInfo);
		return;
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
extern MethodInfo NullStreamReader_Peek_m7682_MethodInfo;
extern "C" int32_t NullStreamReader_Peek_m7682 (NullStreamReader_t1458 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
extern MethodInfo NullStreamReader_Read_m7683_MethodInfo;
extern "C" int32_t NullStreamReader_Read_m7683 (NullStreamReader_t1458 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo NullStreamReader_Read_m7684_MethodInfo;
extern "C" int32_t NullStreamReader_Read_m7684 (NullStreamReader_t1458 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
extern MethodInfo NullStreamReader_ReadLine_m7685_MethodInfo;
extern "C" String_t* NullStreamReader_ReadLine_m7685 (NullStreamReader_t1458 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
extern MethodInfo NullStreamReader_ReadToEnd_m7686_MethodInfo;
extern "C" String_t* NullStreamReader_ReadToEnd_m7686 (NullStreamReader_t1458 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
extern TypeInfo TextReader_t1359_il2cpp_TypeInfo;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern MethodInfo TextReader__ctor_m7730_MethodInfo;
extern MethodInfo StreamReader__ctor_m7689_MethodInfo;
extern MethodInfo StreamReader_Initialize_m7693_MethodInfo;
extern MethodInfo Encoding_get_UTF8Unmarked_m9225_MethodInfo;
extern MethodInfo StreamReader__ctor_m7691_MethodInfo;
extern MethodInfo Encoding_GetPreamble_m9218_MethodInfo;
extern MethodInfo Encoding_GetMaxCharCount_m10313_MethodInfo;
extern MethodInfo TextReader_Dispose_m7733_MethodInfo;
extern MethodInfo Encoding_get_BigEndianUnicode_m9220_MethodInfo;
extern MethodInfo Encoding_get_Unicode_m9227_MethodInfo;
extern MethodInfo Encoding_get_BigEndianUTF32_m9229_MethodInfo;
extern MethodInfo Encoding_get_UTF32_m9228_MethodInfo;
extern MethodInfo StreamReader_DoChecks_m7695_MethodInfo;
extern MethodInfo StreamReader_ReadBuffer_m7696_MethodInfo;
extern MethodInfo Math_Min_m9891_MethodInfo;
extern MethodInfo Array_Copy_m6433_MethodInfo;
extern MethodInfo StreamReader_FindNextEOL_m7700_MethodInfo;
extern MethodInfo StringBuilder_get_Length_m4047_MethodInfo;
extern MethodInfo StringBuilder_ToString_m9253_MethodInfo;
extern MethodInfo StringBuilder__ctor_m714_MethodInfo;
extern MethodInfo StringBuilder_set_Length_m4154_MethodInfo;
extern MethodInfo StringBuilder_get_Capacity_m9249_MethodInfo;
extern MethodInfo StreamReader_Read_m7699_MethodInfo;


// System.Void System.IO.StreamReader::.ctor()
extern "C" void StreamReader__ctor_m7687 (StreamReader_t1437 * __this, MethodInfo* method)
{
	{
		TextReader__ctor_m7730(__this, /*hidden argument*/&TextReader__ctor_m7730_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo StreamReader__ctor_m7688_MethodInfo;
extern "C" void StreamReader__ctor_m7688 (StreamReader_t1437 * __this, Stream_t1426 * ___stream, Encoding_t805 * ___encoding, MethodInfo* method)
{
	{
		StreamReader__ctor_m7689(__this, ___stream, ___encoding, 1, ((int32_t)1024), /*hidden argument*/&StreamReader__ctor_m7689_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m7689 (StreamReader_t1437 * __this, Stream_t1426 * ___stream, Encoding_t805 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method)
{
	{
		TextReader__ctor_m7730(__this, /*hidden argument*/&TextReader__ctor_m7730_MethodInfo);
		StreamReader_Initialize_m7693(__this, ___stream, ___encoding, ___detectEncodingFromByteOrderMarks, ___bufferSize, /*hidden argument*/&StreamReader_Initialize_m7693_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.String)
extern "C" void StreamReader__ctor_m7690 (StreamReader_t1437 * __this, String_t* ___path, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_0 = Encoding_get_UTF8Unmarked_m9225(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8Unmarked_m9225_MethodInfo);
		StreamReader__ctor_m7691(__this, ___path, L_0, 1, ((int32_t)4096), /*hidden argument*/&StreamReader__ctor_m7691_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m7691 (StreamReader_t1437 * __this, String_t* ___path, Encoding_t805 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method)
{
	Stream_t1426 * V_0 = {0};
	{
		TextReader__ctor_m7730(__this, /*hidden argument*/&TextReader__ctor_m7730_MethodInfo);
		if (___path)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1598, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_op_Equality_m145(NULL /*static, unused*/, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), ___path, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral1716, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo));
		NullCheck(___path);
		int32_t L_3 = String_IndexOfAny_m6070(___path, (((Path_t817_StaticFields*)InitializedTypeInfo(&Path_t817_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0), /*hidden argument*/&String_IndexOfAny_m6070_MethodInfo);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, (String_t*) &_stringLiteral1717, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0045:
	{
		if (___encoding)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentNullException_t785 * L_5 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_5, (String_t*) &_stringLiteral1718, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0053:
	{
		if ((((int32_t)___bufferSize) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_6 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_6, (String_t*) &_stringLiteral1632, (String_t*) &_stringLiteral1719, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0068:
	{
		FileStream_t1436 * L_7 = File_OpenRead_m7509(NULL /*static, unused*/, ___path, /*hidden argument*/&File_OpenRead_m7509_MethodInfo);
		V_0 = L_7;
		StreamReader_Initialize_m7693(__this, V_0, ___encoding, ___detectEncodingFromByteOrderMarks, ___bufferSize, /*hidden argument*/&StreamReader_Initialize_m7693_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.cctor()
extern MethodInfo StreamReader__cctor_m7692_MethodInfo;
extern "C" void StreamReader__cctor_m7692 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullStreamReader_t1458 * L_0 = (NullStreamReader_t1458 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullStreamReader_t1458_il2cpp_TypeInfo));
		NullStreamReader__ctor_m7681(L_0, /*hidden argument*/&NullStreamReader__ctor_m7681_MethodInfo);
		((StreamReader_t1437_StaticFields*)InitializedTypeInfo(&StreamReader_t1437_il2cpp_TypeInfo)->static_fields)->___Null_12 = L_0;
		return;
	}
}
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" void StreamReader_Initialize_m7693 (StreamReader_t1437 * __this, Stream_t1426 * ___stream, Encoding_t805 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method)
{
	static bool StreamReader_Initialize_m7693_init;
	if (!StreamReader_Initialize_m7693_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		StreamReader_Initialize_m7693_init = true;
	}
	ByteU5BU5D_t13* V_0 = {0};
	StreamReader_t1437 * G_B12_0 = {0};
	StreamReader_t1437 * G_B11_0 = {0};
	int32_t G_B13_0 = 0;
	StreamReader_t1437 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	StreamReader_t1437 * G_B15_1 = {0};
	int32_t G_B14_0 = 0;
	StreamReader_t1437 * G_B14_1 = {0};
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	StreamReader_t1437 * G_B16_2 = {0};
	{
		if (___stream)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1720, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (___encoding)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral1718, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001c:
	{
		NullCheck(___stream);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanRead_m10307_MethodInfo, ___stream);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_3, (String_t*) &_stringLiteral1721, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		if ((((int32_t)___bufferSize) > ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_4 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_4, (String_t*) &_stringLiteral1632, (String_t*) &_stringLiteral1719, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0044:
	{
		if ((((int32_t)___bufferSize) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0056;
		}
	}
	{
		___bufferSize = ((int32_t)128);
	}

IL_0056:
	{
		__this->___base_stream_9 = ___stream;
		__this->___input_buffer_1 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, ___bufferSize));
		__this->___buffer_size_5 = ___bufferSize;
		__this->___encoding_7 = ___encoding;
		NullCheck(___encoding);
		Decoder_t1427 * L_5 = (Decoder_t1427 *)VirtFuncInvoker0< Decoder_t1427 * >::Invoke(&Encoding_GetDecoder_m9213_MethodInfo, ___encoding);
		__this->___decoder_8 = L_5;
		NullCheck(___encoding);
		ByteU5BU5D_t13* L_6 = (ByteU5BU5D_t13*)VirtFuncInvoker0< ByteU5BU5D_t13* >::Invoke(&Encoding_GetPreamble_m9218_MethodInfo, ___encoding);
		V_0 = L_6;
		G_B11_0 = __this;
		if (!___detectEncodingFromByteOrderMarks)
		{
			G_B12_0 = __this;
			goto IL_0093;
		}
	}
	{
		G_B13_0 = 1;
		G_B13_1 = G_B11_0;
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
		G_B13_1 = G_B12_0;
	}

IL_0094:
	{
		NullCheck(G_B13_1);
		G_B13_1->___do_checks_6 = G_B13_0;
		int32_t L_7 = (__this->___do_checks_6);
		NullCheck(V_0);
		G_B14_0 = L_7;
		G_B14_1 = __this;
		if ((((int32_t)(((Array_t *)V_0)->max_length))))
		{
			G_B15_0 = L_7;
			G_B15_1 = __this;
			goto IL_00a8;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 2;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_00a9:
	{
		NullCheck(G_B16_2);
		G_B16_2->___do_checks_6 = ((int32_t)((int32_t)G_B16_1+(int32_t)G_B16_0));
		NullCheck(___encoding);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxCharCount_m10313_MethodInfo, ___encoding, ___bufferSize);
		__this->___decoded_buffer_2 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_8+(int32_t)1))));
		__this->___decoded_count_3 = 0;
		__this->___pos_4 = 0;
		return;
	}
}
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern MethodInfo StreamReader_Dispose_m7694_MethodInfo;
extern "C" void StreamReader_Dispose_m7694 (StreamReader_t1437 * __this, bool ___disposing, MethodInfo* method)
{
	{
		if (!___disposing)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t1426 * L_0 = (__this->___base_stream_9);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t1426 * L_1 = (__this->___base_stream_9);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&Stream_Close_m7650_MethodInfo, L_1);
	}

IL_0016:
	{
		__this->___input_buffer_1 = (ByteU5BU5D_t13*)NULL;
		__this->___decoded_buffer_2 = (CharU5BU5D_t45*)NULL;
		__this->___encoding_7 = (Encoding_t805 *)NULL;
		__this->___decoder_8 = (Decoder_t1427 *)NULL;
		__this->___base_stream_9 = (Stream_t1426 *)NULL;
		TextReader_Dispose_m7733(__this, ___disposing, /*hidden argument*/&TextReader_Dispose_m7733_MethodInfo);
		return;
	}
}
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C" int32_t StreamReader_DoChecks_m7695 (StreamReader_t1437 * __this, int32_t ___count, MethodInfo* method)
{
	ByteU5BU5D_t13* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___do_checks_6);
		if ((((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) != ((uint32_t)2)))
		{
			goto IL_0040;
		}
	}
	{
		Encoding_t805 * L_1 = (__this->___encoding_7);
		NullCheck(L_1);
		ByteU5BU5D_t13* L_2 = (ByteU5BU5D_t13*)VirtFuncInvoker0< ByteU5BU5D_t13* >::Invoke(&Encoding_GetPreamble_m9218_MethodInfo, L_1);
		V_0 = L_2;
		NullCheck(V_0);
		V_1 = (((int32_t)(((Array_t *)V_0)->max_length)));
		if ((((int32_t)___count) < ((int32_t)V_1)))
		{
			goto IL_0040;
		}
	}
	{
		V_2 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		ByteU5BU5D_t13* L_3 = (__this->___input_buffer_1);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, V_2);
		int32_t L_4 = V_2;
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		int32_t L_5 = V_2;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_4))) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_0, L_5)))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_003a;
	}

IL_0032:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_0036:
	{
		if ((((int32_t)V_2) < ((int32_t)V_1)))
		{
			goto IL_0023;
		}
	}

IL_003a:
	{
		if ((((uint32_t)V_2) != ((uint32_t)V_1)))
		{
			goto IL_0040;
		}
	}
	{
		return V_2;
	}

IL_0040:
	{
		int32_t L_6 = (__this->___do_checks_6);
		if ((((uint32_t)((int32_t)((int32_t)L_6&(int32_t)1))) != ((uint32_t)1)))
		{
			goto IL_0185;
		}
	}
	{
		if ((((int32_t)___count) >= ((int32_t)2)))
		{
			goto IL_0054;
		}
	}
	{
		return 0;
	}

IL_0054:
	{
		ByteU5BU5D_t13* L_7 = (__this->___input_buffer_1);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_8))) != ((uint32_t)((int32_t)254))))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_t13* L_9 = (__this->___input_buffer_1);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		int32_t L_10 = 1;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10))) != ((uint32_t)((int32_t)255))))
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_11 = Encoding_get_BigEndianUnicode_m9220(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_BigEndianUnicode_m9220_MethodInfo);
		__this->___encoding_7 = L_11;
		return 2;
	}

IL_007f:
	{
		if ((((int32_t)___count) >= ((int32_t)3)))
		{
			goto IL_0085;
		}
	}
	{
		return 0;
	}

IL_0085:
	{
		ByteU5BU5D_t13* L_12 = (__this->___input_buffer_1);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))) != ((uint32_t)((int32_t)239))))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t13* L_14 = (__this->___input_buffer_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		int32_t L_15 = 1;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))) != ((uint32_t)((int32_t)187))))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t13* L_16 = (__this->___input_buffer_1);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		int32_t L_17 = 2;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_17))) != ((uint32_t)((int32_t)191))))
		{
			goto IL_00bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_18 = Encoding_get_UTF8Unmarked_m9225(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8Unmarked_m9225_MethodInfo);
		__this->___encoding_7 = L_18;
		return 3;
	}

IL_00bf:
	{
		if ((((int32_t)___count) >= ((int32_t)4)))
		{
			goto IL_00fa;
		}
	}
	{
		ByteU5BU5D_t13* L_19 = (__this->___input_buffer_1);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		int32_t L_20 = 0;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_20))) != ((uint32_t)((int32_t)255))))
		{
			goto IL_00f8;
		}
	}
	{
		ByteU5BU5D_t13* L_21 = (__this->___input_buffer_1);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		int32_t L_22 = 1;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_22))) != ((uint32_t)((int32_t)254))))
		{
			goto IL_00f8;
		}
	}
	{
		ByteU5BU5D_t13* L_23 = (__this->___input_buffer_1);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
		int32_t L_24 = 2;
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_24)))
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_25 = Encoding_get_Unicode_m9227(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_Unicode_m9227_MethodInfo);
		__this->___encoding_7 = L_25;
		return 2;
	}

IL_00f8:
	{
		return 0;
	}

IL_00fa:
	{
		ByteU5BU5D_t13* L_26 = (__this->___input_buffer_1);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		int32_t L_27 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27)))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t13* L_28 = (__this->___input_buffer_1);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		int32_t L_29 = 1;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_29)))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t13* L_30 = (__this->___input_buffer_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 2);
		int32_t L_31 = 2;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31))) != ((uint32_t)((int32_t)254))))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t13* L_32 = (__this->___input_buffer_1);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 3);
		int32_t L_33 = 3;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_32, L_33))) != ((uint32_t)((int32_t)255))))
		{
			goto IL_0139;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_34 = Encoding_get_BigEndianUTF32_m9229(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_BigEndianUTF32_m9229_MethodInfo);
		__this->___encoding_7 = L_34;
		return 4;
	}

IL_0139:
	{
		ByteU5BU5D_t13* L_35 = (__this->___input_buffer_1);
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 0);
		int32_t L_36 = 0;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_35, L_36))) != ((uint32_t)((int32_t)255))))
		{
			goto IL_0185;
		}
	}
	{
		ByteU5BU5D_t13* L_37 = (__this->___input_buffer_1);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 1);
		int32_t L_38 = 1;
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_37, L_38))) != ((uint32_t)((int32_t)254))))
		{
			goto IL_0185;
		}
	}
	{
		ByteU5BU5D_t13* L_39 = (__this->___input_buffer_1);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 2);
		int32_t L_40 = 2;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_40)))
		{
			goto IL_0178;
		}
	}
	{
		ByteU5BU5D_t13* L_41 = (__this->___input_buffer_1);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 3);
		int32_t L_42 = 3;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_41, L_42)))
		{
			goto IL_0178;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_43 = Encoding_get_UTF32_m9228(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF32_m9228_MethodInfo);
		__this->___encoding_7 = L_43;
		return 4;
	}

IL_0178:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_44 = Encoding_get_Unicode_m9227(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_Unicode_m9227_MethodInfo);
		__this->___encoding_7 = L_44;
		return 2;
	}

IL_0185:
	{
		return 0;
	}
}
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" int32_t StreamReader_ReadBuffer_m7696 (StreamReader_t1437 * __this, MethodInfo* method)
{
	static bool StreamReader_ReadBuffer_m7696_init;
	if (!StreamReader_ReadBuffer_m7696_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		StreamReader_ReadBuffer_m7696_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Encoding_t805 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		__this->___pos_4 = 0;
		V_0 = 0;
		__this->___decoded_count_3 = 0;
		V_1 = 0;
	}

IL_0012:
	{
		Stream_t1426 * L_0 = (__this->___base_stream_9);
		ByteU5BU5D_t13* L_1 = (__this->___input_buffer_1);
		int32_t L_2 = (__this->___buffer_size_5);
		NullCheck(L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Read_m10308_MethodInfo, L_0, L_1, 0, L_2);
		V_0 = L_3;
		if ((((int32_t)V_0) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		int32_t L_4 = (__this->___buffer_size_5);
		__this->___mayBlock_10 = ((((int32_t)V_0) < ((int32_t)L_4))? 1 : 0);
		int32_t L_5 = (__this->___do_checks_6);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		Encoding_t805 * L_6 = (__this->___encoding_7);
		V_2 = L_6;
		int32_t L_7 = StreamReader_DoChecks_m7695(__this, V_0, /*hidden argument*/&StreamReader_DoChecks_m7695_MethodInfo);
		V_1 = L_7;
		Encoding_t805 * L_8 = (__this->___encoding_7);
		if ((((Object_t*)(Encoding_t805 *)V_2) == ((Object_t*)(Encoding_t805 *)L_8)))
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_9 = (__this->___buffer_size_5);
		NullCheck(V_2);
		int32_t L_10 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxCharCount_m10313_MethodInfo, V_2, L_9);
		V_3 = ((int32_t)((int32_t)L_10+(int32_t)1));
		Encoding_t805 * L_11 = (__this->___encoding_7);
		int32_t L_12 = (__this->___buffer_size_5);
		NullCheck(L_11);
		int32_t L_13 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxCharCount_m10313_MethodInfo, L_11, L_12);
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
		if ((((int32_t)V_3) == ((int32_t)V_4)))
		{
			goto IL_0097;
		}
	}
	{
		__this->___decoded_buffer_2 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, V_4));
	}

IL_0097:
	{
		Encoding_t805 * L_14 = (__this->___encoding_7);
		NullCheck(L_14);
		Decoder_t1427 * L_15 = (Decoder_t1427 *)VirtFuncInvoker0< Decoder_t1427 * >::Invoke(&Encoding_GetDecoder_m9213_MethodInfo, L_14);
		__this->___decoder_8 = L_15;
	}

IL_00a8:
	{
		__this->___do_checks_6 = 0;
		V_0 = ((int32_t)((int32_t)V_0-(int32_t)V_1));
	}

IL_00b3:
	{
		int32_t L_16 = (__this->___decoded_count_3);
		Decoder_t1427 * L_17 = (__this->___decoder_8);
		ByteU5BU5D_t13* L_18 = (__this->___input_buffer_1);
		CharU5BU5D_t45* L_19 = (__this->___decoded_buffer_2);
		NullCheck(L_17);
		int32_t L_20 = (int32_t)VirtFuncInvoker5< int32_t, ByteU5BU5D_t13*, int32_t, int32_t, CharU5BU5D_t45*, int32_t >::Invoke(&Decoder_GetChars_m10310_MethodInfo, L_17, L_18, V_1, V_0, L_19, 0);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_16+(int32_t)L_20));
		V_1 = 0;
		int32_t L_21 = (__this->___decoded_count_3);
		if (!L_21)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_22 = (__this->___decoded_count_3);
		return L_22;
	}
}
// System.Int32 System.IO.StreamReader::Peek()
extern MethodInfo StreamReader_Peek_m7697_MethodInfo;
extern "C" int32_t StreamReader_Peek_m7697 (StreamReader_t1437 * __this, MethodInfo* method)
{
	{
		Stream_t1426 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_1, (String_t*) &_stringLiteral1722, (String_t*) &_stringLiteral1723, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m7696(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7696_MethodInfo);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		CharU5BU5D_t45* L_5 = (__this->___decoded_buffer_2);
		int32_t L_6 = (__this->___pos_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7));
	}
}
// System.Int32 System.IO.StreamReader::Read()
extern MethodInfo StreamReader_Read_m7698_MethodInfo;
extern "C" int32_t StreamReader_Read_m7698 (StreamReader_t1437 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Stream_t1426 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_1, (String_t*) &_stringLiteral1722, (String_t*) &_stringLiteral1723, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m7696(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7696_MethodInfo);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		CharU5BU5D_t45* L_5 = (__this->___decoded_buffer_2);
		int32_t L_6 = (__this->___pos_4);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___pos_4 = ((int32_t)((int32_t)L_7+(int32_t)1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_0);
		int32_t L_8 = V_0;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_8));
	}
}
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t StreamReader_Read_m7699 (StreamReader_t1437 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B16_0 = 0;
	{
		Stream_t1426 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_1, (String_t*) &_stringLiteral1722, (String_t*) &_stringLiteral1723, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		if (___buffer)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t785 * L_2 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_2, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0026:
	{
		if ((((int32_t)___index) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_3 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_3, (String_t*) &_stringLiteral405, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_003a:
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_4 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_4, (String_t*) &_stringLiteral489, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_004e:
	{
		NullCheck(___buffer);
		if ((((int32_t)___index) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length)))-(int32_t)___count)))))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_t522 * L_5 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_5, (String_t*) &_stringLiteral1724, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0061:
	{
		V_0 = 0;
		goto IL_00d9;
	}

IL_0068:
	{
		int32_t L_6 = (__this->___pos_4);
		int32_t L_7 = (__this->___decoded_count_3);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_8 = StreamReader_ReadBuffer_m7696(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7696_MethodInfo);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		if ((((int32_t)V_0) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		G_B16_0 = V_0;
		goto IL_0086;
	}

IL_0085:
	{
		G_B16_0 = 0;
	}

IL_0086:
	{
		return G_B16_0;
	}

IL_0087:
	{
		int32_t L_9 = (__this->___decoded_count_3);
		int32_t L_10 = (__this->___pos_4);
		int32_t L_11 = Math_Min_m9891(NULL /*static, unused*/, ((int32_t)((int32_t)L_9-(int32_t)L_10)), ___count, /*hidden argument*/&Math_Min_m9891_MethodInfo);
		V_1 = L_11;
		CharU5BU5D_t45* L_12 = (__this->___decoded_buffer_2);
		int32_t L_13 = (__this->___pos_4);
		Array_Copy_m6433(NULL /*static, unused*/, (Array_t *)(Array_t *)L_12, L_13, (Array_t *)(Array_t *)___buffer, ___index, V_1, /*hidden argument*/&Array_Copy_m6433_MethodInfo);
		int32_t L_14 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_14+(int32_t)V_1));
		___index = ((int32_t)((int32_t)___index+(int32_t)V_1));
		___count = ((int32_t)((int32_t)___count-(int32_t)V_1));
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)V_1));
		bool L_15 = (__this->___mayBlock_10);
		if (!L_15)
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_00dd;
	}

IL_00d9:
	{
		if ((((int32_t)___count) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_00dd:
	{
		return V_0;
	}
}
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C" int32_t StreamReader_FindNextEOL_m7700 (StreamReader_t1437 * __this, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		goto IL_008e;
	}

IL_0007:
	{
		CharU5BU5D_t45* L_0 = (__this->___decoded_buffer_2);
		int32_t L_1 = (__this->___pos_4);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		if ((((uint32_t)V_0) != ((uint32_t)((int32_t)10))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_3 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_3+(int32_t)1));
		bool L_4 = (__this->___foundCR_13);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_5-(int32_t)2));
		goto IL_0042;
	}

IL_003a:
	{
		int32_t L_6 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_6-(int32_t)1));
	}

IL_0042:
	{
		V_1 = G_B5_0;
		if ((((int32_t)V_1) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
	}

IL_0049:
	{
		__this->___foundCR_13 = 0;
		return V_1;
	}

IL_0052:
	{
		bool L_7 = (__this->___foundCR_13);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		__this->___foundCR_13 = 0;
		int32_t L_8 = (__this->___pos_4);
		if (L_8)
		{
			goto IL_006c;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_006c:
	{
		int32_t L_9 = (__this->___pos_4);
		return ((int32_t)((int32_t)L_9-(int32_t)1));
	}

IL_0075:
	{
		__this->___foundCR_13 = ((((int32_t)V_0) == ((int32_t)((int32_t)13)))? 1 : 0);
		int32_t L_10 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_008e:
	{
		int32_t L_11 = (__this->___pos_4);
		int32_t L_12 = (__this->___decoded_count_3);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.String System.IO.StreamReader::ReadLine()
extern MethodInfo StreamReader_ReadLine_m7701_MethodInfo;
extern "C" String_t* StreamReader_ReadLine_m7701 (StreamReader_t1437 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t154 * V_2 = {0};
	StringBuilder_t154 * V_3 = {0};
	{
		Stream_t1426 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_1, (String_t*) &_stringLiteral1722, (String_t*) &_stringLiteral1723, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m7696(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7696_MethodInfo);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0030:
	{
		int32_t L_5 = (__this->___pos_4);
		V_0 = L_5;
		int32_t L_6 = StreamReader_FindNextEOL_m7700(__this, /*hidden argument*/&StreamReader_FindNextEOL_m7700_MethodInfo);
		V_1 = L_6;
		int32_t L_7 = (__this->___decoded_count_3);
		if ((((int32_t)V_1) >= ((int32_t)L_7)))
		{
			goto IL_005b;
		}
	}
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_005b;
		}
	}
	{
		CharU5BU5D_t45* L_8 = (__this->___decoded_buffer_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_9 = String_CreateString_m6106(L_9, L_8, V_0, ((int32_t)((int32_t)V_1-(int32_t)V_0)), /*hidden argument*/&String__ctor_m6032_MethodInfo);
		return L_9;
	}

IL_005b:
	{
		if ((((uint32_t)V_1) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t154 * L_10 = (__this->___line_builder_11);
		StringBuilder_t154 * L_11 = (__this->___line_builder_11);
		NullCheck(L_11);
		int32_t L_12 = StringBuilder_get_Length_m4047(L_11, /*hidden argument*/&StringBuilder_get_Length_m4047_MethodInfo);
		NullCheck(L_10);
		String_t* L_13 = StringBuilder_ToString_m9253(L_10, 0, L_12, /*hidden argument*/&StringBuilder_ToString_m9253_MethodInfo);
		return L_13;
	}

IL_0078:
	{
		StringBuilder_t154 * L_14 = (__this->___line_builder_11);
		if (L_14)
		{
			goto IL_008d;
		}
	}
	{
		StringBuilder_t154 * L_15 = (StringBuilder_t154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t154_il2cpp_TypeInfo));
		StringBuilder__ctor_m714(L_15, /*hidden argument*/&StringBuilder__ctor_m714_MethodInfo);
		__this->___line_builder_11 = L_15;
		goto IL_0099;
	}

IL_008d:
	{
		StringBuilder_t154 * L_16 = (__this->___line_builder_11);
		NullCheck(L_16);
		StringBuilder_set_Length_m4154(L_16, 0, /*hidden argument*/&StringBuilder_set_Length_m4154_MethodInfo);
	}

IL_0099:
	{
		bool L_17 = (__this->___foundCR_13);
		if (!L_17)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_18 = (__this->___decoded_count_3);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_18-(int32_t)1));
	}

IL_00af:
	{
		StringBuilder_t154 * L_19 = (__this->___line_builder_11);
		CharU5BU5D_t45* L_20 = (__this->___decoded_buffer_2);
		int32_t L_21 = (__this->___decoded_count_3);
		NullCheck(L_19);
		StringBuilder_Append_m9258(L_19, L_20, V_0, ((int32_t)((int32_t)L_21-(int32_t)V_0)), /*hidden argument*/&StringBuilder_Append_m9258_MethodInfo);
		int32_t L_22 = StreamReader_ReadBuffer_m7696(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7696_MethodInfo);
		if (L_22)
		{
			goto IL_0118;
		}
	}
	{
		StringBuilder_t154 * L_23 = (__this->___line_builder_11);
		NullCheck(L_23);
		int32_t L_24 = StringBuilder_get_Capacity_m9249(L_23, /*hidden argument*/&StringBuilder_get_Capacity_m9249_MethodInfo);
		if ((((int32_t)L_24) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0100;
		}
	}
	{
		StringBuilder_t154 * L_25 = (__this->___line_builder_11);
		V_2 = L_25;
		__this->___line_builder_11 = (StringBuilder_t154 *)NULL;
		NullCheck(V_2);
		int32_t L_26 = StringBuilder_get_Length_m4047(V_2, /*hidden argument*/&StringBuilder_get_Length_m4047_MethodInfo);
		NullCheck(V_2);
		String_t* L_27 = StringBuilder_ToString_m9253(V_2, 0, L_26, /*hidden argument*/&StringBuilder_ToString_m9253_MethodInfo);
		return L_27;
	}

IL_0100:
	{
		StringBuilder_t154 * L_28 = (__this->___line_builder_11);
		StringBuilder_t154 * L_29 = (__this->___line_builder_11);
		NullCheck(L_29);
		int32_t L_30 = StringBuilder_get_Length_m4047(L_29, /*hidden argument*/&StringBuilder_get_Length_m4047_MethodInfo);
		NullCheck(L_28);
		String_t* L_31 = StringBuilder_ToString_m9253(L_28, 0, L_30, /*hidden argument*/&StringBuilder_ToString_m9253_MethodInfo);
		return L_31;
	}

IL_0118:
	{
		int32_t L_32 = (__this->___pos_4);
		V_0 = L_32;
		int32_t L_33 = StreamReader_FindNextEOL_m7700(__this, /*hidden argument*/&StreamReader_FindNextEOL_m7700_MethodInfo);
		V_1 = L_33;
		int32_t L_34 = (__this->___decoded_count_3);
		if ((((int32_t)V_1) >= ((int32_t)L_34)))
		{
			goto IL_018f;
		}
	}
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_018f;
		}
	}
	{
		StringBuilder_t154 * L_35 = (__this->___line_builder_11);
		CharU5BU5D_t45* L_36 = (__this->___decoded_buffer_2);
		NullCheck(L_35);
		StringBuilder_Append_m9258(L_35, L_36, V_0, ((int32_t)((int32_t)V_1-(int32_t)V_0)), /*hidden argument*/&StringBuilder_Append_m9258_MethodInfo);
		StringBuilder_t154 * L_37 = (__this->___line_builder_11);
		NullCheck(L_37);
		int32_t L_38 = StringBuilder_get_Capacity_m9249(L_37, /*hidden argument*/&StringBuilder_get_Capacity_m9249_MethodInfo);
		if ((((int32_t)L_38) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0177;
		}
	}
	{
		StringBuilder_t154 * L_39 = (__this->___line_builder_11);
		V_3 = L_39;
		__this->___line_builder_11 = (StringBuilder_t154 *)NULL;
		NullCheck(V_3);
		int32_t L_40 = StringBuilder_get_Length_m4047(V_3, /*hidden argument*/&StringBuilder_get_Length_m4047_MethodInfo);
		NullCheck(V_3);
		String_t* L_41 = StringBuilder_ToString_m9253(V_3, 0, L_40, /*hidden argument*/&StringBuilder_ToString_m9253_MethodInfo);
		return L_41;
	}

IL_0177:
	{
		StringBuilder_t154 * L_42 = (__this->___line_builder_11);
		StringBuilder_t154 * L_43 = (__this->___line_builder_11);
		NullCheck(L_43);
		int32_t L_44 = StringBuilder_get_Length_m4047(L_43, /*hidden argument*/&StringBuilder_get_Length_m4047_MethodInfo);
		NullCheck(L_42);
		String_t* L_45 = StringBuilder_ToString_m9253(L_42, 0, L_44, /*hidden argument*/&StringBuilder_ToString_m9253_MethodInfo);
		return L_45;
	}

IL_018f:
	{
		if ((((uint32_t)V_1) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_01ac;
		}
	}
	{
		StringBuilder_t154 * L_46 = (__this->___line_builder_11);
		StringBuilder_t154 * L_47 = (__this->___line_builder_11);
		NullCheck(L_47);
		int32_t L_48 = StringBuilder_get_Length_m4047(L_47, /*hidden argument*/&StringBuilder_get_Length_m4047_MethodInfo);
		NullCheck(L_46);
		String_t* L_49 = StringBuilder_ToString_m9253(L_46, 0, L_48, /*hidden argument*/&StringBuilder_ToString_m9253_MethodInfo);
		return L_49;
	}

IL_01ac:
	{
		goto IL_0099;
	}
}
// System.String System.IO.StreamReader::ReadToEnd()
extern MethodInfo StreamReader_ReadToEnd_m7702_MethodInfo;
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" String_t* StreamReader_ReadToEnd_m7702 (StreamReader_t1437 * __this, MethodInfo* method)
{
	static bool StreamReader_ReadToEnd_m7702_init;
	if (!StreamReader_ReadToEnd_m7702_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		StreamReader_ReadToEnd_m7702_init = true;
	}
	StringBuilder_t154 * V_0 = {0};
	int32_t V_1 = 0;
	CharU5BU5D_t45* V_2 = {0};
	int32_t V_3 = 0;
	{
		Stream_t1426 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_1, (String_t*) &_stringLiteral1722, (String_t*) &_stringLiteral1723, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		StringBuilder_t154 * L_2 = (StringBuilder_t154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t154_il2cpp_TypeInfo));
		StringBuilder__ctor_m714(L_2, /*hidden argument*/&StringBuilder__ctor_m714_MethodInfo);
		V_0 = L_2;
		CharU5BU5D_t45* L_3 = (__this->___decoded_buffer_2);
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		V_2 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, V_1));
		goto IL_003a;
	}

IL_0030:
	{
		NullCheck(V_0);
		StringBuilder_Append_m9258(V_0, V_2, 0, V_3, /*hidden argument*/&StringBuilder_Append_m9258_MethodInfo);
	}

IL_003a:
	{
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t45*, int32_t, int32_t >::Invoke(&StreamReader_Read_m7699_MethodInfo, __this, V_2, 0, V_1);
		int32_t L_5 = L_4;
		V_3 = L_5;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		NullCheck(V_0);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m716_MethodInfo, V_0);
		return L_6;
	}
}
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StreamWriter_t1459_il2cpp_TypeInfo;
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriterMethodDeclarations.h"

// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"
extern MethodInfo StreamWriter_Flush_m7709_MethodInfo;
extern MethodInfo StreamWriter__ctor_m7704_MethodInfo;
extern MethodInfo TextWriter__ctor_m7750_MethodInfo;
extern MethodInfo StreamWriter_Initialize_m7706_MethodInfo;
extern MethodInfo Math_Max_m9890_MethodInfo;
extern MethodInfo Encoding_GetMaxByteCount_m10314_MethodInfo;
extern MethodInfo Stream_get_CanSeek_m10315_MethodInfo;
extern MethodInfo Stream_get_Position_m10316_MethodInfo;
extern MethodInfo StreamWriter_Decode_m7711_MethodInfo;
extern MethodInfo StreamWriter_FlushBytes_m7710_MethodInfo;
extern MethodInfo Stream_Flush_m10317_MethodInfo;
extern MethodInfo Encoding_GetBytes_m10318_MethodInfo;
extern MethodInfo StreamWriter_LowLevelWrite_m7713_MethodInfo;
extern MethodInfo StreamWriter_LowLevelWrite_m7714_MethodInfo;
extern MethodInfo StreamWriter_Dispose_m7708_MethodInfo;


// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo StreamWriter__ctor_m7703_MethodInfo;
extern "C" void StreamWriter__ctor_m7703 (StreamWriter_t1459 * __this, Stream_t1426 * ___stream, Encoding_t805 * ___encoding, MethodInfo* method)
{
	{
		StreamWriter__ctor_m7704(__this, ___stream, ___encoding, ((int32_t)1024), /*hidden argument*/&StreamWriter__ctor_m7704_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m7704 (StreamWriter_t1459 * __this, Stream_t1426 * ___stream, Encoding_t805 * ___encoding, int32_t ___bufferSize, MethodInfo* method)
{
	{
		TextWriter__ctor_m7750(__this, /*hidden argument*/&TextWriter__ctor_m7750_MethodInfo);
		if (___stream)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1720, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		if (___encoding)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_1, (String_t*) &_stringLiteral1718, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0022:
	{
		if ((((int32_t)___bufferSize) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_2 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_2, (String_t*) &_stringLiteral1632, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0031:
	{
		NullCheck(___stream);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanWrite_m10312_MethodInfo, ___stream);
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_t522 * L_4 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_4, (String_t*) &_stringLiteral1725, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0044:
	{
		__this->___internalStream_3 = ___stream;
		StreamWriter_Initialize_m7706(__this, ___encoding, ___bufferSize, /*hidden argument*/&StreamWriter_Initialize_m7706_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamWriter::.cctor()
extern MethodInfo StreamWriter__cctor_m7705_MethodInfo;
extern "C" void StreamWriter__cctor_m7705 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Stream_t1426_il2cpp_TypeInfo));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t805_il2cpp_TypeInfo));
		Encoding_t805 * L_0 = Encoding_get_UTF8Unmarked_m9225(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8Unmarked_m9225_MethodInfo);
		StreamWriter_t1459 * L_1 = (StreamWriter_t1459 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamWriter_t1459_il2cpp_TypeInfo));
		StreamWriter__ctor_m7704(L_1, (((Stream_t1426_StaticFields*)InitializedTypeInfo(&Stream_t1426_il2cpp_TypeInfo)->static_fields)->___Null_0), L_0, 1, /*hidden argument*/&StreamWriter__ctor_m7704_MethodInfo);
		((StreamWriter_t1459_StaticFields*)InitializedTypeInfo(&StreamWriter_t1459_il2cpp_TypeInfo)->static_fields)->___Null_11 = L_1;
		return;
	}
}
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Initialize_m7706 (StreamWriter_t1459 * __this, Encoding_t805 * ___encoding, int32_t ___bufferSize, MethodInfo* method)
{
	static bool StreamWriter_Initialize_m7706_init;
	if (!StreamWriter_Initialize_m7706_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		StreamWriter_Initialize_m7706_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->___internalEncoding_2 = ___encoding;
		int32_t L_0 = 0;
		V_1 = L_0;
		__this->___byte_pos_6 = L_0;
		__this->___decode_pos_8 = V_1;
		int32_t L_1 = Math_Max_m9890(NULL /*static, unused*/, ___bufferSize, ((int32_t)256), /*hidden argument*/&Math_Max_m9890_MethodInfo);
		V_0 = L_1;
		__this->___decode_buf_7 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, V_0));
		NullCheck(___encoding);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxByteCount_m10314_MethodInfo, ___encoding, V_0);
		__this->___byte_buf_5 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, L_2));
		Stream_t1426 * L_3 = (__this->___internalStream_3);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanSeek_m10315_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		Stream_t1426 * L_5 = (__this->___internalStream_3);
		NullCheck(L_5);
		int64_t L_6 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Stream_get_Position_m10316_MethodInfo, L_5);
		if ((((int64_t)L_6) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0064;
		}
	}
	{
		__this->___preamble_done_10 = 1;
	}

IL_0064:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern MethodInfo StreamWriter_set_AutoFlush_m7707_MethodInfo;
extern "C" void StreamWriter_set_AutoFlush_m7707 (StreamWriter_t1459 * __this, bool ___value, MethodInfo* method)
{
	{
		__this->___iflush_4 = ___value;
		bool L_0 = (__this->___iflush_4);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7709_MethodInfo, __this);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C" void StreamWriter_Dispose_m7708 (StreamWriter_t1459 * __this, bool ___disposing, MethodInfo* method)
{
	Exception_t140 * V_0 = {0};
	Exception_t140 * V_1 = {0};
	Exception_t140 * V_2 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = (Exception_t140 *)NULL;
		bool L_0 = (__this->___DisposedAlready_9);
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		if (!___disposing)
		{
			goto IL_003e;
		}
	}
	{
		Stream_t1426 * L_1 = (__this->___internalStream_3);
		if (!L_1)
		{
			goto IL_003e;
		}
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7709_MethodInfo, __this);
		// IL_001b: leave.s IL_0022
		goto IL_0022;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_001d;
		throw e;
	}

IL_001d:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t140 *)__exception_local);
		V_0 = V_1;
		// IL_0020: leave.s IL_0022
		goto IL_0022;
	} // end catch (depth: 1)

IL_0022:
	{
		__this->___DisposedAlready_9 = 1;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		Stream_t1426 * L_2 = (__this->___internalStream_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&Stream_Close_m7650_MethodInfo, L_2);
		// IL_0034: leave.s IL_003e
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0036;
		throw e;
	}

IL_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t140 *)__exception_local);
			if (V_0)
			{
				goto IL_003c;
			}
		}

IL_003a:
		{
			V_0 = V_2;
		}

IL_003c:
		{
			// IL_003c: leave.s IL_003e
			goto IL_003e;
		}
	} // end catch (depth: 1)

IL_003e:
	{
		__this->___internalStream_3 = (Stream_t1426 *)NULL;
		__this->___byte_buf_5 = (ByteU5BU5D_t13*)NULL;
		__this->___internalEncoding_2 = (Encoding_t805 *)NULL;
		__this->___decode_buf_7 = (CharU5BU5D_t45*)NULL;
		if (!V_0)
		{
			goto IL_005f;
		}
	}
	{
		il2cpp_codegen_raise_exception(V_0);
	}

IL_005f:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Flush()
extern "C" void StreamWriter_Flush_m7709 (StreamWriter_t1459 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_1, (String_t*) &_stringLiteral1726, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		StreamWriter_Decode_m7711(__this, /*hidden argument*/&StreamWriter_Decode_m7711_MethodInfo);
		int32_t L_2 = (__this->___byte_pos_6);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		StreamWriter_FlushBytes_m7710(__this, /*hidden argument*/&StreamWriter_FlushBytes_m7710_MethodInfo);
		Stream_t1426 * L_3 = (__this->___internalStream_3);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(&Stream_Flush_m10317_MethodInfo, L_3);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C" void StreamWriter_FlushBytes_m7710 (StreamWriter_t1459 * __this, MethodInfo* method)
{
	ByteU5BU5D_t13* V_0 = {0};
	{
		bool L_0 = (__this->___preamble_done_10);
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_1 = (__this->___byte_pos_6);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Encoding_t805 * L_2 = (__this->___internalEncoding_2);
		NullCheck(L_2);
		ByteU5BU5D_t13* L_3 = (ByteU5BU5D_t13*)VirtFuncInvoker0< ByteU5BU5D_t13* >::Invoke(&Encoding_GetPreamble_m9218_MethodInfo, L_2);
		V_0 = L_3;
		NullCheck(V_0);
		if ((((int32_t)(((int32_t)(((Array_t *)V_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		Stream_t1426 * L_4 = (__this->___internalStream_3);
		NullCheck(V_0);
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Write_m10311_MethodInfo, L_4, V_0, 0, (((int32_t)(((Array_t *)V_0)->max_length))));
	}

IL_0033:
	{
		__this->___preamble_done_10 = 1;
	}

IL_003a:
	{
		Stream_t1426 * L_5 = (__this->___internalStream_3);
		ByteU5BU5D_t13* L_6 = (__this->___byte_buf_5);
		int32_t L_7 = (__this->___byte_pos_6);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_t13*, int32_t, int32_t >::Invoke(&Stream_Write_m10311_MethodInfo, L_5, L_6, 0, L_7);
		__this->___byte_pos_6 = 0;
		return;
	}
}
// System.Void System.IO.StreamWriter::Decode()
extern "C" void StreamWriter_Decode_m7711 (StreamWriter_t1459 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___byte_pos_6);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		StreamWriter_FlushBytes_m7710(__this, /*hidden argument*/&StreamWriter_FlushBytes_m7710_MethodInfo);
	}

IL_000f:
	{
		int32_t L_1 = (__this->___decode_pos_8);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Encoding_t805 * L_2 = (__this->___internalEncoding_2);
		CharU5BU5D_t45* L_3 = (__this->___decode_buf_7);
		int32_t L_4 = (__this->___decode_pos_8);
		ByteU5BU5D_t13* L_5 = (__this->___byte_buf_5);
		int32_t L_6 = (__this->___byte_pos_6);
		NullCheck(L_2);
		int32_t L_7 = (int32_t)VirtFuncInvoker5< int32_t, CharU5BU5D_t45*, int32_t, int32_t, ByteU5BU5D_t13*, int32_t >::Invoke(&Encoding_GetBytes_m10318_MethodInfo, L_2, L_3, 0, L_4, L_5, L_6);
		V_0 = L_7;
		int32_t L_8 = (__this->___byte_pos_6);
		__this->___byte_pos_6 = ((int32_t)((int32_t)L_8+(int32_t)V_0));
		__this->___decode_pos_8 = 0;
	}

IL_0052:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo StreamWriter_Write_m7712_MethodInfo;
extern "C" void StreamWriter_Write_m7712 (StreamWriter_t1459 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_1, (String_t*) &_stringLiteral1726, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		if (___buffer)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t785 * L_2 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_2, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0021:
	{
		if ((((int32_t)___index) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_3 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_3, (String_t*) &_stringLiteral405, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0035:
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_4 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_4, (String_t*) &_stringLiteral489, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0049:
	{
		NullCheck(___buffer);
		if ((((int32_t)___index) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length)))-(int32_t)___count)))))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_t522 * L_5 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_5, (String_t*) &_stringLiteral1724, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_005c:
	{
		StreamWriter_LowLevelWrite_m7713(__this, ___buffer, ___index, ___count, /*hidden argument*/&StreamWriter_LowLevelWrite_m7713_MethodInfo);
		bool L_6 = (__this->___iflush_4);
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7709_MethodInfo, __this);
	}

IL_0073:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_LowLevelWrite_m7713 (StreamWriter_t1459 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0060;
	}

IL_0002:
	{
		CharU5BU5D_t45* L_0 = (__this->___decode_buf_7);
		NullCheck(L_0);
		int32_t L_1 = (__this->___decode_pos_8);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))-(int32_t)L_1));
		if (V_0)
		{
			goto IL_0024;
		}
	}
	{
		StreamWriter_Decode_m7711(__this, /*hidden argument*/&StreamWriter_Decode_m7711_MethodInfo);
		CharU5BU5D_t45* L_2 = (__this->___decode_buf_7);
		NullCheck(L_2);
		V_0 = (((int32_t)(((Array_t *)L_2)->max_length)));
	}

IL_0024:
	{
		if ((((int32_t)V_0) <= ((int32_t)___count)))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ___count;
	}

IL_002a:
	{
		CharU5BU5D_t45* L_3 = (__this->___decode_buf_7);
		int32_t L_4 = (__this->___decode_pos_8);
		Buffer_BlockCopy_m135(NULL /*static, unused*/, (Array_t *)(Array_t *)___buffer, ((int32_t)((int32_t)___index*(int32_t)2)), (Array_t *)(Array_t *)L_3, ((int32_t)((int32_t)L_4*(int32_t)2)), ((int32_t)((int32_t)V_0*(int32_t)2)), /*hidden argument*/&Buffer_BlockCopy_m135_MethodInfo);
		___count = ((int32_t)((int32_t)___count-(int32_t)V_0));
		___index = ((int32_t)((int32_t)___index+(int32_t)V_0));
		int32_t L_5 = (__this->___decode_pos_8);
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_5+(int32_t)V_0));
	}

IL_0060:
	{
		if ((((int32_t)___count) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C" void StreamWriter_LowLevelWrite_m7714 (StreamWriter_t1459 * __this, String_t* ___s, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		NullCheck(___s);
		int32_t L_0 = String_get_Length_m133(___s, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		CharU5BU5D_t45* L_1 = (__this->___decode_buf_7);
		NullCheck(L_1);
		int32_t L_2 = (__this->___decode_pos_8);
		V_2 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))-(int32_t)L_2));
		if (V_2)
		{
			goto IL_002d;
		}
	}
	{
		StreamWriter_Decode_m7711(__this, /*hidden argument*/&StreamWriter_Decode_m7711_MethodInfo);
		CharU5BU5D_t45* L_3 = (__this->___decode_buf_7);
		NullCheck(L_3);
		V_2 = (((int32_t)(((Array_t *)L_3)->max_length)));
	}

IL_002d:
	{
		if ((((int32_t)V_2) <= ((int32_t)V_0)))
		{
			goto IL_0033;
		}
	}
	{
		V_2 = V_0;
	}

IL_0033:
	{
		V_3 = 0;
		goto IL_0053;
	}

IL_0037:
	{
		CharU5BU5D_t45* L_4 = (__this->___decode_buf_7);
		int32_t L_5 = (__this->___decode_pos_8);
		NullCheck(___s);
		uint16_t L_6 = String_get_Chars_m2591(___s, ((int32_t)((int32_t)V_3+(int32_t)V_1)), /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)V_3+(int32_t)L_5)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, ((int32_t)((int32_t)V_3+(int32_t)L_5)))) = (uint16_t)L_6;
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_0053:
	{
		if ((((int32_t)V_3) < ((int32_t)V_2)))
		{
			goto IL_0037;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0-(int32_t)V_2));
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)V_2));
		int32_t L_7 = (__this->___decode_pos_8);
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_7+(int32_t)V_2));
	}

IL_006d:
	{
		if ((((int32_t)V_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char)
extern MethodInfo StreamWriter_Write_m7715_MethodInfo;
extern "C" void StreamWriter_Write_m7715 (StreamWriter_t1459 * __this, uint16_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_1, (String_t*) &_stringLiteral1726, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->___decode_pos_8);
		CharU5BU5D_t45* L_3 = (__this->___decode_buf_7);
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		StreamWriter_Decode_m7711(__this, /*hidden argument*/&StreamWriter_Decode_m7711_MethodInfo);
	}

IL_0029:
	{
		CharU5BU5D_t45* L_4 = (__this->___decode_buf_7);
		int32_t L_5 = (__this->___decode_pos_8);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_6+(int32_t)1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, V_0)) = (uint16_t)___value;
		bool L_7 = (__this->___iflush_4);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7709_MethodInfo, __this);
	}

IL_0050:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern MethodInfo StreamWriter_Write_m7716_MethodInfo;
extern "C" void StreamWriter_Write_m7716 (StreamWriter_t1459 * __this, CharU5BU5D_t45* ___buffer, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_1, (String_t*) &_stringLiteral1726, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		if (!___buffer)
		{
			goto IL_0021;
		}
	}
	{
		NullCheck(___buffer);
		StreamWriter_LowLevelWrite_m7713(__this, ___buffer, 0, (((int32_t)(((Array_t *)___buffer)->max_length))), /*hidden argument*/&StreamWriter_LowLevelWrite_m7713_MethodInfo);
	}

IL_0021:
	{
		bool L_2 = (__this->___iflush_4);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7709_MethodInfo, __this);
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.String)
extern MethodInfo StreamWriter_Write_m7717_MethodInfo;
extern "C" void StreamWriter_Write_m7717 (StreamWriter_t1459 * __this, String_t* ___value, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1831 * L_1 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10087(L_1, (String_t*) &_stringLiteral1726, /*hidden argument*/&ObjectDisposedException__ctor_m10087_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		if (!___value)
		{
			goto IL_001d;
		}
	}
	{
		StreamWriter_LowLevelWrite_m7714(__this, ___value, /*hidden argument*/&StreamWriter_LowLevelWrite_m7714_MethodInfo);
	}

IL_001d:
	{
		bool L_2 = (__this->___iflush_4);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7709_MethodInfo, __this);
	}

IL_002b:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Close()
extern MethodInfo StreamWriter_Close_m7718_MethodInfo;
extern "C" void StreamWriter_Close_m7718 (StreamWriter_t1459 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&StreamWriter_Dispose_m7708_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.StreamWriter::Finalize()
extern MethodInfo StreamWriter_Finalize_m7719_MethodInfo;
extern "C" void StreamWriter_Finalize_m7719 (StreamWriter_t1459 * __this, MethodInfo* method)
{
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(&StreamWriter_Dispose_m7708_MethodInfo, __this, 0);
		// IL_0007: leave.s IL_0010
		leaveInstructions[0] = 0x10; // 1
		THROW_SENTINEL(IL_0010);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0009;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0009;
	}

IL_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m226(__this, /*hidden argument*/&Object_Finalize_m226_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x10:
				goto IL_0010;
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

IL_0010:
	{
		return;
	}
}
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StringReader_t1460_il2cpp_TypeInfo;
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"

extern MethodInfo StringReader_CheckObjectDisposedException_m7727_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9445_MethodInfo;
extern MethodInfo String_CopyTo_m6053_MethodInfo;
extern MethodInfo StringReader_ReadToEnd_m7726_MethodInfo;


// System.Void System.IO.StringReader::.ctor(System.String)
extern MethodInfo StringReader__ctor_m7720_MethodInfo;
extern "C" void StringReader__ctor_m7720 (StringReader_t1460 * __this, String_t* ___s, MethodInfo* method)
{
	{
		TextReader__ctor_m7730(__this, /*hidden argument*/&TextReader__ctor_m7730_MethodInfo);
		if (___s)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral945, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		__this->___source_1 = ___s;
		__this->___nextChar_2 = 0;
		NullCheck(___s);
		int32_t L_1 = String_get_Length_m133(___s, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		__this->___sourceLength_3 = L_1;
		return;
	}
}
// System.Void System.IO.StringReader::Dispose(System.Boolean)
extern MethodInfo StringReader_Dispose_m7721_MethodInfo;
extern "C" void StringReader_Dispose_m7721 (StringReader_t1460 * __this, bool ___disposing, MethodInfo* method)
{
	{
		__this->___source_1 = (String_t*)NULL;
		TextReader_Dispose_m7733(__this, ___disposing, /*hidden argument*/&TextReader_Dispose_m7733_MethodInfo);
		return;
	}
}
// System.Int32 System.IO.StringReader::Peek()
extern MethodInfo StringReader_Peek_m7722_MethodInfo;
extern "C" int32_t StringReader_Peek_m7722 (StringReader_t1460 * __this, MethodInfo* method)
{
	{
		StringReader_CheckObjectDisposedException_m7727(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7727_MethodInfo);
		int32_t L_0 = (__this->___nextChar_2);
		int32_t L_1 = (__this->___sourceLength_3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		String_t* L_2 = (__this->___source_1);
		int32_t L_3 = (__this->___nextChar_2);
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m2591(L_2, L_3, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		return L_4;
	}
}
// System.Int32 System.IO.StringReader::Read()
extern MethodInfo StringReader_Read_m7723_MethodInfo;
extern "C" int32_t StringReader_Read_m7723 (StringReader_t1460 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		StringReader_CheckObjectDisposedException_m7727(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7727_MethodInfo);
		int32_t L_0 = (__this->___nextChar_2);
		int32_t L_1 = (__this->___sourceLength_3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		String_t* L_2 = (__this->___source_1);
		int32_t L_3 = (__this->___nextChar_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->___nextChar_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		NullCheck(L_2);
		uint16_t L_5 = String_get_Chars_m2591(L_2, V_0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		return L_5;
	}
}
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo StringReader_Read_m7724_MethodInfo;
extern "C" int32_t StringReader_Read_m7724 (StringReader_t1460 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		StringReader_CheckObjectDisposedException_m7727(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7727_MethodInfo);
		if (___buffer)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		NullCheck(___buffer);
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length)))-(int32_t)___index))) >= ((int32_t)___count)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t522 * L_1 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m9445(L_1, /*hidden argument*/&ArgumentException__ctor_m9445_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0022:
	{
		if ((((int32_t)___index) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t786 * L_2 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4062(L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4062_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0030:
	{
		int32_t L_3 = (__this->___nextChar_2);
		int32_t L_4 = (__this->___sourceLength_3);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)L_4-(int32_t)___count)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_5 = (__this->___sourceLength_3);
		int32_t L_6 = (__this->___nextChar_2);
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)L_6));
		goto IL_0052;
	}

IL_0050:
	{
		V_0 = ___count;
	}

IL_0052:
	{
		String_t* L_7 = (__this->___source_1);
		int32_t L_8 = (__this->___nextChar_2);
		NullCheck(L_7);
		String_CopyTo_m6053(L_7, L_8, ___buffer, ___index, V_0, /*hidden argument*/&String_CopyTo_m6053_MethodInfo);
		int32_t L_9 = (__this->___nextChar_2);
		__this->___nextChar_2 = ((int32_t)((int32_t)L_9+(int32_t)V_0));
		return V_0;
	}
}
// System.String System.IO.StringReader::ReadLine()
extern MethodInfo StringReader_ReadLine_m7725_MethodInfo;
extern "C" String_t* StringReader_ReadLine_m7725 (StringReader_t1460 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	StringReader_t1460 * G_B14_1 = {0};
	int32_t G_B13_0 = 0;
	StringReader_t1460 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	StringReader_t1460 * G_B15_2 = {0};
	{
		StringReader_CheckObjectDisposedException_m7727(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7727_MethodInfo);
		int32_t L_0 = (__this->___nextChar_2);
		String_t* L_1 = (__this->___source_1);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m133(L_1, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_001b:
	{
		String_t* L_3 = (__this->___source_1);
		int32_t L_4 = (__this->___nextChar_2);
		NullCheck(L_3);
		int32_t L_5 = String_IndexOf_m4150(L_3, ((int32_t)13), L_4, /*hidden argument*/&String_IndexOf_m4150_MethodInfo);
		V_0 = L_5;
		String_t* L_6 = (__this->___source_1);
		int32_t L_7 = (__this->___nextChar_2);
		NullCheck(L_6);
		int32_t L_8 = String_IndexOf_m4150(L_6, ((int32_t)10), L_7, /*hidden argument*/&String_IndexOf_m4150_MethodInfo);
		V_1 = L_8;
		V_3 = 0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_0058;
		}
	}
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringReader_ReadToEnd_m7726_MethodInfo, __this);
		return L_9;
	}

IL_0054:
	{
		V_2 = V_1;
		goto IL_0070;
	}

IL_0058:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0060;
		}
	}
	{
		V_2 = V_0;
		goto IL_0070;
	}

IL_0060:
	{
		if ((((int32_t)V_0) <= ((int32_t)V_1)))
		{
			goto IL_0067;
		}
	}
	{
		G_B11_0 = V_1;
		goto IL_0068;
	}

IL_0067:
	{
		G_B11_0 = V_0;
	}

IL_0068:
	{
		V_2 = G_B11_0;
		V_3 = ((((int32_t)((int32_t)((int32_t)V_0+(int32_t)1))) == ((int32_t)V_1))? 1 : 0);
	}

IL_0070:
	{
		String_t* L_10 = (__this->___source_1);
		int32_t L_11 = (__this->___nextChar_2);
		int32_t L_12 = (__this->___nextChar_2);
		NullCheck(L_10);
		String_t* L_13 = String_Substring_m150(L_10, L_11, ((int32_t)((int32_t)V_2-(int32_t)L_12)), /*hidden argument*/&String_Substring_m150_MethodInfo);
		V_4 = L_13;
		G_B13_0 = V_2;
		G_B13_1 = __this;
		if (!V_3)
		{
			G_B14_0 = V_2;
			G_B14_1 = __this;
			goto IL_0093;
		}
	}
	{
		G_B15_0 = 2;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0094;
	}

IL_0093:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0094:
	{
		NullCheck(G_B15_2);
		G_B15_2->___nextChar_2 = ((int32_t)((int32_t)G_B15_1+(int32_t)G_B15_0));
		return V_4;
	}
}
// System.String System.IO.StringReader::ReadToEnd()
extern "C" String_t* StringReader_ReadToEnd_m7726 (StringReader_t1460 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		StringReader_CheckObjectDisposedException_m7727(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7727_MethodInfo);
		String_t* L_0 = (__this->___source_1);
		int32_t L_1 = (__this->___nextChar_2);
		int32_t L_2 = (__this->___sourceLength_3);
		int32_t L_3 = (__this->___nextChar_2);
		NullCheck(L_0);
		String_t* L_4 = String_Substring_m150(L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)), /*hidden argument*/&String_Substring_m150_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = (__this->___sourceLength_3);
		__this->___nextChar_2 = L_5;
		return V_0;
	}
}
// System.Void System.IO.StringReader::CheckObjectDisposedException()
extern "C" void StringReader_CheckObjectDisposedException_m7727 (StringReader_t1460 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___source_1);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m6561(NULL /*static, unused*/, (String_t*) &_stringLiteral1728, /*hidden argument*/&Locale_GetText_m6561_MethodInfo);
		ObjectDisposedException_t1831 * L_2 = (ObjectDisposedException_t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1831_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10088(L_2, (String_t*) &_stringLiteral1727, L_1, /*hidden argument*/&ObjectDisposedException__ctor_m10088_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		return;
	}
}
// System.IO.TextReader/NullTextReader
#include "mscorlib_System_IO_TextReader_NullTextReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NullTextReader_t1461_il2cpp_TypeInfo;
// System.IO.TextReader/NullTextReader
#include "mscorlib_System_IO_TextReader_NullTextReaderMethodDeclarations.h"



// System.Void System.IO.TextReader/NullTextReader::.ctor()
extern MethodInfo NullTextReader__ctor_m7728_MethodInfo;
extern "C" void NullTextReader__ctor_m7728 (NullTextReader_t1461 * __this, MethodInfo* method)
{
	{
		TextReader__ctor_m7730(__this, /*hidden argument*/&TextReader__ctor_m7730_MethodInfo);
		return;
	}
}
// System.String System.IO.TextReader/NullTextReader::ReadLine()
extern MethodInfo NullTextReader_ReadLine_m7729_MethodInfo;
extern "C" String_t* NullTextReader_ReadLine_m7729 (NullTextReader_t1461 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.SynchronizedReader
#include "mscorlib_System_IO_SynchronizedReader.h"
extern TypeInfo SynchronizedReader_t1462_il2cpp_TypeInfo;
// System.IO.SynchronizedReader
#include "mscorlib_System_IO_SynchronizedReaderMethodDeclarations.h"
extern MethodInfo TextReader_Read_m7735_MethodInfo;
extern MethodInfo SynchronizedReader__ctor_m7740_MethodInfo;


// System.Void System.IO.TextReader::.ctor()
extern "C" void TextReader__ctor_m7730 (TextReader_t1359 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.IO.TextReader::.cctor()
extern MethodInfo TextReader__cctor_m7731_MethodInfo;
extern "C" void TextReader__cctor_m7731 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullTextReader_t1461 * L_0 = (NullTextReader_t1461 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullTextReader_t1461_il2cpp_TypeInfo));
		NullTextReader__ctor_m7728(L_0, /*hidden argument*/&NullTextReader__ctor_m7728_MethodInfo);
		((TextReader_t1359_StaticFields*)InitializedTypeInfo(&TextReader_t1359_il2cpp_TypeInfo)->static_fields)->___Null_0 = L_0;
		return;
	}
}
// System.Void System.IO.TextReader::Dispose()
extern MethodInfo TextReader_Dispose_m7732_MethodInfo;
extern "C" void TextReader_Dispose_m7732 (TextReader_t1359 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&TextReader_Dispose_m7733_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C" void TextReader_Dispose_m7733 (TextReader_t1359 * __this, bool ___disposing, MethodInfo* method)
{
	{
		if (!___disposing)
		{
			goto IL_0009;
		}
	}
	{
		GC_SuppressFinalize_m5619(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5619_MethodInfo);
	}

IL_0009:
	{
		return;
	}
}
// System.Int32 System.IO.TextReader::Peek()
extern MethodInfo TextReader_Peek_m7734_MethodInfo;
extern "C" int32_t TextReader_Peek_m7734 (TextReader_t1359 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.TextReader::Read()
extern "C" int32_t TextReader_Read_m7735 (TextReader_t1359 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo TextReader_Read_m7736_MethodInfo;
extern "C" int32_t TextReader_Read_m7736 (TextReader_t1359 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&TextReader_Read_m7735_MethodInfo, __this);
		int32_t L_1 = L_0;
		V_0 = L_1;
		if ((((uint32_t)L_1) != ((uint32_t)(-1))))
		{
			goto IL_0011;
		}
	}
	{
		return V_1;
	}

IL_0011:
	{
		NullCheck(___buffer);
		IL2CPP_ARRAY_BOUNDS_CHECK(___buffer, ((int32_t)((int32_t)___index+(int32_t)V_1)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(___buffer, ((int32_t)((int32_t)___index+(int32_t)V_1)))) = (uint16_t)(((uint16_t)V_0));
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_001c:
	{
		if ((((int32_t)V_1) < ((int32_t)___count)))
		{
			goto IL_0004;
		}
	}
	{
		return V_1;
	}
}
// System.String System.IO.TextReader::ReadLine()
extern MethodInfo TextReader_ReadLine_m7737_MethodInfo;
extern "C" String_t* TextReader_ReadLine_m7737 (TextReader_t1359 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}
}
// System.String System.IO.TextReader::ReadToEnd()
extern MethodInfo TextReader_ReadToEnd_m7738_MethodInfo;
extern "C" String_t* TextReader_ReadToEnd_m7738 (TextReader_t1359 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}
}
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern MethodInfo TextReader_Synchronized_m7739_MethodInfo;
extern "C" TextReader_t1359 * TextReader_Synchronized_m7739 (Object_t * __this /* static, unused */, TextReader_t1359 * ___reader, MethodInfo* method)
{
	{
		if (___reader)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1729, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (!((SynchronizedReader_t1462 *)IsInst(___reader, InitializedTypeInfo(&SynchronizedReader_t1462_il2cpp_TypeInfo))))
		{
			goto IL_0018;
		}
	}
	{
		return ___reader;
	}

IL_0018:
	{
		SynchronizedReader_t1462 * L_1 = (SynchronizedReader_t1462 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SynchronizedReader_t1462_il2cpp_TypeInfo));
		SynchronizedReader__ctor_m7740(L_1, ___reader, /*hidden argument*/&SynchronizedReader__ctor_m7740_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern "C" void SynchronizedReader__ctor_m7740 (SynchronizedReader_t1462 * __this, TextReader_t1359 * ___reader, MethodInfo* method)
{
	{
		TextReader__ctor_m7730(__this, /*hidden argument*/&TextReader__ctor_m7730_MethodInfo);
		__this->___reader_1 = ___reader;
		return;
	}
}
// System.Int32 System.IO.SynchronizedReader::Peek()
extern MethodInfo SynchronizedReader_Peek_m7741_MethodInfo;
extern "C" int32_t SynchronizedReader_Peek_m7741 (SynchronizedReader_t1462 * __this, MethodInfo* method)
{
	SynchronizedReader_t1462 * V_0 = {0};
	int32_t V_1 = 0;
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
			TextReader_t1359 * L_0 = (__this->___reader_1);
			NullCheck(L_0);
			int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&TextReader_Peek_m7734_MethodInfo, L_0);
			V_1 = L_1;
			// IL_0014: leave.s IL_001f
			leaveInstructions[0] = 0x1F; // 1
			THROW_SENTINEL(IL_001f);
			// finally target depth: 1
		}

IL_0016:
		{
			// IL_0016: leave.s IL_001f
			leaveInstructions[0] = 0x1F; // 1
			THROW_SENTINEL(IL_001f);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0018;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0018;
	}

IL_0018:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1F:
				goto IL_001f;
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

IL_001f:
	{
		return V_1;
	}
}
// System.String System.IO.SynchronizedReader::ReadLine()
extern MethodInfo SynchronizedReader_ReadLine_m7742_MethodInfo;
extern "C" String_t* SynchronizedReader_ReadLine_m7742 (SynchronizedReader_t1462 * __this, MethodInfo* method)
{
	SynchronizedReader_t1462 * V_0 = {0};
	String_t* V_1 = {0};
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
			TextReader_t1359 * L_0 = (__this->___reader_1);
			NullCheck(L_0);
			String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TextReader_ReadLine_m7737_MethodInfo, L_0);
			V_1 = L_1;
			// IL_0014: leave.s IL_001f
			leaveInstructions[0] = 0x1F; // 1
			THROW_SENTINEL(IL_001f);
			// finally target depth: 1
		}

IL_0016:
		{
			// IL_0016: leave.s IL_001f
			leaveInstructions[0] = 0x1F; // 1
			THROW_SENTINEL(IL_001f);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0018;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0018;
	}

IL_0018:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1F:
				goto IL_001f;
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

IL_001f:
	{
		return V_1;
	}
}
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern MethodInfo SynchronizedReader_ReadToEnd_m7743_MethodInfo;
extern "C" String_t* SynchronizedReader_ReadToEnd_m7743 (SynchronizedReader_t1462 * __this, MethodInfo* method)
{
	SynchronizedReader_t1462 * V_0 = {0};
	String_t* V_1 = {0};
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
			TextReader_t1359 * L_0 = (__this->___reader_1);
			NullCheck(L_0);
			String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TextReader_ReadToEnd_m7738_MethodInfo, L_0);
			V_1 = L_1;
			// IL_0014: leave.s IL_001f
			leaveInstructions[0] = 0x1F; // 1
			THROW_SENTINEL(IL_001f);
			// finally target depth: 1
		}

IL_0016:
		{
			// IL_0016: leave.s IL_001f
			leaveInstructions[0] = 0x1F; // 1
			THROW_SENTINEL(IL_001f);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0018;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0018;
	}

IL_0018:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1F:
				goto IL_001f;
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

IL_001f:
	{
		return V_1;
	}
}
// System.Int32 System.IO.SynchronizedReader::Read()
extern MethodInfo SynchronizedReader_Read_m7744_MethodInfo;
extern "C" int32_t SynchronizedReader_Read_m7744 (SynchronizedReader_t1462 * __this, MethodInfo* method)
{
	SynchronizedReader_t1462 * V_0 = {0};
	int32_t V_1 = 0;
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
			TextReader_t1359 * L_0 = (__this->___reader_1);
			NullCheck(L_0);
			int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&TextReader_Read_m7735_MethodInfo, L_0);
			V_1 = L_1;
			// IL_0014: leave.s IL_001f
			leaveInstructions[0] = 0x1F; // 1
			THROW_SENTINEL(IL_001f);
			// finally target depth: 1
		}

IL_0016:
		{
			// IL_0016: leave.s IL_001f
			leaveInstructions[0] = 0x1F; // 1
			THROW_SENTINEL(IL_001f);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0018;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0018;
	}

IL_0018:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1F:
				goto IL_001f;
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

IL_001f:
	{
		return V_1;
	}
}
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo SynchronizedReader_Read_m7745_MethodInfo;
extern "C" int32_t SynchronizedReader_Read_m7745 (SynchronizedReader_t1462 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	SynchronizedReader_t1462 * V_0 = {0};
	int32_t V_1 = 0;
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
			TextReader_t1359 * L_0 = (__this->___reader_1);
			NullCheck(L_0);
			int32_t L_1 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t45*, int32_t, int32_t >::Invoke(&TextReader_Read_m7736_MethodInfo, L_0, ___buffer, ___index, ___count);
			V_1 = L_1;
			// IL_0017: leave.s IL_0022
			leaveInstructions[0] = 0x22; // 1
			THROW_SENTINEL(IL_0022);
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
		return V_1;
	}
}
// System.IO.TextWriter/NullTextWriter
#include "mscorlib_System_IO_TextWriter_NullTextWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NullTextWriter_t1463_il2cpp_TypeInfo;
// System.IO.TextWriter/NullTextWriter
#include "mscorlib_System_IO_TextWriter_NullTextWriterMethodDeclarations.h"



// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern MethodInfo NullTextWriter__ctor_m7746_MethodInfo;
extern "C" void NullTextWriter__ctor_m7746 (NullTextWriter_t1463 * __this, MethodInfo* method)
{
	{
		TextWriter__ctor_m7750(__this, /*hidden argument*/&TextWriter__ctor_m7750_MethodInfo);
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern MethodInfo NullTextWriter_Write_m7747_MethodInfo;
extern "C" void NullTextWriter_Write_m7747 (NullTextWriter_t1463 * __this, String_t* ___s, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern MethodInfo NullTextWriter_Write_m7748_MethodInfo;
extern "C" void NullTextWriter_Write_m7748 (NullTextWriter_t1463 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo NullTextWriter_Write_m7749_MethodInfo;
extern "C" void NullTextWriter_Write_m7749 (NullTextWriter_t1463 * __this, CharU5BU5D_t45* ___value, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		return;
	}
}
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextWriter_t816_il2cpp_TypeInfo;

// System.IO.SynchronizedWriter
#include "mscorlib_System_IO_SynchronizedWriter.h"
extern TypeInfo SynchronizedWriter_t1464_il2cpp_TypeInfo;
// System.IO.SynchronizedWriter
#include "mscorlib_System_IO_SynchronizedWriterMethodDeclarations.h"
extern MethodInfo String_ToCharArray_m134_MethodInfo;
extern MethodInfo TextWriter_Dispose_m7753_MethodInfo;
extern MethodInfo SynchronizedWriter__ctor_m7762_MethodInfo;
extern MethodInfo TextWriter_Write_m7760_MethodInfo;
extern MethodInfo TextWriter_Write_m7758_MethodInfo;
extern MethodInfo TextWriter_Write_m7757_MethodInfo;
extern MethodInfo TextWriter_Write_m7759_MethodInfo;
extern MethodInfo TextWriter_WriteLine_m7761_MethodInfo;


// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m7750 (TextWriter_t816 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		String_t* L_0 = Environment_get_NewLine_m3963(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m3963_MethodInfo);
		NullCheck(L_0);
		CharU5BU5D_t45* L_1 = String_ToCharArray_m134(L_0, /*hidden argument*/&String_ToCharArray_m134_MethodInfo);
		__this->___CoreNewLine_0 = L_1;
		return;
	}
}
// System.Void System.IO.TextWriter::.cctor()
extern MethodInfo TextWriter__cctor_m7751_MethodInfo;
extern "C" void TextWriter__cctor_m7751 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullTextWriter_t1463 * L_0 = (NullTextWriter_t1463 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullTextWriter_t1463_il2cpp_TypeInfo));
		NullTextWriter__ctor_m7746(L_0, /*hidden argument*/&NullTextWriter__ctor_m7746_MethodInfo);
		((TextWriter_t816_StaticFields*)InitializedTypeInfo(&TextWriter_t816_il2cpp_TypeInfo)->static_fields)->___Null_1 = L_0;
		return;
	}
}
// System.Void System.IO.TextWriter::Close()
extern MethodInfo TextWriter_Close_m7752_MethodInfo;
extern "C" void TextWriter_Close_m7752 (TextWriter_t816 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&TextWriter_Dispose_m7753_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m7753 (TextWriter_t816 * __this, bool ___disposing, MethodInfo* method)
{
	{
		if (!___disposing)
		{
			goto IL_0009;
		}
	}
	{
		GC_SuppressFinalize_m5619(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5619_MethodInfo);
	}

IL_0009:
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Dispose()
extern MethodInfo TextWriter_Dispose_m7754_MethodInfo;
extern "C" void TextWriter_Dispose_m7754 (TextWriter_t816 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&TextWriter_Dispose_m7753_MethodInfo, __this, 1);
		GC_SuppressFinalize_m5619(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5619_MethodInfo);
		return;
	}
}
// System.Void System.IO.TextWriter::Flush()
extern MethodInfo TextWriter_Flush_m7755_MethodInfo;
extern "C" void TextWriter_Flush_m7755 (TextWriter_t816 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern MethodInfo TextWriter_Synchronized_m7756_MethodInfo;
extern "C" TextWriter_t816 * TextWriter_Synchronized_m7756 (Object_t * __this /* static, unused */, TextWriter_t816 * ___writer, bool ___neverClose, MethodInfo* method)
{
	{
		if (___writer)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1730, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (!((SynchronizedWriter_t1464 *)IsInst(___writer, InitializedTypeInfo(&SynchronizedWriter_t1464_il2cpp_TypeInfo))))
		{
			goto IL_0018;
		}
	}
	{
		return ___writer;
	}

IL_0018:
	{
		SynchronizedWriter_t1464 * L_1 = (SynchronizedWriter_t1464 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SynchronizedWriter_t1464_il2cpp_TypeInfo));
		SynchronizedWriter__ctor_m7762(L_1, ___writer, ___neverClose, /*hidden argument*/&SynchronizedWriter__ctor_m7762_MethodInfo);
		return L_1;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m7757 (TextWriter_t816 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m7758 (TextWriter_t816 * __this, CharU5BU5D_t45* ___buffer, MethodInfo* method)
{
	{
		if (___buffer)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		NullCheck(___buffer);
		VirtActionInvoker3< CharU5BU5D_t45*, int32_t, int32_t >::Invoke(&TextWriter_Write_m7760_MethodInfo, __this, ___buffer, 0, (((int32_t)(((Array_t *)___buffer)->max_length))));
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m7759 (TextWriter_t816 * __this, String_t* ___value, MethodInfo* method)
{
	{
		if (!___value)
		{
			goto IL_000f;
		}
	}
	{
		NullCheck(___value);
		CharU5BU5D_t45* L_0 = String_ToCharArray_m134(___value, /*hidden argument*/&String_ToCharArray_m134_MethodInfo);
		VirtActionInvoker1< CharU5BU5D_t45* >::Invoke(&TextWriter_Write_m7758_MethodInfo, __this, L_0);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void TextWriter_Write_m7760 (TextWriter_t816 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		if (___buffer)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if ((((int32_t)___index) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		NullCheck(___buffer);
		if ((((int32_t)___index) <= ((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length))))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentOutOfRangeException_t786 * L_1 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_1, (String_t*) &_stringLiteral405, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0023:
	{
		if ((((int32_t)___count) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		NullCheck(___buffer);
		if ((((int32_t)___index) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___buffer)->max_length)))-(int32_t)___count)))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		ArgumentOutOfRangeException_t786 * L_2 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3870(L_2, (String_t*) &_stringLiteral489, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3870_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_003a:
	{
		goto IL_0053;
	}

IL_003c:
	{
		NullCheck(___buffer);
		IL2CPP_ARRAY_BOUNDS_CHECK(___buffer, ___index);
		int32_t L_3 = ___index;
		VirtActionInvoker1< uint16_t >::Invoke(&TextWriter_Write_m7757_MethodInfo, __this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(___buffer, L_3)));
		___count = ((int32_t)((int32_t)___count-(int32_t)1));
		___index = ((int32_t)((int32_t)___index+(int32_t)1));
	}

IL_0053:
	{
		if ((((int32_t)___count) > ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m7761 (TextWriter_t816 * __this, MethodInfo* method)
{
	{
		CharU5BU5D_t45* L_0 = (__this->___CoreNewLine_0);
		VirtActionInvoker1< CharU5BU5D_t45* >::Invoke(&TextWriter_Write_m7758_MethodInfo, __this, L_0);
		return;
	}
}
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern MethodInfo TextWriter_WriteLine_m4113_MethodInfo;
extern "C" void TextWriter_WriteLine_m4113 (TextWriter_t816 * __this, String_t* ___value, MethodInfo* method)
{
	{
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_Write_m7759_MethodInfo, __this, ___value);
		VirtActionInvoker0::Invoke(&TextWriter_WriteLine_m7761_MethodInfo, __this);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m7762 (SynchronizedWriter_t1464 * __this, TextWriter_t816 * ___writer, bool ___neverClose, MethodInfo* method)
{
	{
		TextWriter__ctor_m7750(__this, /*hidden argument*/&TextWriter__ctor_m7750_MethodInfo);
		__this->___writer_2 = ___writer;
		__this->___neverClose_3 = ___neverClose;
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Close()
extern MethodInfo SynchronizedWriter_Close_m7763_MethodInfo;
extern "C" void SynchronizedWriter_Close_m7763 (SynchronizedWriter_t1464 * __this, MethodInfo* method)
{
	SynchronizedWriter_t1464 * V_0 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		bool L_0 = (__this->___neverClose_3);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_0 = __this;
		Monitor_Enter_m3898(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Enter_m3898_MethodInfo);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		TextWriter_t816 * L_1 = (__this->___writer_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&TextWriter_Close_m7752_MethodInfo, L_1);
		// IL_001c: leave.s IL_0025
		leaveInstructions[0] = 0x25; // 1
		THROW_SENTINEL(IL_0025);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_001e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_001e;
	}

IL_001e:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x25:
				goto IL_0025;
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

IL_0025:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Flush()
extern MethodInfo SynchronizedWriter_Flush_m7764_MethodInfo;
extern "C" void SynchronizedWriter_Flush_m7764 (SynchronizedWriter_t1464 * __this, MethodInfo* method)
{
	SynchronizedWriter_t1464 * V_0 = {0};
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
		TextWriter_t816 * L_0 = (__this->___writer_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&TextWriter_Flush_m7755_MethodInfo, L_0);
		// IL_0013: leave.s IL_001c
		leaveInstructions[0] = 0x1C; // 1
		THROW_SENTINEL(IL_001c);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0015;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0015;
	}

IL_0015:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1C:
				goto IL_001c;
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

IL_001c:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern MethodInfo SynchronizedWriter_Write_m7765_MethodInfo;
extern "C" void SynchronizedWriter_Write_m7765 (SynchronizedWriter_t1464 * __this, uint16_t ___value, MethodInfo* method)
{
	SynchronizedWriter_t1464 * V_0 = {0};
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
		TextWriter_t816 * L_0 = (__this->___writer_2);
		NullCheck(L_0);
		VirtActionInvoker1< uint16_t >::Invoke(&TextWriter_Write_m7757_MethodInfo, L_0, ___value);
		// IL_0014: leave.s IL_001d
		leaveInstructions[0] = 0x1D; // 1
		THROW_SENTINEL(IL_001d);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0016;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0016;
	}

IL_0016:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1D:
				goto IL_001d;
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

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern MethodInfo SynchronizedWriter_Write_m7766_MethodInfo;
extern "C" void SynchronizedWriter_Write_m7766 (SynchronizedWriter_t1464 * __this, CharU5BU5D_t45* ___value, MethodInfo* method)
{
	SynchronizedWriter_t1464 * V_0 = {0};
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
		TextWriter_t816 * L_0 = (__this->___writer_2);
		NullCheck(L_0);
		VirtActionInvoker1< CharU5BU5D_t45* >::Invoke(&TextWriter_Write_m7758_MethodInfo, L_0, ___value);
		// IL_0014: leave.s IL_001d
		leaveInstructions[0] = 0x1D; // 1
		THROW_SENTINEL(IL_001d);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0016;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0016;
	}

IL_0016:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1D:
				goto IL_001d;
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

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern MethodInfo SynchronizedWriter_Write_m7767_MethodInfo;
extern "C" void SynchronizedWriter_Write_m7767 (SynchronizedWriter_t1464 * __this, String_t* ___value, MethodInfo* method)
{
	SynchronizedWriter_t1464 * V_0 = {0};
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
		TextWriter_t816 * L_0 = (__this->___writer_2);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_Write_m7759_MethodInfo, L_0, ___value);
		// IL_0014: leave.s IL_001d
		leaveInstructions[0] = 0x1D; // 1
		THROW_SENTINEL(IL_001d);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0016;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0016;
	}

IL_0016:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1D:
				goto IL_001d;
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

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo SynchronizedWriter_Write_m7768_MethodInfo;
extern "C" void SynchronizedWriter_Write_m7768 (SynchronizedWriter_t1464 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	SynchronizedWriter_t1464 * V_0 = {0};
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
		TextWriter_t816 * L_0 = (__this->___writer_2);
		NullCheck(L_0);
		VirtActionInvoker3< CharU5BU5D_t45*, int32_t, int32_t >::Invoke(&TextWriter_Write_m7760_MethodInfo, L_0, ___buffer, ___index, ___count);
		// IL_0016: leave.s IL_001f
		leaveInstructions[0] = 0x1F; // 1
		THROW_SENTINEL(IL_001f);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0018;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0018;
	}

IL_0018:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1F:
				goto IL_001f;
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

IL_001f:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern MethodInfo SynchronizedWriter_WriteLine_m7769_MethodInfo;
extern "C" void SynchronizedWriter_WriteLine_m7769 (SynchronizedWriter_t1464 * __this, MethodInfo* method)
{
	SynchronizedWriter_t1464 * V_0 = {0};
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
		TextWriter_t816 * L_0 = (__this->___writer_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&TextWriter_WriteLine_m7761_MethodInfo, L_0);
		// IL_0013: leave.s IL_001c
		leaveInstructions[0] = 0x1C; // 1
		THROW_SENTINEL(IL_001c);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0015;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0015;
	}

IL_0015:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1C:
				goto IL_001c;
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

IL_001c:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern MethodInfo SynchronizedWriter_WriteLine_m7770_MethodInfo;
extern "C" void SynchronizedWriter_WriteLine_m7770 (SynchronizedWriter_t1464 * __this, String_t* ___value, MethodInfo* method)
{
	SynchronizedWriter_t1464 * V_0 = {0};
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
		TextWriter_t816 * L_0 = (__this->___writer_2);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_WriteLine_m4113_MethodInfo, L_0, ___value);
		// IL_0014: leave.s IL_001d
		leaveInstructions[0] = 0x1D; // 1
		THROW_SENTINEL(IL_001d);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0016;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t140 *)e.ex;
		goto IL_0016;
	}

IL_0016:
	{ // begin finally (depth: 1)
		Monitor_Exit_m3899(NULL /*static, unused*/, V_0, /*hidden argument*/&Monitor_Exit_m3899_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1D:
				goto IL_001d;
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

IL_001d:
	{
		return;
	}
}
// System.IO.UnexceptionalStreamReader
#include "mscorlib_System_IO_UnexceptionalStreamReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnexceptionalStreamReader_t1465_il2cpp_TypeInfo;
// System.IO.UnexceptionalStreamReader
#include "mscorlib_System_IO_UnexceptionalStreamReaderMethodDeclarations.h"

extern TypeInfo BooleanU5BU5D_t650_il2cpp_TypeInfo;
extern Il2CppType BooleanU5BU5D_t650_0_0_0;
extern MethodInfo UnexceptionalStreamReader_CheckEOL_m7776_MethodInfo;


// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo UnexceptionalStreamReader__ctor_m7771_MethodInfo;
extern "C" void UnexceptionalStreamReader__ctor_m7771 (UnexceptionalStreamReader_t1465 * __this, Stream_t1426 * ___stream, Encoding_t805 * ___encoding, MethodInfo* method)
{
	{
		StreamReader__ctor_m7688(__this, ___stream, ___encoding, /*hidden argument*/&StreamReader__ctor_m7688_MethodInfo);
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
extern MethodInfo UnexceptionalStreamReader__cctor_m7772_MethodInfo;
extern TypeInfo* BooleanU5BU5D_t650_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamReader__cctor_m7772 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool UnexceptionalStreamReader__cctor_m7772_init;
	if (!UnexceptionalStreamReader__cctor_m7772_init)
	{
		BooleanU5BU5D_t650_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&BooleanU5BU5D_t650_0_0_0);
		UnexceptionalStreamReader__cctor_m7772_init = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Environment_get_NewLine_m3963(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m3963_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m133(L_0, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14 = ((BooleanU5BU5D_t650*)SZArrayNew(BooleanU5BU5D_t650_il2cpp_TypeInfo_var, L_1));
		String_t* L_2 = Environment_get_NewLine_m3963(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m3963_MethodInfo);
		V_0 = L_2;
		NullCheck(V_0);
		int32_t L_3 = String_get_Length_m133(V_0, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if ((((uint32_t)L_3) != ((uint32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		NullCheck(V_0);
		uint16_t L_4 = String_get_Chars_m2591(V_0, 0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newlineChar_15 = L_4;
	}

IL_002f:
	{
		return;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
extern MethodInfo UnexceptionalStreamReader_Peek_m7773_MethodInfo;
extern "C" int32_t UnexceptionalStreamReader_Peek_m7773 (UnexceptionalStreamReader_t1465 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = StreamReader_Peek_m7697(__this, /*hidden argument*/&StreamReader_Peek_m7697_MethodInfo);
			V_0 = L_0;
			// IL_0007: leave.s IL_0010
			goto IL_0010;
		}

IL_0009:
		{
			// IL_0009: leave.s IL_000e
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1433_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_000b;
		throw e;
	}

IL_000b:
	{ // begin catch(System.IO.IOException)
		// IL_000c: leave.s IL_000e
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		return V_0;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
extern MethodInfo UnexceptionalStreamReader_Read_m7774_MethodInfo;
extern "C" int32_t UnexceptionalStreamReader_Read_m7774 (UnexceptionalStreamReader_t1465 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = StreamReader_Read_m7698(__this, /*hidden argument*/&StreamReader_Read_m7698_MethodInfo);
			V_0 = L_0;
			// IL_0007: leave.s IL_0010
			goto IL_0010;
		}

IL_0009:
		{
			// IL_0009: leave.s IL_000e
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1433_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_000b;
		throw e;
	}

IL_000b:
	{ // begin catch(System.IO.IOException)
		// IL_000c: leave.s IL_000e
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		return V_0;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo UnexceptionalStreamReader_Read_m7775_MethodInfo;
extern "C" int32_t UnexceptionalStreamReader_Read_m7775 (UnexceptionalStreamReader_t1465 * __this, CharU5BU5D_t45* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (___dest_buffer)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1731, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if ((((int32_t)___index) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_1 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_1, (String_t*) &_stringLiteral405, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0022:
	{
		if ((((int32_t)___count) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_t786 * L_2 = (ArgumentOutOfRangeException_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t786_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3864(L_2, (String_t*) &_stringLiteral489, (String_t*) &_stringLiteral982, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3864_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0036:
	{
		NullCheck(___dest_buffer);
		if ((((int32_t)___index) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)___dest_buffer)->max_length)))-(int32_t)___count)))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_3, (String_t*) &_stringLiteral1732, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0049:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo));
		V_1 = (((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newlineChar_15);
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0053:
		{
			int32_t L_4 = StreamReader_Read_m7698(__this, /*hidden argument*/&StreamReader_Read_m7698_MethodInfo);
			V_2 = L_4;
			if ((((int32_t)V_2) >= ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_005e:
		{
			goto IL_0097;
		}

IL_0060:
		{
			V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
			___count = ((int32_t)((int32_t)___count-(int32_t)1));
			NullCheck(___dest_buffer);
			IL2CPP_ARRAY_BOUNDS_CHECK(___dest_buffer, ___index);
			*((uint16_t*)(uint16_t*)SZArrayLdElema(___dest_buffer, ___index)) = (uint16_t)(((uint16_t)V_2));
			if (!V_1)
			{
				goto IL_007e;
			}
		}

IL_0073:
		{
			if ((((uint32_t)(((uint16_t)V_2))) != ((uint32_t)V_1)))
			{
				goto IL_007c;
			}
		}

IL_0078:
		{
			V_3 = V_0;
			// IL_007a: leave.s IL_009e
			goto IL_009e;
		}

IL_007c:
		{
			goto IL_008c;
		}

IL_007e:
		{
			bool L_5 = UnexceptionalStreamReader_CheckEOL_m7776(__this, (((uint16_t)V_2)), /*hidden argument*/&UnexceptionalStreamReader_CheckEOL_m7776_MethodInfo);
			if (!L_5)
			{
				goto IL_008c;
			}
		}

IL_0088:
		{
			V_3 = V_0;
			// IL_008a: leave.s IL_009e
			goto IL_009e;
		}

IL_008c:
		{
			___index = ((int32_t)((int32_t)___index+(int32_t)1));
		}

IL_0093:
		{
			if ((((int32_t)___count) > ((int32_t)0)))
			{
				goto IL_0053;
			}
		}

IL_0097:
		{
			// IL_0097: leave.s IL_009c
			goto IL_009c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1433_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0099;
		throw e;
	}

IL_0099:
	{ // begin catch(System.IO.IOException)
		// IL_009a: leave.s IL_009c
		goto IL_009c;
	} // end catch (depth: 1)

IL_009c:
	{
		return V_0;
	}

IL_009e:
	{
		return V_3;
	}
}
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
extern "C" bool UnexceptionalStreamReader_CheckEOL_m7776 (UnexceptionalStreamReader_t1465 * __this, uint16_t ___current, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo));
		NullCheck((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14));
		IL2CPP_ARRAY_BOUNDS_CHECK((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14), V_0);
		int32_t L_0 = V_0;
		if ((*(uint8_t*)(bool*)SZArrayLdElema((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14), L_0)))
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_1 = Environment_get_NewLine_m3963(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m3963_MethodInfo);
		NullCheck(L_1);
		uint16_t L_2 = String_get_Chars_m2591(L_1, V_0, /*hidden argument*/&String_get_Chars_m2591_MethodInfo);
		if ((((uint32_t)___current) != ((uint32_t)L_2)))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo));
		NullCheck((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14));
		IL2CPP_ARRAY_BOUNDS_CHECK((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14), V_0);
		*((bool*)(bool*)SZArrayLdElema((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14), V_0)) = (bool)1;
		NullCheck((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14));
		return ((((int32_t)V_0) == ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)(((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14))->max_length)))-(int32_t)1))))? 1 : 0);
	}

IL_0030:
	{
		goto IL_0040;
	}

IL_0032:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo));
		NullCheck((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14));
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((Array_t *)(((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14))->max_length))))))
		{
			goto IL_0004;
		}
	}

IL_0040:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo));
		NullCheck((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14));
		IL2CPP_ARRAY_BOUNDS_CHECK((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14), V_1);
		*((bool*)(bool*)SZArrayLdElema((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14), V_1)) = (bool)0;
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0050:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo));
		NullCheck((((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14));
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)(((UnexceptionalStreamReader_t1465_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1465_il2cpp_TypeInfo)->static_fields)->___newline_14))->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		return 0;
	}
}
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
extern MethodInfo UnexceptionalStreamReader_ReadLine_m7777_MethodInfo;
extern "C" String_t* UnexceptionalStreamReader_ReadLine_m7777 (UnexceptionalStreamReader_t1465 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = StreamReader_ReadLine_m7701(__this, /*hidden argument*/&StreamReader_ReadLine_m7701_MethodInfo);
			V_0 = L_0;
			// IL_0007: leave.s IL_0010
			goto IL_0010;
		}

IL_0009:
		{
			// IL_0009: leave.s IL_000e
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1433_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_000b;
		throw e;
	}

IL_000b:
	{ // begin catch(System.IO.IOException)
		// IL_000c: leave.s IL_000e
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (String_t*)NULL;
	}

IL_0010:
	{
		return V_0;
	}
}
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
extern MethodInfo UnexceptionalStreamReader_ReadToEnd_m7778_MethodInfo;
extern "C" String_t* UnexceptionalStreamReader_ReadToEnd_m7778 (UnexceptionalStreamReader_t1465 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = StreamReader_ReadToEnd_m7702(__this, /*hidden argument*/&StreamReader_ReadToEnd_m7702_MethodInfo);
			V_0 = L_0;
			// IL_0007: leave.s IL_0010
			goto IL_0010;
		}

IL_0009:
		{
			// IL_0009: leave.s IL_000e
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1433_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_000b;
		throw e;
	}

IL_000b:
	{ // begin catch(System.IO.IOException)
		// IL_000c: leave.s IL_000e
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (String_t*)NULL;
	}

IL_0010:
	{
		return V_0;
	}
}
// System.IO.UnexceptionalStreamWriter
#include "mscorlib_System_IO_UnexceptionalStreamWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnexceptionalStreamWriter_t1466_il2cpp_TypeInfo;
// System.IO.UnexceptionalStreamWriter
#include "mscorlib_System_IO_UnexceptionalStreamWriterMethodDeclarations.h"



// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo UnexceptionalStreamWriter__ctor_m7779_MethodInfo;
extern "C" void UnexceptionalStreamWriter__ctor_m7779 (UnexceptionalStreamWriter_t1466 * __this, Stream_t1426 * ___stream, Encoding_t805 * ___encoding, MethodInfo* method)
{
	{
		StreamWriter__ctor_m7703(__this, ___stream, ___encoding, /*hidden argument*/&StreamWriter__ctor_m7703_MethodInfo);
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern MethodInfo UnexceptionalStreamWriter_Flush_m7780_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Flush_m7780 (UnexceptionalStreamWriter_t1466 * __this, MethodInfo* method)
{
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		StreamWriter_Flush_m7709(__this, /*hidden argument*/&StreamWriter_Flush_m7709_MethodInfo);
		// IL_0006: leave.s IL_000b
		goto IL_000b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0008;
		throw e;
	}

IL_0008:
	{ // begin catch(System.Exception)
		// IL_0009: leave.s IL_000b
		goto IL_000b;
	} // end catch (depth: 1)

IL_000b:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo UnexceptionalStreamWriter_Write_m7781_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m7781 (UnexceptionalStreamWriter_t1466 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		StreamWriter_Write_m7712(__this, ___buffer, ___index, ___count, /*hidden argument*/&StreamWriter_Write_m7712_MethodInfo);
		// IL_0009: leave.s IL_000e
		goto IL_000e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_000b;
		throw e;
	}

IL_000b:
	{ // begin catch(System.Exception)
		// IL_000c: leave.s IL_000e
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern MethodInfo UnexceptionalStreamWriter_Write_m7782_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m7782 (UnexceptionalStreamWriter_t1466 * __this, uint16_t ___value, MethodInfo* method)
{
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		StreamWriter_Write_m7715(__this, ___value, /*hidden argument*/&StreamWriter_Write_m7715_MethodInfo);
		// IL_0007: leave.s IL_000c
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0009;
		throw e;
	}

IL_0009:
	{ // begin catch(System.Exception)
		// IL_000a: leave.s IL_000c
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern MethodInfo UnexceptionalStreamWriter_Write_m7783_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m7783 (UnexceptionalStreamWriter_t1466 * __this, CharU5BU5D_t45* ___value, MethodInfo* method)
{
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		StreamWriter_Write_m7716(__this, ___value, /*hidden argument*/&StreamWriter_Write_m7716_MethodInfo);
		// IL_0007: leave.s IL_000c
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0009;
		throw e;
	}

IL_0009:
	{ // begin catch(System.Exception)
		// IL_000a: leave.s IL_000c
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern MethodInfo UnexceptionalStreamWriter_Write_m7784_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m7784 (UnexceptionalStreamWriter_t1466 * __this, String_t* ___value, MethodInfo* method)
{
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		StreamWriter_Write_m7717(__this, ___value, /*hidden argument*/&StreamWriter_Write_m7717_MethodInfo);
		// IL_0007: leave.s IL_000c
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0009;
		throw e;
	}

IL_0009:
	{ // begin catch(System.Exception)
		// IL_000a: leave.s IL_000c
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyBuilder_t1468_il2cpp_TypeInfo;
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderMethodDeclarations.h"

// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilder.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongName.h"
extern TypeInfo ModuleU5BU5D_t1469_il2cpp_TypeInfo;
extern TypeInfo Module_t1259_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Assembly_t795_il2cpp_TypeInfo;
extern TypeInfo AssemblyName_t1470_il2cpp_TypeInfo;
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongNameMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"
extern Il2CppType ModuleU5BU5D_t1469_0_0_0;
extern MethodInfo AssemblyBuilder_not_supported_m7788_MethodInfo;
extern MethodInfo Array_Clone_m3903_MethodInfo;
extern MethodInfo Assembly_UnprotectedGetName_m7993_MethodInfo;
extern MethodInfo StrongName_get_PublicKey_m7007_MethodInfo;
extern MethodInfo AssemblyName_SetPublicKey_m8011_MethodInfo;
extern MethodInfo StrongName_get_PublicKeyToken_m7008_MethodInfo;
extern MethodInfo AssemblyName_SetPublicKeyToken_m8012_MethodInfo;


// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern MethodInfo AssemblyBuilder_get_Location_m7785_MethodInfo;
extern "C" String_t* AssemblyBuilder_get_Location_m7785 (AssemblyBuilder_t1468 * __this, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = AssemblyBuilder_not_supported_m7788(__this, /*hidden argument*/&AssemblyBuilder_not_supported_m7788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern MethodInfo AssemblyBuilder_GetModulesInternal_m7786_MethodInfo;
extern TypeInfo* ModuleU5BU5D_t1469_il2cpp_TypeInfo_var;
extern "C" ModuleU5BU5D_t1469* AssemblyBuilder_GetModulesInternal_m7786 (AssemblyBuilder_t1468 * __this, MethodInfo* method)
{
	static bool AssemblyBuilder_GetModulesInternal_m7786_init;
	if (!AssemblyBuilder_GetModulesInternal_m7786_init)
	{
		ModuleU5BU5D_t1469_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ModuleU5BU5D_t1469_0_0_0);
		AssemblyBuilder_GetModulesInternal_m7786_init = true;
	}
	{
		ModuleBuilderU5BU5D_t1467* L_0 = (__this->___modules_10);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ModuleU5BU5D_t1469*)SZArrayNew(ModuleU5BU5D_t1469_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		ModuleBuilderU5BU5D_t1467* L_1 = (__this->___modules_10);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Array_Clone_m3903_MethodInfo, L_1);
		return ((ModuleU5BU5D_t1469*)Castclass(L_2, ModuleU5BU5D_t1469_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern MethodInfo AssemblyBuilder_get_IsCompilerContext_m7787_MethodInfo;
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m7787 (AssemblyBuilder_t1468 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_compiler_context_14);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t140 * AssemblyBuilder_not_supported_m7788 (AssemblyBuilder_t1468 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1733, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		return L_0;
	}
}
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern MethodInfo AssemblyBuilder_UnprotectedGetName_m7789_MethodInfo;
extern "C" AssemblyName_t1470 * AssemblyBuilder_UnprotectedGetName_m7789 (AssemblyBuilder_t1468 * __this, MethodInfo* method)
{
	AssemblyName_t1470 * V_0 = {0};
	{
		AssemblyName_t1470 * L_0 = Assembly_UnprotectedGetName_m7993(__this, /*hidden argument*/&Assembly_UnprotectedGetName_m7993_MethodInfo);
		V_0 = L_0;
		StrongName_t1352 * L_1 = (__this->___sn_13);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		StrongName_t1352 * L_2 = (__this->___sn_13);
		NullCheck(L_2);
		ByteU5BU5D_t13* L_3 = StrongName_get_PublicKey_m7007(L_2, /*hidden argument*/&StrongName_get_PublicKey_m7007_MethodInfo);
		NullCheck(V_0);
		AssemblyName_SetPublicKey_m8011(V_0, L_3, /*hidden argument*/&AssemblyName_SetPublicKey_m8011_MethodInfo);
		StrongName_t1352 * L_4 = (__this->___sn_13);
		NullCheck(L_4);
		ByteU5BU5D_t13* L_5 = StrongName_get_PublicKeyToken_m7008(L_4, /*hidden argument*/&StrongName_get_PublicKeyToken_m7008_MethodInfo);
		NullCheck(V_0);
		AssemblyName_SetPublicKeyToken_m8012(V_0, L_5, /*hidden argument*/&AssemblyName_SetPublicKeyToken_m8012_MethodInfo);
	}

IL_0031:
	{
		return V_0;
	}
}
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ConstructorBuilder_t1473_il2cpp_TypeInfo;
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilderMethodDeclarations.h"

// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilder.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
extern TypeInfo ConstructorInfo_t1131_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t870_il2cpp_TypeInfo;
extern TypeInfo TypeBuilder_t1471_il2cpp_TypeInfo;
extern TypeInfo ModuleBuilder_t1481_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t887_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t888_il2cpp_TypeInfo;
extern TypeInfo MonoCustomAttrs_t1821_il2cpp_TypeInfo;
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilderMethodDeclarations.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_ModuleMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrsMethodDeclarations.h"
extern Il2CppType ParameterInfoU5BU5D_t887_0_0_0;
extern MethodInfo ConstructorBuilder_not_supported_m7807_MethodInfo;
extern MethodInfo MemberInfo_get_Module_m6527_MethodInfo;
extern MethodInfo ConstructorBuilder_get_TypeBuilder_m7791_MethodInfo;
extern MethodInfo TypeBuilder_get_Module_m7935_MethodInfo;
extern MethodInfo Module_get_Assembly_m8087_MethodInfo;
extern MethodInfo TypeBuilder_get_is_created_m7963_MethodInfo;
extern MethodInfo ConstructorBuilder_get_IsCompilerContext_m7806_MethodInfo;
extern MethodInfo ConstructorBuilder_not_created_m7808_MethodInfo;
extern MethodInfo ConstructorBuilder_GetParametersInternal_m7793_MethodInfo;
extern MethodInfo ParameterInfo__ctor_m8215_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo;
extern MethodInfo TypeBuilder_get_Name_m7936_MethodInfo;


// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern MethodInfo ConstructorBuilder_get_CallingConvention_m7790_MethodInfo;
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m7790 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_4);
		return L_0;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1471 * ConstructorBuilder_get_TypeBuilder_m7791 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern MethodInfo ConstructorBuilder_GetParameters_m7792_MethodInfo;
extern "C" ParameterInfoU5BU5D_t887* ConstructorBuilder_GetParameters_m7792 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m7963(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m7806(__this, /*hidden argument*/&ConstructorBuilder_get_IsCompilerContext_m7806_MethodInfo);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t140 * L_3 = ConstructorBuilder_not_created_m7808(__this, /*hidden argument*/&ConstructorBuilder_not_created_m7808_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ParameterInfoU5BU5D_t887* L_4 = ConstructorBuilder_GetParametersInternal_m7793(__this, /*hidden argument*/&ConstructorBuilder_GetParametersInternal_m7793_MethodInfo);
		return L_4;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern TypeInfo* ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t887* ConstructorBuilder_GetParametersInternal_m7793 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	static bool ConstructorBuilder_GetParametersInternal_m7793_init;
	if (!ConstructorBuilder_GetParametersInternal_m7793_init)
	{
		ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t887_0_0_0);
		ConstructorBuilder_GetParametersInternal_m7793_init = true;
	}
	ParameterInfoU5BU5D_t887* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ParameterInfoU5BU5D_t887* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	ParameterInfoU5BU5D_t887* G_B4_1 = {0};
	ParameterBuilder_t1482 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ParameterInfoU5BU5D_t887* G_B6_2 = {0};
	{
		TypeU5BU5D_t138* L_0 = (__this->___parameters_2);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ParameterInfoU5BU5D_t887*)SZArrayNew(ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		TypeU5BU5D_t138* L_1 = (__this->___parameters_2);
		NullCheck(L_1);
		V_0 = ((ParameterInfoU5BU5D_t887*)SZArrayNew(ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		ParameterBuilderU5BU5D_t1472* L_2 = (__this->___pinfo_6);
		G_B4_0 = V_1;
		G_B4_1 = V_0;
		if (L_2)
		{
			G_B5_0 = V_1;
			G_B5_1 = V_0;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((ParameterBuilder_t1482 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		ParameterBuilderU5BU5D_t1472* L_3 = (__this->___pinfo_6);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)V_1+(int32_t)1)));
		int32_t L_4 = ((int32_t)((int32_t)V_1+(int32_t)1));
		G_B6_0 = (*(ParameterBuilder_t1482 **)(ParameterBuilder_t1482 **)SZArrayLdElema(L_3, L_4));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		TypeU5BU5D_t138* L_5 = (__this->___parameters_2);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		int32_t L_6 = V_1;
		ParameterInfo_t888 * L_7 = (ParameterInfo_t888 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t888_il2cpp_TypeInfo));
		ParameterInfo__ctor_m8215(L_7, G_B6_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)), __this, ((int32_t)((int32_t)V_1+(int32_t)1)), /*hidden argument*/&ParameterInfo__ctor_m8215_MethodInfo);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_7);
		*((ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (ParameterInfo_t888 *)L_7;
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_004e:
	{
		TypeU5BU5D_t138* L_8 = (__this->___parameters_2);
		NullCheck(L_8);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		return V_0;
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo ConstructorBuilder_Invoke_m7794_MethodInfo;
extern "C" Object_t * ConstructorBuilder_Invoke_m7794 (ConstructorBuilder_t1473 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___parameters, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = ConstructorBuilder_not_supported_m7807(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m7807_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo ConstructorBuilder_Invoke_m7795_MethodInfo;
extern "C" Object_t * ConstructorBuilder_Invoke_m7795 (ConstructorBuilder_t1473 * __this, int32_t ___invokeAttr, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___parameters, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = ConstructorBuilder_not_supported_m7807(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m7807_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern MethodInfo ConstructorBuilder_get_MethodHandle_m7796_MethodInfo;
extern "C" RuntimeMethodHandle_t1474  ConstructorBuilder_get_MethodHandle_m7796 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = ConstructorBuilder_not_supported_m7807(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m7807_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern MethodInfo ConstructorBuilder_get_Attributes_m7797_MethodInfo;
extern "C" int32_t ConstructorBuilder_get_Attributes_m7797 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_3);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern MethodInfo ConstructorBuilder_get_ReflectedType_m7798_MethodInfo;
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m7798 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern MethodInfo ConstructorBuilder_get_DeclaringType_m7799_MethodInfo;
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m7799 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern MethodInfo ConstructorBuilder_get_Name_m7800_MethodInfo;
extern "C" String_t* ConstructorBuilder_get_Name_m7800 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___attrs_3);
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructorInfo_t1131_il2cpp_TypeInfo));
		G_B3_0 = (((ConstructorInfo_t1131_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t1131_il2cpp_TypeInfo)->static_fields)->___TypeConstructorName_1);
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructorInfo_t1131_il2cpp_TypeInfo));
		G_B3_0 = (((ConstructorInfo_t1131_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t1131_il2cpp_TypeInfo)->static_fields)->___ConstructorName_0);
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo ConstructorBuilder_IsDefined_m7801_MethodInfo;
extern "C" bool ConstructorBuilder_IsDefined_m7801 (ConstructorBuilder_t1473 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = ConstructorBuilder_not_supported_m7807(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m7807_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo ConstructorBuilder_GetCustomAttributes_m7802_MethodInfo;
extern "C" ObjectU5BU5D_t137* ConstructorBuilder_GetCustomAttributes_m7802 (ConstructorBuilder_t1473 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m7963(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m7806(__this, /*hidden argument*/&ConstructorBuilder_get_IsCompilerContext_m7806_MethodInfo);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_3 = MonoCustomAttrs_GetCustomAttributes_m9925(NULL /*static, unused*/, __this, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo);
		return L_3;
	}

IL_001d:
	{
		Exception_t140 * L_4 = ConstructorBuilder_not_supported_m7807(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m7807_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo ConstructorBuilder_GetCustomAttributes_m7803_MethodInfo;
extern "C" ObjectU5BU5D_t137* ConstructorBuilder_GetCustomAttributes_m7803 (ConstructorBuilder_t1473 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m7963(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m7806(__this, /*hidden argument*/&ConstructorBuilder_get_IsCompilerContext_m7806_MethodInfo);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_3 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_3;
	}

IL_001e:
	{
		Exception_t140 * L_4 = ConstructorBuilder_not_supported_m7807(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m7807_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern MethodInfo ConstructorBuilder_get_Module_m7804_MethodInfo;
extern "C" Module_t1259 * ConstructorBuilder_get_Module_m7804 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		Module_t1259 * L_0 = MemberInfo_get_Module_m6527(__this, /*hidden argument*/&MemberInfo_get_Module_m6527_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern MethodInfo ConstructorBuilder_ToString_m7805_MethodInfo;
extern "C" String_t* ConstructorBuilder_ToString_m7805 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Name_m7936_MethodInfo, L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m169(NULL /*static, unused*/, (String_t*) &_stringLiteral1734, L_1, (String_t*) &_stringLiteral1735, /*hidden argument*/&String_Concat_m169_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m7806 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	ModuleBuilder_t1481 * V_0 = {0};
	AssemblyBuilder_t1468 * V_1 = {0};
	{
		TypeBuilder_t1471 * L_0 = ConstructorBuilder_get_TypeBuilder_m7791(__this, /*hidden argument*/&ConstructorBuilder_get_TypeBuilder_m7791_MethodInfo);
		NullCheck(L_0);
		Module_t1259 * L_1 = (Module_t1259 *)VirtFuncInvoker0< Module_t1259 * >::Invoke(&TypeBuilder_get_Module_m7935_MethodInfo, L_0);
		V_0 = ((ModuleBuilder_t1481 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1481_il2cpp_TypeInfo)));
		NullCheck(V_0);
		Assembly_t795 * L_2 = Module_get_Assembly_m8087(V_0, /*hidden argument*/&Module_get_Assembly_m8087_MethodInfo);
		V_1 = ((AssemblyBuilder_t1468 *)Castclass(L_2, InitializedTypeInfo(&AssemblyBuilder_t1468_il2cpp_TypeInfo)));
		NullCheck(V_1);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m7787(V_1, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m7787_MethodInfo);
		return L_3;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t140 * ConstructorBuilder_not_supported_m7807 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1733, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t140 * ConstructorBuilder_not_created_m7808 (ConstructorBuilder_t1473 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1736, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EnumBuilder_t1475_il2cpp_TypeInfo;
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilderMethodDeclarations.h"

// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
extern TypeInfo RuntimeTypeHandle_t1258_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t886_il2cpp_TypeInfo;
extern TypeInfo Binder_t1115_il2cpp_TypeInfo;
extern TypeInfo CallingConventions_t1495_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t138_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t1116_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t1117_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfoU5BU5D_t1263_il2cpp_TypeInfo;
extern TypeInfo EventInfo_t1260_il2cpp_TypeInfo;
extern TypeInfo FieldInfo_t1261_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t871_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t885_il2cpp_TypeInfo;
extern MethodInfo TypeBuilder_get_Assembly_m7929_MethodInfo;
extern MethodInfo TypeBuilder_get_AssemblyQualifiedName_m7930_MethodInfo;
extern MethodInfo TypeBuilder_get_BaseType_m7931_MethodInfo;
extern MethodInfo TypeBuilder_get_DeclaringType_m7932_MethodInfo;
extern MethodInfo TypeBuilder_get_FullName_m7934_MethodInfo;
extern MethodInfo TypeBuilder_get_Namespace_m7937_MethodInfo;
extern MethodInfo TypeBuilder_get_ReflectedType_m7938_MethodInfo;
extern MethodInfo TypeBuilder_get_TypeHandle_m7961_MethodInfo;
extern MethodInfo Type_GetConstructor_m6513_MethodInfo;
extern MethodInfo TypeBuilder_GetConstructors_m7943_MethodInfo;
extern MethodInfo TypeBuilder_GetCustomAttributes_m7941_MethodInfo;
extern MethodInfo TypeBuilder_GetCustomAttributes_m7942_MethodInfo;
extern MethodInfo TypeBuilder_GetElementType_m7945_MethodInfo;
extern MethodInfo TypeBuilder_GetEvent_m7946_MethodInfo;
extern MethodInfo TypeBuilder_GetField_m7947_MethodInfo;
extern MethodInfo TypeBuilder_GetInterfaces_m7948_MethodInfo;
extern MethodInfo Type_GetMethod_m6502_MethodInfo;
extern MethodInfo Type_GetMethod_m6503_MethodInfo;
extern MethodInfo TypeBuilder_GetMethods_m7950_MethodInfo;
extern MethodInfo EnumBuilder_CreateNotSupportedException_m7840_MethodInfo;
extern MethodInfo Type_get_HasElementType_m6474_MethodInfo;
extern MethodInfo TypeBuilder_InvokeMember_m7954_MethodInfo;
extern MethodInfo TypeBuilder_IsDefined_m7940_MethodInfo;


// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern MethodInfo EnumBuilder_get_Assembly_m7809_MethodInfo;
extern "C" Assembly_t795 * EnumBuilder_get_Assembly_m7809 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Assembly_t795 * L_1 = (Assembly_t795 *)VirtFuncInvoker0< Assembly_t795 * >::Invoke(&TypeBuilder_get_Assembly_m7929_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern MethodInfo EnumBuilder_get_AssemblyQualifiedName_m7810_MethodInfo;
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m7810 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_AssemblyQualifiedName_m7930_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern MethodInfo EnumBuilder_get_BaseType_m7811_MethodInfo;
extern "C" Type_t * EnumBuilder_get_BaseType_m7811 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_get_BaseType_m7931_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern MethodInfo EnumBuilder_get_DeclaringType_m7812_MethodInfo;
extern "C" Type_t * EnumBuilder_get_DeclaringType_m7812 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_get_DeclaringType_m7932_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern MethodInfo EnumBuilder_get_FullName_m7813_MethodInfo;
extern "C" String_t* EnumBuilder_get_FullName_m7813 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_FullName_m7934_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern MethodInfo EnumBuilder_get_Module_m7814_MethodInfo;
extern "C" Module_t1259 * EnumBuilder_get_Module_m7814 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Module_t1259 * L_1 = (Module_t1259 *)VirtFuncInvoker0< Module_t1259 * >::Invoke(&TypeBuilder_get_Module_m7935_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern MethodInfo EnumBuilder_get_Name_m7815_MethodInfo;
extern "C" String_t* EnumBuilder_get_Name_m7815 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Name_m7936_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern MethodInfo EnumBuilder_get_Namespace_m7816_MethodInfo;
extern "C" String_t* EnumBuilder_get_Namespace_m7816 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Namespace_m7937_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern MethodInfo EnumBuilder_get_ReflectedType_m7817_MethodInfo;
extern "C" Type_t * EnumBuilder_get_ReflectedType_m7817 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_get_ReflectedType_m7938_MethodInfo, L_0);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern MethodInfo EnumBuilder_get_TypeHandle_m7818_MethodInfo;
extern "C" RuntimeTypeHandle_t1258  EnumBuilder_get_TypeHandle_m7818 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		RuntimeTypeHandle_t1258  L_1 = (RuntimeTypeHandle_t1258 )VirtFuncInvoker0< RuntimeTypeHandle_t1258  >::Invoke(&TypeBuilder_get_TypeHandle_m7961_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern MethodInfo EnumBuilder_get_UnderlyingSystemType_m7819_MethodInfo;
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m7819 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____underlyingType_9);
		return L_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern MethodInfo EnumBuilder_GetAttributeFlagsImpl_m7820_MethodInfo;
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m7820 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___attrs_16);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo EnumBuilder_GetConstructorImpl_m7821_MethodInfo;
extern "C" ConstructorInfo_t1131 * EnumBuilder_GetConstructorImpl_m7821 (EnumBuilder_t1475 * __this, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		ConstructorInfo_t1131 * L_1 = (ConstructorInfo_t1131 *)VirtFuncInvoker5< ConstructorInfo_t1131 *, int32_t, Binder_t1115 *, int32_t, TypeU5BU5D_t138*, ParameterModifierU5BU5D_t1116* >::Invoke(&Type_GetConstructor_m6513_MethodInfo, L_0, ___bindingAttr, ___binder, ___callConvention, ___types, ___modifiers);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetConstructors_m7822_MethodInfo;
extern "C" ConstructorInfoU5BU5D_t1263* EnumBuilder_GetConstructors_m7822 (EnumBuilder_t1475 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t1263* L_1 = (ConstructorInfoU5BU5D_t1263*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1263*, int32_t >::Invoke(&TypeBuilder_GetConstructors_m7943_MethodInfo, L_0, ___bindingAttr);
		return L_1;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo EnumBuilder_GetCustomAttributes_m7823_MethodInfo;
extern "C" ObjectU5BU5D_t137* EnumBuilder_GetCustomAttributes_m7823 (EnumBuilder_t1475 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		ObjectU5BU5D_t137* L_1 = (ObjectU5BU5D_t137*)VirtFuncInvoker1< ObjectU5BU5D_t137*, bool >::Invoke(&TypeBuilder_GetCustomAttributes_m7941_MethodInfo, L_0, ___inherit);
		return L_1;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo EnumBuilder_GetCustomAttributes_m7824_MethodInfo;
extern "C" ObjectU5BU5D_t137* EnumBuilder_GetCustomAttributes_m7824 (EnumBuilder_t1475 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		ObjectU5BU5D_t137* L_1 = (ObjectU5BU5D_t137*)VirtFuncInvoker2< ObjectU5BU5D_t137*, Type_t *, bool >::Invoke(&TypeBuilder_GetCustomAttributes_m7942_MethodInfo, L_0, ___attributeType, ___inherit);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern MethodInfo EnumBuilder_GetElementType_m7825_MethodInfo;
extern "C" Type_t * EnumBuilder_GetElementType_m7825 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_GetElementType_m7945_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetEvent_m7826_MethodInfo;
extern "C" EventInfo_t1260 * EnumBuilder_GetEvent_m7826 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		EventInfo_t1260 * L_1 = (EventInfo_t1260 *)VirtFuncInvoker2< EventInfo_t1260 *, String_t*, int32_t >::Invoke(&TypeBuilder_GetEvent_m7946_MethodInfo, L_0, ___name, ___bindingAttr);
		return L_1;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetField_m7827_MethodInfo;
extern "C" FieldInfo_t1261 * EnumBuilder_GetField_m7827 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		FieldInfo_t1261 * L_1 = (FieldInfo_t1261 *)VirtFuncInvoker2< FieldInfo_t1261 *, String_t*, int32_t >::Invoke(&TypeBuilder_GetField_m7947_MethodInfo, L_0, ___name, ___bindingAttr);
		return L_1;
	}
}
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern MethodInfo EnumBuilder_GetInterfaces_m7828_MethodInfo;
extern "C" TypeU5BU5D_t138* EnumBuilder_GetInterfaces_m7828 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		TypeU5BU5D_t138* L_1 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&TypeBuilder_GetInterfaces_m7948_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo EnumBuilder_GetMethodImpl_m7829_MethodInfo;
extern "C" MethodInfo_t871 * EnumBuilder_GetMethodImpl_m7829 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	{
		if (___types)
		{
			goto IL_0012;
		}
	}
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		MethodInfo_t871 * L_1 = (MethodInfo_t871 *)VirtFuncInvoker2< MethodInfo_t871 *, String_t*, int32_t >::Invoke(&Type_GetMethod_m6502_MethodInfo, L_0, ___name, ___bindingAttr);
		return L_1;
	}

IL_0012:
	{
		TypeBuilder_t1471 * L_2 = (__this->____tb_8);
		NullCheck(L_2);
		MethodInfo_t871 * L_3 = (MethodInfo_t871 *)VirtFuncInvoker6< MethodInfo_t871 *, String_t*, int32_t, Binder_t1115 *, int32_t, TypeU5BU5D_t138*, ParameterModifierU5BU5D_t1116* >::Invoke(&Type_GetMethod_m6503_MethodInfo, L_2, ___name, ___bindingAttr, ___binder, ___callConvention, ___types, ___modifiers);
		return L_3;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetMethods_m7830_MethodInfo;
extern "C" MethodInfoU5BU5D_t885* EnumBuilder_GetMethods_m7830 (EnumBuilder_t1475 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		MethodInfoU5BU5D_t885* L_1 = (MethodInfoU5BU5D_t885*)VirtFuncInvoker1< MethodInfoU5BU5D_t885*, int32_t >::Invoke(&TypeBuilder_GetMethods_m7950_MethodInfo, L_0, ___bindingAttr);
		return L_1;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo EnumBuilder_GetPropertyImpl_m7831_MethodInfo;
extern "C" PropertyInfo_t1262 * EnumBuilder_GetPropertyImpl_m7831 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, Type_t * ___returnType, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = EnumBuilder_CreateNotSupportedException_m7840(__this, /*hidden argument*/&EnumBuilder_CreateNotSupportedException_m7840_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern MethodInfo EnumBuilder_HasElementTypeImpl_m7832_MethodInfo;
extern "C" bool EnumBuilder_HasElementTypeImpl_m7832 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6474_MethodInfo, L_0);
		return L_1;
	}
}
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern MethodInfo EnumBuilder_InvokeMember_m7833_MethodInfo;
extern "C" Object_t * EnumBuilder_InvokeMember_m7833 (EnumBuilder_t1475 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1115 * ___binder, Object_t * ___target, ObjectU5BU5D_t137* ___args, ParameterModifierU5BU5D_t1116* ___modifiers, CultureInfo_t791 * ___culture, StringU5BU5D_t17* ___namedParameters, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t1115 *, Object_t *, ObjectU5BU5D_t137*, ParameterModifierU5BU5D_t1116*, CultureInfo_t791 *, StringU5BU5D_t17* >::Invoke(&TypeBuilder_InvokeMember_m7954_MethodInfo, L_0, ___name, ___invokeAttr, ___binder, ___target, ___args, ___modifiers, ___culture, ___namedParameters);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern MethodInfo EnumBuilder_IsArrayImpl_m7834_MethodInfo;
extern "C" bool EnumBuilder_IsArrayImpl_m7834 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern MethodInfo EnumBuilder_IsByRefImpl_m7835_MethodInfo;
extern "C" bool EnumBuilder_IsByRefImpl_m7835 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern MethodInfo EnumBuilder_IsPointerImpl_m7836_MethodInfo;
extern "C" bool EnumBuilder_IsPointerImpl_m7836 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern MethodInfo EnumBuilder_IsPrimitiveImpl_m7837_MethodInfo;
extern "C" bool EnumBuilder_IsPrimitiveImpl_m7837 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern MethodInfo EnumBuilder_IsValueTypeImpl_m7838_MethodInfo;
extern "C" bool EnumBuilder_IsValueTypeImpl_m7838 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo EnumBuilder_IsDefined_m7839_MethodInfo;
extern "C" bool EnumBuilder_IsDefined_m7839 (EnumBuilder_t1475 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(&TypeBuilder_IsDefined_m7940_MethodInfo, L_0, ___attributeType, ___inherit);
		return L_1;
	}
}
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C" Exception_t140 * EnumBuilder_CreateNotSupportedException_m7840 (EnumBuilder_t1475 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1733, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FieldBuilder_t1477_il2cpp_TypeInfo;
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilderMethodDeclarations.h"

// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshal.h"
extern MethodInfo FieldBuilder_CreateNotSupportedException_m7854_MethodInfo;


// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern MethodInfo FieldBuilder_get_Attributes_m7841_MethodInfo;
extern "C" int32_t FieldBuilder_get_Attributes_m7841 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern MethodInfo FieldBuilder_get_DeclaringType_m7842_MethodInfo;
extern "C" Type_t * FieldBuilder_get_DeclaringType_m7842 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern MethodInfo FieldBuilder_get_FieldHandle_m7843_MethodInfo;
extern "C" RuntimeFieldHandle_t1264  FieldBuilder_get_FieldHandle_m7843 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = FieldBuilder_CreateNotSupportedException_m7854(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m7854_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern MethodInfo FieldBuilder_get_FieldType_m7844_MethodInfo;
extern "C" Type_t * FieldBuilder_get_FieldType_m7844 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern MethodInfo FieldBuilder_get_Name_m7845_MethodInfo;
extern "C" String_t* FieldBuilder_get_Name_m7845 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern MethodInfo FieldBuilder_get_ReflectedType_m7846_MethodInfo;
extern "C" Type_t * FieldBuilder_get_ReflectedType_m7846 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo FieldBuilder_GetCustomAttributes_m7847_MethodInfo;
extern "C" ObjectU5BU5D_t137* FieldBuilder_GetCustomAttributes_m7847 (FieldBuilder_t1477 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m7963(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_2 = MonoCustomAttrs_GetCustomAttributes_m9925(NULL /*static, unused*/, __this, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo);
		return L_2;
	}

IL_0015:
	{
		Exception_t140 * L_3 = FieldBuilder_CreateNotSupportedException_m7854(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m7854_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo FieldBuilder_GetCustomAttributes_m7848_MethodInfo;
extern "C" ObjectU5BU5D_t137* FieldBuilder_GetCustomAttributes_m7848 (FieldBuilder_t1477 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m7963(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_2 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_2;
	}

IL_0016:
	{
		Exception_t140 * L_3 = FieldBuilder_CreateNotSupportedException_m7854(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m7854_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern MethodInfo FieldBuilder_GetValue_m7849_MethodInfo;
extern "C" Object_t * FieldBuilder_GetValue_m7849 (FieldBuilder_t1477 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = FieldBuilder_CreateNotSupportedException_m7854(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m7854_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo FieldBuilder_IsDefined_m7850_MethodInfo;
extern "C" bool FieldBuilder_IsDefined_m7850 (FieldBuilder_t1477 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = FieldBuilder_CreateNotSupportedException_m7854(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m7854_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern MethodInfo FieldBuilder_GetFieldOffset_m7851_MethodInfo;
extern "C" int32_t FieldBuilder_GetFieldOffset_m7851 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern MethodInfo FieldBuilder_SetValue_m7852_MethodInfo;
extern "C" void FieldBuilder_SetValue_m7852 (FieldBuilder_t1477 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1115 * ___binder, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = FieldBuilder_CreateNotSupportedException_m7854(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m7854_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern MethodInfo FieldBuilder_get_UMarshal_m7853_MethodInfo;
extern "C" UnmanagedMarshal_t1476 * FieldBuilder_get_UMarshal_m7853 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		UnmanagedMarshal_t1476 * L_0 = (__this->___marshal_info_4);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C" Exception_t140 * FieldBuilder_CreateNotSupportedException_m7854 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1733, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern MethodInfo FieldBuilder_get_Module_m7855_MethodInfo;
extern "C" Module_t1259 * FieldBuilder_get_Module_m7855 (FieldBuilder_t1477 * __this, MethodInfo* method)
{
	{
		Module_t1259 * L_0 = MemberInfo_get_Module_m6527(__this, /*hidden argument*/&MemberInfo_get_Module_m6527_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericTypeParameterBuilder_t1479_il2cpp_TypeInfo;
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilderMethodDeclarations.h"

// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilder.h"
extern TypeInfo MethodBuilder_t1478_il2cpp_TypeInfo;
// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilderMethodDeclarations.h"
extern MethodInfo MethodBuilder_get_DeclaringType_m7905_MethodInfo;
extern MethodInfo GenericTypeParameterBuilder_get_DeclaringType_m7887_MethodInfo;
extern MethodInfo GenericTypeParameterBuilder_not_supported_m7896_MethodInfo;
extern MethodInfo GenericTypeParameterBuilder_get_BaseType_m7879_MethodInfo;
extern MethodInfo Type_IsSubclassOf_m6501_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6487_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m3868_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m701_MethodInfo;
extern MethodInfo Type_Equals_m6491_MethodInfo;
extern MethodInfo Type_GetHashCode_m4285_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5553_MethodInfo;


// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern MethodInfo GenericTypeParameterBuilder_IsSubclassOf_m7856_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsSubclassOf_m7856 (GenericTypeParameterBuilder_t1479 * __this, Type_t * ___c, MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	{
		TypeBuilder_t1471 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1259 * L_1 = (Module_t1259 *)VirtFuncInvoker0< Module_t1259 * >::Invoke(&TypeBuilder_get_Module_m7935_MethodInfo, L_0);
		NullCheck(((ModuleBuilder_t1481 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1481_il2cpp_TypeInfo))));
		AssemblyBuilder_t1468 * L_2 = (((ModuleBuilder_t1481 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1481_il2cpp_TypeInfo)))->___assemblyb_10);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m7787(L_2, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m7787_MethodInfo);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t140 * L_4 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_BaseType_m7879_MethodInfo, __this);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_BaseType_m7879_MethodInfo, __this);
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)___c)))
		{
			goto IL_0044;
		}
	}
	{
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_BaseType_m7879_MethodInfo, __this);
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6501_MethodInfo, L_7, ___c);
		G_B7_0 = ((int32_t)(L_8));
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		return G_B7_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern MethodInfo GenericTypeParameterBuilder_GetAttributeFlagsImpl_m7857_MethodInfo;
extern "C" int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m7857 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1259 * L_1 = (Module_t1259 *)VirtFuncInvoker0< Module_t1259 * >::Invoke(&TypeBuilder_get_Module_m7935_MethodInfo, L_0);
		NullCheck(((ModuleBuilder_t1481 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1481_il2cpp_TypeInfo))));
		AssemblyBuilder_t1468 * L_2 = (((ModuleBuilder_t1481 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1481_il2cpp_TypeInfo)))->___assemblyb_10);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m7787(L_2, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m7787_MethodInfo);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001e:
	{
		Exception_t140 * L_4 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo GenericTypeParameterBuilder_GetConstructorImpl_m7858_MethodInfo;
extern "C" ConstructorInfo_t1131 * GenericTypeParameterBuilder_GetConstructorImpl_m7858 (GenericTypeParameterBuilder_t1479 * __this, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetConstructors_m7859_MethodInfo;
extern "C" ConstructorInfoU5BU5D_t1263* GenericTypeParameterBuilder_GetConstructors_m7859 (GenericTypeParameterBuilder_t1479 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetEvent_m7860_MethodInfo;
extern "C" EventInfo_t1260 * GenericTypeParameterBuilder_GetEvent_m7860 (GenericTypeParameterBuilder_t1479 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetField_m7861_MethodInfo;
extern "C" FieldInfo_t1261 * GenericTypeParameterBuilder_GetField_m7861 (GenericTypeParameterBuilder_t1479 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern MethodInfo GenericTypeParameterBuilder_GetInterfaces_m7862_MethodInfo;
extern "C" TypeU5BU5D_t138* GenericTypeParameterBuilder_GetInterfaces_m7862 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetMethods_m7863_MethodInfo;
extern "C" MethodInfoU5BU5D_t885* GenericTypeParameterBuilder_GetMethods_m7863 (GenericTypeParameterBuilder_t1479 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo GenericTypeParameterBuilder_GetMethodImpl_m7864_MethodInfo;
extern "C" MethodInfo_t871 * GenericTypeParameterBuilder_GetMethodImpl_m7864 (GenericTypeParameterBuilder_t1479 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo GenericTypeParameterBuilder_GetPropertyImpl_m7865_MethodInfo;
extern "C" PropertyInfo_t1262 * GenericTypeParameterBuilder_GetPropertyImpl_m7865 (GenericTypeParameterBuilder_t1479 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, Type_t * ___returnType, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern MethodInfo GenericTypeParameterBuilder_HasElementTypeImpl_m7866_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_HasElementTypeImpl_m7866 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern MethodInfo GenericTypeParameterBuilder_IsAssignableFrom_m7867_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsAssignableFrom_m7867 (GenericTypeParameterBuilder_t1479 * __this, Type_t * ___c, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern MethodInfo GenericTypeParameterBuilder_IsInstanceOfType_m7868_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsInstanceOfType_m7868 (GenericTypeParameterBuilder_t1479 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern MethodInfo GenericTypeParameterBuilder_IsArrayImpl_m7869_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsArrayImpl_m7869 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern MethodInfo GenericTypeParameterBuilder_IsByRefImpl_m7870_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsByRefImpl_m7870 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern MethodInfo GenericTypeParameterBuilder_IsPointerImpl_m7871_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsPointerImpl_m7871 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern MethodInfo GenericTypeParameterBuilder_IsPrimitiveImpl_m7872_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsPrimitiveImpl_m7872 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern MethodInfo GenericTypeParameterBuilder_IsValueTypeImpl_m7873_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsValueTypeImpl_m7873 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = (__this->___base_type_11);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___base_type_11);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6487_MethodInfo, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern MethodInfo GenericTypeParameterBuilder_InvokeMember_m7874_MethodInfo;
extern "C" Object_t * GenericTypeParameterBuilder_InvokeMember_m7874 (GenericTypeParameterBuilder_t1479 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1115 * ___binder, Object_t * ___target, ObjectU5BU5D_t137* ___args, ParameterModifierU5BU5D_t1116* ___modifiers, CultureInfo_t791 * ___culture, StringU5BU5D_t17* ___namedParameters, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern MethodInfo GenericTypeParameterBuilder_GetElementType_m7875_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_GetElementType_m7875 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern MethodInfo GenericTypeParameterBuilder_get_UnderlyingSystemType_m7876_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m7876 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern MethodInfo GenericTypeParameterBuilder_get_Assembly_m7877_MethodInfo;
extern "C" Assembly_t795 * GenericTypeParameterBuilder_get_Assembly_m7877 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Assembly_t795 * L_1 = (Assembly_t795 *)VirtFuncInvoker0< Assembly_t795 * >::Invoke(&TypeBuilder_get_Assembly_m7929_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern MethodInfo GenericTypeParameterBuilder_get_AssemblyQualifiedName_m7878_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m7878 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C" Type_t * GenericTypeParameterBuilder_get_BaseType_m7879 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___base_type_11);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern MethodInfo GenericTypeParameterBuilder_get_FullName_m7880_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_FullName_m7880 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo GenericTypeParameterBuilder_IsDefined_m7881_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsDefined_m7881 (GenericTypeParameterBuilder_t1479 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo GenericTypeParameterBuilder_GetCustomAttributes_m7882_MethodInfo;
extern "C" ObjectU5BU5D_t137* GenericTypeParameterBuilder_GetCustomAttributes_m7882 (GenericTypeParameterBuilder_t1479 * __this, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo GenericTypeParameterBuilder_GetCustomAttributes_m7883_MethodInfo;
extern "C" ObjectU5BU5D_t137* GenericTypeParameterBuilder_GetCustomAttributes_m7883 (GenericTypeParameterBuilder_t1479 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern MethodInfo GenericTypeParameterBuilder_get_Name_m7884_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_Name_m7884 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern MethodInfo GenericTypeParameterBuilder_get_Namespace_m7885_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_Namespace_m7885 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern MethodInfo GenericTypeParameterBuilder_get_Module_m7886_MethodInfo;
extern "C" Module_t1259 * GenericTypeParameterBuilder_get_Module_m7886 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1259 * L_1 = (Module_t1259 *)VirtFuncInvoker0< Module_t1259 * >::Invoke(&TypeBuilder_get_Module_m7935_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C" Type_t * GenericTypeParameterBuilder_get_DeclaringType_m7887 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	Type_t * G_B3_0 = {0};
	{
		MethodBuilder_t1478 * L_0 = (__this->___mbuilder_9);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		MethodBuilder_t1478 * L_1 = (__this->___mbuilder_9);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodBuilder_get_DeclaringType_m7905_MethodInfo, L_1);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		TypeBuilder_t1471 * L_3 = (__this->___tbuilder_8);
		G_B3_0 = ((Type_t *)(L_3));
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern MethodInfo GenericTypeParameterBuilder_get_ReflectedType_m7888_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_get_ReflectedType_m7888 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_DeclaringType_m7887_MethodInfo, __this);
		return L_0;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern MethodInfo GenericTypeParameterBuilder_get_TypeHandle_m7889_MethodInfo;
extern "C" RuntimeTypeHandle_t1258  GenericTypeParameterBuilder_get_TypeHandle_m7889 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = GenericTypeParameterBuilder_not_supported_m7896(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m7896_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern MethodInfo GenericTypeParameterBuilder_GetGenericArguments_m7890_MethodInfo;
extern "C" TypeU5BU5D_t138* GenericTypeParameterBuilder_GetGenericArguments_m7890 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		InvalidOperationException_t784 * L_0 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3868(L_0, /*hidden argument*/&InvalidOperationException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern MethodInfo GenericTypeParameterBuilder_GetGenericTypeDefinition_m7891_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m7891 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		InvalidOperationException_t784 * L_0 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3868(L_0, /*hidden argument*/&InvalidOperationException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern MethodInfo GenericTypeParameterBuilder_get_ContainsGenericParameters_m7892_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m7892 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern MethodInfo GenericTypeParameterBuilder_get_IsGenericParameter_m7893_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_IsGenericParameter_m7893 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern MethodInfo GenericTypeParameterBuilder_get_IsGenericType_m7894_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_IsGenericType_m7894 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern MethodInfo GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m7895_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m7895 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C" Exception_t140 * GenericTypeParameterBuilder_not_supported_m7896 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m701(L_0, /*hidden argument*/&NotSupportedException__ctor_m701_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern MethodInfo GenericTypeParameterBuilder_ToString_m7897_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_ToString_m7897 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern MethodInfo GenericTypeParameterBuilder_Equals_m7898_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_Equals_m7898 (GenericTypeParameterBuilder_t1479 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		bool L_0 = Type_Equals_m6491(__this, ___o, /*hidden argument*/&Type_Equals_m6491_MethodInfo);
		return L_0;
	}
}
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern MethodInfo GenericTypeParameterBuilder_GetHashCode_m7899_MethodInfo;
extern "C" int32_t GenericTypeParameterBuilder_GetHashCode_m7899 (GenericTypeParameterBuilder_t1479 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Type_GetHashCode_m4285(__this, /*hidden argument*/&Type_GetHashCode_m4285_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern MethodInfo GenericTypeParameterBuilder_MakeGenericType_m7900_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_MakeGenericType_m7900 (GenericTypeParameterBuilder_t1479 * __this, TypeU5BU5D_t138* ___typeArguments, MethodInfo* method)
{
	{
		Type_t * L_0 = Type_MakeGenericType_m5553(__this, ___typeArguments, /*hidden argument*/&Type_MakeGenericType_m5553_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppType TypeU5BU5D_t138_0_0_0;
extern MethodInfo MethodBuilder_NotSupported_m7918_MethodInfo;
extern MethodInfo String_Concat_m157_MethodInfo;
extern MethodInfo Object_Equals_m225_MethodInfo;
extern MethodInfo String_GetHashCode_m3889_MethodInfo;


// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern MethodInfo MethodBuilder_get_ContainsGenericParameters_m7901_MethodInfo;
extern "C" bool MethodBuilder_get_ContainsGenericParameters_m7901 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m701(L_0, /*hidden argument*/&NotSupportedException__ctor_m701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern MethodInfo MethodBuilder_get_MethodHandle_m7902_MethodInfo;
extern "C" RuntimeMethodHandle_t1474  MethodBuilder_get_MethodHandle_m7902 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = MethodBuilder_NotSupported_m7918(__this, /*hidden argument*/&MethodBuilder_NotSupported_m7918_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern MethodInfo MethodBuilder_get_ReturnType_m7903_MethodInfo;
extern "C" Type_t * MethodBuilder_get_ReturnType_m7903 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___rtype_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern MethodInfo MethodBuilder_get_ReflectedType_m7904_MethodInfo;
extern "C" Type_t * MethodBuilder_get_ReflectedType_m7904 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_4);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C" Type_t * MethodBuilder_get_DeclaringType_m7905 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_4);
		return L_0;
	}
}
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern MethodInfo MethodBuilder_get_Name_m7906_MethodInfo;
extern "C" String_t* MethodBuilder_get_Name_m7906 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		return L_0;
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern MethodInfo MethodBuilder_get_Attributes_m7907_MethodInfo;
extern "C" int32_t MethodBuilder_get_Attributes_m7907 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_2);
		return L_0;
	}
}
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern MethodInfo MethodBuilder_get_CallingConvention_m7908_MethodInfo;
extern "C" int32_t MethodBuilder_get_CallingConvention_m7908 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_6);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern MethodInfo MethodBuilder_GetBaseDefinition_m7909_MethodInfo;
extern "C" MethodInfo_t871 * MethodBuilder_GetBaseDefinition_m7909 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern MethodInfo MethodBuilder_GetParameters_m7910_MethodInfo;
extern TypeInfo* ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t887* MethodBuilder_GetParameters_m7910 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	static bool MethodBuilder_GetParameters_m7910_init;
	if (!MethodBuilder_GetParameters_m7910_init)
	{
		ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t887_0_0_0);
		MethodBuilder_GetParameters_m7910_init = true;
	}
	ParameterInfoU5BU5D_t887* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	ParameterInfoU5BU5D_t887* G_B7_1 = {0};
	int32_t G_B6_0 = 0;
	ParameterInfoU5BU5D_t887* G_B6_1 = {0};
	ParameterBuilder_t1482 * G_B8_0 = {0};
	int32_t G_B8_1 = 0;
	ParameterInfoU5BU5D_t887* G_B8_2 = {0};
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m7963(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t140 * L_2 = MethodBuilder_NotSupported_m7918(__this, /*hidden argument*/&MethodBuilder_NotSupported_m7918_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		TypeU5BU5D_t138* L_3 = (__this->___parameters_1);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (ParameterInfoU5BU5D_t887*)NULL;
	}

IL_001e:
	{
		TypeU5BU5D_t138* L_4 = (__this->___parameters_1);
		NullCheck(L_4);
		V_0 = ((ParameterInfoU5BU5D_t887*)SZArrayNew(ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_005d;
	}

IL_0030:
	{
		ParameterBuilderU5BU5D_t1472* L_5 = (__this->___pinfo_5);
		G_B6_0 = V_1;
		G_B6_1 = V_0;
		if (L_5)
		{
			G_B7_0 = V_1;
			G_B7_1 = V_0;
			goto IL_003d;
		}
	}
	{
		G_B8_0 = ((ParameterBuilder_t1482 *)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0047;
	}

IL_003d:
	{
		ParameterBuilderU5BU5D_t1472* L_6 = (__this->___pinfo_5);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)V_1+(int32_t)1)));
		int32_t L_7 = ((int32_t)((int32_t)V_1+(int32_t)1));
		G_B8_0 = (*(ParameterBuilder_t1482 **)(ParameterBuilder_t1482 **)SZArrayLdElema(L_6, L_7));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0047:
	{
		TypeU5BU5D_t138* L_8 = (__this->___parameters_1);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, V_1);
		int32_t L_9 = V_1;
		ParameterInfo_t888 * L_10 = (ParameterInfo_t888 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t888_il2cpp_TypeInfo));
		ParameterInfo__ctor_m8215(L_10, G_B8_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_8, L_9)), __this, ((int32_t)((int32_t)V_1+(int32_t)1)), /*hidden argument*/&ParameterInfo__ctor_m8215_MethodInfo);
		NullCheck(G_B8_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B8_2, G_B8_1);
		ArrayElementTypeCheck (G_B8_2, L_10);
		*((ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(G_B8_2, G_B8_1)) = (ParameterInfo_t888 *)L_10;
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_005d:
	{
		TypeU5BU5D_t138* L_11 = (__this->___parameters_1);
		NullCheck(L_11);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		return V_0;
	}
}
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MethodBuilder_Invoke_m7911_MethodInfo;
extern "C" Object_t * MethodBuilder_Invoke_m7911 (MethodBuilder_t1478 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___parameters, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = MethodBuilder_NotSupported_m7918(__this, /*hidden argument*/&MethodBuilder_NotSupported_m7918_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo MethodBuilder_IsDefined_m7912_MethodInfo;
extern "C" bool MethodBuilder_IsDefined_m7912 (MethodBuilder_t1478 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = MethodBuilder_NotSupported_m7918(__this, /*hidden argument*/&MethodBuilder_NotSupported_m7918_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo MethodBuilder_GetCustomAttributes_m7913_MethodInfo;
extern "C" ObjectU5BU5D_t137* MethodBuilder_GetCustomAttributes_m7913 (MethodBuilder_t1478 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m7963(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_2 = MonoCustomAttrs_GetCustomAttributes_m9925(NULL /*static, unused*/, __this, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo);
		return L_2;
	}

IL_0015:
	{
		Exception_t140 * L_3 = MethodBuilder_NotSupported_m7918(__this, /*hidden argument*/&MethodBuilder_NotSupported_m7918_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MethodBuilder_GetCustomAttributes_m7914_MethodInfo;
extern "C" ObjectU5BU5D_t137* MethodBuilder_GetCustomAttributes_m7914 (MethodBuilder_t1478 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1471 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m7963(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_2 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_2;
	}

IL_0016:
	{
		Exception_t140 * L_3 = MethodBuilder_NotSupported_m7918(__this, /*hidden argument*/&MethodBuilder_NotSupported_m7918_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern MethodInfo MethodBuilder_ToString_m7915_MethodInfo;
extern TypeInfo* StringU5BU5D_t17_il2cpp_TypeInfo_var;
extern "C" String_t* MethodBuilder_ToString_m7915 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	static bool MethodBuilder_ToString_m7915_init;
	if (!MethodBuilder_ToString_m7915_init)
	{
		StringU5BU5D_t17_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t17_0_0_0);
		MethodBuilder_ToString_m7915_init = true;
	}
	{
		StringU5BU5D_t17* L_0 = ((StringU5BU5D_t17*)SZArrayNew(StringU5BU5D_t17_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1737);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1737;
		StringU5BU5D_t17* L_1 = L_0;
		TypeBuilder_t1471 * L_2 = (__this->___type_4);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Name_m7936_MethodInfo, L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_3;
		StringU5BU5D_t17* L_4 = L_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral471);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral471;
		StringU5BU5D_t17* L_5 = L_4;
		String_t* L_6 = (__this->___name_3);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 3)) = (String_t*)L_6;
		StringU5BU5D_t17* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 4);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral158);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4)) = (String_t*)(String_t*) &_stringLiteral158;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m157(NULL /*static, unused*/, L_7, /*hidden argument*/&String_Concat_m157_MethodInfo);
		return L_8;
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern MethodInfo MethodBuilder_Equals_m7916_MethodInfo;
extern "C" bool MethodBuilder_Equals_m7916 (MethodBuilder_t1478 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		bool L_0 = Object_Equals_m225(__this, ___obj, /*hidden argument*/&Object_Equals_m225_MethodInfo);
		return L_0;
	}
}
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern MethodInfo MethodBuilder_GetHashCode_m7917_MethodInfo;
extern "C" int32_t MethodBuilder_GetHashCode_m7917 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3889_MethodInfo, L_0);
		return L_1;
	}
}
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C" Exception_t140 * MethodBuilder_NotSupported_m7918 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1733, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern MethodInfo MethodBuilder_MakeGenericMethod_m7919_MethodInfo;
extern "C" MethodInfo_t871 * MethodBuilder_MakeGenericMethod_m7919 (MethodBuilder_t1478 * __this, TypeU5BU5D_t138* ___typeArguments, MethodInfo* method)
{
	typedef MethodInfo_t871 * (*MethodBuilder_MakeGenericMethod_m7919_ftn) (MethodBuilder_t1478 *, TypeU5BU5D_t138*);
	static MethodBuilder_MakeGenericMethod_m7919_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBuilder_MakeGenericMethod_m7919_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])");
	return _il2cpp_icall_func(__this, ___typeArguments);
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern MethodInfo MethodBuilder_get_IsGenericMethodDefinition_m7920_MethodInfo;
extern "C" bool MethodBuilder_get_IsGenericMethodDefinition_m7920 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_0 = (__this->___generic_params_7);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1480*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern MethodInfo MethodBuilder_get_IsGenericMethod_m7921_MethodInfo;
extern "C" bool MethodBuilder_get_IsGenericMethod_m7921 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_0 = (__this->___generic_params_7);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1480*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern MethodInfo MethodBuilder_GetGenericArguments_m7922_MethodInfo;
extern TypeInfo* TypeU5BU5D_t138_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t138* MethodBuilder_GetGenericArguments_m7922 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	static bool MethodBuilder_GetGenericArguments_m7922_init;
	if (!MethodBuilder_GetGenericArguments_m7922_init)
	{
		TypeU5BU5D_t138_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t138_0_0_0);
		MethodBuilder_GetGenericArguments_m7922_init = true;
	}
	TypeU5BU5D_t138* V_0 = {0};
	int32_t V_1 = 0;
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_0 = (__this->___generic_params_7);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		return (((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3);
	}

IL_000e:
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_1 = (__this->___generic_params_7);
		NullCheck(L_1);
		V_0 = ((TypeU5BU5D_t138*)SZArrayNew(TypeU5BU5D_t138_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002f;
	}

IL_0020:
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_2 = (__this->___generic_params_7);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, V_1);
		int32_t L_3 = V_1;
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		ArrayElementTypeCheck (V_0, (*(GenericTypeParameterBuilder_t1479 **)(GenericTypeParameterBuilder_t1479 **)SZArrayLdElema(L_2, L_3)));
		*((Type_t **)(Type_t **)SZArrayLdElema(V_0, V_1)) = (Type_t *)(*(GenericTypeParameterBuilder_t1479 **)(GenericTypeParameterBuilder_t1479 **)SZArrayLdElema(L_2, L_3));
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_002f:
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_4 = (__this->___generic_params_7);
		NullCheck(L_4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		return V_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern MethodInfo MethodBuilder_get_Module_m7923_MethodInfo;
extern "C" Module_t1259 * MethodBuilder_get_Module_m7923 (MethodBuilder_t1478 * __this, MethodInfo* method)
{
	{
		Module_t1259 * L_0 = MemberInfo_get_Module_m6527(__this, /*hidden argument*/&MemberInfo_get_Module_m6527_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilderMethodDeclarations.h"



// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern MethodInfo ModuleBuilder__cctor_m7924_MethodInfo;
extern TypeInfo* CharU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" void ModuleBuilder__cctor_m7924 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ModuleBuilder__cctor_m7924_init;
	if (!ModuleBuilder__cctor_m7924_init)
	{
		CharU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t45_0_0_0);
		ModuleBuilder__cctor_m7924_init = true;
	}
	{
		CharU5BU5D_t45* L_0 = ((CharU5BU5D_t45*)SZArrayNew(CharU5BU5D_t45_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)38);
		CharU5BU5D_t45* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)91);
		CharU5BU5D_t45* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 2)) = (uint16_t)((int32_t)42);
		((ModuleBuilder_t1481_StaticFields*)InitializedTypeInfo(&ModuleBuilder_t1481_il2cpp_TypeInfo)->static_fields)->___type_modifiers_11 = L_2;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParameterBuilder_t1482_il2cpp_TypeInfo;
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilderMethodDeclarations.h"

// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"


// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Attributes()
extern MethodInfo ParameterBuilder_get_Attributes_m7925_MethodInfo;
extern "C" int32_t ParameterBuilder_get_Attributes_m7925 (ParameterBuilder_t1482 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ParameterBuilder::get_Name()
extern MethodInfo ParameterBuilder_get_Name_m7926_MethodInfo;
extern "C" String_t* ParameterBuilder_get_Name_m7926 (ParameterBuilder_t1482 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Position()
extern MethodInfo ParameterBuilder_get_Position_m7927_MethodInfo;
extern "C" int32_t ParameterBuilder_get_Position_m7927 (ParameterBuilder_t1482 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___position_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchException.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
extern TypeInfo AmbiguousMatchException_t1486_il2cpp_TypeInfo;
extern TypeInfo MethodBaseU5BU5D_t1493_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t879_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t610_il2cpp_TypeInfo;
extern TypeInfo MethodAttributes_t1500_il2cpp_TypeInfo;
extern TypeInfo FieldAttributes_t1498_il2cpp_TypeInfo;
extern TypeInfo ValueType_t157_il2cpp_TypeInfo;
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchExceptionMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_BinderMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodBaseU5BU5D_t1493_0_0_0;
extern Il2CppType ConstructorInfoU5BU5D_t1263_0_0_0;
extern Il2CppType MethodInfoU5BU5D_t885_0_0_0;
extern Il2CppType ValueType_t157_0_0_0;
extern MethodInfo Assembly_get_FullName_m7984_MethodInfo;
extern MethodInfo Type_get_UnderlyingSystemType_m10264_MethodInfo;
extern MethodInfo Type_get_IsEnum_m6480_MethodInfo;
extern MethodInfo TypeBuilder_get_IsCompilerContext_m7962_MethodInfo;
extern MethodInfo TypeBuilder_check_created_m7965_MethodInfo;
extern MethodInfo Type_get_TypeHandle_m6490_MethodInfo;
extern MethodInfo TypeBuilder_get_IsGenericTypeDefinition_m7974_MethodInfo;
extern MethodInfo AmbiguousMatchException__ctor_m7977_MethodInfo;
extern MethodInfo MethodBase_get_CallingConvention_m8068_MethodInfo;
extern MethodInfo Binder_get_DefaultBinder_m8032_MethodInfo;
extern MethodInfo Binder_SelectMethod_m10319_MethodInfo;
extern MethodInfo MonoCustomAttrs_IsDefined_m9926_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m10320_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m5497_MethodInfo;
extern MethodInfo Type_GetConstructors_m10321_MethodInfo;
extern MethodInfo TypeBuilder_GetConstructorsInternal_m7944_MethodInfo;
extern MethodInfo ArrayList__ctor_m3875_MethodInfo;
extern MethodInfo ArrayList_Add_m3885_MethodInfo;
extern MethodInfo ArrayList_get_Count_m3871_MethodInfo;
extern MethodInfo ArrayList_CopyTo_m4088_MethodInfo;
extern MethodInfo Type_GetEvent_m10322_MethodInfo;
extern MethodInfo Type_GetField_m10323_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m4309_MethodInfo;
extern MethodInfo FieldInfo_get_Attributes_m10273_MethodInfo;
extern MethodInfo Type_GetInterfaces_m10324_MethodInfo;
extern MethodInfo Array_CopyTo_m4063_MethodInfo;
extern MethodInfo Type_GetMethods_m4306_MethodInfo;
extern MethodInfo ArrayList__ctor_m4044_MethodInfo;
extern MethodInfo MethodBase_get_Attributes_m10272_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m5544_MethodInfo;
extern MethodInfo ArrayList_CopyTo_m4040_MethodInfo;
extern MethodInfo String_Compare_m6063_MethodInfo;
extern MethodInfo TypeBuilder_GetMethodsByName_m7949_MethodInfo;
extern MethodInfo Binder_FindMostDerivedMatch_m8035_MethodInfo;
extern MethodInfo TypeBuilder_not_supported_m7964_MethodInfo;
extern MethodInfo Type_InvokeMember_m5504_MethodInfo;
extern MethodInfo Type_type_is_subtype_of_m6499_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4313_MethodInfo;
extern MethodInfo Type_get_IsInterface_m6482_MethodInfo;


// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern MethodInfo TypeBuilder_GetAttributeFlagsImpl_m7928_MethodInfo;
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m7928 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_16);
		return L_0;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t795 * TypeBuilder_get_Assembly_m7929 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		ModuleBuilder_t1481 * L_0 = (__this->___pmodule_17);
		NullCheck(L_0);
		Assembly_t795 * L_1 = Module_get_Assembly_m8087(L_0, /*hidden argument*/&Module_get_Assembly_m8087_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m7930 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullname_20);
		Assembly_t795 * L_1 = (Assembly_t795 *)VirtFuncInvoker0< Assembly_t795 * >::Invoke(&TypeBuilder_get_Assembly_m7929_MethodInfo, __this);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_get_FullName_m7984_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m169(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral149, L_2, /*hidden argument*/&String_Concat_m169_MethodInfo);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m7931 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___parent_10);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m7932 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern MethodInfo TypeBuilder_get_UnderlyingSystemType_m7933_MethodInfo;
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m7933 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m7963(__this, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_19);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_UnderlyingSystemType_m10264_MethodInfo, L_1);
		return L_2;
	}

IL_0014:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, __this);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = TypeBuilder_get_IsCompilerContext_m7962(__this, /*hidden argument*/&TypeBuilder_get_IsCompilerContext_m7962_MethodInfo);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_5 = (__this->___underlying_type_21);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = (__this->___underlying_type_21);
		return L_6;
	}

IL_0033:
	{
		InvalidOperationException_t784 * L_7 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_7, (String_t*) &_stringLiteral1738, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		return __this;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m7934 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullname_20);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t1259 * TypeBuilder_get_Module_m7935 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		ModuleBuilder_t1481 * L_0 = (__this->___pmodule_17);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m7936 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___tname_8);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m7937 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___nspace_9);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m7938 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeBuilder_GetConstructorImpl_m7939_MethodInfo;
extern TypeInfo* MethodBaseU5BU5D_t1493_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t1131 * TypeBuilder_GetConstructorImpl_m7939 (TypeBuilder_t1471 * __this, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	static bool TypeBuilder_GetConstructorImpl_m7939_init;
	if (!TypeBuilder_GetConstructorImpl_m7939_init)
	{
		MethodBaseU5BU5D_t1493_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodBaseU5BU5D_t1493_0_0_0);
		TypeBuilder_GetConstructorImpl_m7939_init = true;
	}
	ConstructorBuilder_t1473 * V_0 = {0};
	int32_t V_1 = 0;
	ConstructorBuilder_t1473 * V_2 = {0};
	ConstructorBuilderU5BU5D_t1484* V_3 = {0};
	int32_t V_4 = 0;
	MethodBaseU5BU5D_t1493* V_5 = {0};
	ConstructorInfo_t1131 * V_6 = {0};
	ConstructorBuilderU5BU5D_t1484* V_7 = {0};
	int32_t V_8 = 0;
	{
		TypeBuilder_check_created_m7965(__this, /*hidden argument*/&TypeBuilder_check_created_m7965_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)L_0) != ((Object_t*)(Type_t *)L_1)))
		{
			goto IL_00e1;
		}
	}
	{
		ConstructorBuilderU5BU5D_t1484* L_2 = (__this->___ctors_14);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (ConstructorInfo_t1131 *)NULL;
	}

IL_0025:
	{
		V_0 = (ConstructorBuilder_t1473 *)NULL;
		V_1 = 0;
		ConstructorBuilderU5BU5D_t1484* L_3 = (__this->___ctors_14);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0055;
	}

IL_0035:
	{
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_4);
		int32_t L_4 = V_4;
		V_2 = (*(ConstructorBuilder_t1473 **)(ConstructorBuilder_t1473 **)SZArrayLdElema(V_3, L_4));
		if ((((int32_t)___callConvention) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		NullCheck(V_2);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ConstructorBuilder_get_CallingConvention_m7790_MethodInfo, V_2);
		if ((((int32_t)L_5) == ((int32_t)___callConvention)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_004f;
	}

IL_0049:
	{
		V_0 = V_2;
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_004f:
	{
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
	}

IL_0055:
	{
		NullCheck(V_3);
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((Array_t *)V_3)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		if (V_1)
		{
			goto IL_0061;
		}
	}
	{
		return (ConstructorInfo_t1131 *)NULL;
	}

IL_0061:
	{
		if (___types)
		{
			goto IL_0071;
		}
	}
	{
		if ((((int32_t)V_1) <= ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		AmbiguousMatchException_t1486 * L_6 = (AmbiguousMatchException_t1486 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1486_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m7977(L_6, /*hidden argument*/&AmbiguousMatchException__ctor_m7977_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_006f:
	{
		return V_0;
	}

IL_0071:
	{
		V_5 = ((MethodBaseU5BU5D_t1493*)SZArrayNew(MethodBaseU5BU5D_t1493_il2cpp_TypeInfo_var, V_1));
		if ((((uint32_t)V_1) != ((uint32_t)1)))
		{
			goto IL_0084;
		}
	}
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, 0);
		ArrayElementTypeCheck (V_5, V_0);
		*((MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(V_5, 0)) = (MethodBase_t879 *)V_0;
		goto IL_00c2;
	}

IL_0084:
	{
		V_1 = 0;
		ConstructorBuilderU5BU5D_t1484* L_7 = (__this->___ctors_14);
		V_7 = L_7;
		V_8 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		NullCheck(V_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_7, V_8);
		int32_t L_8 = V_8;
		V_6 = (*(ConstructorBuilder_t1473 **)(ConstructorBuilder_t1473 **)SZArrayLdElema(V_7, L_8));
		if ((((int32_t)___callConvention) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		NullCheck(V_6);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8068_MethodInfo, V_6);
		if ((((int32_t)L_9) == ((int32_t)___callConvention)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00b4;
	}

IL_00aa:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, L_10);
		ArrayElementTypeCheck (V_5, V_6);
		*((MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(V_5, L_10)) = (MethodBase_t879 *)V_6;
	}

IL_00b4:
	{
		V_8 = ((int32_t)((int32_t)V_8+(int32_t)1));
	}

IL_00ba:
	{
		NullCheck(V_7);
		if ((((int32_t)V_8) < ((int32_t)(((int32_t)(((Array_t *)V_7)->max_length))))))
		{
			goto IL_0093;
		}
	}

IL_00c2:
	{
		if (___binder)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		Binder_t1115 * L_11 = Binder_get_DefaultBinder_m8032(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8032_MethodInfo);
		___binder = L_11;
	}

IL_00ce:
	{
		NullCheck(___binder);
		MethodBase_t879 * L_12 = (MethodBase_t879 *)VirtFuncInvoker4< MethodBase_t879 *, int32_t, MethodBaseU5BU5D_t1493*, TypeU5BU5D_t138*, ParameterModifierU5BU5D_t1116* >::Invoke(&Binder_SelectMethod_m10319_MethodInfo, ___binder, ___bindingAttr, V_5, ___types, ___modifiers);
		return ((ConstructorInfo_t1131 *)Castclass(L_12, InitializedTypeInfo(&ConstructorInfo_t1131_il2cpp_TypeInfo)));
	}

IL_00e1:
	{
		Type_t * L_13 = (__this->___created_19);
		NullCheck(L_13);
		ConstructorInfo_t1131 * L_14 = (ConstructorInfo_t1131 *)VirtFuncInvoker5< ConstructorInfo_t1131 *, int32_t, Binder_t1115 *, int32_t, TypeU5BU5D_t138*, ParameterModifierU5BU5D_t1116* >::Invoke(&Type_GetConstructor_m6513_MethodInfo, L_13, ___bindingAttr, ___binder, ___callConvention, ___types, ___modifiers);
		return L_14;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m7940 (TypeBuilder_t1471 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m7963(__this, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = TypeBuilder_get_IsCompilerContext_m7962(__this, /*hidden argument*/&TypeBuilder_get_IsCompilerContext_m7962_MethodInfo);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t150 * L_2 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m701(L_2, /*hidden argument*/&NotSupportedException__ctor_m701_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		bool L_3 = MonoCustomAttrs_IsDefined_m9926(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_IsDefined_m9926_MethodInfo);
		return L_3;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t137* TypeBuilder_GetCustomAttributes_m7941 (TypeBuilder_t1471 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m7965(__this, /*hidden argument*/&TypeBuilder_check_created_m7965_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		NullCheck(L_0);
		ObjectU5BU5D_t137* L_1 = (ObjectU5BU5D_t137*)VirtFuncInvoker1< ObjectU5BU5D_t137*, bool >::Invoke(&MemberInfo_GetCustomAttributes_m10320_MethodInfo, L_0, ___inherit);
		return L_1;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t137* TypeBuilder_GetCustomAttributes_m7942 (TypeBuilder_t1471 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m7965(__this, /*hidden argument*/&TypeBuilder_check_created_m7965_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		NullCheck(L_0);
		ObjectU5BU5D_t137* L_1 = (ObjectU5BU5D_t137*)VirtFuncInvoker2< ObjectU5BU5D_t137*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m5497_MethodInfo, L_0, ___attributeType, ___inherit);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1263* TypeBuilder_GetConstructors_m7943 (TypeBuilder_t1471 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m7963(__this, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_19);
		NullCheck(L_1);
		ConstructorInfoU5BU5D_t1263* L_2 = (ConstructorInfoU5BU5D_t1263*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1263*, int32_t >::Invoke(&Type_GetConstructors_m10321_MethodInfo, L_1, ___bindingAttr);
		return L_2;
	}

IL_0015:
	{
		bool L_3 = TypeBuilder_get_IsCompilerContext_m7962(__this, /*hidden argument*/&TypeBuilder_get_IsCompilerContext_m7962_MethodInfo);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t150 * L_4 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m701(L_4, /*hidden argument*/&NotSupportedException__ctor_m701_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		ConstructorInfoU5BU5D_t1263* L_5 = TypeBuilder_GetConstructorsInternal_m7944(__this, ___bindingAttr, /*hidden argument*/&TypeBuilder_GetConstructorsInternal_m7944_MethodInfo);
		return L_5;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern TypeInfo* ConstructorInfoU5BU5D_t1263_il2cpp_TypeInfo_var;
extern "C" ConstructorInfoU5BU5D_t1263* TypeBuilder_GetConstructorsInternal_m7944 (TypeBuilder_t1471 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	static bool TypeBuilder_GetConstructorsInternal_m7944_init;
	if (!TypeBuilder_GetConstructorsInternal_m7944_init)
	{
		ConstructorInfoU5BU5D_t1263_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ConstructorInfoU5BU5D_t1263_0_0_0);
		TypeBuilder_GetConstructorsInternal_m7944_init = true;
	}
	ArrayList_t610 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	ConstructorBuilder_t1473 * V_3 = {0};
	ConstructorBuilderU5BU5D_t1484* V_4 = {0};
	int32_t V_5 = 0;
	ConstructorInfoU5BU5D_t1263* V_6 = {0};
	{
		ConstructorBuilderU5BU5D_t1484* L_0 = (__this->___ctors_14);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ConstructorInfoU5BU5D_t1263*)SZArrayNew(ConstructorInfoU5BU5D_t1263_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList_t610 * L_1 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m3875(L_1, /*hidden argument*/&ArrayList__ctor_m3875_MethodInfo);
		V_0 = L_1;
		ConstructorBuilderU5BU5D_t1484* L_2 = (__this->___ctors_14);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0079;
	}

IL_0022:
	{
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_5);
		int32_t L_3 = V_5;
		V_3 = (*(ConstructorBuilder_t1473 **)(ConstructorBuilder_t1473 **)SZArrayLdElema(V_4, L_3));
		V_1 = 0;
		NullCheck(V_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ConstructorBuilder_get_Attributes_m7797_MethodInfo, V_3);
		V_2 = L_4;
		if ((((uint32_t)((int32_t)((int32_t)V_2&(int32_t)7))) != ((uint32_t)6)))
		{
			goto IL_0041;
		}
	}
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)16))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 1;
	}

IL_003f:
	{
		goto IL_0049;
	}

IL_0041:
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 1;
	}

IL_0049:
	{
		if (V_1)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0073;
	}

IL_004e:
	{
		V_1 = 0;
		if (!((int32_t)((int32_t)V_2&(int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 1;
	}

IL_005d:
	{
		goto IL_0066;
	}

IL_005f:
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)4)))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		if (V_1)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0073;
	}

IL_006b:
	{
		NullCheck(V_0);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_0, V_3);
	}

IL_0073:
	{
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_0079:
	{
		NullCheck(V_4);
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((Array_t *)V_4)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m3871_MethodInfo, V_0);
		V_6 = ((ConstructorInfoU5BU5D_t1263*)SZArrayNew(ConstructorInfoU5BU5D_t1263_il2cpp_TypeInfo_var, L_5));
		NullCheck(V_0);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m4088_MethodInfo, V_0, (Array_t *)(Array_t *)V_6);
		return V_6;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m7945 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m701(L_0, /*hidden argument*/&NotSupportedException__ctor_m701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t1260 * TypeBuilder_GetEvent_m7946 (TypeBuilder_t1471 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m7965(__this, /*hidden argument*/&TypeBuilder_check_created_m7965_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		NullCheck(L_0);
		EventInfo_t1260 * L_1 = (EventInfo_t1260 *)VirtFuncInvoker2< EventInfo_t1260 *, String_t*, int32_t >::Invoke(&Type_GetEvent_m10322_MethodInfo, L_0, ___name, ___bindingAttr);
		return L_1;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t1261 * TypeBuilder_GetField_m7947 (TypeBuilder_t1471 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = {0};
	FieldInfo_t1261 * V_2 = {0};
	FieldBuilderU5BU5D_t1485* V_3 = {0};
	int32_t V_4 = 0;
	{
		Type_t * L_0 = (__this->___created_19);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_1 = (__this->___created_19);
		NullCheck(L_1);
		FieldInfo_t1261 * L_2 = (FieldInfo_t1261 *)VirtFuncInvoker2< FieldInfo_t1261 *, String_t*, int32_t >::Invoke(&Type_GetField_m10323_MethodInfo, L_1, ___name, ___bindingAttr);
		return L_2;
	}

IL_0016:
	{
		FieldBuilderU5BU5D_t1485* L_3 = (__this->___fields_15);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		return (FieldInfo_t1261 *)NULL;
	}

IL_0020:
	{
		FieldBuilderU5BU5D_t1485* L_4 = (__this->___fields_15);
		V_3 = L_4;
		V_4 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_4);
		int32_t L_5 = V_4;
		V_2 = (*(FieldBuilder_t1477 **)(FieldBuilder_t1477 **)SZArrayLdElema(V_3, L_5));
		if (V_2)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_008e;
	}

IL_0039:
	{
		NullCheck(V_2);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, V_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_7 = String_op_Inequality_m2590(NULL /*static, unused*/, L_6, ___name, /*hidden argument*/&String_op_Inequality_m2590_MethodInfo);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_008e;
	}

IL_0049:
	{
		V_0 = 0;
		NullCheck(V_2);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10273_MethodInfo, V_2);
		V_1 = L_8;
		if ((((uint32_t)((int32_t)((int32_t)V_1&(int32_t)7))) != ((uint32_t)6)))
		{
			goto IL_0062;
		}
	}
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		V_0 = 1;
	}

IL_0060:
	{
		goto IL_006a;
	}

IL_0062:
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		V_0 = 1;
	}

IL_006a:
	{
		if (V_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_008e;
	}

IL_006f:
	{
		V_0 = 0;
		if (!((int32_t)((int32_t)V_1&(int32_t)((int32_t)16))))
		{
			goto IL_0080;
		}
	}
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		V_0 = 1;
	}

IL_007e:
	{
		goto IL_0087;
	}

IL_0080:
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		V_0 = 1;
	}

IL_0087:
	{
		if (V_0)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_008e;
	}

IL_008c:
	{
		return V_2;
	}

IL_008e:
	{
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
	}

IL_0094:
	{
		NullCheck(V_3);
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((Array_t *)V_3)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (FieldInfo_t1261 *)NULL;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern TypeInfo* TypeU5BU5D_t138_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t138* TypeBuilder_GetInterfaces_m7948 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	static bool TypeBuilder_GetInterfaces_m7948_init;
	if (!TypeBuilder_GetInterfaces_m7948_init)
	{
		TypeU5BU5D_t138_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t138_0_0_0);
		TypeBuilder_GetInterfaces_m7948_init = true;
	}
	TypeU5BU5D_t138* V_0 = {0};
	{
		bool L_0 = TypeBuilder_get_is_created_m7963(__this, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_19);
		NullCheck(L_1);
		TypeU5BU5D_t138* L_2 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&Type_GetInterfaces_m10324_MethodInfo, L_1);
		return L_2;
	}

IL_0014:
	{
		TypeU5BU5D_t138* L_3 = (__this->___interfaces_12);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		TypeU5BU5D_t138* L_4 = (__this->___interfaces_12);
		NullCheck(L_4);
		V_0 = ((TypeU5BU5D_t138*)SZArrayNew(TypeU5BU5D_t138_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		TypeU5BU5D_t138* L_5 = (__this->___interfaces_12);
		NullCheck(L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4063_MethodInfo, L_5, (Array_t *)(Array_t *)V_0, 0);
		return V_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		return (((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3);
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern TypeInfo* MethodInfoU5BU5D_t885_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t885* TypeBuilder_GetMethodsByName_m7949 (TypeBuilder_t1471 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method)
{
	static bool TypeBuilder_GetMethodsByName_m7949_init;
	if (!TypeBuilder_GetMethodsByName_m7949_init)
	{
		MethodInfoU5BU5D_t885_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodInfoU5BU5D_t885_0_0_0);
		TypeBuilder_GetMethodsByName_m7949_init = true;
	}
	MethodInfoU5BU5D_t885* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	MethodInfoU5BU5D_t885* V_3 = {0};
	ArrayList_t610 * V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	MethodInfo_t871 * V_7 = {0};
	ArrayList_t610 * V_8 = {0};
	MethodInfo_t871 * V_9 = {0};
	MethodInfoU5BU5D_t885* V_10 = {0};
	int32_t V_11 = 0;
	MethodInfoU5BU5D_t885* V_12 = {0};
	int32_t V_13 = {0};
	{
		if (((int32_t)((int32_t)___bindingAttr&(int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_0 = (__this->___parent_10);
		if (!L_0)
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_1 = (__this->___parent_10);
		NullCheck(L_1);
		MethodInfoU5BU5D_t885* L_2 = (MethodInfoU5BU5D_t885*)VirtFuncInvoker1< MethodInfoU5BU5D_t885*, int32_t >::Invoke(&Type_GetMethods_m4306_MethodInfo, L_1, ___bindingAttr);
		V_3 = L_2;
		NullCheck(V_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList_t610 * L_3 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m4044(L_3, (((int32_t)(((Array_t *)V_3)->max_length))), /*hidden argument*/&ArrayList__ctor_m4044_MethodInfo);
		V_4 = L_3;
		V_5 = ((((int32_t)((((int32_t)((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_6 = 0;
		goto IL_00c1;
	}

IL_003e:
	{
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_6);
		int32_t L_4 = V_6;
		V_7 = (*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_3, L_4));
		NullCheck(V_7);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10272_MethodInfo, V_7);
		V_2 = L_5;
		NullCheck(V_7);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m5544_MethodInfo, V_7);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		if (V_5)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_00bb;
	}

IL_005b:
	{
		V_13 = ((int32_t)((int32_t)V_2&(int32_t)7));
		if (((int32_t)((int32_t)V_13-(int32_t)1)) == 0)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)V_13-(int32_t)1)) == 1)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)V_13-(int32_t)1)) == 2)
		{
			goto IL_0090;
		}
		if (((int32_t)((int32_t)V_13-(int32_t)1)) == 3)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)V_13-(int32_t)1)) == 4)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)V_13-(int32_t)1)) == 5)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00a1;
	}

IL_0083:
	{
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_0090:
	{
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_009d:
	{
		V_1 = 0;
		goto IL_00ae;
	}

IL_00a1:
	{
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ae:
	{
		if (!V_1)
		{
			goto IL_00bb;
		}
	}
	{
		NullCheck(V_4);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_4, V_7);
	}

IL_00bb:
	{
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_00c1:
	{
		NullCheck(V_3);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((Array_t *)V_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		MethodBuilderU5BU5D_t1483* L_7 = (__this->___methods_13);
		if (L_7)
		{
			goto IL_00ea;
		}
	}
	{
		NullCheck(V_4);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m3871_MethodInfo, V_4);
		V_0 = ((MethodInfoU5BU5D_t885*)SZArrayNew(MethodInfoU5BU5D_t885_il2cpp_TypeInfo_var, L_8));
		NullCheck(V_4);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m4088_MethodInfo, V_4, (Array_t *)(Array_t *)V_0);
		goto IL_011c;
	}

IL_00ea:
	{
		MethodBuilderU5BU5D_t1483* L_9 = (__this->___methods_13);
		NullCheck(L_9);
		NullCheck(V_4);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m3871_MethodInfo, V_4);
		V_0 = ((MethodInfoU5BU5D_t885*)SZArrayNew(MethodInfoU5BU5D_t885_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))+(int32_t)L_10))));
		NullCheck(V_4);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&ArrayList_CopyTo_m4040_MethodInfo, V_4, (Array_t *)(Array_t *)V_0, 0);
		MethodBuilderU5BU5D_t1483* L_11 = (__this->___methods_13);
		NullCheck(V_4);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m3871_MethodInfo, V_4);
		NullCheck(L_11);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4063_MethodInfo, L_11, (Array_t *)(Array_t *)V_0, L_12);
	}

IL_011c:
	{
		goto IL_0125;
	}

IL_011e:
	{
		MethodBuilderU5BU5D_t1483* L_13 = (__this->___methods_13);
		V_0 = (MethodInfoU5BU5D_t885*)L_13;
	}

IL_0125:
	{
		if (V_0)
		{
			goto IL_012f;
		}
	}
	{
		return ((MethodInfoU5BU5D_t885*)SZArrayNew(MethodInfoU5BU5D_t885_il2cpp_TypeInfo_var, 0));
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList_t610 * L_14 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m3875(L_14, /*hidden argument*/&ArrayList__ctor_m3875_MethodInfo);
		V_8 = L_14;
		V_10 = V_0;
		V_11 = 0;
		goto IL_01ba;
	}

IL_0141:
	{
		NullCheck(V_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_10, V_11);
		int32_t L_15 = V_11;
		V_9 = (*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_10, L_15));
		if (V_9)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_01b4;
	}

IL_0151:
	{
		if (!___name)
		{
			goto IL_0166;
		}
	}
	{
		NullCheck(V_9);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, V_9);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_17 = String_Compare_m6063(NULL /*static, unused*/, L_16, ___name, ___ignoreCase, /*hidden argument*/&String_Compare_m6063_MethodInfo);
		if (!L_17)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01b4;
	}

IL_0166:
	{
		V_1 = 0;
		NullCheck(V_9);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10272_MethodInfo, V_9);
		V_2 = L_18;
		if ((((uint32_t)((int32_t)((int32_t)V_2&(int32_t)7))) != ((uint32_t)6)))
		{
			goto IL_0180;
		}
	}
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)16))))
		{
			goto IL_017e;
		}
	}
	{
		V_1 = 1;
	}

IL_017e:
	{
		goto IL_0188;
	}

IL_0180:
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)32))))
		{
			goto IL_0188;
		}
	}
	{
		V_1 = 1;
	}

IL_0188:
	{
		if (V_1)
		{
			goto IL_018d;
		}
	}
	{
		goto IL_01b4;
	}

IL_018d:
	{
		V_1 = 0;
		if (!((int32_t)((int32_t)V_2&(int32_t)((int32_t)16))))
		{
			goto IL_019e;
		}
	}
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)8)))
		{
			goto IL_019c;
		}
	}
	{
		V_1 = 1;
	}

IL_019c:
	{
		goto IL_01a5;
	}

IL_019e:
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)4)))
		{
			goto IL_01a5;
		}
	}
	{
		V_1 = 1;
	}

IL_01a5:
	{
		if (V_1)
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_01b4;
	}

IL_01aa:
	{
		NullCheck(V_8);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_8, V_9);
	}

IL_01b4:
	{
		V_11 = ((int32_t)((int32_t)V_11+(int32_t)1));
	}

IL_01ba:
	{
		NullCheck(V_10);
		if ((((int32_t)V_11) < ((int32_t)(((int32_t)(((Array_t *)V_10)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		NullCheck(V_8);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m3871_MethodInfo, V_8);
		V_12 = ((MethodInfoU5BU5D_t885*)SZArrayNew(MethodInfoU5BU5D_t885_il2cpp_TypeInfo_var, L_19));
		NullCheck(V_8);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m4088_MethodInfo, V_8, (Array_t *)(Array_t *)V_12);
		return V_12;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t885* TypeBuilder_GetMethods_m7950 (TypeBuilder_t1471 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		MethodInfoU5BU5D_t885* L_0 = TypeBuilder_GetMethodsByName_m7949(__this, (String_t*)NULL, ___bindingAttr, 0, __this, /*hidden argument*/&TypeBuilder_GetMethodsByName_m7949_MethodInfo);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeBuilder_GetMethodImpl_m7951_MethodInfo;
extern TypeInfo* MethodBaseU5BU5D_t1493_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t871 * TypeBuilder_GetMethodImpl_m7951 (TypeBuilder_t1471 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, int32_t ___callConvention, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	static bool TypeBuilder_GetMethodImpl_m7951_init;
	if (!TypeBuilder_GetMethodImpl_m7951_init)
	{
		MethodBaseU5BU5D_t1493_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodBaseU5BU5D_t1493_0_0_0);
		TypeBuilder_GetMethodImpl_m7951_init = true;
	}
	bool V_0 = false;
	MethodInfoU5BU5D_t885* V_1 = {0};
	MethodInfo_t871 * V_2 = {0};
	MethodBaseU5BU5D_t1493* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MethodInfo_t871 * V_6 = {0};
	MethodInfoU5BU5D_t885* V_7 = {0};
	int32_t V_8 = 0;
	MethodInfo_t871 * V_9 = {0};
	MethodInfoU5BU5D_t885* V_10 = {0};
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	{
		TypeBuilder_check_created_m7965(__this, /*hidden argument*/&TypeBuilder_check_created_m7965_MethodInfo);
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)___bindingAttr&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		MethodInfoU5BU5D_t885* L_0 = TypeBuilder_GetMethodsByName_m7949(__this, ___name, ___bindingAttr, V_0, __this, /*hidden argument*/&TypeBuilder_GetMethodsByName_m7949_MethodInfo);
		V_1 = L_0;
		V_2 = (MethodInfo_t871 *)NULL;
		if (!___types)
		{
			goto IL_0027;
		}
	}
	{
		NullCheck(___types);
		G_B3_0 = (((int32_t)(((Array_t *)___types)->max_length)));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_4 = G_B3_0;
		V_5 = 0;
		V_7 = V_1;
		V_8 = 0;
		goto IL_0060;
	}

IL_0035:
	{
		NullCheck(V_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_7, V_8);
		int32_t L_1 = V_8;
		V_6 = (*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_7, L_1));
		if ((((int32_t)___callConvention) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		NullCheck(V_6);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8068_MethodInfo, V_6);
		if ((((int32_t)((int32_t)((int32_t)L_2&(int32_t)___callConvention))) == ((int32_t)___callConvention)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_005a;
	}

IL_0051:
	{
		V_2 = V_6;
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_005a:
	{
		V_8 = ((int32_t)((int32_t)V_8+(int32_t)1));
	}

IL_0060:
	{
		NullCheck(V_7);
		if ((((int32_t)V_8) < ((int32_t)(((int32_t)(((Array_t *)V_7)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		if (V_5)
		{
			goto IL_006e;
		}
	}
	{
		return (MethodInfo_t871 *)NULL;
	}

IL_006e:
	{
		if ((((uint32_t)V_5) != ((uint32_t)1)))
		{
			goto IL_0079;
		}
	}
	{
		if (V_4)
		{
			goto IL_0079;
		}
	}
	{
		return V_2;
	}

IL_0079:
	{
		V_3 = ((MethodBaseU5BU5D_t1493*)SZArrayNew(MethodBaseU5BU5D_t1493_il2cpp_TypeInfo_var, V_5));
		if ((((uint32_t)V_5) != ((uint32_t)1)))
		{
			goto IL_008c;
		}
	}
	{
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, 0);
		ArrayElementTypeCheck (V_3, V_2);
		*((MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(V_3, 0)) = (MethodBase_t879 *)V_2;
		goto IL_00cc;
	}

IL_008c:
	{
		V_5 = 0;
		V_10 = V_1;
		V_11 = 0;
		goto IL_00c4;
	}

IL_0097:
	{
		NullCheck(V_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_10, V_11);
		int32_t L_3 = V_11;
		V_9 = (*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_10, L_3));
		if ((((int32_t)___callConvention) == ((int32_t)3)))
		{
			goto IL_00b3;
		}
	}
	{
		NullCheck(V_9);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8068_MethodInfo, V_9);
		if ((((int32_t)((int32_t)((int32_t)L_4&(int32_t)___callConvention))) == ((int32_t)___callConvention)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00be;
	}

IL_00b3:
	{
		int32_t L_5 = V_5;
		V_5 = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, L_5);
		ArrayElementTypeCheck (V_3, V_9);
		*((MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(V_3, L_5)) = (MethodBase_t879 *)V_9;
	}

IL_00be:
	{
		V_11 = ((int32_t)((int32_t)V_11+(int32_t)1));
	}

IL_00c4:
	{
		NullCheck(V_10);
		if ((((int32_t)V_11) < ((int32_t)(((int32_t)(((Array_t *)V_10)->max_length))))))
		{
			goto IL_0097;
		}
	}

IL_00cc:
	{
		if (___types)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		MethodBase_t879 * L_6 = Binder_FindMostDerivedMatch_m8035(NULL /*static, unused*/, V_3, /*hidden argument*/&Binder_FindMostDerivedMatch_m8035_MethodInfo);
		return ((MethodInfo_t871 *)Castclass(L_6, InitializedTypeInfo(&MethodInfo_t871_il2cpp_TypeInfo)));
	}

IL_00dc:
	{
		if (___binder)
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		Binder_t1115 * L_7 = Binder_get_DefaultBinder_m8032(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8032_MethodInfo);
		___binder = L_7;
	}

IL_00e8:
	{
		NullCheck(___binder);
		MethodBase_t879 * L_8 = (MethodBase_t879 *)VirtFuncInvoker4< MethodBase_t879 *, int32_t, MethodBaseU5BU5D_t1493*, TypeU5BU5D_t138*, ParameterModifierU5BU5D_t1116* >::Invoke(&Binder_SelectMethod_m10319_MethodInfo, ___binder, ___bindingAttr, V_3, ___types, ___modifiers);
		return ((MethodInfo_t871 *)Castclass(L_8, InitializedTypeInfo(&MethodInfo_t871_il2cpp_TypeInfo)));
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeBuilder_GetPropertyImpl_m7952_MethodInfo;
extern "C" PropertyInfo_t1262 * TypeBuilder_GetPropertyImpl_m7952 (TypeBuilder_t1471 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1115 * ___binder, Type_t * ___returnType, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	{
		Exception_t140 * L_0 = TypeBuilder_not_supported_m7964(__this, /*hidden argument*/&TypeBuilder_not_supported_m7964_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern MethodInfo TypeBuilder_HasElementTypeImpl_m7953_MethodInfo;
extern "C" bool TypeBuilder_HasElementTypeImpl_m7953 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m7963(__this, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
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
		Type_t * L_1 = (__this->___created_19);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6474_MethodInfo, L_1);
		return L_2;
	}
}
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m7954 (TypeBuilder_t1471 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1115 * ___binder, Object_t * ___target, ObjectU5BU5D_t137* ___args, ParameterModifierU5BU5D_t1116* ___modifiers, CultureInfo_t791 * ___culture, StringU5BU5D_t17* ___namedParameters, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m7965(__this, /*hidden argument*/&TypeBuilder_check_created_m7965_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t1115 *, Object_t *, ObjectU5BU5D_t137*, ParameterModifierU5BU5D_t1116*, CultureInfo_t791 *, StringU5BU5D_t17* >::Invoke(&Type_InvokeMember_m5504_MethodInfo, L_0, ___name, ___invokeAttr, ___binder, ___target, ___args, ___modifiers, ___culture, ___namedParameters);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern MethodInfo TypeBuilder_IsArrayImpl_m7955_MethodInfo;
extern "C" bool TypeBuilder_IsArrayImpl_m7955 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern MethodInfo TypeBuilder_IsByRefImpl_m7956_MethodInfo;
extern "C" bool TypeBuilder_IsByRefImpl_m7956 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern MethodInfo TypeBuilder_IsPointerImpl_m7957_MethodInfo;
extern "C" bool TypeBuilder_IsPointerImpl_m7957 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern MethodInfo TypeBuilder_IsPrimitiveImpl_m7958_MethodInfo;
extern "C" bool TypeBuilder_IsPrimitiveImpl_m7958 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern MethodInfo TypeBuilder_IsValueTypeImpl_m7959_MethodInfo;
extern "C" bool TypeBuilder_IsValueTypeImpl_m7959 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		ModuleBuilder_t1481 * L_0 = (__this->___pmodule_17);
		NullCheck(L_0);
		AssemblyBuilder_t1468 * L_1 = (L_0->___assemblyb_10);
		NullCheck(L_1);
		Type_t * L_2 = (L_1->___corlib_value_type_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		bool L_3 = Type_type_is_subtype_of_m6499(NULL /*static, unused*/, __this, L_2, 0, /*hidden argument*/&Type_type_is_subtype_of_m6499_MethodInfo);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&ValueType_t157_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		bool L_5 = Type_type_is_subtype_of_m6499(NULL /*static, unused*/, __this, L_4, 0, /*hidden argument*/&Type_type_is_subtype_of_m6499_MethodInfo);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_002c:
	{
		ModuleBuilder_t1481 * L_6 = (__this->___pmodule_17);
		NullCheck(L_6);
		AssemblyBuilder_t1468 * L_7 = (L_6->___assemblyb_10);
		NullCheck(L_7);
		Type_t * L_8 = (L_7->___corlib_value_type_11);
		if ((((Object_t*)(TypeBuilder_t1471 *)__this) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		ModuleBuilder_t1481 * L_9 = (__this->___pmodule_17);
		NullCheck(L_9);
		AssemblyBuilder_t1468 * L_10 = (L_9->___assemblyb_10);
		NullCheck(L_10);
		Type_t * L_11 = (L_10->___corlib_enum_type_12);
		G_B5_0 = ((((int32_t)((((Object_t*)(TypeBuilder_t1471 *)__this) == ((Object_t*)(Type_t *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B5_0 = 0;
	}

IL_0058:
	{
		return G_B5_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern MethodInfo TypeBuilder_MakeGenericType_m7960_MethodInfo;
extern "C" Type_t * TypeBuilder_MakeGenericType_m7960 (TypeBuilder_t1471 * __this, TypeU5BU5D_t138* ___typeArguments, MethodInfo* method)
{
	{
		Type_t * L_0 = Type_MakeGenericType_m5553(__this, ___typeArguments, /*hidden argument*/&Type_MakeGenericType_m5553_MethodInfo);
		return L_0;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1258  TypeBuilder_get_TypeHandle_m7961 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m7965(__this, /*hidden argument*/&TypeBuilder_check_created_m7965_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		NullCheck(L_0);
		RuntimeTypeHandle_t1258  L_1 = (RuntimeTypeHandle_t1258 )VirtFuncInvoker0< RuntimeTypeHandle_t1258  >::Invoke(&Type_get_TypeHandle_m6490_MethodInfo, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m7962 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		ModuleBuilder_t1481 * L_0 = (__this->___pmodule_17);
		NullCheck(L_0);
		AssemblyBuilder_t1468 * L_1 = (L_0->___assemblyb_10);
		NullCheck(L_1);
		bool L_2 = AssemblyBuilder_get_IsCompilerContext_m7787(L_1, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m7787_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m7963 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___created_19);
		return ((((int32_t)((((Object_t*)(Type_t *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t140 * TypeBuilder_not_supported_m7964 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_0, (String_t*) &_stringLiteral1733, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		return L_0;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m7965 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m7963(__this, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Exception_t140 * L_1 = TypeBuilder_not_supported_m7964(__this, /*hidden argument*/&TypeBuilder_not_supported_m7964_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern MethodInfo TypeBuilder_ToString_m7966_MethodInfo;
extern "C" String_t* TypeBuilder_ToString_m7966 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_FullName_m7934_MethodInfo, __this);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern MethodInfo TypeBuilder_IsAssignableFrom_m7967_MethodInfo;
extern "C" bool TypeBuilder_IsAssignableFrom_m7967 (TypeBuilder_t1471 * __this, Type_t * ___c, MethodInfo* method)
{
	{
		bool L_0 = Type_IsAssignableFrom_m4313(__this, ___c, /*hidden argument*/&Type_IsAssignableFrom_m4313_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern MethodInfo TypeBuilder_IsSubclassOf_m7968_MethodInfo;
extern "C" bool TypeBuilder_IsSubclassOf_m7968 (TypeBuilder_t1471 * __this, Type_t * ___c, MethodInfo* method)
{
	{
		bool L_0 = Type_IsSubclassOf_m6501(__this, ___c, /*hidden argument*/&Type_IsSubclassOf_m6501_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern MethodInfo TypeBuilder_IsAssignableTo_m7969_MethodInfo;
extern "C" bool TypeBuilder_IsAssignableTo_m7969 (TypeBuilder_t1471 * __this, Type_t * ___c, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t138* V_1 = {0};
	int32_t V_2 = 0;
	{
		if ((((Object_t*)(Type_t *)___c) != ((Object_t*)(TypeBuilder_t1471 *)__this)))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		NullCheck(___c);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6482_MethodInfo, ___c);
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_1 = (__this->___parent_10);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		bool L_2 = TypeBuilder_get_is_created_m7963(__this, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_3 = (__this->___parent_10);
		NullCheck(___c);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4313_MethodInfo, ___c, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		TypeU5BU5D_t138* L_5 = (__this->___interfaces_12);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		TypeU5BU5D_t138* L_6 = (__this->___interfaces_12);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0056;
	}

IL_0043:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_7 = V_2;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(V_1, L_7));
		NullCheck(___c);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4313_MethodInfo, ___c, V_0);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		return 1;
	}

IL_0052:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_0056:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_9 = TypeBuilder_get_is_created_m7963(__this, /*hidden argument*/&TypeBuilder_get_is_created_m7963_MethodInfo);
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		return 0;
	}

IL_0066:
	{
		Type_t * L_10 = (__this->___parent_10);
		if (L_10)
		{
			goto IL_007c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		return ((((Object_t*)(Type_t *)___c) == ((Object_t*)(Type_t *)L_11))? 1 : 0);
	}

IL_007c:
	{
		Type_t * L_12 = (__this->___parent_10);
		NullCheck(___c);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4313_MethodInfo, ___c, L_12);
		return L_13;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern MethodInfo TypeBuilder_GetGenericArguments_m7970_MethodInfo;
extern TypeInfo* TypeU5BU5D_t138_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t138* TypeBuilder_GetGenericArguments_m7970 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	static bool TypeBuilder_GetGenericArguments_m7970_init;
	if (!TypeBuilder_GetGenericArguments_m7970_init)
	{
		TypeU5BU5D_t138_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t138_0_0_0);
		TypeBuilder_GetGenericArguments_m7970_init = true;
	}
	TypeU5BU5D_t138* V_0 = {0};
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_0 = (__this->___generic_params_18);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (TypeU5BU5D_t138*)NULL;
	}

IL_000a:
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_1 = (__this->___generic_params_18);
		NullCheck(L_1);
		V_0 = ((TypeU5BU5D_t138*)SZArrayNew(TypeU5BU5D_t138_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		GenericTypeParameterBuilderU5BU5D_t1480* L_2 = (__this->___generic_params_18);
		NullCheck(L_2);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4063_MethodInfo, L_2, (Array_t *)(Array_t *)V_0, 0);
		return V_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern MethodInfo TypeBuilder_GetGenericTypeDefinition_m7971_MethodInfo;
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m7971 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_0 = (__this->___generic_params_18);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1739, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return __this;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern MethodInfo TypeBuilder_get_ContainsGenericParameters_m7972_MethodInfo;
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m7972 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_0 = (__this->___generic_params_18);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1480*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern MethodInfo TypeBuilder_get_IsGenericParameter_m7973_MethodInfo;
extern "C" bool TypeBuilder_get_IsGenericParameter_m7973 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	typedef bool (*TypeBuilder_get_IsGenericParameter_m7973_ftn) (TypeBuilder_t1471 *);
	static TypeBuilder_get_IsGenericParameter_m7973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TypeBuilder_get_IsGenericParameter_m7973_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m7974 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1480* L_0 = (__this->___generic_params_18);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1480*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern MethodInfo TypeBuilder_get_IsGenericType_m7975_MethodInfo;
extern "C" bool TypeBuilder_get_IsGenericType_m7975 (TypeBuilder_t1471 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&TypeBuilder_get_IsGenericTypeDefinition_m7974_MethodInfo, __this);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnmanagedMarshal_t1476_il2cpp_TypeInfo;
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshalMethodDeclarations.h"

// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h"
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
extern TypeInfo MarshalAsAttribute_t1267_il2cpp_TypeInfo;
// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttributeMethodDeclarations.h"
extern MethodInfo MarshalAsAttribute__ctor_m6544_MethodInfo;


// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.Emit.UnmanagedMarshal::ToMarshalAsAttribute()
extern MethodInfo UnmanagedMarshal_ToMarshalAsAttribute_m7976_MethodInfo;
extern "C" MarshalAsAttribute_t1267 * UnmanagedMarshal_ToMarshalAsAttribute_m7976 (UnmanagedMarshal_t1476 * __this, MethodInfo* method)
{
	MarshalAsAttribute_t1267 * V_0 = {0};
	{
		int32_t L_0 = (__this->___t_1);
		MarshalAsAttribute_t1267 * L_1 = (MarshalAsAttribute_t1267 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MarshalAsAttribute_t1267_il2cpp_TypeInfo));
		MarshalAsAttribute__ctor_m6544(L_1, L_0, /*hidden argument*/&MarshalAsAttribute__ctor_m6544_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = (__this->___tbase_2);
		NullCheck(V_0);
		V_0->___ArraySubType_1 = L_2;
		String_t* L_3 = (__this->___mcookie_4);
		NullCheck(V_0);
		V_0->___MarshalCookie_2 = L_3;
		String_t* L_4 = (__this->___marshaltype_5);
		NullCheck(V_0);
		V_0->___MarshalType_3 = L_4;
		Type_t * L_5 = (__this->___marshaltyperef_6);
		NullCheck(V_0);
		V_0->___MarshalTypeRef_4 = L_5;
		int32_t L_6 = (__this->___count_0);
		if ((((uint32_t)L_6) != ((uint32_t)(-1))))
		{
			goto IL_004e;
		}
	}
	{
		NullCheck(V_0);
		V_0->___SizeConst_5 = 0;
		goto IL_005a;
	}

IL_004e:
	{
		int32_t L_7 = (__this->___count_0);
		NullCheck(V_0);
		V_0->___SizeConst_5 = L_7;
	}

IL_005a:
	{
		int32_t L_8 = (__this->___param_num_7);
		if ((((uint32_t)L_8) != ((uint32_t)(-1))))
		{
			goto IL_006c;
		}
	}
	{
		NullCheck(V_0);
		V_0->___SizeParamIndex_6 = 0;
		goto IL_0079;
	}

IL_006c:
	{
		int32_t L_9 = (__this->___param_num_7);
		NullCheck(V_0);
		V_0->___SizeParamIndex_6 = (((int16_t)L_9));
	}

IL_0079:
	{
		return V_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.AmbiguousMatchException::.ctor()
extern "C" void AmbiguousMatchException__ctor_m7977 (AmbiguousMatchException_t1486 * __this, MethodInfo* method)
{
	{
		SystemException__ctor_m4066(__this, (String_t*) &_stringLiteral1740, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.String)
extern MethodInfo AmbiguousMatchException__ctor_m7978_MethodInfo;
extern "C" void AmbiguousMatchException__ctor_m7978 (AmbiguousMatchException_t1486 * __this, String_t* ___message, MethodInfo* method)
{
	{
		SystemException__ctor_m4066(__this, ___message, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo AmbiguousMatchException__ctor_m7979_MethodInfo;
extern "C" void AmbiguousMatchException__ctor_m7979 (AmbiguousMatchException_t1486 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		SystemException__ctor_m10124(__this, ___info, ___context, /*hidden argument*/&SystemException__ctor_m10124_MethodInfo);
		return;
	}
}
// System.Reflection.Assembly/ResolveEventHolder
#include "mscorlib_System_Reflection_Assembly_ResolveEventHolder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResolveEventHolder_t1487_il2cpp_TypeInfo;
// System.Reflection.Assembly/ResolveEventHolder
#include "mscorlib_System_Reflection_Assembly_ResolveEventHolderMethodDeclarations.h"



// System.Void System.Reflection.Assembly/ResolveEventHolder::.ctor()
extern MethodInfo ResolveEventHolder__ctor_m7980_MethodInfo;
extern "C" void ResolveEventHolder__ctor_m7980 (ResolveEventHolder_t1487 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
extern Il2CppType Module_t1259_0_0_0;
extern MethodInfo Assembly_ToString_m7994_MethodInfo;
extern MethodInfo Assembly_get_location_m7983_MethodInfo;
extern MethodInfo Assembly_GetType_m7991_MethodInfo;
extern MethodInfo Assembly_InternalGetType_m7990_MethodInfo;
extern MethodInfo AssemblyName__ctor_m8000_MethodInfo;
extern MethodInfo Assembly_FillName_m7992_MethodInfo;
extern MethodInfo Assembly_get_fullname_m7982_MethodInfo;
extern MethodInfo AppDomain_get_CurrentDomain_m9430_MethodInfo;
extern MethodInfo AppDomain_Load_m9432_MethodInfo;
extern MethodInfo Assembly_GetModules_m7998_MethodInfo;
extern MethodInfo Module_get_ScopeName_m8088_MethodInfo;
extern MethodInfo Assembly_GetModulesInternal_m7997_MethodInfo;
extern MethodInfo Module_IsResource_m8092_MethodInfo;
extern MethodInfo ArrayList_ToArray_m4020_MethodInfo;


// System.Void System.Reflection.Assembly::.ctor()
extern MethodInfo Assembly__ctor_m7981_MethodInfo;
extern "C" void Assembly__ctor_m7981 (Assembly_t795 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		ResolveEventHolder_t1487 * L_0 = (ResolveEventHolder_t1487 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ResolveEventHolder_t1487_il2cpp_TypeInfo));
		ResolveEventHolder__ctor_m7980(L_0, /*hidden argument*/&ResolveEventHolder__ctor_m7980_MethodInfo);
		__this->___resolve_event_holder_1 = L_0;
		return;
	}
}
// System.String System.Reflection.Assembly::get_fullname()
extern "C" String_t* Assembly_get_fullname_m7982 (Assembly_t795 * __this, MethodInfo* method)
{
	typedef String_t* (*Assembly_get_fullname_m7982_ftn) (Assembly_t795 *);
	static Assembly_get_fullname_m7982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_get_fullname_m7982_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_fullname()");
	return _il2cpp_icall_func(__this);
}
// System.String System.Reflection.Assembly::get_location()
extern "C" String_t* Assembly_get_location_m7983 (Assembly_t795 * __this, MethodInfo* method)
{
	typedef String_t* (*Assembly_get_location_m7983_ftn) (Assembly_t795 *);
	static Assembly_get_location_m7983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_get_location_m7983_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_location()");
	return _il2cpp_icall_func(__this);
}
// System.String System.Reflection.Assembly::get_FullName()
extern "C" String_t* Assembly_get_FullName_m7984 (Assembly_t795 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_ToString_m7994_MethodInfo, __this);
		return L_0;
	}
}
// System.String System.Reflection.Assembly::get_Location()
extern MethodInfo Assembly_get_Location_m7985_MethodInfo;
extern "C" String_t* Assembly_get_Location_m7985 (Assembly_t795 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		bool L_0 = (__this->___fromByteArray_8);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}

IL_000e:
	{
		String_t* L_1 = Assembly_get_location_m7983(__this, /*hidden argument*/&Assembly_get_location_m7983_MethodInfo);
		V_0 = L_1;
		return V_0;
	}
}
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern MethodInfo Assembly_IsDefined_m7986_MethodInfo;
extern "C" bool Assembly_IsDefined_m7986 (Assembly_t795 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		bool L_0 = MonoCustomAttrs_IsDefined_m9926(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_IsDefined_m9926_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo Assembly_GetCustomAttributes_m7987_MethodInfo;
extern "C" ObjectU5BU5D_t137* Assembly_GetCustomAttributes_m7987 (Assembly_t795 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_0;
	}
}
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern MethodInfo Assembly_GetManifestResourceInternal_m7988_MethodInfo;
extern "C" IntPtr_t98 Assembly_GetManifestResourceInternal_m7988 (Assembly_t795 * __this, String_t* ___name, int32_t* ___size, Module_t1259 ** ___module, MethodInfo* method)
{
	typedef IntPtr_t98 (*Assembly_GetManifestResourceInternal_m7988_ftn) (Assembly_t795 *, String_t*, int32_t*, Module_t1259 **);
	static Assembly_GetManifestResourceInternal_m7988_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetManifestResourceInternal_m7988_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)");
	return _il2cpp_icall_func(__this, ___name, ___size, ___module);
}
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern MethodInfo Assembly_GetType_m7989_MethodInfo;
extern "C" Type_t * Assembly_GetType_m7989 (Assembly_t795 * __this, String_t* ___name, bool ___throwOnError, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(&Assembly_GetType_m7991_MethodInfo, __this, ___name, ___throwOnError, 0);
		return L_0;
	}
}
// System.Type System.Reflection.Assembly::GetType(System.String)
extern MethodInfo Assembly_GetType_m3934_MethodInfo;
extern "C" Type_t * Assembly_GetType_m3934 (Assembly_t795 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(&Assembly_GetType_m7991_MethodInfo, __this, ___name, 0, 0);
		return L_0;
	}
}
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_InternalGetType_m7990 (Assembly_t795 * __this, Module_t1259 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method)
{
	typedef Type_t * (*Assembly_InternalGetType_m7990_ftn) (Assembly_t795 *, Module_t1259 *, String_t*, bool, bool);
	static Assembly_InternalGetType_m7990_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_InternalGetType_m7990_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, ___module, ___name, ___throwOnError, ___ignoreCase);
}
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_GetType_m7991 (Assembly_t795 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method)
{
	{
		if (___name)
		{
			goto IL_000a;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, ___name, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000a:
	{
		NullCheck(___name);
		int32_t L_1 = String_get_Length_m133(___name, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_2, (String_t*) &_stringLiteral528, (String_t*) &_stringLiteral1741, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		Type_t * L_3 = Assembly_InternalGetType_m7990(__this, (Module_t1259 *)NULL, ___name, ___throwOnError, ___ignoreCase, /*hidden argument*/&Assembly_InternalGetType_m7990_MethodInfo);
		return L_3;
	}
}
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C" void Assembly_FillName_m7992 (Object_t * __this /* static, unused */, Assembly_t795 * ___ass, AssemblyName_t1470 * ___aname, MethodInfo* method)
{
	typedef void (*Assembly_FillName_m7992_ftn) (Assembly_t795 *, AssemblyName_t1470 *);
	static Assembly_FillName_m7992_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_FillName_m7992_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)");
	_il2cpp_icall_func(___ass, ___aname);
}
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C" AssemblyName_t1470 * Assembly_UnprotectedGetName_m7993 (Assembly_t795 * __this, MethodInfo* method)
{
	AssemblyName_t1470 * V_0 = {0};
	{
		AssemblyName_t1470 * L_0 = (AssemblyName_t1470 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AssemblyName_t1470_il2cpp_TypeInfo));
		AssemblyName__ctor_m8000(L_0, /*hidden argument*/&AssemblyName__ctor_m8000_MethodInfo);
		V_0 = L_0;
		Assembly_FillName_m7992(NULL /*static, unused*/, __this, V_0, /*hidden argument*/&Assembly_FillName_m7992_MethodInfo);
		return V_0;
	}
}
// System.String System.Reflection.Assembly::ToString()
extern "C" String_t* Assembly_ToString_m7994 (Assembly_t795 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assemblyName_9);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___assemblyName_9);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = Assembly_get_fullname_m7982(__this, /*hidden argument*/&Assembly_get_fullname_m7982_MethodInfo);
		__this->___assemblyName_9 = L_2;
		String_t* L_3 = (__this->___assemblyName_9);
		return L_3;
	}
}
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern MethodInfo Assembly_Load_m7995_MethodInfo;
extern "C" Assembly_t795 * Assembly_Load_m7995 (Object_t * __this /* static, unused */, String_t* ___assemblyString, MethodInfo* method)
{
	{
		AppDomain_t1769 * L_0 = AppDomain_get_CurrentDomain_m9430(NULL /*static, unused*/, /*hidden argument*/&AppDomain_get_CurrentDomain_m9430_MethodInfo);
		NullCheck(L_0);
		Assembly_t795 * L_1 = AppDomain_Load_m9432(L_0, ___assemblyString, /*hidden argument*/&AppDomain_Load_m9432_MethodInfo);
		return L_1;
	}
}
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern MethodInfo Assembly_GetModule_m7996_MethodInfo;
extern "C" Module_t1259 * Assembly_GetModule_m7996 (Assembly_t795 * __this, String_t* ___name, MethodInfo* method)
{
	ModuleU5BU5D_t1469* V_0 = {0};
	Module_t1259 * V_1 = {0};
	ModuleU5BU5D_t1469* V_2 = {0};
	int32_t V_3 = 0;
	{
		if (___name)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral528, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		NullCheck(___name);
		int32_t L_1 = String_get_Length_m133(___name, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral1742, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0021:
	{
		ModuleU5BU5D_t1469* L_3 = (ModuleU5BU5D_t1469*)VirtFuncInvoker1< ModuleU5BU5D_t1469*, bool >::Invoke(&Assembly_GetModules_m7998_MethodInfo, __this, 1);
		V_0 = L_3;
		V_2 = V_0;
		V_3 = 0;
		goto IL_0047;
	}

IL_002f:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		int32_t L_4 = V_3;
		V_1 = (*(Module_t1259 **)(Module_t1259 **)SZArrayLdElema(V_2, L_4));
		NullCheck(V_1);
		String_t* L_5 = Module_get_ScopeName_m8088(V_1, /*hidden argument*/&Module_get_ScopeName_m8088_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Equality_m145(NULL /*static, unused*/, L_5, ___name, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		return V_1;
	}

IL_0043:
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_0047:
	{
		NullCheck(V_2);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)V_2)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (Module_t1259 *)NULL;
	}
}
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C" ModuleU5BU5D_t1469* Assembly_GetModulesInternal_m7997 (Assembly_t795 * __this, MethodInfo* method)
{
	typedef ModuleU5BU5D_t1469* (*Assembly_GetModulesInternal_m7997_ftn) (Assembly_t795 *);
	static Assembly_GetModulesInternal_m7997_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetModulesInternal_m7997_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetModulesInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern TypeInfo* ModuleU5BU5D_t1469_il2cpp_TypeInfo_var;
extern "C" ModuleU5BU5D_t1469* Assembly_GetModules_m7998 (Assembly_t795 * __this, bool ___getResourceModules, MethodInfo* method)
{
	static bool Assembly_GetModules_m7998_init;
	if (!Assembly_GetModules_m7998_init)
	{
		ModuleU5BU5D_t1469_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ModuleU5BU5D_t1469_0_0_0);
		Assembly_GetModules_m7998_init = true;
	}
	ModuleU5BU5D_t1469* V_0 = {0};
	ArrayList_t610 * V_1 = {0};
	Module_t1259 * V_2 = {0};
	ModuleU5BU5D_t1469* V_3 = {0};
	int32_t V_4 = 0;
	{
		ModuleU5BU5D_t1469* L_0 = (ModuleU5BU5D_t1469*)VirtFuncInvoker0< ModuleU5BU5D_t1469* >::Invoke(&Assembly_GetModulesInternal_m7997_MethodInfo, __this);
		V_0 = L_0;
		if (___getResourceModules)
		{
			goto IL_0052;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList_t610 * L_1 = (ArrayList_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t610_il2cpp_TypeInfo));
		ArrayList__ctor_m4044(L_1, (((int32_t)(((Array_t *)V_0)->max_length))), /*hidden argument*/&ArrayList__ctor_m4044_MethodInfo);
		V_1 = L_1;
		V_3 = V_0;
		V_4 = 0;
		goto IL_0035;
	}

IL_001a:
	{
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_4);
		int32_t L_2 = V_4;
		V_2 = (*(Module_t1259 **)(Module_t1259 **)SZArrayLdElema(V_3, L_2));
		NullCheck(V_2);
		bool L_3 = Module_IsResource_m8092(V_2, /*hidden argument*/&Module_IsResource_m8092_MethodInfo);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck(V_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m3885_MethodInfo, V_1, V_2);
	}

IL_002f:
	{
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
	}

IL_0035:
	{
		NullCheck(V_3);
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((Array_t *)V_3)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Module_t1259_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(V_1);
		Array_t * L_5 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m4020_MethodInfo, V_1, L_4);
		return ((ModuleU5BU5D_t1469*)Castclass(L_5, ModuleU5BU5D_t1469_il2cpp_TypeInfo_var));
	}

IL_0052:
	{
		return V_0;
	}
}
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern MethodInfo Assembly_GetExecutingAssembly_m7999_MethodInfo;
extern "C" Assembly_t795 * Assembly_GetExecutingAssembly_m7999 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Assembly_t795 * (*Assembly_GetExecutingAssembly_m7999_ftn) ();
	static Assembly_GetExecutingAssembly_m7999_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetExecutingAssembly_m7999_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetExecutingAssembly()");
	return _il2cpp_icall_func();
}
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyCompanyAttribute_t591_il2cpp_TypeInfo;
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3848_MethodInfo;


// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
extern MethodInfo AssemblyCompanyAttribute__ctor_m2974_MethodInfo;
extern "C" void AssemblyCompanyAttribute__ctor_m2974 (AssemblyCompanyAttribute_t591 * __this, String_t* ___company, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___company;
		return;
	}
}
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyConfigurationAttribute_t593_il2cpp_TypeInfo;
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
extern MethodInfo AssemblyConfigurationAttribute__ctor_m2976_MethodInfo;
extern "C" void AssemblyConfigurationAttribute__ctor_m2976 (AssemblyConfigurationAttribute_t593 * __this, String_t* ___configuration, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___configuration;
		return;
	}
}
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyCopyrightAttribute_t590_il2cpp_TypeInfo;
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
extern MethodInfo AssemblyCopyrightAttribute__ctor_m2973_MethodInfo;
extern "C" void AssemblyCopyrightAttribute__ctor_m2973 (AssemblyCopyrightAttribute_t590 * __this, String_t* ___copyright, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___copyright;
		return;
	}
}
// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyDefaultAliasAttribute_t838_il2cpp_TypeInfo;
// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDefaultAliasAttribute::.ctor(System.String)
extern MethodInfo AssemblyDefaultAliasAttribute__ctor_m4223_MethodInfo;
extern "C" void AssemblyDefaultAliasAttribute__ctor_m4223 (AssemblyDefaultAliasAttribute_t838 * __this, String_t* ___defaultAlias, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___defaultAlias;
		return;
	}
}
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyDelaySignAttribute_t841_il2cpp_TypeInfo;
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDelaySignAttribute::.ctor(System.Boolean)
extern MethodInfo AssemblyDelaySignAttribute__ctor_m4226_MethodInfo;
extern "C" void AssemblyDelaySignAttribute__ctor_m4226 (AssemblyDelaySignAttribute_t841 * __this, bool ___delaySign, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___delay_0 = ___delaySign;
		return;
	}
}
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyDescriptionAttribute_t586_il2cpp_TypeInfo;
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2969_MethodInfo;
extern "C" void AssemblyDescriptionAttribute__ctor_m2969 (AssemblyDescriptionAttribute_t586 * __this, String_t* ___description, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___description;
		return;
	}
}
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyFileVersionAttribute_t584_il2cpp_TypeInfo;
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
extern MethodInfo AssemblyFileVersionAttribute__ctor_m2967_MethodInfo;
extern "C" void AssemblyFileVersionAttribute__ctor_m2967 (AssemblyFileVersionAttribute_t584 * __this, String_t* ___version, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		if (___version)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral465, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		__this->___name_0 = ___version;
		return;
	}
}
// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttri.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyInformationalVersionAttribute_t840_il2cpp_TypeInfo;
// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttriMethodDeclarations.h"



// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
extern MethodInfo AssemblyInformationalVersionAttribute__ctor_m4225_MethodInfo;
extern "C" void AssemblyInformationalVersionAttribute__ctor_m4225 (AssemblyInformationalVersionAttribute_t840 * __this, String_t* ___informationalVersion, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___informationalVersion;
		return;
	}
}
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyKeyFileAttribute_t844_il2cpp_TypeInfo;
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyKeyFileAttribute::.ctor(System.String)
extern MethodInfo AssemblyKeyFileAttribute__ctor_m4229_MethodInfo;
extern "C" void AssemblyKeyFileAttribute__ctor_m4229 (AssemblyKeyFileAttribute_t844 * __this, String_t* ___keyFile, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___keyFile;
		return;
	}
}
// System.Reflection.AssemblyKeyNameAttribute
#include "mscorlib_System_Reflection_AssemblyKeyNameAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyKeyNameAttribute_t907_il2cpp_TypeInfo;
// System.Reflection.AssemblyKeyNameAttribute
#include "mscorlib_System_Reflection_AssemblyKeyNameAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyKeyNameAttribute::.ctor(System.String)
extern MethodInfo AssemblyKeyNameAttribute__ctor_m4396_MethodInfo;
extern "C" void AssemblyKeyNameAttribute__ctor_m4396 (AssemblyKeyNameAttribute_t907 * __this, String_t* ___keyName, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___keyName;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Version
#include "mscorlib_System_Version.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
// System.Configuration.Assemblies.AssemblyVersionCompatibility
#include "mscorlib_System_Configuration_Assemblies_AssemblyVersionComp.h"
// System.Configuration.Assemblies.AssemblyHashAlgorithm
#include "mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorit.h"
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPair.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityException.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// System.Security.Cryptography.SHA1
#include "mscorlib_System_Security_Cryptography_SHA1.h"
extern TypeInfo Version_t637_il2cpp_TypeInfo;
extern TypeInfo CryptographicException_t802_il2cpp_TypeInfo;
extern TypeInfo AssemblyHashAlgorithm_t1404_il2cpp_TypeInfo;
extern TypeInfo StrongNameKeyPair_t1490_il2cpp_TypeInfo;
extern TypeInfo AssemblyVersionCompatibility_t1405_il2cpp_TypeInfo;
extern TypeInfo AssemblyNameFlags_t1491_il2cpp_TypeInfo;
extern TypeInfo SecurityException_t1726_il2cpp_TypeInfo;
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.Byte
#include "mscorlib_System_ByteMethodDeclarations.h"
// Mono.Security.Cryptography.CryptoConvert
#include "mscorlib_Mono_Security_Cryptography_CryptoConvertMethodDeclarations.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityExceptionMethodDeclarations.h"
// System.Security.Cryptography.SHA1
#include "mscorlib_System_Security_Cryptography_SHA1MethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
extern Il2CppType Version_t637_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t1404_0_0_0;
extern Il2CppType StrongNameKeyPair_t1490_0_0_0;
extern Il2CppType AssemblyVersionCompatibility_t1405_0_0_0;
extern Il2CppType AssemblyNameFlags_t1491_0_0_0;
extern MethodInfo AssemblyName_get_Version_m8005_MethodInfo;
extern MethodInfo Version_op_Inequality_m10212_MethodInfo;
extern MethodInfo Version_ToString_m10209_MethodInfo;
extern MethodInfo AssemblyName_InternalGetPublicKeyToken_m8009_MethodInfo;
extern MethodInfo Byte_ToString_m3980_MethodInfo;
extern MethodInfo AssemblyName_get_Flags_m8003_MethodInfo;
extern MethodInfo Version_op_Equality_m10211_MethodInfo;
extern MethodInfo Version_get_Major_m10201_MethodInfo;
extern MethodInfo Version_get_Minor_m10202_MethodInfo;
extern MethodInfo Version_get_Build_m10200_MethodInfo;
extern MethodInfo Version_get_Revision_m10203_MethodInfo;
extern MethodInfo CryptoConvert_FromCapiPublicKeyBlob_m6765_MethodInfo;
extern MethodInfo CryptoConvert_FromCapiPublicKeyBlob_m6764_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m3880_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m3894_MethodInfo;
extern MethodInfo CultureInfo__ctor_m7324_MethodInfo;
extern MethodInfo AssemblyName_get_FullName_m8004_MethodInfo;
extern MethodInfo Object_ToString_m228_MethodInfo;
extern MethodInfo AssemblyName_get_IsPublicKeyValid_m8008_MethodInfo;
extern MethodInfo SecurityException__ctor_m9104_MethodInfo;
extern MethodInfo AssemblyName_ComputePublicKeyToken_m8010_MethodInfo;
extern MethodInfo SHA1_Create_m4058_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m4059_MethodInfo;
extern MethodInfo Array_Reverse_m6445_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3879_MethodInfo;
extern MethodInfo AssemblyName_set_Version_m8006_MethodInfo;


// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m8000 (AssemblyName_t1470 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		__this->___versioncompat_12 = 1;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo AssemblyName__ctor_m8001_MethodInfo;
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" void AssemblyName__ctor_m8001 (AssemblyName_t1470 * __this, SerializationInfo_t612 * ___si, StreamingContext_t614  ___sc, MethodInfo* method)
{
	static bool AssemblyName__ctor_m8001_init;
	if (!AssemblyName__ctor_m8001_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		AssemblyName__ctor_m8001_init = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		NullCheck(___si);
		String_t* L_0 = SerializationInfo_GetString_m3892(___si, (String_t*) &_stringLiteral1749, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->___name_0 = L_0;
		NullCheck(___si);
		String_t* L_1 = SerializationInfo_GetString_m3892(___si, (String_t*) &_stringLiteral1750, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->___codebase_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Version_t637_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___si);
		Object_t * L_3 = SerializationInfo_GetValue_m3880(___si, (String_t*) &_stringLiteral1751, L_2, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->___version_13 = ((Version_t637 *)Castclass(L_3, InitializedTypeInfo(&Version_t637_il2cpp_TypeInfo)));
		Type_t * L_4 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t13_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___si);
		Object_t * L_5 = SerializationInfo_GetValue_m3880(___si, (String_t*) &_stringLiteral1752, L_4, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->___publicKey_10 = ((ByteU5BU5D_t13*)Castclass(L_5, ByteU5BU5D_t13_il2cpp_TypeInfo_var));
		Type_t * L_6 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t13_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___si);
		Object_t * L_7 = SerializationInfo_GetValue_m3880(___si, (String_t*) &_stringLiteral1753, L_6, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->___keyToken_11 = ((ByteU5BU5D_t13*)Castclass(L_7, ByteU5BU5D_t13_il2cpp_TypeInfo_var));
		Type_t * L_8 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&AssemblyHashAlgorithm_t1404_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___si);
		Object_t * L_9 = SerializationInfo_GetValue_m3880(___si, (String_t*) &_stringLiteral1754, L_8, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->___hashalg_8 = ((*(int32_t*)((int32_t*)UnBox (L_9, InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo)))));
		Type_t * L_10 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&StrongNameKeyPair_t1490_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___si);
		Object_t * L_11 = SerializationInfo_GetValue_m3880(___si, (String_t*) &_stringLiteral1755, L_10, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->___keypair_9 = ((StrongNameKeyPair_t1490 *)Castclass(L_11, InitializedTypeInfo(&StrongNameKeyPair_t1490_il2cpp_TypeInfo)));
		Type_t * L_12 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&AssemblyVersionCompatibility_t1405_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___si);
		Object_t * L_13 = SerializationInfo_GetValue_m3880(___si, (String_t*) &_stringLiteral1756, L_12, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->___versioncompat_12 = ((*(int32_t*)((int32_t*)UnBox (L_13, InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo)))));
		Type_t * L_14 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&AssemblyNameFlags_t1491_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___si);
		Object_t * L_15 = SerializationInfo_GetValue_m3880(___si, (String_t*) &_stringLiteral1757, L_14, /*hidden argument*/&SerializationInfo_GetValue_m3880_MethodInfo);
		__this->___flags_7 = ((*(int32_t*)((int32_t*)UnBox (L_15, InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo)))));
		NullCheck(___si);
		int32_t L_16 = SerializationInfo_GetInt32_m3894(___si, (String_t*) &_stringLiteral1758, /*hidden argument*/&SerializationInfo_GetInt32_m3894_MethodInfo);
		V_0 = L_16;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0124;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t791_il2cpp_TypeInfo));
		CultureInfo_t791 * L_17 = (CultureInfo_t791 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CultureInfo_t791_il2cpp_TypeInfo));
		CultureInfo__ctor_m7324(L_17, V_0, /*hidden argument*/&CultureInfo__ctor_m7324_MethodInfo);
		__this->___cultureinfo_6 = L_17;
	}

IL_0124:
	{
		return;
	}
}
// System.String System.Reflection.AssemblyName::get_Name()
extern MethodInfo AssemblyName_get_Name_m8002_MethodInfo;
extern "C" String_t* AssemblyName_get_Name_m8002 (AssemblyName_t1470 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m8003 (AssemblyName_t1470 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_7);
		return L_0;
	}
}
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C" String_t* AssemblyName_get_FullName_m8004 (AssemblyName_t1470 * __this, MethodInfo* method)
{
	StringBuilder_t154 * V_0 = {0};
	ByteU5BU5D_t13* V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = (__this->___name_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}

IL_000e:
	{
		StringBuilder_t154 * L_1 = (StringBuilder_t154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t154_il2cpp_TypeInfo));
		StringBuilder__ctor_m714(L_1, /*hidden argument*/&StringBuilder__ctor_m714_MethodInfo);
		V_0 = L_1;
		String_t* L_2 = (__this->___name_0);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_2, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		Version_t637 * L_3 = AssemblyName_get_Version_m8005(__this, /*hidden argument*/&AssemblyName_get_Version_m8005_MethodInfo);
		bool L_4 = Version_op_Inequality_m10212(NULL /*static, unused*/, L_3, (Version_t637 *)NULL, /*hidden argument*/&Version_op_Inequality_m10212_MethodInfo);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1743, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		Version_t637 * L_5 = AssemblyName_get_Version_m8005(__this, /*hidden argument*/&AssemblyName_get_Version_m8005_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Version_ToString_m10209_MethodInfo, L_5);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_6, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_004d:
	{
		CultureInfo_t791 * L_7 = (__this->___cultureinfo_6);
		if (!L_7)
		{
			goto IL_0098;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1744, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		CultureInfo_t791 * L_8 = (__this->___cultureinfo_6);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7334_MethodInfo, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t791_il2cpp_TypeInfo));
		CultureInfo_t791 * L_10 = CultureInfo_get_InvariantCulture_m3905(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3905_MethodInfo);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7334_MethodInfo, L_10);
		if ((((uint32_t)L_9) != ((uint32_t)L_11)))
		{
			goto IL_0086;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1745, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		goto IL_0098;
	}

IL_0086:
	{
		CultureInfo_t791 * L_12 = (__this->___cultureinfo_6);
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&CultureInfo_get_Name_m7335_MethodInfo, L_12);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_13, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0098:
	{
		ByteU5BU5D_t13* L_14 = AssemblyName_InternalGetPublicKeyToken_m8009(__this, /*hidden argument*/&AssemblyName_InternalGetPublicKeyToken_m8009_MethodInfo);
		V_1 = L_14;
		if (!V_1)
		{
			goto IL_00e7;
		}
	}
	{
		NullCheck(V_1);
		if ((((int32_t)(((Array_t *)V_1)->max_length))))
		{
			goto IL_00b5;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1746, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		goto IL_00e7;
	}

IL_00b5:
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1747, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		V_2 = 0;
		goto IL_00e1;
	}

IL_00c5:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		String_t* L_15 = Byte_ToString_m3980(((uint8_t*)(uint8_t*)SZArrayLdElema(V_1, V_2)), (String_t*) &_stringLiteral596, /*hidden argument*/&Byte_ToString_m3980_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_15, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_00e1:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_00e7:
	{
		int32_t L_16 = AssemblyName_get_Flags_m8003(__this, /*hidden argument*/&AssemblyName_get_Flags_m8003_MethodInfo);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)256))))
		{
			goto IL_0101;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1748, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0101:
	{
		NullCheck(V_0);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m716_MethodInfo, V_0);
		return L_17;
	}
}
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t637 * AssemblyName_get_Version_m8005 (AssemblyName_t1470 * __this, MethodInfo* method)
{
	{
		Version_t637 * L_0 = (__this->___version_13);
		return L_0;
	}
}
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m8006 (AssemblyName_t1470 * __this, Version_t637 * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		__this->___version_13 = ___value;
		bool L_0 = Version_op_Equality_m10211(NULL /*static, unused*/, ___value, (Version_t637 *)NULL, /*hidden argument*/&Version_op_Equality_m10211_MethodInfo);
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___revision_5 = L_1;
		int32_t L_2 = V_0;
		V_0 = L_2;
		__this->___build_4 = L_2;
		int32_t L_3 = V_0;
		V_0 = L_3;
		__this->___minor_3 = L_3;
		__this->___major_2 = V_0;
		goto IL_0064;
	}

IL_0034:
	{
		NullCheck(___value);
		int32_t L_4 = Version_get_Major_m10201(___value, /*hidden argument*/&Version_get_Major_m10201_MethodInfo);
		__this->___major_2 = L_4;
		NullCheck(___value);
		int32_t L_5 = Version_get_Minor_m10202(___value, /*hidden argument*/&Version_get_Minor_m10202_MethodInfo);
		__this->___minor_3 = L_5;
		NullCheck(___value);
		int32_t L_6 = Version_get_Build_m10200(___value, /*hidden argument*/&Version_get_Build_m10200_MethodInfo);
		__this->___build_4 = L_6;
		NullCheck(___value);
		int32_t L_7 = Version_get_Revision_m10203(___value, /*hidden argument*/&Version_get_Revision_m10203_MethodInfo);
		__this->___revision_5 = L_7;
	}

IL_0064:
	{
		return;
	}
}
// System.String System.Reflection.AssemblyName::ToString()
extern MethodInfo AssemblyName_ToString_m8007_MethodInfo;
extern "C" String_t* AssemblyName_ToString_m8007 (AssemblyName_t1470 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = AssemblyName_get_FullName_m8004(__this, /*hidden argument*/&AssemblyName_get_FullName_m8004_MethodInfo);
		V_0 = L_0;
		if (!V_0)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = V_0;
		goto IL_0013;
	}

IL_000d:
	{
		String_t* L_1 = Object_ToString_m228(__this, /*hidden argument*/&Object_ToString_m228_MethodInfo);
		G_B3_0 = L_1;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C" bool AssemblyName_get_IsPublicKeyValid_m8008 (AssemblyName_t1470 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		ByteU5BU5D_t13* L_0 = (__this->___publicKey_10);
		NullCheck(L_0);
		if ((((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) != ((uint32_t)((int32_t)16))))
		{
			goto IL_0032;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0012:
	{
		ByteU5BU5D_t13* L_1 = (__this->___publicKey_10);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3))));
	}

IL_0021:
	{
		ByteU5BU5D_t13* L_4 = (__this->___publicKey_10);
		NullCheck(L_4);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		if ((((uint32_t)V_1) != ((uint32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		ByteU5BU5D_t13* L_5 = (__this->___publicKey_10);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		int32_t L_6 = 0;
		V_2 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_6));
		if ((((int32_t)V_2) == ((int32_t)6)))
		{
			goto IL_007a;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)7)))
		{
			goto IL_0091;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0093;
	}

IL_0049:
	{
		ByteU5BU5D_t13* L_7 = (__this->___publicKey_10);
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_t13* L_8 = (__this->___publicKey_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)12));
		int32_t L_9 = ((int32_t)12);
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))) != ((uint32_t)6)))
		{
			goto IL_0078;
		}
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t13* L_10 = (__this->___publicKey_10);
			CryptoConvert_FromCapiPublicKeyBlob_m6765(NULL /*static, unused*/, L_10, ((int32_t)12), /*hidden argument*/&CryptoConvert_FromCapiPublicKeyBlob_m6765_MethodInfo);
			V_3 = 1;
			// IL_0071: leave.s IL_0095
			goto IL_0095;
		}

IL_0073:
		{
			// IL_0073: leave.s IL_0078
			goto IL_0078;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&CryptographicException_t802_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_0075;
		throw e;
	}

IL_0075:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		// IL_0076: leave.s IL_0078
		goto IL_0078;
	} // end catch (depth: 1)

IL_0078:
	{
		goto IL_0093;
	}

IL_007a:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t13* L_11 = (__this->___publicKey_10);
			CryptoConvert_FromCapiPublicKeyBlob_m6764(NULL /*static, unused*/, L_11, /*hidden argument*/&CryptoConvert_FromCapiPublicKeyBlob_m6764_MethodInfo);
			V_3 = 1;
			// IL_0088: leave.s IL_0095
			goto IL_0095;
		}

IL_008a:
		{
			// IL_008a: leave.s IL_008f
			goto IL_008f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&CryptographicException_t802_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_008c;
		throw e;
	}

IL_008c:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		// IL_008d: leave.s IL_008f
		goto IL_008f;
	} // end catch (depth: 1)

IL_008f:
	{
		goto IL_0093;
	}

IL_0091:
	{
		goto IL_0093;
	}

IL_0093:
	{
		return 0;
	}

IL_0095:
	{
		return V_3;
	}
}
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t13* AssemblyName_InternalGetPublicKeyToken_m8009 (AssemblyName_t1470 * __this, MethodInfo* method)
{
	static bool AssemblyName_InternalGetPublicKeyToken_m8009_init;
	if (!AssemblyName_InternalGetPublicKeyToken_m8009_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		AssemblyName_InternalGetPublicKeyToken_m8009_init = true;
	}
	{
		ByteU5BU5D_t13* L_0 = (__this->___keyToken_11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_t13* L_1 = (__this->___keyToken_11);
		return L_1;
	}

IL_000f:
	{
		ByteU5BU5D_t13* L_2 = (__this->___publicKey_10);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (ByteU5BU5D_t13*)NULL;
	}

IL_0019:
	{
		ByteU5BU5D_t13* L_3 = (__this->___publicKey_10);
		NullCheck(L_3);
		if ((((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		return ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, 0));
	}

IL_002a:
	{
		bool L_4 = AssemblyName_get_IsPublicKeyValid_m8008(__this, /*hidden argument*/&AssemblyName_get_IsPublicKeyValid_m8008_MethodInfo);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		SecurityException_t1726 * L_5 = (SecurityException_t1726 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SecurityException_t1726_il2cpp_TypeInfo));
		SecurityException__ctor_m9104(L_5, (String_t*) &_stringLiteral1759, /*hidden argument*/&SecurityException__ctor_m9104_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003d:
	{
		ByteU5BU5D_t13* L_6 = AssemblyName_ComputePublicKeyToken_m8010(__this, /*hidden argument*/&AssemblyName_ComputePublicKeyToken_m8010_MethodInfo);
		return L_6;
	}
}
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern TypeInfo* ByteU5BU5D_t13_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t13* AssemblyName_ComputePublicKeyToken_m8010 (AssemblyName_t1470 * __this, MethodInfo* method)
{
	static bool AssemblyName_ComputePublicKeyToken_m8010_init;
	if (!AssemblyName_ComputePublicKeyToken_m8010_init)
	{
		ByteU5BU5D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t13_0_0_0);
		AssemblyName_ComputePublicKeyToken_m8010_init = true;
	}
	HashAlgorithm_t1330 * V_0 = {0};
	ByteU5BU5D_t13* V_1 = {0};
	ByteU5BU5D_t13* V_2 = {0};
	{
		SHA1_t813 * L_0 = SHA1_Create_m4058(NULL /*static, unused*/, /*hidden argument*/&SHA1_Create_m4058_MethodInfo);
		V_0 = L_0;
		ByteU5BU5D_t13* L_1 = (__this->___publicKey_10);
		NullCheck(V_0);
		ByteU5BU5D_t13* L_2 = HashAlgorithm_ComputeHash_m4059(V_0, L_1, /*hidden argument*/&HashAlgorithm_ComputeHash_m4059_MethodInfo);
		V_1 = L_2;
		V_2 = ((ByteU5BU5D_t13*)SZArrayNew(ByteU5BU5D_t13_il2cpp_TypeInfo_var, 8));
		NullCheck(V_1);
		Array_Copy_m6433(NULL /*static, unused*/, (Array_t *)(Array_t *)V_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)V_1)->max_length)))-(int32_t)8)), (Array_t *)(Array_t *)V_2, 0, 8, /*hidden argument*/&Array_Copy_m6433_MethodInfo);
		Array_Reverse_m6445(NULL /*static, unused*/, (Array_t *)(Array_t *)V_2, 0, 8, /*hidden argument*/&Array_Reverse_m6445_MethodInfo);
		return V_2;
	}
}
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m8011 (AssemblyName_t1470 * __this, ByteU5BU5D_t13* ___publicKey, MethodInfo* method)
{
	{
		if (___publicKey)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_0 = (__this->___flags_7);
		__this->___flags_7 = ((int32_t)((int32_t)L_0^(int32_t)1));
		goto IL_0021;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___flags_7);
		__this->___flags_7 = ((int32_t)((int32_t)L_1|(int32_t)1));
	}

IL_0021:
	{
		__this->___publicKey_10 = ___publicKey;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m8012 (AssemblyName_t1470 * __this, ByteU5BU5D_t13* ___publicKeyToken, MethodInfo* method)
{
	{
		__this->___keyToken_11 = ___publicKeyToken;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo AssemblyName_GetObjectData_m8013_MethodInfo;
extern "C" void AssemblyName_GetObjectData_m8013 (AssemblyName_t1470 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	String_t* G_B4_0 = {0};
	SerializationInfo_t612 * G_B4_1 = {0};
	String_t* G_B3_0 = {0};
	SerializationInfo_t612 * G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = {0};
	SerializationInfo_t612 * G_B5_2 = {0};
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
		String_t* L_1 = (__this->___name_0);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1749, L_1, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		ByteU5BU5D_t13* L_2 = (__this->___publicKey_10);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1752, (Object_t *)(Object_t *)L_2, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		ByteU5BU5D_t13* L_3 = (__this->___keyToken_11);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1753, (Object_t *)(Object_t *)L_3, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		CultureInfo_t791 * L_4 = (__this->___cultureinfo_6);
		G_B3_0 = (String_t*) &_stringLiteral1758;
		G_B3_1 = ___info;
		if (!L_4)
		{
			G_B4_0 = (String_t*) &_stringLiteral1758;
			G_B4_1 = ___info;
			goto IL_005c;
		}
	}
	{
		CultureInfo_t791 * L_5 = (__this->___cultureinfo_6);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7334_MethodInfo, L_5);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_005d:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m3879(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/&SerializationInfo_AddValue_m3879_MethodInfo);
		String_t* L_7 = (__this->___codebase_1);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1750, L_7, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		Version_t637 * L_8 = AssemblyName_get_Version_m8005(__this, /*hidden argument*/&AssemblyName_get_Version_m8005_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1751, L_8, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		int32_t L_9 = (__this->___hashalg_8);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&AssemblyHashAlgorithm_t1404_il2cpp_TypeInfo), &L_10);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1754, L_11, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		int32_t L_12 = 0;
		Object_t * L_13 = Box(InitializedTypeInfo(&AssemblyHashAlgorithm_t1404_il2cpp_TypeInfo), &L_12);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1760, L_13, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		StrongNameKeyPair_t1490 * L_14 = (__this->___keypair_9);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1755, L_14, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		int32_t L_15 = (__this->___versioncompat_12);
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(InitializedTypeInfo(&AssemblyVersionCompatibility_t1405_il2cpp_TypeInfo), &L_16);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1756, L_17, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		int32_t L_18 = (__this->___flags_7);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&AssemblyNameFlags_t1491_il2cpp_TypeInfo), &L_19);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1757, L_20, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3895(___info, (String_t*) &_stringLiteral1761, NULL, /*hidden argument*/&SerializationInfo_AddValue_m3895_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern MethodInfo AssemblyName_OnDeserialization_m8014_MethodInfo;
extern "C" void AssemblyName_OnDeserialization_m8014 (AssemblyName_t1470 * __this, Object_t * ___sender, MethodInfo* method)
{
	{
		Version_t637 * L_0 = (__this->___version_13);
		AssemblyName_set_Version_m8006(__this, L_0, /*hidden argument*/&AssemblyName_set_Version_m8006_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlagsMethodDeclarations.h"



// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyProductAttribute_t589_il2cpp_TypeInfo;
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
extern MethodInfo AssemblyProductAttribute__ctor_m2972_MethodInfo;
extern "C" void AssemblyProductAttribute__ctor_m2972 (AssemblyProductAttribute_t589 * __this, String_t* ___product, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___product;
		return;
	}
}
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyTitleAttribute_t587_il2cpp_TypeInfo;
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
extern MethodInfo AssemblyTitleAttribute__ctor_m2970_MethodInfo;
extern "C" void AssemblyTitleAttribute__ctor_m2970 (AssemblyTitleAttribute_t587 * __this, String_t* ___title, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___title;
		return;
	}
}
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyTrademarkAttribute_t592_il2cpp_TypeInfo;
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyTrademarkAttribute::.ctor(System.String)
extern MethodInfo AssemblyTrademarkAttribute__ctor_m2975_MethodInfo;
extern "C" void AssemblyTrademarkAttribute__ctor_m2975 (AssemblyTrademarkAttribute_t592 * __this, String_t* ___trademark, MethodInfo* method)
{
	{
		Attribute__ctor_m3848(__this, /*hidden argument*/&Attribute__ctor_m3848_MethodInfo);
		__this->___name_0 = ___trademark;
		return;
	}
}
// System.Reflection.Binder/Default
#include "mscorlib_System_Reflection_Binder_Default.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Default_t1492_il2cpp_TypeInfo;
// System.Reflection.Binder/Default
#include "mscorlib_System_Reflection_Binder_DefaultMethodDeclarations.h"

// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Nullable`1
#include "mscorlib_System_Nullable_1.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
extern TypeInfo Enum_t61_il2cpp_TypeInfo;
extern TypeInfo Double_t243_il2cpp_TypeInfo;
extern TypeInfo Single_t57_il2cpp_TypeInfo;
extern TypeInfo IntPtr_t98_il2cpp_TypeInfo;
extern TypeInfo Convert_t47_il2cpp_TypeInfo;
extern TypeInfo Nullable_1_t1277_il2cpp_TypeInfo;
extern TypeInfo ParamArrayAttribute_t559_il2cpp_TypeInfo;
extern TypeInfo PropertyInfo_t1262_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
extern Il2CppType Char_t46_0_0_0;
extern Il2CppType Double_t243_0_0_0;
extern Il2CppType Single_t57_0_0_0;
extern Il2CppType IntPtr_t98_0_0_0;
extern Il2CppType Nullable_1_t1277_0_0_0;
extern Il2CppType Enum_t61_0_0_0;
extern Il2CppType ParamArrayAttribute_t559_0_0_0;
extern MethodInfo Binder__ctor_m8030_MethodInfo;
extern MethodInfo Object_GetType_m2357_MethodInfo;
extern MethodInfo Default_SelectMethod_m8024_MethodInfo;
extern MethodInfo Default_ReorderParameters_m8017_MethodInfo;
extern MethodInfo Array_Copy_m6432_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m4311_MethodInfo;
extern MethodInfo ParameterInfo_get_Name_m8224_MethodInfo;
extern MethodInfo Type_get_IsArray_m6476_MethodInfo;
extern MethodInfo Type_GetElementType_m5620_MethodInfo;
extern MethodInfo Default_IsArrayAssignable_m8018_MethodInfo;
extern MethodInfo Type_get_IsByRef_m6477_MethodInfo;
extern MethodInfo Type_IsInstanceOfType_m4292_MethodInfo;
extern MethodInfo Default_check_type_m8021_MethodInfo;
extern MethodInfo Enum_ToObject_m6359_MethodInfo;
extern MethodInfo Type_get_IsPointer_m6484_MethodInfo;
extern MethodInfo Convert_ChangeType_m9692_MethodInfo;
extern MethodInfo Enum_GetUnderlyingType_m6350_MethodInfo;
extern MethodInfo Type_get_IsGenericType_m6521_MethodInfo;
extern MethodInfo Type_GetGenericTypeDefinition_m6520_MethodInfo;
extern MethodInfo Type_GetGenericArguments_m6516_MethodInfo;
extern MethodInfo Type_GetTypeCode_m4293_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m4312_MethodInfo;
extern MethodInfo Attribute_IsDefined_m5763_MethodInfo;
extern MethodInfo Default_check_arguments_m8022_MethodInfo;
extern MethodInfo Default_GetBetterMethod_m8025_MethodInfo;
extern MethodInfo MethodBase_get_IsGenericMethodDefinition_m8073_MethodInfo;
extern MethodInfo Default_CompareCloserType_m8026_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m5530_MethodInfo;
extern MethodInfo Type_get_IsGenericParameter_m6523_MethodInfo;
extern MethodInfo PropertyInfo_GetIndexParameters_m10325_MethodInfo;
extern MethodInfo PropertyInfo_get_PropertyType_m10326_MethodInfo;
extern MethodInfo Default_check_arguments_with_score_m8028_MethodInfo;
extern MethodInfo Binder_GetDerivedLevel_m8034_MethodInfo;
extern MethodInfo Default_check_type_with_score_m8029_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisObject_t_m10328_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t137* p0, Object_t * p1, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10328(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t137*, Object_t *, MethodInfo*))Array_IndexOf_TisObject_t_m10328_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0)
#define Array_IndexOf_TisType_t_m10327(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, TypeU5BU5D_t138*, Type_t *, MethodInfo*))Array_IndexOf_TisObject_t_m10328_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Array_IndexOf_TisType_t_m10327_GenericMethod;


// System.Void System.Reflection.Binder/Default::.ctor()
extern MethodInfo Default__ctor_m8015_MethodInfo;
extern "C" void Default__ctor_m8015 (Default_t1492 * __this, MethodInfo* method)
{
	{
		Binder__ctor_m8030(__this, /*hidden argument*/&Binder__ctor_m8030_MethodInfo);
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
extern MethodInfo Default_BindToMethod_m8016_MethodInfo;
extern TypeInfo* TypeU5BU5D_t138_il2cpp_TypeInfo_var;
extern "C" MethodBase_t879 * Default_BindToMethod_m8016 (Default_t1492 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1493* ___match, ObjectU5BU5D_t137** ___args, ParameterModifierU5BU5D_t1116* ___modifiers, CultureInfo_t791 * ___culture, StringU5BU5D_t17* ___names, Object_t ** ___state, MethodInfo* method)
{
	static bool Default_BindToMethod_m8016_init;
	if (!Default_BindToMethod_m8016_init)
	{
		TypeU5BU5D_t138_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t138_0_0_0);
		Default_BindToMethod_m8016_init = true;
	}
	TypeU5BU5D_t138* V_0 = {0};
	int32_t V_1 = 0;
	MethodBase_t879 * V_2 = {0};
	{
		if ((*((ObjectU5BU5D_t137**)___args)))
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		V_0 = (((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3);
		goto IL_0037;
	}

IL_000c:
	{
		NullCheck((*((ObjectU5BU5D_t137**)___args)));
		V_0 = ((TypeU5BU5D_t138*)SZArrayNew(TypeU5BU5D_t138_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t137**)___args)))->max_length)))));
		V_1 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		NullCheck((*((ObjectU5BU5D_t137**)___args)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t137**)___args)), V_1);
		int32_t L_0 = V_1;
		if (!(*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t137**)___args)), L_0)))
		{
			goto IL_002c;
		}
	}
	{
		NullCheck((*((ObjectU5BU5D_t137**)___args)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t137**)___args)), V_1);
		int32_t L_1 = V_1;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t137**)___args)), L_1)));
		Type_t * L_2 = Object_GetType_m2357((*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t137**)___args)), L_1)), /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		ArrayElementTypeCheck (V_0, L_2);
		*((Type_t **)(Type_t **)SZArrayLdElema(V_0, V_1)) = (Type_t *)L_2;
	}

IL_002c:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0030:
	{
		NullCheck((*((ObjectU5BU5D_t137**)___args)));
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)(*((ObjectU5BU5D_t137**)___args)))->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_0037:
	{
		MethodBase_t879 * L_3 = Default_SelectMethod_m8024(__this, ___bindingAttr, ___match, V_0, ___modifiers, 1, /*hidden argument*/&Default_SelectMethod_m8024_MethodInfo);
		V_2 = L_3;
		*((Object_t **)(___state)) = (Object_t *)NULL;
		if (!___names)
		{
			goto IL_0056;
		}
	}
	{
		Default_ReorderParameters_m8017(__this, ___names, ___args, V_2, /*hidden argument*/&Default_ReorderParameters_m8017_MethodInfo);
	}

IL_0056:
	{
		return V_2;
	}
}
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" void Default_ReorderParameters_m8017 (Default_t1492 * __this, StringU5BU5D_t17* ___names, ObjectU5BU5D_t137** ___args, MethodBase_t879 * ___selected, MethodInfo* method)
{
	static bool Default_ReorderParameters_m8017_init;
	if (!Default_ReorderParameters_m8017_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		Default_ReorderParameters_m8017_init = true;
	}
	ObjectU5BU5D_t137* V_0 = {0};
	ParameterInfoU5BU5D_t887* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		NullCheck((*((ObjectU5BU5D_t137**)___args)));
		V_0 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t137**)___args)))->max_length)))));
		NullCheck((*((ObjectU5BU5D_t137**)___args)));
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)(*((ObjectU5BU5D_t137**)___args)), (Array_t *)(Array_t *)V_0, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t137**)___args)))->max_length))), /*hidden argument*/&Array_Copy_m6432_MethodInfo);
		NullCheck(___selected);
		ParameterInfoU5BU5D_t887* L_0 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, ___selected);
		V_1 = L_0;
		V_2 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_0044;
	}

IL_0025:
	{
		NullCheck(___names);
		IL2CPP_ARRAY_BOUNDS_CHECK(___names, V_2);
		int32_t L_1 = V_2;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_3);
		int32_t L_2 = V_3;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_1, L_2)));
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterInfo_get_Name_m8224_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_1, L_2)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_op_Equality_m145(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(___names, L_1)), L_3, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		NullCheck((*((ObjectU5BU5D_t137**)___args)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t137**)___args)), V_2);
		int32_t L_5 = V_2;
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_3);
		ArrayElementTypeCheck (V_0, (*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t137**)___args)), L_5)));
		*((Object_t **)(Object_t **)SZArrayLdElema(V_0, V_3)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t137**)___args)), L_5));
		goto IL_004a;
	}

IL_0040:
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_0044:
	{
		NullCheck(V_1);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_0025;
		}
	}

IL_004a:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_004e:
	{
		NullCheck(___names);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)___names)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((*((ObjectU5BU5D_t137**)___args)));
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)V_0, (Array_t *)(Array_t *)(*((ObjectU5BU5D_t137**)___args)), (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t137**)___args)))->max_length))), /*hidden argument*/&Array_Copy_m6432_MethodInfo);
		return;
	}
}
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
extern "C" bool Default_IsArrayAssignable_m8018 (Object_t * __this /* static, unused */, Type_t * ___object_type, Type_t * ___target_type, MethodInfo* method)
{
	{
		NullCheck(___object_type);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m6476_MethodInfo, ___object_type);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		NullCheck(___target_type);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m6476_MethodInfo, ___target_type);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		NullCheck(___object_type);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, ___object_type);
		NullCheck(___target_type);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, ___target_type);
		bool L_4 = Default_IsArrayAssignable_m8018(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Default_IsArrayAssignable_m8018_MethodInfo);
		return L_4;
	}

IL_0022:
	{
		NullCheck(___target_type);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4313_MethodInfo, ___target_type, ___object_type);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		return 0;
	}
}
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
extern MethodInfo Default_ChangeType_m8019_MethodInfo;
extern "C" Object_t * Default_ChangeType_m8019 (Default_t1492 * __this, Object_t * ___value, Type_t * ___type, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	Type_t * V_0 = {0};
	{
		if (___value)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		NullCheck(___value);
		Type_t * L_0 = Object_GetType_m2357(___value, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		V_0 = L_0;
		NullCheck(___type);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6477_MethodInfo, ___type);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck(___type);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, ___type);
		___type = L_2;
	}

IL_001e:
	{
		if ((((Object_t*)(Type_t *)V_0) == ((Object_t*)(Type_t *)___type)))
		{
			goto IL_002b;
		}
	}
	{
		NullCheck(___type);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Type_IsInstanceOfType_m4292_MethodInfo, ___type, ___value);
		if (!L_3)
		{
			goto IL_002d;
		}
	}

IL_002b:
	{
		return ___value;
	}

IL_002d:
	{
		NullCheck(V_0);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m6476_MethodInfo, V_0);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		NullCheck(___type);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m6476_MethodInfo, ___type);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		NullCheck(V_0);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, V_0);
		NullCheck(___type);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, ___type);
		bool L_8 = Default_IsArrayAssignable_m8018(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Default_IsArrayAssignable_m8018_MethodInfo);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		return ___value;
	}

IL_0052:
	{
		bool L_9 = Default_check_type_m8021(NULL /*static, unused*/, V_0, ___type, /*hidden argument*/&Default_check_type_m8021_MethodInfo);
		if (!L_9)
		{
			goto IL_00ce;
		}
	}
	{
		NullCheck(___type);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___type);
		if (!L_10)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Enum_t61_il2cpp_TypeInfo));
		Object_t * L_11 = Enum_ToObject_m6359(NULL /*static, unused*/, ___type, ___value, /*hidden argument*/&Enum_ToObject_m6359_MethodInfo);
		return L_11;
	}

IL_006e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_12 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Char_t46_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)V_0) != ((Object_t*)(Type_t *)L_12)))
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_13 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Double_t243_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___type) != ((Object_t*)(Type_t *)L_13)))
		{
			goto IL_0095;
		}
	}
	{
		double L_14 = (((double)((*(uint16_t*)((uint16_t*)UnBox (___value, InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo)))))));
		Object_t * L_15 = Box(InitializedTypeInfo(&Double_t243_il2cpp_TypeInfo), &L_14);
		return L_15;
	}

IL_0095:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Single_t57_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___type) != ((Object_t*)(Type_t *)L_16)))
		{
			goto IL_00af;
		}
	}
	{
		float L_17 = (((float)((*(uint16_t*)((uint16_t*)UnBox (___value, InitializedTypeInfo(&Char_t46_il2cpp_TypeInfo)))))));
		Object_t * L_18 = Box(InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), &L_17);
		return L_18;
	}

IL_00af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_19 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&IntPtr_t98_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)V_0) != ((Object_t*)(Type_t *)L_19)))
		{
			goto IL_00c6;
		}
	}
	{
		NullCheck(___type);
		bool L_20 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m6484_MethodInfo, ___type);
		if (!L_20)
		{
			goto IL_00c6;
		}
	}
	{
		return ___value;
	}

IL_00c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t47_il2cpp_TypeInfo));
		Object_t * L_21 = Convert_ChangeType_m9692(NULL /*static, unused*/, ___value, ___type, /*hidden argument*/&Convert_ChangeType_m9692_MethodInfo);
		return L_21;
	}

IL_00ce:
	{
		return NULL;
	}
}
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
extern MethodInfo Default_ReorderArgumentArray_m8020_MethodInfo;
extern "C" void Default_ReorderArgumentArray_m8020 (Default_t1492 * __this, ObjectU5BU5D_t137** ___args, Object_t * ___state, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
extern "C" bool Default_check_type_m8021 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B78_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B89_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B95_0 = 0;
	{
		if ((((Object_t*)(Type_t *)___from) != ((Object_t*)(Type_t *)___to)))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		if (___from)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		NullCheck(___to);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6477_MethodInfo, ___to);
		NullCheck(___from);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6477_MethodInfo, ___from);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		NullCheck(___to);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6482_MethodInfo, ___to);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck(___to);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4313_MethodInfo, ___to, ___from);
		return L_3;
	}

IL_002b:
	{
		NullCheck(___to);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___to);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Enum_t61_il2cpp_TypeInfo));
		Type_t * L_5 = Enum_GetUnderlyingType_m6350(NULL /*static, unused*/, ___to, /*hidden argument*/&Enum_GetUnderlyingType_m6350_MethodInfo);
		___to = L_5;
		if ((((Object_t*)(Type_t *)___from) != ((Object_t*)(Type_t *)___to)))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		NullCheck(___to);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericType_m6521_MethodInfo, ___to);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		NullCheck(___to);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetGenericTypeDefinition_m6520_MethodInfo, ___to);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Nullable_1_t1277_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)L_7) != ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_006a;
		}
	}
	{
		NullCheck(___to);
		TypeU5BU5D_t138* L_9 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&Type_GetGenericArguments_m6516_MethodInfo, ___to);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_9, L_10))) != ((Object_t*)(Type_t *)___from)))
		{
			goto IL_006a;
		}
	}
	{
		return 1;
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_11 = Type_GetTypeCode_m4293(NULL /*static, unused*/, ___from, /*hidden argument*/&Type_GetTypeCode_m4293_MethodInfo);
		V_0 = L_11;
		int32_t L_12 = Type_GetTypeCode_m4293(NULL /*static, unused*/, ___to, /*hidden argument*/&Type_GetTypeCode_m4293_MethodInfo);
		V_1 = L_12;
		V_2 = V_0;
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 0)
		{
			goto IL_00af;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 1)
		{
			goto IL_014a;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 2)
		{
			goto IL_00e7;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 3)
		{
			goto IL_01f1;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 4)
		{
			goto IL_01a1;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 5)
		{
			goto IL_0289;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 6)
		{
			goto IL_0241;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 7)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 8)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 9)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0320;
	}

IL_00af:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 0)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 2)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 3)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 4)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 5)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 6)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d9;
	}

IL_00d7:
	{
		return 1;
	}

IL_00d9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_13 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		return ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_13))? 1 : 0);
	}

IL_00e7:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 0)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 3)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 4)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 5)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 6)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 7)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 8)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 9)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 10)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_0121;
	}

IL_011f:
	{
		return 1;
	}

IL_0121:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_14 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_14)))
		{
			goto IL_0148;
		}
	}
	{
		NullCheck(___from);
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_15)
		{
			goto IL_0145;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		G_B28_0 = ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_16))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B28_0 = 0;
	}

IL_0146:
	{
		G_B30_0 = G_B28_0;
		goto IL_0149;
	}

IL_0148:
	{
		G_B30_0 = 1;
	}

IL_0149:
	{
		return G_B30_0;
	}

IL_014a:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 0)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 1)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 2)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 3)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 4)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 5)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 6)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 7)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0178;
	}

IL_0176:
	{
		return 1;
	}

IL_0178:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_17 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_17)))
		{
			goto IL_019f;
		}
	}
	{
		NullCheck(___from);
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_18)
		{
			goto IL_019c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_19 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		G_B38_0 = ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_19))? 1 : 0);
		goto IL_019d;
	}

IL_019c:
	{
		G_B38_0 = 0;
	}

IL_019d:
	{
		G_B40_0 = G_B38_0;
		goto IL_01a0;
	}

IL_019f:
	{
		G_B40_0 = 1;
	}

IL_01a0:
	{
		return G_B40_0;
	}

IL_01a1:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_01c6;
		}
	}
	{
		goto IL_01c8;
	}

IL_01c6:
	{
		return 1;
	}

IL_01c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_20 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_20)))
		{
			goto IL_01ef;
		}
	}
	{
		NullCheck(___from);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_21)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_22 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		G_B48_0 = ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_22))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B48_0 = 0;
	}

IL_01ed:
	{
		G_B50_0 = G_B48_0;
		goto IL_01f0;
	}

IL_01ef:
	{
		G_B50_0 = 1;
	}

IL_01f0:
	{
		return G_B50_0;
	}

IL_01f1:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0216;
		}
	}
	{
		goto IL_0218;
	}

IL_0216:
	{
		return 1;
	}

IL_0218:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_23 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_23)))
		{
			goto IL_023f;
		}
	}
	{
		NullCheck(___from);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_24)
		{
			goto IL_023c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_25 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		G_B58_0 = ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_25))? 1 : 0);
		goto IL_023d;
	}

IL_023c:
	{
		G_B58_0 = 0;
	}

IL_023d:
	{
		G_B60_0 = G_B58_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B60_0 = 1;
	}

IL_0240:
	{
		return G_B60_0;
	}

IL_0241:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_0260;
	}

IL_025e:
	{
		return 1;
	}

IL_0260:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_26 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_26)))
		{
			goto IL_0287;
		}
	}
	{
		NullCheck(___from);
		bool L_27 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_27)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_28 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		G_B68_0 = ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_28))? 1 : 0);
		goto IL_0285;
	}

IL_0284:
	{
		G_B68_0 = 0;
	}

IL_0285:
	{
		G_B70_0 = G_B68_0;
		goto IL_0288;
	}

IL_0287:
	{
		G_B70_0 = 1;
	}

IL_0288:
	{
		return G_B70_0;
	}

IL_0289:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_02a8;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_02a6;
		}
	}
	{
		goto IL_02a8;
	}

IL_02a6:
	{
		return 1;
	}

IL_02a8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_29 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_29)))
		{
			goto IL_02cf;
		}
	}
	{
		NullCheck(___from);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_30)
		{
			goto IL_02cc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_31 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		G_B78_0 = ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_31))? 1 : 0);
		goto IL_02cd;
	}

IL_02cc:
	{
		G_B78_0 = 0;
	}

IL_02cd:
	{
		G_B80_0 = G_B78_0;
		goto IL_02d0;
	}

IL_02cf:
	{
		G_B80_0 = 1;
	}

IL_02d0:
	{
		return G_B80_0;
	}

IL_02d1:
	{
		V_3 = V_1;
		if ((((int32_t)V_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_02df;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)14))))
		{
			goto IL_02df;
		}
	}
	{
		goto IL_02e1;
	}

IL_02df:
	{
		return 1;
	}

IL_02e1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_0308;
		}
	}
	{
		NullCheck(___from);
		bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_33)
		{
			goto IL_0305;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_34 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		G_B89_0 = ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_34))? 1 : 0);
		goto IL_0306;
	}

IL_0305:
	{
		G_B89_0 = 0;
	}

IL_0306:
	{
		G_B91_0 = G_B89_0;
		goto IL_0309;
	}

IL_0308:
	{
		G_B91_0 = 1;
	}

IL_0309:
	{
		return G_B91_0;
	}

IL_030a:
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)14))))
		{
			goto IL_031e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_35 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		G_B95_0 = ((((Object_t*)(Type_t *)___to) == ((Object_t*)(Type_t *)L_35))? 1 : 0);
		goto IL_031f;
	}

IL_031e:
	{
		G_B95_0 = 1;
	}

IL_031f:
	{
		return G_B95_0;
	}

IL_0320:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_36 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) != ((Object_t*)(Type_t *)L_36)))
		{
			goto IL_0337;
		}
	}
	{
		NullCheck(___from);
		bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6487_MethodInfo, ___from);
		if (!L_37)
		{
			goto IL_0337;
		}
	}
	{
		return 1;
	}

IL_0337:
	{
		NullCheck(___to);
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m6484_MethodInfo, ___to);
		if (!L_38)
		{
			goto IL_034e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_39 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&IntPtr_t98_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___from) != ((Object_t*)(Type_t *)L_39)))
		{
			goto IL_034e;
		}
	}
	{
		return 1;
	}

IL_034e:
	{
		NullCheck(___to);
		bool L_40 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4313_MethodInfo, ___to, ___from);
		return L_40;
	}
}
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
extern "C" bool Default_check_arguments_m8022 (Object_t * __this /* static, unused */, TypeU5BU5D_t138* ___types, ParameterInfoU5BU5D_t887* ___args, bool ___allowByRefMatch, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Type_t * V_2 = {0};
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		NullCheck(___types);
		IL2CPP_ARRAY_BOUNDS_CHECK(___types, V_0);
		int32_t L_0 = V_0;
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, V_0);
		int32_t L_1 = V_0;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(___args, L_1)));
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(___args, L_1)));
		bool L_3 = Default_check_type_m8021(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(___types, L_0)), L_2, /*hidden argument*/&Default_check_type_m8021_MethodInfo);
		V_1 = L_3;
		if (V_1)
		{
			goto IL_003b;
		}
	}
	{
		if (!___allowByRefMatch)
		{
			goto IL_003b;
		}
	}
	{
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, V_0);
		int32_t L_4 = V_0;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(___args, L_4)));
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(___args, L_4)));
		V_2 = L_5;
		NullCheck(V_2);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6477_MethodInfo, V_2);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		NullCheck(___types);
		IL2CPP_ARRAY_BOUNDS_CHECK(___types, V_0);
		int32_t L_7 = V_0;
		NullCheck(V_2);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, V_2);
		bool L_9 = Default_check_type_m8021(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(___types, L_7)), L_8, /*hidden argument*/&Default_check_type_m8021_MethodInfo);
		V_1 = L_9;
	}

IL_003b:
	{
		if (V_1)
		{
			goto IL_0040;
		}
	}
	{
		return 0;
	}

IL_0040:
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0044:
	{
		NullCheck(___types);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((Array_t *)___types)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo Default_SelectMethod_m8023_MethodInfo;
extern "C" MethodBase_t879 * Default_SelectMethod_m8023 (Default_t1492 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1493* ___match, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	{
		MethodBase_t879 * L_0 = Default_SelectMethod_m8024(__this, ___bindingAttr, ___match, ___types, ___modifiers, 0, /*hidden argument*/&Default_SelectMethod_m8024_MethodInfo);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
extern "C" MethodBase_t879 * Default_SelectMethod_m8024 (Default_t1492 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1493* ___match, TypeU5BU5D_t138* ___types, ParameterModifierU5BU5D_t1116* ___modifiers, bool ___allowByRefMatch, MethodInfo* method)
{
	MethodBase_t879 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ParameterInfoU5BU5D_t887* V_3 = {0};
	bool V_4 = false;
	Type_t * V_5 = {0};
	ParameterInfoU5BU5D_t887* V_6 = {0};
	MethodBase_t879 * V_7 = {0};
	ParameterInfoU5BU5D_t887* V_8 = {0};
	{
		if (___match)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1112, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		NullCheck(___match);
		IL2CPP_ARRAY_BOUNDS_CHECK(___match, V_1);
		int32_t L_1 = V_1;
		V_0 = (*(MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(___match, L_1));
		NullCheck(V_0);
		ParameterInfoU5BU5D_t887* L_2 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, V_0);
		V_3 = L_2;
		NullCheck(V_3);
		NullCheck(___types);
		if ((((int32_t)(((int32_t)(((Array_t *)V_3)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)___types)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004c;
	}

IL_0027:
	{
		V_2 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		NullCheck(___types);
		IL2CPP_ARRAY_BOUNDS_CHECK(___types, V_2);
		int32_t L_3 = V_2;
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_2);
		int32_t L_4 = V_2;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_3, L_4)));
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_3, L_4)));
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(___types, L_3))) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0044;
	}

IL_003a:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_003e:
	{
		NullCheck(___types);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)___types)->max_length))))))
		{
			goto IL_002b;
		}
	}

IL_0044:
	{
		NullCheck(___types);
		if ((((uint32_t)V_2) != ((uint32_t)(((int32_t)(((Array_t *)___types)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		return V_0;
	}

IL_004c:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0050:
	{
		NullCheck(___match);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)___match)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_4 = 0;
		V_5 = (Type_t *)NULL;
		V_1 = 0;
		goto IL_0102;
	}

IL_0063:
	{
		NullCheck(___match);
		IL2CPP_ARRAY_BOUNDS_CHECK(___match, V_1);
		int32_t L_6 = V_1;
		V_0 = (*(MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(___match, L_6));
		NullCheck(V_0);
		ParameterInfoU5BU5D_t887* L_7 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, V_0);
		V_6 = L_7;
		NullCheck(V_6);
		NullCheck(___types);
		if ((((int32_t)(((int32_t)(((Array_t *)V_6)->max_length)))) <= ((int32_t)(((int32_t)(((Array_t *)___types)->max_length))))))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_00fe;
	}

IL_007d:
	{
		NullCheck(V_6);
		if ((((int32_t)(((Array_t *)V_6)->max_length))))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_00fe;
	}

IL_0088:
	{
		NullCheck(V_6);
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, ((int32_t)((int32_t)(((int32_t)(((Array_t *)V_6)->max_length)))-(int32_t)1)));
		int32_t L_8 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)V_6)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&ParamArrayAttribute_t559_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		bool L_10 = Attribute_IsDefined_m5763(NULL /*static, unused*/, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_6, L_8)), L_9, /*hidden argument*/&Attribute_IsDefined_m5763_MethodInfo);
		V_4 = L_10;
		if (V_4)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00fe;
	}

IL_00a8:
	{
		NullCheck(V_6);
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, ((int32_t)((int32_t)(((int32_t)(((Array_t *)V_6)->max_length)))-(int32_t)1)));
		int32_t L_11 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)V_6)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_6, L_11)));
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_6, L_11)));
		NullCheck(L_12);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, L_12);
		V_5 = L_13;
		V_2 = 0;
		goto IL_00f0;
	}

IL_00c1:
	{
		NullCheck(V_6);
		if ((((int32_t)V_2) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)V_6)->max_length)))-(int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		NullCheck(___types);
		IL2CPP_ARRAY_BOUNDS_CHECK(___types, V_2);
		int32_t L_14 = V_2;
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_2);
		int32_t L_15 = V_2;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_6, L_15)));
		Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_6, L_15)));
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(___types, L_14))) == ((Object_t*)(Type_t *)L_16)))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_00f6;
	}

IL_00da:
	{
		NullCheck(V_6);
		if ((((int32_t)V_2) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)V_6)->max_length)))-(int32_t)1)))))
		{
			goto IL_00ec;
		}
	}
	{
		NullCheck(___types);
		IL2CPP_ARRAY_BOUNDS_CHECK(___types, V_2);
		int32_t L_17 = V_2;
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(___types, L_17))) == ((Object_t*)(Type_t *)V_5)))
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_00f6;
	}

IL_00ec:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_00f0:
	{
		NullCheck(___types);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)___types)->max_length))))))
		{
			goto IL_00c1;
		}
	}

IL_00f6:
	{
		NullCheck(___types);
		if ((((uint32_t)V_2) != ((uint32_t)(((int32_t)(((Array_t *)___types)->max_length))))))
		{
			goto IL_00fe;
		}
	}
	{
		return V_0;
	}

IL_00fe:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0102:
	{
		NullCheck(___match);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)___match)->max_length))))))
		{
			goto IL_0063;
		}
	}
	{
		if (!((int32_t)((int32_t)___bindingAttr&(int32_t)((int32_t)65536))))
		{
			goto IL_0116;
		}
	}
	{
		return (MethodBase_t879 *)NULL;
	}

IL_0116:
	{
		V_7 = (MethodBase_t879 *)NULL;
		V_1 = 0;
		goto IL_015b;
	}

IL_011d:
	{
		NullCheck(___match);
		IL2CPP_ARRAY_BOUNDS_CHECK(___match, V_1);
		int32_t L_18 = V_1;
		V_0 = (*(MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(___match, L_18));
		NullCheck(V_0);
		ParameterInfoU5BU5D_t887* L_19 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, V_0);
		V_8 = L_19;
		NullCheck(V_8);
		NullCheck(___types);
		if ((((int32_t)(((int32_t)(((Array_t *)V_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)___types)->max_length))))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0157;
	}

IL_0134:
	{
		bool L_20 = Default_check_arguments_m8022(NULL /*static, unused*/, ___types, V_8, ___allowByRefMatch, /*hidden argument*/&Default_check_arguments_m8022_MethodInfo);
		if (L_20)
		{
			goto IL_0142;
		}
	}
	{
		goto IL_0157;
	}

IL_0142:
	{
		if (!V_7)
		{
			goto IL_0154;
		}
	}
	{
		MethodBase_t879 * L_21 = Default_GetBetterMethod_m8025(__this, V_7, V_0, ___types, /*hidden argument*/&Default_GetBetterMethod_m8025_MethodInfo);
		V_7 = L_21;
		goto IL_0157;
	}

IL_0154:
	{
		V_7 = V_0;
	}

IL_0157:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_015b:
	{
		NullCheck(___match);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)___match)->max_length))))))
		{
			goto IL_011d;
		}
	}
	{
		return V_7;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
extern "C" MethodBase_t879 * Default_GetBetterMethod_m8025 (Default_t1492 * __this, MethodBase_t879 * ___m1, MethodBase_t879 * ___m2, TypeU5BU5D_t138* ___types, MethodInfo* method)
{
	ParameterInfoU5BU5D_t887* V_0 = {0};
	ParameterInfoU5BU5D_t887* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Type_t * V_5 = {0};
	Type_t * V_6 = {0};
	bool V_7 = false;
	bool V_8 = false;
	MethodBase_t879 * G_B19_0 = {0};
	{
		NullCheck(___m1);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m8073_MethodInfo, ___m1);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		NullCheck(___m2);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m8073_MethodInfo, ___m2);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return ___m2;
	}

IL_0012:
	{
		NullCheck(___m2);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m8073_MethodInfo, ___m2);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		NullCheck(___m1);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m8073_MethodInfo, ___m1);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		return ___m1;
	}

IL_0024:
	{
		NullCheck(___m1);
		ParameterInfoU5BU5D_t887* L_4 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, ___m1);
		V_0 = L_4;
		NullCheck(___m2);
		ParameterInfoU5BU5D_t887* L_5 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, ___m2);
		V_1 = L_5;
		V_2 = 0;
		V_3 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_3);
		int32_t L_6 = V_3;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_6)));
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_6)));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_3);
		int32_t L_8 = V_3;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_1, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_1, L_8)));
		int32_t L_10 = Default_CompareCloserType_m8026(__this, L_7, L_9, /*hidden argument*/&Default_CompareCloserType_m8026_MethodInfo);
		V_4 = L_10;
		if (!V_4)
		{
			goto IL_0062;
		}
	}
	{
		if (!V_2)
		{
			goto IL_0062;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)V_4)))
		{
			goto IL_0062;
		}
	}
	{
		AmbiguousMatchException_t1486 * L_11 = (AmbiguousMatchException_t1486 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1486_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m7977(L_11, /*hidden argument*/&AmbiguousMatchException__ctor_m7977_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0062:
	{
		if (!V_4)
		{
			goto IL_0069;
		}
	}
	{
		V_2 = V_4;
	}

IL_0069:
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_006d:
	{
		NullCheck(V_0);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		if (!V_2)
		{
			goto IL_007f;
		}
	}
	{
		if ((((int32_t)V_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		G_B19_0 = ___m2;
		goto IL_007e;
	}

IL_007d:
	{
		G_B19_0 = ___m1;
	}

IL_007e:
	{
		return G_B19_0;
	}

IL_007f:
	{
		NullCheck(___m1);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5530_MethodInfo, ___m1);
		V_5 = L_12;
		NullCheck(___m2);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5530_MethodInfo, ___m2);
		V_6 = L_13;
		if ((((Object_t*)(Type_t *)V_5) == ((Object_t*)(Type_t *)V_6)))
		{
			goto IL_00af;
		}
	}
	{
		NullCheck(V_5);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6501_MethodInfo, V_5, V_6);
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		return ___m1;
	}

IL_00a2:
	{
		NullCheck(V_6);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6501_MethodInfo, V_6, V_5);
		if (!L_15)
		{
			goto IL_00af;
		}
	}
	{
		return ___m2;
	}

IL_00af:
	{
		NullCheck(___m1);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8068_MethodInfo, ___m1);
		V_7 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_16&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		NullCheck(___m2);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8068_MethodInfo, ___m2);
		V_8 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_17&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (!V_7)
		{
			goto IL_00d9;
		}
	}
	{
		if (V_8)
		{
			goto IL_00d9;
		}
	}
	{
		return ___m2;
	}

IL_00d9:
	{
		if (!V_8)
		{
			goto IL_00e3;
		}
	}
	{
		if (V_7)
		{
			goto IL_00e3;
		}
	}
	{
		return ___m1;
	}

IL_00e3:
	{
		AmbiguousMatchException_t1486 * L_18 = (AmbiguousMatchException_t1486 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1486_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m7977(L_18, /*hidden argument*/&AmbiguousMatchException__ctor_m7977_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
extern MethodInfo* Array_IndexOf_TisType_t_m10327_MethodInfo_var;
extern "C" int32_t Default_CompareCloserType_m8026 (Default_t1492 * __this, Type_t * ___t1, Type_t * ___t2, MethodInfo* method)
{
	static bool Default_CompareCloserType_m8026_init;
	if (!Default_CompareCloserType_m8026_init)
	{
		Array_IndexOf_TisType_t_m10327_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Array_IndexOf_TisType_t_m10327_GenericMethod);
		Default_CompareCloserType_m8026_init = true;
	}
	{
		if ((((Object_t*)(Type_t *)___t1) != ((Object_t*)(Type_t *)___t2)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		NullCheck(___t1);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m6523_MethodInfo, ___t1);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		NullCheck(___t2);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m6523_MethodInfo, ___t2);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		NullCheck(___t1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m6523_MethodInfo, ___t1);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		NullCheck(___t2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m6523_MethodInfo, ___t2);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		return (-1);
	}

IL_002a:
	{
		NullCheck(___t1);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6474_MethodInfo, ___t1);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		NullCheck(___t2);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6474_MethodInfo, ___t2);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		NullCheck(___t1);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, ___t1);
		NullCheck(___t2);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, ___t2);
		int32_t L_8 = Default_CompareCloserType_m8026(__this, L_6, L_7, /*hidden argument*/&Default_CompareCloserType_m8026_MethodInfo);
		return L_8;
	}

IL_004d:
	{
		NullCheck(___t1);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6501_MethodInfo, ___t1, ___t2);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		return (-1);
	}

IL_0058:
	{
		NullCheck(___t2);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6501_MethodInfo, ___t2, ___t1);
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		NullCheck(___t1);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6482_MethodInfo, ___t1);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		NullCheck(___t2);
		TypeU5BU5D_t138* L_12 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&Type_GetInterfaces_m10324_MethodInfo, ___t2);
		int32_t L_13 = Array_IndexOf_TisType_t_m10327(NULL /*static, unused*/, L_12, ___t1, /*hidden argument*/Array_IndexOf_TisType_t_m10327_MethodInfo_var);
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		return 1;
	}

IL_007c:
	{
		NullCheck(___t2);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6482_MethodInfo, ___t2);
		if (!L_14)
		{
			goto IL_0095;
		}
	}
	{
		NullCheck(___t1);
		TypeU5BU5D_t138* L_15 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&Type_GetInterfaces_m10324_MethodInfo, ___t1);
		int32_t L_16 = Array_IndexOf_TisType_t_m10327(NULL /*static, unused*/, L_15, ___t2, /*hidden argument*/Array_IndexOf_TisType_t_m10327_MethodInfo_var);
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		return (-1);
	}

IL_0095:
	{
		return 0;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo Default_SelectProperty_m8027_MethodInfo;
extern "C" PropertyInfo_t1262 * Default_SelectProperty_m8027 (Default_t1492 * __this, int32_t ___bindingAttr, PropertyInfoU5BU5D_t1494* ___match, Type_t * ___returnType, TypeU5BU5D_t138* ___indexes, ParameterModifierU5BU5D_t1116* ___modifiers, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	PropertyInfo_t1262 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	PropertyInfo_t1262 * V_7 = {0};
	ParameterInfoU5BU5D_t887* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B6_0 = 0;
	{
		if (!___match)
		{
			goto IL_0008;
		}
	}
	{
		NullCheck(___match);
		if ((((int32_t)(((Array_t *)___match)->max_length))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		ArgumentException_t522 * L_0 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_0, (String_t*) &_stringLiteral1762, (String_t*) &_stringLiteral1112, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0018:
	{
		V_0 = ((((int32_t)((((Object_t*)(Type_t *)___returnType) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (!___indexes)
		{
			goto IL_002a;
		}
	}
	{
		NullCheck(___indexes);
		G_B6_0 = (((int32_t)(((Array_t *)___indexes)->max_length)));
		goto IL_002b;
	}

IL_002a:
	{
		G_B6_0 = (-1);
	}

IL_002b:
	{
		V_1 = G_B6_0;
		V_2 = (PropertyInfo_t1262 *)NULL;
		V_4 = ((int32_t)2147483646);
		V_5 = ((int32_t)2147483647);
		V_6 = 0;
		NullCheck(___match);
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)___match)->max_length)))-(int32_t)1));
		goto IL_00d6;
	}

IL_004a:
	{
		NullCheck(___match);
		IL2CPP_ARRAY_BOUNDS_CHECK(___match, V_3);
		int32_t L_1 = V_3;
		V_7 = (*(PropertyInfo_t1262 **)(PropertyInfo_t1262 **)SZArrayLdElema(___match, L_1));
		NullCheck(V_7);
		ParameterInfoU5BU5D_t887* L_2 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&PropertyInfo_GetIndexParameters_m10325_MethodInfo, V_7);
		V_8 = L_2;
		if ((((int32_t)V_1) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		NullCheck(V_8);
		if ((((int32_t)V_1) == ((int32_t)(((int32_t)(((Array_t *)V_8)->max_length))))))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00d2;
	}

IL_0068:
	{
		if (!V_0)
		{
			goto IL_0077;
		}
	}
	{
		NullCheck(V_7);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&PropertyInfo_get_PropertyType_m10326_MethodInfo, V_7);
		if ((((Object_t*)(Type_t *)L_3) == ((Object_t*)(Type_t *)___returnType)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_00d2;
	}

IL_0077:
	{
		V_9 = ((int32_t)2147483646);
		if ((((int32_t)V_1) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_4 = Default_check_arguments_with_score_m8028(NULL /*static, unused*/, ___indexes, V_8, /*hidden argument*/&Default_check_arguments_with_score_m8028_MethodInfo);
		V_9 = L_4;
		if ((((uint32_t)V_9) != ((uint32_t)(-1))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00d2;
	}

IL_0094:
	{
		NullCheck(V_7);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5530_MethodInfo, V_7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		int32_t L_6 = Binder_GetDerivedLevel_m8034(NULL /*static, unused*/, L_5, /*hidden argument*/&Binder_GetDerivedLevel_m8034_MethodInfo);
		V_10 = L_6;
		if (!V_2)
		{
			goto IL_00c7;
		}
	}
	{
		if ((((int32_t)V_4) >= ((int32_t)V_9)))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00d2;
	}

IL_00ad:
	{
		if ((((uint32_t)V_4) != ((uint32_t)V_9)))
		{
			goto IL_00c7;
		}
	}
	{
		if ((((uint32_t)V_6) != ((uint32_t)V_10)))
		{
			goto IL_00bf;
		}
	}
	{
		V_5 = V_9;
		goto IL_00d2;
	}

IL_00bf:
	{
		if ((((int32_t)V_6) <= ((int32_t)V_10)))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d2;
	}

IL_00c7:
	{
		V_2 = V_7;
		V_4 = V_9;
		V_6 = V_10;
	}

IL_00d2:
	{
		V_3 = ((int32_t)((int32_t)V_3-(int32_t)1));
	}

IL_00d6:
	{
		if ((((int32_t)V_3) >= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		if ((((int32_t)V_5) > ((int32_t)V_4)))
		{
			goto IL_00e9;
		}
	}
	{
		AmbiguousMatchException_t1486 * L_7 = (AmbiguousMatchException_t1486 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1486_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m7977(L_7, /*hidden argument*/&AmbiguousMatchException__ctor_m7977_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_00e9:
	{
		return V_2;
	}
}
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
extern "C" int32_t Default_check_arguments_with_score_m8028 (Object_t * __this /* static, unused */, TypeU5BU5D_t138* ___types, ParameterInfoU5BU5D_t887* ___args, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		NullCheck(___types);
		IL2CPP_ARRAY_BOUNDS_CHECK(___types, V_1);
		int32_t L_0 = V_1;
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, V_1);
		int32_t L_1 = V_1;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(___args, L_1)));
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(___args, L_1)));
		int32_t L_3 = Default_check_type_with_score_m8029(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(___types, L_0)), L_2, /*hidden argument*/&Default_check_type_with_score_m8029_MethodInfo);
		V_2 = L_3;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_001d:
	{
		if ((((int32_t)V_0) >= ((int32_t)V_2)))
		{
			goto IL_0023;
		}
	}
	{
		V_0 = V_2;
	}

IL_0023:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0027:
	{
		NullCheck(___types);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)___types)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		return V_0;
	}
}
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
extern "C" int32_t Default_check_type_with_score_m8029 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B76_0 = 0;
	int32_t G_B80_0 = 0;
	{
		if (___from)
		{
			goto IL_0010;
		}
	}
	{
		NullCheck(___to);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6487_MethodInfo, ___to);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_000f;
	}

IL_000e:
	{
		G_B4_0 = 0;
	}

IL_000f:
	{
		return G_B4_0;
	}

IL_0010:
	{
		if ((((Object_t*)(Type_t *)___from) != ((Object_t*)(Type_t *)___to)))
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) != ((Object_t*)(Type_t *)L_1)))
		{
			goto IL_0025;
		}
	}
	{
		return 4;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_2 = Type_GetTypeCode_m4293(NULL /*static, unused*/, ___from, /*hidden argument*/&Type_GetTypeCode_m4293_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = Type_GetTypeCode_m4293(NULL /*static, unused*/, ___to, /*hidden argument*/&Type_GetTypeCode_m4293_MethodInfo);
		V_1 = L_3;
		V_2 = V_0;
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 0)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 1)
		{
			goto IL_00ec;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 2)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 3)
		{
			goto IL_0175;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 4)
		{
			goto IL_0134;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 5)
		{
			goto IL_01ef;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 6)
		{
			goto IL_01b6;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 7)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 8)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)V_2-(int32_t)4)) == 9)
		{
			goto IL_0252;
		}
	}
	{
		goto IL_025c;
	}

IL_006a:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 0)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 1)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 2)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 3)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 4)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 5)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)8)) == 6)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0096;
	}

IL_0092:
	{
		return 0;
	}

IL_0094:
	{
		return 2;
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 0)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 1)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 2)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 3)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 4)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 5)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 6)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 7)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 8)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 9)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)4)) == 10)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 2;
	}

IL_00d2:
	{
		NullCheck(___from);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_4)
		{
			goto IL_00ea;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) != ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_00ea;
		}
	}
	{
		G_B23_0 = 1;
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B23_0 = (-1);
	}

IL_00eb:
	{
		return G_B23_0;
	}

IL_00ec:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 0)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 1)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 2)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 3)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 4)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 5)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 6)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)7)) == 7)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011a;
	}

IL_0118:
	{
		return 2;
	}

IL_011a:
	{
		NullCheck(___from);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_6)
		{
			goto IL_0132;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_7 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) != ((Object_t*)(Type_t *)L_7)))
		{
			goto IL_0132;
		}
	}
	{
		G_B31_0 = 1;
		goto IL_0133;
	}

IL_0132:
	{
		G_B31_0 = (-1);
	}

IL_0133:
	{
		return G_B31_0;
	}

IL_0134:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_015b;
	}

IL_0159:
	{
		return 2;
	}

IL_015b:
	{
		NullCheck(___from);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_8)
		{
			goto IL_0173;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) != ((Object_t*)(Type_t *)L_9)))
		{
			goto IL_0173;
		}
	}
	{
		G_B39_0 = 1;
		goto IL_0174;
	}

IL_0173:
	{
		G_B39_0 = (-1);
	}

IL_0174:
	{
		return G_B39_0;
	}

IL_0175:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_019a;
		}
	}
	{
		goto IL_019c;
	}

IL_019a:
	{
		return 2;
	}

IL_019c:
	{
		NullCheck(___from);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_10)
		{
			goto IL_01b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) != ((Object_t*)(Type_t *)L_11)))
		{
			goto IL_01b4;
		}
	}
	{
		G_B47_0 = 1;
		goto IL_01b5;
	}

IL_01b4:
	{
		G_B47_0 = (-1);
	}

IL_01b5:
	{
		return G_B47_0;
	}

IL_01b6:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_01d3;
		}
	}
	{
		goto IL_01d5;
	}

IL_01d3:
	{
		return 2;
	}

IL_01d5:
	{
		NullCheck(___from);
		bool L_12 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_12)
		{
			goto IL_01ed;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_13 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) != ((Object_t*)(Type_t *)L_13)))
		{
			goto IL_01ed;
		}
	}
	{
		G_B55_0 = 1;
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B55_0 = (-1);
	}

IL_01ee:
	{
		return G_B55_0;
	}

IL_01ef:
	{
		V_3 = V_1;
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_020e;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)V_3-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_020e;
	}

IL_020c:
	{
		return 2;
	}

IL_020e:
	{
		NullCheck(___from);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_14)
		{
			goto IL_0226;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_15 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) != ((Object_t*)(Type_t *)L_15)))
		{
			goto IL_0226;
		}
	}
	{
		G_B63_0 = 1;
		goto IL_0227;
	}

IL_0226:
	{
		G_B63_0 = (-1);
	}

IL_0227:
	{
		return G_B63_0;
	}

IL_0228:
	{
		V_3 = V_1;
		if ((((int32_t)V_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_0236;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)14))))
		{
			goto IL_0236;
		}
	}
	{
		goto IL_0238;
	}

IL_0236:
	{
		return 2;
	}

IL_0238:
	{
		NullCheck(___from);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6480_MethodInfo, ___from);
		if (!L_16)
		{
			goto IL_0250;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_17 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Enum_t61_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		if ((((Object_t*)(Type_t *)___to) != ((Object_t*)(Type_t *)L_17)))
		{
			goto IL_0250;
		}
	}
	{
		G_B72_0 = 1;
		goto IL_0251;
	}

IL_0250:
	{
		G_B72_0 = (-1);
	}

IL_0251:
	{
		return G_B72_0;
	}

IL_0252:
	{
		if ((((uint32_t)V_1) != ((uint32_t)((int32_t)14))))
		{
			goto IL_025a;
		}
	}
	{
		G_B76_0 = 2;
		goto IL_025b;
	}

IL_025a:
	{
		G_B76_0 = (-1);
	}

IL_025b:
	{
		return G_B76_0;
	}

IL_025c:
	{
		NullCheck(___to);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4313_MethodInfo, ___to, ___from);
		if (!L_18)
		{
			goto IL_0268;
		}
	}
	{
		G_B80_0 = 3;
		goto IL_0269;
	}

IL_0268:
	{
		G_B80_0 = (-1);
	}

IL_0269:
	{
		return G_B80_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
extern TypeInfo TargetParameterCountException_t1524_il2cpp_TypeInfo;
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"
extern MethodInfo TargetParameterCountException__ctor_m8245_MethodInfo;
extern MethodInfo Binder_ChangeType_m10329_MethodInfo;
extern MethodInfo Type_get_BaseType_m5496_MethodInfo;


// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m8030 (Binder_t1115 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Binder::.cctor()
extern MethodInfo Binder__cctor_m8031_MethodInfo;
extern "C" void Binder__cctor_m8031 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Default_t1492 * L_0 = (Default_t1492 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Default_t1492_il2cpp_TypeInfo));
		Default__ctor_m8015(L_0, /*hidden argument*/&Default__ctor_m8015_MethodInfo);
		((Binder_t1115_StaticFields*)InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo)->static_fields)->___default_binder_0 = L_0;
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
// System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
// System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object)
// System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t1115 * Binder_get_DefaultBinder_m8032 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		return (((Binder_t1115_StaticFields*)InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo)->static_fields)->___default_binder_0);
	}
}
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern MethodInfo Binder_ConvertArgs_m8033_MethodInfo;
extern "C" bool Binder_ConvertArgs_m8033 (Object_t * __this /* static, unused */, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___args, ParameterInfoU5BU5D_t887* ___pinfo, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		if (___args)
		{
			goto IL_0010;
		}
	}
	{
		NullCheck(___pinfo);
		if ((((int32_t)(((Array_t *)___pinfo)->max_length))))
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		TargetParameterCountException_t1524 * L_0 = (TargetParameterCountException_t1524 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1524_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8245(L_0, /*hidden argument*/&TargetParameterCountException__ctor_m8245_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0010:
	{
		NullCheck(___pinfo);
		NullCheck(___args);
		if ((((int32_t)(((int32_t)(((Array_t *)___pinfo)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)___args)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		TargetParameterCountException_t1524 * L_1 = (TargetParameterCountException_t1524 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1524_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8245(L_1, /*hidden argument*/&TargetParameterCountException__ctor_m8245_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001e:
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0022:
	{
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, V_0);
		int32_t L_2 = V_0;
		NullCheck(___pinfo);
		IL2CPP_ARRAY_BOUNDS_CHECK(___pinfo, V_0);
		int32_t L_3 = V_0;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(___pinfo, L_3)));
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(___pinfo, L_3)));
		NullCheck(___binder);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, Type_t *, CultureInfo_t791 * >::Invoke(&Binder_ChangeType_m10329_MethodInfo, ___binder, (*(Object_t **)(Object_t **)SZArrayLdElema(___args, L_2)), L_4, ___culture);
		V_1 = L_5;
		if (V_1)
		{
			goto IL_003f;
		}
	}
	{
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, V_0);
		int32_t L_6 = V_0;
		if (!(*(Object_t **)(Object_t **)SZArrayLdElema(___args, L_6)))
		{
			goto IL_003f;
		}
	}
	{
		return 0;
	}

IL_003f:
	{
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, V_0);
		ArrayElementTypeCheck (___args, V_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(___args, V_0)) = (Object_t *)V_1;
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0047:
	{
		NullCheck(___args);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((Array_t *)___args)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m8034 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	Type_t * V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = ___type;
		V_1 = 1;
		goto IL_0011;
	}

IL_0006:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
		NullCheck(V_0);
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m5496_MethodInfo, V_0);
		V_0 = L_0;
	}

IL_0011:
	{
		NullCheck(V_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m5496_MethodInfo, V_0);
		if (L_1)
		{
			goto IL_0006;
		}
	}
	{
		return V_1;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t879 * Binder_FindMostDerivedMatch_m8035 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1493* ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	MethodBase_t879 * V_4 = {0};
	int32_t V_5 = 0;
	ParameterInfoU5BU5D_t887* V_6 = {0};
	ParameterInfoU5BU5D_t887* V_7 = {0};
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		NullCheck(___match);
		V_2 = (((int32_t)(((Array_t *)___match)->max_length)));
		V_3 = 0;
		goto IL_009c;
	}

IL_000f:
	{
		NullCheck(___match);
		IL2CPP_ARRAY_BOUNDS_CHECK(___match, V_3);
		int32_t L_0 = V_3;
		V_4 = (*(MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(___match, L_0));
		NullCheck(V_4);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5530_MethodInfo, V_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		int32_t L_2 = Binder_GetDerivedLevel_m8034(NULL /*static, unused*/, L_1, /*hidden argument*/&Binder_GetDerivedLevel_m8034_MethodInfo);
		V_5 = L_2;
		if ((((uint32_t)V_5) != ((uint32_t)V_0)))
		{
			goto IL_002d;
		}
	}
	{
		AmbiguousMatchException_t1486 * L_3 = (AmbiguousMatchException_t1486 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1486_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m7977(L_3, /*hidden argument*/&AmbiguousMatchException__ctor_m7977_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002d:
	{
		if ((((int32_t)V_1) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		NullCheck(V_4);
		ParameterInfoU5BU5D_t887* L_4 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, V_4);
		V_6 = L_4;
		NullCheck(___match);
		IL2CPP_ARRAY_BOUNDS_CHECK(___match, V_1);
		int32_t L_5 = V_1;
		NullCheck((*(MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(___match, L_5)));
		ParameterInfoU5BU5D_t887* L_6 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, (*(MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(___match, L_5)));
		V_7 = L_6;
		V_8 = 1;
		NullCheck(V_6);
		NullCheck(V_7);
		if ((((int32_t)(((int32_t)(((Array_t *)V_6)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)V_7)->max_length))))))
		{
			goto IL_0056;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0056:
	{
		V_9 = 0;
		goto IL_007c;
	}

IL_005b:
	{
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_9);
		int32_t L_7 = V_9;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_6, L_7)));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_6, L_7)));
		NullCheck(V_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_7, V_9);
		int32_t L_9 = V_9;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_7, L_9)));
		if ((((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_10)))
		{
			goto IL_0076;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0076:
	{
		V_9 = ((int32_t)((int32_t)V_9+(int32_t)1));
	}

IL_007c:
	{
		NullCheck(V_6);
		if ((((int32_t)V_9) < ((int32_t)(((int32_t)(((Array_t *)V_6)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0084:
	{
		if (V_8)
		{
			goto IL_008e;
		}
	}
	{
		AmbiguousMatchException_t1486 * L_11 = (AmbiguousMatchException_t1486 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1486_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m7977(L_11, /*hidden argument*/&AmbiguousMatchException__ctor_m7977_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_008e:
	{
		if ((((int32_t)V_5) <= ((int32_t)V_0)))
		{
			goto IL_0098;
		}
	}
	{
		V_0 = V_5;
		V_1 = V_3;
	}

IL_0098:
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_009c:
	{
		if ((((int32_t)V_3) < ((int32_t)V_2)))
		{
			goto IL_000f;
		}
	}
	{
		NullCheck(___match);
		IL2CPP_ARRAY_BOUNDS_CHECK(___match, V_1);
		int32_t L_12 = V_1;
		return (*(MethodBase_t879 **)(MethodBase_t879 **)SZArrayLdElema(___match, L_12));
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventionsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
extern MethodInfo MethodBase__ctor_m8063_MethodInfo;
extern MethodInfo ConstructorInfo_Invoke_m10330_MethodInfo;


// System.Void System.Reflection.ConstructorInfo::.ctor()
extern MethodInfo ConstructorInfo__ctor_m8036_MethodInfo;
extern "C" void ConstructorInfo__ctor_m8036 (ConstructorInfo_t1131 * __this, MethodInfo* method)
{
	{
		MethodBase__ctor_m8063(__this, /*hidden argument*/&MethodBase__ctor_m8063_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.ConstructorInfo::.cctor()
extern MethodInfo ConstructorInfo__cctor_m8037_MethodInfo;
extern "C" void ConstructorInfo__cctor_m8037 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((ConstructorInfo_t1131_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t1131_il2cpp_TypeInfo)->static_fields)->___ConstructorName_0 = (String_t*) &_stringLiteral1763;
		((ConstructorInfo_t1131_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t1131_il2cpp_TypeInfo)->static_fields)->___TypeConstructorName_1 = (String_t*) &_stringLiteral1764;
		return;
	}
}
// System.Reflection.MemberTypes System.Reflection.ConstructorInfo::get_MemberType()
extern MethodInfo ConstructorInfo_get_MemberType_m8038_MethodInfo;
extern "C" int32_t ConstructorInfo_get_MemberType_m8038 (ConstructorInfo_t1131 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern MethodInfo ConstructorInfo_Invoke_m5555_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructorInfo_Invoke_m5555 (ConstructorInfo_t1131 * __this, ObjectU5BU5D_t137* ___parameters, MethodInfo* method)
{
	static bool ConstructorInfo_Invoke_m5555_init;
	if (!ConstructorInfo_Invoke_m5555_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		ConstructorInfo_Invoke_m5555_init = true;
	}
	{
		if (___parameters)
		{
			goto IL_000d;
		}
	}
	{
		___parameters = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 0));
	}

IL_000d:
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker4< Object_t *, int32_t, Binder_t1115 *, ObjectU5BU5D_t137*, CultureInfo_t791 * >::Invoke(&ConstructorInfo_Invoke_m10330_MethodInfo, __this, ((int32_t)512), (Binder_t1115 *)NULL, ___parameters, (CultureInfo_t791 *)NULL);
		return L_0;
	}
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventAttributes_t1496_il2cpp_TypeInfo;
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributesMethodDeclarations.h"



// System.Reflection.EventInfo/AddEventAdapter
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AddEventAdapter_t1497_il2cpp_TypeInfo;
// System.Reflection.EventInfo/AddEventAdapter
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapterMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"


// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern MethodInfo AddEventAdapter__ctor_m8039_MethodInfo;
extern "C" void AddEventAdapter__ctor_m8039 (AddEventAdapter_t1497 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern MethodInfo AddEventAdapter_Invoke_m8040_MethodInfo;
extern "C" void AddEventAdapter_Invoke_m8040 (AddEventAdapter_t1497 * __this, Object_t * ____this, Delegate_t494 * ___dele, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AddEventAdapter_Invoke_m8040((AddEventAdapter_t1497 *)__this->___prev_9,____this, ___dele, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, Delegate_t494 * ___dele, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ____this, Delegate_t494 * ___dele, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Delegate_t494 * ___dele, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AddEventAdapter_t1497(Il2CppObject* delegate, Object_t * ____this, Delegate_t494 * ___dele)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern MethodInfo AddEventAdapter_BeginInvoke_m8041_MethodInfo;
extern "C" Object_t * AddEventAdapter_BeginInvoke_m8041 (AddEventAdapter_t1497 * __this, Object_t * ____this, Delegate_t494 * ___dele, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ____this;
	__d_args[1] = ___dele;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern MethodInfo AddEventAdapter_EndInvoke_m8042_MethodInfo;
extern "C" void AddEventAdapter_EndInvoke_m8042 (AddEventAdapter_t1497 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfoMethodDeclarations.h"

extern MethodInfo EventInfo_GetAddMethod_m10331_MethodInfo;
extern MethodInfo MemberInfo__ctor_m6526_MethodInfo;


// System.Void System.Reflection.EventInfo::.ctor()
extern MethodInfo EventInfo__ctor_m8043_MethodInfo;
extern "C" void EventInfo__ctor_m8043 (EventInfo_t1260 * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m6526(__this, /*hidden argument*/&MemberInfo__ctor_m6526_MethodInfo);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.EventInfo::get_Attributes()
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern MethodInfo EventInfo_get_EventHandlerType_m8044_MethodInfo;
extern "C" Type_t * EventInfo_get_EventHandlerType_m8044 (EventInfo_t1260 * __this, MethodInfo* method)
{
	ParameterInfoU5BU5D_t887* V_0 = {0};
	MethodInfo_t871 * V_1 = {0};
	Type_t * V_2 = {0};
	{
		MethodInfo_t871 * L_0 = (MethodInfo_t871 *)VirtFuncInvoker1< MethodInfo_t871 *, bool >::Invoke(&EventInfo_GetAddMethod_m10331_MethodInfo, __this, 1);
		V_1 = L_0;
		NullCheck(V_1);
		ParameterInfoU5BU5D_t887* L_1 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MethodBase_GetParameters_m4311_MethodInfo, V_1);
		V_0 = L_1;
		NullCheck(V_0);
		if ((((int32_t)(((int32_t)(((Array_t *)V_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, 0);
		int32_t L_2 = 0;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_2)));
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_2)));
		V_2 = L_3;
		return V_2;
	}

IL_0020:
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MemberTypes System.Reflection.EventInfo::get_MemberType()
extern MethodInfo EventInfo_get_MemberType_m8045_MethodInfo;
extern "C" int32_t EventInfo_get_MemberType_m8045 (EventInfo_t1260 * __this, MethodInfo* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Reflection.MethodInfo System.Reflection.EventInfo::GetAddMethod(System.Boolean)
#ifndef _MSC_VER
#else
#endif
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttribute.h"
extern TypeInfo SystemException_t814_il2cpp_TypeInfo;
extern TypeInfo NonSerializedAttribute_t1827_il2cpp_TypeInfo;
extern TypeInfo FieldOffsetAttribute_t1272_il2cpp_TypeInfo;
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandleMethodDeclarations.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttributeMethodDeclarations.h"
extern MethodInfo FieldInfo_GetUnmanagedMarshal_m8055_MethodInfo;
extern MethodInfo FieldInfo_SetValue_m10332_MethodInfo;
extern MethodInfo RuntimeFieldHandle_get_Value_m6532_MethodInfo;
extern MethodInfo FieldInfo_internal_from_handle_type_m8052_MethodInfo;
extern MethodInfo FieldInfo_get_IsNotSerialized_m8050_MethodInfo;
extern MethodInfo Type_get_IsExplicitLayout_m6481_MethodInfo;
extern MethodInfo FieldInfo_get_UMarshal_m8056_MethodInfo;
extern MethodInfo NonSerializedAttribute__ctor_m9983_MethodInfo;
extern MethodInfo FieldInfo_GetFieldOffset_m8054_MethodInfo;
extern MethodInfo FieldOffsetAttribute__ctor_m6550_MethodInfo;


// System.Void System.Reflection.FieldInfo::.ctor()
extern MethodInfo FieldInfo__ctor_m8046_MethodInfo;
extern "C" void FieldInfo__ctor_m8046 (FieldInfo_t1261 * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m6526(__this, /*hidden argument*/&MemberInfo__ctor_m6526_MethodInfo);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes()
// System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle()
// System.Type System.Reflection.FieldInfo::get_FieldType()
// System.Object System.Reflection.FieldInfo::GetValue(System.Object)
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
extern MethodInfo FieldInfo_get_MemberType_m8047_MethodInfo;
extern "C" int32_t FieldInfo_get_MemberType_m8047 (FieldInfo_t1261 * __this, MethodInfo* method)
{
	{
		return (int32_t)(4);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern MethodInfo FieldInfo_get_IsLiteral_m8048_MethodInfo;
extern "C" bool FieldInfo_get_IsLiteral_m8048 (FieldInfo_t1261 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10273_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern MethodInfo FieldInfo_get_IsStatic_m8049_MethodInfo;
extern "C" bool FieldInfo_get_IsStatic_m8049 (FieldInfo_t1261 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10273_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
extern "C" bool FieldInfo_get_IsNotSerialized_m8050 (FieldInfo_t1261 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10273_MethodInfo, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern MethodInfo FieldInfo_SetValue_m8051_MethodInfo;
extern "C" void FieldInfo_SetValue_m8051 (FieldInfo_t1261 * __this, Object_t * ___obj, Object_t * ___value, MethodInfo* method)
{
	{
		VirtActionInvoker5< Object_t *, Object_t *, int32_t, Binder_t1115 *, CultureInfo_t791 * >::Invoke(&FieldInfo_SetValue_m10332_MethodInfo, __this, ___obj, ___value, 0, (Binder_t1115 *)NULL, (CultureInfo_t791 *)NULL);
		return;
	}
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
extern "C" FieldInfo_t1261 * FieldInfo_internal_from_handle_type_m8052 (Object_t * __this /* static, unused */, IntPtr_t98 ___field_handle, IntPtr_t98 ___type_handle, MethodInfo* method)
{
	typedef FieldInfo_t1261 * (*FieldInfo_internal_from_handle_type_m8052_ftn) (IntPtr_t98, IntPtr_t98);
	static FieldInfo_internal_from_handle_type_m8052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_internal_from_handle_type_m8052_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___field_handle, ___type_handle);
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
extern MethodInfo FieldInfo_GetFieldFromHandle_m8053_MethodInfo;
extern "C" FieldInfo_t1261 * FieldInfo_GetFieldFromHandle_m8053 (Object_t * __this /* static, unused */, RuntimeFieldHandle_t1264  ___handle, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = RuntimeFieldHandle_get_Value_m6532((&___handle), /*hidden argument*/&RuntimeFieldHandle_get_Value_m6532_MethodInfo);
		bool L_1 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, L_0, (((IntPtr_t98_StaticFields*)InitializedTypeInfo(&IntPtr_t98_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t522 * L_2 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_2, (String_t*) &_stringLiteral1765, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001e:
	{
		IntPtr_t98 L_3 = RuntimeFieldHandle_get_Value_m6532((&___handle), /*hidden argument*/&RuntimeFieldHandle_get_Value_m6532_MethodInfo);
		FieldInfo_t1261 * L_4 = FieldInfo_internal_from_handle_type_m8052(NULL /*static, unused*/, L_3, (((IntPtr_t98_StaticFields*)InitializedTypeInfo(&IntPtr_t98_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&FieldInfo_internal_from_handle_type_m8052_MethodInfo);
		return L_4;
	}
}
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
extern "C" int32_t FieldInfo_GetFieldOffset_m8054 (FieldInfo_t1261 * __this, MethodInfo* method)
{
	{
		SystemException_t814 * L_0 = (SystemException_t814 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SystemException_t814_il2cpp_TypeInfo));
		SystemException__ctor_m4066(L_0, (String_t*) &_stringLiteral1766, /*hidden argument*/&SystemException__ctor_m4066_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
extern "C" UnmanagedMarshal_t1476 * FieldInfo_GetUnmanagedMarshal_m8055 (FieldInfo_t1261 * __this, MethodInfo* method)
{
	typedef UnmanagedMarshal_t1476 * (*FieldInfo_GetUnmanagedMarshal_m8055_ftn) (FieldInfo_t1261 *);
	static FieldInfo_GetUnmanagedMarshal_m8055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_GetUnmanagedMarshal_m8055_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::GetUnmanagedMarshal()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
extern "C" UnmanagedMarshal_t1476 * FieldInfo_get_UMarshal_m8056 (FieldInfo_t1261 * __this, MethodInfo* method)
{
	{
		UnmanagedMarshal_t1476 * L_0 = FieldInfo_GetUnmanagedMarshal_m8055(__this, /*hidden argument*/&FieldInfo_GetUnmanagedMarshal_m8055_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
extern MethodInfo FieldInfo_GetPseudoCustomAttributes_m8057_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t137* FieldInfo_GetPseudoCustomAttributes_m8057 (FieldInfo_t1261 * __this, MethodInfo* method)
{
	static bool FieldInfo_GetPseudoCustomAttributes_m8057_init;
	if (!FieldInfo_GetPseudoCustomAttributes_m8057_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		FieldInfo_GetPseudoCustomAttributes_m8057_init = true;
	}
	int32_t V_0 = 0;
	UnmanagedMarshal_t1476 * V_1 = {0};
	ObjectU5BU5D_t137* V_2 = {0};
	{
		V_0 = 0;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsNotSerialized_m8050_MethodInfo, __this);
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
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5530_MethodInfo, __this);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsExplicitLayout_m6481_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_001f:
	{
		UnmanagedMarshal_t1476 * L_3 = (UnmanagedMarshal_t1476 *)VirtFuncInvoker0< UnmanagedMarshal_t1476 * >::Invoke(&FieldInfo_get_UMarshal_m8056_MethodInfo, __this);
		V_1 = L_3;
		if (!V_1)
		{
			goto IL_002d;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_002d:
	{
		if (V_0)
		{
			goto IL_0032;
		}
	}
	{
		return (ObjectU5BU5D_t137*)NULL;
	}

IL_0032:
	{
		V_2 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, V_0));
		V_0 = 0;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsNotSerialized_m8050_MethodInfo, __this);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		NonSerializedAttribute_t1827 * L_6 = (NonSerializedAttribute_t1827 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NonSerializedAttribute_t1827_il2cpp_TypeInfo));
		NonSerializedAttribute__ctor_m9983(L_6, /*hidden argument*/&NonSerializedAttribute__ctor_m9983_MethodInfo);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, L_5);
		ArrayElementTypeCheck (V_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_2, L_5)) = (Object_t *)L_6;
	}

IL_004f:
	{
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5530_MethodInfo, __this);
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsExplicitLayout_m6481_MethodInfo, L_7);
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_GetFieldOffset_m8054_MethodInfo, __this);
		FieldOffsetAttribute_t1272 * L_11 = (FieldOffsetAttribute_t1272 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FieldOffsetAttribute_t1272_il2cpp_TypeInfo));
		FieldOffsetAttribute__ctor_m6550(L_11, L_10, /*hidden argument*/&FieldOffsetAttribute__ctor_m6550_MethodInfo);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, L_9);
		ArrayElementTypeCheck (V_2, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_2, L_9)) = (Object_t *)L_11;
	}

IL_006e:
	{
		if (!V_1)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
		NullCheck(V_1);
		MarshalAsAttribute_t1267 * L_13 = UnmanagedMarshal_ToMarshalAsAttribute_m7976(V_1, /*hidden argument*/&UnmanagedMarshal_ToMarshalAsAttribute_m7976_MethodInfo);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, L_12);
		ArrayElementTypeCheck (V_2, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_2, L_12)) = (Object_t *)L_13;
	}

IL_007e:
	{
		return V_2;
	}
}
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MemberInfoSerializationHolder_t1499_il2cpp_TypeInfo;
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolderMethodDeclarations.h"

// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
extern TypeInfo SerializationException_t788_il2cpp_TypeInfo;
extern TypeInfo MemberTypes_t878_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
extern Il2CppType MemberInfoSerializationHolder_t1499_0_0_0;
extern MethodInfo MemberInfoSerializationHolder_Serialize_m8060_MethodInfo;
extern MethodInfo SerializationInfo_SetType_m8664_MethodInfo;
extern MethodInfo Type_get_Module_m10279_MethodInfo;
extern MethodInfo String_Equals_m4043_MethodInfo;
extern MethodInfo SerializationException__ctor_m3881_MethodInfo;
extern MethodInfo MethodInfo_get_IsGenericMethod_m8079_MethodInfo;
extern MethodInfo MethodInfo_GetGenericArguments_m8078_MethodInfo;
extern MethodInfo MethodInfo_MakeGenericMethod_m8077_MethodInfo;
extern MethodInfo Type_GetProperty_m6504_MethodInfo;


// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MemberInfoSerializationHolder__ctor_m8058_MethodInfo;
extern "C" void MemberInfoSerializationHolder__ctor_m8058 (MemberInfoSerializationHolder_t1499 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___ctx, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Assembly_t795 * V_2 = {0};
	Exception_t140 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t140 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		NullCheck(___info);
		String_t* L_0 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1767, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		V_0 = L_0;
		NullCheck(___info);
		String_t* L_1 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1136, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		V_1 = L_1;
		NullCheck(___info);
		String_t* L_2 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral1768, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->____memberName_0 = L_2;
		NullCheck(___info);
		String_t* L_3 = SerializationInfo_GetString_m3892(___info, (String_t*) &_stringLiteral654, /*hidden argument*/&SerializationInfo_GetString_m3892_MethodInfo);
		__this->____memberSignature_1 = L_3;
		NullCheck(___info);
		int32_t L_4 = SerializationInfo_GetInt32_m3894(___info, (String_t*) &_stringLiteral1769, /*hidden argument*/&SerializationInfo_GetInt32_m3894_MethodInfo);
		__this->____memberType_2 = L_4;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		__this->____genericArguments_4 = (TypeU5BU5D_t138*)NULL;
		// IL_0058: leave.s IL_005d
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&SerializationException_t788_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_005a;
		throw e;
	}

IL_005a:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		// IL_005b: leave.s IL_005d
		goto IL_005d;
	} // end catch (depth: 1)

IL_005d:
	{
		Assembly_t795 * L_5 = Assembly_Load_m7995(NULL /*static, unused*/, V_0, /*hidden argument*/&Assembly_Load_m7995_MethodInfo);
		V_2 = L_5;
		NullCheck(V_2);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(&Assembly_GetType_m7991_MethodInfo, V_2, V_1, 1, 1);
		__this->____reflectedType_3 = L_6;
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern MethodInfo MemberInfoSerializationHolder_Serialize_m8059_MethodInfo;
extern "C" void MemberInfoSerializationHolder_Serialize_m8059 (Object_t * __this /* static, unused */, SerializationInfo_t612 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, MethodInfo* method)
{
	{
		MemberInfoSerializationHolder_Serialize_m8060(NULL /*static, unused*/, ___info, ___name, ___klass, ___signature, ___type, (TypeU5BU5D_t138*)(TypeU5BU5D_t138*)NULL, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8060_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern "C" void MemberInfoSerializationHolder_Serialize_m8060 (Object_t * __this /* static, unused */, SerializationInfo_t612 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t138* ___genericArguments, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&MemberInfoSerializationHolder_t1499_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_SetType_m8664(___info, L_0, /*hidden argument*/&SerializationInfo_SetType_m8664_MethodInfo);
		NullCheck(___klass);
		Module_t1259 * L_1 = (Module_t1259 *)VirtFuncInvoker0< Module_t1259 * >::Invoke(&Type_get_Module_m10279_MethodInfo, ___klass);
		NullCheck(L_1);
		Assembly_t795 * L_2 = Module_get_Assembly_m8087(L_1, /*hidden argument*/&Module_get_Assembly_m8087_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_get_FullName_m7984_MethodInfo, L_2);
		Type_t * L_4 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral1767, L_3, L_4, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		NullCheck(___klass);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5572_MethodInfo, ___klass);
		Type_t * L_6 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral1136, L_5, L_6, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		Type_t * L_7 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral1768, ___name, L_7, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		Type_t * L_8 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral654, ___signature, L_8, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3879(___info, (String_t*) &_stringLiteral1769, ___type, /*hidden argument*/&SerializationInfo_AddValue_m3879_MethodInfo);
		Type_t * L_9 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&TypeU5BU5D_t138_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(___info);
		SerializationInfo_AddValue_m3877(___info, (String_t*) &_stringLiteral1770, (Object_t *)(Object_t *)___genericArguments, L_9, /*hidden argument*/&SerializationInfo_AddValue_m3877_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MemberInfoSerializationHolder_GetObjectData_m8061_MethodInfo;
extern "C" void MemberInfoSerializationHolder_GetObjectData_m8061 (MemberInfoSerializationHolder_t1499 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m701(L_0, /*hidden argument*/&NotSupportedException__ctor_m701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern MethodInfo MemberInfoSerializationHolder_GetRealObject_m8062_MethodInfo;
extern "C" Object_t * MemberInfoSerializationHolder_GetRealObject_m8062 (MemberInfoSerializationHolder_t1499 * __this, StreamingContext_t614  ___context, MethodInfo* method)
{
	ConstructorInfoU5BU5D_t1263* V_0 = {0};
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t885* V_2 = {0};
	int32_t V_3 = 0;
	MethodInfo_t871 * V_4 = {0};
	FieldInfo_t1261 * V_5 = {0};
	PropertyInfo_t1262 * V_6 = {0};
	EventInfo_t1260 * V_7 = {0};
	int32_t V_8 = {0};
	{
		int32_t L_0 = (__this->____memberType_2);
		V_8 = L_0;
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 1)
		{
			goto IL_019e;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 2)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 4)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 5)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 6)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)V_8-(int32_t)1)) == 7)
		{
			goto IL_0090;
		}
	}

IL_0031:
	{
		if ((((int32_t)V_8) == ((int32_t)((int32_t)16))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01d6;
	}

IL_003f:
	{
		Type_t * L_1 = (__this->____reflectedType_3);
		NullCheck(L_1);
		ConstructorInfoU5BU5D_t1263* L_2 = (ConstructorInfoU5BU5D_t1263*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1263*, int32_t >::Invoke(&Type_GetConstructors_m10321_MethodInfo, L_1, ((int32_t)60));
		V_0 = L_2;
		V_1 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		int32_t L_3 = V_1;
		NullCheck((*(ConstructorInfo_t1131 **)(ConstructorInfo_t1131 **)SZArrayLdElema(V_0, L_3)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, (*(ConstructorInfo_t1131 **)(ConstructorInfo_t1131 **)SZArrayLdElema(V_0, L_3)));
		String_t* L_5 = (__this->____memberSignature_1);
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(&String_Equals_m4043_MethodInfo, L_4, L_5);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		int32_t L_7 = V_1;
		return (*(ConstructorInfo_t1131 **)(ConstructorInfo_t1131 **)SZArrayLdElema(V_0, L_7));
	}

IL_006a:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_006e:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_8 = (__this->____memberSignature_1);
		Type_t * L_9 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Format_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral1771, L_8, L_9, /*hidden argument*/&String_Format_m149_MethodInfo);
		SerializationException_t788 * L_11 = (SerializationException_t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t788_il2cpp_TypeInfo));
		SerializationException__ctor_m3881(L_11, L_10, /*hidden argument*/&SerializationException__ctor_m3881_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0090:
	{
		Type_t * L_12 = (__this->____reflectedType_3);
		NullCheck(L_12);
		MethodInfoU5BU5D_t885* L_13 = (MethodInfoU5BU5D_t885*)VirtFuncInvoker1< MethodInfoU5BU5D_t885*, int32_t >::Invoke(&Type_GetMethods_m4306_MethodInfo, L_12, ((int32_t)60));
		V_2 = L_13;
		V_3 = 0;
		goto IL_010c;
	}

IL_00a2:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		int32_t L_14 = V_3;
		NullCheck((*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_14)));
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, (*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_14)));
		String_t* L_16 = (__this->____memberSignature_1);
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(&String_Equals_m4043_MethodInfo, L_15, L_16);
		if (!L_17)
		{
			goto IL_00bb;
		}
	}
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		int32_t L_18 = V_3;
		return (*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_18));
	}

IL_00bb:
	{
		TypeU5BU5D_t138* L_19 = (__this->____genericArguments_4);
		if (!L_19)
		{
			goto IL_0108;
		}
	}
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		int32_t L_20 = V_3;
		NullCheck((*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_20)));
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodInfo_get_IsGenericMethod_m8079_MethodInfo, (*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_20)));
		if (!L_21)
		{
			goto IL_0108;
		}
	}
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		int32_t L_22 = V_3;
		NullCheck((*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_22)));
		TypeU5BU5D_t138* L_23 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&MethodInfo_GetGenericArguments_m8078_MethodInfo, (*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_22)));
		NullCheck(L_23);
		TypeU5BU5D_t138* L_24 = (__this->____genericArguments_4);
		NullCheck(L_24);
		if ((((uint32_t)(((int32_t)(((Array_t *)L_23)->max_length)))) != ((uint32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0108;
		}
	}
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		int32_t L_25 = V_3;
		TypeU5BU5D_t138* L_26 = (__this->____genericArguments_4);
		NullCheck((*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_25)));
		MethodInfo_t871 * L_27 = (MethodInfo_t871 *)VirtFuncInvoker1< MethodInfo_t871 *, TypeU5BU5D_t138* >::Invoke(&MethodInfo_MakeGenericMethod_m8077_MethodInfo, (*(MethodInfo_t871 **)(MethodInfo_t871 **)SZArrayLdElema(V_2, L_25)), L_26);
		V_4 = L_27;
		NullCheck(V_4);
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m228_MethodInfo, V_4);
		String_t* L_29 = (__this->____memberSignature_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_30 = String_op_Equality_m145(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		if (!L_30)
		{
			goto IL_0108;
		}
	}
	{
		return V_4;
	}

IL_0108:
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_010c:
	{
		NullCheck(V_2);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)V_2)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		String_t* L_31 = (__this->____memberSignature_1);
		Type_t * L_32 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_33 = String_Format_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral1772, L_31, L_32, /*hidden argument*/&String_Format_m149_MethodInfo);
		SerializationException_t788 * L_34 = (SerializationException_t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t788_il2cpp_TypeInfo));
		SerializationException__ctor_m3881(L_34, L_33, /*hidden argument*/&SerializationException__ctor_m3881_MethodInfo);
		il2cpp_codegen_raise_exception(L_34);
	}

IL_012e:
	{
		Type_t * L_35 = (__this->____reflectedType_3);
		String_t* L_36 = (__this->____memberName_0);
		NullCheck(L_35);
		FieldInfo_t1261 * L_37 = (FieldInfo_t1261 *)VirtFuncInvoker2< FieldInfo_t1261 *, String_t*, int32_t >::Invoke(&Type_GetField_m10323_MethodInfo, L_35, L_36, ((int32_t)60));
		V_5 = L_37;
		if (!V_5)
		{
			goto IL_014a;
		}
	}
	{
		return V_5;
	}

IL_014a:
	{
		String_t* L_38 = (__this->____memberName_0);
		Type_t * L_39 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_40 = String_Format_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral1773, L_38, L_39, /*hidden argument*/&String_Format_m149_MethodInfo);
		SerializationException_t788 * L_41 = (SerializationException_t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t788_il2cpp_TypeInfo));
		SerializationException__ctor_m3881(L_41, L_40, /*hidden argument*/&SerializationException__ctor_m3881_MethodInfo);
		il2cpp_codegen_raise_exception(L_41);
	}

IL_0166:
	{
		Type_t * L_42 = (__this->____reflectedType_3);
		String_t* L_43 = (__this->____memberName_0);
		NullCheck(L_42);
		PropertyInfo_t1262 * L_44 = (PropertyInfo_t1262 *)VirtFuncInvoker2< PropertyInfo_t1262 *, String_t*, int32_t >::Invoke(&Type_GetProperty_m6504_MethodInfo, L_42, L_43, ((int32_t)60));
		V_6 = L_44;
		if (!V_6)
		{
			goto IL_0182;
		}
	}
	{
		return V_6;
	}

IL_0182:
	{
		String_t* L_45 = (__this->____memberName_0);
		Type_t * L_46 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_47 = String_Format_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral1774, L_45, L_46, /*hidden argument*/&String_Format_m149_MethodInfo);
		SerializationException_t788 * L_48 = (SerializationException_t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t788_il2cpp_TypeInfo));
		SerializationException__ctor_m3881(L_48, L_47, /*hidden argument*/&SerializationException__ctor_m3881_MethodInfo);
		il2cpp_codegen_raise_exception(L_48);
	}

IL_019e:
	{
		Type_t * L_49 = (__this->____reflectedType_3);
		String_t* L_50 = (__this->____memberName_0);
		NullCheck(L_49);
		EventInfo_t1260 * L_51 = (EventInfo_t1260 *)VirtFuncInvoker2< EventInfo_t1260 *, String_t*, int32_t >::Invoke(&Type_GetEvent_m10322_MethodInfo, L_49, L_50, ((int32_t)60));
		V_7 = L_51;
		if (!V_7)
		{
			goto IL_01ba;
		}
	}
	{
		return V_7;
	}

IL_01ba:
	{
		String_t* L_52 = (__this->____memberName_0);
		Type_t * L_53 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_54 = String_Format_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral1775, L_52, L_53, /*hidden argument*/&String_Format_m149_MethodInfo);
		SerializationException_t788 * L_55 = (SerializationException_t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t788_il2cpp_TypeInfo));
		SerializationException__ctor_m3881(L_55, L_54, /*hidden argument*/&SerializationException__ctor_m3881_MethodInfo);
		il2cpp_codegen_raise_exception(L_55);
	}

IL_01d6:
	{
		int32_t L_56 = (__this->____memberType_2);
		int32_t L_57 = L_56;
		Object_t * L_58 = Box(InitializedTypeInfo(&MemberTypes_t878_il2cpp_TypeInfo), &L_57);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_59 = String_Format_m160(NULL /*static, unused*/, (String_t*) &_stringLiteral1776, L_58, /*hidden argument*/&String_Format_m160_MethodInfo);
		SerializationException_t788 * L_60 = (SerializationException_t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t788_il2cpp_TypeInfo));
		SerializationException__ctor_m3881(L_60, L_59, /*hidden argument*/&SerializationException__ctor_m3881_MethodInfo);
		il2cpp_codegen_raise_exception(L_60);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"
extern MethodInfo RuntimeMethodHandle_get_Value_m10106_MethodInfo;
extern MethodInfo MethodBase_GetMethodFromIntPtr_m8065_MethodInfo;
extern MethodInfo MethodBase_GetMethodFromHandleInternalType_m8067_MethodInfo;
extern MethodInfo Type_get_IsGenericTypeDefinition_m6518_MethodInfo;
extern MethodInfo MethodBase_Invoke_m10333_MethodInfo;


// System.Void System.Reflection.MethodBase::.ctor()
extern "C" void MethodBase__ctor_m8063 (MethodBase_t879 * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m6526(__this, /*hidden argument*/&MemberInfo__ctor_m6526_MethodInfo);
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern MethodInfo MethodBase_GetMethodFromHandleNoGenericCheck_m8064_MethodInfo;
extern "C" MethodBase_t879 * MethodBase_GetMethodFromHandleNoGenericCheck_m8064 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1474  ___handle, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = RuntimeMethodHandle_get_Value_m10106((&___handle), /*hidden argument*/&RuntimeMethodHandle_get_Value_m10106_MethodInfo);
		MethodBase_t879 * L_1 = MethodBase_GetMethodFromIntPtr_m8065(NULL /*static, unused*/, L_0, (((IntPtr_t98_StaticFields*)InitializedTypeInfo(&IntPtr_t98_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&MethodBase_GetMethodFromIntPtr_m8065_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t879 * MethodBase_GetMethodFromIntPtr_m8065 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, IntPtr_t98 ___declaringType, MethodInfo* method)
{
	MethodBase_t879 * V_0 = {0};
	{
		bool L_0 = IntPtr_op_Equality_m5542(NULL /*static, unused*/, ___handle, (((IntPtr_t98_StaticFields*)InitializedTypeInfo(&IntPtr_t98_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&IntPtr_op_Equality_m5542_MethodInfo);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t522 * L_1 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_1, (String_t*) &_stringLiteral1765, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		MethodBase_t879 * L_2 = MethodBase_GetMethodFromHandleInternalType_m8067(NULL /*static, unused*/, ___handle, ___declaringType, /*hidden argument*/&MethodBase_GetMethodFromHandleInternalType_m8067_MethodInfo);
		V_0 = L_2;
		if (V_0)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_t522 * L_3 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_3, (String_t*) &_stringLiteral1765, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002e:
	{
		return V_0;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern MethodInfo MethodBase_GetMethodFromHandle_m8066_MethodInfo;
extern "C" MethodBase_t879 * MethodBase_GetMethodFromHandle_m8066 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1474  ___handle, MethodInfo* method)
{
	MethodBase_t879 * V_0 = {0};
	Type_t * V_1 = {0};
	{
		IntPtr_t98 L_0 = RuntimeMethodHandle_get_Value_m10106((&___handle), /*hidden argument*/&RuntimeMethodHandle_get_Value_m10106_MethodInfo);
		MethodBase_t879 * L_1 = MethodBase_GetMethodFromIntPtr_m8065(NULL /*static, unused*/, L_0, (((IntPtr_t98_StaticFields*)InitializedTypeInfo(&IntPtr_t98_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&MethodBase_GetMethodFromIntPtr_m8065_MethodInfo);
		V_0 = L_1;
		NullCheck(V_0);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5530_MethodInfo, V_0);
		V_1 = L_2;
		NullCheck(V_1);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericType_m6521_MethodInfo, V_1);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		NullCheck(V_1);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericTypeDefinition_m6518_MethodInfo, V_1);
		if (!L_4)
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentException_t522 * L_5 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_5, (String_t*) &_stringLiteral1777, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0034:
	{
		return V_0;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t879 * MethodBase_GetMethodFromHandleInternalType_m8067 (Object_t * __this /* static, unused */, IntPtr_t98 ___method_handle, IntPtr_t98 ___type_handle, MethodInfo* method)
{
	typedef MethodBase_t879 * (*MethodBase_GetMethodFromHandleInternalType_m8067_ftn) (IntPtr_t98, IntPtr_t98);
	static MethodBase_GetMethodFromHandleInternalType_m8067_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBase_GetMethodFromHandleInternalType_m8067_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___method_handle, ___type_handle);
}
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern MethodInfo MethodBase_Invoke_m4291_MethodInfo;
extern "C" Object_t * MethodBase_Invoke_m4291 (MethodBase_t879 * __this, Object_t * ___obj, ObjectU5BU5D_t137* ___parameters, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1115 *, ObjectU5BU5D_t137*, CultureInfo_t791 * >::Invoke(&MethodBase_Invoke_m10333_MethodInfo, __this, ___obj, 0, (Binder_t1115 *)NULL, ___parameters, (CultureInfo_t791 *)NULL);
		return L_0;
	}
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C" int32_t MethodBase_get_CallingConvention_m8068 (MethodBase_t879 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern MethodInfo MethodBase_get_IsPublic_m8069_MethodInfo;
extern "C" bool MethodBase_get_IsPublic_m8069 (MethodBase_t879 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10272_MethodInfo, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" bool MethodBase_get_IsStatic_m5544 (MethodBase_t879 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10272_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern MethodInfo MethodBase_get_IsVirtual_m8070_MethodInfo;
extern "C" bool MethodBase_get_IsVirtual_m8070 (MethodBase_t879 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10272_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern MethodInfo MethodBase_GetGenericArguments_m8071_MethodInfo;
extern "C" TypeU5BU5D_t138* MethodBase_GetGenericArguments_m8071 (MethodBase_t879 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t150 * L_0 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m701(L_0, /*hidden argument*/&NotSupportedException__ctor_m701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern MethodInfo MethodBase_get_ContainsGenericParameters_m8072_MethodInfo;
extern "C" bool MethodBase_get_ContainsGenericParameters_m8072 (MethodBase_t879 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C" bool MethodBase_get_IsGenericMethodDefinition_m8073 (MethodBase_t879 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern MethodInfo MethodBase_get_IsGenericMethod_m8074_MethodInfo;
extern "C" bool MethodBase_get_IsGenericMethod_m8074 (MethodBase_t879 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MethodImplAttributes_t1501_il2cpp_TypeInfo;
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo Type_ToString_m6514_MethodInfo;


// System.Void System.Reflection.MethodInfo::.ctor()
extern MethodInfo MethodInfo__ctor_m8075_MethodInfo;
extern "C" void MethodInfo__ctor_m8075 (MethodInfo_t871 * __this, MethodInfo* method)
{
	{
		MethodBase__ctor_m8063(__this, /*hidden argument*/&MethodBase__ctor_m8063_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
extern MethodInfo MethodInfo_get_MemberType_m8076_MethodInfo;
extern "C" int32_t MethodInfo_get_MemberType_m8076 (MethodInfo_t871 * __this, MethodInfo* method)
{
	{
		return (int32_t)(8);
	}
}
// System.Type System.Reflection.MethodInfo::get_ReturnType()
extern MethodInfo MethodInfo_get_ReturnType_m4310_MethodInfo;
extern "C" Type_t * MethodInfo_get_ReturnType_m4310 (MethodInfo_t871 * __this, MethodInfo* method)
{
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t871 * MethodInfo_MakeGenericMethod_m8077 (MethodInfo_t871 * __this, TypeU5BU5D_t138* ___typeArguments, MethodInfo* method)
{
	{
		Type_t * L_0 = Object_GetType_m2357(__this, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, L_0);
		NotSupportedException_t150 * L_2 = (NotSupportedException_t150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t150_il2cpp_TypeInfo));
		NotSupportedException__ctor_m3883(L_2, L_1, /*hidden argument*/&NotSupportedException__ctor_m3883_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
extern "C" TypeU5BU5D_t138* MethodInfo_GetGenericArguments_m8078 (MethodInfo_t871 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		return (((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3);
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
extern "C" bool MethodInfo_get_IsGenericMethod_m8079 (MethodInfo_t871 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
extern MethodInfo MethodInfo_get_IsGenericMethodDefinition_m8080_MethodInfo;
extern "C" bool MethodInfo_get_IsGenericMethodDefinition_m8080 (MethodInfo_t871 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
extern MethodInfo MethodInfo_get_ContainsGenericParameters_m8081_MethodInfo;
extern "C" bool MethodInfo_get_ContainsGenericParameters_m8081 (MethodInfo_t871 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.Missing
#include "mscorlib_System_Reflection_Missing.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Missing_t1502_il2cpp_TypeInfo;
// System.Reflection.Missing
#include "mscorlib_System_Reflection_MissingMethodDeclarations.h"

extern MethodInfo Missing__ctor_m8082_MethodInfo;


// System.Void System.Reflection.Missing::.ctor()
extern "C" void Missing__ctor_m8082 (Missing_t1502 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Missing::.cctor()
extern MethodInfo Missing__cctor_m8083_MethodInfo;
extern "C" void Missing__cctor_m8083 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Missing_t1502 * L_0 = (Missing_t1502 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Missing_t1502_il2cpp_TypeInfo));
		Missing__ctor_m8082(L_0, /*hidden argument*/&Missing__ctor_m8082_MethodInfo);
		((Missing_t1502_StaticFields*)InitializedTypeInfo(&Missing_t1502_il2cpp_TypeInfo)->static_fields)->___Value_0 = L_0;
		return;
	}
}
// System.Void System.Reflection.Missing::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Missing_System_Runtime_Serialization_ISerializable_GetObjectData_m8084_MethodInfo;
extern "C" void Missing_System_Runtime_Serialization_ISerializable_GetObjectData_m8084 (Missing_t1502 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
extern TypeInfo TypeFilter_t1503_il2cpp_TypeInfo;
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"
// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolderMethodDeclarations.h"
extern MethodInfo Module_filter_by_type_name_m8094_MethodInfo;
extern MethodInfo TypeFilter__ctor_m10230_MethodInfo;
extern MethodInfo Module_filter_by_type_name_ignore_case_m8095_MethodInfo;
extern MethodInfo UnitySerializationHolder_GetModuleData_m10193_MethodInfo;
extern MethodInfo String_StartsWith_m4082_MethodInfo;
extern MethodInfo String_ToLower_m4091_MethodInfo;


// System.Void System.Reflection.Module::.ctor()
extern MethodInfo Module__ctor_m8085_MethodInfo;
extern "C" void Module__ctor_m8085 (Module_t1259 * __this, MethodInfo* method)
{
	{
		Object__ctor_m127(__this, /*hidden argument*/&Object__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Module::.cctor()
extern MethodInfo Module__cctor_m8086_MethodInfo;
extern "C" void Module__cctor_m8086 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = { &Module_filter_by_type_name_m8094_MethodInfo };
		TypeFilter_t1503 * L_1 = (TypeFilter_t1503 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TypeFilter_t1503_il2cpp_TypeInfo));
		TypeFilter__ctor_m10230(L_1, NULL, L_0, /*hidden argument*/&TypeFilter__ctor_m10230_MethodInfo);
		((Module_t1259_StaticFields*)InitializedTypeInfo(&Module_t1259_il2cpp_TypeInfo)->static_fields)->___FilterTypeName_1 = L_1;
		IntPtr_t98 L_2 = { &Module_filter_by_type_name_ignore_case_m8095_MethodInfo };
		TypeFilter_t1503 * L_3 = (TypeFilter_t1503 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TypeFilter_t1503_il2cpp_TypeInfo));
		TypeFilter__ctor_m10230(L_3, NULL, L_2, /*hidden argument*/&TypeFilter__ctor_m10230_MethodInfo);
		((Module_t1259_StaticFields*)InitializedTypeInfo(&Module_t1259_il2cpp_TypeInfo)->static_fields)->___FilterTypeNameIgnoreCase_2 = L_3;
		return;
	}
}
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" Assembly_t795 * Module_get_Assembly_m8087 (Module_t1259 * __this, MethodInfo* method)
{
	{
		Assembly_t795 * L_0 = (__this->___assembly_4);
		return L_0;
	}
}
// System.String System.Reflection.Module::get_ScopeName()
extern "C" String_t* Module_get_ScopeName_m8088 (Module_t1259 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___scopename_7);
		return L_0;
	}
}
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo Module_GetCustomAttributes_m8089_MethodInfo;
extern "C" ObjectU5BU5D_t137* Module_GetCustomAttributes_m8089 (Module_t1259 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_0;
	}
}
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Module_GetObjectData_m8090_MethodInfo;
extern "C" void Module_GetObjectData_m8090 (Module_t1259 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
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
		UnitySerializationHolder_GetModuleData_m10193(NULL /*static, unused*/, __this, ___info, ___context, /*hidden argument*/&UnitySerializationHolder_GetModuleData_m10193_MethodInfo);
		return;
	}
}
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern MethodInfo Module_IsDefined_m8091_MethodInfo;
extern "C" bool Module_IsDefined_m8091 (Module_t1259 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		bool L_0 = MonoCustomAttrs_IsDefined_m9926(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_IsDefined_m9926_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.Reflection.Module::IsResource()
extern "C" bool Module_IsResource_m8092 (Module_t1259 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_resource_8);
		return L_0;
	}
}
// System.String System.Reflection.Module::ToString()
extern MethodInfo Module_ToString_m8093_MethodInfo;
extern "C" String_t* Module_ToString_m8093 (Module_t1259 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_6);
		return L_0;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_m8094 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		V_0 = ((String_t*)Castclass(___filterCriteria, (&String_t_il2cpp_TypeInfo)));
		NullCheck(V_0);
		bool L_0 = String_EndsWith_m4155(V_0, (String_t*) &_stringLiteral726, /*hidden argument*/&String_EndsWith_m4155_MethodInfo);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck(___m);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, ___m);
		NullCheck(V_0);
		int32_t L_2 = String_get_Length_m133(V_0, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(V_0);
		String_t* L_3 = String_Substring_m150(V_0, 0, ((int32_t)((int32_t)L_2-(int32_t)1)), /*hidden argument*/&String_Substring_m150_MethodInfo);
		NullCheck(L_1);
		bool L_4 = String_StartsWith_m4082(L_1, L_3, /*hidden argument*/&String_StartsWith_m4082_MethodInfo);
		return L_4;
	}

IL_002f:
	{
		NullCheck(___m);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, ___m);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Equality_m145(NULL /*static, unused*/, L_5, V_0, /*hidden argument*/&String_op_Equality_m145_MethodInfo);
		return L_6;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_ignore_case_m8095 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		V_0 = ((String_t*)Castclass(___filterCriteria, (&String_t_il2cpp_TypeInfo)));
		NullCheck(V_0);
		bool L_0 = String_EndsWith_m4155(V_0, (String_t*) &_stringLiteral726, /*hidden argument*/&String_EndsWith_m4155_MethodInfo);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		NullCheck(___m);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, ___m);
		NullCheck(L_1);
		String_t* L_2 = String_ToLower_m4091(L_1, /*hidden argument*/&String_ToLower_m4091_MethodInfo);
		NullCheck(V_0);
		int32_t L_3 = String_get_Length_m133(V_0, /*hidden argument*/&String_get_Length_m133_MethodInfo);
		NullCheck(V_0);
		String_t* L_4 = String_Substring_m150(V_0, 0, ((int32_t)((int32_t)L_3-(int32_t)1)), /*hidden argument*/&String_Substring_m150_MethodInfo);
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m4091(L_4, /*hidden argument*/&String_ToLower_m4091_MethodInfo);
		NullCheck(L_2);
		bool L_6 = String_StartsWith_m4082(L_2, L_5, /*hidden argument*/&String_StartsWith_m4082_MethodInfo);
		return L_6;
	}

IL_0039:
	{
		NullCheck(___m);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, ___m);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_8 = String_Compare_m6063(NULL /*static, unused*/, L_7, V_0, 1, /*hidden argument*/&String_Compare_m6063_MethodInfo);
		return ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoEventInfo_t1504_il2cpp_TypeInfo;
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfoMethodDeclarations.h"

// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEvent.h"
extern MethodInfo MonoEventInfo_get_event_info_m8096_MethodInfo;


// System.Void System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)
extern "C" void MonoEventInfo_get_event_info_m8096 (Object_t * __this /* static, unused */, MonoEvent_t1505 * ___ev, MonoEventInfo_t1504 * ___info, MethodInfo* method)
{
	typedef void (*MonoEventInfo_get_event_info_m8096_ftn) (MonoEvent_t1505 *, MonoEventInfo_t1504 *);
	static MonoEventInfo_get_event_info_m8096_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoEventInfo_get_event_info_m8096_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)");
	_il2cpp_icall_func(___ev, ___info);
}
// System.Reflection.MonoEventInfo System.Reflection.MonoEventInfo::GetEventInfo(System.Reflection.MonoEvent)
extern MethodInfo MonoEventInfo_GetEventInfo_m8097_MethodInfo;
extern "C" MonoEventInfo_t1504  MonoEventInfo_GetEventInfo_m8097 (Object_t * __this /* static, unused */, MonoEvent_t1505 * ___ev, MethodInfo* method)
{
	MonoEventInfo_t1504  V_0 = {0};
	{
		MonoEventInfo_get_event_info_m8096(NULL /*static, unused*/, ___ev, (&V_0), /*hidden argument*/&MonoEventInfo_get_event_info_m8096_MethodInfo);
		return V_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoEvent_t1505_il2cpp_TypeInfo;
// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEventMethodDeclarations.h"

extern MethodInfo MonoEvent_get_Name_m8103_MethodInfo;
extern MethodInfo String_Concat_m675_MethodInfo;
extern MethodInfo MonoEvent_get_ReflectedType_m8102_MethodInfo;
extern MethodInfo MonoEvent_ToString_m8104_MethodInfo;


// System.Void System.Reflection.MonoEvent::.ctor()
extern MethodInfo MonoEvent__ctor_m8098_MethodInfo;
extern "C" void MonoEvent__ctor_m8098 (MonoEvent_t1505 * __this, MethodInfo* method)
{
	{
		EventInfo__ctor_m8043(__this, /*hidden argument*/&EventInfo__ctor_m8043_MethodInfo);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
extern MethodInfo MonoEvent_get_Attributes_m8099_MethodInfo;
extern "C" int32_t MonoEvent_get_Attributes_m8099 (MonoEvent_t1505 * __this, MethodInfo* method)
{
	MonoEventInfo_t1504  V_0 = {0};
	{
		MonoEventInfo_t1504  L_0 = MonoEventInfo_GetEventInfo_m8097(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8097_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		int32_t L_1 = ((&V_0)->___attrs_6);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
extern MethodInfo MonoEvent_GetAddMethod_m8100_MethodInfo;
extern "C" MethodInfo_t871 * MonoEvent_GetAddMethod_m8100 (MonoEvent_t1505 * __this, bool ___nonPublic, MethodInfo* method)
{
	MonoEventInfo_t1504  V_0 = {0};
	{
		MonoEventInfo_t1504  L_0 = MonoEventInfo_GetEventInfo_m8097(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8097_MethodInfo);
		V_0 = L_0;
		if (___nonPublic)
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((&V_0));
		MethodInfo_t871 * L_1 = ((&V_0)->___add_method_3);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		NullCheck((&V_0));
		MethodInfo_t871 * L_2 = ((&V_0)->___add_method_3);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m8069_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		NullCheck((&V_0));
		MethodInfo_t871 * L_4 = ((&V_0)->___add_method_3);
		return L_4;
	}

IL_0029:
	{
		return (MethodInfo_t871 *)NULL;
	}
}
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
extern MethodInfo MonoEvent_get_DeclaringType_m8101_MethodInfo;
extern "C" Type_t * MonoEvent_get_DeclaringType_m8101 (MonoEvent_t1505 * __this, MethodInfo* method)
{
	MonoEventInfo_t1504  V_0 = {0};
	{
		MonoEventInfo_t1504  L_0 = MonoEventInfo_GetEventInfo_m8097(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8097_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		Type_t * L_1 = ((&V_0)->___declaring_type_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
extern "C" Type_t * MonoEvent_get_ReflectedType_m8102 (MonoEvent_t1505 * __this, MethodInfo* method)
{
	MonoEventInfo_t1504  V_0 = {0};
	{
		MonoEventInfo_t1504  L_0 = MonoEventInfo_GetEventInfo_m8097(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8097_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		Type_t * L_1 = ((&V_0)->___reflected_type_1);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::get_Name()
extern "C" String_t* MonoEvent_get_Name_m8103 (MonoEvent_t1505 * __this, MethodInfo* method)
{
	MonoEventInfo_t1504  V_0 = {0};
	{
		MonoEventInfo_t1504  L_0 = MonoEventInfo_GetEventInfo_m8097(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8097_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		String_t* L_1 = ((&V_0)->___name_2);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::ToString()
extern "C" String_t* MonoEvent_ToString_m8104 (MonoEvent_t1505 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&EventInfo_get_EventHandlerType_m8044_MethodInfo, __this);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoEvent_get_Name_m8103_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m675(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral186, L_1, /*hidden argument*/&String_Concat_m675_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoEvent_IsDefined_m8105_MethodInfo;
extern "C" bool MonoEvent_IsDefined_m8105 (MonoEvent_t1505 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		bool L_0 = MonoCustomAttrs_IsDefined_m9926(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_IsDefined_m9926_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoEvent_GetCustomAttributes_m8106_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoEvent_GetCustomAttributes_m8106 (MonoEvent_t1505 * __this, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9925(NULL /*static, unused*/, __this, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoEvent_GetCustomAttributes_m8107_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoEvent_GetCustomAttributes_m8107 (MonoEvent_t1505 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_0;
	}
}
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoEvent_GetObjectData_m8108_MethodInfo;
extern "C" void MonoEvent_GetObjectData_m8108 (MonoEvent_t1505 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoEvent_get_Name_m8103_MethodInfo, __this);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoEvent_get_ReflectedType_m8102_MethodInfo, __this);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoEvent_ToString_m8104_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8059(NULL /*static, unused*/, ___info, L_0, L_1, L_2, 2, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8059_MethodInfo);
		return;
	}
}
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoField.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoField_t1506_il2cpp_TypeInfo;
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoFieldMethodDeclarations.h"

// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetException.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessException.h"
extern TypeInfo TargetException_t1522_il2cpp_TypeInfo;
extern TypeInfo FieldAccessException_t1808_il2cpp_TypeInfo;
// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetExceptionMethodDeclarations.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessExceptionMethodDeclarations.h"
extern MethodInfo MonoField_GetParentType_m8113_MethodInfo;
extern MethodInfo TargetException__ctor_m8241_MethodInfo;
extern MethodInfo MonoField_CheckGeneric_m8127_MethodInfo;
extern MethodInfo MonoField_GetValueInternal_m8121_MethodInfo;
extern MethodInfo FieldAccessException__ctor_m9857_MethodInfo;
extern MethodInfo MonoField_SetValueInternal_m8124_MethodInfo;
extern MethodInfo MonoField_get_Name_m8116_MethodInfo;
extern MethodInfo MonoField_get_ReflectedType_m8114_MethodInfo;
extern MethodInfo MonoField_ToString_m8123_MethodInfo;
extern MethodInfo MonoField_get_DeclaringType_m8115_MethodInfo;
extern MethodInfo Type_get_ContainsGenericParameters_m6517_MethodInfo;


// System.Void System.Reflection.MonoField::.ctor()
extern MethodInfo MonoField__ctor_m8109_MethodInfo;
extern "C" void MonoField__ctor_m8109 (MonoField_t1506 * __this, MethodInfo* method)
{
	{
		FieldInfo__ctor_m8046(__this, /*hidden argument*/&FieldInfo__ctor_m8046_MethodInfo);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
extern MethodInfo MonoField_get_Attributes_m8110_MethodInfo;
extern "C" int32_t MonoField_get_Attributes_m8110 (MonoField_t1506 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_4);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
extern MethodInfo MonoField_get_FieldHandle_m8111_MethodInfo;
extern "C" RuntimeFieldHandle_t1264  MonoField_get_FieldHandle_m8111 (MonoField_t1506 * __this, MethodInfo* method)
{
	{
		RuntimeFieldHandle_t1264  L_0 = (__this->___fhandle_1);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_FieldType()
extern MethodInfo MonoField_get_FieldType_m8112_MethodInfo;
extern "C" Type_t * MonoField_get_FieldType_m8112 (MonoField_t1506 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_3);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
extern "C" Type_t * MonoField_GetParentType_m8113 (MonoField_t1506 * __this, bool ___declaring, MethodInfo* method)
{
	typedef Type_t * (*MonoField_GetParentType_m8113_ftn) (MonoField_t1506 *, bool);
	static MonoField_GetParentType_m8113_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetParentType_m8113_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetParentType(System.Boolean)");
	return _il2cpp_icall_func(__this, ___declaring);
}
// System.Type System.Reflection.MonoField::get_ReflectedType()
extern "C" Type_t * MonoField_get_ReflectedType_m8114 (MonoField_t1506 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m8113(__this, 0, /*hidden argument*/&MonoField_GetParentType_m8113_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_DeclaringType()
extern "C" Type_t * MonoField_get_DeclaringType_m8115 (MonoField_t1506 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m8113(__this, 1, /*hidden argument*/&MonoField_GetParentType_m8113_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.MonoField::get_Name()
extern "C" String_t* MonoField_get_Name_m8116 (MonoField_t1506 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoField_IsDefined_m8117_MethodInfo;
extern "C" bool MonoField_IsDefined_m8117 (MonoField_t1506 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		bool L_0 = MonoCustomAttrs_IsDefined_m9926(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_IsDefined_m9926_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoField_GetCustomAttributes_m8118_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoField_GetCustomAttributes_m8118 (MonoField_t1506 * __this, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9925(NULL /*static, unused*/, __this, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoField_GetCustomAttributes_m8119_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoField_GetCustomAttributes_m8119 (MonoField_t1506 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_0;
	}
}
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
extern MethodInfo MonoField_GetFieldOffset_m8120_MethodInfo;
extern "C" int32_t MonoField_GetFieldOffset_m8120 (MonoField_t1506 * __this, MethodInfo* method)
{
	typedef int32_t (*MonoField_GetFieldOffset_m8120_ftn) (MonoField_t1506 *);
	static MonoField_GetFieldOffset_m8120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetFieldOffset_m8120_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetFieldOffset()");
	return _il2cpp_icall_func(__this);
}
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
extern "C" Object_t * MonoField_GetValueInternal_m8121 (MonoField_t1506 * __this, Object_t * ___obj, MethodInfo* method)
{
	typedef Object_t * (*MonoField_GetValueInternal_m8121_ftn) (MonoField_t1506 *, Object_t *);
	static MonoField_GetValueInternal_m8121_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetValueInternal_m8121_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetValueInternal(System.Object)");
	return _il2cpp_icall_func(__this, ___obj);
}
// System.Object System.Reflection.MonoField::GetValue(System.Object)
extern MethodInfo MonoField_GetValue_m8122_MethodInfo;
extern "C" Object_t * MonoField_GetValue_m8122 (MonoField_t1506 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m8049_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		if (___obj)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t1522 * L_1 = (TargetException_t1522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetException_t1522_il2cpp_TypeInfo));
		TargetException__ctor_m8241(L_1, (String_t*) &_stringLiteral1778, /*hidden argument*/&TargetException__ctor_m8241_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsLiteral_m8048_MethodInfo, __this);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		MonoField_CheckGeneric_m8127(__this, /*hidden argument*/&MonoField_CheckGeneric_m8127_MethodInfo);
	}

IL_0024:
	{
		Object_t * L_3 = MonoField_GetValueInternal_m8121(__this, ___obj, /*hidden argument*/&MonoField_GetValueInternal_m8121_MethodInfo);
		return L_3;
	}
}
// System.String System.Reflection.MonoField::ToString()
extern "C" String_t* MonoField_ToString_m8123 (MonoField_t1506 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_3);
		String_t* L_1 = (__this->___name_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Format_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral1779, L_0, L_1, /*hidden argument*/&String_Format_m149_MethodInfo);
		return L_2;
	}
}
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
extern "C" void MonoField_SetValueInternal_m8124 (Object_t * __this /* static, unused */, FieldInfo_t1261 * ___fi, Object_t * ___obj, Object_t * ___value, MethodInfo* method)
{
	typedef void (*MonoField_SetValueInternal_m8124_ftn) (FieldInfo_t1261 *, Object_t *, Object_t *);
	static MonoField_SetValueInternal_m8124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_SetValueInternal_m8124_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)");
	_il2cpp_icall_func(___fi, ___obj, ___value);
}
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern MethodInfo MonoField_SetValue_m8125_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" void MonoField_SetValue_m8125 (MonoField_t1506 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1115 * ___binder, CultureInfo_t791 * ___culture, MethodInfo* method)
{
	static bool MonoField_SetValue_m8125_init;
	if (!MonoField_SetValue_m8125_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		MonoField_SetValue_m8125_init = true;
	}
	Object_t * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m8049_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		if (___obj)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t1522 * L_1 = (TargetException_t1522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetException_t1522_il2cpp_TypeInfo));
		TargetException__ctor_m8241(L_1, (String_t*) &_stringLiteral1778, /*hidden argument*/&TargetException__ctor_m8241_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsLiteral_m8048_MethodInfo, __this);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		FieldAccessException_t1808 * L_3 = (FieldAccessException_t1808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FieldAccessException_t1808_il2cpp_TypeInfo));
		FieldAccessException__ctor_m9857(L_3, (String_t*) &_stringLiteral1780, /*hidden argument*/&FieldAccessException__ctor_m9857_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		if (___binder)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		Binder_t1115 * L_4 = Binder_get_DefaultBinder_m8032(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8032_MethodInfo);
		___binder = L_4;
	}

IL_0036:
	{
		MonoField_CheckGeneric_m8127(__this, /*hidden argument*/&MonoField_CheckGeneric_m8127_MethodInfo);
		if (!___val)
		{
			goto IL_0090;
		}
	}
	{
		Type_t * L_5 = (__this->___type_3);
		NullCheck(___binder);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, Type_t *, CultureInfo_t791 * >::Invoke(&Binder_ChangeType_m10329_MethodInfo, ___binder, ___val, L_5, ___culture);
		V_0 = L_6;
		if (V_0)
		{
			goto IL_008b;
		}
	}
	{
		ObjectU5BU5D_t137* L_7 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, 4));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral1781);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)(String_t*) &_stringLiteral1781;
		ObjectU5BU5D_t137* L_8 = L_7;
		NullCheck(___val);
		Type_t * L_9 = Object_GetType_m2357(___val, /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 1)) = (Object_t *)L_9;
		ObjectU5BU5D_t137* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral1782);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2)) = (Object_t *)(String_t*) &_stringLiteral1782;
		ObjectU5BU5D_t137* L_11 = L_10;
		Type_t * L_12 = (__this->___type_3);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 3)) = (Object_t *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = String_Concat_m595(NULL /*static, unused*/, L_11, /*hidden argument*/&String_Concat_m595_MethodInfo);
		ArgumentException_t522 * L_14 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m3867(L_14, L_13, (String_t*) &_stringLiteral1783, /*hidden argument*/&ArgumentException__ctor_m3867_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_008b:
	{
		___val = V_0;
	}

IL_0090:
	{
		MonoField_SetValueInternal_m8124(NULL /*static, unused*/, __this, ___obj, ___val, /*hidden argument*/&MonoField_SetValueInternal_m8124_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoField_GetObjectData_m8126_MethodInfo;
extern "C" void MonoField_GetObjectData_m8126 (MonoField_t1506 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoField_get_Name_m8116_MethodInfo, __this);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoField_get_ReflectedType_m8114_MethodInfo, __this);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoField_ToString_m8123_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8059(NULL /*static, unused*/, ___info, L_0, L_1, L_2, 4, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8059_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoField::CheckGeneric()
extern "C" void MonoField_CheckGeneric_m8127 (MonoField_t1506 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoField_get_DeclaringType_m8115_MethodInfo, __this);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6517_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t784 * L_2 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_2, (String_t*) &_stringLiteral1784, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		return;
	}
}
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoGenericMethod_t1507_il2cpp_TypeInfo;
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethodMethodDeclarations.h"

// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
extern MethodInfo MonoMethod__ctor_m8140_MethodInfo;


// System.Void System.Reflection.MonoGenericMethod::.ctor()
extern MethodInfo MonoGenericMethod__ctor_m8128_MethodInfo;
extern "C" void MonoGenericMethod__ctor_m8128 (MonoGenericMethod_t1507 * __this, MethodInfo* method)
{
	{
		MonoMethod__ctor_m8140(__this, /*hidden argument*/&MonoMethod__ctor_m8140_MethodInfo);
		InvalidOperationException_t784 * L_0 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3868(L_0, /*hidden argument*/&InvalidOperationException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericMethod::get_ReflectedType()
extern MethodInfo MonoGenericMethod_get_ReflectedType_m8129_MethodInfo;
extern "C" Type_t * MonoGenericMethod_get_ReflectedType_m8129 (MonoGenericMethod_t1507 * __this, MethodInfo* method)
{
	typedef Type_t * (*MonoGenericMethod_get_ReflectedType_m8129_ftn) (MonoGenericMethod_t1507 *);
	static MonoGenericMethod_get_ReflectedType_m8129_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericMethod_get_ReflectedType_m8129_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoGenericCMethod_t1509_il2cpp_TypeInfo;
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethodMethodDeclarations.h"

// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethodMethodDeclarations.h"
extern MethodInfo MonoCMethod__ctor_m8168_MethodInfo;


// System.Void System.Reflection.MonoGenericCMethod::.ctor()
extern MethodInfo MonoGenericCMethod__ctor_m8130_MethodInfo;
extern "C" void MonoGenericCMethod__ctor_m8130 (MonoGenericCMethod_t1509 * __this, MethodInfo* method)
{
	{
		MonoCMethod__ctor_m8168(__this, /*hidden argument*/&MonoCMethod__ctor_m8168_MethodInfo);
		InvalidOperationException_t784 * L_0 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3868(L_0, /*hidden argument*/&InvalidOperationException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericCMethod::get_ReflectedType()
extern MethodInfo MonoGenericCMethod_get_ReflectedType_m8131_MethodInfo;
extern "C" Type_t * MonoGenericCMethod_get_ReflectedType_m8131 (MonoGenericCMethod_t1509 * __this, MethodInfo* method)
{
	typedef Type_t * (*MonoGenericCMethod_get_ReflectedType_m8131_ftn) (MonoGenericCMethod_t1509 *);
	static MonoGenericCMethod_get_ReflectedType_m8131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericCMethod_get_ReflectedType_m8131_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethodInfo_t1511_il2cpp_TypeInfo;
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfoMethodDeclarations.h"

extern MethodInfo MonoMethodInfo_get_method_info_m8132_MethodInfo;
extern MethodInfo MonoMethodInfo_GetMethodInfo_m8133_MethodInfo;
extern MethodInfo MonoMethodInfo_get_parameter_info_m8138_MethodInfo;


// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C" void MonoMethodInfo_get_method_info_m8132 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, MonoMethodInfo_t1511 * ___info, MethodInfo* method)
{
	typedef void (*MonoMethodInfo_get_method_info_m8132_ftn) (IntPtr_t98, MonoMethodInfo_t1511 *);
	static MonoMethodInfo_get_method_info_m8132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_method_info_m8132_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(___handle, ___info);
}
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C" MonoMethodInfo_t1511  MonoMethodInfo_GetMethodInfo_m8133 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1511  V_0 = {0};
	{
		MonoMethodInfo_get_method_info_m8132(NULL /*static, unused*/, ___handle, (&V_0), /*hidden argument*/&MonoMethodInfo_get_method_info_m8132_MethodInfo);
		return V_0;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetDeclaringType_m8134_MethodInfo;
extern "C" Type_t * MonoMethodInfo_GetDeclaringType_m8134 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1511  V_0 = {0};
	{
		MonoMethodInfo_t1511  L_0 = MonoMethodInfo_GetMethodInfo_m8133(NULL /*static, unused*/, ___handle, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8133_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		Type_t * L_1 = ((&V_0)->___parent_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetReturnType_m8135_MethodInfo;
extern "C" Type_t * MonoMethodInfo_GetReturnType_m8135 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1511  V_0 = {0};
	{
		MonoMethodInfo_t1511  L_0 = MonoMethodInfo_GetMethodInfo_m8133(NULL /*static, unused*/, ___handle, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8133_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		Type_t * L_1 = ((&V_0)->___ret_1);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetAttributes_m8136_MethodInfo;
extern "C" int32_t MonoMethodInfo_GetAttributes_m8136 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1511  V_0 = {0};
	{
		MonoMethodInfo_t1511  L_0 = MonoMethodInfo_GetMethodInfo_m8133(NULL /*static, unused*/, ___handle, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8133_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		int32_t L_1 = ((&V_0)->___attrs_2);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetCallingConvention_m8137_MethodInfo;
extern "C" int32_t MonoMethodInfo_GetCallingConvention_m8137 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1511  V_0 = {0};
	{
		MonoMethodInfo_t1511  L_0 = MonoMethodInfo_GetMethodInfo_m8133(NULL /*static, unused*/, ___handle, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8133_MethodInfo);
		V_0 = L_0;
		NullCheck((&V_0));
		int32_t L_1 = ((&V_0)->___callconv_4);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t887* MonoMethodInfo_get_parameter_info_m8138 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, MemberInfo_t870 * ___member, MethodInfo* method)
{
	typedef ParameterInfoU5BU5D_t887* (*MonoMethodInfo_get_parameter_info_m8138_ftn) (IntPtr_t98, MemberInfo_t870 *);
	static MonoMethodInfo_get_parameter_info_m8138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_parameter_info_m8138_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(___handle, ___member);
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern MethodInfo MonoMethodInfo_GetParametersInfo_m8139_MethodInfo;
extern "C" ParameterInfoU5BU5D_t887* MonoMethodInfo_GetParametersInfo_m8139 (Object_t * __this /* static, unused */, IntPtr_t98 ___handle, MemberInfo_t870 * ___member, MethodInfo* method)
{
	{
		ParameterInfoU5BU5D_t887* L_0 = MonoMethodInfo_get_parameter_info_m8138(NULL /*static, unused*/, ___handle, ___member, /*hidden argument*/&MonoMethodInfo_get_parameter_info_m8138_MethodInfo);
		return L_0;
	}
}
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethod_t1508_il2cpp_TypeInfo;

// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.Runtime.InteropServices.DllImportAttribute
#include "mscorlib_System_Runtime_InteropServices_DllImportAttribute.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
extern TypeInfo RuntimeMethodHandle_t1474_il2cpp_TypeInfo;
extern TypeInfo TargetInvocationException_t1523_il2cpp_TypeInfo;
extern TypeInfo ThreadAbortException_t1762_il2cpp_TypeInfo;
extern TypeInfo MethodAccessException_t1815_il2cpp_TypeInfo;
extern TypeInfo PreserveSigAttribute_t1547_il2cpp_TypeInfo;
extern TypeInfo DllImportAttribute_t1266_il2cpp_TypeInfo;
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"
extern MethodInfo RuntimeMethodHandle__ctor_m10104_MethodInfo;
extern MethodInfo MonoMethod_get_name_m8141_MethodInfo;
extern MethodInfo MonoMethod_get_IsGenericMethod_m8166_MethodInfo;
extern MethodInfo MonoMethod_GetGenericArguments_m8164_MethodInfo;
extern MethodInfo MonoMethod_get_DeclaringType_m8152_MethodInfo;
extern MethodInfo MonoMethod_get_base_definition_m8142_MethodInfo;
extern MethodInfo TargetParameterCountException__ctor_m8246_MethodInfo;
extern MethodInfo MonoMethod_get_ContainsGenericParameters_m8167_MethodInfo;
extern MethodInfo MonoMethod_InternalInvoke_m8146_MethodInfo;
extern MethodInfo TargetInvocationException__ctor_m8243_MethodInfo;
extern MethodInfo PreserveSigAttribute__ctor_m8272_MethodInfo;
extern MethodInfo MonoMethod_GetDllImportAttribute_m8157_MethodInfo;
extern MethodInfo Type_get_IsClass_m6478_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m5574_MethodInfo;
extern MethodInfo Type_get_IsNested_m6524_MethodInfo;
extern MethodInfo MonoMethod_get_ReturnType_m8144_MethodInfo;
extern MethodInfo MonoMethod_ShouldPrintFullName_m8159_MethodInfo;
extern MethodInfo MonoMethod_get_Name_m8153_MethodInfo;
extern MethodInfo MonoMethod_GetParameters_m8145_MethodInfo;
extern MethodInfo MonoMethod_get_CallingConvention_m8150_MethodInfo;
extern MethodInfo MonoMethod_get_IsGenericMethodDefinition_m8165_MethodInfo;
extern MethodInfo MonoMethod_get_ReflectedType_m8151_MethodInfo;
extern MethodInfo MonoMethod_ToString_m8160_MethodInfo;
extern MethodInfo MonoMethod_MakeGenericMethod_impl_m8163_MethodInfo;


// System.Void System.Reflection.MonoMethod::.ctor()
extern "C" void MonoMethod__ctor_m8140 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	{
		MethodInfo__ctor_m8075(__this, /*hidden argument*/&MethodInfo__ctor_m8075_MethodInfo);
		return;
	}
}
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C" String_t* MonoMethod_get_name_m8141 (Object_t * __this /* static, unused */, MethodBase_t879 * ___method, MethodInfo* method)
{
	typedef String_t* (*MonoMethod_get_name_m8141_ftn) (MethodBase_t879 *);
	static MonoMethod_get_name_m8141_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_name_m8141_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C" MonoMethod_t1508 * MonoMethod_get_base_definition_m8142 (Object_t * __this /* static, unused */, MonoMethod_t1508 * ___method, MethodInfo* method)
{
	typedef MonoMethod_t1508 * (*MonoMethod_get_base_definition_m8142_ftn) (MonoMethod_t1508 *);
	static MonoMethod_get_base_definition_m8142_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_base_definition_m8142_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern MethodInfo MonoMethod_GetBaseDefinition_m8143_MethodInfo;
extern "C" MethodInfo_t871 * MonoMethod_GetBaseDefinition_m8143 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	{
		MonoMethod_t1508 * L_0 = MonoMethod_get_base_definition_m8142(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_base_definition_m8142_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C" Type_t * MonoMethod_get_ReturnType_m8144 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetReturnType_m8135(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetReturnType_m8135_MethodInfo);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern TypeInfo* ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t887* MonoMethod_GetParameters_m8145 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	static bool MonoMethod_GetParameters_m8145_init;
	if (!MonoMethod_GetParameters_m8145_init)
	{
		ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t887_0_0_0);
		MonoMethod_GetParameters_m8145_init = true;
	}
	ParameterInfoU5BU5D_t887* V_0 = {0};
	ParameterInfoU5BU5D_t887* V_1 = {0};
	{
		IntPtr_t98 L_0 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t887* L_1 = MonoMethodInfo_GetParametersInfo_m8139(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m8139_MethodInfo);
		V_0 = L_1;
		NullCheck(V_0);
		V_1 = ((ParameterInfoU5BU5D_t887*)SZArrayNew(ParameterInfoU5BU5D_t887_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)V_0)->max_length)))));
		NullCheck(V_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4063_MethodInfo, V_0, (Array_t *)(Array_t *)V_1, 0);
		return V_1;
	}
}
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoMethod_InternalInvoke_m8146 (MonoMethod_t1508 * __this, Object_t * ___obj, ObjectU5BU5D_t137* ___parameters, Exception_t140 ** ___exc, MethodInfo* method)
{
	typedef Object_t * (*MonoMethod_InternalInvoke_m8146_ftn) (MonoMethod_t1508 *, Object_t *, ObjectU5BU5D_t137*, Exception_t140 **);
	static MonoMethod_InternalInvoke_m8146_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_InternalInvoke_m8146_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoMethod_Invoke_m8147_MethodInfo;
extern "C" Object_t * MonoMethod_Invoke_m8147 (MonoMethod_t1508 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1115 * ___binder, ObjectU5BU5D_t137* ___parameters, CultureInfo_t791 * ___culture, MethodInfo* method)
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
		IntPtr_t98 L_1 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t887* L_2 = MonoMethodInfo_GetParametersInfo_m8139(NULL /*static, unused*/, L_1, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m8139_MethodInfo);
		V_0 = L_2;
		if (___parameters)
		{
			goto IL_0022;
		}
	}
	{
		NullCheck(V_0);
		if ((((int32_t)(((Array_t *)V_0)->max_length))))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		if (!___parameters)
		{
			goto IL_003a;
		}
	}
	{
		NullCheck(___parameters);
		NullCheck(V_0);
		if ((((int32_t)(((int32_t)(((Array_t *)___parameters)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		TargetParameterCountException_t1524 * L_3 = (TargetParameterCountException_t1524 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1524_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8246(L_3, (String_t*) &_stringLiteral1785, /*hidden argument*/&TargetParameterCountException__ctor_m8246_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_003a:
	{
		if (((int32_t)((int32_t)___invokeAttr&(int32_t)((int32_t)65536))))
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1115_il2cpp_TypeInfo));
		bool L_4 = Binder_ConvertArgs_m8033(NULL /*static, unused*/, ___binder, ___parameters, V_0, ___culture, /*hidden argument*/&Binder_ConvertArgs_m8033_MethodInfo);
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_t522 * L_5 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_5, (String_t*) &_stringLiteral1786, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_005b:
	{
		goto IL_0089;
	}

IL_005d:
	{
		V_1 = 0;
		goto IL_0083;
	}

IL_0061:
	{
		NullCheck(___parameters);
		IL2CPP_ARRAY_BOUNDS_CHECK(___parameters, V_1);
		int32_t L_6 = V_1;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(___parameters, L_6)));
		Type_t * L_7 = Object_GetType_m2357((*(Object_t **)(Object_t **)SZArrayLdElema(___parameters, L_6)), /*hidden argument*/&Object_GetType_m2357_MethodInfo);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		int32_t L_8 = V_1;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_0, L_8)));
		if ((((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_9)))
		{
			goto IL_007f;
		}
	}
	{
		ArgumentException_t522 * L_10 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_10, (String_t*) &_stringLiteral1785, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_007f:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0083:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_ContainsGenericParameters_m8167_MethodInfo, __this);
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		InvalidOperationException_t784 * L_12 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_12, (String_t*) &_stringLiteral1787, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_009c:
	{
		V_3 = NULL;
	}

IL_009e:
	try
	{ // begin try (depth: 1)
		Object_t * L_13 = MonoMethod_InternalInvoke_m8146(__this, ___obj, ___parameters, (&V_2), /*hidden argument*/&MonoMethod_InternalInvoke_m8146_MethodInfo);
		V_3 = L_13;
		// IL_00aa: leave.s IL_00c2
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t140 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&ThreadAbortException_t1762_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_00ac;
		if(il2cpp_codegen_class_is_assignable_from (&MethodAccessException_t1815_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_00b1;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t140_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_00b6;
		throw e;
	}

IL_00ac:
	{ // begin catch(System.Threading.ThreadAbortException)
		il2cpp_codegen_raise_exception(__exception_local);
		// IL_00af: leave.s IL_00c2
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00b1:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		// IL_00b4: leave.s IL_00c2
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00b6:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t140 *)__exception_local);
		TargetInvocationException_t1523 * L_14 = (TargetInvocationException_t1523 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t1523_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m8243(L_14, V_4, /*hidden argument*/&TargetInvocationException__ctor_m8243_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
		// IL_00c0: leave.s IL_00c2
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00c2:
	{
		if (!V_2)
		{
			goto IL_00c7;
		}
	}
	{
		il2cpp_codegen_raise_exception(V_2);
	}

IL_00c7:
	{
		return V_3;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern MethodInfo MonoMethod_get_MethodHandle_m8148_MethodInfo;
extern "C" RuntimeMethodHandle_t1474  MonoMethod_get_MethodHandle_m8148 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_0);
		RuntimeMethodHandle_t1474  L_1 = {0};
		RuntimeMethodHandle__ctor_m10104(&L_1, L_0, /*hidden argument*/&RuntimeMethodHandle__ctor_m10104_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern MethodInfo MonoMethod_get_Attributes_m8149_MethodInfo;
extern "C" int32_t MonoMethod_get_Attributes_m8149 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m8136(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetAttributes_m8136_MethodInfo);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C" int32_t MonoMethod_get_CallingConvention_m8150 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m8137(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetCallingConvention_m8137_MethodInfo);
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C" Type_t * MonoMethod_get_ReflectedType_m8151 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_2);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C" Type_t * MonoMethod_get_DeclaringType_m8152 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	{
		IntPtr_t98 L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m8134(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetDeclaringType_m8134_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.MonoMethod::get_Name()
extern "C" String_t* MonoMethod_get_Name_m8153 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_1);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m8141(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_name_m8141_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoMethod_IsDefined_m8154_MethodInfo;
extern "C" bool MonoMethod_IsDefined_m8154 (MonoMethod_t1508 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		bool L_0 = MonoCustomAttrs_IsDefined_m9926(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_IsDefined_m9926_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoMethod_GetCustomAttributes_m8155_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoMethod_GetCustomAttributes_m8155 (MonoMethod_t1508 * __this, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9925(NULL /*static, unused*/, __this, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9925_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoMethod_GetCustomAttributes_m8156_MethodInfo;
extern "C" ObjectU5BU5D_t137* MonoMethod_GetCustomAttributes_m8156 (MonoMethod_t1508 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1821_il2cpp_TypeInfo));
		ObjectU5BU5D_t137* L_0 = MonoCustomAttrs_GetCustomAttributes_m9924(NULL /*static, unused*/, __this, ___attributeType, ___inherit, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m9924_MethodInfo);
		return L_0;
	}
}
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C" DllImportAttribute_t1266 * MonoMethod_GetDllImportAttribute_m8157 (Object_t * __this /* static, unused */, IntPtr_t98 ___mhandle, MethodInfo* method)
{
	typedef DllImportAttribute_t1266 * (*MonoMethod_GetDllImportAttribute_m8157_ftn) (IntPtr_t98);
	static MonoMethod_GetDllImportAttribute_m8157_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetDllImportAttribute_m8157_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(___mhandle);
}
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern MethodInfo MonoMethod_GetPseudoCustomAttributes_m8158_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t137_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t137* MonoMethod_GetPseudoCustomAttributes_m8158 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	static bool MonoMethod_GetPseudoCustomAttributes_m8158_init;
	if (!MonoMethod_GetPseudoCustomAttributes_m8158_init)
	{
		ObjectU5BU5D_t137_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t137_0_0_0);
		MonoMethod_GetPseudoCustomAttributes_m8158_init = true;
	}
	int32_t V_0 = 0;
	MonoMethodInfo_t1511  V_1 = {0};
	ObjectU5BU5D_t137* V_2 = {0};
	DllImportAttribute_t1266 * V_3 = {0};
	{
		V_0 = 0;
		IntPtr_t98 L_0 = (__this->___mhandle_0);
		MonoMethodInfo_t1511  L_1 = MonoMethodInfo_GetMethodInfo_m8133(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8133_MethodInfo);
		V_1 = L_1;
		NullCheck((&V_1));
		int32_t L_2 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)128))))
		{
			goto IL_0021;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0021:
	{
		NullCheck((&V_1));
		int32_t L_3 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_3&(int32_t)((int32_t)8192))))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0+(int32_t)1));
	}

IL_0034:
	{
		if (V_0)
		{
			goto IL_0039;
		}
	}
	{
		return (ObjectU5BU5D_t137*)NULL;
	}

IL_0039:
	{
		V_2 = ((ObjectU5BU5D_t137*)SZArrayNew(ObjectU5BU5D_t137_il2cpp_TypeInfo_var, V_0));
		V_0 = 0;
		NullCheck((&V_1));
		int32_t L_4 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		PreserveSigAttribute_t1547 * L_6 = (PreserveSigAttribute_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PreserveSigAttribute_t1547_il2cpp_TypeInfo));
		PreserveSigAttribute__ctor_m8272(L_6, /*hidden argument*/&PreserveSigAttribute__ctor_m8272_MethodInfo);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, L_5);
		ArrayElementTypeCheck (V_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_2, L_5)) = (Object_t *)L_6;
	}

IL_005d:
	{
		NullCheck((&V_1));
		int32_t L_7 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)8192))))
		{
			goto IL_0096;
		}
	}
	{
		IntPtr_t98 L_8 = (__this->___mhandle_0);
		DllImportAttribute_t1266 * L_9 = MonoMethod_GetDllImportAttribute_m8157(NULL /*static, unused*/, L_8, /*hidden argument*/&MonoMethod_GetDllImportAttribute_m8157_MethodInfo);
		V_3 = L_9;
		NullCheck((&V_1));
		int32_t L_10 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_10&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		NullCheck(V_3);
		V_3->___PreserveSig_5 = 1;
	}

IL_008e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, L_11);
		ArrayElementTypeCheck (V_2, V_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(V_2, L_11)) = (Object_t *)V_3;
	}

IL_0096:
	{
		return V_2;
	}
}
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C" bool MonoMethod_ShouldPrintFullName_m8159 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NullCheck(___type);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsClass_m6478_MethodInfo, ___type);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		NullCheck(___type);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m6484_MethodInfo, ___type);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		NullCheck(___type);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, ___type);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m5574_MethodInfo, L_2);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		NullCheck(___type);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, ___type);
		NullCheck(L_4);
		bool L_5 = Type_get_IsNested_m6524(L_4, /*hidden argument*/&Type_get_IsNested_m6524_MethodInfo);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		G_B7_0 = G_B5_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B7_0 = 1;
	}

IL_0031:
	{
		G_B9_0 = G_B7_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B9_0 = 0;
	}

IL_0034:
	{
		return G_B9_0;
	}
}
// System.String System.Reflection.MonoMethod::ToString()
extern "C" String_t* MonoMethod_ToString_m8160 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	StringBuilder_t154 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t138* V_2 = {0};
	int32_t V_3 = 0;
	ParameterInfoU5BU5D_t887* V_4 = {0};
	int32_t V_5 = 0;
	Type_t * V_6 = {0};
	bool V_7 = false;
	{
		StringBuilder_t154 * L_0 = (StringBuilder_t154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t154_il2cpp_TypeInfo));
		StringBuilder__ctor_m714(L_0, /*hidden argument*/&StringBuilder__ctor_m714_MethodInfo);
		V_0 = L_0;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_ReturnType_m8144_MethodInfo, __this);
		V_1 = L_1;
		bool L_2 = MonoMethod_ShouldPrintFullName_m8159(NULL /*static, unused*/, V_1, /*hidden argument*/&MonoMethod_ShouldPrintFullName_m8159_MethodInfo);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		NullCheck(V_1);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, V_1);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_3, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		goto IL_0031;
	}

IL_0024:
	{
		NullCheck(V_1);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, V_1);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_4, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0031:
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral186, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m8153_MethodInfo, __this);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_5, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m8166_MethodInfo, __this);
		if (!L_6)
		{
			goto IL_009e;
		}
	}
	{
		TypeU5BU5D_t138* L_7 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&MonoMethod_GetGenericArguments_m8164_MethodInfo, __this);
		V_2 = L_7;
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral706, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		V_3 = 0;
		goto IL_008c;
	}

IL_0069:
	{
		if ((((int32_t)V_3) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral20, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0079:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		int32_t L_8 = V_3;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(V_2, L_8)));
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, (*(Type_t **)(Type_t **)SZArrayLdElema(V_2, L_8)));
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_9, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_008c:
	{
		NullCheck(V_2);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)V_2)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral158, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_009e:
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral828, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		ParameterInfoU5BU5D_t887* L_10 = (ParameterInfoU5BU5D_t887*)VirtFuncInvoker0< ParameterInfoU5BU5D_t887* >::Invoke(&MonoMethod_GetParameters_m8145_MethodInfo, __this);
		V_4 = L_10;
		V_5 = 0;
		goto IL_0127;
	}

IL_00b7:
	{
		if ((((int32_t)V_5) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral149, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_00c8:
	{
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_5);
		int32_t L_11 = V_5;
		NullCheck((*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_4, L_11)));
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4312_MethodInfo, (*(ParameterInfo_t888 **)(ParameterInfo_t888 **)SZArrayLdElema(V_4, L_11)));
		V_6 = L_12;
		NullCheck(V_6);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6477_MethodInfo, V_6);
		V_7 = L_13;
		if (!V_7)
		{
			goto IL_00ea;
		}
	}
	{
		NullCheck(V_6);
		Type_t * L_14 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m5620_MethodInfo, V_6);
		V_6 = L_14;
	}

IL_00ea:
	{
		bool L_15 = MonoMethod_ShouldPrintFullName_m8159(NULL /*static, unused*/, V_6, /*hidden argument*/&MonoMethod_ShouldPrintFullName_m8159_MethodInfo);
		if (!L_15)
		{
			goto IL_0103;
		}
	}
	{
		NullCheck(V_6);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6514_MethodInfo, V_6);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_16, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		goto IL_0111;
	}

IL_0103:
	{
		NullCheck(V_6);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4309_MethodInfo, V_6);
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, L_17, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0111:
	{
		if (!V_7)
		{
			goto IL_0121;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1482, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0121:
	{
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_0127:
	{
		NullCheck(V_4);
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((Array_t *)V_4)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoMethod_get_CallingConvention_m8150_MethodInfo, __this);
		if (!((int32_t)((int32_t)L_18&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		NullCheck(V_4);
		if ((((int32_t)(((int32_t)(((Array_t *)V_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral149, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_014c:
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral1788, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
	}

IL_0158:
	{
		NullCheck(V_0);
		StringBuilder_Append_m3908(V_0, (String_t*) &_stringLiteral21, /*hidden argument*/&StringBuilder_Append_m3908_MethodInfo);
		NullCheck(V_0);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m716_MethodInfo, V_0);
		return L_19;
	}
}
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoMethod_GetObjectData_m8161_MethodInfo;
extern "C" void MonoMethod_GetObjectData_m8161 (MonoMethod_t1508 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method)
{
	TypeU5BU5D_t138* V_0 = {0};
	TypeU5BU5D_t138* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m8166_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethodDefinition_m8165_MethodInfo, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		TypeU5BU5D_t138* L_2 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&MonoMethod_GetGenericArguments_m8164_MethodInfo, __this);
		G_B4_0 = L_2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = ((TypeU5BU5D_t138*)(NULL));
	}

IL_0019:
	{
		V_0 = G_B4_0;
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m8153_MethodInfo, __this);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_ReflectedType_m8151_MethodInfo, __this);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_ToString_m8160_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8060(NULL /*static, unused*/, ___info, L_3, L_4, L_5, 8, V_0, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8060_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern MethodInfo MonoMethod_MakeGenericMethod_m8162_MethodInfo;
extern "C" MethodInfo_t871 * MonoMethod_MakeGenericMethod_m8162 (MonoMethod_t1508 * __this, TypeU5BU5D_t138* ___methodInstantiation, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t138* V_1 = {0};
	int32_t V_2 = 0;
	MethodInfo_t871 * V_3 = {0};
	{
		if (___methodInstantiation)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_0 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3869(L_0, (String_t*) &_stringLiteral1789, /*hidden argument*/&ArgumentNullException__ctor_m3869_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		V_1 = ___methodInstantiation;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_1 = V_2;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(V_1, L_1));
		if (V_0)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t785 * L_2 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t785_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m9451(L_2, /*hidden argument*/&ArgumentNullException__ctor_m9451_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0021:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_0025:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		MethodInfo_t871 * L_3 = MonoMethod_MakeGenericMethod_impl_m8163(__this, ___methodInstantiation, /*hidden argument*/&MonoMethod_MakeGenericMethod_impl_m8163_MethodInfo);
		V_3 = L_3;
		if (V_3)
		{
			goto IL_005b;
		}
	}
	{
		TypeU5BU5D_t138* L_4 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&MonoMethod_GetGenericArguments_m8164_MethodInfo, __this);
		NullCheck(L_4);
		int32_t L_5 = (((int32_t)(((Array_t *)L_4)->max_length)));
		Object_t * L_6 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_5);
		NullCheck(___methodInstantiation);
		int32_t L_7 = (((int32_t)(((Array_t *)___methodInstantiation)->max_length)));
		Object_t * L_8 = Box(InitializedTypeInfo(&Int32_t43_il2cpp_TypeInfo), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Format_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral1790, L_6, L_8, /*hidden argument*/&String_Format_m149_MethodInfo);
		ArgumentException_t522 * L_10 = (ArgumentException_t522 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t522_il2cpp_TypeInfo));
		ArgumentException__ctor_m2758(L_10, L_9, /*hidden argument*/&ArgumentException__ctor_m2758_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005b:
	{
		return V_3;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C" MethodInfo_t871 * MonoMethod_MakeGenericMethod_impl_m8163 (MonoMethod_t1508 * __this, TypeU5BU5D_t138* ___types, MethodInfo* method)
{
	typedef MethodInfo_t871 * (*MonoMethod_MakeGenericMethod_impl_m8163_ftn) (MonoMethod_t1508 *, TypeU5BU5D_t138*);
	static MonoMethod_MakeGenericMethod_impl_m8163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_MakeGenericMethod_impl_m8163_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, ___types);
}
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C" TypeU5BU5D_t138* MonoMethod_GetGenericArguments_m8164 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	typedef TypeU5BU5D_t138* (*MonoMethod_GetGenericArguments_m8164_ftn) (MonoMethod_t1508 *);
	static MonoMethod_GetGenericArguments_m8164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetGenericArguments_m8164_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C" bool MonoMethod_get_IsGenericMethodDefinition_m8165 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethodDefinition_m8165_ftn) (MonoMethod_t1508 *);
	static MonoMethod_get_IsGenericMethodDefinition_m8165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethodDefinition_m8165_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C" bool MonoMethod_get_IsGenericMethod_m8166 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethod_m8166_ftn) (MonoMethod_t1508 *);
	static MonoMethod_get_IsGenericMethod_m8166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethod_m8166_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C" bool MonoMethod_get_ContainsGenericParameters_m8167 (MonoMethod_t1508 * __this, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t138* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m8166_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		TypeU5BU5D_t138* L_1 = (TypeU5BU5D_t138*)VirtFuncInvoker0< TypeU5BU5D_t138* >::Invoke(&MonoMethod_GetGenericArguments_m8164_MethodInfo, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_2 = V_2;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(V_1, L_2));
		NullCheck(V_0);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6517_MethodInfo, V_0);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		V_2 = ((int32_t)((int32_t)V_2+(int32_t)1));
	}

IL_0025:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_002b:
	{
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_DeclaringType_m8152_MethodInfo, __this);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6517_MethodInfo, L_4);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
