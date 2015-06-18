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
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t163_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// AAMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_AAMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AAMode_t164_il2cpp_TypeInfo;
// AAMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_AAModeMethodDeclarations.h"



// AntialiasingAsPostEffect
#include "AssemblyU2DUnityScriptU2Dfirstpass_AntialiasingAsPostEffect.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AntialiasingAsPostEffect_t165_il2cpp_TypeInfo;
// AntialiasingAsPostEffect
#include "AssemblyU2DUnityScriptU2Dfirstpass_AntialiasingAsPostEffectMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo PostEffectsBase_t166_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
extern TypeInfo Material_t19_il2cpp_TypeInfo;
extern TypeInfo Shader_t18_il2cpp_TypeInfo;
extern TypeInfo Void_t42_il2cpp_TypeInfo;
extern TypeInfo RenderTexture_t21_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBaseMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern MethodInfo PostEffectsBase__ctor_m842_MethodInfo;
extern MethodInfo PostEffectsBase_CheckSupport_m849_MethodInfo;
extern MethodInfo PostEffectsBase_CreateMaterial_m844_MethodInfo;
extern MethodInfo Shader_get_isSupported_m178_MethodInfo;
extern MethodInfo PostEffectsBase_NotSupported_m854_MethodInfo;
extern MethodInfo PostEffectsBase_ReportAutoDisable_m852_MethodInfo;
extern MethodInfo AntialiasingAsPostEffect_CheckResources_m732_MethodInfo;
extern MethodInfo Graphics_Blit_m184_MethodInfo;
extern MethodInfo Object_op_Inequality_m166_MethodInfo;
extern MethodInfo Material_SetFloat_m195_MethodInfo;
extern MethodInfo Graphics_Blit_m187_MethodInfo;
extern MethodInfo Texture_set_anisoLevel_m902_MethodInfo;
extern MethodInfo RenderTexture_get_width_m181_MethodInfo;
extern MethodInfo RenderTexture_get_height_m182_MethodInfo;
extern MethodInfo RenderTexture_GetTemporary_m189_MethodInfo;
extern MethodInfo Graphics_Blit_m224_MethodInfo;
extern MethodInfo RenderTexture_ReleaseTemporary_m185_MethodInfo;


// System.Void AntialiasingAsPostEffect::.ctor()
extern MethodInfo AntialiasingAsPostEffect__ctor_m730_MethodInfo;
extern "C" void AntialiasingAsPostEffect__ctor_m730 (AntialiasingAsPostEffect_t165 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___mode_4 = 1;
		__this->___offsetScale_6 = (0.2f);
		__this->___blurRadius_7 = (18.0f);
		__this->___edgeThresholdMin_8 = (0.05f);
		__this->___edgeThreshold_9 = (0.2f);
		__this->___edgeSharpness_10 = (4.0f);
		return;
	}
}
// UnityEngine.Material AntialiasingAsPostEffect::CurrentAAMaterial()
extern MethodInfo AntialiasingAsPostEffect_CurrentAAMaterial_m731_MethodInfo;
extern "C" Material_t19 * AntialiasingAsPostEffect_CurrentAAMaterial_m731 (AntialiasingAsPostEffect_t165 * __this, MethodInfo* method)
{
	Material_t19 * V_0 = {0};
	int32_t V_1 = {0};
	{
		V_0 = (Material_t19 *)NULL;
		int32_t L_0 = (__this->___mode_4);
		V_1 = L_0;
		if ((((uint32_t)V_1) != ((uint32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		Material_t19 * L_1 = (__this->___materialFXAAIII_25);
		V_0 = L_1;
		goto IL_0095;
	}

IL_001c:
	{
		if ((((uint32_t)V_1) != ((uint32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Material_t19 * L_2 = (__this->___materialFXAAII_23);
		V_0 = L_2;
		goto IL_0095;
	}

IL_002f:
	{
		if ((((uint32_t)V_1) != ((uint32_t)2)))
		{
			goto IL_0042;
		}
	}
	{
		Material_t19 * L_3 = (__this->___materialFXAAPreset2_19);
		V_0 = L_3;
		goto IL_0095;
	}

IL_0042:
	{
		if ((((uint32_t)V_1) != ((uint32_t)3)))
		{
			goto IL_0055;
		}
	}
	{
		Material_t19 * L_4 = (__this->___materialFXAAPreset3_21);
		V_0 = L_4;
		goto IL_0095;
	}

IL_0055:
	{
		if ((((uint32_t)V_1) != ((uint32_t)4)))
		{
			goto IL_0068;
		}
	}
	{
		Material_t19 * L_5 = (__this->___nfaa_17);
		V_0 = L_5;
		goto IL_0095;
	}

IL_0068:
	{
		if ((((uint32_t)V_1) != ((uint32_t)5)))
		{
			goto IL_007b;
		}
	}
	{
		Material_t19 * L_6 = (__this->___ssaa_13);
		V_0 = L_6;
		goto IL_0095;
	}

IL_007b:
	{
		if ((((uint32_t)V_1) != ((uint32_t)6)))
		{
			goto IL_008e;
		}
	}
	{
		Material_t19 * L_7 = (__this->___dlaa_15);
		V_0 = L_7;
		goto IL_0095;
	}

IL_008e:
	{
		V_0 = (Material_t19 *)NULL;
		goto IL_0095;
	}

IL_0095:
	{
		return V_0;
	}
}
// System.Boolean AntialiasingAsPostEffect::CheckResources()
extern "C" bool AntialiasingAsPostEffect_CheckResources_m732 (AntialiasingAsPostEffect_t165 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		Shader_t18 * L_0 = (__this->___shaderFXAAPreset2_18);
		Material_t19 * L_1 = (__this->___materialFXAAPreset2_19);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CreateMaterial_m844_MethodInfo, __this, L_0, L_1);
		__this->___materialFXAAPreset2_19 = L_2;
		Shader_t18 * L_3 = (__this->___shaderFXAAPreset3_20);
		Material_t19 * L_4 = (__this->___materialFXAAPreset3_21);
		Material_t19 * L_5 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CreateMaterial_m844_MethodInfo, __this, L_3, L_4);
		__this->___materialFXAAPreset3_21 = L_5;
		Shader_t18 * L_6 = (__this->___shaderFXAAII_22);
		Material_t19 * L_7 = (__this->___materialFXAAII_23);
		Material_t19 * L_8 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CreateMaterial_m844_MethodInfo, __this, L_6, L_7);
		__this->___materialFXAAII_23 = L_8;
		Shader_t18 * L_9 = (__this->___shaderFXAAIII_24);
		Material_t19 * L_10 = (__this->___materialFXAAIII_25);
		Material_t19 * L_11 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CreateMaterial_m844_MethodInfo, __this, L_9, L_10);
		__this->___materialFXAAIII_25 = L_11;
		Shader_t18 * L_12 = (__this->___nfaaShader_16);
		Material_t19 * L_13 = (__this->___nfaa_17);
		Material_t19 * L_14 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CreateMaterial_m844_MethodInfo, __this, L_12, L_13);
		__this->___nfaa_17 = L_14;
		Shader_t18 * L_15 = (__this->___ssaaShader_12);
		Material_t19 * L_16 = (__this->___ssaa_13);
		Material_t19 * L_17 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CreateMaterial_m844_MethodInfo, __this, L_15, L_16);
		__this->___ssaa_13 = L_17;
		Shader_t18 * L_18 = (__this->___dlaaShader_14);
		Material_t19 * L_19 = (__this->___dlaa_15);
		Material_t19 * L_20 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CreateMaterial_m844_MethodInfo, __this, L_18, L_19);
		__this->___dlaa_15 = L_20;
		Shader_t18 * L_21 = (__this->___ssaaShader_12);
		NullCheck(L_21);
		bool L_22 = Shader_get_isSupported_m178(L_21, /*hidden argument*/&Shader_get_isSupported_m178_MethodInfo);
		if (L_22)
		{
			goto IL_00cc;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_NotSupported_m854_MethodInfo, __this);
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_00cc:
	{
		bool L_23 = (__this->___isSupported_3);
		return L_23;
	}
}
// System.Void AntialiasingAsPostEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo AntialiasingAsPostEffect_OnRenderImage_m733_MethodInfo;
extern "C" void AntialiasingAsPostEffect_OnRenderImage_m733 (AntialiasingAsPostEffect_t165 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	RenderTexture_t21 * V_0 = {0};
	Material_t19 * G_B21_0 = {0};
	RenderTexture_t21 * G_B21_1 = {0};
	RenderTexture_t21 * G_B21_2 = {0};
	Material_t19 * G_B20_0 = {0};
	RenderTexture_t21 * G_B20_1 = {0};
	RenderTexture_t21 * G_B20_2 = {0};
	int32_t G_B22_0 = 0;
	Material_t19 * G_B22_1 = {0};
	RenderTexture_t21 * G_B22_2 = {0};
	RenderTexture_t21 * G_B22_3 = {0};
	Material_t19 * G_B27_0 = {0};
	RenderTexture_t21 * G_B27_1 = {0};
	RenderTexture_t21 * G_B27_2 = {0};
	Material_t19 * G_B26_0 = {0};
	RenderTexture_t21 * G_B26_1 = {0};
	RenderTexture_t21 * G_B26_2 = {0};
	int32_t G_B28_0 = 0;
	Material_t19 * G_B28_1 = {0};
	RenderTexture_t21 * G_B28_2 = {0};
	RenderTexture_t21 * G_B28_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&AntialiasingAsPostEffect_CheckResources_m732_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_023b;
	}

IL_0017:
	{
		int32_t L_1 = (__this->___mode_4);
		if ((((uint32_t)L_1) != ((uint32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		Material_t19 * L_2 = (__this->___materialFXAAIII_25);
		bool L_3 = Object_op_Inequality_m166(NULL /*static, unused*/, L_2, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_3)
		{
			goto IL_0088;
		}
	}
	{
		Material_t19 * L_4 = (__this->___materialFXAAIII_25);
		float L_5 = (__this->___edgeThresholdMin_8);
		NullCheck(L_4);
		Material_SetFloat_m195(L_4, (String_t*) &_stringLiteral210, L_5, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_6 = (__this->___materialFXAAIII_25);
		float L_7 = (__this->___edgeThreshold_9);
		NullCheck(L_6);
		Material_SetFloat_m195(L_6, (String_t*) &_stringLiteral211, L_7, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_8 = (__this->___materialFXAAIII_25);
		float L_9 = (__this->___edgeSharpness_10);
		NullCheck(L_8);
		Material_SetFloat_m195(L_8, (String_t*) &_stringLiteral212, L_9, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_10 = (__this->___materialFXAAIII_25);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, ___destination, L_10, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		goto IL_023b;
	}

IL_0088:
	{
		int32_t L_11 = (__this->___mode_4);
		if ((((uint32_t)L_11) != ((uint32_t)3)))
		{
			goto IL_00b7;
		}
	}
	{
		Material_t19 * L_12 = (__this->___materialFXAAPreset3_21);
		bool L_13 = Object_op_Inequality_m166(NULL /*static, unused*/, L_12, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_13)
		{
			goto IL_00b7;
		}
	}
	{
		Material_t19 * L_14 = (__this->___materialFXAAPreset3_21);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, ___destination, L_14, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		goto IL_023b;
	}

IL_00b7:
	{
		int32_t L_15 = (__this->___mode_4);
		if ((((uint32_t)L_15) != ((uint32_t)2)))
		{
			goto IL_00f4;
		}
	}
	{
		Material_t19 * L_16 = (__this->___materialFXAAPreset2_19);
		bool L_17 = Object_op_Inequality_m166(NULL /*static, unused*/, L_16, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_17)
		{
			goto IL_00f4;
		}
	}
	{
		NullCheck(___source);
		Texture_set_anisoLevel_m902(___source, 4, /*hidden argument*/&Texture_set_anisoLevel_m902_MethodInfo);
		Material_t19 * L_18 = (__this->___materialFXAAPreset2_19);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, ___destination, L_18, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		NullCheck(___source);
		Texture_set_anisoLevel_m902(___source, 0, /*hidden argument*/&Texture_set_anisoLevel_m902_MethodInfo);
		goto IL_023b;
	}

IL_00f4:
	{
		int32_t L_19 = (__this->___mode_4);
		if ((((uint32_t)L_19) != ((uint32_t)0)))
		{
			goto IL_0123;
		}
	}
	{
		Material_t19 * L_20 = (__this->___materialFXAAII_23);
		bool L_21 = Object_op_Inequality_m166(NULL /*static, unused*/, L_20, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_21)
		{
			goto IL_0123;
		}
	}
	{
		Material_t19 * L_22 = (__this->___materialFXAAII_23);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, ___destination, L_22, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		goto IL_023b;
	}

IL_0123:
	{
		int32_t L_23 = (__this->___mode_4);
		if ((((uint32_t)L_23) != ((uint32_t)5)))
		{
			goto IL_0152;
		}
	}
	{
		Material_t19 * L_24 = (__this->___ssaa_13);
		bool L_25 = Object_op_Inequality_m166(NULL /*static, unused*/, L_24, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_25)
		{
			goto IL_0152;
		}
	}
	{
		Material_t19 * L_26 = (__this->___ssaa_13);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, ___destination, L_26, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		goto IL_023b;
	}

IL_0152:
	{
		int32_t L_27 = (__this->___mode_4);
		if ((((uint32_t)L_27) != ((uint32_t)6)))
		{
			goto IL_01c0;
		}
	}
	{
		Material_t19 * L_28 = (__this->___dlaa_15);
		bool L_29 = Object_op_Inequality_m166(NULL /*static, unused*/, L_28, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_29)
		{
			goto IL_01c0;
		}
	}
	{
		NullCheck(___source);
		Texture_set_anisoLevel_m902(___source, 0, /*hidden argument*/&Texture_set_anisoLevel_m902_MethodInfo);
		NullCheck(___source);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_32 = RenderTexture_GetTemporary_m189(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/&RenderTexture_GetTemporary_m189_MethodInfo);
		V_0 = L_32;
		Material_t19 * L_33 = (__this->___dlaa_15);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_0, L_33, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_34 = (__this->___dlaa_15);
		bool L_35 = (__this->___dlaaSharp_11);
		G_B20_0 = L_34;
		G_B20_1 = ___destination;
		G_B20_2 = V_0;
		if (!L_35)
		{
			G_B21_0 = L_34;
			G_B21_1 = ___destination;
			G_B21_2 = V_0;
			goto IL_01af;
		}
	}
	{
		G_B22_0 = 2;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		G_B22_3 = G_B20_2;
		goto IL_01b0;
	}

IL_01af:
	{
		G_B22_0 = 1;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
	}

IL_01b0:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B22_3, G_B22_2, G_B22_1, G_B22_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_0, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		goto IL_023b;
	}

IL_01c0:
	{
		int32_t L_36 = (__this->___mode_4);
		if ((((uint32_t)L_36) != ((uint32_t)4)))
		{
			goto IL_0234;
		}
	}
	{
		Material_t19 * L_37 = (__this->___nfaa_17);
		bool L_38 = Object_op_Inequality_m166(NULL /*static, unused*/, L_37, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_38)
		{
			goto IL_0234;
		}
	}
	{
		NullCheck(___source);
		Texture_set_anisoLevel_m902(___source, 0, /*hidden argument*/&Texture_set_anisoLevel_m902_MethodInfo);
		Material_t19 * L_39 = (__this->___nfaa_17);
		float L_40 = (__this->___offsetScale_6);
		NullCheck(L_39);
		Material_SetFloat_m195(L_39, (String_t*) &_stringLiteral213, L_40, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_41 = (__this->___nfaa_17);
		float L_42 = (__this->___blurRadius_7);
		NullCheck(L_41);
		Material_SetFloat_m195(L_41, (String_t*) &_stringLiteral214, L_42, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_43 = (__this->___nfaa_17);
		bool L_44 = (__this->___showGeneratedNormals_5);
		G_B26_0 = L_43;
		G_B26_1 = ___destination;
		G_B26_2 = ___source;
		if (!L_44)
		{
			G_B27_0 = L_43;
			G_B27_1 = ___destination;
			G_B27_2 = ___source;
			goto IL_0229;
		}
	}
	{
		G_B28_0 = 1;
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		G_B28_3 = G_B26_2;
		goto IL_022a;
	}

IL_0229:
	{
		G_B28_0 = 0;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
		G_B28_3 = G_B27_2;
	}

IL_022a:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B28_3, G_B28_2, G_B28_1, G_B28_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_023b;
	}

IL_0234:
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
	}

IL_023b:
	{
		return;
	}
}
// System.Void AntialiasingAsPostEffect::Main()
extern MethodInfo AntialiasingAsPostEffect_Main_m734_MethodInfo;
extern "C" void AntialiasingAsPostEffect_Main_m734 (AntialiasingAsPostEffect_t165 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Bloom/LensFlareStyle
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_LensFlareStyle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LensFlareStyle_t167_il2cpp_TypeInfo;
// Bloom/LensFlareStyle
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_LensFlareStyleMethodDeclarations.h"



// Bloom/TweakMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_TweakMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TweakMode_t168_il2cpp_TypeInfo;
// Bloom/TweakMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_TweakModeMethodDeclarations.h"



// Bloom/HDRBloomMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_HDRBloomMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HDRBloomMode_t169_il2cpp_TypeInfo;
// Bloom/HDRBloomMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_HDRBloomModeMethodDeclarations.h"



// Bloom/BloomScreenBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_BloomScreenBlendMod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BloomScreenBlendMode_t170_il2cpp_TypeInfo;
// Bloom/BloomScreenBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_BloomScreenBlendModMethodDeclarations.h"



// Bloom/BloomQuality
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_BloomQuality.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BloomQuality_t171_il2cpp_TypeInfo;
// Bloom/BloomQuality
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom_BloomQualityMethodDeclarations.h"



// Bloom
#include "AssemblyU2DUnityScriptU2Dfirstpass_Bloom.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Bloom_t172_il2cpp_TypeInfo;
// Bloom
#include "AssemblyU2DUnityScriptU2Dfirstpass_BloomMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
extern TypeInfo Color_t29_il2cpp_TypeInfo;
extern TypeInfo Vector4_t52_il2cpp_TypeInfo;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern MethodInfo Color_get_white_m903_MethodInfo;
extern MethodInfo Color__ctor_m196_MethodInfo;
extern MethodInfo PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo;
extern MethodInfo Bloom_CheckResources_m736_MethodInfo;
extern MethodInfo RenderTexture_get_format_m904_MethodInfo;
extern MethodInfo Component_get_camera_m215_MethodInfo;
extern MethodInfo Camera_get_hdr_m905_MethodInfo;
extern MethodInfo RenderTexture_GetTemporary_m906_MethodInfo;
extern MethodInfo Color_op_Multiply_m907_MethodInfo;
extern MethodInfo Bloom_BrightFilter_m741_MethodInfo;
extern MethodInfo Vector4__ctor_m193_MethodInfo;
extern MethodInfo Material_SetVector_m194_MethodInfo;
extern MethodInfo Bloom_BrightFilter_m740_MethodInfo;
extern MethodInfo Bloom_Vignette_m742_MethodInfo;
extern MethodInfo Bloom_BlendFlares_m739_MethodInfo;
extern MethodInfo Mathf_Cos_m647_MethodInfo;
extern MethodInfo Mathf_Sin_m646_MethodInfo;
extern MethodInfo Vector4_op_Multiply_m608_MethodInfo;
extern MethodInfo Bloom_AddTo_m738_MethodInfo;
extern MethodInfo Material_SetTexture_m186_MethodInfo;
extern MethodInfo Color_op_Implicit_m908_MethodInfo;
extern MethodInfo Object_op_Implicit_m173_MethodInfo;
extern MethodInfo Object_op_Equality_m164_MethodInfo;


// System.Void Bloom::.ctor()
extern MethodInfo Bloom__ctor_m735_MethodInfo;
extern "C" void Bloom__ctor_m735 (Bloom_t172 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___screenBlendMode_5 = 1;
		__this->___hdr_6 = 0;
		__this->___sepBlurSpread_8 = (2.5f);
		__this->___quality_9 = 1;
		__this->___bloomIntensity_10 = (0.5f);
		__this->___bloomThreshhold_11 = (0.5f);
		Color_t29  L_0 = Color_get_white_m903(NULL /*static, unused*/, /*hidden argument*/&Color_get_white_m903_MethodInfo);
		__this->___bloomThreshholdColor_12 = L_0;
		__this->___bloomBlurIterations_13 = 2;
		__this->___hollywoodFlareBlurIterations_14 = 2;
		__this->___lensflareMode_16 = 1;
		__this->___hollyStretchWidth_17 = (2.5f);
		__this->___lensflareThreshhold_19 = (0.3f);
		__this->___lensFlareSaturation_20 = (0.75f);
		Color_t29  L_1 = {0};
		Color__ctor_m196(&L_1, (0.4f), (0.4f), (0.8f), (0.75f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		__this->___flareColorA_21 = L_1;
		Color_t29  L_2 = {0};
		Color__ctor_m196(&L_2, (0.4f), (0.8f), (0.8f), (0.75f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		__this->___flareColorB_22 = L_2;
		Color_t29  L_3 = {0};
		Color__ctor_m196(&L_3, (0.8f), (0.4f), (0.8f), (0.75f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		__this->___flareColorC_23 = L_3;
		Color_t29  L_4 = {0};
		Color__ctor_m196(&L_4, (0.8f), (0.4f), (((float)0)), (0.75f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		__this->___flareColorD_24 = L_4;
		__this->___blurWidth_25 = (1.0f);
		return;
	}
}
// System.Boolean Bloom::CheckResources()
extern "C" bool Bloom_CheckResources_m736 (Bloom_t172 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		Shader_t18 * L_0 = (__this->___screenBlendShader_29);
		Material_t19 * L_1 = (__this->___screenBlend_30);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___screenBlend_30 = L_2;
		Shader_t18 * L_3 = (__this->___lensFlareShader_27);
		Material_t19 * L_4 = (__this->___lensFlareMaterial_28);
		Material_t19 * L_5 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_3, L_4);
		__this->___lensFlareMaterial_28 = L_5;
		Shader_t18 * L_6 = (__this->___blurAndFlaresShader_31);
		Material_t19 * L_7 = (__this->___blurAndFlaresMaterial_32);
		Material_t19 * L_8 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_6, L_7);
		__this->___blurAndFlaresMaterial_32 = L_8;
		Shader_t18 * L_9 = (__this->___brightPassFilterShader_33);
		Material_t19 * L_10 = (__this->___brightPassFilterMaterial_34);
		Material_t19 * L_11 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_9, L_10);
		__this->___brightPassFilterMaterial_34 = L_11;
		bool L_12 = (__this->___isSupported_3);
		if (L_12)
		{
			goto IL_0079;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0079:
	{
		bool L_13 = (__this->___isSupported_3);
		return L_13;
	}
}
// System.Void Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo Bloom_OnRenderImage_m737_MethodInfo;
extern "C" void Bloom_OnRenderImage_m737 (Bloom_t172 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	RenderTexture_t21 * V_2 = {0};
	RenderTexture_t21 * V_3 = {0};
	RenderTexture_t21 * V_4 = {0};
	RenderTexture_t21 * V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t G_B5_0 = 0;
	Bloom_t172 * G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	Bloom_t172 * G_B4_1 = {0};
	bool G_B9_0 = false;
	Bloom_t172 * G_B9_1 = {0};
	bool G_B8_0 = false;
	Bloom_t172 * G_B8_1 = {0};
	int32_t G_B14_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Bloom_CheckResources_m736_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_06ad;
	}

IL_0017:
	{
		__this->___doHdr_7 = 0;
		int32_t L_1 = (__this->___hdr_6);
		if ((((uint32_t)L_1) != ((uint32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		NullCheck(___source);
		int32_t L_2 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		int32_t L_3 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		G_B4_0 = L_3;
		G_B4_1 = __this;
		if (!L_3)
		{
			G_B5_0 = L_3;
			G_B5_1 = __this;
			goto IL_0046;
		}
	}
	{
		Camera_t56 * L_4 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_4);
		bool L_5 = Camera_get_hdr_m905(L_4, /*hidden argument*/&Camera_get_hdr_m905_MethodInfo);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B4_1;
	}

IL_0046:
	{
		NullCheck(G_B5_1);
		G_B5_1->___doHdr_7 = G_B5_0;
		goto IL_005f;
	}

IL_0050:
	{
		int32_t L_6 = (__this->___hdr_6);
		__this->___doHdr_7 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
	}

IL_005f:
	{
		bool L_7 = (__this->___doHdr_7);
		bool L_8 = L_7;
		G_B8_0 = L_8;
		G_B8_1 = __this;
		if (!L_8)
		{
			G_B9_0 = L_8;
			G_B9_1 = __this;
			goto IL_0073;
		}
	}
	{
		bool L_9 = (__this->___supportHDRTextures_1);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_1;
	}

IL_0073:
	{
		NullCheck(G_B9_1);
		G_B9_1->___doHdr_7 = G_B9_0;
		int32_t L_10 = (__this->___screenBlendMode_5);
		V_0 = L_10;
		bool L_11 = (__this->___doHdr_7);
		if (!L_11)
		{
			goto IL_008c;
		}
	}
	{
		V_0 = 1;
	}

IL_008c:
	{
		bool L_12 = (__this->___doHdr_7);
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		G_B14_0 = 2;
		goto IL_009e;
	}

IL_009d:
	{
		G_B14_0 = 7;
	}

IL_009e:
	{
		V_1 = G_B14_0;
		NullCheck(___source);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_15 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_13/(int32_t)2)), ((int32_t)((int32_t)L_14/(int32_t)2)), 0, V_1, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_2 = L_15;
		NullCheck(___source);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_18 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_16/(int32_t)4)), ((int32_t)((int32_t)L_17/(int32_t)4)), 0, V_1, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_3 = L_18;
		NullCheck(___source);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_21 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_19/(int32_t)4)), ((int32_t)((int32_t)L_20/(int32_t)4)), 0, V_1, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_4 = L_21;
		NullCheck(___source);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_24 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_22/(int32_t)4)), ((int32_t)((int32_t)L_23/(int32_t)4)), 0, V_1, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_5 = L_24;
		NullCheck(___source);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		V_6 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_25))))/(float)((float)((float)(1.0f)*(float)(((float)L_26))))));
		V_7 = (0.001953125f);
		int32_t L_27 = (__this->___quality_9);
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		Material_t19 * L_28 = (__this->___screenBlend_30);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_2, L_28, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_29 = (__this->___screenBlend_30);
		Graphics_Blit_m224(NULL /*static, unused*/, V_2, V_4, L_29, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_30 = (__this->___screenBlend_30);
		Graphics_Blit_m224(NULL /*static, unused*/, V_4, V_3, L_30, 6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0177;
	}

IL_0162:
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, V_2, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		Material_t19 * L_31 = (__this->___screenBlend_30);
		Graphics_Blit_m224(NULL /*static, unused*/, V_2, V_3, L_31, 6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_0177:
	{
		float L_32 = (__this->___bloomThreshhold_11);
		Color_t29  L_33 = (__this->___bloomThreshholdColor_12);
		Color_t29  L_34 = Color_op_Multiply_m907(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/&Color_op_Multiply_m907_MethodInfo);
		Bloom_BrightFilter_m741(__this, L_34, V_3, V_4, /*hidden argument*/&Bloom_BrightFilter_m741_MethodInfo);
		int32_t L_35 = (__this->___bloomBlurIterations_13);
		if ((((int32_t)L_35) >= ((int32_t)1)))
		{
			goto IL_01a9;
		}
	}
	{
		__this->___bloomBlurIterations_13 = 1;
		goto IL_01be;
	}

IL_01a9:
	{
		int32_t L_36 = (__this->___bloomBlurIterations_13);
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)10))))
		{
			goto IL_01be;
		}
	}
	{
		__this->___bloomBlurIterations_13 = ((int32_t)10);
	}

IL_01be:
	{
		V_8 = 0;
		goto IL_02af;
	}

IL_01c6:
	{
		float L_37 = (__this->___sepBlurSpread_8);
		V_9 = ((float)((float)((float)((float)(1.0f)+(float)((float)((float)(((float)V_8))*(float)(0.25f)))))*(float)L_37));
		Material_t19 * L_38 = (__this->___blurAndFlaresMaterial_32);
		Vector4_t52  L_39 = {0};
		Vector4__ctor_m193(&L_39, (((float)0)), ((float)((float)V_9*(float)V_7)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_38);
		Material_SetVector_m194(L_38, (String_t*) &_stringLiteral215, L_39, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_40 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_4, V_5, L_40, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		int32_t L_41 = (__this->___quality_9);
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_0276;
		}
	}
	{
		Material_t19 * L_42 = (__this->___blurAndFlaresMaterial_32);
		Vector4_t52  L_43 = {0};
		Vector4__ctor_m193(&L_43, ((float)((float)((float)((float)V_9/(float)V_6))*(float)V_7)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_42);
		Material_SetVector_m194(L_42, (String_t*) &_stringLiteral215, L_43, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_44 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_4, L_44, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		if (V_8)
		{
			goto IL_0261;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, V_4, V_3, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_0271;
	}

IL_0261:
	{
		Material_t19 * L_45 = (__this->___screenBlend_30);
		Graphics_Blit_m224(NULL /*static, unused*/, V_4, V_3, L_45, ((int32_t)10), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_0271:
	{
		goto IL_02a9;
	}

IL_0276:
	{
		Material_t19 * L_46 = (__this->___blurAndFlaresMaterial_32);
		Vector4_t52  L_47 = {0};
		Vector4__ctor_m193(&L_47, ((float)((float)((float)((float)V_9/(float)V_6))*(float)V_7)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_46);
		Material_SetVector_m194(L_46, (String_t*) &_stringLiteral215, L_47, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_48 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_4, L_48, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_02a9:
	{
		V_8 = ((int32_t)((int32_t)V_8+(int32_t)1));
	}

IL_02af:
	{
		int32_t L_49 = (__this->___bloomBlurIterations_13);
		if ((((int32_t)V_8) < ((int32_t)L_49)))
		{
			goto IL_01c6;
		}
	}
	{
		int32_t L_50 = (__this->___quality_9);
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_02d7;
		}
	}
	{
		Material_t19 * L_51 = (__this->___screenBlend_30);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_4, L_51, 6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_02d7:
	{
		float L_52 = (__this->___lensflareIntensity_18);
		if ((((float)L_52) <= ((float)(1.17549435E-38f))))
		{
			goto IL_0631;
		}
	}
	{
		int32_t L_53 = (__this->___lensflareMode_16);
		if (L_53)
		{
			goto IL_03a6;
		}
	}
	{
		float L_54 = (__this->___lensflareThreshhold_19);
		Bloom_BrightFilter_m740(__this, L_54, V_4, V_5, /*hidden argument*/&Bloom_BrightFilter_m740_MethodInfo);
		int32_t L_55 = (__this->___quality_9);
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0388;
		}
	}
	{
		Material_t19 * L_56 = (__this->___blurAndFlaresMaterial_32);
		NullCheck(V_3);
		int32_t L_57 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, V_3);
		Vector4_t52  L_58 = {0};
		Vector4__ctor_m193(&L_58, (((float)0)), ((float)((float)(1.5f)/(float)((float)((float)(1.0f)*(float)(((float)L_57)))))), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_56);
		Material_SetVector_m194(L_56, (String_t*) &_stringLiteral215, L_58, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_59 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_3, L_59, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_60 = (__this->___blurAndFlaresMaterial_32);
		NullCheck(V_3);
		int32_t L_61 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_3);
		Vector4_t52  L_62 = {0};
		Vector4__ctor_m193(&L_62, ((float)((float)(1.5f)/(float)((float)((float)(1.0f)*(float)(((float)L_61)))))), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_60);
		Material_SetVector_m194(L_60, (String_t*) &_stringLiteral215, L_62, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_63 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_5, L_63, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_0388:
	{
		Bloom_Vignette_m742(__this, (0.975f), V_5, V_5, /*hidden argument*/&Bloom_Vignette_m742_MethodInfo);
		Bloom_BlendFlares_m739(__this, V_5, V_4, /*hidden argument*/&Bloom_BlendFlares_m739_MethodInfo);
		goto IL_0631;
	}

IL_03a6:
	{
		float L_64 = (__this->___flareRotation_15);
		float L_65 = cosf(L_64);
		V_10 = ((float)((float)(1.0f)*(float)L_65));
		float L_66 = (__this->___flareRotation_15);
		float L_67 = sinf(L_66);
		V_11 = ((float)((float)(1.0f)*(float)L_67));
		float L_68 = (__this->___hollyStretchWidth_17);
		V_12 = ((float)((float)((float)((float)((float)((float)L_68*(float)(1.0f)))/(float)V_6))*(float)V_7));
		float L_69 = (__this->___hollyStretchWidth_17);
		V_13 = ((float)((float)L_69*(float)V_7));
		Material_t19 * L_70 = (__this->___blurAndFlaresMaterial_32);
		Vector4_t52  L_71 = {0};
		Vector4__ctor_m193(&L_71, V_10, V_11, (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_70);
		Material_SetVector_m194(L_70, (String_t*) &_stringLiteral215, L_71, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_72 = (__this->___blurAndFlaresMaterial_32);
		float L_73 = (__this->___lensflareThreshhold_19);
		Vector4_t52  L_74 = {0};
		Vector4__ctor_m193(&L_74, L_73, (1.0f), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_72);
		Material_SetVector_m194(L_72, (String_t*) &_stringLiteral216, L_74, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_75 = (__this->___blurAndFlaresMaterial_32);
		Color_t29 * L_76 = &(__this->___flareColorA_21);
		NullCheck(L_76);
		float L_77 = (L_76->___r_0);
		Color_t29 * L_78 = &(__this->___flareColorA_21);
		NullCheck(L_78);
		float L_79 = (L_78->___g_1);
		Color_t29 * L_80 = &(__this->___flareColorA_21);
		NullCheck(L_80);
		float L_81 = (L_80->___b_2);
		Color_t29 * L_82 = &(__this->___flareColorA_21);
		NullCheck(L_82);
		float L_83 = (L_82->___a_3);
		Vector4_t52  L_84 = {0};
		Vector4__ctor_m193(&L_84, L_77, L_79, L_81, L_83, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		Color_t29 * L_85 = &(__this->___flareColorA_21);
		NullCheck(L_85);
		float L_86 = (L_85->___a_3);
		Vector4_t52  L_87 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_84, L_86, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		float L_88 = (__this->___lensflareIntensity_18);
		Vector4_t52  L_89 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_87, L_88, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_75);
		Material_SetVector_m194(L_75, (String_t*) &_stringLiteral217, L_89, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_90 = (__this->___blurAndFlaresMaterial_32);
		float L_91 = (__this->___lensFlareSaturation_20);
		NullCheck(L_90);
		Material_SetFloat_m195(L_90, (String_t*) &_stringLiteral218, L_91, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_92 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_3, L_92, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_93 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_5, L_93, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_94 = (__this->___blurAndFlaresMaterial_32);
		Vector4_t52  L_95 = {0};
		Vector4__ctor_m193(&L_95, ((float)((float)V_10*(float)V_12)), ((float)((float)V_11*(float)V_12)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_94);
		Material_SetVector_m194(L_94, (String_t*) &_stringLiteral215, L_95, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_96 = (__this->___blurAndFlaresMaterial_32);
		float L_97 = (__this->___hollyStretchWidth_17);
		NullCheck(L_96);
		Material_SetFloat_m195(L_96, (String_t*) &_stringLiteral219, L_97, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_98 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_3, L_98, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_99 = (__this->___blurAndFlaresMaterial_32);
		float L_100 = (__this->___hollyStretchWidth_17);
		NullCheck(L_99);
		Material_SetFloat_m195(L_99, (String_t*) &_stringLiteral219, ((float)((float)L_100*(float)(2.0f))), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_101 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_5, L_101, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_102 = (__this->___blurAndFlaresMaterial_32);
		float L_103 = (__this->___hollyStretchWidth_17);
		NullCheck(L_102);
		Material_SetFloat_m195(L_102, (String_t*) &_stringLiteral219, ((float)((float)L_103*(float)(4.0f))), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_104 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_3, L_104, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		V_8 = 0;
		goto IL_05e0;
	}

IL_0562:
	{
		float L_105 = (__this->___hollyStretchWidth_17);
		V_12 = ((float)((float)((float)((float)((float)((float)L_105*(float)(2.0f)))/(float)V_6))*(float)V_7));
		Material_t19 * L_106 = (__this->___blurAndFlaresMaterial_32);
		Vector4_t52  L_107 = {0};
		Vector4__ctor_m193(&L_107, ((float)((float)V_12*(float)V_10)), ((float)((float)V_12*(float)V_11)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_106);
		Material_SetVector_m194(L_106, (String_t*) &_stringLiteral215, L_107, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_108 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_5, L_108, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_109 = (__this->___blurAndFlaresMaterial_32);
		Vector4_t52  L_110 = {0};
		Vector4__ctor_m193(&L_110, ((float)((float)V_12*(float)V_10)), ((float)((float)V_12*(float)V_11)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_109);
		Material_SetVector_m194(L_109, (String_t*) &_stringLiteral215, L_110, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_111 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_3, L_111, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		V_8 = ((int32_t)((int32_t)V_8+(int32_t)1));
	}

IL_05e0:
	{
		int32_t L_112 = (__this->___hollywoodFlareBlurIterations_14);
		if ((((int32_t)V_8) < ((int32_t)L_112)))
		{
			goto IL_0562;
		}
	}
	{
		int32_t L_113 = (__this->___lensflareMode_16);
		if ((((uint32_t)L_113) != ((uint32_t)1)))
		{
			goto IL_060c;
		}
	}
	{
		Bloom_AddTo_m738(__this, (1.0f), V_3, V_4, /*hidden argument*/&Bloom_AddTo_m738_MethodInfo);
		goto IL_0631;
	}

IL_060c:
	{
		Bloom_Vignette_m742(__this, (1.0f), V_3, V_5, /*hidden argument*/&Bloom_Vignette_m742_MethodInfo);
		Bloom_BlendFlares_m739(__this, V_5, V_3, /*hidden argument*/&Bloom_BlendFlares_m739_MethodInfo);
		Bloom_AddTo_m738(__this, (1.0f), V_3, V_4, /*hidden argument*/&Bloom_AddTo_m738_MethodInfo);
	}

IL_0631:
	{
		V_14 = V_0;
		Material_t19 * L_114 = (__this->___screenBlend_30);
		float L_115 = (__this->___bloomIntensity_10);
		NullCheck(L_114);
		Material_SetFloat_m195(L_114, (String_t*) &_stringLiteral49, L_115, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_116 = (__this->___screenBlend_30);
		NullCheck(L_116);
		Material_SetTexture_m186(L_116, (String_t*) &_stringLiteral220, ___source, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		int32_t L_117 = (__this->___quality_9);
		if ((((int32_t)L_117) <= ((int32_t)0)))
		{
			goto IL_0683;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, V_4, V_2, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		Material_t19 * L_118 = (__this->___screenBlend_30);
		Graphics_Blit_m224(NULL /*static, unused*/, V_2, ___destination, L_118, V_14, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0693;
	}

IL_0683:
	{
		Material_t19 * L_119 = (__this->___screenBlend_30);
		Graphics_Blit_m224(NULL /*static, unused*/, V_4, ___destination, L_119, V_14, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_0693:
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_2, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_3, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_4, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_5, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_06ad:
	{
		return;
	}
}
// System.Void Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_AddTo_m738 (Bloom_t172 * __this, float ___intensity_, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___screenBlend_30);
		NullCheck(L_0);
		Material_SetFloat_m195(L_0, (String_t*) &_stringLiteral49, ___intensity_, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_1 = (__this->___screenBlend_30);
		Graphics_Blit_m224(NULL /*static, unused*/, ___from, ___to, L_1, ((int32_t)9), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		return;
	}
}
// System.Void Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BlendFlares_m739 (Bloom_t172 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___lensFlareMaterial_28);
		Color_t29 * L_1 = &(__this->___flareColorA_21);
		NullCheck(L_1);
		float L_2 = (L_1->___r_0);
		Color_t29 * L_3 = &(__this->___flareColorA_21);
		NullCheck(L_3);
		float L_4 = (L_3->___g_1);
		Color_t29 * L_5 = &(__this->___flareColorA_21);
		NullCheck(L_5);
		float L_6 = (L_5->___b_2);
		Color_t29 * L_7 = &(__this->___flareColorA_21);
		NullCheck(L_7);
		float L_8 = (L_7->___a_3);
		Vector4_t52  L_9 = {0};
		Vector4__ctor_m193(&L_9, L_2, L_4, L_6, L_8, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_10 = (__this->___lensflareIntensity_18);
		Vector4_t52  L_11 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_0);
		Material_SetVector_m194(L_0, (String_t*) &_stringLiteral221, L_11, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_12 = (__this->___lensFlareMaterial_28);
		Color_t29 * L_13 = &(__this->___flareColorB_22);
		NullCheck(L_13);
		float L_14 = (L_13->___r_0);
		Color_t29 * L_15 = &(__this->___flareColorB_22);
		NullCheck(L_15);
		float L_16 = (L_15->___g_1);
		Color_t29 * L_17 = &(__this->___flareColorB_22);
		NullCheck(L_17);
		float L_18 = (L_17->___b_2);
		Color_t29 * L_19 = &(__this->___flareColorB_22);
		NullCheck(L_19);
		float L_20 = (L_19->___a_3);
		Vector4_t52  L_21 = {0};
		Vector4__ctor_m193(&L_21, L_14, L_16, L_18, L_20, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_22 = (__this->___lensflareIntensity_18);
		Vector4_t52  L_23 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_12);
		Material_SetVector_m194(L_12, (String_t*) &_stringLiteral222, L_23, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_24 = (__this->___lensFlareMaterial_28);
		Color_t29 * L_25 = &(__this->___flareColorC_23);
		NullCheck(L_25);
		float L_26 = (L_25->___r_0);
		Color_t29 * L_27 = &(__this->___flareColorC_23);
		NullCheck(L_27);
		float L_28 = (L_27->___g_1);
		Color_t29 * L_29 = &(__this->___flareColorC_23);
		NullCheck(L_29);
		float L_30 = (L_29->___b_2);
		Color_t29 * L_31 = &(__this->___flareColorC_23);
		NullCheck(L_31);
		float L_32 = (L_31->___a_3);
		Vector4_t52  L_33 = {0};
		Vector4__ctor_m193(&L_33, L_26, L_28, L_30, L_32, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_34 = (__this->___lensflareIntensity_18);
		Vector4_t52  L_35 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_24);
		Material_SetVector_m194(L_24, (String_t*) &_stringLiteral223, L_35, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_36 = (__this->___lensFlareMaterial_28);
		Color_t29 * L_37 = &(__this->___flareColorD_24);
		NullCheck(L_37);
		float L_38 = (L_37->___r_0);
		Color_t29 * L_39 = &(__this->___flareColorD_24);
		NullCheck(L_39);
		float L_40 = (L_39->___g_1);
		Color_t29 * L_41 = &(__this->___flareColorD_24);
		NullCheck(L_41);
		float L_42 = (L_41->___b_2);
		Color_t29 * L_43 = &(__this->___flareColorD_24);
		NullCheck(L_43);
		float L_44 = (L_43->___a_3);
		Vector4_t52  L_45 = {0};
		Vector4__ctor_m193(&L_45, L_38, L_40, L_42, L_44, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_46 = (__this->___lensflareIntensity_18);
		Vector4_t52  L_47 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_36);
		Material_SetVector_m194(L_36, (String_t*) &_stringLiteral224, L_47, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_48 = (__this->___lensFlareMaterial_28);
		Graphics_Blit_m187(NULL /*static, unused*/, ___from, ___to, L_48, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		return;
	}
}
// System.Void Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m740 (Bloom_t172 * __this, float ___thresh, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___brightPassFilterMaterial_34);
		Vector4_t52  L_1 = {0};
		Vector4__ctor_m193(&L_1, ___thresh, ___thresh, ___thresh, ___thresh, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_0);
		Material_SetVector_m194(L_0, (String_t*) &_stringLiteral216, L_1, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_2 = (__this->___brightPassFilterMaterial_34);
		Graphics_Blit_m224(NULL /*static, unused*/, ___from, ___to, L_2, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		return;
	}
}
// System.Void Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m741 (Bloom_t172 * __this, Color_t29  ___threshColor, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___brightPassFilterMaterial_34);
		Vector4_t52  L_1 = Color_op_Implicit_m908(NULL /*static, unused*/, ___threshColor, /*hidden argument*/&Color_op_Implicit_m908_MethodInfo);
		NullCheck(L_0);
		Material_SetVector_m194(L_0, (String_t*) &_stringLiteral216, L_1, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_2 = (__this->___brightPassFilterMaterial_34);
		Graphics_Blit_m224(NULL /*static, unused*/, ___from, ___to, L_2, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		return;
	}
}
// System.Void Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_Vignette_m742 (Bloom_t172 * __this, float ___amount, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	RenderTexture_t21 * G_B4_0 = {0};
	Material_t19 * G_B6_0 = {0};
	RenderTexture_t21 * G_B6_1 = {0};
	RenderTexture_t21 * G_B6_2 = {0};
	Material_t19 * G_B5_0 = {0};
	RenderTexture_t21 * G_B5_1 = {0};
	RenderTexture_t21 * G_B5_2 = {0};
	int32_t G_B7_0 = 0;
	Material_t19 * G_B7_1 = {0};
	RenderTexture_t21 * G_B7_2 = {0};
	RenderTexture_t21 * G_B7_3 = {0};
	{
		Texture2D_t36 * L_0 = (__this->___lensFlareVignetteMask_26);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		Material_t19 * L_2 = (__this->___screenBlend_30);
		Texture2D_t36 * L_3 = (__this->___lensFlareVignetteMask_26);
		NullCheck(L_2);
		Material_SetTexture_m186(L_2, (String_t*) &_stringLiteral220, L_3, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		bool L_4 = Object_op_Equality_m164(NULL /*static, unused*/, ___from, ___to, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		G_B4_0 = ((RenderTexture_t21 *)(NULL));
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = ___from;
	}

IL_0039:
	{
		Material_t19 * L_5 = (__this->___screenBlend_30);
		bool L_6 = Object_op_Equality_m164(NULL /*static, unused*/, ___from, ___to, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		G_B5_0 = L_5;
		G_B5_1 = ___to;
		G_B5_2 = G_B4_0;
		if (!L_6)
		{
			G_B6_0 = L_5;
			G_B6_1 = ___to;
			G_B6_2 = G_B4_0;
			goto IL_0052;
		}
	}
	{
		G_B7_0 = 7;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_0053;
	}

IL_0052:
	{
		G_B7_0 = 3;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_0053:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B7_3, G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0070;
	}

IL_005d:
	{
		bool L_7 = Object_op_Inequality_m166(NULL /*static, unused*/, ___from, ___to, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___from, ___to, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
	}

IL_0070:
	{
		return;
	}
}
// System.Void Bloom::Main()
extern MethodInfo Bloom_Main_m743_MethodInfo;
extern "C" void Bloom_Main_m743 (Bloom_t172 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// LensflareStyle34
#include "AssemblyU2DUnityScriptU2Dfirstpass_LensflareStyle34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LensflareStyle34_t173_il2cpp_TypeInfo;
// LensflareStyle34
#include "AssemblyU2DUnityScriptU2Dfirstpass_LensflareStyle34MethodDeclarations.h"



// TweakMode34
#include "AssemblyU2DUnityScriptU2Dfirstpass_TweakMode34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TweakMode34_t174_il2cpp_TypeInfo;
// TweakMode34
#include "AssemblyU2DUnityScriptU2Dfirstpass_TweakMode34MethodDeclarations.h"



// HDRBloomMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_HDRBloomMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HDRBloomMode_t175_il2cpp_TypeInfo;
// HDRBloomMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_HDRBloomModeMethodDeclarations.h"



// BloomScreenBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_BloomScreenBlendMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BloomScreenBlendMode_t176_il2cpp_TypeInfo;
// BloomScreenBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_BloomScreenBlendModeMethodDeclarations.h"



// BloomAndLensFlares
#include "AssemblyU2DUnityScriptU2Dfirstpass_BloomAndLensFlares.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BloomAndLensFlares_t177_il2cpp_TypeInfo;
// BloomAndLensFlares
#include "AssemblyU2DUnityScriptU2Dfirstpass_BloomAndLensFlaresMethodDeclarations.h"

extern MethodInfo BloomAndLensFlares_CheckResources_m745_MethodInfo;
extern MethodInfo BloomAndLensFlares_BrightFilter_m749_MethodInfo;
extern MethodInfo RenderTexture_DiscardContents_m909_MethodInfo;
extern MethodInfo BloomAndLensFlares_Vignette_m750_MethodInfo;
extern MethodInfo BloomAndLensFlares_BlendFlares_m748_MethodInfo;
extern MethodInfo BloomAndLensFlares_AddTo_m747_MethodInfo;


// System.Void BloomAndLensFlares::.ctor()
extern MethodInfo BloomAndLensFlares__ctor_m744_MethodInfo;
extern "C" void BloomAndLensFlares__ctor_m744 (BloomAndLensFlares_t177 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___screenBlendMode_5 = 1;
		__this->___hdr_6 = 0;
		__this->___sepBlurSpread_8 = (1.5f);
		__this->___useSrcAlphaAsMask_9 = (0.5f);
		__this->___bloomIntensity_10 = (1.0f);
		__this->___bloomThreshhold_11 = (0.5f);
		__this->___bloomBlurIterations_12 = 2;
		__this->___hollywoodFlareBlurIterations_14 = 2;
		__this->___lensflareMode_15 = 1;
		__this->___hollyStretchWidth_16 = (3.5f);
		__this->___lensflareIntensity_17 = (1.0f);
		__this->___lensflareThreshhold_18 = (0.3f);
		Color_t29  L_0 = {0};
		Color__ctor_m196(&L_0, (0.4f), (0.4f), (0.8f), (0.75f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		__this->___flareColorA_19 = L_0;
		Color_t29  L_1 = {0};
		Color__ctor_m196(&L_1, (0.4f), (0.8f), (0.8f), (0.75f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		__this->___flareColorB_20 = L_1;
		Color_t29  L_2 = {0};
		Color__ctor_m196(&L_2, (0.8f), (0.4f), (0.8f), (0.75f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		__this->___flareColorC_21 = L_2;
		Color_t29  L_3 = {0};
		Color__ctor_m196(&L_3, (0.8f), (0.4f), (((float)0)), (0.75f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		__this->___flareColorD_22 = L_3;
		__this->___blurWidth_23 = (1.0f);
		return;
	}
}
// System.Boolean BloomAndLensFlares::CheckResources()
extern "C" bool BloomAndLensFlares_CheckResources_m745 (BloomAndLensFlares_t177 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		Shader_t18 * L_0 = (__this->___screenBlendShader_33);
		Material_t19 * L_1 = (__this->___screenBlend_34);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___screenBlend_34 = L_2;
		Shader_t18 * L_3 = (__this->___lensFlareShader_25);
		Material_t19 * L_4 = (__this->___lensFlareMaterial_26);
		Material_t19 * L_5 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_3, L_4);
		__this->___lensFlareMaterial_26 = L_5;
		Shader_t18 * L_6 = (__this->___vignetteShader_27);
		Material_t19 * L_7 = (__this->___vignetteMaterial_28);
		Material_t19 * L_8 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_6, L_7);
		__this->___vignetteMaterial_28 = L_8;
		Shader_t18 * L_9 = (__this->___separableBlurShader_29);
		Material_t19 * L_10 = (__this->___separableBlurMaterial_30);
		Material_t19 * L_11 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_9, L_10);
		__this->___separableBlurMaterial_30 = L_11;
		Shader_t18 * L_12 = (__this->___addBrightStuffOneOneShader_31);
		Material_t19 * L_13 = (__this->___addBrightStuffBlendOneOneMaterial_32);
		Material_t19 * L_14 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_12, L_13);
		__this->___addBrightStuffBlendOneOneMaterial_32 = L_14;
		Shader_t18 * L_15 = (__this->___hollywoodFlaresShader_35);
		Material_t19 * L_16 = (__this->___hollywoodFlaresMaterial_36);
		Material_t19 * L_17 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_15, L_16);
		__this->___hollywoodFlaresMaterial_36 = L_17;
		Shader_t18 * L_18 = (__this->___brightPassFilterShader_37);
		Material_t19 * L_19 = (__this->___brightPassFilterMaterial_38);
		Material_t19 * L_20 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_18, L_19);
		__this->___brightPassFilterMaterial_38 = L_20;
		bool L_21 = (__this->___isSupported_3);
		if (L_21)
		{
			goto IL_00c1;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_00c1:
	{
		bool L_22 = (__this->___isSupported_3);
		return L_22;
	}
}
// System.Void BloomAndLensFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo BloomAndLensFlares_OnRenderImage_m746_MethodInfo;
extern "C" void BloomAndLensFlares_OnRenderImage_m746 (BloomAndLensFlares_t177 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	RenderTexture_t21 * V_2 = {0};
	RenderTexture_t21 * V_3 = {0};
	RenderTexture_t21 * V_4 = {0};
	RenderTexture_t21 * V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	RenderTexture_t21 * V_10 = {0};
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	BloomAndLensFlares_t177 * G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	BloomAndLensFlares_t177 * G_B4_1 = {0};
	bool G_B9_0 = false;
	BloomAndLensFlares_t177 * G_B9_1 = {0};
	bool G_B8_0 = false;
	BloomAndLensFlares_t177 * G_B8_1 = {0};
	int32_t G_B14_0 = 0;
	RenderTexture_t21 * G_B20_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&BloomAndLensFlares_CheckResources_m745_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_05e7;
	}

IL_0017:
	{
		__this->___doHdr_7 = 0;
		int32_t L_1 = (__this->___hdr_6);
		if ((((uint32_t)L_1) != ((uint32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		NullCheck(___source);
		int32_t L_2 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		int32_t L_3 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		G_B4_0 = L_3;
		G_B4_1 = __this;
		if (!L_3)
		{
			G_B5_0 = L_3;
			G_B5_1 = __this;
			goto IL_0046;
		}
	}
	{
		Camera_t56 * L_4 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_4);
		bool L_5 = Camera_get_hdr_m905(L_4, /*hidden argument*/&Camera_get_hdr_m905_MethodInfo);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B4_1;
	}

IL_0046:
	{
		NullCheck(G_B5_1);
		G_B5_1->___doHdr_7 = G_B5_0;
		goto IL_005f;
	}

IL_0050:
	{
		int32_t L_6 = (__this->___hdr_6);
		__this->___doHdr_7 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
	}

IL_005f:
	{
		bool L_7 = (__this->___doHdr_7);
		bool L_8 = L_7;
		G_B8_0 = L_8;
		G_B8_1 = __this;
		if (!L_8)
		{
			G_B9_0 = L_8;
			G_B9_1 = __this;
			goto IL_0073;
		}
	}
	{
		bool L_9 = (__this->___supportHDRTextures_1);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_1;
	}

IL_0073:
	{
		NullCheck(G_B9_1);
		G_B9_1->___doHdr_7 = G_B9_0;
		int32_t L_10 = (__this->___screenBlendMode_5);
		V_0 = L_10;
		bool L_11 = (__this->___doHdr_7);
		if (!L_11)
		{
			goto IL_008c;
		}
	}
	{
		V_0 = 1;
	}

IL_008c:
	{
		bool L_12 = (__this->___doHdr_7);
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		G_B14_0 = 2;
		goto IL_009e;
	}

IL_009d:
	{
		G_B14_0 = 7;
	}

IL_009e:
	{
		V_1 = G_B14_0;
		NullCheck(___source);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_15 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_13/(int32_t)2)), ((int32_t)((int32_t)L_14/(int32_t)2)), 0, V_1, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_2 = L_15;
		NullCheck(___source);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_18 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_16/(int32_t)4)), ((int32_t)((int32_t)L_17/(int32_t)4)), 0, V_1, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_3 = L_18;
		NullCheck(___source);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_21 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_19/(int32_t)4)), ((int32_t)((int32_t)L_20/(int32_t)4)), 0, V_1, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_4 = L_21;
		NullCheck(___source);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_24 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_22/(int32_t)4)), ((int32_t)((int32_t)L_23/(int32_t)4)), 0, V_1, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_5 = L_24;
		NullCheck(___source);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		V_6 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_25))))/(float)((float)((float)(1.0f)*(float)(((float)L_26))))));
		V_7 = (0.001953125f);
		Material_t19 * L_27 = (__this->___screenBlend_34);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_2, L_27, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_28 = (__this->___screenBlend_34);
		Graphics_Blit_m224(NULL /*static, unused*/, V_2, V_3, L_28, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_2, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		float L_29 = (__this->___bloomThreshhold_11);
		float L_30 = (__this->___useSrcAlphaAsMask_9);
		BloomAndLensFlares_BrightFilter_m749(__this, L_29, L_30, V_3, V_4, /*hidden argument*/&BloomAndLensFlares_BrightFilter_m749_MethodInfo);
		NullCheck(V_3);
		RenderTexture_DiscardContents_m909(V_3, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		int32_t L_31 = (__this->___bloomBlurIterations_12);
		if ((((int32_t)L_31) >= ((int32_t)1)))
		{
			goto IL_0175;
		}
	}
	{
		__this->___bloomBlurIterations_12 = 1;
	}

IL_0175:
	{
		V_8 = 0;
		goto IL_021a;
	}

IL_017d:
	{
		float L_32 = (__this->___sepBlurSpread_8);
		V_9 = ((float)((float)((float)((float)(1.0f)+(float)((float)((float)(((float)V_8))*(float)(0.5f)))))*(float)L_32));
		Material_t19 * L_33 = (__this->___separableBlurMaterial_30);
		Vector4_t52  L_34 = {0};
		Vector4__ctor_m193(&L_34, (((float)0)), ((float)((float)V_9*(float)V_7)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_33);
		Material_SetVector_m194(L_33, (String_t*) &_stringLiteral225, L_34, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		if (V_8)
		{
			goto IL_01c3;
		}
	}
	{
		G_B20_0 = V_4;
		goto IL_01c4;
	}

IL_01c3:
	{
		G_B20_0 = V_3;
	}

IL_01c4:
	{
		V_10 = G_B20_0;
		Material_t19 * L_35 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m187(NULL /*static, unused*/, V_10, V_5, L_35, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		NullCheck(V_10);
		RenderTexture_DiscardContents_m909(V_10, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		Material_t19 * L_36 = (__this->___separableBlurMaterial_30);
		Vector4_t52  L_37 = {0};
		Vector4__ctor_m193(&L_37, ((float)((float)((float)((float)V_9/(float)V_6))*(float)V_7)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_36);
		Material_SetVector_m194(L_36, (String_t*) &_stringLiteral225, L_37, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_38 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m187(NULL /*static, unused*/, V_5, V_3, L_38, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		NullCheck(V_5);
		RenderTexture_DiscardContents_m909(V_5, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		V_8 = ((int32_t)((int32_t)V_8+(int32_t)1));
	}

IL_021a:
	{
		int32_t L_39 = (__this->___bloomBlurIterations_12);
		if ((((int32_t)V_8) < ((int32_t)L_39)))
		{
			goto IL_017d;
		}
	}
	{
		bool L_40 = (__this->___lensflares_13);
		if (!L_40)
		{
			goto IL_059e;
		}
	}
	{
		int32_t L_41 = (__this->___lensflareMode_15);
		if (L_41)
		{
			goto IL_027f;
		}
	}
	{
		float L_42 = (__this->___lensflareThreshhold_18);
		BloomAndLensFlares_BrightFilter_m749(__this, L_42, (((float)0)), V_3, V_5, /*hidden argument*/&BloomAndLensFlares_BrightFilter_m749_MethodInfo);
		NullCheck(V_3);
		RenderTexture_DiscardContents_m909(V_3, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		BloomAndLensFlares_Vignette_m750(__this, (0.975f), V_5, V_4, /*hidden argument*/&BloomAndLensFlares_Vignette_m750_MethodInfo);
		NullCheck(V_5);
		RenderTexture_DiscardContents_m909(V_5, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		BloomAndLensFlares_BlendFlares_m748(__this, V_4, V_3, /*hidden argument*/&BloomAndLensFlares_BlendFlares_m748_MethodInfo);
		NullCheck(V_4);
		RenderTexture_DiscardContents_m909(V_4, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		goto IL_059e;
	}

IL_027f:
	{
		Material_t19 * L_43 = (__this->___hollywoodFlaresMaterial_36);
		float L_44 = (__this->___lensflareThreshhold_18);
		float L_45 = (__this->___lensflareThreshhold_18);
		Vector4_t52  L_46 = {0};
		Vector4__ctor_m193(&L_46, L_44, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)-(float)L_45)))), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_43);
		Material_SetVector_m194(L_43, (String_t*) &_stringLiteral216, L_46, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_47 = (__this->___hollywoodFlaresMaterial_36);
		Color_t29 * L_48 = &(__this->___flareColorA_19);
		NullCheck(L_48);
		float L_49 = (L_48->___r_0);
		Color_t29 * L_50 = &(__this->___flareColorA_19);
		NullCheck(L_50);
		float L_51 = (L_50->___g_1);
		Color_t29 * L_52 = &(__this->___flareColorA_19);
		NullCheck(L_52);
		float L_53 = (L_52->___b_2);
		Color_t29 * L_54 = &(__this->___flareColorA_19);
		NullCheck(L_54);
		float L_55 = (L_54->___a_3);
		Vector4_t52  L_56 = {0};
		Vector4__ctor_m193(&L_56, L_49, L_51, L_53, L_55, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		Color_t29 * L_57 = &(__this->___flareColorA_19);
		NullCheck(L_57);
		float L_58 = (L_57->___a_3);
		Vector4_t52  L_59 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_56, L_58, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		float L_60 = (__this->___lensflareIntensity_17);
		Vector4_t52  L_61 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_47);
		Material_SetVector_m194(L_47, (String_t*) &_stringLiteral226, L_61, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_62 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_4, L_62, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		NullCheck(V_5);
		RenderTexture_DiscardContents_m909(V_5, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		Material_t19 * L_63 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m224(NULL /*static, unused*/, V_4, V_5, L_63, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		NullCheck(V_4);
		RenderTexture_DiscardContents_m909(V_4, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		Material_t19 * L_64 = (__this->___hollywoodFlaresMaterial_36);
		float L_65 = (__this->___sepBlurSpread_8);
		Vector4_t52  L_66 = {0};
		Vector4__ctor_m193(&L_66, ((float)((float)((float)((float)((float)((float)L_65*(float)(1.0f)))/(float)V_6))*(float)V_7)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_64);
		Material_SetVector_m194(L_64, (String_t*) &_stringLiteral225, L_66, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_67 = (__this->___hollywoodFlaresMaterial_36);
		float L_68 = (__this->___hollyStretchWidth_16);
		NullCheck(L_67);
		Material_SetFloat_m195(L_67, (String_t*) &_stringLiteral227, L_68, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_69 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_4, L_69, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		NullCheck(V_5);
		RenderTexture_DiscardContents_m909(V_5, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		Material_t19 * L_70 = (__this->___hollywoodFlaresMaterial_36);
		float L_71 = (__this->___hollyStretchWidth_16);
		NullCheck(L_70);
		Material_SetFloat_m195(L_70, (String_t*) &_stringLiteral227, ((float)((float)L_71*(float)(2.0f))), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_72 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m224(NULL /*static, unused*/, V_4, V_5, L_72, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		NullCheck(V_4);
		RenderTexture_DiscardContents_m909(V_4, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		Material_t19 * L_73 = (__this->___hollywoodFlaresMaterial_36);
		float L_74 = (__this->___hollyStretchWidth_16);
		NullCheck(L_73);
		Material_SetFloat_m195(L_73, (String_t*) &_stringLiteral227, ((float)((float)L_74*(float)(4.0f))), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_75 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_4, L_75, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		NullCheck(V_5);
		RenderTexture_DiscardContents_m909(V_5, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		int32_t L_76 = (__this->___lensflareMode_15);
		if ((((uint32_t)L_76) != ((uint32_t)1)))
		{
			goto IL_04c1;
		}
	}
	{
		V_11 = 0;
		goto IL_049a;
	}

IL_040e:
	{
		Material_t19 * L_77 = (__this->___separableBlurMaterial_30);
		float L_78 = (__this->___hollyStretchWidth_16);
		Vector4_t52  L_79 = {0};
		Vector4__ctor_m193(&L_79, ((float)((float)((float)((float)((float)((float)L_78*(float)(2.0f)))/(float)V_6))*(float)V_7)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_77);
		Material_SetVector_m194(L_77, (String_t*) &_stringLiteral225, L_79, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_80 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m187(NULL /*static, unused*/, V_4, V_5, L_80, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		NullCheck(V_4);
		RenderTexture_DiscardContents_m909(V_4, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		Material_t19 * L_81 = (__this->___separableBlurMaterial_30);
		float L_82 = (__this->___hollyStretchWidth_16);
		Vector4_t52  L_83 = {0};
		Vector4__ctor_m193(&L_83, ((float)((float)((float)((float)((float)((float)L_82*(float)(2.0f)))/(float)V_6))*(float)V_7)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_81);
		Material_SetVector_m194(L_81, (String_t*) &_stringLiteral225, L_83, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_84 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m187(NULL /*static, unused*/, V_5, V_4, L_84, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		NullCheck(V_5);
		RenderTexture_DiscardContents_m909(V_5, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		V_11 = ((int32_t)((int32_t)V_11+(int32_t)1));
	}

IL_049a:
	{
		int32_t L_85 = (__this->___hollywoodFlareBlurIterations_14);
		if ((((int32_t)V_11) < ((int32_t)L_85)))
		{
			goto IL_040e;
		}
	}
	{
		BloomAndLensFlares_AddTo_m747(__this, (1.0f), V_4, V_3, /*hidden argument*/&BloomAndLensFlares_AddTo_m747_MethodInfo);
		NullCheck(V_4);
		RenderTexture_DiscardContents_m909(V_4, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		goto IL_059e;
	}

IL_04c1:
	{
		V_12 = 0;
		goto IL_0555;
	}

IL_04c9:
	{
		Material_t19 * L_86 = (__this->___separableBlurMaterial_30);
		float L_87 = (__this->___hollyStretchWidth_16);
		Vector4_t52  L_88 = {0};
		Vector4__ctor_m193(&L_88, ((float)((float)((float)((float)((float)((float)L_87*(float)(2.0f)))/(float)V_6))*(float)V_7)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_86);
		Material_SetVector_m194(L_86, (String_t*) &_stringLiteral225, L_88, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_89 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m187(NULL /*static, unused*/, V_4, V_5, L_89, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		NullCheck(V_4);
		RenderTexture_DiscardContents_m909(V_4, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		Material_t19 * L_90 = (__this->___separableBlurMaterial_30);
		float L_91 = (__this->___hollyStretchWidth_16);
		Vector4_t52  L_92 = {0};
		Vector4__ctor_m193(&L_92, ((float)((float)((float)((float)((float)((float)L_91*(float)(2.0f)))/(float)V_6))*(float)V_7)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_90);
		Material_SetVector_m194(L_90, (String_t*) &_stringLiteral225, L_92, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_93 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m187(NULL /*static, unused*/, V_5, V_4, L_93, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		NullCheck(V_5);
		RenderTexture_DiscardContents_m909(V_5, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		V_12 = ((int32_t)((int32_t)V_12+(int32_t)1));
	}

IL_0555:
	{
		int32_t L_94 = (__this->___hollywoodFlareBlurIterations_14);
		if ((((int32_t)V_12) < ((int32_t)L_94)))
		{
			goto IL_04c9;
		}
	}
	{
		BloomAndLensFlares_Vignette_m750(__this, (1.0f), V_4, V_5, /*hidden argument*/&BloomAndLensFlares_Vignette_m750_MethodInfo);
		NullCheck(V_4);
		RenderTexture_DiscardContents_m909(V_4, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		BloomAndLensFlares_BlendFlares_m748(__this, V_5, V_4, /*hidden argument*/&BloomAndLensFlares_BlendFlares_m748_MethodInfo);
		NullCheck(V_5);
		RenderTexture_DiscardContents_m909(V_5, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
		BloomAndLensFlares_AddTo_m747(__this, (1.0f), V_4, V_3, /*hidden argument*/&BloomAndLensFlares_AddTo_m747_MethodInfo);
		NullCheck(V_4);
		RenderTexture_DiscardContents_m909(V_4, /*hidden argument*/&RenderTexture_DiscardContents_m909_MethodInfo);
	}

IL_059e:
	{
		Material_t19 * L_95 = (__this->___screenBlend_34);
		float L_96 = (__this->___bloomIntensity_10);
		NullCheck(L_95);
		Material_SetFloat_m195(L_95, (String_t*) &_stringLiteral49, L_96, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_97 = (__this->___screenBlend_34);
		NullCheck(L_97);
		Material_SetTexture_m186(L_97, (String_t*) &_stringLiteral220, ___source, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_98 = (__this->___screenBlend_34);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, ___destination, L_98, V_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_3, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_4, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_5, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_05e7:
	{
		return;
	}
}
// System.Void BloomAndLensFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndLensFlares_AddTo_m747 (BloomAndLensFlares_t177 * __this, float ___intensity_, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___addBrightStuffBlendOneOneMaterial_32);
		NullCheck(L_0);
		Material_SetFloat_m195(L_0, (String_t*) &_stringLiteral49, ___intensity_, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_1 = (__this->___addBrightStuffBlendOneOneMaterial_32);
		Graphics_Blit_m187(NULL /*static, unused*/, ___from, ___to, L_1, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		return;
	}
}
// System.Void BloomAndLensFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndLensFlares_BlendFlares_m748 (BloomAndLensFlares_t177 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___lensFlareMaterial_26);
		Color_t29 * L_1 = &(__this->___flareColorA_19);
		NullCheck(L_1);
		float L_2 = (L_1->___r_0);
		Color_t29 * L_3 = &(__this->___flareColorA_19);
		NullCheck(L_3);
		float L_4 = (L_3->___g_1);
		Color_t29 * L_5 = &(__this->___flareColorA_19);
		NullCheck(L_5);
		float L_6 = (L_5->___b_2);
		Color_t29 * L_7 = &(__this->___flareColorA_19);
		NullCheck(L_7);
		float L_8 = (L_7->___a_3);
		Vector4_t52  L_9 = {0};
		Vector4__ctor_m193(&L_9, L_2, L_4, L_6, L_8, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_10 = (__this->___lensflareIntensity_17);
		Vector4_t52  L_11 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_0);
		Material_SetVector_m194(L_0, (String_t*) &_stringLiteral221, L_11, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_12 = (__this->___lensFlareMaterial_26);
		Color_t29 * L_13 = &(__this->___flareColorB_20);
		NullCheck(L_13);
		float L_14 = (L_13->___r_0);
		Color_t29 * L_15 = &(__this->___flareColorB_20);
		NullCheck(L_15);
		float L_16 = (L_15->___g_1);
		Color_t29 * L_17 = &(__this->___flareColorB_20);
		NullCheck(L_17);
		float L_18 = (L_17->___b_2);
		Color_t29 * L_19 = &(__this->___flareColorB_20);
		NullCheck(L_19);
		float L_20 = (L_19->___a_3);
		Vector4_t52  L_21 = {0};
		Vector4__ctor_m193(&L_21, L_14, L_16, L_18, L_20, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_22 = (__this->___lensflareIntensity_17);
		Vector4_t52  L_23 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_12);
		Material_SetVector_m194(L_12, (String_t*) &_stringLiteral222, L_23, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_24 = (__this->___lensFlareMaterial_26);
		Color_t29 * L_25 = &(__this->___flareColorC_21);
		NullCheck(L_25);
		float L_26 = (L_25->___r_0);
		Color_t29 * L_27 = &(__this->___flareColorC_21);
		NullCheck(L_27);
		float L_28 = (L_27->___g_1);
		Color_t29 * L_29 = &(__this->___flareColorC_21);
		NullCheck(L_29);
		float L_30 = (L_29->___b_2);
		Color_t29 * L_31 = &(__this->___flareColorC_21);
		NullCheck(L_31);
		float L_32 = (L_31->___a_3);
		Vector4_t52  L_33 = {0};
		Vector4__ctor_m193(&L_33, L_26, L_28, L_30, L_32, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_34 = (__this->___lensflareIntensity_17);
		Vector4_t52  L_35 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_24);
		Material_SetVector_m194(L_24, (String_t*) &_stringLiteral223, L_35, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_36 = (__this->___lensFlareMaterial_26);
		Color_t29 * L_37 = &(__this->___flareColorD_22);
		NullCheck(L_37);
		float L_38 = (L_37->___r_0);
		Color_t29 * L_39 = &(__this->___flareColorD_22);
		NullCheck(L_39);
		float L_40 = (L_39->___g_1);
		Color_t29 * L_41 = &(__this->___flareColorD_22);
		NullCheck(L_41);
		float L_42 = (L_41->___b_2);
		Color_t29 * L_43 = &(__this->___flareColorD_22);
		NullCheck(L_43);
		float L_44 = (L_43->___a_3);
		Vector4_t52  L_45 = {0};
		Vector4__ctor_m193(&L_45, L_38, L_40, L_42, L_44, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_46 = (__this->___lensflareIntensity_17);
		Vector4_t52  L_47 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_36);
		Material_SetVector_m194(L_36, (String_t*) &_stringLiteral224, L_47, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_48 = (__this->___lensFlareMaterial_26);
		Graphics_Blit_m187(NULL /*static, unused*/, ___from, ___to, L_48, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		return;
	}
}
// System.Void BloomAndLensFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndLensFlares_BrightFilter_m749 (BloomAndLensFlares_t177 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	{
		bool L_0 = (__this->___doHdr_7);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		Material_t19 * L_1 = (__this->___brightPassFilterMaterial_38);
		Vector4_t52  L_2 = {0};
		Vector4__ctor_m193(&L_2, ___thresh, (1.0f), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_1);
		Material_SetVector_m194(L_1, (String_t*) &_stringLiteral228, L_2, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		goto IL_0056;
	}

IL_002f:
	{
		Material_t19 * L_3 = (__this->___brightPassFilterMaterial_38);
		Vector4_t52  L_4 = {0};
		Vector4__ctor_m193(&L_4, ___thresh, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)-(float)___thresh)))), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_3);
		Material_SetVector_m194(L_3, (String_t*) &_stringLiteral228, L_4, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
	}

IL_0056:
	{
		Material_t19 * L_5 = (__this->___brightPassFilterMaterial_38);
		NullCheck(L_5);
		Material_SetFloat_m195(L_5, (String_t*) &_stringLiteral229, ___useAlphaAsMask, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_6 = (__this->___brightPassFilterMaterial_38);
		Graphics_Blit_m187(NULL /*static, unused*/, ___from, ___to, L_6, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		return;
	}
}
// System.Void BloomAndLensFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndLensFlares_Vignette_m750 (BloomAndLensFlares_t177 * __this, float ___amount, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	{
		Texture2D_t36 * L_0 = (__this->___lensFlareVignetteMask_24);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		Material_t19 * L_2 = (__this->___screenBlend_34);
		Texture2D_t36 * L_3 = (__this->___lensFlareVignetteMask_24);
		NullCheck(L_2);
		Material_SetTexture_m186(L_2, (String_t*) &_stringLiteral220, L_3, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_4 = (__this->___screenBlend_34);
		Graphics_Blit_m224(NULL /*static, unused*/, ___from, ___to, L_4, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0057;
	}

IL_0039:
	{
		Material_t19 * L_5 = (__this->___vignetteMaterial_28);
		NullCheck(L_5);
		Material_SetFloat_m195(L_5, (String_t*) &_stringLiteral230, ___amount, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_6 = (__this->___vignetteMaterial_28);
		Graphics_Blit_m187(NULL /*static, unused*/, ___from, ___to, L_6, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
	}

IL_0057:
	{
		return;
	}
}
// System.Void BloomAndLensFlares::Main()
extern MethodInfo BloomAndLensFlares_Main_m751_MethodInfo;
extern "C" void BloomAndLensFlares_Main_m751 (BloomAndLensFlares_t177 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// CameraInfo
#include "AssemblyU2DUnityScriptU2Dfirstpass_CameraInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraInfo_t178_il2cpp_TypeInfo;
// CameraInfo
#include "AssemblyU2DUnityScriptU2Dfirstpass_CameraInfoMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m130_MethodInfo;


// System.Void CameraInfo::.ctor()
extern MethodInfo CameraInfo__ctor_m752_MethodInfo;
extern "C" void CameraInfo__ctor_m752 (CameraInfo_t178 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		return;
	}
}
// System.Void CameraInfo::Main()
extern MethodInfo CameraInfo_Main_m753_MethodInfo;
extern "C" void CameraInfo_Main_m753 (CameraInfo_t178 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// CameraMotionBlur/MotionBlurFilter
#include "AssemblyU2DUnityScriptU2Dfirstpass_CameraMotionBlur_MotionBl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MotionBlurFilter_t179_il2cpp_TypeInfo;
// CameraMotionBlur/MotionBlurFilter
#include "AssemblyU2DUnityScriptU2Dfirstpass_CameraMotionBlur_MotionBlMethodDeclarations.h"



// CameraMotionBlur
#include "AssemblyU2DUnityScriptU2Dfirstpass_CameraMotionBlur.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraMotionBlur_t180_il2cpp_TypeInfo;
// CameraMotionBlur
#include "AssemblyU2DUnityScriptU2Dfirstpass_CameraMotionBlurMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "mscorlib_ArrayTypes.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
extern TypeInfo Vector3_t54_il2cpp_TypeInfo;
extern TypeInfo Camera_t56_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t218_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t138_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo GameObject_t49_il2cpp_TypeInfo;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern Il2CppType TypeU5BU5D_t138_0_0_0;
extern Il2CppType Camera_t56_0_0_0;
extern MethodInfo Vector3_get_one_m203_MethodInfo;
extern MethodInfo Vector3_get_forward_m910_MethodInfo;
extern MethodInfo Vector3_get_right_m911_MethodInfo;
extern MethodInfo Vector3_get_up_m912_MethodInfo;
extern MethodInfo Vector3_get_zero_m201_MethodInfo;
extern MethodInfo Camera_get_worldToCameraMatrix_m542_MethodInfo;
extern MethodInfo Camera_get_projectionMatrix_m545_MethodInfo;
extern MethodInfo GL_GetGPUProjectionMatrix_m913_MethodInfo;
extern MethodInfo Matrix4x4_op_Multiply_m543_MethodInfo;
extern MethodInfo CameraMotionBlur_CheckResources_m760_MethodInfo;
extern MethodInfo Component_get_gameObject_m562_MethodInfo;
extern MethodInfo GameObject_get_activeInHierarchy_m914_MethodInfo;
extern MethodInfo CameraMotionBlur_CalculateViewProjection_m756_MethodInfo;
extern MethodInfo CameraMotionBlur_Remember_m762_MethodInfo;
extern MethodInfo Camera_get_depthTextureMode_m216_MethodInfo;
extern MethodInfo Camera_set_depthTextureMode_m217_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m174_MethodInfo;
extern MethodInfo PostEffectsBase_CheckSupport_m850_MethodInfo;
extern MethodInfo CameraMotionBlur_StartFrame_m764_MethodInfo;
extern MethodInfo SystemInfo_SupportsRenderTextureFormat_m213_MethodInfo;
extern MethodInfo CameraMotionBlur_divRoundUp_m765_MethodInfo;
extern MethodInfo Mathf_Max_m915_MethodInfo;
extern MethodInfo Mathf_Min_m916_MethodInfo;
extern MethodInfo Texture_set_filterMode_m917_MethodInfo;
extern MethodInfo Texture_set_wrapMode_m918_MethodInfo;
extern MethodInfo Matrix4x4_Inverse_m919_MethodInfo;
extern MethodInfo Material_SetMatrix_m205_MethodInfo;
extern MethodInfo Matrix4x4_get_identity_m920_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m601_MethodInfo;
extern MethodInfo Quaternion_get_identity_m572_MethodInfo;
extern MethodInfo Matrix4x4_SetTRS_m921_MethodInfo;
extern MethodInfo Vector4_get_zero_m922_MethodInfo;
extern MethodInfo Component_get_transform_m534_MethodInfo;
extern MethodInfo Transform_get_up_m536_MethodInfo;
extern MethodInfo Vector3_Dot_m539_MethodInfo;
extern MethodInfo Transform_get_position_m535_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m923_MethodInfo;
extern MethodInfo Vector3_get_magnitude_m924_MethodInfo;
extern MethodInfo Vector3_Angle_m925_MethodInfo;
extern MethodInfo Camera_get_fieldOfView_m218_MethodInfo;
extern MethodInfo Transform_get_forward_m635_MethodInfo;
extern MethodInfo Transform_get_right_m926_MethodInfo;
extern MethodInfo LayerMask_get_value_m547_MethodInfo;
extern MethodInfo CameraMotionBlur_GetTmpCam_m763_MethodInfo;
extern MethodInfo Camera_set_targetTexture_m549_MethodInfo;
extern MethodInfo LayerMask_op_Implicit_m621_MethodInfo;
extern MethodInfo Camera_set_cullingMask_m548_MethodInfo;
extern MethodInfo Camera_RenderWithShader_m927_MethodInfo;
extern MethodInfo Time_get_frameCount_m928_MethodInfo;
extern MethodInfo Object_get_name_m618_MethodInfo;
extern MethodInfo RuntimeServices_op_Addition_m929_MethodInfo;
extern MethodInfo GameObject_Find_m163_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo GameObject__ctor_m596_MethodInfo;
extern MethodInfo Object_set_hideFlags_m172_MethodInfo;
extern MethodInfo GameObject_get_transform_m655_MethodInfo;
extern MethodInfo Transform_set_position_m551_MethodInfo;
extern MethodInfo Transform_get_rotation_m555_MethodInfo;
extern MethodInfo Transform_set_rotation_m556_MethodInfo;
extern MethodInfo Transform_get_localScale_m930_MethodInfo;
extern MethodInfo Transform_set_localScale_m931_MethodInfo;
extern MethodInfo GameObject_get_camera_m597_MethodInfo;
extern MethodInfo Camera_CopyFrom_m932_MethodInfo;
extern MethodInfo Behaviour_set_enabled_m176_MethodInfo;
extern MethodInfo Camera_set_clearFlags_m574_MethodInfo;
extern MethodInfo Vector3_Slerp_m933_MethodInfo;


// System.Void CameraMotionBlur::.ctor()
extern MethodInfo CameraMotionBlur__ctor_m754_MethodInfo;
extern "C" void CameraMotionBlur__ctor_m754 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___filterType_5 = 2;
		Vector3_t54  L_0 = Vector3_get_one_m203(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m203_MethodInfo);
		__this->___previewScale_7 = L_0;
		__this->___rotationScale_9 = (1.0f);
		__this->___maxVelocity_10 = (8.0f);
		__this->___maxNumSamples_11 = ((int32_t)17);
		__this->___minVelocity_12 = (0.1f);
		__this->___velocityScale_13 = (0.375f);
		__this->___softZDistance_14 = (0.005f);
		__this->___velocityDownsample_15 = 1;
		__this->___showVelocityScale_25 = (1.0f);
		Vector3_t54  L_1 = Vector3_get_forward_m910(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m910_MethodInfo);
		__this->___prevFrameForward_30 = L_1;
		Vector3_t54  L_2 = Vector3_get_right_m911(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m911_MethodInfo);
		__this->___prevFrameRight_31 = L_2;
		Vector3_t54  L_3 = Vector3_get_up_m912(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m912_MethodInfo);
		__this->___prevFrameUp_32 = L_3;
		Vector3_t54  L_4 = Vector3_get_zero_m201(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m201_MethodInfo);
		__this->___prevFramePos_33 = L_4;
		return;
	}
}
// System.Void CameraMotionBlur::.cctor()
extern MethodInfo CameraMotionBlur__cctor_m755_MethodInfo;
extern "C" void CameraMotionBlur__cctor_m755 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((CameraMotionBlur_t180_StaticFields*)InitializedTypeInfo(&CameraMotionBlur_t180_il2cpp_TypeInfo)->static_fields)->___MAX_RADIUS_4 = (((int32_t)(10.0f)));
		return;
	}
}
// System.Void CameraMotionBlur::CalculateViewProjection()
extern "C" void CameraMotionBlur_CalculateViewProjection_m756 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	Matrix4x4_t53  V_1 = {0};
	{
		Camera_t56 * L_0 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_0);
		Matrix4x4_t53  L_1 = Camera_get_worldToCameraMatrix_m542(L_0, /*hidden argument*/&Camera_get_worldToCameraMatrix_m542_MethodInfo);
		V_0 = L_1;
		Camera_t56 * L_2 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_2);
		Matrix4x4_t53  L_3 = Camera_get_projectionMatrix_m545(L_2, /*hidden argument*/&Camera_get_projectionMatrix_m545_MethodInfo);
		Matrix4x4_t53  L_4 = GL_GetGPUProjectionMatrix_m913(NULL /*static, unused*/, L_3, 1, /*hidden argument*/&GL_GetGPUProjectionMatrix_m913_MethodInfo);
		V_1 = L_4;
		Matrix4x4_t53  L_5 = Matrix4x4_op_Multiply_m543(NULL /*static, unused*/, V_1, V_0, /*hidden argument*/&Matrix4x4_op_Multiply_m543_MethodInfo);
		__this->___currentViewProjMat_26 = L_5;
		return;
	}
}
// System.Void CameraMotionBlur::Start()
extern MethodInfo CameraMotionBlur_Start_m757_MethodInfo;
extern "C" void CameraMotionBlur_Start_m757 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker0< bool >::Invoke(&CameraMotionBlur_CheckResources_m760_MethodInfo, __this);
		GameObject_t49 * L_0 = Component_get_gameObject_m562(__this, /*hidden argument*/&Component_get_gameObject_m562_MethodInfo);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeInHierarchy_m914(L_0, /*hidden argument*/&GameObject_get_activeInHierarchy_m914_MethodInfo);
		__this->___wasActive_29 = L_1;
		CameraMotionBlur_CalculateViewProjection_m756(__this, /*hidden argument*/&CameraMotionBlur_CalculateViewProjection_m756_MethodInfo);
		VirtActionInvoker0::Invoke(&CameraMotionBlur_Remember_m762_MethodInfo, __this);
		__this->___prevFrameCount_28 = (-1);
		__this->___wasActive_29 = 0;
		return;
	}
}
// System.Void CameraMotionBlur::OnEnable()
extern MethodInfo CameraMotionBlur_OnEnable_m758_MethodInfo;
extern "C" void CameraMotionBlur_OnEnable_m758 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	{
		Camera_t56 * L_0 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_1 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = Camera_get_depthTextureMode_m216(L_1, /*hidden argument*/&Camera_get_depthTextureMode_m216_MethodInfo);
		NullCheck(L_0);
		Camera_set_depthTextureMode_m217(L_0, ((int32_t)((int32_t)L_2|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m217_MethodInfo);
		return;
	}
}
// System.Void CameraMotionBlur::OnDisable()
extern MethodInfo CameraMotionBlur_OnDisable_m759_MethodInfo;
extern "C" void CameraMotionBlur_OnDisable_m759 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___motionBlurMaterial_21);
		bool L_1 = Object_op_Inequality_m166(NULL /*static, unused*/, (Object_t50 *)NULL, L_0, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Material_t19 * L_2 = (__this->___motionBlurMaterial_21);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
		__this->___motionBlurMaterial_21 = (Material_t19 *)NULL;
	}

IL_0023:
	{
		Material_t19 * L_3 = (__this->___dx11MotionBlurMaterial_22);
		bool L_4 = Object_op_Inequality_m166(NULL /*static, unused*/, (Object_t50 *)NULL, L_3, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		Material_t19 * L_5 = (__this->___dx11MotionBlurMaterial_22);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
		__this->___dx11MotionBlurMaterial_22 = (Material_t19 *)NULL;
	}

IL_0046:
	{
		GameObject_t49 * L_6 = (__this->___tmpCam_17);
		bool L_7 = Object_op_Inequality_m166(NULL /*static, unused*/, (Object_t50 *)NULL, L_6, /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		GameObject_t49 * L_8 = (__this->___tmpCam_17);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
		__this->___tmpCam_17 = (GameObject_t49 *)NULL;
	}

IL_0069:
	{
		return;
	}
}
// System.Boolean CameraMotionBlur::CheckResources()
extern "C" bool CameraMotionBlur_CheckResources_m760 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker2< bool, bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m850_MethodInfo, __this, 1, 1);
		Shader_t18 * L_0 = (__this->___shader_18);
		Material_t19 * L_1 = (__this->___motionBlurMaterial_21);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___motionBlurMaterial_21 = L_2;
		bool L_3 = (__this->___supportDX11_2);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_4 = (__this->___filterType_5);
		if ((((uint32_t)L_4) != ((uint32_t)3)))
		{
			goto IL_0050;
		}
	}
	{
		Shader_t18 * L_5 = (__this->___dx11MotionBlurShader_19);
		Material_t19 * L_6 = (__this->___dx11MotionBlurMaterial_22);
		Material_t19 * L_7 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_5, L_6);
		__this->___dx11MotionBlurMaterial_22 = L_7;
	}

IL_0050:
	{
		bool L_8 = (__this->___isSupported_3);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0061:
	{
		bool L_9 = (__this->___isSupported_3);
		return L_9;
	}
}
// System.Void CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo CameraMotionBlur_OnRenderImage_m761_MethodInfo;
extern "C" void CameraMotionBlur_OnRenderImage_m761 (CameraMotionBlur_t180 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	int32_t V_0 = {0};
	RenderTexture_t21 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	bool V_5 = false;
	RenderTexture_t21 * V_6 = {0};
	RenderTexture_t21 * V_7 = {0};
	Matrix4x4_t53  V_8 = {0};
	Matrix4x4_t53  V_9 = {0};
	Matrix4x4_t53  V_10 = {0};
	Matrix4x4_t53  V_11 = {0};
	Vector4_t52  V_12 = {0};
	float V_13 = 0.0f;
	Vector3_t54  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	Camera_t56 * V_17 = {0};
	int32_t G_B7_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&CameraMotionBlur_CheckResources_m760_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_087a;
	}

IL_0017:
	{
		int32_t L_1 = (__this->___filterType_5);
		if ((((uint32_t)L_1) != ((uint32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		VirtActionInvoker0::Invoke(&CameraMotionBlur_StartFrame_m764_MethodInfo, __this);
	}

IL_0029:
	{
		bool L_2 = SystemInfo_SupportsRenderTextureFormat_m213(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/&SystemInfo_SupportsRenderTextureFormat_m213_MethodInfo);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		G_B7_0 = ((int32_t)13);
		goto IL_003d;
	}

IL_003c:
	{
		G_B7_0 = 2;
	}

IL_003d:
	{
		V_0 = G_B7_0;
		NullCheck(___source);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		int32_t L_4 = (__this->___velocityDownsample_15);
		int32_t L_5 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&CameraMotionBlur_divRoundUp_m765_MethodInfo, __this, L_3, L_4);
		NullCheck(___source);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		int32_t L_7 = (__this->___velocityDownsample_15);
		int32_t L_8 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&CameraMotionBlur_divRoundUp_m765_MethodInfo, __this, L_6, L_7);
		RenderTexture_t21 * L_9 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, L_5, L_8, 0, V_0, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_1 = L_9;
		V_2 = 1;
		V_3 = 1;
		float L_10 = (__this->___maxVelocity_10);
		float L_11 = Mathf_Max_m915(NULL /*static, unused*/, (2.0f), L_10, /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		__this->___maxVelocity_10 = L_11;
		float L_12 = (__this->___maxVelocity_10);
		V_4 = L_12;
		V_5 = 0;
		int32_t L_13 = (__this->___filterType_5);
		if ((((uint32_t)L_13) != ((uint32_t)3)))
		{
			goto IL_00af;
		}
	}
	{
		Material_t19 * L_14 = (__this->___dx11MotionBlurMaterial_22);
		bool L_15 = Object_op_Equality_m164(NULL /*static, unused*/, L_14, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_15)
		{
			goto IL_00af;
		}
	}
	{
		V_5 = 1;
	}

IL_00af:
	{
		int32_t L_16 = (__this->___filterType_5);
		if ((((int32_t)L_16) == ((int32_t)2)))
		{
			goto IL_00c2;
		}
	}
	{
		if (!V_5)
		{
			goto IL_0111;
		}
	}

IL_00c2:
	{
		float L_17 = (__this->___maxVelocity_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CameraMotionBlur_t180_il2cpp_TypeInfo));
		float L_18 = Mathf_Min_m916(NULL /*static, unused*/, L_17, (((float)(((CameraMotionBlur_t180_StaticFields*)InitializedTypeInfo(&CameraMotionBlur_t180_il2cpp_TypeInfo)->static_fields)->___MAX_RADIUS_4))), /*hidden argument*/&Mathf_Min_m916_MethodInfo);
		__this->___maxVelocity_10 = L_18;
		NullCheck(V_1);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_1);
		float L_20 = (__this->___maxVelocity_10);
		int32_t L_21 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&CameraMotionBlur_divRoundUp_m765_MethodInfo, __this, L_19, (((int32_t)L_20)));
		V_2 = L_21;
		NullCheck(V_1);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, V_1);
		float L_23 = (__this->___maxVelocity_10);
		int32_t L_24 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&CameraMotionBlur_divRoundUp_m765_MethodInfo, __this, L_22, (((int32_t)L_23)));
		V_3 = L_24;
		NullCheck(V_1);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_1);
		V_4 = (((float)((int32_t)((int32_t)L_25/(int32_t)V_2))));
		goto IL_0144;
	}

IL_0111:
	{
		NullCheck(V_1);
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_1);
		float L_27 = (__this->___maxVelocity_10);
		int32_t L_28 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&CameraMotionBlur_divRoundUp_m765_MethodInfo, __this, L_26, (((int32_t)L_27)));
		V_2 = L_28;
		NullCheck(V_1);
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, V_1);
		float L_30 = (__this->___maxVelocity_10);
		int32_t L_31 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&CameraMotionBlur_divRoundUp_m765_MethodInfo, __this, L_29, (((int32_t)L_30)));
		V_3 = L_31;
		NullCheck(V_1);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_1);
		V_4 = (((float)((int32_t)((int32_t)L_32/(int32_t)V_2))));
	}

IL_0144:
	{
		RenderTexture_t21 * L_33 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, V_2, V_3, 0, V_0, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_6 = L_33;
		RenderTexture_t21 * L_34 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, V_2, V_3, 0, V_0, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_7 = L_34;
		NullCheck(V_1);
		Texture_set_filterMode_m917(V_1, 0, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		NullCheck(V_6);
		Texture_set_filterMode_m917(V_6, 0, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		NullCheck(V_7);
		Texture_set_filterMode_m917(V_7, 0, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		Texture2D_t36 * L_35 = (__this->___noiseTexture_23);
		bool L_36 = Object_op_Implicit_m173(NULL /*static, unused*/, L_35, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_36)
		{
			goto IL_018d;
		}
	}
	{
		Texture2D_t36 * L_37 = (__this->___noiseTexture_23);
		NullCheck(L_37);
		Texture_set_filterMode_m917(L_37, 0, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
	}

IL_018d:
	{
		NullCheck(___source);
		Texture_set_wrapMode_m918(___source, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		NullCheck(V_1);
		Texture_set_wrapMode_m918(V_1, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		NullCheck(V_7);
		Texture_set_wrapMode_m918(V_7, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		NullCheck(V_6);
		Texture_set_wrapMode_m918(V_6, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		CameraMotionBlur_CalculateViewProjection_m756(__this, /*hidden argument*/&CameraMotionBlur_CalculateViewProjection_m756_MethodInfo);
		GameObject_t49 * L_38 = Component_get_gameObject_m562(__this, /*hidden argument*/&Component_get_gameObject_m562_MethodInfo);
		NullCheck(L_38);
		bool L_39 = GameObject_get_activeInHierarchy_m914(L_38, /*hidden argument*/&GameObject_get_activeInHierarchy_m914_MethodInfo);
		if (!L_39)
		{
			goto IL_01d2;
		}
	}
	{
		bool L_40 = (__this->___wasActive_29);
		if (L_40)
		{
			goto IL_01d2;
		}
	}
	{
		VirtActionInvoker0::Invoke(&CameraMotionBlur_Remember_m762_MethodInfo, __this);
	}

IL_01d2:
	{
		GameObject_t49 * L_41 = Component_get_gameObject_m562(__this, /*hidden argument*/&Component_get_gameObject_m562_MethodInfo);
		NullCheck(L_41);
		bool L_42 = GameObject_get_activeInHierarchy_m914(L_41, /*hidden argument*/&GameObject_get_activeInHierarchy_m914_MethodInfo);
		__this->___wasActive_29 = L_42;
		Matrix4x4_t53  L_43 = (__this->___currentViewProjMat_26);
		Matrix4x4_t53  L_44 = Matrix4x4_Inverse_m919(NULL /*static, unused*/, L_43, /*hidden argument*/&Matrix4x4_Inverse_m919_MethodInfo);
		V_8 = L_44;
		Material_t19 * L_45 = (__this->___motionBlurMaterial_21);
		NullCheck(L_45);
		Material_SetMatrix_m205(L_45, (String_t*) &_stringLiteral231, V_8, /*hidden argument*/&Material_SetMatrix_m205_MethodInfo);
		Material_t19 * L_46 = (__this->___motionBlurMaterial_21);
		Matrix4x4_t53  L_47 = (__this->___prevViewProjMat_27);
		NullCheck(L_46);
		Material_SetMatrix_m205(L_46, (String_t*) &_stringLiteral232, L_47, /*hidden argument*/&Material_SetMatrix_m205_MethodInfo);
		Material_t19 * L_48 = (__this->___motionBlurMaterial_21);
		Matrix4x4_t53  L_49 = (__this->___prevViewProjMat_27);
		Matrix4x4_t53  L_50 = Matrix4x4_op_Multiply_m543(NULL /*static, unused*/, L_49, V_8, /*hidden argument*/&Matrix4x4_op_Multiply_m543_MethodInfo);
		NullCheck(L_48);
		Material_SetMatrix_m205(L_48, (String_t*) &_stringLiteral233, L_50, /*hidden argument*/&Material_SetMatrix_m205_MethodInfo);
		Material_t19 * L_51 = (__this->___motionBlurMaterial_21);
		NullCheck(L_51);
		Material_SetFloat_m195(L_51, (String_t*) &_stringLiteral234, V_4, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_52 = (__this->___motionBlurMaterial_21);
		NullCheck(L_52);
		Material_SetFloat_m195(L_52, (String_t*) &_stringLiteral235, V_4, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_53 = (__this->___motionBlurMaterial_21);
		float L_54 = (__this->___minVelocity_12);
		NullCheck(L_53);
		Material_SetFloat_m195(L_53, (String_t*) &_stringLiteral236, L_54, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_55 = (__this->___motionBlurMaterial_21);
		float L_56 = (__this->___velocityScale_13);
		NullCheck(L_55);
		Material_SetFloat_m195(L_55, (String_t*) &_stringLiteral237, L_56, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_57 = (__this->___motionBlurMaterial_21);
		Texture2D_t36 * L_58 = (__this->___noiseTexture_23);
		NullCheck(L_57);
		Material_SetTexture_m186(L_57, (String_t*) &_stringLiteral238, L_58, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_59 = (__this->___motionBlurMaterial_21);
		NullCheck(L_59);
		Material_SetTexture_m186(L_59, (String_t*) &_stringLiteral239, V_1, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_60 = (__this->___motionBlurMaterial_21);
		NullCheck(L_60);
		Material_SetTexture_m186(L_60, (String_t*) &_stringLiteral240, V_7, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_61 = (__this->___motionBlurMaterial_21);
		NullCheck(L_61);
		Material_SetTexture_m186(L_61, (String_t*) &_stringLiteral241, V_6, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		bool L_62 = (__this->___preview_6);
		if (!L_62)
		{
			goto IL_036c;
		}
	}
	{
		Camera_t56 * L_63 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_63);
		Matrix4x4_t53  L_64 = Camera_get_worldToCameraMatrix_m542(L_63, /*hidden argument*/&Camera_get_worldToCameraMatrix_m542_MethodInfo);
		V_9 = L_64;
		Matrix4x4_t53  L_65 = Matrix4x4_get_identity_m920(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_identity_m920_MethodInfo);
		V_10 = L_65;
		Vector3_t54  L_66 = (__this->___previewScale_7);
		Vector3_t54  L_67 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_66, (0.25f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Quaternion_t55  L_68 = Quaternion_get_identity_m572(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m572_MethodInfo);
		Vector3_t54  L_69 = Vector3_get_one_m203(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m203_MethodInfo);
		Matrix4x4_SetTRS_m921((&V_10), L_67, L_68, L_69, /*hidden argument*/&Matrix4x4_SetTRS_m921_MethodInfo);
		Camera_t56 * L_70 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_70);
		Matrix4x4_t53  L_71 = Camera_get_projectionMatrix_m545(L_70, /*hidden argument*/&Camera_get_projectionMatrix_m545_MethodInfo);
		Matrix4x4_t53  L_72 = GL_GetGPUProjectionMatrix_m913(NULL /*static, unused*/, L_71, 1, /*hidden argument*/&GL_GetGPUProjectionMatrix_m913_MethodInfo);
		V_11 = L_72;
		Matrix4x4_t53  L_73 = Matrix4x4_op_Multiply_m543(NULL /*static, unused*/, V_11, V_10, /*hidden argument*/&Matrix4x4_op_Multiply_m543_MethodInfo);
		Matrix4x4_t53  L_74 = Matrix4x4_op_Multiply_m543(NULL /*static, unused*/, L_73, V_9, /*hidden argument*/&Matrix4x4_op_Multiply_m543_MethodInfo);
		__this->___prevViewProjMat_27 = L_74;
		Material_t19 * L_75 = (__this->___motionBlurMaterial_21);
		Matrix4x4_t53  L_76 = (__this->___prevViewProjMat_27);
		NullCheck(L_75);
		Material_SetMatrix_m205(L_75, (String_t*) &_stringLiteral232, L_76, /*hidden argument*/&Material_SetMatrix_m205_MethodInfo);
		Material_t19 * L_77 = (__this->___motionBlurMaterial_21);
		Matrix4x4_t53  L_78 = (__this->___prevViewProjMat_27);
		Matrix4x4_t53  L_79 = Matrix4x4_op_Multiply_m543(NULL /*static, unused*/, L_78, V_8, /*hidden argument*/&Matrix4x4_op_Multiply_m543_MethodInfo);
		NullCheck(L_77);
		Material_SetMatrix_m205(L_77, (String_t*) &_stringLiteral233, L_79, /*hidden argument*/&Material_SetMatrix_m205_MethodInfo);
	}

IL_036c:
	{
		int32_t L_80 = (__this->___filterType_5);
		if ((((uint32_t)L_80) != ((uint32_t)0)))
		{
			goto IL_05bf;
		}
	}
	{
		Vector4_t52  L_81 = Vector4_get_zero_m922(NULL /*static, unused*/, /*hidden argument*/&Vector4_get_zero_m922_MethodInfo);
		V_12 = L_81;
		Transform_t85 * L_82 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_82);
		Vector3_t54  L_83 = Transform_get_up_m536(L_82, /*hidden argument*/&Transform_get_up_m536_MethodInfo);
		Vector3_t54  L_84 = Vector3_get_up_m912(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m912_MethodInfo);
		float L_85 = Vector3_Dot_m539(NULL /*static, unused*/, L_83, L_84, /*hidden argument*/&Vector3_Dot_m539_MethodInfo);
		V_13 = L_85;
		Vector3_t54  L_86 = (__this->___prevFramePos_33);
		Transform_t85 * L_87 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_87);
		Vector3_t54  L_88 = Transform_get_position_m535(L_87, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_89 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, L_86, L_88, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		V_14 = L_89;
		float L_90 = Vector3_get_magnitude_m924((&V_14), /*hidden argument*/&Vector3_get_magnitude_m924_MethodInfo);
		V_15 = L_90;
		V_16 = (1.0f);
		Transform_t85 * L_91 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_91);
		Vector3_t54  L_92 = Transform_get_up_m536(L_91, /*hidden argument*/&Transform_get_up_m536_MethodInfo);
		Vector3_t54  L_93 = (__this->___prevFrameUp_32);
		float L_94 = Vector3_Angle_m925(NULL /*static, unused*/, L_92, L_93, /*hidden argument*/&Vector3_Angle_m925_MethodInfo);
		Camera_t56 * L_95 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_95);
		float L_96 = Camera_get_fieldOfView_m218(L_95, /*hidden argument*/&Camera_get_fieldOfView_m218_MethodInfo);
		NullCheck(___source);
		int32_t L_97 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		V_16 = ((float)((float)((float)((float)L_94/(float)L_96))*(float)((float)((float)(((float)L_97))*(float)(0.75f)))));
		float L_98 = (__this->___rotationScale_9);
		NullCheck((&V_12));
		(&V_12)->___x_1 = ((float)((float)L_98*(float)V_16));
		Transform_t85 * L_99 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_99);
		Vector3_t54  L_100 = Transform_get_forward_m635(L_99, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		Vector3_t54  L_101 = (__this->___prevFrameForward_30);
		float L_102 = Vector3_Angle_m925(NULL /*static, unused*/, L_100, L_101, /*hidden argument*/&Vector3_Angle_m925_MethodInfo);
		Camera_t56 * L_103 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_103);
		float L_104 = Camera_get_fieldOfView_m218(L_103, /*hidden argument*/&Camera_get_fieldOfView_m218_MethodInfo);
		NullCheck(___source);
		int32_t L_105 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		V_16 = ((float)((float)((float)((float)L_102/(float)L_104))*(float)((float)((float)(((float)L_105))*(float)(0.75f)))));
		float L_106 = (__this->___rotationScale_9);
		NullCheck((&V_12));
		(&V_12)->___y_2 = ((float)((float)((float)((float)L_106*(float)V_13))*(float)V_16));
		Transform_t85 * L_107 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_107);
		Vector3_t54  L_108 = Transform_get_forward_m635(L_107, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		Vector3_t54  L_109 = (__this->___prevFrameForward_30);
		float L_110 = Vector3_Angle_m925(NULL /*static, unused*/, L_108, L_109, /*hidden argument*/&Vector3_Angle_m925_MethodInfo);
		Camera_t56 * L_111 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_111);
		float L_112 = Camera_get_fieldOfView_m218(L_111, /*hidden argument*/&Camera_get_fieldOfView_m218_MethodInfo);
		NullCheck(___source);
		int32_t L_113 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		V_16 = ((float)((float)((float)((float)L_110/(float)L_112))*(float)((float)((float)(((float)L_113))*(float)(0.75f)))));
		float L_114 = (__this->___rotationScale_9);
		NullCheck((&V_12));
		(&V_12)->___z_3 = ((float)((float)((float)((float)L_114*(float)((float)((float)(1.0f)-(float)V_13))))*(float)V_16));
		if ((((float)V_15) <= ((float)(1.17549435E-38f))))
		{
			goto IL_0546;
		}
	}
	{
		float L_115 = (__this->___movementScale_8);
		if ((((float)L_115) <= ((float)(1.17549435E-38f))))
		{
			goto IL_0546;
		}
	}
	{
		float L_116 = (__this->___movementScale_8);
		Transform_t85 * L_117 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_117);
		Vector3_t54  L_118 = Transform_get_forward_m635(L_117, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		float L_119 = Vector3_Dot_m539(NULL /*static, unused*/, L_118, V_14, /*hidden argument*/&Vector3_Dot_m539_MethodInfo);
		NullCheck(___source);
		int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck((&V_12));
		(&V_12)->___w_4 = ((float)((float)((float)((float)L_116*(float)L_119))*(float)((float)((float)(((float)L_120))*(float)(0.5f)))));
		NullCheck((&V_12));
		float L_121 = ((&V_12)->___x_1);
		float L_122 = (__this->___movementScale_8);
		Transform_t85 * L_123 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_123);
		Vector3_t54  L_124 = Transform_get_up_m536(L_123, /*hidden argument*/&Transform_get_up_m536_MethodInfo);
		float L_125 = Vector3_Dot_m539(NULL /*static, unused*/, L_124, V_14, /*hidden argument*/&Vector3_Dot_m539_MethodInfo);
		NullCheck(___source);
		int32_t L_126 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck((&V_12));
		(&V_12)->___x_1 = ((float)((float)L_121+(float)((float)((float)((float)((float)L_122*(float)L_125))*(float)((float)((float)(((float)L_126))*(float)(0.5f)))))));
		NullCheck((&V_12));
		float L_127 = ((&V_12)->___y_2);
		float L_128 = (__this->___movementScale_8);
		Transform_t85 * L_129 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_129);
		Vector3_t54  L_130 = Transform_get_right_m926(L_129, /*hidden argument*/&Transform_get_right_m926_MethodInfo);
		float L_131 = Vector3_Dot_m539(NULL /*static, unused*/, L_130, V_14, /*hidden argument*/&Vector3_Dot_m539_MethodInfo);
		NullCheck(___source);
		int32_t L_132 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck((&V_12));
		(&V_12)->___y_2 = ((float)((float)L_127+(float)((float)((float)((float)((float)L_128*(float)L_131))*(float)((float)((float)(((float)L_132))*(float)(0.5f)))))));
	}

IL_0546:
	{
		bool L_133 = (__this->___preview_6);
		if (!L_133)
		{
			goto IL_05a8;
		}
	}
	{
		Material_t19 * L_134 = (__this->___motionBlurMaterial_21);
		Vector3_t54 * L_135 = &(__this->___previewScale_7);
		NullCheck(L_135);
		float L_136 = (L_135->___y_2);
		Vector3_t54 * L_137 = &(__this->___previewScale_7);
		NullCheck(L_137);
		float L_138 = (L_137->___x_1);
		Vector3_t54 * L_139 = &(__this->___previewScale_7);
		NullCheck(L_139);
		float L_140 = (L_139->___z_3);
		Vector4_t52  L_141 = {0};
		Vector4__ctor_m193(&L_141, L_136, L_138, (((float)0)), L_140, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		Vector4_t52  L_142 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_141, (0.5f), /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		Camera_t56 * L_143 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_143);
		float L_144 = Camera_get_fieldOfView_m218(L_143, /*hidden argument*/&Camera_get_fieldOfView_m218_MethodInfo);
		Vector4_t52  L_145 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_142, L_144, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_134);
		Material_SetVector_m194(L_134, (String_t*) &_stringLiteral242, L_145, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		goto IL_05ba;
	}

IL_05a8:
	{
		Material_t19 * L_146 = (__this->___motionBlurMaterial_21);
		NullCheck(L_146);
		Material_SetVector_m194(L_146, (String_t*) &_stringLiteral242, V_12, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
	}

IL_05ba:
	{
		goto IL_0650;
	}

IL_05bf:
	{
		Material_t19 * L_147 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_1, L_147, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		V_17 = (Camera_t56 *)NULL;
		LayerMask_t76 * L_148 = &(__this->___excludeLayers_16);
		int32_t L_149 = LayerMask_get_value_m547(L_148, /*hidden argument*/&LayerMask_get_value_m547_MethodInfo);
		if (!L_149)
		{
			goto IL_05e8;
		}
	}
	{
		Camera_t56 * L_150 = (Camera_t56 *)VirtFuncInvoker0< Camera_t56 * >::Invoke(&CameraMotionBlur_GetTmpCam_m763_MethodInfo, __this);
		V_17 = L_150;
	}

IL_05e8:
	{
		bool L_151 = Object_op_Implicit_m173(NULL /*static, unused*/, V_17, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_151)
		{
			goto IL_0650;
		}
	}
	{
		LayerMask_t76 * L_152 = &(__this->___excludeLayers_16);
		int32_t L_153 = LayerMask_get_value_m547(L_152, /*hidden argument*/&LayerMask_get_value_m547_MethodInfo);
		if (!L_153)
		{
			goto IL_0650;
		}
	}
	{
		Shader_t18 * L_154 = (__this->___replacementClear_20);
		bool L_155 = Object_op_Implicit_m173(NULL /*static, unused*/, L_154, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_155)
		{
			goto IL_0650;
		}
	}
	{
		Shader_t18 * L_156 = (__this->___replacementClear_20);
		NullCheck(L_156);
		bool L_157 = Shader_get_isSupported_m178(L_156, /*hidden argument*/&Shader_get_isSupported_m178_MethodInfo);
		if (!L_157)
		{
			goto IL_0650;
		}
	}
	{
		NullCheck(V_17);
		Camera_set_targetTexture_m549(V_17, V_1, /*hidden argument*/&Camera_set_targetTexture_m549_MethodInfo);
		LayerMask_t76  L_158 = (__this->___excludeLayers_16);
		int32_t L_159 = LayerMask_op_Implicit_m621(NULL /*static, unused*/, L_158, /*hidden argument*/&LayerMask_op_Implicit_m621_MethodInfo);
		NullCheck(V_17);
		Camera_set_cullingMask_m548(V_17, L_159, /*hidden argument*/&Camera_set_cullingMask_m548_MethodInfo);
		Shader_t18 * L_160 = (__this->___replacementClear_20);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		NullCheck(V_17);
		Camera_RenderWithShader_m927(V_17, L_160, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&Camera_RenderWithShader_m927_MethodInfo);
	}

IL_0650:
	{
		bool L_161 = (__this->___preview_6);
		if (L_161)
		{
			goto IL_067c;
		}
	}
	{
		int32_t L_162 = Time_get_frameCount_m928(NULL /*static, unused*/, /*hidden argument*/&Time_get_frameCount_m928_MethodInfo);
		int32_t L_163 = (__this->___prevFrameCount_28);
		if ((((int32_t)L_162) == ((int32_t)L_163)))
		{
			goto IL_067c;
		}
	}
	{
		int32_t L_164 = Time_get_frameCount_m928(NULL /*static, unused*/, /*hidden argument*/&Time_get_frameCount_m928_MethodInfo);
		__this->___prevFrameCount_28 = L_164;
		VirtActionInvoker0::Invoke(&CameraMotionBlur_Remember_m762_MethodInfo, __this);
	}

IL_067c:
	{
		NullCheck(___source);
		Texture_set_filterMode_m917(___source, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		bool L_165 = (__this->___showVelocity_24);
		if (!L_165)
		{
			goto IL_06b7;
		}
	}
	{
		Material_t19 * L_166 = (__this->___motionBlurMaterial_21);
		float L_167 = (__this->___showVelocityScale_25);
		NullCheck(L_166);
		Material_SetFloat_m195(L_166, (String_t*) &_stringLiteral243, L_167, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_168 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m224(NULL /*static, unused*/, V_1, ___destination, L_168, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0866;
	}

IL_06b7:
	{
		int32_t L_169 = (__this->___filterType_5);
		if ((((uint32_t)L_169) != ((uint32_t)3)))
		{
			goto IL_07d4;
		}
	}
	{
		if (V_5)
		{
			goto IL_07d4;
		}
	}
	{
		Material_t19 * L_170 = (__this->___dx11MotionBlurMaterial_22);
		NullCheck(L_170);
		Material_SetFloat_m195(L_170, (String_t*) &_stringLiteral234, V_4, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_171 = (__this->___dx11MotionBlurMaterial_22);
		float L_172 = (__this->___minVelocity_12);
		NullCheck(L_171);
		Material_SetFloat_m195(L_171, (String_t*) &_stringLiteral236, L_172, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_173 = (__this->___dx11MotionBlurMaterial_22);
		float L_174 = (__this->___velocityScale_13);
		NullCheck(L_173);
		Material_SetFloat_m195(L_173, (String_t*) &_stringLiteral237, L_174, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_175 = (__this->___dx11MotionBlurMaterial_22);
		Texture2D_t36 * L_176 = (__this->___noiseTexture_23);
		NullCheck(L_175);
		Material_SetTexture_m186(L_175, (String_t*) &_stringLiteral238, L_176, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_177 = (__this->___dx11MotionBlurMaterial_22);
		NullCheck(L_177);
		Material_SetTexture_m186(L_177, (String_t*) &_stringLiteral239, V_1, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_178 = (__this->___dx11MotionBlurMaterial_22);
		NullCheck(L_178);
		Material_SetTexture_m186(L_178, (String_t*) &_stringLiteral240, V_7, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_179 = (__this->___dx11MotionBlurMaterial_22);
		float L_180 = (__this->___softZDistance_14);
		float L_181 = Mathf_Max_m915(NULL /*static, unused*/, (0.00025f), L_180, /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		NullCheck(L_179);
		Material_SetFloat_m195(L_179, (String_t*) &_stringLiteral244, L_181, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_182 = (__this->___dx11MotionBlurMaterial_22);
		NullCheck(L_182);
		Material_SetFloat_m195(L_182, (String_t*) &_stringLiteral235, V_4, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		int32_t L_183 = (__this->___maxNumSamples_11);
		__this->___maxNumSamples_11 = ((int32_t)((int32_t)((int32_t)((int32_t)2*(int32_t)((int32_t)((int32_t)L_183/(int32_t)2))))+(int32_t)1));
		Material_t19 * L_184 = (__this->___dx11MotionBlurMaterial_22);
		int32_t L_185 = (__this->___maxNumSamples_11);
		NullCheck(L_184);
		Material_SetFloat_m195(L_184, (String_t*) &_stringLiteral245, ((float)((float)(((float)L_185))*(float)(1.0f))), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_186 = (__this->___dx11MotionBlurMaterial_22);
		Graphics_Blit_m224(NULL /*static, unused*/, V_1, V_6, L_186, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_187 = (__this->___dx11MotionBlurMaterial_22);
		Graphics_Blit_m224(NULL /*static, unused*/, V_6, V_7, L_187, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_188 = (__this->___dx11MotionBlurMaterial_22);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_188, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0866;
	}

IL_07d4:
	{
		int32_t L_189 = (__this->___filterType_5);
		if ((((int32_t)L_189) == ((int32_t)2)))
		{
			goto IL_07e7;
		}
	}
	{
		if (!V_5)
		{
			goto IL_0839;
		}
	}

IL_07e7:
	{
		Material_t19 * L_190 = (__this->___motionBlurMaterial_21);
		float L_191 = (__this->___softZDistance_14);
		float L_192 = Mathf_Max_m915(NULL /*static, unused*/, (0.00025f), L_191, /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		NullCheck(L_190);
		Material_SetFloat_m195(L_190, (String_t*) &_stringLiteral244, L_192, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_193 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m224(NULL /*static, unused*/, V_1, V_6, L_193, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_194 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m224(NULL /*static, unused*/, V_6, V_7, L_194, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_195 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_195, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0866;
	}

IL_0839:
	{
		int32_t L_196 = (__this->___filterType_5);
		if ((((uint32_t)L_196) != ((uint32_t)0)))
		{
			goto IL_0858;
		}
	}
	{
		Material_t19 * L_197 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_197, 6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0866;
	}

IL_0858:
	{
		Material_t19 * L_198 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_198, 5, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_0866:
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_1, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_6, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_7, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_087a:
	{
		return;
	}
}
// System.Void CameraMotionBlur::Remember()
extern "C" void CameraMotionBlur_Remember_m762 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	{
		Matrix4x4_t53  L_0 = (__this->___currentViewProjMat_26);
		__this->___prevViewProjMat_27 = L_0;
		Transform_t85 * L_1 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_1);
		Vector3_t54  L_2 = Transform_get_forward_m635(L_1, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		__this->___prevFrameForward_30 = L_2;
		Transform_t85 * L_3 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_3);
		Vector3_t54  L_4 = Transform_get_right_m926(L_3, /*hidden argument*/&Transform_get_right_m926_MethodInfo);
		__this->___prevFrameRight_31 = L_4;
		Transform_t85 * L_5 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_5);
		Vector3_t54  L_6 = Transform_get_up_m536(L_5, /*hidden argument*/&Transform_get_up_m536_MethodInfo);
		__this->___prevFrameUp_32 = L_6;
		Transform_t85 * L_7 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_7);
		Vector3_t54  L_8 = Transform_get_position_m535(L_7, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		__this->___prevFramePos_33 = L_8;
		return;
	}
}
// UnityEngine.Camera CameraMotionBlur::GetTmpCam()
extern TypeInfo* TypeU5BU5D_t138_il2cpp_TypeInfo_var;
extern "C" Camera_t56 * CameraMotionBlur_GetTmpCam_m763 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	static bool CameraMotionBlur_GetTmpCam_m763_init;
	if (!CameraMotionBlur_GetTmpCam_m763_init)
	{
		TypeU5BU5D_t138_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t138_0_0_0);
		CameraMotionBlur_GetTmpCam_m763_init = true;
	}
	String_t* V_0 = {0};
	GameObject_t49 * V_1 = {0};
	{
		GameObject_t49 * L_0 = (__this->___tmpCam_17);
		bool L_1 = Object_op_Equality_m164(NULL /*static, unused*/, L_0, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_1)
		{
			goto IL_006f;
		}
	}
	{
		Camera_t56 * L_2 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m618(L_2, /*hidden argument*/&Object_get_name_m618_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		String_t* L_4 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral246, L_3, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_5 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral247, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		V_0 = L_5;
		GameObject_t49 * L_6 = GameObject_Find_m163(NULL /*static, unused*/, V_0, /*hidden argument*/&GameObject_Find_m163_MethodInfo);
		V_1 = L_6;
		bool L_7 = Object_op_Equality_m164(NULL /*static, unused*/, (Object_t50 *)NULL, V_1, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		TypeU5BU5D_t138* L_8 = ((TypeU5BU5D_t138*)SZArrayNew(TypeU5BU5D_t138_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m577(NULL /*static, unused*/, LoadTypeToken(&Camera_t56_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m577_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 0)) = (Type_t *)L_9;
		GameObject_t49 * L_10 = (GameObject_t49 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t49_il2cpp_TypeInfo));
		GameObject__ctor_m596(L_10, V_0, L_8, /*hidden argument*/&GameObject__ctor_m596_MethodInfo);
		__this->___tmpCam_17 = L_10;
		goto IL_006f;
	}

IL_0068:
	{
		__this->___tmpCam_17 = V_1;
	}

IL_006f:
	{
		GameObject_t49 * L_11 = (__this->___tmpCam_17);
		NullCheck(L_11);
		Object_set_hideFlags_m172(L_11, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		GameObject_t49 * L_12 = (__this->___tmpCam_17);
		NullCheck(L_12);
		Transform_t85 * L_13 = GameObject_get_transform_m655(L_12, /*hidden argument*/&GameObject_get_transform_m655_MethodInfo);
		Camera_t56 * L_14 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_14);
		Transform_t85 * L_15 = Component_get_transform_m534(L_14, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_15);
		Vector3_t54  L_16 = Transform_get_position_m535(L_15, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		NullCheck(L_13);
		Transform_set_position_m551(L_13, L_16, /*hidden argument*/&Transform_set_position_m551_MethodInfo);
		GameObject_t49 * L_17 = (__this->___tmpCam_17);
		NullCheck(L_17);
		Transform_t85 * L_18 = GameObject_get_transform_m655(L_17, /*hidden argument*/&GameObject_get_transform_m655_MethodInfo);
		Camera_t56 * L_19 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_19);
		Transform_t85 * L_20 = Component_get_transform_m534(L_19, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_20);
		Quaternion_t55  L_21 = Transform_get_rotation_m555(L_20, /*hidden argument*/&Transform_get_rotation_m555_MethodInfo);
		NullCheck(L_18);
		Transform_set_rotation_m556(L_18, L_21, /*hidden argument*/&Transform_set_rotation_m556_MethodInfo);
		GameObject_t49 * L_22 = (__this->___tmpCam_17);
		NullCheck(L_22);
		Transform_t85 * L_23 = GameObject_get_transform_m655(L_22, /*hidden argument*/&GameObject_get_transform_m655_MethodInfo);
		Camera_t56 * L_24 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_24);
		Transform_t85 * L_25 = Component_get_transform_m534(L_24, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_25);
		Vector3_t54  L_26 = Transform_get_localScale_m930(L_25, /*hidden argument*/&Transform_get_localScale_m930_MethodInfo);
		NullCheck(L_23);
		Transform_set_localScale_m931(L_23, L_26, /*hidden argument*/&Transform_set_localScale_m931_MethodInfo);
		GameObject_t49 * L_27 = (__this->___tmpCam_17);
		NullCheck(L_27);
		Camera_t56 * L_28 = GameObject_get_camera_m597(L_27, /*hidden argument*/&GameObject_get_camera_m597_MethodInfo);
		Camera_t56 * L_29 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_28);
		Camera_CopyFrom_m932(L_28, L_29, /*hidden argument*/&Camera_CopyFrom_m932_MethodInfo);
		GameObject_t49 * L_30 = (__this->___tmpCam_17);
		NullCheck(L_30);
		Camera_t56 * L_31 = GameObject_get_camera_m597(L_30, /*hidden argument*/&GameObject_get_camera_m597_MethodInfo);
		NullCheck(L_31);
		Behaviour_set_enabled_m176(L_31, 0, /*hidden argument*/&Behaviour_set_enabled_m176_MethodInfo);
		GameObject_t49 * L_32 = (__this->___tmpCam_17);
		NullCheck(L_32);
		Camera_t56 * L_33 = GameObject_get_camera_m597(L_32, /*hidden argument*/&GameObject_get_camera_m597_MethodInfo);
		NullCheck(L_33);
		Camera_set_depthTextureMode_m217(L_33, 0, /*hidden argument*/&Camera_set_depthTextureMode_m217_MethodInfo);
		GameObject_t49 * L_34 = (__this->___tmpCam_17);
		NullCheck(L_34);
		Camera_t56 * L_35 = GameObject_get_camera_m597(L_34, /*hidden argument*/&GameObject_get_camera_m597_MethodInfo);
		NullCheck(L_35);
		Camera_set_clearFlags_m574(L_35, 4, /*hidden argument*/&Camera_set_clearFlags_m574_MethodInfo);
		GameObject_t49 * L_36 = (__this->___tmpCam_17);
		NullCheck(L_36);
		Camera_t56 * L_37 = GameObject_get_camera_m597(L_36, /*hidden argument*/&GameObject_get_camera_m597_MethodInfo);
		return L_37;
	}
}
// System.Void CameraMotionBlur::StartFrame()
extern "C" void CameraMotionBlur_StartFrame_m764 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	{
		Vector3_t54  L_0 = (__this->___prevFramePos_33);
		Transform_t85 * L_1 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_1);
		Vector3_t54  L_2 = Transform_get_position_m535(L_1, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_3 = Vector3_Slerp_m933(NULL /*static, unused*/, L_0, L_2, (0.75f), /*hidden argument*/&Vector3_Slerp_m933_MethodInfo);
		__this->___prevFramePos_33 = L_3;
		return;
	}
}
// System.Int32 CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C" int32_t CameraMotionBlur_divRoundUp_m765 (CameraMotionBlur_t180 * __this, int32_t ___x, int32_t ___d, MethodInfo* method)
{
	{
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)___x+(int32_t)___d))-(int32_t)1))/(int32_t)___d));
	}
}
// System.Void CameraMotionBlur::Main()
extern MethodInfo CameraMotionBlur_Main_m766_MethodInfo;
extern "C" void CameraMotionBlur_Main_m766 (CameraMotionBlur_t180 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// ColorCorrectionMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_ColorCorrectionMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ColorCorrectionMode_t181_il2cpp_TypeInfo;
// ColorCorrectionMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_ColorCorrectionModeMethodDeclarations.h"



// ColorCorrectionCurves
#include "AssemblyU2DUnityScriptU2Dfirstpass_ColorCorrectionCurves.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ColorCorrectionCurves_t183_il2cpp_TypeInfo;
// ColorCorrectionCurves
#include "AssemblyU2DUnityScriptU2Dfirstpass_ColorCorrectionCurvesMethodDeclarations.h"

// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
extern TypeInfo Texture2D_t36_il2cpp_TypeInfo;
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
extern MethodInfo PostEffectsBase_Start_m848_MethodInfo;
extern MethodInfo Texture2D__ctor_m934_MethodInfo;
extern MethodInfo AnimationCurve_Evaluate_m935_MethodInfo;
extern MethodInfo Mathf_Clamp_m192_MethodInfo;
extern MethodInfo Mathf_Floor_m936_MethodInfo;
extern MethodInfo Color__ctor_m937_MethodInfo;
extern MethodInfo Texture2D_SetPixel_m938_MethodInfo;
extern MethodInfo Texture2D_Apply_m939_MethodInfo;
extern MethodInfo ColorCorrectionCurves_UpdateParameters_m771_MethodInfo;
extern MethodInfo ColorCorrectionCurves_CheckResources_m770_MethodInfo;
extern MethodInfo Material_SetColor_m940_MethodInfo;


// System.Void ColorCorrectionCurves::.ctor()
extern MethodInfo ColorCorrectionCurves__ctor_m767_MethodInfo;
extern "C" void ColorCorrectionCurves__ctor_m767 (ColorCorrectionCurves_t183 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___saturation_18 = (1.0f);
		Color_t29  L_0 = Color_get_white_m903(NULL /*static, unused*/, /*hidden argument*/&Color_get_white_m903_MethodInfo);
		__this->___selectiveFromColor_20 = L_0;
		Color_t29  L_1 = Color_get_white_m903(NULL /*static, unused*/, /*hidden argument*/&Color_get_white_m903_MethodInfo);
		__this->___selectiveToColor_21 = L_1;
		__this->___updateTextures_23 = 1;
		__this->___updateTexturesOnStartup_27 = 1;
		return;
	}
}
// System.Void ColorCorrectionCurves::Start()
extern MethodInfo ColorCorrectionCurves_Start_m768_MethodInfo;
extern "C" void ColorCorrectionCurves_Start_m768 (ColorCorrectionCurves_t183 * __this, MethodInfo* method)
{
	{
		PostEffectsBase_Start_m848(__this, /*hidden argument*/&PostEffectsBase_Start_m848_MethodInfo);
		__this->___updateTexturesOnStartup_27 = 1;
		return;
	}
}
// System.Void ColorCorrectionCurves::Awake()
extern MethodInfo ColorCorrectionCurves_Awake_m769_MethodInfo;
extern "C" void ColorCorrectionCurves_Awake_m769 (ColorCorrectionCurves_t183 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean ColorCorrectionCurves::CheckResources()
extern "C" bool ColorCorrectionCurves_CheckResources_m770 (ColorCorrectionCurves_t183 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mode_22);
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, ((((int32_t)L_0) == ((int32_t)1))? 1 : 0));
		Shader_t18 * L_1 = (__this->___simpleColorCorrectionCurvesShader_25);
		Material_t19 * L_2 = (__this->___ccMaterial_12);
		Material_t19 * L_3 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_1, L_2);
		__this->___ccMaterial_12 = L_3;
		Shader_t18 * L_4 = (__this->___colorCorrectionCurvesShader_24);
		Material_t19 * L_5 = (__this->___ccDepthMaterial_13);
		Material_t19 * L_6 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_4, L_5);
		__this->___ccDepthMaterial_13 = L_6;
		Shader_t18 * L_7 = (__this->___colorCorrectionSelectiveShader_26);
		Material_t19 * L_8 = (__this->___selectiveCcMaterial_14);
		Material_t19 * L_9 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_7, L_8);
		__this->___selectiveCcMaterial_14 = L_9;
		Texture2D_t36 * L_10 = (__this->___rgbChannelTex_15);
		bool L_11 = Object_op_Implicit_m173(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_11)
		{
			goto IL_007c;
		}
	}
	{
		Texture2D_t36 * L_12 = (Texture2D_t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t36_il2cpp_TypeInfo));
		Texture2D__ctor_m934(L_12, ((int32_t)256), 4, 5, 0, 1, /*hidden argument*/&Texture2D__ctor_m934_MethodInfo);
		__this->___rgbChannelTex_15 = L_12;
	}

IL_007c:
	{
		Texture2D_t36 * L_13 = (__this->___rgbDepthChannelTex_16);
		bool L_14 = Object_op_Implicit_m173(NULL /*static, unused*/, L_13, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_14)
		{
			goto IL_00a0;
		}
	}
	{
		Texture2D_t36 * L_15 = (Texture2D_t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t36_il2cpp_TypeInfo));
		Texture2D__ctor_m934(L_15, ((int32_t)256), 4, 5, 0, 1, /*hidden argument*/&Texture2D__ctor_m934_MethodInfo);
		__this->___rgbDepthChannelTex_16 = L_15;
	}

IL_00a0:
	{
		Texture2D_t36 * L_16 = (__this->___zCurveTex_17);
		bool L_17 = Object_op_Implicit_m173(NULL /*static, unused*/, L_16, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_17)
		{
			goto IL_00c4;
		}
	}
	{
		Texture2D_t36 * L_18 = (Texture2D_t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t36_il2cpp_TypeInfo));
		Texture2D__ctor_m934(L_18, ((int32_t)256), 1, 5, 0, 1, /*hidden argument*/&Texture2D__ctor_m934_MethodInfo);
		__this->___zCurveTex_17 = L_18;
	}

IL_00c4:
	{
		Texture2D_t36 * L_19 = (__this->___rgbChannelTex_15);
		NullCheck(L_19);
		Object_set_hideFlags_m172(L_19, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		Texture2D_t36 * L_20 = (__this->___rgbDepthChannelTex_16);
		NullCheck(L_20);
		Object_set_hideFlags_m172(L_20, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		Texture2D_t36 * L_21 = (__this->___zCurveTex_17);
		NullCheck(L_21);
		Object_set_hideFlags_m172(L_21, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		Texture2D_t36 * L_22 = (__this->___rgbChannelTex_15);
		NullCheck(L_22);
		Texture_set_wrapMode_m918(L_22, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		Texture2D_t36 * L_23 = (__this->___rgbDepthChannelTex_16);
		NullCheck(L_23);
		Texture_set_wrapMode_m918(L_23, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		Texture2D_t36 * L_24 = (__this->___zCurveTex_17);
		NullCheck(L_24);
		Texture_set_wrapMode_m918(L_24, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		bool L_25 = (__this->___isSupported_3);
		if (L_25)
		{
			goto IL_011d;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_011d:
	{
		bool L_26 = (__this->___isSupported_3);
		return L_26;
	}
}
// System.Void ColorCorrectionCurves::UpdateParameters()
extern "C" void ColorCorrectionCurves_UpdateParameters_m771 (ColorCorrectionCurves_t183 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		AnimationCurve_t182 * L_0 = (__this->___redChannel_4);
		if (!((((Object_t*)(AnimationCurve_t182 *)L_0) > ((Object_t*)(Object_t *)NULL))? 1 : 0))
		{
			goto IL_0200;
		}
	}
	{
		AnimationCurve_t182 * L_1 = (__this->___greenChannel_5);
		if (!((((Object_t*)(AnimationCurve_t182 *)L_1) > ((Object_t*)(Object_t *)NULL))? 1 : 0))
		{
			goto IL_0200;
		}
	}
	{
		AnimationCurve_t182 * L_2 = (__this->___blueChannel_6);
		if (!((((Object_t*)(AnimationCurve_t182 *)L_2) > ((Object_t*)(Object_t *)NULL))? 1 : 0))
		{
			goto IL_0200;
		}
	}
	{
		V_0 = (((float)0));
		goto IL_01d4;
	}

IL_0032:
	{
		AnimationCurve_t182 * L_3 = (__this->___redChannel_4);
		NullCheck(L_3);
		float L_4 = AnimationCurve_Evaluate_m935(L_3, V_0, /*hidden argument*/&AnimationCurve_Evaluate_m935_MethodInfo);
		float L_5 = Mathf_Clamp_m192(NULL /*static, unused*/, L_4, (((float)0)), (1.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		V_1 = L_5;
		AnimationCurve_t182 * L_6 = (__this->___greenChannel_5);
		NullCheck(L_6);
		float L_7 = AnimationCurve_Evaluate_m935(L_6, V_0, /*hidden argument*/&AnimationCurve_Evaluate_m935_MethodInfo);
		float L_8 = Mathf_Clamp_m192(NULL /*static, unused*/, L_7, (((float)0)), (1.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		V_2 = L_8;
		AnimationCurve_t182 * L_9 = (__this->___blueChannel_6);
		NullCheck(L_9);
		float L_10 = AnimationCurve_Evaluate_m935(L_9, V_0, /*hidden argument*/&AnimationCurve_Evaluate_m935_MethodInfo);
		float L_11 = Mathf_Clamp_m192(NULL /*static, unused*/, L_10, (((float)0)), (1.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		V_3 = L_11;
		Texture2D_t36 * L_12 = (__this->___rgbChannelTex_15);
		float L_13 = floorf(((float)((float)V_0*(float)(255.0f))));
		Color_t29  L_14 = {0};
		Color__ctor_m937(&L_14, V_1, V_1, V_1, /*hidden argument*/&Color__ctor_m937_MethodInfo);
		NullCheck(L_12);
		Texture2D_SetPixel_m938(L_12, (((int32_t)L_13)), 0, L_14, /*hidden argument*/&Texture2D_SetPixel_m938_MethodInfo);
		Texture2D_t36 * L_15 = (__this->___rgbChannelTex_15);
		float L_16 = floorf(((float)((float)V_0*(float)(255.0f))));
		Color_t29  L_17 = {0};
		Color__ctor_m937(&L_17, V_2, V_2, V_2, /*hidden argument*/&Color__ctor_m937_MethodInfo);
		NullCheck(L_15);
		Texture2D_SetPixel_m938(L_15, (((int32_t)L_16)), 1, L_17, /*hidden argument*/&Texture2D_SetPixel_m938_MethodInfo);
		Texture2D_t36 * L_18 = (__this->___rgbChannelTex_15);
		float L_19 = floorf(((float)((float)V_0*(float)(255.0f))));
		Color_t29  L_20 = {0};
		Color__ctor_m937(&L_20, V_3, V_3, V_3, /*hidden argument*/&Color__ctor_m937_MethodInfo);
		NullCheck(L_18);
		Texture2D_SetPixel_m938(L_18, (((int32_t)L_19)), 2, L_20, /*hidden argument*/&Texture2D_SetPixel_m938_MethodInfo);
		AnimationCurve_t182 * L_21 = (__this->___zCurve_8);
		NullCheck(L_21);
		float L_22 = AnimationCurve_Evaluate_m935(L_21, V_0, /*hidden argument*/&AnimationCurve_Evaluate_m935_MethodInfo);
		float L_23 = Mathf_Clamp_m192(NULL /*static, unused*/, L_22, (((float)0)), (1.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		V_4 = L_23;
		Texture2D_t36 * L_24 = (__this->___zCurveTex_17);
		float L_25 = floorf(((float)((float)V_0*(float)(255.0f))));
		Color_t29  L_26 = {0};
		Color__ctor_m937(&L_26, V_4, V_4, V_4, /*hidden argument*/&Color__ctor_m937_MethodInfo);
		NullCheck(L_24);
		Texture2D_SetPixel_m938(L_24, (((int32_t)L_25)), 0, L_26, /*hidden argument*/&Texture2D_SetPixel_m938_MethodInfo);
		AnimationCurve_t182 * L_27 = (__this->___depthRedChannel_9);
		NullCheck(L_27);
		float L_28 = AnimationCurve_Evaluate_m935(L_27, V_0, /*hidden argument*/&AnimationCurve_Evaluate_m935_MethodInfo);
		float L_29 = Mathf_Clamp_m192(NULL /*static, unused*/, L_28, (((float)0)), (1.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		V_1 = L_29;
		AnimationCurve_t182 * L_30 = (__this->___depthGreenChannel_10);
		NullCheck(L_30);
		float L_31 = AnimationCurve_Evaluate_m935(L_30, V_0, /*hidden argument*/&AnimationCurve_Evaluate_m935_MethodInfo);
		float L_32 = Mathf_Clamp_m192(NULL /*static, unused*/, L_31, (((float)0)), (1.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		V_2 = L_32;
		AnimationCurve_t182 * L_33 = (__this->___depthBlueChannel_11);
		NullCheck(L_33);
		float L_34 = AnimationCurve_Evaluate_m935(L_33, V_0, /*hidden argument*/&AnimationCurve_Evaluate_m935_MethodInfo);
		float L_35 = Mathf_Clamp_m192(NULL /*static, unused*/, L_34, (((float)0)), (1.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		V_3 = L_35;
		Texture2D_t36 * L_36 = (__this->___rgbDepthChannelTex_16);
		float L_37 = floorf(((float)((float)V_0*(float)(255.0f))));
		Color_t29  L_38 = {0};
		Color__ctor_m937(&L_38, V_1, V_1, V_1, /*hidden argument*/&Color__ctor_m937_MethodInfo);
		NullCheck(L_36);
		Texture2D_SetPixel_m938(L_36, (((int32_t)L_37)), 0, L_38, /*hidden argument*/&Texture2D_SetPixel_m938_MethodInfo);
		Texture2D_t36 * L_39 = (__this->___rgbDepthChannelTex_16);
		float L_40 = floorf(((float)((float)V_0*(float)(255.0f))));
		Color_t29  L_41 = {0};
		Color__ctor_m937(&L_41, V_2, V_2, V_2, /*hidden argument*/&Color__ctor_m937_MethodInfo);
		NullCheck(L_39);
		Texture2D_SetPixel_m938(L_39, (((int32_t)L_40)), 1, L_41, /*hidden argument*/&Texture2D_SetPixel_m938_MethodInfo);
		Texture2D_t36 * L_42 = (__this->___rgbDepthChannelTex_16);
		float L_43 = floorf(((float)((float)V_0*(float)(255.0f))));
		Color_t29  L_44 = {0};
		Color__ctor_m937(&L_44, V_3, V_3, V_3, /*hidden argument*/&Color__ctor_m937_MethodInfo);
		NullCheck(L_42);
		Texture2D_SetPixel_m938(L_42, (((int32_t)L_43)), 2, L_44, /*hidden argument*/&Texture2D_SetPixel_m938_MethodInfo);
		V_0 = ((float)((float)V_0+(float)(0.003921569f)));
	}

IL_01d4:
	{
		if ((((float)V_0) <= ((float)(1.0f))))
		{
			goto IL_0032;
		}
	}
	{
		Texture2D_t36 * L_45 = (__this->___rgbChannelTex_15);
		NullCheck(L_45);
		Texture2D_Apply_m939(L_45, /*hidden argument*/&Texture2D_Apply_m939_MethodInfo);
		Texture2D_t36 * L_46 = (__this->___rgbDepthChannelTex_16);
		NullCheck(L_46);
		Texture2D_Apply_m939(L_46, /*hidden argument*/&Texture2D_Apply_m939_MethodInfo);
		Texture2D_t36 * L_47 = (__this->___zCurveTex_17);
		NullCheck(L_47);
		Texture2D_Apply_m939(L_47, /*hidden argument*/&Texture2D_Apply_m939_MethodInfo);
	}

IL_0200:
	{
		return;
	}
}
// System.Void ColorCorrectionCurves::UpdateTextures()
extern MethodInfo ColorCorrectionCurves_UpdateTextures_m772_MethodInfo;
extern "C" void ColorCorrectionCurves_UpdateTextures_m772 (ColorCorrectionCurves_t183 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&ColorCorrectionCurves_UpdateParameters_m771_MethodInfo, __this);
		return;
	}
}
// System.Void ColorCorrectionCurves::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo ColorCorrectionCurves_OnRenderImage_m773_MethodInfo;
extern "C" void ColorCorrectionCurves_OnRenderImage_m773 (ColorCorrectionCurves_t183 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	RenderTexture_t21 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&ColorCorrectionCurves_CheckResources_m770_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_0169;
	}

IL_0017:
	{
		bool L_1 = (__this->___updateTexturesOnStartup_27);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(&ColorCorrectionCurves_UpdateParameters_m771_MethodInfo, __this);
		__this->___updateTexturesOnStartup_27 = 0;
	}

IL_002f:
	{
		bool L_2 = (__this->___useDepthCorrection_7);
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		Camera_t56 * L_3 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_4 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = Camera_get_depthTextureMode_m216(L_4, /*hidden argument*/&Camera_get_depthTextureMode_m216_MethodInfo);
		NullCheck(L_3);
		Camera_set_depthTextureMode_m217(L_3, ((int32_t)((int32_t)L_5|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m217_MethodInfo);
	}

IL_0052:
	{
		V_0 = ___destination;
		bool L_6 = (__this->___selectiveCc_19);
		if (!L_6)
		{
			goto IL_0071;
		}
	}
	{
		NullCheck(___source);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_9 = RenderTexture_GetTemporary_m189(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&RenderTexture_GetTemporary_m189_MethodInfo);
		V_0 = L_9;
	}

IL_0071:
	{
		bool L_10 = (__this->___useDepthCorrection_7);
		if (!L_10)
		{
			goto IL_00e6;
		}
	}
	{
		Material_t19 * L_11 = (__this->___ccDepthMaterial_13);
		Texture2D_t36 * L_12 = (__this->___rgbChannelTex_15);
		NullCheck(L_11);
		Material_SetTexture_m186(L_11, (String_t*) &_stringLiteral248, L_12, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_13 = (__this->___ccDepthMaterial_13);
		Texture2D_t36 * L_14 = (__this->___zCurveTex_17);
		NullCheck(L_13);
		Material_SetTexture_m186(L_13, (String_t*) &_stringLiteral249, L_14, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_15 = (__this->___ccDepthMaterial_13);
		Texture2D_t36 * L_16 = (__this->___rgbDepthChannelTex_16);
		NullCheck(L_15);
		Material_SetTexture_m186(L_15, (String_t*) &_stringLiteral250, L_16, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_17 = (__this->___ccDepthMaterial_13);
		float L_18 = (__this->___saturation_18);
		NullCheck(L_17);
		Material_SetFloat_m195(L_17, (String_t*) &_stringLiteral218, L_18, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_19 = (__this->___ccDepthMaterial_13);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, V_0, L_19, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		goto IL_011f;
	}

IL_00e6:
	{
		Material_t19 * L_20 = (__this->___ccMaterial_12);
		Texture2D_t36 * L_21 = (__this->___rgbChannelTex_15);
		NullCheck(L_20);
		Material_SetTexture_m186(L_20, (String_t*) &_stringLiteral248, L_21, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_22 = (__this->___ccMaterial_12);
		float L_23 = (__this->___saturation_18);
		NullCheck(L_22);
		Material_SetFloat_m195(L_22, (String_t*) &_stringLiteral218, L_23, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_24 = (__this->___ccMaterial_12);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, V_0, L_24, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
	}

IL_011f:
	{
		bool L_25 = (__this->___selectiveCc_19);
		if (!L_25)
		{
			goto IL_0169;
		}
	}
	{
		Material_t19 * L_26 = (__this->___selectiveCcMaterial_14);
		Color_t29  L_27 = (__this->___selectiveFromColor_20);
		NullCheck(L_26);
		Material_SetColor_m940(L_26, (String_t*) &_stringLiteral251, L_27, /*hidden argument*/&Material_SetColor_m940_MethodInfo);
		Material_t19 * L_28 = (__this->___selectiveCcMaterial_14);
		Color_t29  L_29 = (__this->___selectiveToColor_21);
		NullCheck(L_28);
		Material_SetColor_m940(L_28, (String_t*) &_stringLiteral252, L_29, /*hidden argument*/&Material_SetColor_m940_MethodInfo);
		Material_t19 * L_30 = (__this->___selectiveCcMaterial_14);
		Graphics_Blit_m187(NULL /*static, unused*/, V_0, ___destination, L_30, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_0, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_0169:
	{
		return;
	}
}
// System.Void ColorCorrectionCurves::Main()
extern MethodInfo ColorCorrectionCurves_Main_m774_MethodInfo;
extern "C" void ColorCorrectionCurves_Main_m774 (ColorCorrectionCurves_t183 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// ColorCorrectionLut
#include "AssemblyU2DUnityScriptU2Dfirstpass_ColorCorrectionLut.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ColorCorrectionLut_t185_il2cpp_TypeInfo;
// ColorCorrectionLut
#include "AssemblyU2DUnityScriptU2Dfirstpass_ColorCorrectionLutMethodDeclarations.h"

// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3D.h"
#include "UnityEngine_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpace.h"
extern TypeInfo ColorU5BU5D_t219_il2cpp_TypeInfo;
extern TypeInfo Texture3D_t184_il2cpp_TypeInfo;
extern TypeInfo Texture_t22_il2cpp_TypeInfo;
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3DMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"
extern Il2CppType ColorU5BU5D_t219_0_0_0;
extern MethodInfo Texture3D__ctor_m941_MethodInfo;
extern MethodInfo Texture3D_SetPixels_m942_MethodInfo;
extern MethodInfo Texture3D_Apply_m943_MethodInfo;
extern MethodInfo Texture_get_height_m211_MethodInfo;
extern MethodInfo Texture_get_width_m209_MethodInfo;
extern MethodInfo Mathf_Sqrt_m944_MethodInfo;
extern MethodInfo Mathf_FloorToInt_m625_MethodInfo;
extern MethodInfo ColorCorrectionLut_ValidDimensions_m780_MethodInfo;
extern MethodInfo Debug_LogWarning_m945_MethodInfo;
extern MethodInfo Texture2D_GetPixels_m946_MethodInfo;
extern MethodInfo Array_get_Length_m947_MethodInfo;
extern MethodInfo Debug_LogError_m948_MethodInfo;
extern MethodInfo ColorCorrectionLut_CheckResources_m776_MethodInfo;
extern MethodInfo ColorCorrectionLut_SetIdentityLut_m779_MethodInfo;
extern MethodInfo QualitySettings_get_activeColorSpace_m949_MethodInfo;


// System.Void ColorCorrectionLut::.ctor()
extern MethodInfo ColorCorrectionLut__ctor_m775_MethodInfo;
extern "C" void ColorCorrectionLut__ctor_m775 (ColorCorrectionLut_t185 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		__this->___basedOnTempTex_7 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		return;
	}
}
// System.Boolean ColorCorrectionLut::CheckResources()
extern "C" bool ColorCorrectionLut_CheckResources_m776 (ColorCorrectionLut_t185 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		Shader_t18 * L_0 = (__this->___shader_4);
		Material_t19 * L_1 = (__this->___material_5);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___material_5 = L_2;
		bool L_3 = (__this->___isSupported_3);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0031:
	{
		bool L_4 = (__this->___isSupported_3);
		return L_4;
	}
}
// System.Void ColorCorrectionLut::OnDisable()
extern MethodInfo ColorCorrectionLut_OnDisable_m777_MethodInfo;
extern "C" void ColorCorrectionLut_OnDisable_m777 (ColorCorrectionLut_t185 * __this, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___material_5);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Material_t19 * L_2 = (__this->___material_5);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
		__this->___material_5 = (Material_t19 *)NULL;
	}

IL_0022:
	{
		return;
	}
}
// System.Void ColorCorrectionLut::OnDestroy()
extern MethodInfo ColorCorrectionLut_OnDestroy_m778_MethodInfo;
extern "C" void ColorCorrectionLut_OnDestroy_m778 (ColorCorrectionLut_t185 * __this, MethodInfo* method)
{
	{
		Texture3D_t184 * L_0 = (__this->___converted3DLut_6);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Texture3D_t184 * L_2 = (__this->___converted3DLut_6);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
	}

IL_001b:
	{
		__this->___converted3DLut_6 = (Texture3D_t184 *)NULL;
		return;
	}
}
// System.Void ColorCorrectionLut::SetIdentityLut()
extern TypeInfo* ColorU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void ColorCorrectionLut_SetIdentityLut_m779 (ColorCorrectionLut_t185 * __this, MethodInfo* method)
{
	static bool ColorCorrectionLut_SetIdentityLut_m779_init;
	if (!ColorCorrectionLut_SetIdentityLut_m779_init)
	{
		ColorU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ColorU5BU5D_t219_0_0_0);
		ColorCorrectionLut_SetIdentityLut_m779_init = true;
	}
	int32_t V_0 = 0;
	ColorU5BU5D_t219* V_1 = {0};
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = ((int32_t)16);
		V_1 = ((ColorU5BU5D_t219*)SZArrayNew(ColorU5BU5D_t219_il2cpp_TypeInfo_var, ((int32_t)((int32_t)((int32_t)((int32_t)V_0*(int32_t)V_0))*(int32_t)V_0))));
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)(1.0f)*(float)(((float)V_0))))-(float)(1.0f)))));
		V_3 = 0;
		goto IL_009c;
	}

IL_002a:
	{
		V_4 = 0;
		goto IL_0090;
	}

IL_0032:
	{
		V_5 = 0;
		goto IL_0082;
	}

IL_003a:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, ((int32_t)((int32_t)((int32_t)((int32_t)V_3+(int32_t)((int32_t)((int32_t)V_4*(int32_t)V_0))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_5*(int32_t)V_0))*(int32_t)V_0)))));
		Color_t29  L_0 = {0};
		Color__ctor_m196(&L_0, ((float)((float)((float)((float)(((float)V_3))*(float)(1.0f)))*(float)V_2)), ((float)((float)((float)((float)(((float)V_4))*(float)(1.0f)))*(float)V_2)), ((float)((float)((float)((float)(((float)V_5))*(float)(1.0f)))*(float)V_2)), (1.0f), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		*((Color_t29 *)(Color_t29 *)SZArrayLdElema(V_1, ((int32_t)((int32_t)((int32_t)((int32_t)V_3+(int32_t)((int32_t)((int32_t)V_4*(int32_t)V_0))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_5*(int32_t)V_0))*(int32_t)V_0)))))) = L_0;
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_0082:
	{
		if ((((int32_t)V_5) < ((int32_t)V_0)))
		{
			goto IL_003a;
		}
	}
	{
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
	}

IL_0090:
	{
		if ((((int32_t)V_4) < ((int32_t)V_0)))
		{
			goto IL_0032;
		}
	}
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_009c:
	{
		if ((((int32_t)V_3) < ((int32_t)V_0)))
		{
			goto IL_002a;
		}
	}
	{
		Texture3D_t184 * L_1 = (__this->___converted3DLut_6);
		bool L_2 = Object_op_Implicit_m173(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_2)
		{
			goto IL_00be;
		}
	}
	{
		Texture3D_t184 * L_3 = (__this->___converted3DLut_6);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
	}

IL_00be:
	{
		Texture3D_t184 * L_4 = (Texture3D_t184 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture3D_t184_il2cpp_TypeInfo));
		Texture3D__ctor_m941(L_4, V_0, V_0, V_0, 5, 0, /*hidden argument*/&Texture3D__ctor_m941_MethodInfo);
		__this->___converted3DLut_6 = L_4;
		Texture3D_t184 * L_5 = (__this->___converted3DLut_6);
		NullCheck(L_5);
		Texture3D_SetPixels_m942(L_5, V_1, /*hidden argument*/&Texture3D_SetPixels_m942_MethodInfo);
		Texture3D_t184 * L_6 = (__this->___converted3DLut_6);
		NullCheck(L_6);
		Texture3D_Apply_m943(L_6, /*hidden argument*/&Texture3D_Apply_m943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		__this->___basedOnTempTex_7 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		return;
	}
}
// System.Boolean ColorCorrectionLut::ValidDimensions(UnityEngine.Texture2D)
extern "C" bool ColorCorrectionLut_ValidDimensions_m780 (ColorCorrectionLut_t185 * __this, Texture2D_t36 * ___tex2d, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		bool L_0 = Object_op_Implicit_m173(NULL /*static, unused*/, ___tex2d, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0036;
	}

IL_0011:
	{
		NullCheck(___tex2d);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_height_m211_MethodInfo, ___tex2d);
		V_0 = L_1;
		NullCheck(___tex2d);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_width_m209_MethodInfo, ___tex2d);
		float L_3 = sqrtf((((float)L_2)));
		int32_t L_4 = Mathf_FloorToInt_m625(NULL /*static, unused*/, L_3, /*hidden argument*/&Mathf_FloorToInt_m625_MethodInfo);
		if ((((int32_t)V_0) == ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 1;
	}

IL_0036:
	{
		return G_B5_0;
	}
}
// System.Void ColorCorrectionLut::Convert(UnityEngine.Texture2D,System.String)
extern MethodInfo ColorCorrectionLut_Convert_m781_MethodInfo;
extern TypeInfo* ColorU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void ColorCorrectionLut_Convert_m781 (ColorCorrectionLut_t185 * __this, Texture2D_t36 * ___temp2DTex, String_t* ___path, MethodInfo* method)
{
	static bool ColorCorrectionLut_Convert_m781_init;
	if (!ColorCorrectionLut_Convert_m781_init)
	{
		ColorU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ColorU5BU5D_t219_0_0_0);
		ColorCorrectionLut_Convert_m781_init = true;
	}
	int32_t V_0 = 0;
	ColorU5BU5D_t219* V_1 = {0};
	ColorU5BU5D_t219* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		bool L_0 = Object_op_Implicit_m173(NULL /*static, unused*/, ___temp2DTex, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_0)
		{
			goto IL_0132;
		}
	}
	{
		NullCheck(___temp2DTex);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_width_m209_MethodInfo, ___temp2DTex);
		NullCheck(___temp2DTex);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_height_m211_MethodInfo, ___temp2DTex);
		V_0 = ((int32_t)((int32_t)L_1*(int32_t)L_2));
		NullCheck(___temp2DTex);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_height_m211_MethodInfo, ___temp2DTex);
		V_0 = L_3;
		bool L_4 = (bool)VirtFuncInvoker1< bool, Texture2D_t36 * >::Invoke(&ColorCorrectionLut_ValidDimensions_m780_MethodInfo, __this, ___temp2DTex);
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		NullCheck(___temp2DTex);
		String_t* L_5 = Object_get_name_m618(___temp2DTex, /*hidden argument*/&Object_get_name_m618_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		String_t* L_6 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral253, L_5, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_7 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral254, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		Debug_LogWarning_m945(NULL /*static, unused*/, L_7, /*hidden argument*/&Debug_LogWarning_m945_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		__this->___basedOnTempTex_7 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		goto IL_013c;
	}

IL_005b:
	{
		NullCheck(___temp2DTex);
		ColorU5BU5D_t219* L_8 = Texture2D_GetPixels_m946(___temp2DTex, /*hidden argument*/&Texture2D_GetPixels_m946_MethodInfo);
		V_1 = L_8;
		NullCheck(V_1);
		int32_t L_9 = Array_get_Length_m947(V_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		V_2 = ((ColorU5BU5D_t219*)SZArrayNew(ColorU5BU5D_t219_il2cpp_TypeInfo_var, L_9));
		V_3 = 0;
		goto IL_00dd;
	}

IL_0075:
	{
		V_4 = 0;
		goto IL_00d1;
	}

IL_007d:
	{
		V_5 = 0;
		goto IL_00c3;
	}

IL_0085:
	{
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)V_0-(int32_t)V_4))-(int32_t)1));
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, ((int32_t)((int32_t)((int32_t)((int32_t)V_3+(int32_t)((int32_t)((int32_t)V_4*(int32_t)V_0))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_5*(int32_t)V_0))*(int32_t)V_0)))));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_5*(int32_t)V_0))+(int32_t)V_3))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_6*(int32_t)V_0))*(int32_t)V_0)))));
		*((Color_t29 *)(Color_t29 *)SZArrayLdElema(V_2, ((int32_t)((int32_t)((int32_t)((int32_t)V_3+(int32_t)((int32_t)((int32_t)V_4*(int32_t)V_0))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_5*(int32_t)V_0))*(int32_t)V_0)))))) = (*(Color_t29 *)((Color_t29 *)(Color_t29 *)SZArrayLdElema(V_1, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_5*(int32_t)V_0))+(int32_t)V_3))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_6*(int32_t)V_0))*(int32_t)V_0)))))));
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_00c3:
	{
		if ((((int32_t)V_5) < ((int32_t)V_0)))
		{
			goto IL_0085;
		}
	}
	{
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
	}

IL_00d1:
	{
		if ((((int32_t)V_4) < ((int32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)1));
	}

IL_00dd:
	{
		if ((((int32_t)V_3) < ((int32_t)V_0)))
		{
			goto IL_0075;
		}
	}
	{
		Texture3D_t184 * L_10 = (__this->___converted3DLut_6);
		bool L_11 = Object_op_Implicit_m173(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_11)
		{
			goto IL_00ff;
		}
	}
	{
		Texture3D_t184 * L_12 = (__this->___converted3DLut_6);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_12, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
	}

IL_00ff:
	{
		Texture3D_t184 * L_13 = (Texture3D_t184 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture3D_t184_il2cpp_TypeInfo));
		Texture3D__ctor_m941(L_13, V_0, V_0, V_0, 5, 0, /*hidden argument*/&Texture3D__ctor_m941_MethodInfo);
		__this->___converted3DLut_6 = L_13;
		Texture3D_t184 * L_14 = (__this->___converted3DLut_6);
		NullCheck(L_14);
		Texture3D_SetPixels_m942(L_14, V_2, /*hidden argument*/&Texture3D_SetPixels_m942_MethodInfo);
		Texture3D_t184 * L_15 = (__this->___converted3DLut_6);
		NullCheck(L_15);
		Texture3D_Apply_m943(L_15, /*hidden argument*/&Texture3D_Apply_m943_MethodInfo);
		__this->___basedOnTempTex_7 = ___path;
		goto IL_013c;
	}

IL_0132:
	{
		Debug_LogError_m948(NULL /*static, unused*/, (String_t*) &_stringLiteral255, /*hidden argument*/&Debug_LogError_m948_MethodInfo);
	}

IL_013c:
	{
		return;
	}
}
// System.Void ColorCorrectionLut::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo ColorCorrectionLut_OnRenderImage_m782_MethodInfo;
extern "C" void ColorCorrectionLut_OnRenderImage_m782 (ColorCorrectionLut_t185 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	int32_t V_0 = 0;
	Material_t19 * G_B6_0 = {0};
	RenderTexture_t21 * G_B6_1 = {0};
	RenderTexture_t21 * G_B6_2 = {0};
	Material_t19 * G_B5_0 = {0};
	RenderTexture_t21 * G_B5_1 = {0};
	RenderTexture_t21 * G_B5_2 = {0};
	int32_t G_B7_0 = 0;
	Material_t19 * G_B7_1 = {0};
	RenderTexture_t21 * G_B7_2 = {0};
	RenderTexture_t21 * G_B7_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&ColorCorrectionLut_CheckResources_m776_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_00b6;
	}

IL_0017:
	{
		Texture3D_t184 * L_1 = (__this->___converted3DLut_6);
		bool L_2 = Object_op_Equality_m164(NULL /*static, unused*/, L_1, (Object_t50 *)NULL, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&ColorCorrectionLut_SetIdentityLut_m779_MethodInfo, __this);
	}

IL_002e:
	{
		Texture3D_t184 * L_3 = (__this->___converted3DLut_6);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_width_m209_MethodInfo, L_3);
		V_0 = L_4;
		Texture3D_t184 * L_5 = (__this->___converted3DLut_6);
		NullCheck(L_5);
		Texture_set_wrapMode_m918(L_5, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		Material_t19 * L_6 = (__this->___material_5);
		NullCheck(L_6);
		Material_SetFloat_m195(L_6, (String_t*) &_stringLiteral256, ((float)((float)(((float)((int32_t)((int32_t)V_0-(int32_t)1))))/(float)((float)((float)(1.0f)*(float)(((float)V_0)))))), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_7 = (__this->___material_5);
		NullCheck(L_7);
		Material_SetFloat_m195(L_7, (String_t*) &_stringLiteral257, ((float)((float)(1.0f)/(float)((float)((float)(2.0f)*(float)(((float)V_0)))))), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_8 = (__this->___material_5);
		Texture3D_t184 * L_9 = (__this->___converted3DLut_6);
		NullCheck(L_8);
		Material_SetTexture_m186(L_8, (String_t*) &_stringLiteral258, L_9, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_10 = (__this->___material_5);
		int32_t L_11 = QualitySettings_get_activeColorSpace_m949(NULL /*static, unused*/, /*hidden argument*/&QualitySettings_get_activeColorSpace_m949_MethodInfo);
		G_B5_0 = L_10;
		G_B5_1 = ___destination;
		G_B5_2 = ___source;
		if ((((uint32_t)L_11) != ((uint32_t)1)))
		{
			G_B6_0 = L_10;
			G_B6_1 = ___destination;
			G_B6_2 = ___source;
			goto IL_00b0;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_00b1:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B7_3, G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_00b6:
	{
		return;
	}
}
// System.Void ColorCorrectionLut::Main()
extern MethodInfo ColorCorrectionLut_Main_m783_MethodInfo;
extern "C" void ColorCorrectionLut_Main_m783 (ColorCorrectionLut_t185 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// ContrastEnhance
#include "AssemblyU2DUnityScriptU2Dfirstpass_ContrastEnhance.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ContrastEnhance_t186_il2cpp_TypeInfo;
// ContrastEnhance
#include "AssemblyU2DUnityScriptU2Dfirstpass_ContrastEnhanceMethodDeclarations.h"

extern MethodInfo ContrastEnhance_CheckResources_m785_MethodInfo;
extern MethodInfo RenderTexture_GetTemporary_m183_MethodInfo;


// System.Void ContrastEnhance::.ctor()
extern MethodInfo ContrastEnhance__ctor_m784_MethodInfo;
extern "C" void ContrastEnhance__ctor_m784 (ContrastEnhance_t186 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___intensity_4 = (0.5f);
		__this->___blurSpread_8 = (1.0f);
		return;
	}
}
// System.Boolean ContrastEnhance::CheckResources()
extern "C" bool ContrastEnhance_CheckResources_m785 (ContrastEnhance_t186 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		Shader_t18 * L_0 = (__this->___contrastCompositeShader_10);
		Material_t19 * L_1 = (__this->___contrastCompositeMaterial_7);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___contrastCompositeMaterial_7 = L_2;
		Shader_t18 * L_3 = (__this->___separableBlurShader_9);
		Material_t19 * L_4 = (__this->___separableBlurMaterial_6);
		Material_t19 * L_5 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_3, L_4);
		__this->___separableBlurMaterial_6 = L_5;
		bool L_6 = (__this->___isSupported_3);
		if (L_6)
		{
			goto IL_0049;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0049:
	{
		bool L_7 = (__this->___isSupported_3);
		return L_7;
	}
}
// System.Void ContrastEnhance::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo ContrastEnhance_OnRenderImage_m786_MethodInfo;
extern "C" void ContrastEnhance_OnRenderImage_m786 (ContrastEnhance_t186 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	RenderTexture_t21 * V_0 = {0};
	RenderTexture_t21 * V_1 = {0};
	RenderTexture_t21 * V_2 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&ContrastEnhance_CheckResources_m785_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_0162;
	}

IL_0017:
	{
		NullCheck(___source);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_3 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_1))/(float)(2.0f))))), (((int32_t)((float)((float)(((float)L_2))/(float)(2.0f))))), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_0 = L_3;
		NullCheck(___source);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_6 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_4))/(float)(4.0f))))), (((int32_t)((float)((float)(((float)L_5))/(float)(4.0f))))), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_1 = L_6;
		NullCheck(___source);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_9 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_7))/(float)(4.0f))))), (((int32_t)((float)((float)(((float)L_8))/(float)(4.0f))))), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_2 = L_9;
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, V_0, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		Graphics_Blit_m184(NULL /*static, unused*/, V_0, V_1, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		Material_t19 * L_10 = (__this->___separableBlurMaterial_6);
		float L_11 = (__this->___blurSpread_8);
		NullCheck(V_1);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, V_1);
		Vector4_t52  L_13 = {0};
		Vector4__ctor_m193(&L_13, (((float)0)), ((float)((float)((float)((float)L_11*(float)(1.0f)))/(float)(((float)L_12)))), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_10);
		Material_SetVector_m194(L_10, (String_t*) &_stringLiteral225, L_13, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_14 = (__this->___separableBlurMaterial_6);
		Graphics_Blit_m187(NULL /*static, unused*/, V_1, V_2, L_14, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		Material_t19 * L_15 = (__this->___separableBlurMaterial_6);
		float L_16 = (__this->___blurSpread_8);
		NullCheck(V_1);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_1);
		Vector4_t52  L_18 = {0};
		Vector4__ctor_m193(&L_18, ((float)((float)((float)((float)L_16*(float)(1.0f)))/(float)(((float)L_17)))), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_15);
		Material_SetVector_m194(L_15, (String_t*) &_stringLiteral225, L_18, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_19 = (__this->___separableBlurMaterial_6);
		Graphics_Blit_m187(NULL /*static, unused*/, V_2, V_1, L_19, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		Material_t19 * L_20 = (__this->___contrastCompositeMaterial_7);
		NullCheck(L_20);
		Material_SetTexture_m186(L_20, (String_t*) &_stringLiteral259, V_1, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_21 = (__this->___contrastCompositeMaterial_7);
		float L_22 = (__this->___intensity_4);
		NullCheck(L_21);
		Material_SetFloat_m195(L_21, (String_t*) &_stringLiteral260, L_22, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_23 = (__this->___contrastCompositeMaterial_7);
		float L_24 = (__this->___threshhold_5);
		NullCheck(L_23);
		Material_SetFloat_m195(L_23, (String_t*) &_stringLiteral228, L_24, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_25 = (__this->___contrastCompositeMaterial_7);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, ___destination, L_25, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_0, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_1, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_2, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_0162:
	{
		return;
	}
}
// System.Void ContrastEnhance::Main()
extern MethodInfo ContrastEnhance_Main_m787_MethodInfo;
extern "C" void ContrastEnhance_Main_m787 (ContrastEnhance_t186 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Crease
#include "AssemblyU2DUnityScriptU2Dfirstpass_Crease.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Crease_t187_il2cpp_TypeInfo;
// Crease
#include "AssemblyU2DUnityScriptU2Dfirstpass_CreaseMethodDeclarations.h"

extern MethodInfo Crease_CheckResources_m789_MethodInfo;


// System.Void Crease::.ctor()
extern MethodInfo Crease__ctor_m788_MethodInfo;
extern "C" void Crease__ctor_m788 (Crease_t187 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___intensity_4 = (0.5f);
		__this->___softness_5 = 1;
		__this->___spread_6 = (1.0f);
		return;
	}
}
// System.Boolean Crease::CheckResources()
extern "C" bool Crease_CheckResources_m789 (Crease_t187 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 1);
		Shader_t18 * L_0 = (__this->___blurShader_7);
		Material_t19 * L_1 = (__this->___blurMaterial_8);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___blurMaterial_8 = L_2;
		Shader_t18 * L_3 = (__this->___depthFetchShader_9);
		Material_t19 * L_4 = (__this->___depthFetchMaterial_10);
		Material_t19 * L_5 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_3, L_4);
		__this->___depthFetchMaterial_10 = L_5;
		Shader_t18 * L_6 = (__this->___creaseApplyShader_11);
		Material_t19 * L_7 = (__this->___creaseApplyMaterial_12);
		Material_t19 * L_8 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_6, L_7);
		__this->___creaseApplyMaterial_12 = L_8;
		bool L_9 = (__this->___isSupported_3);
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0061:
	{
		bool L_10 = (__this->___isSupported_3);
		return L_10;
	}
}
// System.Void Crease::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo Crease_OnRenderImage_m790_MethodInfo;
extern "C" void Crease_OnRenderImage_m790 (Crease_t187 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	RenderTexture_t21 * V_2 = {0};
	RenderTexture_t21 * V_3 = {0};
	RenderTexture_t21 * V_4 = {0};
	int32_t V_5 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Crease_CheckResources_m789_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_0166;
	}

IL_0017:
	{
		NullCheck(___source);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		V_0 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_1))))/(float)((float)((float)(1.0f)*(float)(((float)L_2))))));
		V_1 = (0.001953125f);
		NullCheck(___source);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_5 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, L_3, L_4, 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_2 = L_5;
		NullCheck(___source);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_8 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, ((int32_t)((int32_t)L_6/(int32_t)2)), ((int32_t)((int32_t)L_7/(int32_t)2)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_3 = L_8;
		NullCheck(___source);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_11 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, ((int32_t)((int32_t)L_9/(int32_t)2)), ((int32_t)((int32_t)L_10/(int32_t)2)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_4 = L_11;
		Material_t19 * L_12 = (__this->___depthFetchMaterial_10);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, V_2, L_12, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		Graphics_Blit_m184(NULL /*static, unused*/, V_2, V_3, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		V_5 = 0;
		goto IL_0101;
	}

IL_0097:
	{
		Material_t19 * L_13 = (__this->___blurMaterial_8);
		float L_14 = (__this->___spread_6);
		Vector4_t52  L_15 = {0};
		Vector4__ctor_m193(&L_15, (((float)0)), ((float)((float)L_14*(float)V_1)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_13);
		Material_SetVector_m194(L_13, (String_t*) &_stringLiteral225, L_15, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_16 = (__this->___blurMaterial_8);
		Graphics_Blit_m187(NULL /*static, unused*/, V_3, V_4, L_16, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		Material_t19 * L_17 = (__this->___blurMaterial_8);
		float L_18 = (__this->___spread_6);
		Vector4_t52  L_19 = {0};
		Vector4__ctor_m193(&L_19, ((float)((float)((float)((float)L_18*(float)V_1))/(float)V_0)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_17);
		Material_SetVector_m194(L_17, (String_t*) &_stringLiteral225, L_19, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_20 = (__this->___blurMaterial_8);
		Graphics_Blit_m187(NULL /*static, unused*/, V_4, V_3, L_20, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_0101:
	{
		int32_t L_21 = (__this->___softness_5);
		if ((((int32_t)V_5) < ((int32_t)L_21)))
		{
			goto IL_0097;
		}
	}
	{
		Material_t19 * L_22 = (__this->___creaseApplyMaterial_12);
		NullCheck(L_22);
		Material_SetTexture_m186(L_22, (String_t*) &_stringLiteral261, V_2, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_23 = (__this->___creaseApplyMaterial_12);
		NullCheck(L_23);
		Material_SetTexture_m186(L_23, (String_t*) &_stringLiteral262, V_3, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_24 = (__this->___creaseApplyMaterial_12);
		float L_25 = (__this->___intensity_4);
		NullCheck(L_24);
		Material_SetFloat_m195(L_24, (String_t*) &_stringLiteral260, L_25, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_26 = (__this->___creaseApplyMaterial_12);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, ___destination, L_26, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_2, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_3, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_4, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_0166:
	{
		return;
	}
}
// System.Void Crease::Main()
extern MethodInfo Crease_Main_m791_MethodInfo;
extern "C" void Crease_Main_m791 (Crease_t187 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Dof34QualitySetting
#include "AssemblyU2DUnityScriptU2Dfirstpass_Dof34QualitySetting.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dof34QualitySetting_t188_il2cpp_TypeInfo;
// Dof34QualitySetting
#include "AssemblyU2DUnityScriptU2Dfirstpass_Dof34QualitySettingMethodDeclarations.h"



// DofResolution
#include "AssemblyU2DUnityScriptU2Dfirstpass_DofResolution.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DofResolution_t189_il2cpp_TypeInfo;
// DofResolution
#include "AssemblyU2DUnityScriptU2Dfirstpass_DofResolutionMethodDeclarations.h"



// DofBlurriness
#include "AssemblyU2DUnityScriptU2Dfirstpass_DofBlurriness.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DofBlurriness_t190_il2cpp_TypeInfo;
// DofBlurriness
#include "AssemblyU2DUnityScriptU2Dfirstpass_DofBlurrinessMethodDeclarations.h"



// BokehDestination
#include "AssemblyU2DUnityScriptU2Dfirstpass_BokehDestination.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BokehDestination_t191_il2cpp_TypeInfo;
// BokehDestination
#include "AssemblyU2DUnityScriptU2Dfirstpass_BokehDestinationMethodDeclarations.h"



// DepthOfField34
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfField34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DepthOfField34_t192_il2cpp_TypeInfo;
// DepthOfField34
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfField34MethodDeclarations.h"

// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
extern TypeInfo Quads_t205_il2cpp_TypeInfo;
extern TypeInfo Single_t57_il2cpp_TypeInfo;
// Quads
#include "AssemblyU2DUnityScriptU2Dfirstpass_QuadsMethodDeclarations.h"
extern MethodInfo Quads_Cleanup_m867_MethodInfo;
extern MethodInfo Camera_get_nearClipPlane_m582_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m950_MethodInfo;
extern MethodInfo Vector3_op_Addition_m602_MethodInfo;
extern MethodInfo Camera_WorldToViewportPoint_m951_MethodInfo;
extern MethodInfo Camera_get_farClipPlane_m219_MethodInfo;
extern MethodInfo DepthOfField34_CheckResources_m795_MethodInfo;
extern MethodInfo DepthOfField34_FocalDistance01_m798_MethodInfo;
extern MethodInfo DepthOfField34_GetDividerBasedOnQuality_m799_MethodInfo;
extern MethodInfo DepthOfField34_GetLowResolutionDividerBasedOnQuality_m800_MethodInfo;
extern MethodInfo DepthOfField34_AllocateTextures_m808_MethodInfo;
extern MethodInfo DepthOfField34_Downsample_m805_MethodInfo;
extern MethodInfo DepthOfField34_Blur_m802_MethodInfo;
extern MethodInfo DepthOfField34_AddBokeh_m806_MethodInfo;
extern MethodInfo DepthOfField34_BlurFg_m803_MethodInfo;
extern MethodInfo DepthOfField34_ReleaseTextures_m807_MethodInfo;
extern MethodInfo DepthOfField34_BlurHex_m804_MethodInfo;
extern MethodInfo Quads_GetMeshes_m868_MethodInfo;
extern MethodInfo RenderTexture_set_active_m952_MethodInfo;
extern MethodInfo GL_Clear_m953_MethodInfo;
extern MethodInfo GL_PushMatrix_m954_MethodInfo;
extern MethodInfo GL_LoadIdentity_m955_MethodInfo;
extern MethodInfo Material_SetPass_m956_MethodInfo;
extern MethodInfo Graphics_DrawMeshNow_m957_MethodInfo;
extern MethodInfo GL_PopMatrix_m958_MethodInfo;


// System.Void DepthOfField34::.ctor()
extern MethodInfo DepthOfField34__ctor_m792_MethodInfo;
extern "C" void DepthOfField34__ctor_m792 (DepthOfField34_t192 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___quality_6 = 1;
		__this->___resolution_7 = 4;
		__this->___simpleTweakMode_8 = 1;
		__this->___focalPoint_9 = (1.0f);
		__this->___smoothness_10 = (0.5f);
		__this->___focalZStartCurve_12 = (1.0f);
		__this->___focalZEndCurve_13 = (1.0f);
		__this->___focalStartCurve_14 = (2.0f);
		__this->___focalEndCurve_15 = (2.0f);
		__this->___focalDistance01_16 = (0.1f);
		__this->___bluriness_19 = 2;
		__this->___maxBlurSpread_20 = (1.75f);
		__this->___foregroundBlurExtrude_21 = (1.15f);
		__this->___bokehDestination_27 = 1;
		__this->___widthOverHeight_28 = (1.25f);
		__this->___oneOverBaseSize_29 = (0.001953125f);
		__this->___bokehSupport_31 = 1;
		__this->___bokehScale_34 = (2.4f);
		__this->___bokehIntensity_35 = (0.15f);
		__this->___bokehThreshholdContrast_36 = (0.1f);
		__this->___bokehThreshholdLuminance_37 = (0.55f);
		__this->___bokehDownsample_38 = 1;
		return;
	}
}
// System.Void DepthOfField34::.cctor()
extern MethodInfo DepthOfField34__cctor_m793_MethodInfo;
extern "C" void DepthOfField34__cctor_m793 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((DepthOfField34_t192_StaticFields*)InitializedTypeInfo(&DepthOfField34_t192_il2cpp_TypeInfo)->static_fields)->___SMOOTH_DOWNSAMPLE_PASS_4 = 6;
		((DepthOfField34_t192_StaticFields*)InitializedTypeInfo(&DepthOfField34_t192_il2cpp_TypeInfo)->static_fields)->___BOKEH_EXTRA_BLUR_5 = (2.0f);
		return;
	}
}
// System.Void DepthOfField34::CreateMaterials()
extern MethodInfo DepthOfField34_CreateMaterials_m794_MethodInfo;
extern "C" void DepthOfField34_CreateMaterials_m794 (DepthOfField34_t192 * __this, MethodInfo* method)
{
	{
		Shader_t18 * L_0 = (__this->___dofBlurShader_22);
		Material_t19 * L_1 = (__this->___dofBlurMaterial_23);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___dofBlurMaterial_23 = L_2;
		Shader_t18 * L_3 = (__this->___dofShader_24);
		Material_t19 * L_4 = (__this->___dofMaterial_25);
		Material_t19 * L_5 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_3, L_4);
		__this->___dofMaterial_25 = L_5;
		Shader_t18 * L_6 = (__this->___bokehShader_32);
		NullCheck(L_6);
		bool L_7 = Shader_get_isSupported_m178(L_6, /*hidden argument*/&Shader_get_isSupported_m178_MethodInfo);
		__this->___bokehSupport_31 = L_7;
		bool L_8 = (__this->___bokeh_30);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		bool L_9 = (__this->___bokehSupport_31);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		Shader_t18 * L_10 = (__this->___bokehShader_32);
		bool L_11 = Object_op_Implicit_m173(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		Shader_t18 * L_12 = (__this->___bokehShader_32);
		Material_t19 * L_13 = (__this->___bokehMaterial_39);
		Material_t19 * L_14 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_12, L_13);
		__this->___bokehMaterial_39 = L_14;
	}

IL_007f:
	{
		return;
	}
}
// System.Boolean DepthOfField34::CheckResources()
extern "C" bool DepthOfField34_CheckResources_m795 (DepthOfField34_t192 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 1);
		Shader_t18 * L_0 = (__this->___dofBlurShader_22);
		Material_t19 * L_1 = (__this->___dofBlurMaterial_23);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___dofBlurMaterial_23 = L_2;
		Shader_t18 * L_3 = (__this->___dofShader_24);
		Material_t19 * L_4 = (__this->___dofMaterial_25);
		Material_t19 * L_5 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_3, L_4);
		__this->___dofMaterial_25 = L_5;
		Shader_t18 * L_6 = (__this->___bokehShader_32);
		NullCheck(L_6);
		bool L_7 = Shader_get_isSupported_m178(L_6, /*hidden argument*/&Shader_get_isSupported_m178_MethodInfo);
		__this->___bokehSupport_31 = L_7;
		bool L_8 = (__this->___bokeh_30);
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		bool L_9 = (__this->___bokehSupport_31);
		if (!L_9)
		{
			goto IL_0087;
		}
	}
	{
		Shader_t18 * L_10 = (__this->___bokehShader_32);
		bool L_11 = Object_op_Implicit_m173(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		Shader_t18 * L_12 = (__this->___bokehShader_32);
		Material_t19 * L_13 = (__this->___bokehMaterial_39);
		Material_t19 * L_14 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_12, L_13);
		__this->___bokehMaterial_39 = L_14;
	}

IL_0087:
	{
		bool L_15 = (__this->___isSupported_3);
		if (L_15)
		{
			goto IL_0098;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0098:
	{
		bool L_16 = (__this->___isSupported_3);
		return L_16;
	}
}
// System.Void DepthOfField34::OnDisable()
extern MethodInfo DepthOfField34_OnDisable_m796_MethodInfo;
extern "C" void DepthOfField34_OnDisable_m796 (DepthOfField34_t192 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		Quads_Cleanup_m867(NULL /*static, unused*/, /*hidden argument*/&Quads_Cleanup_m867_MethodInfo);
		return;
	}
}
// System.Void DepthOfField34::OnEnable()
extern MethodInfo DepthOfField34_OnEnable_m797_MethodInfo;
extern "C" void DepthOfField34_OnEnable_m797 (DepthOfField34_t192 * __this, MethodInfo* method)
{
	{
		Camera_t56 * L_0 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_1 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = Camera_get_depthTextureMode_m216(L_1, /*hidden argument*/&Camera_get_depthTextureMode_m216_MethodInfo);
		NullCheck(L_0);
		Camera_set_depthTextureMode_m217(L_0, ((int32_t)((int32_t)L_2|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m217_MethodInfo);
		return;
	}
}
// System.Single DepthOfField34::FocalDistance01(System.Single)
extern "C" float DepthOfField34_FocalDistance01_m798 (DepthOfField34_t192 * __this, float ___worldDist, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		Camera_t56 * L_0 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_1 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_1);
		float L_2 = Camera_get_nearClipPlane_m582(L_1, /*hidden argument*/&Camera_get_nearClipPlane_m582_MethodInfo);
		Camera_t56 * L_3 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_3);
		Transform_t85 * L_4 = Component_get_transform_m534(L_3, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_4);
		Vector3_t54  L_5 = Transform_get_forward_m635(L_4, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		Vector3_t54  L_6 = Vector3_op_Multiply_m950(NULL /*static, unused*/, ((float)((float)___worldDist-(float)L_2)), L_5, /*hidden argument*/&Vector3_op_Multiply_m950_MethodInfo);
		Camera_t56 * L_7 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_7);
		Transform_t85 * L_8 = Component_get_transform_m534(L_7, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_8);
		Vector3_t54  L_9 = Transform_get_position_m535(L_8, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_10 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		NullCheck(L_0);
		Vector3_t54  L_11 = Camera_WorldToViewportPoint_m951(L_0, L_10, /*hidden argument*/&Camera_WorldToViewportPoint_m951_MethodInfo);
		V_0 = L_11;
		NullCheck((&V_0));
		float L_12 = ((&V_0)->___z_3);
		Camera_t56 * L_13 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_13);
		float L_14 = Camera_get_farClipPlane_m219(L_13, /*hidden argument*/&Camera_get_farClipPlane_m219_MethodInfo);
		Camera_t56 * L_15 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_15);
		float L_16 = Camera_get_nearClipPlane_m582(L_15, /*hidden argument*/&Camera_get_nearClipPlane_m582_MethodInfo);
		return ((float)((float)L_12/(float)((float)((float)L_14-(float)L_16))));
	}
}
// System.Int32 DepthOfField34::GetDividerBasedOnQuality()
extern "C" int32_t DepthOfField34_GetDividerBasedOnQuality_m799 (DepthOfField34_t192 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		int32_t L_0 = (__this->___resolution_7);
		if ((((uint32_t)L_0) != ((uint32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = 2;
		goto IL_0023;
	}

IL_0015:
	{
		int32_t L_1 = (__this->___resolution_7);
		if ((((uint32_t)L_1) != ((uint32_t)4)))
		{
			goto IL_0023;
		}
	}
	{
		V_0 = 2;
	}

IL_0023:
	{
		return V_0;
	}
}
// System.Int32 DepthOfField34::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C" int32_t DepthOfField34_GetLowResolutionDividerBasedOnQuality_m800 (DepthOfField34_t192 * __this, int32_t ___baseDivider, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ___baseDivider;
		int32_t L_0 = (__this->___resolution_7);
		if ((((uint32_t)L_0) != ((uint32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0*(int32_t)2));
	}

IL_0012:
	{
		int32_t L_1 = (__this->___resolution_7);
		if ((((uint32_t)L_1) != ((uint32_t)4)))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = ((int32_t)((int32_t)V_0*(int32_t)2));
	}

IL_0022:
	{
		return V_0;
	}
}
// System.Void DepthOfField34::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo DepthOfField34_OnRenderImage_m801_MethodInfo;
extern "C" void DepthOfField34_OnRenderImage_m801 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector3_t54  V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t54  V_6 = {0};
	bool G_B6_0 = false;
	DepthOfField34_t192 * G_B6_1 = {0};
	bool G_B5_0 = false;
	DepthOfField34_t192 * G_B5_1 = {0};
	float G_B9_0 = 0.0f;
	DepthOfField34_t192 * G_B12_0 = {0};
	DepthOfField34_t192 * G_B11_0 = {0};
	float G_B13_0 = 0.0f;
	DepthOfField34_t192 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	bool G_B14_0 = false;
	int32_t G_B21_0 = 0;
	bool G_B20_0 = false;
	String_t* G_B24_0 = {0};
	Material_t19 * G_B24_1 = {0};
	String_t* G_B23_0 = {0};
	Material_t19 * G_B23_1 = {0};
	float G_B25_0 = 0.0f;
	String_t* G_B25_1 = {0};
	Material_t19 * G_B25_2 = {0};
	float G_B27_0 = 0.0f;
	String_t* G_B27_1 = {0};
	Material_t19 * G_B27_2 = {0};
	float G_B26_0 = 0.0f;
	String_t* G_B26_1 = {0};
	Material_t19 * G_B26_2 = {0};
	float G_B28_0 = 0.0f;
	float G_B28_1 = 0.0f;
	String_t* G_B28_2 = {0};
	Material_t19 * G_B28_3 = {0};
	RenderTexture_t21 * G_B37_0 = {0};
	RenderTexture_t21 * G_B36_0 = {0};
	RenderTexture_t21 * G_B38_0 = {0};
	RenderTexture_t21 * G_B38_1 = {0};
	Material_t19 * G_B40_0 = {0};
	RenderTexture_t21 * G_B40_1 = {0};
	RenderTexture_t21 * G_B40_2 = {0};
	Material_t19 * G_B39_0 = {0};
	RenderTexture_t21 * G_B39_1 = {0};
	RenderTexture_t21 * G_B39_2 = {0};
	int32_t G_B41_0 = 0;
	Material_t19 * G_B41_1 = {0};
	RenderTexture_t21 * G_B41_2 = {0};
	RenderTexture_t21 * G_B41_3 = {0};
	Material_t19 * G_B48_0 = {0};
	RenderTexture_t21 * G_B48_1 = {0};
	RenderTexture_t21 * G_B48_2 = {0};
	Material_t19 * G_B47_0 = {0};
	RenderTexture_t21 * G_B47_1 = {0};
	RenderTexture_t21 * G_B47_2 = {0};
	int32_t G_B49_0 = 0;
	Material_t19 * G_B49_1 = {0};
	RenderTexture_t21 * G_B49_2 = {0};
	RenderTexture_t21 * G_B49_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&DepthOfField34_CheckResources_m795_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_0600;
	}

IL_0017:
	{
		float L_1 = (__this->___smoothness_10);
		if ((((float)L_1) >= ((float)(0.1f))))
		{
			goto IL_0032;
		}
	}
	{
		__this->___smoothness_10 = (0.1f);
	}

IL_0032:
	{
		bool L_2 = (__this->___bokeh_30);
		bool L_3 = L_2;
		G_B5_0 = L_3;
		G_B5_1 = __this;
		if (!L_3)
		{
			G_B6_0 = L_3;
			G_B6_1 = __this;
			goto IL_0046;
		}
	}
	{
		bool L_4 = (__this->___bokehSupport_31);
		G_B6_0 = L_4;
		G_B6_1 = G_B5_1;
	}

IL_0046:
	{
		NullCheck(G_B6_1);
		G_B6_1->___bokeh_30 = G_B6_0;
		bool L_5 = (__this->___bokeh_30);
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DepthOfField34_t192_il2cpp_TypeInfo));
		G_B9_0 = (((DepthOfField34_t192_StaticFields*)InitializedTypeInfo(&DepthOfField34_t192_il2cpp_TypeInfo)->static_fields)->___BOKEH_EXTRA_BLUR_5);
		goto IL_0065;
	}

IL_0060:
	{
		G_B9_0 = (1.0f);
	}

IL_0065:
	{
		V_0 = G_B9_0;
		int32_t L_6 = (__this->___quality_6);
		V_1 = ((((int32_t)L_6) > ((int32_t)1))? 1 : 0);
		float L_7 = (__this->___focalSize_18);
		Camera_t56 * L_8 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_8);
		float L_9 = Camera_get_farClipPlane_m219(L_8, /*hidden argument*/&Camera_get_farClipPlane_m219_MethodInfo);
		Camera_t56 * L_10 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_10);
		float L_11 = Camera_get_nearClipPlane_m582(L_10, /*hidden argument*/&Camera_get_nearClipPlane_m582_MethodInfo);
		V_2 = ((float)((float)L_7/(float)((float)((float)L_9-(float)L_11))));
		bool L_12 = (__this->___simpleTweakMode_8);
		if (!L_12)
		{
			goto IL_0132;
		}
	}
	{
		Transform_t85 * L_13 = (__this->___objectFocus_17);
		bool L_14 = Object_op_Implicit_m173(NULL /*static, unused*/, L_13, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		G_B11_0 = __this;
		if (!L_14)
		{
			G_B12_0 = __this;
			goto IL_00db;
		}
	}
	{
		Camera_t56 * L_15 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Transform_t85 * L_16 = (__this->___objectFocus_17);
		NullCheck(L_16);
		Vector3_t54  L_17 = Transform_get_position_m535(L_16, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		NullCheck(L_15);
		Vector3_t54  L_18 = Camera_WorldToViewportPoint_m951(L_15, L_17, /*hidden argument*/&Camera_WorldToViewportPoint_m951_MethodInfo);
		V_6 = L_18;
		NullCheck((&V_6));
		float L_19 = ((&V_6)->___z_3);
		Camera_t56 * L_20 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_20);
		float L_21 = Camera_get_farClipPlane_m219(L_20, /*hidden argument*/&Camera_get_farClipPlane_m219_MethodInfo);
		G_B13_0 = ((float)((float)L_19/(float)L_21));
		G_B13_1 = G_B11_0;
		goto IL_00e7;
	}

IL_00db:
	{
		float L_22 = (__this->___focalPoint_9);
		float L_23 = (float)VirtFuncInvoker1< float, float >::Invoke(&DepthOfField34_FocalDistance01_m798_MethodInfo, __this, L_22);
		G_B13_0 = L_23;
		G_B13_1 = G_B12_0;
	}

IL_00e7:
	{
		NullCheck(G_B13_1);
		G_B13_1->___focalDistance01_16 = G_B13_0;
		float L_24 = (__this->___focalDistance01_16);
		float L_25 = (__this->___smoothness_10);
		__this->___focalStartCurve_14 = ((float)((float)L_24*(float)L_25));
		float L_26 = (__this->___focalStartCurve_14);
		__this->___focalEndCurve_15 = L_26;
		bool L_27 = V_1;
		G_B14_0 = L_27;
		if (!L_27)
		{
			G_B15_0 = ((int32_t)(L_27));
			goto IL_012c;
		}
	}
	{
		float L_28 = (__this->___focalPoint_9);
		Camera_t56 * L_29 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_29);
		float L_30 = Camera_get_nearClipPlane_m582(L_29, /*hidden argument*/&Camera_get_nearClipPlane_m582_MethodInfo);
		G_B15_0 = ((((float)L_28) > ((float)((float)((float)L_30+(float)(1.17549435E-38f)))))? 1 : 0);
	}

IL_012c:
	{
		V_1 = G_B15_0;
		goto IL_01d1;
	}

IL_0132:
	{
		Transform_t85 * L_31 = (__this->___objectFocus_17);
		bool L_32 = Object_op_Implicit_m173(NULL /*static, unused*/, L_31, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_32)
		{
			goto IL_0185;
		}
	}
	{
		Camera_t56 * L_33 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Transform_t85 * L_34 = (__this->___objectFocus_17);
		NullCheck(L_34);
		Vector3_t54  L_35 = Transform_get_position_m535(L_34, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		NullCheck(L_33);
		Vector3_t54  L_36 = Camera_WorldToViewportPoint_m951(L_33, L_35, /*hidden argument*/&Camera_WorldToViewportPoint_m951_MethodInfo);
		V_3 = L_36;
		NullCheck((&V_3));
		float L_37 = ((&V_3)->___z_3);
		Camera_t56 * L_38 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_38);
		float L_39 = Camera_get_farClipPlane_m219(L_38, /*hidden argument*/&Camera_get_farClipPlane_m219_MethodInfo);
		NullCheck((&V_3));
		(&V_3)->___z_3 = ((float)((float)L_37/(float)L_39));
		NullCheck((&V_3));
		float L_40 = ((&V_3)->___z_3);
		__this->___focalDistance01_16 = L_40;
		goto IL_0197;
	}

IL_0185:
	{
		float L_41 = (__this->___focalZDistance_11);
		float L_42 = (float)VirtFuncInvoker1< float, float >::Invoke(&DepthOfField34_FocalDistance01_m798_MethodInfo, __this, L_41);
		__this->___focalDistance01_16 = L_42;
	}

IL_0197:
	{
		float L_43 = (__this->___focalZStartCurve_12);
		__this->___focalStartCurve_14 = L_43;
		float L_44 = (__this->___focalZEndCurve_13);
		__this->___focalEndCurve_15 = L_44;
		bool L_45 = V_1;
		G_B20_0 = L_45;
		if (!L_45)
		{
			G_B21_0 = ((int32_t)(L_45));
			goto IL_01d0;
		}
	}
	{
		float L_46 = (__this->___focalPoint_9);
		Camera_t56 * L_47 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_47);
		float L_48 = Camera_get_nearClipPlane_m582(L_47, /*hidden argument*/&Camera_get_nearClipPlane_m582_MethodInfo);
		G_B21_0 = ((((float)L_46) > ((float)((float)((float)L_48+(float)(1.17549435E-38f)))))? 1 : 0);
	}

IL_01d0:
	{
		V_1 = G_B21_0;
	}

IL_01d1:
	{
		NullCheck(___source);
		int32_t L_49 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_50 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		__this->___widthOverHeight_28 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_49))))/(float)((float)((float)(1.0f)*(float)(((float)L_50))))));
		__this->___oneOverBaseSize_29 = (0.001953125f);
		Material_t19 * L_51 = (__this->___dofMaterial_25);
		float L_52 = (__this->___foregroundBlurExtrude_21);
		NullCheck(L_51);
		Material_SetFloat_m195(L_51, (String_t*) &_stringLiteral263, L_52, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_53 = (__this->___dofMaterial_25);
		bool L_54 = (__this->___simpleTweakMode_8);
		G_B23_0 = (String_t*) &_stringLiteral264;
		G_B23_1 = L_53;
		if (!L_54)
		{
			G_B24_0 = (String_t*) &_stringLiteral264;
			G_B24_1 = L_53;
			goto IL_023a;
		}
	}
	{
		float L_55 = (__this->___focalStartCurve_14);
		G_B25_0 = ((float)((float)(1.0f)/(float)L_55));
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_0240;
	}

IL_023a:
	{
		float L_56 = (__this->___focalStartCurve_14);
		G_B25_0 = L_56;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_0240:
	{
		bool L_57 = (__this->___simpleTweakMode_8);
		G_B26_0 = G_B25_0;
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
		if (!L_57)
		{
			G_B27_0 = G_B25_0;
			G_B27_1 = G_B25_1;
			G_B27_2 = G_B25_2;
			goto IL_025c;
		}
	}
	{
		float L_58 = (__this->___focalEndCurve_15);
		G_B28_0 = ((float)((float)(1.0f)/(float)L_58));
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		G_B28_3 = G_B26_2;
		goto IL_0262;
	}

IL_025c:
	{
		float L_59 = (__this->___focalEndCurve_15);
		G_B28_0 = L_59;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
		G_B28_3 = G_B27_2;
	}

IL_0262:
	{
		float L_60 = (__this->___focalDistance01_16);
		Vector4_t52  L_61 = {0};
		Vector4__ctor_m193(&L_61, G_B28_1, G_B28_0, ((float)((float)V_2*(float)(0.5f))), L_60, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(G_B28_3);
		Material_SetVector_m194(G_B28_3, G_B28_2, L_61, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_62 = (__this->___dofMaterial_25);
		NullCheck(___source);
		int32_t L_63 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_64 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		Vector4_t52  L_65 = {0};
		Vector4__ctor_m193(&L_65, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_63)))))), ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_64)))))), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_62);
		Material_SetVector_m194(L_62, (String_t*) &_stringLiteral265, L_65, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&DepthOfField34_GetDividerBasedOnQuality_m799_MethodInfo, __this);
		V_4 = L_66;
		int32_t L_67 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&DepthOfField34_GetLowResolutionDividerBasedOnQuality_m800_MethodInfo, __this, V_4);
		V_5 = L_67;
		VirtActionInvoker4< bool, RenderTexture_t21 *, int32_t, int32_t >::Invoke(&DepthOfField34_AllocateTextures_m808_MethodInfo, __this, V_1, ___source, V_4, V_5);
		Material_t19 * L_68 = (__this->___dofMaterial_25);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___source, L_68, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_t21 * L_69 = (__this->___mediumRezWorkTexture_41);
		VirtActionInvoker2< RenderTexture_t21 *, RenderTexture_t21 * >::Invoke(&DepthOfField34_Downsample_m805_MethodInfo, __this, ___source, L_69);
		RenderTexture_t21 * L_70 = (__this->___mediumRezWorkTexture_41);
		RenderTexture_t21 * L_71 = (__this->___mediumRezWorkTexture_41);
		float L_72 = (__this->___maxBlurSpread_20);
		VirtActionInvoker5< RenderTexture_t21 *, RenderTexture_t21 *, int32_t, int32_t, float >::Invoke(&DepthOfField34_Blur_m802_MethodInfo, __this, L_70, L_71, 1, 4, L_72);
		bool L_73 = (__this->___bokeh_30);
		if (!L_73)
		{
			goto IL_039b;
		}
	}
	{
		int32_t L_74 = (__this->___bokehDestination_27);
		if (!((int32_t)((int32_t)L_74&(int32_t)1)))
		{
			goto IL_039b;
		}
	}
	{
		Material_t19 * L_75 = (__this->___dofMaterial_25);
		float L_76 = (__this->___bokehThreshholdContrast_36);
		float L_77 = (__this->___bokehThreshholdLuminance_37);
		Vector4_t52  L_78 = {0};
		Vector4__ctor_m193(&L_78, L_76, L_77, (0.95f), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_75);
		Material_SetVector_m194(L_75, (String_t*) &_stringLiteral216, L_78, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		RenderTexture_t21 * L_79 = (__this->___mediumRezWorkTexture_41);
		RenderTexture_t21 * L_80 = (__this->___bokehSource2_45);
		Material_t19 * L_81 = (__this->___dofMaterial_25);
		Graphics_Blit_m224(NULL /*static, unused*/, L_79, L_80, L_81, ((int32_t)11), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_t21 * L_82 = (__this->___mediumRezWorkTexture_41);
		RenderTexture_t21 * L_83 = (__this->___lowRezWorkTexture_43);
		Graphics_Blit_m184(NULL /*static, unused*/, L_82, L_83, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		RenderTexture_t21 * L_84 = (__this->___lowRezWorkTexture_43);
		RenderTexture_t21 * L_85 = (__this->___lowRezWorkTexture_43);
		int32_t L_86 = (__this->___bluriness_19);
		float L_87 = (__this->___maxBlurSpread_20);
		VirtActionInvoker5< RenderTexture_t21 *, RenderTexture_t21 *, int32_t, int32_t, float >::Invoke(&DepthOfField34_Blur_m802_MethodInfo, __this, L_84, L_85, L_86, 0, ((float)((float)L_87*(float)V_0)));
		goto IL_03cc;
	}

IL_039b:
	{
		RenderTexture_t21 * L_88 = (__this->___mediumRezWorkTexture_41);
		RenderTexture_t21 * L_89 = (__this->___lowRezWorkTexture_43);
		VirtActionInvoker2< RenderTexture_t21 *, RenderTexture_t21 * >::Invoke(&DepthOfField34_Downsample_m805_MethodInfo, __this, L_88, L_89);
		RenderTexture_t21 * L_90 = (__this->___lowRezWorkTexture_43);
		RenderTexture_t21 * L_91 = (__this->___lowRezWorkTexture_43);
		int32_t L_92 = (__this->___bluriness_19);
		float L_93 = (__this->___maxBlurSpread_20);
		VirtActionInvoker5< RenderTexture_t21 *, RenderTexture_t21 *, int32_t, int32_t, float >::Invoke(&DepthOfField34_Blur_m802_MethodInfo, __this, L_90, L_91, L_92, 0, L_93);
	}

IL_03cc:
	{
		Material_t19 * L_94 = (__this->___dofBlurMaterial_23);
		RenderTexture_t21 * L_95 = (__this->___lowRezWorkTexture_43);
		NullCheck(L_94);
		Material_SetTexture_m186(L_94, (String_t*) &_stringLiteral266, L_95, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_96 = (__this->___dofBlurMaterial_23);
		RenderTexture_t21 * L_97 = (__this->___mediumRezWorkTexture_41);
		NullCheck(L_96);
		Material_SetTexture_m186(L_96, (String_t*) &_stringLiteral267, L_97, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		RenderTexture_t21 * L_98 = (__this->___finalDefocus_42);
		Material_t19 * L_99 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, (Texture_t22 *)NULL, L_98, L_99, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		bool L_100 = (__this->___bokeh_30);
		if (!L_100)
		{
			goto IL_043b;
		}
	}
	{
		int32_t L_101 = (__this->___bokehDestination_27);
		if (!((int32_t)((int32_t)L_101&(int32_t)1)))
		{
			goto IL_043b;
		}
	}
	{
		RenderTexture_t21 * L_102 = (__this->___bokehSource2_45);
		RenderTexture_t21 * L_103 = (__this->___bokehSource_44);
		RenderTexture_t21 * L_104 = (__this->___finalDefocus_42);
		VirtActionInvoker3< RenderTexture_t21 *, RenderTexture_t21 *, RenderTexture_t21 * >::Invoke(&DepthOfField34_AddBokeh_m806_MethodInfo, __this, L_102, L_103, L_104);
	}

IL_043b:
	{
		Material_t19 * L_105 = (__this->___dofMaterial_25);
		RenderTexture_t21 * L_106 = (__this->___finalDefocus_42);
		NullCheck(L_105);
		Material_SetTexture_m186(L_105, (String_t*) &_stringLiteral268, L_106, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_107 = (__this->___dofMaterial_25);
		RenderTexture_t21 * L_108 = (__this->___mediumRezWorkTexture_41);
		NullCheck(L_107);
		Material_SetTexture_m186(L_107, (String_t*) &_stringLiteral267, L_108, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		G_B36_0 = ___source;
		if (!V_1)
		{
			G_B37_0 = ___source;
			goto IL_0479;
		}
	}
	{
		RenderTexture_t21 * L_109 = (__this->___foregroundTexture_40);
		G_B38_0 = L_109;
		G_B38_1 = G_B36_0;
		goto IL_047a;
	}

IL_0479:
	{
		G_B38_0 = ___destination;
		G_B38_1 = G_B37_0;
	}

IL_047a:
	{
		Material_t19 * L_110 = (__this->___dofMaterial_25);
		bool L_111 = (__this->___visualize_26);
		G_B39_0 = L_110;
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
		if (!L_111)
		{
			G_B40_0 = L_110;
			G_B40_1 = G_B38_0;
			G_B40_2 = G_B38_1;
			goto IL_0491;
		}
	}
	{
		G_B41_0 = 2;
		G_B41_1 = G_B39_0;
		G_B41_2 = G_B39_1;
		G_B41_3 = G_B39_2;
		goto IL_0492;
	}

IL_0491:
	{
		G_B41_0 = 0;
		G_B41_1 = G_B40_0;
		G_B41_2 = G_B40_1;
		G_B41_3 = G_B40_2;
	}

IL_0492:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B41_3, G_B41_2, G_B41_1, G_B41_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		if (!V_1)
		{
			goto IL_05fa;
		}
	}
	{
		RenderTexture_t21 * L_112 = (__this->___foregroundTexture_40);
		Material_t19 * L_113 = (__this->___dofMaterial_25);
		Graphics_Blit_m224(NULL /*static, unused*/, L_112, ___source, L_113, 5, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_t21 * L_114 = (__this->___mediumRezWorkTexture_41);
		VirtActionInvoker2< RenderTexture_t21 *, RenderTexture_t21 * >::Invoke(&DepthOfField34_Downsample_m805_MethodInfo, __this, ___source, L_114);
		RenderTexture_t21 * L_115 = (__this->___mediumRezWorkTexture_41);
		RenderTexture_t21 * L_116 = (__this->___mediumRezWorkTexture_41);
		float L_117 = (__this->___maxBlurSpread_20);
		VirtActionInvoker5< RenderTexture_t21 *, RenderTexture_t21 *, int32_t, int32_t, float >::Invoke(&DepthOfField34_BlurFg_m803_MethodInfo, __this, L_115, L_116, 1, 2, L_117);
		bool L_118 = (__this->___bokeh_30);
		if (!L_118)
		{
			goto IL_056a;
		}
	}
	{
		int32_t L_119 = (__this->___bokehDestination_27);
		if (!((int32_t)((int32_t)L_119&(int32_t)2)))
		{
			goto IL_056a;
		}
	}
	{
		Material_t19 * L_120 = (__this->___dofMaterial_25);
		float L_121 = (__this->___bokehThreshholdContrast_36);
		float L_122 = (__this->___bokehThreshholdLuminance_37);
		Vector4_t52  L_123 = {0};
		Vector4__ctor_m193(&L_123, ((float)((float)L_121*(float)(0.5f))), L_122, (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_120);
		Material_SetVector_m194(L_120, (String_t*) &_stringLiteral216, L_123, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		RenderTexture_t21 * L_124 = (__this->___mediumRezWorkTexture_41);
		RenderTexture_t21 * L_125 = (__this->___bokehSource2_45);
		Material_t19 * L_126 = (__this->___dofMaterial_25);
		Graphics_Blit_m224(NULL /*static, unused*/, L_124, L_125, L_126, ((int32_t)11), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_t21 * L_127 = (__this->___mediumRezWorkTexture_41);
		RenderTexture_t21 * L_128 = (__this->___lowRezWorkTexture_43);
		Graphics_Blit_m184(NULL /*static, unused*/, L_127, L_128, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		RenderTexture_t21 * L_129 = (__this->___lowRezWorkTexture_43);
		RenderTexture_t21 * L_130 = (__this->___lowRezWorkTexture_43);
		int32_t L_131 = (__this->___bluriness_19);
		float L_132 = (__this->___maxBlurSpread_20);
		VirtActionInvoker5< RenderTexture_t21 *, RenderTexture_t21 *, int32_t, int32_t, float >::Invoke(&DepthOfField34_BlurFg_m803_MethodInfo, __this, L_129, L_130, L_131, 1, ((float)((float)L_132*(float)V_0)));
		goto IL_0589;
	}

IL_056a:
	{
		RenderTexture_t21 * L_133 = (__this->___mediumRezWorkTexture_41);
		RenderTexture_t21 * L_134 = (__this->___lowRezWorkTexture_43);
		int32_t L_135 = (__this->___bluriness_19);
		float L_136 = (__this->___maxBlurSpread_20);
		VirtActionInvoker5< RenderTexture_t21 *, RenderTexture_t21 *, int32_t, int32_t, float >::Invoke(&DepthOfField34_BlurFg_m803_MethodInfo, __this, L_133, L_134, L_135, 1, L_136);
	}

IL_0589:
	{
		RenderTexture_t21 * L_137 = (__this->___lowRezWorkTexture_43);
		RenderTexture_t21 * L_138 = (__this->___finalDefocus_42);
		Graphics_Blit_m184(NULL /*static, unused*/, L_137, L_138, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		Material_t19 * L_139 = (__this->___dofMaterial_25);
		RenderTexture_t21 * L_140 = (__this->___finalDefocus_42);
		NullCheck(L_139);
		Material_SetTexture_m186(L_139, (String_t*) &_stringLiteral269, L_140, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_141 = (__this->___dofMaterial_25);
		bool L_142 = (__this->___visualize_26);
		G_B47_0 = L_141;
		G_B47_1 = ___destination;
		G_B47_2 = ___source;
		if (!L_142)
		{
			G_B48_0 = L_141;
			G_B48_1 = ___destination;
			G_B48_2 = ___source;
			goto IL_05c9;
		}
	}
	{
		G_B49_0 = 1;
		G_B49_1 = G_B47_0;
		G_B49_2 = G_B47_1;
		G_B49_3 = G_B47_2;
		goto IL_05ca;
	}

IL_05c9:
	{
		G_B49_0 = 4;
		G_B49_1 = G_B48_0;
		G_B49_2 = G_B48_1;
		G_B49_3 = G_B48_2;
	}

IL_05ca:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B49_3, G_B49_2, G_B49_1, G_B49_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		bool L_143 = (__this->___bokeh_30);
		if (!L_143)
		{
			goto IL_05fa;
		}
	}
	{
		int32_t L_144 = (__this->___bokehDestination_27);
		if (!((int32_t)((int32_t)L_144&(int32_t)2)))
		{
			goto IL_05fa;
		}
	}
	{
		RenderTexture_t21 * L_145 = (__this->___bokehSource2_45);
		RenderTexture_t21 * L_146 = (__this->___bokehSource_44);
		VirtActionInvoker3< RenderTexture_t21 *, RenderTexture_t21 *, RenderTexture_t21 * >::Invoke(&DepthOfField34_AddBokeh_m806_MethodInfo, __this, L_145, L_146, ___destination);
	}

IL_05fa:
	{
		VirtActionInvoker0::Invoke(&DepthOfField34_ReleaseTextures_m807_MethodInfo, __this);
	}

IL_0600:
	{
		return;
	}
}
// System.Void DepthOfField34::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfField34_Blur_m802 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, MethodInfo* method)
{
	RenderTexture_t21 * V_0 = {0};
	{
		NullCheck(___to);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___to);
		NullCheck(___to);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___to);
		RenderTexture_t21 * L_2 = RenderTexture_GetTemporary_m189(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&RenderTexture_GetTemporary_m189_MethodInfo);
		V_0 = L_2;
		if ((((int32_t)___iterations) <= ((int32_t)1)))
		{
			goto IL_00b1;
		}
	}
	{
		VirtActionInvoker5< RenderTexture_t21 *, RenderTexture_t21 *, int32_t, float, RenderTexture_t21 * >::Invoke(&DepthOfField34_BlurHex_m804_MethodInfo, __this, ___from, ___to, ___blurPass, ___spread, V_0);
		if ((((int32_t)___iterations) <= ((int32_t)2)))
		{
			goto IL_00ac;
		}
	}
	{
		Material_t19 * L_3 = (__this->___dofBlurMaterial_23);
		float L_4 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_5 = {0};
		Vector4__ctor_m193(&L_5, (((float)0)), ((float)((float)___spread*(float)L_4)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_3);
		Material_SetVector_m194(L_3, (String_t*) &_stringLiteral225, L_5, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_6 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, ___to, V_0, L_6, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_7 = (__this->___dofBlurMaterial_23);
		float L_8 = (__this->___widthOverHeight_28);
		float L_9 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_10 = {0};
		Vector4__ctor_m193(&L_10, ((float)((float)((float)((float)___spread/(float)L_8))*(float)L_9)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_7);
		Material_SetVector_m194(L_7, (String_t*) &_stringLiteral225, L_10, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_11 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, ___to, L_11, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_00ac:
	{
		goto IL_012a;
	}

IL_00b1:
	{
		Material_t19 * L_12 = (__this->___dofBlurMaterial_23);
		float L_13 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_14 = {0};
		Vector4__ctor_m193(&L_14, (((float)0)), ((float)((float)___spread*(float)L_13)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_12);
		Material_SetVector_m194(L_12, (String_t*) &_stringLiteral225, L_14, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_15 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, ___from, V_0, L_15, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_16 = (__this->___dofBlurMaterial_23);
		float L_17 = (__this->___widthOverHeight_28);
		float L_18 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_19 = {0};
		Vector4__ctor_m193(&L_19, ((float)((float)((float)((float)___spread/(float)L_17))*(float)L_18)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_16);
		Material_SetVector_m194(L_16, (String_t*) &_stringLiteral225, L_19, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_20 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, ___to, L_20, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_012a:
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_0, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		return;
	}
}
// System.Void DepthOfField34::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfField34_BlurFg_m803 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, MethodInfo* method)
{
	RenderTexture_t21 * V_0 = {0};
	{
		Material_t19 * L_0 = (__this->___dofBlurMaterial_23);
		NullCheck(L_0);
		Material_SetTexture_m186(L_0, (String_t*) &_stringLiteral270, ___from, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		NullCheck(___to);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___to);
		NullCheck(___to);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___to);
		RenderTexture_t21 * L_3 = RenderTexture_GetTemporary_m189(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&RenderTexture_GetTemporary_m189_MethodInfo);
		V_0 = L_3;
		if ((((int32_t)___iterations) <= ((int32_t)1)))
		{
			goto IL_00c2;
		}
	}
	{
		VirtActionInvoker5< RenderTexture_t21 *, RenderTexture_t21 *, int32_t, float, RenderTexture_t21 * >::Invoke(&DepthOfField34_BlurHex_m804_MethodInfo, __this, ___from, ___to, ___blurPass, ___spread, V_0);
		if ((((int32_t)___iterations) <= ((int32_t)2)))
		{
			goto IL_00bd;
		}
	}
	{
		Material_t19 * L_4 = (__this->___dofBlurMaterial_23);
		float L_5 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_6 = {0};
		Vector4__ctor_m193(&L_6, (((float)0)), ((float)((float)___spread*(float)L_5)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_4);
		Material_SetVector_m194(L_4, (String_t*) &_stringLiteral225, L_6, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_7 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, ___to, V_0, L_7, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_8 = (__this->___dofBlurMaterial_23);
		float L_9 = (__this->___widthOverHeight_28);
		float L_10 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_11 = {0};
		Vector4__ctor_m193(&L_11, ((float)((float)((float)((float)___spread/(float)L_9))*(float)L_10)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_8);
		Material_SetVector_m194(L_8, (String_t*) &_stringLiteral225, L_11, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_12 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, ___to, L_12, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_00bd:
	{
		goto IL_013b;
	}

IL_00c2:
	{
		Material_t19 * L_13 = (__this->___dofBlurMaterial_23);
		float L_14 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_15 = {0};
		Vector4__ctor_m193(&L_15, (((float)0)), ((float)((float)___spread*(float)L_14)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_13);
		Material_SetVector_m194(L_13, (String_t*) &_stringLiteral225, L_15, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_16 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, ___from, V_0, L_16, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_17 = (__this->___dofBlurMaterial_23);
		float L_18 = (__this->___widthOverHeight_28);
		float L_19 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_20 = {0};
		Vector4__ctor_m193(&L_20, ((float)((float)((float)((float)___spread/(float)L_18))*(float)L_19)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_17);
		Material_SetVector_m194(L_17, (String_t*) &_stringLiteral225, L_20, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_21 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, ___to, L_21, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_013b:
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_0, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		return;
	}
}
// System.Void DepthOfField34::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C" void DepthOfField34_BlurHex_m804 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, int32_t ___blurPass, float ___spread, RenderTexture_t21 * ___tmp, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___dofBlurMaterial_23);
		float L_1 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_2 = {0};
		Vector4__ctor_m193(&L_2, (((float)0)), ((float)((float)___spread*(float)L_1)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_0);
		Material_SetVector_m194(L_0, (String_t*) &_stringLiteral225, L_2, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_3 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, ___from, ___tmp, L_3, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_4 = (__this->___dofBlurMaterial_23);
		float L_5 = (__this->___widthOverHeight_28);
		float L_6 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_7 = {0};
		Vector4__ctor_m193(&L_7, ((float)((float)((float)((float)___spread/(float)L_5))*(float)L_6)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_4);
		Material_SetVector_m194(L_4, (String_t*) &_stringLiteral225, L_7, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_8 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, ___tmp, ___to, L_8, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_9 = (__this->___dofBlurMaterial_23);
		float L_10 = (__this->___widthOverHeight_28);
		float L_11 = (__this->___oneOverBaseSize_29);
		float L_12 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_13 = {0};
		Vector4__ctor_m193(&L_13, ((float)((float)((float)((float)___spread/(float)L_10))*(float)L_11)), ((float)((float)___spread*(float)L_12)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_9);
		Material_SetVector_m194(L_9, (String_t*) &_stringLiteral225, L_13, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_14 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, ___to, ___tmp, L_14, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_15 = (__this->___dofBlurMaterial_23);
		float L_16 = (__this->___widthOverHeight_28);
		float L_17 = (__this->___oneOverBaseSize_29);
		float L_18 = (__this->___oneOverBaseSize_29);
		Vector4_t52  L_19 = {0};
		Vector4__ctor_m193(&L_19, ((float)((float)((float)((float)___spread/(float)L_16))*(float)L_17)), ((float)((float)((-___spread))*(float)L_18)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_15);
		Material_SetVector_m194(L_15, (String_t*) &_stringLiteral225, L_19, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_20 = (__this->___dofBlurMaterial_23);
		Graphics_Blit_m224(NULL /*static, unused*/, ___tmp, ___to, L_20, ___blurPass, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		return;
	}
}
// System.Void DepthOfField34::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfField34_Downsample_m805 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___from, RenderTexture_t21 * ___to, MethodInfo* method)
{
	{
		Material_t19 * L_0 = (__this->___dofMaterial_25);
		NullCheck(___to);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___to);
		NullCheck(___to);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___to);
		Vector4_t52  L_3 = {0};
		Vector4__ctor_m193(&L_3, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_1)))))), ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_2)))))), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_0);
		Material_SetVector_m194(L_0, (String_t*) &_stringLiteral265, L_3, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_4 = (__this->___dofMaterial_25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DepthOfField34_t192_il2cpp_TypeInfo));
		Graphics_Blit_m224(NULL /*static, unused*/, ___from, ___to, L_4, (((DepthOfField34_t192_StaticFields*)InitializedTypeInfo(&DepthOfField34_t192_il2cpp_TypeInfo)->static_fields)->___SMOOTH_DOWNSAMPLE_PASS_4), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		return;
	}
}
// System.Void DepthOfField34::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfField34_AddBokeh_m806 (DepthOfField34_t192 * __this, RenderTexture_t21 * ___bokehInfo, RenderTexture_t21 * ___tempTex, RenderTexture_t21 * ___finalTarget, MethodInfo* method)
{
	MeshU5BU5D_t204* V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Mesh_t80 * V_3 = {0};
	int32_t V_4 = 0;
	MeshU5BU5D_t204* V_5 = {0};
	int32_t V_6 = 0;
	{
		Material_t19 * L_0 = (__this->___bokehMaterial_39);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_0164;
		}
	}
	{
		NullCheck(___tempTex);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___tempTex);
		NullCheck(___tempTex);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___tempTex);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		MeshU5BU5D_t204* L_4 = Quads_GetMeshes_m868(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Quads_GetMeshes_m868_MethodInfo);
		V_0 = L_4;
		RenderTexture_set_active_m952(NULL /*static, unused*/, ___tempTex, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		Color_t29  L_5 = {0};
		Color__ctor_m196(&L_5, (((float)0)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		GL_Clear_m953(NULL /*static, unused*/, 0, 1, L_5, /*hidden argument*/&GL_Clear_m953_MethodInfo);
		GL_PushMatrix_m954(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m954_MethodInfo);
		GL_LoadIdentity_m955(NULL /*static, unused*/, /*hidden argument*/&GL_LoadIdentity_m955_MethodInfo);
		NullCheck(___bokehInfo);
		Texture_set_filterMode_m917(___bokehInfo, 0, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		NullCheck(___bokehInfo);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___bokehInfo);
		NullCheck(___bokehInfo);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___bokehInfo);
		V_1 = ((float)((float)((float)((float)(((float)L_6))*(float)(1.0f)))/(float)((float)((float)(((float)L_7))*(float)(1.0f)))));
		NullCheck(___bokehInfo);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___bokehInfo);
		V_2 = ((float)((float)(2.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_8))))));
		float L_9 = (__this->___bokehScale_34);
		float L_10 = (__this->___maxBlurSpread_20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DepthOfField34_t192_il2cpp_TypeInfo));
		float L_11 = (__this->___oneOverBaseSize_29);
		V_2 = ((float)((float)V_2+(float)((float)((float)((float)((float)((float)((float)L_9*(float)L_10))*(float)(((DepthOfField34_t192_StaticFields*)InitializedTypeInfo(&DepthOfField34_t192_il2cpp_TypeInfo)->static_fields)->___BOKEH_EXTRA_BLUR_5)))*(float)L_11))));
		Material_t19 * L_12 = (__this->___bokehMaterial_39);
		NullCheck(L_12);
		Material_SetTexture_m186(L_12, (String_t*) &_stringLiteral271, ___bokehInfo, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_13 = (__this->___bokehMaterial_39);
		Texture2D_t36 * L_14 = (__this->___bokehTexture_33);
		NullCheck(L_13);
		Material_SetTexture_m186(L_13, (String_t*) &_stringLiteral42, L_14, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_15 = (__this->___bokehMaterial_39);
		Vector4_t52  L_16 = {0};
		Vector4__ctor_m193(&L_16, V_2, ((float)((float)V_2*(float)V_1)), (0.5f), ((float)((float)(0.5f)*(float)V_1)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_15);
		Material_SetVector_m194(L_15, (String_t*) &_stringLiteral272, L_16, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_17 = (__this->___bokehMaterial_39);
		float L_18 = (__this->___bokehIntensity_35);
		NullCheck(L_17);
		Material_SetFloat_m195(L_17, (String_t*) &_stringLiteral49, L_18, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_19 = (__this->___bokehMaterial_39);
		NullCheck(L_19);
		Material_SetPass_m956(L_19, 0, /*hidden argument*/&Material_SetPass_m956_MethodInfo);
		V_4 = 0;
		V_5 = V_0;
		NullCheck(V_5);
		int32_t L_20 = Array_get_Length_m947(V_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		V_6 = L_20;
		goto IL_0141;
	}

IL_011d:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_4);
		int32_t L_21 = V_4;
		bool L_22 = Object_op_Implicit_m173(NULL /*static, unused*/, (*(Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_5, L_21)), /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_22)
		{
			goto IL_013b;
		}
	}
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_4);
		int32_t L_23 = V_4;
		Matrix4x4_t53  L_24 = Matrix4x4_get_identity_m920(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_identity_m920_MethodInfo);
		Graphics_DrawMeshNow_m957(NULL /*static, unused*/, (*(Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_5, L_23)), L_24, /*hidden argument*/&Graphics_DrawMeshNow_m957_MethodInfo);
	}

IL_013b:
	{
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
	}

IL_0141:
	{
		if ((((int32_t)V_4) < ((int32_t)V_6)))
		{
			goto IL_011d;
		}
	}
	{
		GL_PopMatrix_m958(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m958_MethodInfo);
		Material_t19 * L_25 = (__this->___dofMaterial_25);
		Graphics_Blit_m224(NULL /*static, unused*/, ___tempTex, ___finalTarget, L_25, 8, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		NullCheck(___bokehInfo);
		Texture_set_filterMode_m917(___bokehInfo, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
	}

IL_0164:
	{
		return;
	}
}
// System.Void DepthOfField34::ReleaseTextures()
extern "C" void DepthOfField34_ReleaseTextures_m807 (DepthOfField34_t192 * __this, MethodInfo* method)
{
	{
		RenderTexture_t21 * L_0 = (__this->___foregroundTexture_40);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RenderTexture_t21 * L_2 = (__this->___foregroundTexture_40);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, L_2, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_001b:
	{
		RenderTexture_t21 * L_3 = (__this->___finalDefocus_42);
		bool L_4 = Object_op_Implicit_m173(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		RenderTexture_t21 * L_5 = (__this->___finalDefocus_42);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, L_5, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_0036:
	{
		RenderTexture_t21 * L_6 = (__this->___mediumRezWorkTexture_41);
		bool L_7 = Object_op_Implicit_m173(NULL /*static, unused*/, L_6, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		RenderTexture_t21 * L_8 = (__this->___mediumRezWorkTexture_41);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, L_8, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_0051:
	{
		RenderTexture_t21 * L_9 = (__this->___lowRezWorkTexture_43);
		bool L_10 = Object_op_Implicit_m173(NULL /*static, unused*/, L_9, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		RenderTexture_t21 * L_11 = (__this->___lowRezWorkTexture_43);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, L_11, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_006c:
	{
		RenderTexture_t21 * L_12 = (__this->___bokehSource_44);
		bool L_13 = Object_op_Implicit_m173(NULL /*static, unused*/, L_12, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		RenderTexture_t21 * L_14 = (__this->___bokehSource_44);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, L_14, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_0087:
	{
		RenderTexture_t21 * L_15 = (__this->___bokehSource2_45);
		bool L_16 = Object_op_Implicit_m173(NULL /*static, unused*/, L_15, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_16)
		{
			goto IL_00a2;
		}
	}
	{
		RenderTexture_t21 * L_17 = (__this->___bokehSource2_45);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, L_17, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_00a2:
	{
		return;
	}
}
// System.Void DepthOfField34::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void DepthOfField34_AllocateTextures_m808 (DepthOfField34_t192 * __this, bool ___blurForeground, RenderTexture_t21 * ___source, int32_t ___divider, int32_t ___lowTexDivider, MethodInfo* method)
{
	{
		__this->___foregroundTexture_40 = (RenderTexture_t21 *)NULL;
		if (!___blurForeground)
		{
			goto IL_0025;
		}
	}
	{
		NullCheck(___source);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_2 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, L_0, L_1, 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		__this->___foregroundTexture_40 = L_2;
	}

IL_0025:
	{
		NullCheck(___source);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_5 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, ((int32_t)((int32_t)L_3/(int32_t)___divider)), ((int32_t)((int32_t)L_4/(int32_t)___divider)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		__this->___mediumRezWorkTexture_41 = L_5;
		NullCheck(___source);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_8 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, ((int32_t)((int32_t)L_6/(int32_t)___divider)), ((int32_t)((int32_t)L_7/(int32_t)___divider)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		__this->___finalDefocus_42 = L_8;
		NullCheck(___source);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_11 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, ((int32_t)((int32_t)L_9/(int32_t)___lowTexDivider)), ((int32_t)((int32_t)L_10/(int32_t)___lowTexDivider)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		__this->___lowRezWorkTexture_43 = L_11;
		__this->___bokehSource_44 = (RenderTexture_t21 *)NULL;
		__this->___bokehSource2_45 = (RenderTexture_t21 *)NULL;
		bool L_12 = (__this->___bokeh_30);
		if (!L_12)
		{
			goto IL_0137;
		}
	}
	{
		NullCheck(___source);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		int32_t L_14 = (__this->___bokehDownsample_38);
		NullCheck(___source);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		int32_t L_16 = (__this->___bokehDownsample_38);
		RenderTexture_t21 * L_17 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_13/(int32_t)((int32_t)((int32_t)___lowTexDivider*(int32_t)L_14)))), ((int32_t)((int32_t)L_15/(int32_t)((int32_t)((int32_t)___lowTexDivider*(int32_t)L_16)))), 0, 2, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		__this->___bokehSource_44 = L_17;
		NullCheck(___source);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		int32_t L_19 = (__this->___bokehDownsample_38);
		NullCheck(___source);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		int32_t L_21 = (__this->___bokehDownsample_38);
		RenderTexture_t21 * L_22 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_18/(int32_t)((int32_t)((int32_t)___lowTexDivider*(int32_t)L_19)))), ((int32_t)((int32_t)L_20/(int32_t)((int32_t)((int32_t)___lowTexDivider*(int32_t)L_21)))), 0, 2, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		__this->___bokehSource2_45 = L_22;
		RenderTexture_t21 * L_23 = (__this->___bokehSource_44);
		NullCheck(L_23);
		Texture_set_filterMode_m917(L_23, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		RenderTexture_t21 * L_24 = (__this->___bokehSource2_45);
		NullCheck(L_24);
		Texture_set_filterMode_m917(L_24, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		RenderTexture_t21 * L_25 = (__this->___bokehSource2_45);
		RenderTexture_set_active_m952(NULL /*static, unused*/, L_25, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		Color_t29  L_26 = {0};
		Color__ctor_m196(&L_26, (((float)0)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Color__ctor_m196_MethodInfo);
		GL_Clear_m953(NULL /*static, unused*/, 0, 1, L_26, /*hidden argument*/&GL_Clear_m953_MethodInfo);
	}

IL_0137:
	{
		NullCheck(___source);
		Texture_set_filterMode_m917(___source, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		RenderTexture_t21 * L_27 = (__this->___finalDefocus_42);
		NullCheck(L_27);
		Texture_set_filterMode_m917(L_27, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		RenderTexture_t21 * L_28 = (__this->___mediumRezWorkTexture_41);
		NullCheck(L_28);
		Texture_set_filterMode_m917(L_28, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		RenderTexture_t21 * L_29 = (__this->___lowRezWorkTexture_43);
		NullCheck(L_29);
		Texture_set_filterMode_m917(L_29, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		RenderTexture_t21 * L_30 = (__this->___foregroundTexture_40);
		bool L_31 = Object_op_Implicit_m173(NULL /*static, unused*/, L_30, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_31)
		{
			goto IL_017e;
		}
	}
	{
		RenderTexture_t21 * L_32 = (__this->___foregroundTexture_40);
		NullCheck(L_32);
		Texture_set_filterMode_m917(L_32, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
	}

IL_017e:
	{
		return;
	}
}
// System.Void DepthOfField34::Main()
extern MethodInfo DepthOfField34_Main_m809_MethodInfo;
extern "C" void DepthOfField34_Main_m809 (DepthOfField34_t192 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// DepthOfFieldScatter/BlurType
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfFieldScatter_BlurT.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BlurType_t193_il2cpp_TypeInfo;
// DepthOfFieldScatter/BlurType
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfFieldScatter_BlurTMethodDeclarations.h"



// DepthOfFieldScatter/BlurSampleCount
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfFieldScatter_BlurS.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BlurSampleCount_t194_il2cpp_TypeInfo;
// DepthOfFieldScatter/BlurSampleCount
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfFieldScatter_BlurSMethodDeclarations.h"



// DepthOfFieldScatter
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfFieldScatter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DepthOfFieldScatter_t196_il2cpp_TypeInfo;
// DepthOfFieldScatter
#include "AssemblyU2DUnityScriptU2Dfirstpass_DepthOfFieldScatterMethodDeclarations.h"

// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBuffer.h"
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferType.h"
// UnityEngine.MeshTopology
#include "UnityEngine_UnityEngine_MeshTopology.h"
extern TypeInfo ComputeBuffer_t195_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t220_il2cpp_TypeInfo;
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBufferMethodDeclarations.h"
extern Il2CppType Int32U5BU5D_t220_0_0_0;
extern MethodInfo DepthOfFieldScatter_CreateComputeResources_m815_MethodInfo;
extern MethodInfo DepthOfFieldScatter_ReleaseComputeResources_m814_MethodInfo;
extern MethodInfo ComputeBuffer_Release_m959_MethodInfo;
extern MethodInfo RuntimeServices_EqualityOperator_m960_MethodInfo;
extern MethodInfo ComputeBuffer__ctor_m961_MethodInfo;
extern MethodInfo ComputeBuffer_SetData_m962_MethodInfo;
extern MethodInfo DepthOfFieldScatter_CheckResources_m811_MethodInfo;
extern MethodInfo DepthOfFieldScatter_FocalDistance01_m816_MethodInfo;
extern MethodInfo DepthOfFieldScatter_WriteCoc_m817_MethodInfo;
extern MethodInfo Graphics_SetRandomWriteTarget_m963_MethodInfo;
extern MethodInfo Graphics_ClearRandomWriteTargets_m964_MethodInfo;
extern MethodInfo Graphics_SetRenderTarget_m965_MethodInfo;
extern MethodInfo ComputeBuffer_CopyCount_m966_MethodInfo;
extern MethodInfo Material_SetBuffer_m967_MethodInfo;
extern MethodInfo Vector3__ctor_m222_MethodInfo;
extern MethodInfo Vector4_op_Implicit_m223_MethodInfo;
extern MethodInfo Graphics_DrawProceduralIndirect_m968_MethodInfo;
extern MethodInfo Vector4_get_one_m969_MethodInfo;
extern MethodInfo Vector4_op_Multiply_m970_MethodInfo;


// System.Void DepthOfFieldScatter::.ctor()
extern MethodInfo DepthOfFieldScatter__ctor_m810_MethodInfo;
extern "C" void DepthOfFieldScatter__ctor_m810 (DepthOfFieldScatter_t196 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___focalLength_5 = (10.0f);
		__this->___focalSize_6 = (0.05f);
		__this->___aperture_7 = (11.5f);
		__this->___maxBlurSize_9 = (2.0f);
		__this->___blurType_11 = 0;
		__this->___blurSampleCount_12 = 2;
		__this->___foregroundOverlap_14 = (1.0f);
		__this->___dx11BokehThreshhold_19 = (0.5f);
		__this->___dx11SpawnHeuristic_20 = (0.0875f);
		__this->___dx11BokehScale_22 = (1.2f);
		__this->___dx11BokehIntensity_23 = (2.5f);
		__this->___focalDistance01_24 = (10.0f);
		__this->___internalBlurWidth_27 = (1.0f);
		return;
	}
}
// System.Boolean DepthOfFieldScatter::CheckResources()
extern "C" bool DepthOfFieldScatter_CheckResources_m811 (DepthOfFieldScatter_t196 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 1);
		Shader_t18 * L_0 = (__this->___dofHdrShader_15);
		Material_t19 * L_1 = (__this->___dofHdrMaterial_16);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___dofHdrMaterial_16 = L_2;
		bool L_3 = (__this->___supportDX11_2);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4 = (__this->___blurType_11);
		if ((((uint32_t)L_4) != ((uint32_t)1)))
		{
			goto IL_0055;
		}
	}
	{
		Shader_t18 * L_5 = (__this->___dx11BokehShader_17);
		Material_t19 * L_6 = (__this->___dx11bokehMaterial_18);
		Material_t19 * L_7 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_5, L_6);
		__this->___dx11bokehMaterial_18 = L_7;
		VirtActionInvoker0::Invoke(&DepthOfFieldScatter_CreateComputeResources_m815_MethodInfo, __this);
	}

IL_0055:
	{
		bool L_8 = (__this->___isSupported_3);
		if (L_8)
		{
			goto IL_0066;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0066:
	{
		bool L_9 = (__this->___isSupported_3);
		return L_9;
	}
}
// System.Void DepthOfFieldScatter::OnEnable()
extern MethodInfo DepthOfFieldScatter_OnEnable_m812_MethodInfo;
extern "C" void DepthOfFieldScatter_OnEnable_m812 (DepthOfFieldScatter_t196 * __this, MethodInfo* method)
{
	{
		Camera_t56 * L_0 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_1 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = Camera_get_depthTextureMode_m216(L_1, /*hidden argument*/&Camera_get_depthTextureMode_m216_MethodInfo);
		NullCheck(L_0);
		Camera_set_depthTextureMode_m217(L_0, ((int32_t)((int32_t)L_2|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m217_MethodInfo);
		return;
	}
}
// System.Void DepthOfFieldScatter::OnDisable()
extern MethodInfo DepthOfFieldScatter_OnDisable_m813_MethodInfo;
extern "C" void DepthOfFieldScatter_OnDisable_m813 (DepthOfFieldScatter_t196 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&DepthOfFieldScatter_ReleaseComputeResources_m814_MethodInfo, __this);
		Material_t19 * L_0 = (__this->___dofHdrMaterial_16);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Material_t19 * L_2 = (__this->___dofHdrMaterial_16);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
	}

IL_0021:
	{
		__this->___dofHdrMaterial_16 = (Material_t19 *)NULL;
		Material_t19 * L_3 = (__this->___dx11bokehMaterial_18);
		bool L_4 = Object_op_Implicit_m173(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Material_t19 * L_5 = (__this->___dx11bokehMaterial_18);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
	}

IL_0043:
	{
		__this->___dx11bokehMaterial_18 = (Material_t19 *)NULL;
		return;
	}
}
// System.Void DepthOfFieldScatter::ReleaseComputeResources()
extern "C" void DepthOfFieldScatter_ReleaseComputeResources_m814 (DepthOfFieldScatter_t196 * __this, MethodInfo* method)
{
	{
		ComputeBuffer_t195 * L_0 = (__this->___cbDrawArgs_25);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ComputeBuffer_t195 * L_1 = (__this->___cbDrawArgs_25);
		NullCheck(L_1);
		ComputeBuffer_Release_m959(L_1, /*hidden argument*/&ComputeBuffer_Release_m959_MethodInfo);
	}

IL_0016:
	{
		__this->___cbDrawArgs_25 = (ComputeBuffer_t195 *)NULL;
		ComputeBuffer_t195 * L_2 = (__this->___cbPoints_26);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		ComputeBuffer_t195 * L_3 = (__this->___cbPoints_26);
		NullCheck(L_3);
		ComputeBuffer_Release_m959(L_3, /*hidden argument*/&ComputeBuffer_Release_m959_MethodInfo);
	}

IL_0033:
	{
		__this->___cbPoints_26 = (ComputeBuffer_t195 *)NULL;
		return;
	}
}
// System.Void DepthOfFieldScatter::CreateComputeResources()
extern TypeInfo* Int32U5BU5D_t220_il2cpp_TypeInfo_var;
extern "C" void DepthOfFieldScatter_CreateComputeResources_m815 (DepthOfFieldScatter_t196 * __this, MethodInfo* method)
{
	static bool DepthOfFieldScatter_CreateComputeResources_m815_init;
	if (!DepthOfFieldScatter_CreateComputeResources_m815_init)
	{
		Int32U5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t220_0_0_0);
		DepthOfFieldScatter_CreateComputeResources_m815_init = true;
	}
	Int32U5BU5D_t220* V_0 = {0};
	{
		ComputeBuffer_t195 * L_0 = (__this->___cbDrawArgs_25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_1 = RuntimeServices_EqualityOperator_m960(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/&RuntimeServices_EqualityOperator_m960_MethodInfo);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		ComputeBuffer_t195 * L_2 = (ComputeBuffer_t195 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ComputeBuffer_t195_il2cpp_TypeInfo));
		ComputeBuffer__ctor_m961(L_2, 1, ((int32_t)16), ((int32_t)256), /*hidden argument*/&ComputeBuffer__ctor_m961_MethodInfo);
		__this->___cbDrawArgs_25 = L_2;
		V_0 = ((Int32U5BU5D_t220*)SZArrayNew(Int32U5BU5D_t220_il2cpp_TypeInfo_var, 4));
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_0, 0)) = (int32_t)0;
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_0, 1)) = (int32_t)1;
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_0, 2)) = (int32_t)0;
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, 3);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_0, 3)) = (int32_t)0;
		ComputeBuffer_t195 * L_3 = (__this->___cbDrawArgs_25);
		NullCheck(L_3);
		ComputeBuffer_SetData_m962(L_3, (Array_t *)(Array_t *)V_0, /*hidden argument*/&ComputeBuffer_SetData_m962_MethodInfo);
	}

IL_0047:
	{
		ComputeBuffer_t195 * L_4 = (__this->___cbPoints_26);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		bool L_5 = RuntimeServices_EqualityOperator_m960(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/&RuntimeServices_EqualityOperator_m960_MethodInfo);
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	{
		ComputeBuffer_t195 * L_6 = (ComputeBuffer_t195 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ComputeBuffer_t195_il2cpp_TypeInfo));
		ComputeBuffer__ctor_m961(L_6, ((int32_t)90000), ((int32_t)28), 2, /*hidden argument*/&ComputeBuffer__ctor_m961_MethodInfo);
		__this->___cbPoints_26 = L_6;
	}

IL_006b:
	{
		return;
	}
}
// System.Single DepthOfFieldScatter::FocalDistance01(System.Single)
extern "C" float DepthOfFieldScatter_FocalDistance01_m816 (DepthOfFieldScatter_t196 * __this, float ___worldDist, MethodInfo* method)
{
	Vector3_t54  V_0 = {0};
	{
		Camera_t56 * L_0 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_1 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_1);
		float L_2 = Camera_get_nearClipPlane_m582(L_1, /*hidden argument*/&Camera_get_nearClipPlane_m582_MethodInfo);
		Camera_t56 * L_3 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_3);
		Transform_t85 * L_4 = Component_get_transform_m534(L_3, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_4);
		Vector3_t54  L_5 = Transform_get_forward_m635(L_4, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		Vector3_t54  L_6 = Vector3_op_Multiply_m950(NULL /*static, unused*/, ((float)((float)___worldDist-(float)L_2)), L_5, /*hidden argument*/&Vector3_op_Multiply_m950_MethodInfo);
		Camera_t56 * L_7 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_7);
		Transform_t85 * L_8 = Component_get_transform_m534(L_7, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_8);
		Vector3_t54  L_9 = Transform_get_position_m535(L_8, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_10 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		NullCheck(L_0);
		Vector3_t54  L_11 = Camera_WorldToViewportPoint_m951(L_0, L_10, /*hidden argument*/&Camera_WorldToViewportPoint_m951_MethodInfo);
		V_0 = L_11;
		NullCheck((&V_0));
		float L_12 = ((&V_0)->___z_3);
		Camera_t56 * L_13 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_13);
		float L_14 = Camera_get_farClipPlane_m219(L_13, /*hidden argument*/&Camera_get_farClipPlane_m219_MethodInfo);
		Camera_t56 * L_15 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_15);
		float L_16 = Camera_get_nearClipPlane_m582(L_15, /*hidden argument*/&Camera_get_nearClipPlane_m582_MethodInfo);
		return ((float)((float)L_12/(float)((float)((float)L_14-(float)L_16))));
	}
}
// System.Void DepthOfFieldScatter::WriteCoc(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Boolean)
extern "C" void DepthOfFieldScatter_WriteCoc_m817 (DepthOfFieldScatter_t196 * __this, RenderTexture_t21 * ___fromTo, RenderTexture_t21 * ___temp1, RenderTexture_t21 * ___temp2, bool ___fgDilate, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Material_t19 * L_0 = (__this->___dofHdrMaterial_16);
		NullCheck(L_0);
		Material_SetTexture_m186(L_0, (String_t*) &_stringLiteral273, (Texture_t22 *)NULL, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		bool L_1 = (__this->___nearBlur_13);
		if (!L_1)
		{
			goto IL_00b9;
		}
	}
	{
		if (!___fgDilate)
		{
			goto IL_00b9;
		}
	}
	{
		Material_t19 * L_2 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___fromTo, ___temp2, L_2, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		float L_3 = (__this->___internalBlurWidth_27);
		float L_4 = (__this->___foregroundOverlap_14);
		V_0 = ((float)((float)L_3*(float)L_4));
		Material_t19 * L_5 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_6 = {0};
		Vector4__ctor_m193(&L_6, (((float)0)), V_0, (((float)0)), V_0, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_5);
		Material_SetVector_m194(L_5, (String_t*) &_stringLiteral215, L_6, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_7 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___temp2, ___temp1, L_7, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_8 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_9 = {0};
		Vector4__ctor_m193(&L_9, V_0, (((float)0)), (((float)0)), V_0, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_8);
		Material_SetVector_m194(L_8, (String_t*) &_stringLiteral215, L_9, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_10 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___temp1, ___temp2, L_10, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_11 = (__this->___dofHdrMaterial_16);
		NullCheck(L_11);
		Material_SetTexture_m186(L_11, (String_t*) &_stringLiteral273, ___temp2, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_12 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___fromTo, ___fromTo, L_12, ((int32_t)13), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_00c7;
	}

IL_00b9:
	{
		Material_t19 * L_13 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___fromTo, ___fromTo, L_13, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_00c7:
	{
		return;
	}
}
// System.Void DepthOfFieldScatter::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo DepthOfFieldScatter_OnRenderImage_m818_MethodInfo;
extern "C" void DepthOfFieldScatter_OnRenderImage_m818 (DepthOfFieldScatter_t196 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	RenderTexture_t21 * V_0 = {0};
	RenderTexture_t21 * V_1 = {0};
	RenderTexture_t21 * V_2 = {0};
	RenderTexture_t21 * V_3 = {0};
	float V_4 = 0.0f;
	RenderTexture_t21 * V_5 = {0};
	RenderTexture_t21 * V_6 = {0};
	int32_t V_7 = 0;
	Vector3_t54  V_8 = {0};
	DepthOfFieldScatter_t196 * G_B8_0 = {0};
	DepthOfFieldScatter_t196 * G_B7_0 = {0};
	float G_B9_0 = 0.0f;
	DepthOfFieldScatter_t196 * G_B9_1 = {0};
	DepthOfFieldScatter_t196 * G_B16_0 = {0};
	DepthOfFieldScatter_t196 * G_B15_0 = {0};
	float G_B17_0 = 0.0f;
	DepthOfFieldScatter_t196 * G_B17_1 = {0};
	String_t* G_B21_0 = {0};
	Material_t19 * G_B21_1 = {0};
	String_t* G_B20_0 = {0};
	Material_t19 * G_B20_1 = {0};
	RenderTexture_t21 * G_B22_0 = {0};
	String_t* G_B22_1 = {0};
	Material_t19 * G_B22_2 = {0};
	int32_t G_B38_0 = 0;
	Material_t19 * G_B42_0 = {0};
	RenderTexture_t21 * G_B42_1 = {0};
	RenderTexture_t21 * G_B42_2 = {0};
	Material_t19 * G_B41_0 = {0};
	RenderTexture_t21 * G_B41_1 = {0};
	RenderTexture_t21 * G_B41_2 = {0};
	int32_t G_B43_0 = 0;
	Material_t19 * G_B43_1 = {0};
	RenderTexture_t21 * G_B43_2 = {0};
	RenderTexture_t21 * G_B43_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&DepthOfFieldScatter_CheckResources_m811_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_0ace;
	}

IL_0017:
	{
		float L_1 = (__this->___aperture_7);
		if ((((float)L_1) >= ((float)(((float)0)))))
		{
			goto IL_002c;
		}
	}
	{
		__this->___aperture_7 = (((float)0));
	}

IL_002c:
	{
		float L_2 = (__this->___maxBlurSize_9);
		if ((((float)L_2) >= ((float)(0.1f))))
		{
			goto IL_0047;
		}
	}
	{
		__this->___maxBlurSize_9 = (0.1f);
	}

IL_0047:
	{
		float L_3 = (__this->___focalSize_6);
		float L_4 = Mathf_Clamp_m192(NULL /*static, unused*/, L_3, (((float)0)), (2.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		__this->___focalSize_6 = L_4;
		float L_5 = (__this->___maxBlurSize_9);
		float L_6 = Mathf_Max_m915(NULL /*static, unused*/, L_5, (((float)0)), /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		__this->___internalBlurWidth_27 = L_6;
		Transform_t85 * L_7 = (__this->___focalTransform_8);
		bool L_8 = Object_op_Implicit_m173(NULL /*static, unused*/, L_7, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		G_B7_0 = __this;
		if (!L_8)
		{
			G_B8_0 = __this;
			goto IL_00b3;
		}
	}
	{
		Camera_t56 * L_9 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Transform_t85 * L_10 = (__this->___focalTransform_8);
		NullCheck(L_10);
		Vector3_t54  L_11 = Transform_get_position_m535(L_10, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		NullCheck(L_9);
		Vector3_t54  L_12 = Camera_WorldToViewportPoint_m951(L_9, L_11, /*hidden argument*/&Camera_WorldToViewportPoint_m951_MethodInfo);
		V_8 = L_12;
		NullCheck((&V_8));
		float L_13 = ((&V_8)->___z_3);
		Camera_t56 * L_14 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_14);
		float L_15 = Camera_get_farClipPlane_m219(L_14, /*hidden argument*/&Camera_get_farClipPlane_m219_MethodInfo);
		G_B9_0 = ((float)((float)L_13/(float)L_15));
		G_B9_1 = G_B7_0;
		goto IL_00bf;
	}

IL_00b3:
	{
		float L_16 = (__this->___focalLength_5);
		float L_17 = (float)VirtFuncInvoker1< float, float >::Invoke(&DepthOfFieldScatter_FocalDistance01_m816_MethodInfo, __this, L_16);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
	}

IL_00bf:
	{
		NullCheck(G_B9_1);
		G_B9_1->___focalDistance01_24 = G_B9_0;
		Material_t19 * L_18 = (__this->___dofHdrMaterial_16);
		float L_19 = (__this->___focalSize_6);
		float L_20 = (__this->___aperture_7);
		float L_21 = (__this->___focalDistance01_24);
		Vector4_t52  L_22 = {0};
		Vector4__ctor_m193(&L_22, (1.0f), L_19, ((float)((float)L_20/(float)(10.0f))), L_21, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_18);
		Material_SetVector_m194(L_18, (String_t*) &_stringLiteral264, L_22, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		V_0 = (RenderTexture_t21 *)NULL;
		V_1 = (RenderTexture_t21 *)NULL;
		V_2 = (RenderTexture_t21 *)NULL;
		V_3 = (RenderTexture_t21 *)NULL;
		float L_23 = (__this->___internalBlurWidth_27);
		float L_24 = (__this->___foregroundOverlap_14);
		V_4 = ((float)((float)L_23*(float)L_24));
		bool L_25 = (__this->___visualizeFocus_4);
		if (!L_25)
		{
			goto IL_0170;
		}
	}
	{
		NullCheck(___source);
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_28 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_29 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_26>>(int32_t)1)), ((int32_t)((int32_t)L_27>>(int32_t)1)), 0, L_28, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_0 = L_29;
		NullCheck(___source);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_32 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_33 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_30>>(int32_t)1)), ((int32_t)((int32_t)L_31>>(int32_t)1)), 0, L_32, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_1 = L_33;
		DepthOfFieldScatter_WriteCoc_m817(__this, ___source, V_0, V_1, 1, /*hidden argument*/&DepthOfFieldScatter_WriteCoc_m817_MethodInfo);
		Material_t19 * L_34 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_34, ((int32_t)16), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0aac;
	}

IL_0170:
	{
		int32_t L_35 = (__this->___blurType_11);
		if ((((uint32_t)L_35) != ((uint32_t)1)))
		{
			goto IL_0911;
		}
	}
	{
		Material_t19 * L_36 = (__this->___dx11bokehMaterial_18);
		bool L_37 = Object_op_Implicit_m173(NULL /*static, unused*/, L_36, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_37)
		{
			goto IL_0911;
		}
	}
	{
		bool L_38 = (__this->___highResolution_10);
		if (!L_38)
		{
			goto IL_051f;
		}
	}
	{
		float L_39 = (__this->___internalBlurWidth_27);
		G_B15_0 = __this;
		if ((((float)L_39) >= ((float)(0.1f))))
		{
			G_B16_0 = __this;
			goto IL_01b2;
		}
	}
	{
		G_B17_0 = (0.1f);
		G_B17_1 = G_B15_0;
		goto IL_01b8;
	}

IL_01b2:
	{
		float L_40 = (__this->___internalBlurWidth_27);
		G_B17_0 = L_40;
		G_B17_1 = G_B16_0;
	}

IL_01b8:
	{
		NullCheck(G_B17_1);
		G_B17_1->___internalBlurWidth_27 = G_B17_0;
		float L_41 = (__this->___internalBlurWidth_27);
		float L_42 = (__this->___foregroundOverlap_14);
		V_4 = ((float)((float)L_41*(float)L_42));
		NullCheck(___source);
		int32_t L_43 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_44 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_45 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_46 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, L_43, L_44, 0, L_45, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_0 = L_46;
		NullCheck(___source);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_48 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_49 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_50 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, L_47, L_48, 0, L_49, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_5 = L_50;
		DepthOfFieldScatter_WriteCoc_m817(__this, ___source, (RenderTexture_t21 *)NULL, (RenderTexture_t21 *)NULL, 0, /*hidden argument*/&DepthOfFieldScatter_WriteCoc_m817_MethodInfo);
		NullCheck(___source);
		int32_t L_51 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_53 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_54 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_51>>(int32_t)1)), ((int32_t)((int32_t)L_52>>(int32_t)1)), 0, L_53, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_2 = L_54;
		NullCheck(___source);
		int32_t L_55 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_56 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_57 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_58 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_55>>(int32_t)1)), ((int32_t)((int32_t)L_56>>(int32_t)1)), 0, L_57, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_3 = L_58;
		Material_t19 * L_59 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_2, L_59, ((int32_t)15), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_60 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_61 = {0};
		Vector4__ctor_m193(&L_61, (((float)0)), (1.5f), (((float)0)), (1.5f), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_60);
		Material_SetVector_m194(L_60, (String_t*) &_stringLiteral215, L_61, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_62 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_2, V_3, L_62, ((int32_t)19), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_63 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_64 = {0};
		Vector4__ctor_m193(&L_64, (1.5f), (((float)0)), (((float)0)), (1.5f), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_63);
		Material_SetVector_m194(L_63, (String_t*) &_stringLiteral215, L_64, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_65 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_2, L_65, ((int32_t)19), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		bool L_66 = (__this->___nearBlur_13);
		if (!L_66)
		{
			goto IL_02cf;
		}
	}
	{
		Material_t19 * L_67 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_3, L_67, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_02cf:
	{
		Material_t19 * L_68 = (__this->___dx11bokehMaterial_18);
		NullCheck(L_68);
		Material_SetTexture_m186(L_68, (String_t*) &_stringLiteral274, V_2, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_69 = (__this->___dx11bokehMaterial_18);
		float L_70 = (__this->___dx11SpawnHeuristic_20);
		NullCheck(L_69);
		Material_SetFloat_m195(L_69, (String_t*) &_stringLiteral275, L_70, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_71 = (__this->___dx11bokehMaterial_18);
		float L_72 = (__this->___dx11BokehScale_22);
		float L_73 = (__this->___dx11BokehIntensity_23);
		float L_74 = (__this->___dx11BokehThreshhold_19);
		float L_75 = Mathf_Clamp_m192(NULL /*static, unused*/, L_74, (0.005f), (4.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		float L_76 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_77 = {0};
		Vector4__ctor_m193(&L_77, L_72, L_73, L_75, L_76, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_71);
		Material_SetVector_m194(L_71, (String_t*) &_stringLiteral276, L_77, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_78 = (__this->___dx11bokehMaterial_18);
		bool L_79 = (__this->___nearBlur_13);
		G_B20_0 = (String_t*) &_stringLiteral277;
		G_B20_1 = L_78;
		if (!L_79)
		{
			G_B21_0 = (String_t*) &_stringLiteral277;
			G_B21_1 = L_78;
			goto IL_034e;
		}
	}
	{
		G_B22_0 = V_3;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		goto IL_034f;
	}

IL_034e:
	{
		G_B22_0 = ((RenderTexture_t21 *)(NULL));
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
	}

IL_034f:
	{
		NullCheck(G_B22_2);
		Material_SetTexture_m186(G_B22_2, G_B22_1, G_B22_0, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		ComputeBuffer_t195 * L_80 = (__this->___cbPoints_26);
		Graphics_SetRandomWriteTarget_m963(NULL /*static, unused*/, 1, L_80, /*hidden argument*/&Graphics_SetRandomWriteTarget_m963_MethodInfo);
		Material_t19 * L_81 = (__this->___dx11bokehMaterial_18);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_0, L_81, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Graphics_ClearRandomWriteTargets_m964(NULL /*static, unused*/, /*hidden argument*/&Graphics_ClearRandomWriteTargets_m964_MethodInfo);
		bool L_82 = (__this->___nearBlur_13);
		if (!L_82)
		{
			goto IL_03e2;
		}
	}
	{
		Material_t19 * L_83 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_84 = {0};
		Vector4__ctor_m193(&L_84, (((float)0)), V_4, (((float)0)), V_4, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_83);
		Material_SetVector_m194(L_83, (String_t*) &_stringLiteral215, L_84, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_85 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_2, L_85, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_86 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_87 = {0};
		Vector4__ctor_m193(&L_87, V_4, (((float)0)), (((float)0)), V_4, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_86);
		Material_SetVector_m194(L_86, (String_t*) &_stringLiteral215, L_87, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_88 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_2, V_3, L_88, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_89 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_0, L_89, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_03e2:
	{
		Material_t19 * L_90 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, V_5, L_90, ((int32_t)20), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_91 = (__this->___dofHdrMaterial_16);
		float L_92 = (__this->___internalBlurWidth_27);
		float L_93 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_94 = {0};
		Vector4__ctor_m193(&L_94, L_92, (((float)0)), (((float)0)), L_93, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_91);
		Material_SetVector_m194(L_91, (String_t*) &_stringLiteral215, L_94, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_95 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, ___source, L_95, 5, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_96 = (__this->___dofHdrMaterial_16);
		float L_97 = (__this->___internalBlurWidth_27);
		float L_98 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_99 = {0};
		Vector4__ctor_m193(&L_99, (((float)0)), L_97, (((float)0)), L_98, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_96);
		Material_SetVector_m194(L_96, (String_t*) &_stringLiteral215, L_99, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_100 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_5, L_100, ((int32_t)21), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Graphics_SetRenderTarget_m965(NULL /*static, unused*/, V_5, /*hidden argument*/&Graphics_SetRenderTarget_m965_MethodInfo);
		ComputeBuffer_t195 * L_101 = (__this->___cbPoints_26);
		ComputeBuffer_t195 * L_102 = (__this->___cbDrawArgs_25);
		ComputeBuffer_CopyCount_m966(NULL /*static, unused*/, L_101, L_102, 0, /*hidden argument*/&ComputeBuffer_CopyCount_m966_MethodInfo);
		Material_t19 * L_103 = (__this->___dx11bokehMaterial_18);
		ComputeBuffer_t195 * L_104 = (__this->___cbPoints_26);
		NullCheck(L_103);
		Material_SetBuffer_m967(L_103, (String_t*) &_stringLiteral278, L_104, /*hidden argument*/&Material_SetBuffer_m967_MethodInfo);
		Material_t19 * L_105 = (__this->___dx11bokehMaterial_18);
		Texture2D_t36 * L_106 = (__this->___dx11BokehTexture_21);
		NullCheck(L_105);
		Material_SetTexture_m186(L_105, (String_t*) &_stringLiteral42, L_106, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_107 = (__this->___dx11bokehMaterial_18);
		NullCheck(___source);
		int32_t L_108 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_109 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		float L_110 = (__this->___internalBlurWidth_27);
		Vector3_t54  L_111 = {0};
		Vector3__ctor_m222(&L_111, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_108)))))), ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_109)))))), L_110, /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		Vector4_t52  L_112 = Vector4_op_Implicit_m223(NULL /*static, unused*/, L_111, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(L_107);
		Material_SetVector_m194(L_107, (String_t*) &_stringLiteral279, L_112, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_113 = (__this->___dx11bokehMaterial_18);
		NullCheck(L_113);
		Material_SetPass_m956(L_113, 2, /*hidden argument*/&Material_SetPass_m956_MethodInfo);
		ComputeBuffer_t195 * L_114 = (__this->___cbDrawArgs_25);
		Graphics_DrawProceduralIndirect_m968(NULL /*static, unused*/, 5, L_114, 0, /*hidden argument*/&Graphics_DrawProceduralIndirect_m968_MethodInfo);
		Graphics_Blit_m184(NULL /*static, unused*/, V_5, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_5, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_2, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_3, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		goto IL_090c;
	}

IL_051f:
	{
		NullCheck(___source);
		int32_t L_115 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_116 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_117 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_118 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_115>>(int32_t)1)), ((int32_t)((int32_t)L_116>>(int32_t)1)), 0, L_117, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_0 = L_118;
		NullCheck(___source);
		int32_t L_119 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_121 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_122 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_119>>(int32_t)1)), ((int32_t)((int32_t)L_120>>(int32_t)1)), 0, L_121, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_1 = L_122;
		float L_123 = (__this->___internalBlurWidth_27);
		float L_124 = (__this->___foregroundOverlap_14);
		V_4 = ((float)((float)L_123*(float)L_124));
		DepthOfFieldScatter_WriteCoc_m817(__this, ___source, (RenderTexture_t21 *)NULL, (RenderTexture_t21 *)NULL, 0, /*hidden argument*/&DepthOfFieldScatter_WriteCoc_m817_MethodInfo);
		NullCheck(___source);
		Texture_set_filterMode_m917(___source, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		Material_t19 * L_125 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_0, L_125, 6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		NullCheck(V_0);
		int32_t L_126 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_0);
		NullCheck(V_0);
		int32_t L_127 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, V_0);
		NullCheck(V_0);
		int32_t L_128 = RenderTexture_get_format_m904(V_0, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_129 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_126>>(int32_t)1)), ((int32_t)((int32_t)L_127>>(int32_t)1)), 0, L_128, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_2 = L_129;
		NullCheck(V_0);
		int32_t L_130 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_0);
		NullCheck(V_0);
		int32_t L_131 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, V_0);
		NullCheck(V_0);
		int32_t L_132 = RenderTexture_get_format_m904(V_0, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_133 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_130>>(int32_t)1)), ((int32_t)((int32_t)L_131>>(int32_t)1)), 0, L_132, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_3 = L_133;
		Material_t19 * L_134 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, V_2, L_134, ((int32_t)15), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_135 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_136 = {0};
		Vector4__ctor_m193(&L_136, (((float)0)), (1.5f), (((float)0)), (1.5f), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_135);
		Material_SetVector_m194(L_135, (String_t*) &_stringLiteral215, L_136, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_137 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_2, V_3, L_137, ((int32_t)19), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_138 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_139 = {0};
		Vector4__ctor_m193(&L_139, (1.5f), (((float)0)), (((float)0)), (1.5f), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_138);
		Material_SetVector_m194(L_138, (String_t*) &_stringLiteral215, L_139, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_140 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_2, L_140, ((int32_t)19), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		V_6 = (RenderTexture_t21 *)NULL;
		bool L_141 = (__this->___nearBlur_13);
		if (!L_141)
		{
			goto IL_066f;
		}
	}
	{
		NullCheck(___source);
		int32_t L_142 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_143 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_144 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_145 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_142>>(int32_t)1)), ((int32_t)((int32_t)L_143>>(int32_t)1)), 0, L_144, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_6 = L_145;
		Material_t19 * L_146 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_6, L_146, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_066f:
	{
		Material_t19 * L_147 = (__this->___dx11bokehMaterial_18);
		NullCheck(L_147);
		Material_SetTexture_m186(L_147, (String_t*) &_stringLiteral274, V_2, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_148 = (__this->___dx11bokehMaterial_18);
		float L_149 = (__this->___dx11SpawnHeuristic_20);
		NullCheck(L_148);
		Material_SetFloat_m195(L_148, (String_t*) &_stringLiteral275, L_149, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_150 = (__this->___dx11bokehMaterial_18);
		float L_151 = (__this->___dx11BokehScale_22);
		float L_152 = (__this->___dx11BokehIntensity_23);
		float L_153 = (__this->___dx11BokehThreshhold_19);
		float L_154 = Mathf_Clamp_m192(NULL /*static, unused*/, L_153, (0.005f), (4.0f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		float L_155 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_156 = {0};
		Vector4__ctor_m193(&L_156, L_151, L_152, L_154, L_155, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_150);
		Material_SetVector_m194(L_150, (String_t*) &_stringLiteral276, L_156, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_157 = (__this->___dx11bokehMaterial_18);
		NullCheck(L_157);
		Material_SetTexture_m186(L_157, (String_t*) &_stringLiteral277, V_6, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		ComputeBuffer_t195 * L_158 = (__this->___cbPoints_26);
		Graphics_SetRandomWriteTarget_m963(NULL /*static, unused*/, 1, L_158, /*hidden argument*/&Graphics_SetRandomWriteTarget_m963_MethodInfo);
		Material_t19 * L_159 = (__this->___dx11bokehMaterial_18);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, V_1, L_159, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Graphics_ClearRandomWriteTargets_m964(NULL /*static, unused*/, /*hidden argument*/&Graphics_ClearRandomWriteTargets_m964_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_2, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_3, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		bool L_160 = (__this->___nearBlur_13);
		if (!L_160)
		{
			goto IL_0781;
		}
	}
	{
		Material_t19 * L_161 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_162 = {0};
		Vector4__ctor_m193(&L_162, (((float)0)), V_4, (((float)0)), V_4, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_161);
		Material_SetVector_m194(L_161, (String_t*) &_stringLiteral215, L_162, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_163 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_6, V_0, L_163, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_164 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_165 = {0};
		Vector4__ctor_m193(&L_165, V_4, (((float)0)), (((float)0)), V_4, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_164);
		Material_SetVector_m194(L_164, (String_t*) &_stringLiteral215, L_165, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_166 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, V_6, L_166, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_167 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_6, V_1, L_167, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_0781:
	{
		Material_t19 * L_168 = (__this->___dofHdrMaterial_16);
		float L_169 = (__this->___internalBlurWidth_27);
		float L_170 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_171 = {0};
		Vector4__ctor_m193(&L_171, L_169, (((float)0)), (((float)0)), L_170, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_168);
		Material_SetVector_m194(L_168, (String_t*) &_stringLiteral215, L_171, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_172 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_1, V_0, L_172, 5, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_173 = (__this->___dofHdrMaterial_16);
		float L_174 = (__this->___internalBlurWidth_27);
		float L_175 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_176 = {0};
		Vector4__ctor_m193(&L_176, (((float)0)), L_174, (((float)0)), L_175, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_173);
		Material_SetVector_m194(L_173, (String_t*) &_stringLiteral215, L_176, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_177 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, V_1, L_177, 5, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Graphics_SetRenderTarget_m965(NULL /*static, unused*/, V_1, /*hidden argument*/&Graphics_SetRenderTarget_m965_MethodInfo);
		ComputeBuffer_t195 * L_178 = (__this->___cbPoints_26);
		ComputeBuffer_t195 * L_179 = (__this->___cbDrawArgs_25);
		ComputeBuffer_CopyCount_m966(NULL /*static, unused*/, L_178, L_179, 0, /*hidden argument*/&ComputeBuffer_CopyCount_m966_MethodInfo);
		Material_t19 * L_180 = (__this->___dx11bokehMaterial_18);
		ComputeBuffer_t195 * L_181 = (__this->___cbPoints_26);
		NullCheck(L_180);
		Material_SetBuffer_m967(L_180, (String_t*) &_stringLiteral278, L_181, /*hidden argument*/&Material_SetBuffer_m967_MethodInfo);
		Material_t19 * L_182 = (__this->___dx11bokehMaterial_18);
		Texture2D_t36 * L_183 = (__this->___dx11BokehTexture_21);
		NullCheck(L_182);
		Material_SetTexture_m186(L_182, (String_t*) &_stringLiteral42, L_183, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_184 = (__this->___dx11bokehMaterial_18);
		NullCheck(V_1);
		int32_t L_185 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_1);
		NullCheck(V_1);
		int32_t L_186 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, V_1);
		float L_187 = (__this->___internalBlurWidth_27);
		Vector3_t54  L_188 = {0};
		Vector3__ctor_m222(&L_188, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_185)))))), ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_186)))))), L_187, /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		Vector4_t52  L_189 = Vector4_op_Implicit_m223(NULL /*static, unused*/, L_188, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(L_184);
		Material_SetVector_m194(L_184, (String_t*) &_stringLiteral279, L_189, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_190 = (__this->___dx11bokehMaterial_18);
		NullCheck(L_190);
		Material_SetPass_m956(L_190, 1, /*hidden argument*/&Material_SetPass_m956_MethodInfo);
		ComputeBuffer_t195 * L_191 = (__this->___cbDrawArgs_25);
		Graphics_DrawProceduralIndirect_m968(NULL /*static, unused*/, 5, L_191, 0, /*hidden argument*/&Graphics_DrawProceduralIndirect_m968_MethodInfo);
		Material_t19 * L_192 = (__this->___dofHdrMaterial_16);
		NullCheck(L_192);
		Material_SetTexture_m186(L_192, (String_t*) &_stringLiteral280, V_1, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_193 = (__this->___dofHdrMaterial_16);
		NullCheck(L_193);
		Material_SetTexture_m186(L_193, (String_t*) &_stringLiteral273, V_6, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_194 = (__this->___dofHdrMaterial_16);
		NullCheck(___source);
		int32_t L_195 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(V_1);
		int32_t L_196 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_1);
		float L_197 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_198 = Vector4_get_one_m969(NULL /*static, unused*/, /*hidden argument*/&Vector4_get_one_m969_MethodInfo);
		Vector4_t52  L_199 = Vector4_op_Multiply_m970(NULL /*static, unused*/, ((float)((float)((float)((float)((float)((float)(1.0f)*(float)(((float)L_195))))/(float)((float)((float)(1.0f)*(float)(((float)L_196))))))*(float)L_197)), L_198, /*hidden argument*/&Vector4_op_Multiply_m970_MethodInfo);
		NullCheck(L_194);
		Material_SetVector_m194(L_194, (String_t*) &_stringLiteral215, L_199, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_200 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_200, ((int32_t)9), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		bool L_201 = Object_op_Implicit_m173(NULL /*static, unused*/, V_6, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_201)
		{
			goto IL_090c;
		}
	}
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_6, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_090c:
	{
		goto IL_0aac;
	}

IL_0911:
	{
		NullCheck(___source);
		int32_t L_202 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_203 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_204 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_205 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_202>>(int32_t)1)), ((int32_t)((int32_t)L_203>>(int32_t)1)), 0, L_204, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_0 = L_205;
		NullCheck(___source);
		int32_t L_206 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_207 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_208 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_209 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_206>>(int32_t)1)), ((int32_t)((int32_t)L_207>>(int32_t)1)), 0, L_208, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_1 = L_209;
		NullCheck(___source);
		Texture_set_filterMode_m917(___source, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		bool L_210 = (__this->___highResolution_10);
		if (!L_210)
		{
			goto IL_096f;
		}
	}
	{
		float L_211 = (__this->___internalBlurWidth_27);
		__this->___internalBlurWidth_27 = ((float)((float)L_211*(float)(2.0f)));
	}

IL_096f:
	{
		DepthOfFieldScatter_WriteCoc_m817(__this, ___source, V_0, V_1, 1, /*hidden argument*/&DepthOfFieldScatter_WriteCoc_m817_MethodInfo);
		int32_t L_212 = (__this->___blurSampleCount_12);
		if ((((int32_t)L_212) == ((int32_t)2)))
		{
			goto IL_0991;
		}
	}
	{
		int32_t L_213 = (__this->___blurSampleCount_12);
		if ((((uint32_t)L_213) != ((uint32_t)1)))
		{
			goto IL_0998;
		}
	}

IL_0991:
	{
		G_B38_0 = ((int32_t)17);
		goto IL_099a;
	}

IL_0998:
	{
		G_B38_0 = ((int32_t)11);
	}

IL_099a:
	{
		V_7 = G_B38_0;
		bool L_214 = (__this->___highResolution_10);
		if (!L_214)
		{
			goto IL_09e3;
		}
	}
	{
		Material_t19 * L_215 = (__this->___dofHdrMaterial_16);
		float L_216 = (__this->___internalBlurWidth_27);
		float L_217 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_218 = {0};
		Vector4__ctor_m193(&L_218, (((float)0)), L_216, (0.025f), L_217, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_215);
		Material_SetVector_m194(L_215, (String_t*) &_stringLiteral215, L_218, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_219 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_219, V_7, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_0aac;
	}

IL_09e3:
	{
		Material_t19 * L_220 = (__this->___dofHdrMaterial_16);
		float L_221 = (__this->___internalBlurWidth_27);
		float L_222 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_223 = {0};
		Vector4__ctor_m193(&L_223, (((float)0)), L_221, (0.1f), L_222, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_220);
		Material_SetVector_m194(L_220, (String_t*) &_stringLiteral215, L_223, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_224 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_0, L_224, 6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_225 = (__this->___dofHdrMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, V_0, V_1, L_225, V_7, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_226 = (__this->___dofHdrMaterial_16);
		NullCheck(L_226);
		Material_SetTexture_m186(L_226, (String_t*) &_stringLiteral280, V_1, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_227 = (__this->___dofHdrMaterial_16);
		NullCheck(L_227);
		Material_SetTexture_m186(L_227, (String_t*) &_stringLiteral273, (Texture_t22 *)NULL, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_228 = (__this->___dofHdrMaterial_16);
		Vector4_t52  L_229 = Vector4_get_one_m969(NULL /*static, unused*/, /*hidden argument*/&Vector4_get_one_m969_MethodInfo);
		NullCheck(___source);
		int32_t L_230 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(V_1);
		int32_t L_231 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_1);
		Vector4_t52  L_232 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_229, ((float)((float)((float)((float)(1.0f)*(float)(((float)L_230))))/(float)((float)((float)(1.0f)*(float)(((float)L_231)))))), /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		float L_233 = (__this->___internalBlurWidth_27);
		Vector4_t52  L_234 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_232, L_233, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_228);
		Material_SetVector_m194(L_228, (String_t*) &_stringLiteral215, L_234, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_235 = (__this->___dofHdrMaterial_16);
		int32_t L_236 = (__this->___blurSampleCount_12);
		G_B41_0 = L_235;
		G_B41_1 = ___destination;
		G_B41_2 = ___source;
		if ((((uint32_t)L_236) != ((uint32_t)2)))
		{
			G_B42_0 = L_235;
			G_B42_1 = ___destination;
			G_B42_2 = ___source;
			goto IL_0aa5;
		}
	}
	{
		G_B43_0 = ((int32_t)18);
		G_B43_1 = G_B41_0;
		G_B43_2 = G_B41_1;
		G_B43_3 = G_B41_2;
		goto IL_0aa7;
	}

IL_0aa5:
	{
		G_B43_0 = ((int32_t)12);
		G_B43_1 = G_B42_0;
		G_B43_2 = G_B42_1;
		G_B43_3 = G_B42_2;
	}

IL_0aa7:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B43_3, G_B43_2, G_B43_1, G_B43_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_0aac:
	{
		bool L_237 = Object_op_Implicit_m173(NULL /*static, unused*/, V_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_237)
		{
			goto IL_0abd;
		}
	}
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_0, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_0abd:
	{
		bool L_238 = Object_op_Implicit_m173(NULL /*static, unused*/, V_1, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_238)
		{
			goto IL_0ace;
		}
	}
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_1, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_0ace:
	{
		return;
	}
}
// System.Void DepthOfFieldScatter::Main()
extern MethodInfo DepthOfFieldScatter_Main_m819_MethodInfo;
extern "C" void DepthOfFieldScatter_Main_m819 (DepthOfFieldScatter_t196 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// EdgeDetectMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_EdgeDetectMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EdgeDetectMode_t197_il2cpp_TypeInfo;
// EdgeDetectMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_EdgeDetectModeMethodDeclarations.h"



// EdgeDetectEffectNormals
#include "AssemblyU2DUnityScriptU2Dfirstpass_EdgeDetectEffectNormals.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EdgeDetectEffectNormals_t198_il2cpp_TypeInfo;
// EdgeDetectEffectNormals
#include "AssemblyU2DUnityScriptU2Dfirstpass_EdgeDetectEffectNormalsMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo Vector2_t32_il2cpp_TypeInfo;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo EdgeDetectEffectNormals_SetCameraFlag_m823_MethodInfo;
extern MethodInfo EdgeDetectEffectNormals_CheckResources_m821_MethodInfo;
extern MethodInfo Vector2__ctor_m179_MethodInfo;


// System.Void EdgeDetectEffectNormals::.ctor()
extern MethodInfo EdgeDetectEffectNormals__ctor_m820_MethodInfo;
extern "C" void EdgeDetectEffectNormals__ctor_m820 (EdgeDetectEffectNormals_t198 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___mode_4 = 3;
		__this->___sensitivityDepth_5 = (1.0f);
		__this->___sensitivityNormals_6 = (1.0f);
		__this->___edgeExp_7 = (1.0f);
		__this->___sampleDist_8 = (1.0f);
		Color_t29  L_0 = Color_get_white_m903(NULL /*static, unused*/, /*hidden argument*/&Color_get_white_m903_MethodInfo);
		__this->___edgesOnlyBgColor_10 = L_0;
		__this->___oldMode_13 = 3;
		return;
	}
}
// System.Boolean EdgeDetectEffectNormals::CheckResources()
extern "C" bool EdgeDetectEffectNormals_CheckResources_m821 (EdgeDetectEffectNormals_t198 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 1);
		Shader_t18 * L_0 = (__this->___edgeDetectShader_11);
		Material_t19 * L_1 = (__this->___edgeDetectMaterial_12);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___edgeDetectMaterial_12 = L_2;
		int32_t L_3 = (__this->___mode_4);
		int32_t L_4 = (__this->___oldMode_13);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0037;
		}
	}
	{
		VirtActionInvoker0::Invoke(&EdgeDetectEffectNormals_SetCameraFlag_m823_MethodInfo, __this);
	}

IL_0037:
	{
		int32_t L_5 = (__this->___mode_4);
		__this->___oldMode_13 = L_5;
		bool L_6 = (__this->___isSupported_3);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0054:
	{
		bool L_7 = (__this->___isSupported_3);
		return L_7;
	}
}
// System.Void EdgeDetectEffectNormals::Start()
extern MethodInfo EdgeDetectEffectNormals_Start_m822_MethodInfo;
extern "C" void EdgeDetectEffectNormals_Start_m822 (EdgeDetectEffectNormals_t198 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mode_4);
		__this->___oldMode_13 = L_0;
		return;
	}
}
// System.Void EdgeDetectEffectNormals::SetCameraFlag()
extern "C" void EdgeDetectEffectNormals_SetCameraFlag_m823 (EdgeDetectEffectNormals_t198 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mode_4);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		Camera_t56 * L_1 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_2 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Camera_get_depthTextureMode_m216(L_2, /*hidden argument*/&Camera_get_depthTextureMode_m216_MethodInfo);
		NullCheck(L_1);
		Camera_set_depthTextureMode_m217(L_1, ((int32_t)((int32_t)L_3|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m217_MethodInfo);
		goto IL_0041;
	}

IL_0029:
	{
		Camera_t56 * L_4 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_5 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = Camera_get_depthTextureMode_m216(L_5, /*hidden argument*/&Camera_get_depthTextureMode_m216_MethodInfo);
		NullCheck(L_4);
		Camera_set_depthTextureMode_m217(L_4, ((int32_t)((int32_t)L_6|(int32_t)2)), /*hidden argument*/&Camera_set_depthTextureMode_m217_MethodInfo);
	}

IL_0041:
	{
		return;
	}
}
// System.Void EdgeDetectEffectNormals::OnEnable()
extern MethodInfo EdgeDetectEffectNormals_OnEnable_m824_MethodInfo;
extern "C" void EdgeDetectEffectNormals_OnEnable_m824 (EdgeDetectEffectNormals_t198 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&EdgeDetectEffectNormals_SetCameraFlag_m823_MethodInfo, __this);
		return;
	}
}
// System.Void EdgeDetectEffectNormals::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo EdgeDetectEffectNormals_OnRenderImage_m825_MethodInfo;
extern "C" void EdgeDetectEffectNormals_OnRenderImage_m825 (EdgeDetectEffectNormals_t198 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	Vector2_t32  V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&EdgeDetectEffectNormals_CheckResources_m821_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_00c8;
	}

IL_0017:
	{
		float L_1 = (__this->___sensitivityDepth_5);
		float L_2 = (__this->___sensitivityNormals_6);
		Vector2_t32  L_3 = {0};
		Vector2__ctor_m179(&L_3, L_1, L_2, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		V_0 = L_3;
		Material_t19 * L_4 = (__this->___edgeDetectMaterial_12);
		NullCheck((&V_0));
		float L_5 = ((&V_0)->___x_1);
		NullCheck((&V_0));
		float L_6 = ((&V_0)->___y_2);
		NullCheck((&V_0));
		float L_7 = ((&V_0)->___y_2);
		Vector4_t52  L_8 = {0};
		Vector4__ctor_m193(&L_8, L_5, L_6, (1.0f), L_7, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_4);
		Material_SetVector_m194(L_4, (String_t*) &_stringLiteral281, L_8, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_9 = (__this->___edgeDetectMaterial_12);
		float L_10 = (__this->___edgesOnly_9);
		NullCheck(L_9);
		Material_SetFloat_m195(L_9, (String_t*) &_stringLiteral282, L_10, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_11 = (__this->___edgeDetectMaterial_12);
		float L_12 = (__this->___sampleDist_8);
		NullCheck(L_11);
		Material_SetFloat_m195(L_11, (String_t*) &_stringLiteral283, L_12, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_13 = (__this->___edgeDetectMaterial_12);
		Color_t29  L_14 = (__this->___edgesOnlyBgColor_10);
		Vector4_t52  L_15 = Color_op_Implicit_m908(NULL /*static, unused*/, L_14, /*hidden argument*/&Color_op_Implicit_m908_MethodInfo);
		NullCheck(L_13);
		Material_SetVector_m194(L_13, (String_t*) &_stringLiteral284, L_15, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_16 = (__this->___edgeDetectMaterial_12);
		float L_17 = (__this->___edgeExp_7);
		NullCheck(L_16);
		Material_SetFloat_m195(L_16, (String_t*) &_stringLiteral285, L_17, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_18 = (__this->___edgeDetectMaterial_12);
		int32_t L_19 = (__this->___mode_4);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_18, L_19, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_00c8:
	{
		return;
	}
}
// System.Void EdgeDetectEffectNormals::Main()
extern MethodInfo EdgeDetectEffectNormals_Main_m826_MethodInfo;
extern "C" void EdgeDetectEffectNormals_Main_m826 (EdgeDetectEffectNormals_t198 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Fisheye
#include "AssemblyU2DUnityScriptU2Dfirstpass_Fisheye.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Fisheye_t199_il2cpp_TypeInfo;
// Fisheye
#include "AssemblyU2DUnityScriptU2Dfirstpass_FisheyeMethodDeclarations.h"

extern MethodInfo Fisheye_CheckResources_m828_MethodInfo;


// System.Void Fisheye::.ctor()
extern MethodInfo Fisheye__ctor_m827_MethodInfo;
extern "C" void Fisheye__ctor_m827 (Fisheye_t199 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___strengthX_4 = (0.05f);
		__this->___strengthY_5 = (0.05f);
		return;
	}
}
// System.Boolean Fisheye::CheckResources()
extern "C" bool Fisheye_CheckResources_m828 (Fisheye_t199 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		Shader_t18 * L_0 = (__this->___fishEyeShader_6);
		Material_t19 * L_1 = (__this->___fisheyeMaterial_7);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___fisheyeMaterial_7 = L_2;
		bool L_3 = (__this->___isSupported_3);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0031:
	{
		bool L_4 = (__this->___isSupported_3);
		return L_4;
	}
}
// System.Void Fisheye::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo Fisheye_OnRenderImage_m829_MethodInfo;
extern "C" void Fisheye_OnRenderImage_m829 (Fisheye_t199 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Fisheye_CheckResources_m828_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_007f;
	}

IL_0017:
	{
		V_0 = (0.15625f);
		NullCheck(___source);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		V_1 = ((float)((float)((float)((float)(((float)L_1))*(float)(1.0f)))/(float)((float)((float)(((float)L_2))*(float)(1.0f)))));
		Material_t19 * L_3 = (__this->___fisheyeMaterial_7);
		float L_4 = (__this->___strengthX_4);
		float L_5 = (__this->___strengthY_5);
		float L_6 = (__this->___strengthX_4);
		float L_7 = (__this->___strengthY_5);
		Vector4_t52  L_8 = {0};
		Vector4__ctor_m193(&L_8, ((float)((float)((float)((float)L_4*(float)V_1))*(float)V_0)), ((float)((float)L_5*(float)V_0)), ((float)((float)((float)((float)L_6*(float)V_1))*(float)V_0)), ((float)((float)L_7*(float)V_0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_3);
		Material_SetVector_m194(L_3, (String_t*) &_stringLiteral260, L_8, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_9 = (__this->___fisheyeMaterial_7);
		Graphics_Blit_m187(NULL /*static, unused*/, ___source, ___destination, L_9, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
	}

IL_007f:
	{
		return;
	}
}
// System.Void Fisheye::Main()
extern MethodInfo Fisheye_Main_m830_MethodInfo;
extern "C" void Fisheye_Main_m830 (Fisheye_t199 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// GlobalFog/FogMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_GlobalFog_FogMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FogMode_t200_il2cpp_TypeInfo;
// GlobalFog/FogMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_GlobalFog_FogModeMethodDeclarations.h"



// GlobalFog
#include "AssemblyU2DUnityScriptU2Dfirstpass_GlobalFog.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GlobalFog_t201_il2cpp_TypeInfo;
// GlobalFog
#include "AssemblyU2DUnityScriptU2Dfirstpass_GlobalFogMethodDeclarations.h"

extern MethodInfo Color_get_grey_m617_MethodInfo;
extern MethodInfo GlobalFog_CheckResources_m832_MethodInfo;
extern MethodInfo Camera_get_aspect_m221_MethodInfo;
extern MethodInfo Mathf_Tan_m220_MethodInfo;
extern MethodInfo Vector3_Normalize_m971_MethodInfo;
extern MethodInfo Matrix4x4_SetRow_m972_MethodInfo;
extern MethodInfo Vector4__ctor_m973_MethodInfo;
extern MethodInfo GlobalFog_CustomGraphicsBlit_m834_MethodInfo;
extern MethodInfo GL_LoadOrtho_m974_MethodInfo;
extern MethodInfo GL_Begin_m975_MethodInfo;
extern MethodInfo GL_MultiTexCoord2_m976_MethodInfo;
extern MethodInfo GL_Vertex3_m977_MethodInfo;
extern MethodInfo GL_End_m978_MethodInfo;


// System.Void GlobalFog::.ctor()
extern MethodInfo GlobalFog__ctor_m831_MethodInfo;
extern "C" void GlobalFog__ctor_m831 (GlobalFog_t201 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___fogMode_4 = 0;
		__this->___CAMERA_NEAR_5 = (0.5f);
		__this->___CAMERA_FAR_6 = (50.0f);
		__this->___CAMERA_FOV_7 = (60.0f);
		__this->___CAMERA_ASPECT_RATIO_8 = (1.333333f);
		__this->___startDistance_9 = (200.0f);
		__this->___globalDensity_10 = (1.0f);
		__this->___heightScale_11 = (100.0f);
		Color_t29  L_0 = Color_get_grey_m617(NULL /*static, unused*/, /*hidden argument*/&Color_get_grey_m617_MethodInfo);
		__this->___globalFogColor_13 = L_0;
		return;
	}
}
// System.Boolean GlobalFog::CheckResources()
extern "C" bool GlobalFog_CheckResources_m832 (GlobalFog_t201 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 1);
		Shader_t18 * L_0 = (__this->___fogShader_14);
		Material_t19 * L_1 = (__this->___fogMaterial_15);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___fogMaterial_15 = L_2;
		bool L_3 = (__this->___isSupported_3);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0031:
	{
		bool L_4 = (__this->___isSupported_3);
		return L_4;
	}
}
// System.Void GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo GlobalFog_OnRenderImage_m833_MethodInfo;
extern "C" void GlobalFog_OnRenderImage_m833 (GlobalFog_t201 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	Matrix4x4_t53  V_0 = {0};
	Vector4_t52  V_1 = {0};
	Vector3_t54  V_2 = {0};
	float V_3 = 0.0f;
	Vector3_t54  V_4 = {0};
	Vector3_t54  V_5 = {0};
	Vector3_t54  V_6 = {0};
	float V_7 = 0.0f;
	Vector3_t54  V_8 = {0};
	Vector3_t54  V_9 = {0};
	Vector3_t54  V_10 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&GlobalFog_CheckResources_m832_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_02f8;
	}

IL_0017:
	{
		Camera_t56 * L_1 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_1);
		float L_2 = Camera_get_nearClipPlane_m582(L_1, /*hidden argument*/&Camera_get_nearClipPlane_m582_MethodInfo);
		__this->___CAMERA_NEAR_5 = L_2;
		Camera_t56 * L_3 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_3);
		float L_4 = Camera_get_farClipPlane_m219(L_3, /*hidden argument*/&Camera_get_farClipPlane_m219_MethodInfo);
		__this->___CAMERA_FAR_6 = L_4;
		Camera_t56 * L_5 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_5);
		float L_6 = Camera_get_fieldOfView_m218(L_5, /*hidden argument*/&Camera_get_fieldOfView_m218_MethodInfo);
		__this->___CAMERA_FOV_7 = L_6;
		Camera_t56 * L_7 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_7);
		float L_8 = Camera_get_aspect_m221(L_7, /*hidden argument*/&Camera_get_aspect_m221_MethodInfo);
		__this->___CAMERA_ASPECT_RATIO_8 = L_8;
		Matrix4x4_t53  L_9 = Matrix4x4_get_identity_m920(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_identity_m920_MethodInfo);
		V_0 = L_9;
		Initobj (InitializedTypeInfo(&Vector4_t52_il2cpp_TypeInfo), (&V_1));
		Initobj (InitializedTypeInfo(&Vector3_t54_il2cpp_TypeInfo), (&V_2));
		float L_10 = (__this->___CAMERA_FOV_7);
		V_3 = ((float)((float)L_10*(float)(0.5f)));
		Camera_t56 * L_11 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_11);
		Transform_t85 * L_12 = Component_get_transform_m534(L_11, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_12);
		Vector3_t54  L_13 = Transform_get_right_m926(L_12, /*hidden argument*/&Transform_get_right_m926_MethodInfo);
		float L_14 = (__this->___CAMERA_NEAR_5);
		Vector3_t54  L_15 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		float L_16 = tanf(((float)((float)V_3*(float)(0.0174532924f))));
		Vector3_t54  L_17 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		float L_18 = (__this->___CAMERA_ASPECT_RATIO_8);
		Vector3_t54  L_19 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		V_4 = L_19;
		Camera_t56 * L_20 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_20);
		Transform_t85 * L_21 = Component_get_transform_m534(L_20, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_21);
		Vector3_t54  L_22 = Transform_get_up_m536(L_21, /*hidden argument*/&Transform_get_up_m536_MethodInfo);
		float L_23 = (__this->___CAMERA_NEAR_5);
		Vector3_t54  L_24 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		float L_25 = tanf(((float)((float)V_3*(float)(0.0174532924f))));
		Vector3_t54  L_26 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		V_5 = L_26;
		Camera_t56 * L_27 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_27);
		Transform_t85 * L_28 = Component_get_transform_m534(L_27, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_28);
		Vector3_t54  L_29 = Transform_get_forward_m635(L_28, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		float L_30 = (__this->___CAMERA_NEAR_5);
		Vector3_t54  L_31 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Vector3_t54  L_32 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, L_31, V_4, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		Vector3_t54  L_33 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_32, V_5, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		V_6 = L_33;
		float L_34 = Vector3_get_magnitude_m924((&V_6), /*hidden argument*/&Vector3_get_magnitude_m924_MethodInfo);
		float L_35 = (__this->___CAMERA_FAR_6);
		float L_36 = (__this->___CAMERA_NEAR_5);
		V_7 = ((float)((float)((float)((float)L_34*(float)L_35))/(float)L_36));
		Vector3_Normalize_m971((&V_6), /*hidden argument*/&Vector3_Normalize_m971_MethodInfo);
		Vector3_t54  L_37 = Vector3_op_Multiply_m601(NULL /*static, unused*/, V_6, V_7, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		V_6 = L_37;
		Camera_t56 * L_38 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_38);
		Transform_t85 * L_39 = Component_get_transform_m534(L_38, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_39);
		Vector3_t54  L_40 = Transform_get_forward_m635(L_39, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		float L_41 = (__this->___CAMERA_NEAR_5);
		Vector3_t54  L_42 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Vector3_t54  L_43 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_42, V_4, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		Vector3_t54  L_44 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_43, V_5, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		V_8 = L_44;
		Vector3_Normalize_m971((&V_8), /*hidden argument*/&Vector3_Normalize_m971_MethodInfo);
		Vector3_t54  L_45 = Vector3_op_Multiply_m601(NULL /*static, unused*/, V_8, V_7, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		V_8 = L_45;
		Camera_t56 * L_46 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_46);
		Transform_t85 * L_47 = Component_get_transform_m534(L_46, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_47);
		Vector3_t54  L_48 = Transform_get_forward_m635(L_47, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		float L_49 = (__this->___CAMERA_NEAR_5);
		Vector3_t54  L_50 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Vector3_t54  L_51 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_50, V_4, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		Vector3_t54  L_52 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, L_51, V_5, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		V_9 = L_52;
		Vector3_Normalize_m971((&V_9), /*hidden argument*/&Vector3_Normalize_m971_MethodInfo);
		Vector3_t54  L_53 = Vector3_op_Multiply_m601(NULL /*static, unused*/, V_9, V_7, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		V_9 = L_53;
		Camera_t56 * L_54 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_54);
		Transform_t85 * L_55 = Component_get_transform_m534(L_54, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_55);
		Vector3_t54  L_56 = Transform_get_forward_m635(L_55, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		float L_57 = (__this->___CAMERA_NEAR_5);
		Vector3_t54  L_58 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_56, L_57, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Vector3_t54  L_59 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, L_58, V_4, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		Vector3_t54  L_60 = Vector3_op_Subtraction_m923(NULL /*static, unused*/, L_59, V_5, /*hidden argument*/&Vector3_op_Subtraction_m923_MethodInfo);
		V_10 = L_60;
		Vector3_Normalize_m971((&V_10), /*hidden argument*/&Vector3_Normalize_m971_MethodInfo);
		Vector3_t54  L_61 = Vector3_op_Multiply_m601(NULL /*static, unused*/, V_10, V_7, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		V_10 = L_61;
		Vector4_t52  L_62 = Vector4_op_Implicit_m223(NULL /*static, unused*/, V_6, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		Matrix4x4_SetRow_m972((&V_0), 0, L_62, /*hidden argument*/&Matrix4x4_SetRow_m972_MethodInfo);
		Vector4_t52  L_63 = Vector4_op_Implicit_m223(NULL /*static, unused*/, V_8, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		Matrix4x4_SetRow_m972((&V_0), 1, L_63, /*hidden argument*/&Matrix4x4_SetRow_m972_MethodInfo);
		Vector4_t52  L_64 = Vector4_op_Implicit_m223(NULL /*static, unused*/, V_9, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		Matrix4x4_SetRow_m972((&V_0), 2, L_64, /*hidden argument*/&Matrix4x4_SetRow_m972_MethodInfo);
		Vector4_t52  L_65 = Vector4_op_Implicit_m223(NULL /*static, unused*/, V_10, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		Matrix4x4_SetRow_m972((&V_0), 3, L_65, /*hidden argument*/&Matrix4x4_SetRow_m972_MethodInfo);
		Material_t19 * L_66 = (__this->___fogMaterial_15);
		NullCheck(L_66);
		Material_SetMatrix_m205(L_66, (String_t*) &_stringLiteral286, V_0, /*hidden argument*/&Material_SetMatrix_m205_MethodInfo);
		Material_t19 * L_67 = (__this->___fogMaterial_15);
		Camera_t56 * L_68 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_68);
		Transform_t85 * L_69 = Component_get_transform_m534(L_68, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_69);
		Vector3_t54  L_70 = Transform_get_position_m535(L_69, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector4_t52  L_71 = Vector4_op_Implicit_m223(NULL /*static, unused*/, L_70, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(L_67);
		Material_SetVector_m194(L_67, (String_t*) &_stringLiteral287, L_71, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_72 = (__this->___fogMaterial_15);
		float L_73 = (__this->___startDistance_9);
		float L_74 = (__this->___startDistance_9);
		Vector4_t52  L_75 = {0};
		Vector4__ctor_m973(&L_75, ((float)((float)(1.0f)/(float)L_73)), ((float)((float)V_7-(float)L_74)), /*hidden argument*/&Vector4__ctor_m973_MethodInfo);
		NullCheck(L_72);
		Material_SetVector_m194(L_72, (String_t*) &_stringLiteral288, L_75, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_76 = (__this->___fogMaterial_15);
		float L_77 = (__this->___height_12);
		float L_78 = (__this->___heightScale_11);
		Vector4_t52  L_79 = {0};
		Vector4__ctor_m973(&L_79, L_77, ((float)((float)(1.0f)/(float)L_78)), /*hidden argument*/&Vector4__ctor_m973_MethodInfo);
		NullCheck(L_76);
		Material_SetVector_m194(L_76, (String_t*) &_stringLiteral289, L_79, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_80 = (__this->___fogMaterial_15);
		float L_81 = (__this->___globalDensity_10);
		NullCheck(L_80);
		Material_SetFloat_m195(L_80, (String_t*) &_stringLiteral290, ((float)((float)L_81*(float)(0.01f))), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_82 = (__this->___fogMaterial_15);
		Color_t29  L_83 = (__this->___globalFogColor_13);
		NullCheck(L_82);
		Material_SetColor_m940(L_82, (String_t*) &_stringLiteral291, L_83, /*hidden argument*/&Material_SetColor_m940_MethodInfo);
		Material_t19 * L_84 = (__this->___fogMaterial_15);
		int32_t L_85 = (__this->___fogMode_4);
		GlobalFog_CustomGraphicsBlit_m834(NULL /*static, unused*/, ___source, ___destination, L_84, L_85, /*hidden argument*/&GlobalFog_CustomGraphicsBlit_m834_MethodInfo);
	}

IL_02f8:
	{
		return;
	}
}
// System.Void GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void GlobalFog_CustomGraphicsBlit_m834 (Object_t * __this /* static, unused */, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___fxMaterial, int32_t ___passNr, MethodInfo* method)
{
	{
		RenderTexture_set_active_m952(NULL /*static, unused*/, ___dest, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		NullCheck(___fxMaterial);
		Material_SetTexture_m186(___fxMaterial, (String_t*) &_stringLiteral42, ___source, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		GL_PushMatrix_m954(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m954_MethodInfo);
		GL_LoadOrtho_m974(NULL /*static, unused*/, /*hidden argument*/&GL_LoadOrtho_m974_MethodInfo);
		NullCheck(___fxMaterial);
		Material_SetPass_m956(___fxMaterial, ___passNr, /*hidden argument*/&Material_SetPass_m956_MethodInfo);
		GL_Begin_m975(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m975_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 0, (((float)0)), (((float)0)), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, (((float)0)), (((float)0)), (3.0f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 0, (1.0f), (((float)0)), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, (1.0f), (((float)0)), (2.0f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 0, (1.0f), (1.0f), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, (1.0f), (1.0f), (1.0f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 0, (((float)0)), (1.0f), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, (((float)0)), (1.0f), (((float)0)), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_End_m978(NULL /*static, unused*/, /*hidden argument*/&GL_End_m978_MethodInfo);
		GL_PopMatrix_m958(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m958_MethodInfo);
		return;
	}
}
// System.Void GlobalFog::Main()
extern MethodInfo GlobalFog_Main_m835_MethodInfo;
extern "C" void GlobalFog_Main_m835 (GlobalFog_t201 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// NoiseAndGrain
#include "AssemblyU2DUnityScriptU2Dfirstpass_NoiseAndGrain.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NoiseAndGrain_t202_il2cpp_TypeInfo;
// NoiseAndGrain
#include "AssemblyU2DUnityScriptU2Dfirstpass_NoiseAndGrainMethodDeclarations.h"

// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern MethodInfo NoiseAndGrain_CheckResources_m838_MethodInfo;
extern MethodInfo Debug_LogWarning_m979_MethodInfo;
extern MethodInfo NoiseAndGrain_DrawNoiseQuadGrid_m840_MethodInfo;
extern MethodInfo Random_Range_m212_MethodInfo;


// System.Void NoiseAndGrain::.ctor()
extern MethodInfo NoiseAndGrain__ctor_m836_MethodInfo;
extern "C" void NoiseAndGrain__ctor_m836 (NoiseAndGrain_t202 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___intensityMultiplier_4 = (0.25f);
		__this->___generalIntensity_5 = (0.5f);
		__this->___blackIntensity_6 = (1.0f);
		__this->___whiteIntensity_7 = (1.0f);
		__this->___midGrey_8 = (0.2f);
		Vector3_t54  L_0 = {0};
		Vector3__ctor_m222(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		__this->___intensities_12 = L_0;
		Vector3_t54  L_1 = {0};
		Vector3__ctor_m222(&L_1, (64.0f), (64.0f), (64.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		__this->___tiling_13 = L_1;
		__this->___monochromeTiling_14 = (64.0f);
		__this->___filterMode_15 = 1;
		return;
	}
}
// System.Void NoiseAndGrain::.cctor()
extern MethodInfo NoiseAndGrain__cctor_m837_MethodInfo;
extern "C" void NoiseAndGrain__cctor_m837 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((NoiseAndGrain_t202_StaticFields*)InitializedTypeInfo(&NoiseAndGrain_t202_il2cpp_TypeInfo)->static_fields)->___TILE_AMOUNT_21 = (64.0f);
		return;
	}
}
// System.Boolean NoiseAndGrain::CheckResources()
extern "C" bool NoiseAndGrain_CheckResources_m838 (NoiseAndGrain_t202 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		Shader_t18 * L_0 = (__this->___noiseShader_17);
		Material_t19 * L_1 = (__this->___noiseMaterial_18);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___noiseMaterial_18 = L_2;
		bool L_3 = (__this->___dx11Grain_9);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		bool L_4 = (__this->___supportDX11_2);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		Shader_t18 * L_5 = (__this->___dx11NoiseShader_19);
		Material_t19 * L_6 = (__this->___dx11NoiseMaterial_20);
		Material_t19 * L_7 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_5, L_6);
		__this->___dx11NoiseMaterial_20 = L_7;
	}

IL_004e:
	{
		bool L_8 = (__this->___isSupported_3);
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_005f:
	{
		bool L_9 = (__this->___isSupported_3);
		return L_9;
	}
}
// System.Void NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo NoiseAndGrain_OnRenderImage_m839_MethodInfo;
extern "C" void NoiseAndGrain_OnRenderImage_m839 (NoiseAndGrain_t202 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	RenderTexture_t21 * V_0 = {0};
	RenderTexture_t21 * V_1 = {0};
	String_t* G_B9_0 = {0};
	Material_t19 * G_B9_1 = {0};
	String_t* G_B8_0 = {0};
	Material_t19 * G_B8_1 = {0};
	Vector3_t54  G_B10_0 = {0};
	String_t* G_B10_1 = {0};
	Material_t19 * G_B10_2 = {0};
	Texture2D_t36 * G_B13_0 = {0};
	Material_t19 * G_B13_1 = {0};
	RenderTexture_t21 * G_B13_2 = {0};
	RenderTexture_t21 * G_B13_3 = {0};
	Texture2D_t36 * G_B12_0 = {0};
	Material_t19 * G_B12_1 = {0};
	RenderTexture_t21 * G_B12_2 = {0};
	RenderTexture_t21 * G_B12_3 = {0};
	int32_t G_B14_0 = 0;
	Texture2D_t36 * G_B14_1 = {0};
	Material_t19 * G_B14_2 = {0};
	RenderTexture_t21 * G_B14_3 = {0};
	RenderTexture_t21 * G_B14_4 = {0};
	Texture2D_t36 * G_B17_0 = {0};
	Material_t19 * G_B17_1 = {0};
	RenderTexture_t21 * G_B17_2 = {0};
	RenderTexture_t21 * G_B17_3 = {0};
	Texture2D_t36 * G_B16_0 = {0};
	Material_t19 * G_B16_1 = {0};
	RenderTexture_t21 * G_B16_2 = {0};
	RenderTexture_t21 * G_B16_3 = {0};
	int32_t G_B18_0 = 0;
	Texture2D_t36 * G_B18_1 = {0};
	Material_t19 * G_B18_2 = {0};
	RenderTexture_t21 * G_B18_3 = {0};
	RenderTexture_t21 * G_B18_4 = {0};
	String_t* G_B24_0 = {0};
	Material_t19 * G_B24_1 = {0};
	String_t* G_B23_0 = {0};
	Material_t19 * G_B23_1 = {0};
	Vector3_t54  G_B25_0 = {0};
	String_t* G_B25_1 = {0};
	Material_t19 * G_B25_2 = {0};
	String_t* G_B27_0 = {0};
	Material_t19 * G_B27_1 = {0};
	String_t* G_B26_0 = {0};
	Material_t19 * G_B26_1 = {0};
	Vector3_t54  G_B28_0 = {0};
	String_t* G_B28_1 = {0};
	Material_t19 * G_B28_2 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&NoiseAndGrain_CheckResources_m838_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Texture2D_t36 * L_1 = (__this->___noiseTexture_16);
		bool L_2 = Object_op_Equality_m164(NULL /*static, unused*/, (Object_t50 *)NULL, L_1, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_2)
		{
			goto IL_0049;
		}
	}

IL_001c:
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		Texture2D_t36 * L_3 = (__this->___noiseTexture_16);
		bool L_4 = Object_op_Equality_m164(NULL /*static, unused*/, (Object_t50 *)NULL, L_3, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		Transform_t85 * L_5 = Component_get_transform_m534(__this, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		Debug_LogWarning_m979(NULL /*static, unused*/, (String_t*) &_stringLiteral292, L_5, /*hidden argument*/&Debug_LogWarning_m979_MethodInfo);
	}

IL_0044:
	{
		goto IL_03b6;
	}

IL_0049:
	{
		float L_6 = (__this->___softness_10);
		float L_7 = Mathf_Clamp_m192(NULL /*static, unused*/, L_6, (((float)0)), (0.99f), /*hidden argument*/&Mathf_Clamp_m192_MethodInfo);
		__this->___softness_10 = L_7;
		bool L_8 = (__this->___dx11Grain_9);
		if (!L_8)
		{
			goto IL_0201;
		}
	}
	{
		bool L_9 = (__this->___supportDX11_2);
		if (!L_9)
		{
			goto IL_0201;
		}
	}
	{
		Material_t19 * L_10 = (__this->___dx11NoiseMaterial_20);
		int32_t L_11 = Time_get_frameCount_m928(NULL /*static, unused*/, /*hidden argument*/&Time_get_frameCount_m928_MethodInfo);
		NullCheck(L_10);
		Material_SetFloat_m195(L_10, (String_t*) &_stringLiteral293, (((float)L_11)), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_12 = (__this->___dx11NoiseMaterial_20);
		Texture2D_t36 * L_13 = (__this->___noiseTexture_16);
		NullCheck(L_12);
		Material_SetTexture_m186(L_12, (String_t*) &_stringLiteral238, L_13, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_14 = (__this->___dx11NoiseMaterial_20);
		bool L_15 = (__this->___monochrome_11);
		G_B8_0 = (String_t*) &_stringLiteral294;
		G_B8_1 = L_14;
		if (!L_15)
		{
			G_B9_0 = (String_t*) &_stringLiteral294;
			G_B9_1 = L_14;
			goto IL_00c3;
		}
	}
	{
		Vector3_t54  L_16 = Vector3_get_one_m203(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m203_MethodInfo);
		G_B10_0 = L_16;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00c9;
	}

IL_00c3:
	{
		Vector3_t54  L_17 = (__this->___intensities_12);
		G_B10_0 = L_17;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00c9:
	{
		Vector4_t52  L_18 = Vector4_op_Implicit_m223(NULL /*static, unused*/, G_B10_0, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(G_B10_2);
		Material_SetVector_m194(G_B10_2, G_B10_1, L_18, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_19 = (__this->___dx11NoiseMaterial_20);
		float L_20 = (__this->___midGrey_8);
		float L_21 = (__this->___midGrey_8);
		float L_22 = (__this->___midGrey_8);
		Vector3_t54  L_23 = {0};
		Vector3__ctor_m222(&L_23, L_20, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)-(float)L_21)))), ((float)((float)(-1.0f)/(float)L_22)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		Vector4_t52  L_24 = Vector4_op_Implicit_m223(NULL /*static, unused*/, L_23, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(L_19);
		Material_SetVector_m194(L_19, (String_t*) &_stringLiteral295, L_24, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_25 = (__this->___dx11NoiseMaterial_20);
		float L_26 = (__this->___generalIntensity_5);
		float L_27 = (__this->___blackIntensity_6);
		float L_28 = (__this->___whiteIntensity_7);
		Vector3_t54  L_29 = {0};
		Vector3__ctor_m222(&L_29, L_26, L_27, L_28, /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		float L_30 = (__this->___intensityMultiplier_4);
		Vector3_t54  L_31 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Vector4_t52  L_32 = Vector4_op_Implicit_m223(NULL /*static, unused*/, L_31, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(L_25);
		Material_SetVector_m194(L_25, (String_t*) &_stringLiteral296, L_32, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		float L_33 = (__this->___softness_10);
		if ((((float)L_33) <= ((float)(1.17549435E-38f))))
		{
			goto IL_01d7;
		}
	}
	{
		NullCheck(___source);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		float L_35 = (__this->___softness_10);
		NullCheck(___source);
		int32_t L_36 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		float L_37 = (__this->___softness_10);
		RenderTexture_t21 * L_38 = RenderTexture_GetTemporary_m189(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_34))*(float)((float)((float)(1.0f)-(float)L_35)))))), (((int32_t)((float)((float)(((float)L_36))*(float)((float)((float)(1.0f)-(float)L_37)))))), /*hidden argument*/&RenderTexture_GetTemporary_m189_MethodInfo);
		V_0 = L_38;
		Material_t19 * L_39 = (__this->___dx11NoiseMaterial_20);
		Texture2D_t36 * L_40 = (__this->___noiseTexture_16);
		bool L_41 = (__this->___monochrome_11);
		G_B12_0 = L_40;
		G_B12_1 = L_39;
		G_B12_2 = V_0;
		G_B12_3 = ___source;
		if (!L_41)
		{
			G_B13_0 = L_40;
			G_B13_1 = L_39;
			G_B13_2 = V_0;
			G_B13_3 = ___source;
			goto IL_01a7;
		}
	}
	{
		G_B14_0 = 3;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		G_B14_4 = G_B12_3;
		goto IL_01a8;
	}

IL_01a7:
	{
		G_B14_0 = 2;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		G_B14_4 = G_B13_3;
	}

IL_01a8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&NoiseAndGrain_t202_il2cpp_TypeInfo));
		NoiseAndGrain_DrawNoiseQuadGrid_m840(NULL /*static, unused*/, G_B14_4, G_B14_3, G_B14_2, G_B14_1, G_B14_0, /*hidden argument*/&NoiseAndGrain_DrawNoiseQuadGrid_m840_MethodInfo);
		Material_t19 * L_42 = (__this->___dx11NoiseMaterial_20);
		NullCheck(L_42);
		Material_SetTexture_m186(L_42, (String_t*) &_stringLiteral238, V_0, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_43 = (__this->___dx11NoiseMaterial_20);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_43, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_0, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		goto IL_01fc;
	}

IL_01d7:
	{
		Material_t19 * L_44 = (__this->___dx11NoiseMaterial_20);
		Texture2D_t36 * L_45 = (__this->___noiseTexture_16);
		bool L_46 = (__this->___monochrome_11);
		G_B16_0 = L_45;
		G_B16_1 = L_44;
		G_B16_2 = ___destination;
		G_B16_3 = ___source;
		if (!L_46)
		{
			G_B17_0 = L_45;
			G_B17_1 = L_44;
			G_B17_2 = ___destination;
			G_B17_3 = ___source;
			goto IL_01f6;
		}
	}
	{
		G_B18_0 = 1;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		G_B18_4 = G_B16_3;
		goto IL_01f7;
	}

IL_01f6:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
	}

IL_01f7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&NoiseAndGrain_t202_il2cpp_TypeInfo));
		NoiseAndGrain_DrawNoiseQuadGrid_m840(NULL /*static, unused*/, G_B18_4, G_B18_3, G_B18_2, G_B18_1, G_B18_0, /*hidden argument*/&NoiseAndGrain_DrawNoiseQuadGrid_m840_MethodInfo);
	}

IL_01fc:
	{
		goto IL_03b6;
	}

IL_0201:
	{
		Texture2D_t36 * L_47 = (__this->___noiseTexture_16);
		bool L_48 = Object_op_Implicit_m173(NULL /*static, unused*/, L_47, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_48)
		{
			goto IL_022e;
		}
	}
	{
		Texture2D_t36 * L_49 = (__this->___noiseTexture_16);
		NullCheck(L_49);
		Texture_set_wrapMode_m918(L_49, 0, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		Texture2D_t36 * L_50 = (__this->___noiseTexture_16);
		int32_t L_51 = (__this->___filterMode_15);
		NullCheck(L_50);
		Texture_set_filterMode_m917(L_50, L_51, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
	}

IL_022e:
	{
		Material_t19 * L_52 = (__this->___noiseMaterial_18);
		Texture2D_t36 * L_53 = (__this->___noiseTexture_16);
		NullCheck(L_52);
		Material_SetTexture_m186(L_52, (String_t*) &_stringLiteral238, L_53, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_54 = (__this->___noiseMaterial_18);
		bool L_55 = (__this->___monochrome_11);
		G_B23_0 = (String_t*) &_stringLiteral294;
		G_B23_1 = L_54;
		if (!L_55)
		{
			G_B24_0 = (String_t*) &_stringLiteral294;
			G_B24_1 = L_54;
			goto IL_0264;
		}
	}
	{
		Vector3_t54  L_56 = Vector3_get_one_m203(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m203_MethodInfo);
		G_B25_0 = L_56;
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_026a;
	}

IL_0264:
	{
		Vector3_t54  L_57 = (__this->___intensities_12);
		G_B25_0 = L_57;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_026a:
	{
		Vector4_t52  L_58 = Vector4_op_Implicit_m223(NULL /*static, unused*/, G_B25_0, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(G_B25_2);
		Material_SetVector_m194(G_B25_2, G_B25_1, L_58, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_59 = (__this->___noiseMaterial_18);
		bool L_60 = (__this->___monochrome_11);
		G_B26_0 = (String_t*) &_stringLiteral297;
		G_B26_1 = L_59;
		if (!L_60)
		{
			G_B27_0 = (String_t*) &_stringLiteral297;
			G_B27_1 = L_59;
			goto IL_029f;
		}
	}
	{
		Vector3_t54  L_61 = Vector3_get_one_m203(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m203_MethodInfo);
		float L_62 = (__this->___monochromeTiling_14);
		Vector3_t54  L_63 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		G_B28_0 = L_63;
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		goto IL_02a5;
	}

IL_029f:
	{
		Vector3_t54  L_64 = (__this->___tiling_13);
		G_B28_0 = L_64;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
	}

IL_02a5:
	{
		Vector4_t52  L_65 = Vector4_op_Implicit_m223(NULL /*static, unused*/, G_B28_0, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(G_B28_2);
		Material_SetVector_m194(G_B28_2, G_B28_1, L_65, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_66 = (__this->___noiseMaterial_18);
		float L_67 = (__this->___midGrey_8);
		float L_68 = (__this->___midGrey_8);
		float L_69 = (__this->___midGrey_8);
		Vector3_t54  L_70 = {0};
		Vector3__ctor_m222(&L_70, L_67, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)-(float)L_68)))), ((float)((float)(-1.0f)/(float)L_69)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		Vector4_t52  L_71 = Vector4_op_Implicit_m223(NULL /*static, unused*/, L_70, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(L_66);
		Material_SetVector_m194(L_66, (String_t*) &_stringLiteral295, L_71, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_72 = (__this->___noiseMaterial_18);
		float L_73 = (__this->___generalIntensity_5);
		float L_74 = (__this->___blackIntensity_6);
		float L_75 = (__this->___whiteIntensity_7);
		Vector3_t54  L_76 = {0};
		Vector3__ctor_m222(&L_76, L_73, L_74, L_75, /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		float L_77 = (__this->___intensityMultiplier_4);
		Vector3_t54  L_78 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_76, L_77, /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		Vector4_t52  L_79 = Vector4_op_Implicit_m223(NULL /*static, unused*/, L_78, /*hidden argument*/&Vector4_op_Implicit_m223_MethodInfo);
		NullCheck(L_72);
		Material_SetVector_m194(L_72, (String_t*) &_stringLiteral296, L_79, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		float L_80 = (__this->___softness_10);
		if ((((float)L_80) <= ((float)(1.17549435E-38f))))
		{
			goto IL_03a2;
		}
	}
	{
		NullCheck(___source);
		int32_t L_81 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		float L_82 = (__this->___softness_10);
		NullCheck(___source);
		int32_t L_83 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		float L_84 = (__this->___softness_10);
		RenderTexture_t21 * L_85 = RenderTexture_GetTemporary_m189(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_81))*(float)((float)((float)(1.0f)-(float)L_82)))))), (((int32_t)((float)((float)(((float)L_83))*(float)((float)((float)(1.0f)-(float)L_84)))))), /*hidden argument*/&RenderTexture_GetTemporary_m189_MethodInfo);
		V_1 = L_85;
		Material_t19 * L_86 = (__this->___noiseMaterial_18);
		Texture2D_t36 * L_87 = (__this->___noiseTexture_16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&NoiseAndGrain_t202_il2cpp_TypeInfo));
		NoiseAndGrain_DrawNoiseQuadGrid_m840(NULL /*static, unused*/, ___source, V_1, L_86, L_87, 2, /*hidden argument*/&NoiseAndGrain_DrawNoiseQuadGrid_m840_MethodInfo);
		Material_t19 * L_88 = (__this->___noiseMaterial_18);
		NullCheck(L_88);
		Material_SetTexture_m186(L_88, (String_t*) &_stringLiteral238, V_1, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_89 = (__this->___noiseMaterial_18);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_89, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_1, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		goto IL_03b6;
	}

IL_03a2:
	{
		Material_t19 * L_90 = (__this->___noiseMaterial_18);
		Texture2D_t36 * L_91 = (__this->___noiseTexture_16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&NoiseAndGrain_t202_il2cpp_TypeInfo));
		NoiseAndGrain_DrawNoiseQuadGrid_m840(NULL /*static, unused*/, ___source, ___destination, L_90, L_91, 0, /*hidden argument*/&NoiseAndGrain_DrawNoiseQuadGrid_m840_MethodInfo);
	}

IL_03b6:
	{
		return;
	}
}
// System.Void NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
extern "C" void NoiseAndGrain_DrawNoiseQuadGrid_m840 (Object_t * __this /* static, unused */, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___fxMaterial, Texture2D_t36 * ___noise, int32_t ___passNr, MethodInfo* method)
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
	{
		RenderTexture_set_active_m952(NULL /*static, unused*/, ___dest, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		NullCheck(___noise);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_width_m209_MethodInfo, ___noise);
		V_0 = ((float)((float)(((float)L_0))*(float)(1.0f)));
		NullCheck(___source);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&NoiseAndGrain_t202_il2cpp_TypeInfo));
		V_1 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_1))))/(float)(((NoiseAndGrain_t202_StaticFields*)InitializedTypeInfo(&NoiseAndGrain_t202_il2cpp_TypeInfo)->static_fields)->___TILE_AMOUNT_21)));
		NullCheck(___fxMaterial);
		Material_SetTexture_m186(___fxMaterial, (String_t*) &_stringLiteral42, ___source, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		GL_PushMatrix_m954(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m954_MethodInfo);
		GL_LoadOrtho_m974(NULL /*static, unused*/, /*hidden argument*/&GL_LoadOrtho_m974_MethodInfo);
		NullCheck(___source);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		V_2 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_2))))/(float)((float)((float)(1.0f)*(float)(((float)L_3))))));
		V_3 = ((float)((float)(1.0f)/(float)V_1));
		V_4 = ((float)((float)V_3*(float)V_2));
		NullCheck(___noise);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_width_m209_MethodInfo, ___noise);
		V_5 = ((float)((float)V_0/(float)((float)((float)(((float)L_4))*(float)(1.0f)))));
		NullCheck(___fxMaterial);
		Material_SetPass_m956(___fxMaterial, ___passNr, /*hidden argument*/&Material_SetPass_m956_MethodInfo);
		GL_Begin_m975(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m975_MethodInfo);
		V_6 = (((float)0));
		goto IL_01aa;
	}

IL_0093:
	{
		V_7 = (((float)0));
		goto IL_0198;
	}

IL_009c:
	{
		float L_5 = Random_Range_m212(NULL /*static, unused*/, (((float)0)), (1.0f), /*hidden argument*/&Random_Range_m212_MethodInfo);
		V_8 = L_5;
		float L_6 = Random_Range_m212(NULL /*static, unused*/, (((float)0)), (1.0f), /*hidden argument*/&Random_Range_m212_MethodInfo);
		V_9 = L_6;
		float L_7 = floorf(((float)((float)V_8*(float)V_0)));
		V_8 = ((float)((float)L_7/(float)V_0));
		float L_8 = floorf(((float)((float)V_9*(float)V_0)));
		V_9 = ((float)((float)L_8/(float)V_0));
		V_10 = ((float)((float)(1.0f)/(float)V_0));
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 0, V_8, V_9, /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 1, (((float)0)), (((float)0)), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_6, V_7, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 0, ((float)((float)V_8+(float)((float)((float)V_5*(float)V_10)))), V_9, /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 1, (1.0f), (((float)0)), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, ((float)((float)V_6+(float)V_3)), V_7, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 0, ((float)((float)V_8+(float)((float)((float)V_5*(float)V_10)))), ((float)((float)V_9+(float)((float)((float)V_5*(float)V_10)))), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 1, (1.0f), (1.0f), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, ((float)((float)V_6+(float)V_3)), ((float)((float)V_7+(float)V_4)), (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 0, V_8, ((float)((float)V_9+(float)((float)((float)V_5*(float)V_10)))), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_MultiTexCoord2_m976(NULL /*static, unused*/, 1, (((float)0)), (1.0f), /*hidden argument*/&GL_MultiTexCoord2_m976_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_6, ((float)((float)V_7+(float)V_4)), (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		V_7 = ((float)((float)V_7+(float)V_4));
	}

IL_0198:
	{
		if ((((float)V_7) < ((float)(1.0f))))
		{
			goto IL_009c;
		}
	}
	{
		V_6 = ((float)((float)V_6+(float)V_3));
	}

IL_01aa:
	{
		if ((((float)V_6) < ((float)(1.0f))))
		{
			goto IL_0093;
		}
	}
	{
		GL_End_m978(NULL /*static, unused*/, /*hidden argument*/&GL_End_m978_MethodInfo);
		GL_PopMatrix_m958(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m958_MethodInfo);
		return;
	}
}
// System.Void NoiseAndGrain::Main()
extern MethodInfo NoiseAndGrain_Main_m841_MethodInfo;
extern "C" void NoiseAndGrain_Main_m841 (NoiseAndGrain_t202 * __this, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Object_t50_il2cpp_TypeInfo;
extern MethodInfo Object_ToString_m231_MethodInfo;
extern MethodInfo Debug_Log_m141_MethodInfo;
extern MethodInfo Material_get_shader_m177_MethodInfo;
extern MethodInfo Material__ctor_m171_MethodInfo;
extern MethodInfo PostEffectsBase_CheckResources_m847_MethodInfo;
extern MethodInfo SystemInfo_get_graphicsShaderLevel_m980_MethodInfo;
extern MethodInfo SystemInfo_get_supportsComputeShaders_m981_MethodInfo;
extern MethodInfo SystemInfo_get_supportsImageEffects_m175_MethodInfo;
extern MethodInfo SystemInfo_get_supportsRenderTextures_m206_MethodInfo;
extern MethodInfo GL_TexCoord2_m982_MethodInfo;
extern MethodInfo Material_get_passCount_m214_MethodInfo;


// System.Void PostEffectsBase::.ctor()
extern "C" void PostEffectsBase__ctor_m842 (PostEffectsBase_t166 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		__this->___supportHDRTextures_1 = 1;
		__this->___isSupported_3 = 1;
		return;
	}
}
// UnityEngine.Material PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t19 * PostEffectsBase_CheckShaderAndCreateMaterial_m843 (PostEffectsBase_t166 * __this, Shader_t18 * ___s, Material_t19 * ___m2Create, MethodInfo* method)
{
	Material_t19 * G_B11_0 = {0};
	{
		bool L_0 = Object_op_Implicit_m173(NULL /*static, unused*/, ___s, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m231_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		String_t* L_2 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral298, L_1, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		Debug_Log_m141(NULL /*static, unused*/, L_2, /*hidden argument*/&Debug_Log_m141_MethodInfo);
		Behaviour_set_enabled_m176(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m176_MethodInfo);
		G_B11_0 = ((Material_t19 *)(NULL));
		goto IL_00cf;
	}

IL_002d:
	{
		NullCheck(___s);
		bool L_3 = Shader_get_isSupported_m178(___s, /*hidden argument*/&Shader_get_isSupported_m178_MethodInfo);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		bool L_4 = Object_op_Implicit_m173(NULL /*static, unused*/, ___m2Create, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		NullCheck(___m2Create);
		Shader_t18 * L_5 = Material_get_shader_m177(___m2Create, /*hidden argument*/&Material_get_shader_m177_MethodInfo);
		bool L_6 = Object_op_Equality_m164(NULL /*static, unused*/, L_5, ___s, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		G_B11_0 = ___m2Create;
		goto IL_00cf;
	}

IL_005a:
	{
		NullCheck(___s);
		bool L_7 = Shader_get_isSupported_m178(___s, /*hidden argument*/&Shader_get_isSupported_m178_MethodInfo);
		if (L_7)
		{
			goto IL_00a5;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_NotSupported_m854_MethodInfo, __this);
		NullCheck(___s);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m231_MethodInfo, ___s);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		String_t* L_9 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral299, L_8, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_10 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral300, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m231_MethodInfo, __this);
		String_t* L_12 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_13 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral301, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		Debug_Log_m141(NULL /*static, unused*/, L_13, /*hidden argument*/&Debug_Log_m141_MethodInfo);
		G_B11_0 = ((Material_t19 *)(NULL));
		goto IL_00cf;
	}

IL_00a5:
	{
		Material_t19 * L_14 = (Material_t19 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t19_il2cpp_TypeInfo));
		Material__ctor_m171(L_14, ___s, /*hidden argument*/&Material__ctor_m171_MethodInfo);
		___m2Create = L_14;
		NullCheck(___m2Create);
		Object_set_hideFlags_m172(___m2Create, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		bool L_15 = Object_op_Implicit_m173(NULL /*static, unused*/, ___m2Create, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_15)
		{
			goto IL_00c9;
		}
	}
	{
		G_B11_0 = ___m2Create;
		goto IL_00cf;
	}

IL_00c9:
	{
		G_B11_0 = ((Material_t19 *)(NULL));
		goto IL_00cf;
	}

IL_00cf:
	{
		return G_B11_0;
	}
}
// UnityEngine.Material PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t19 * PostEffectsBase_CreateMaterial_m844 (PostEffectsBase_t166 * __this, Shader_t18 * ___s, Material_t19 * ___m2Create, MethodInfo* method)
{
	Material_t19 * G_B11_0 = {0};
	{
		bool L_0 = Object_op_Implicit_m173(NULL /*static, unused*/, ___s, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m231_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		String_t* L_2 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral298, L_1, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		Debug_Log_m141(NULL /*static, unused*/, L_2, /*hidden argument*/&Debug_Log_m141_MethodInfo);
		G_B11_0 = ((Material_t19 *)(NULL));
		goto IL_008e;
	}

IL_0026:
	{
		bool L_3 = Object_op_Implicit_m173(NULL /*static, unused*/, ___m2Create, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		NullCheck(___m2Create);
		Shader_t18 * L_4 = Material_get_shader_m177(___m2Create, /*hidden argument*/&Material_get_shader_m177_MethodInfo);
		bool L_5 = Object_op_Equality_m164(NULL /*static, unused*/, L_4, ___s, /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		NullCheck(___s);
		bool L_6 = Shader_get_isSupported_m178(___s, /*hidden argument*/&Shader_get_isSupported_m178_MethodInfo);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		G_B11_0 = ___m2Create;
		goto IL_008e;
	}

IL_0053:
	{
		NullCheck(___s);
		bool L_7 = Shader_get_isSupported_m178(___s, /*hidden argument*/&Shader_get_isSupported_m178_MethodInfo);
		if (L_7)
		{
			goto IL_0064;
		}
	}
	{
		G_B11_0 = ((Material_t19 *)(NULL));
		goto IL_008e;
	}

IL_0064:
	{
		Material_t19 * L_8 = (Material_t19 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t19_il2cpp_TypeInfo));
		Material__ctor_m171(L_8, ___s, /*hidden argument*/&Material__ctor_m171_MethodInfo);
		___m2Create = L_8;
		NullCheck(___m2Create);
		Object_set_hideFlags_m172(___m2Create, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		bool L_9 = Object_op_Implicit_m173(NULL /*static, unused*/, ___m2Create, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_9)
		{
			goto IL_0088;
		}
	}
	{
		G_B11_0 = ___m2Create;
		goto IL_008e;
	}

IL_0088:
	{
		G_B11_0 = ((Material_t19 *)(NULL));
		goto IL_008e;
	}

IL_008e:
	{
		return G_B11_0;
	}
}
// System.Void PostEffectsBase::OnEnable()
extern MethodInfo PostEffectsBase_OnEnable_m845_MethodInfo;
extern "C" void PostEffectsBase_OnEnable_m845 (PostEffectsBase_t166 * __this, MethodInfo* method)
{
	{
		__this->___isSupported_3 = 1;
		return;
	}
}
// System.Boolean PostEffectsBase::CheckSupport()
extern MethodInfo PostEffectsBase_CheckSupport_m846_MethodInfo;
extern "C" bool PostEffectsBase_CheckSupport_m846 (PostEffectsBase_t166 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		return L_0;
	}
}
// System.Boolean PostEffectsBase::CheckResources()
extern "C" bool PostEffectsBase_CheckResources_m847 (PostEffectsBase_t166 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m231_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		String_t* L_1 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral302, L_0, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_2 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral303, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		Debug_LogWarning_m945(NULL /*static, unused*/, L_2, /*hidden argument*/&Debug_LogWarning_m945_MethodInfo);
		bool L_3 = (__this->___isSupported_3);
		return L_3;
	}
}
// System.Void PostEffectsBase::Start()
extern "C" void PostEffectsBase_Start_m848 (PostEffectsBase_t166 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker0< bool >::Invoke(&PostEffectsBase_CheckResources_m847_MethodInfo, __this);
		return;
	}
}
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m849 (PostEffectsBase_t166 * __this, bool ___needDepth, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	PostEffectsBase_t166 * G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	PostEffectsBase_t166 * G_B1_1 = {0};
	int32_t G_B11_0 = 0;
	{
		__this->___isSupported_3 = 1;
		bool L_0 = SystemInfo_SupportsRenderTextureFormat_m213(NULL /*static, unused*/, 2, /*hidden argument*/&SystemInfo_SupportsRenderTextureFormat_m213_MethodInfo);
		__this->___supportHDRTextures_1 = L_0;
		int32_t L_1 = SystemInfo_get_graphicsShaderLevel_m980(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_graphicsShaderLevel_m980_MethodInfo);
		int32_t L_2 = ((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)50)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (!L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_002c;
		}
	}
	{
		bool L_3 = SystemInfo_get_supportsComputeShaders_m981(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsComputeShaders_m981_MethodInfo);
		G_B2_0 = ((int32_t)(L_3));
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		NullCheck(G_B2_1);
		G_B2_1->___supportDX11_2 = G_B2_0;
		bool L_4 = SystemInfo_get_supportsImageEffects_m175(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsImageEffects_m175_MethodInfo);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		bool L_5 = SystemInfo_get_supportsRenderTextures_m206(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m206_MethodInfo);
		if (L_5)
		{
			goto IL_0051;
		}
	}

IL_0045:
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_NotSupported_m854_MethodInfo, __this);
		G_B11_0 = 0;
		goto IL_008d;
	}

IL_0051:
	{
		if (!___needDepth)
		{
			goto IL_006e;
		}
	}
	{
		bool L_6 = SystemInfo_SupportsRenderTextureFormat_m213(NULL /*static, unused*/, 1, /*hidden argument*/&SystemInfo_SupportsRenderTextureFormat_m213_MethodInfo);
		if (L_6)
		{
			goto IL_006e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_NotSupported_m854_MethodInfo, __this);
		G_B11_0 = 0;
		goto IL_008d;
	}

IL_006e:
	{
		if (!___needDepth)
		{
			goto IL_008c;
		}
	}
	{
		Camera_t56 * L_7 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_8 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_8);
		int32_t L_9 = Camera_get_depthTextureMode_m216(L_8, /*hidden argument*/&Camera_get_depthTextureMode_m216_MethodInfo);
		NullCheck(L_7);
		Camera_set_depthTextureMode_m217(L_7, ((int32_t)((int32_t)L_9|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m217_MethodInfo);
	}

IL_008c:
	{
		G_B11_0 = 1;
	}

IL_008d:
	{
		return G_B11_0;
	}
}
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m850 (PostEffectsBase_t166 * __this, bool ___needDepth, bool ___needHdr, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, ___needDepth);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0030;
	}

IL_0012:
	{
		if (!___needHdr)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1 = (__this->___supportHDRTextures_1);
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_NotSupported_m854_MethodInfo, __this);
		G_B6_0 = 0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
	}

IL_0030:
	{
		return G_B6_0;
	}
}
// System.Boolean PostEffectsBase::Dx11Support()
extern MethodInfo PostEffectsBase_Dx11Support_m851_MethodInfo;
extern "C" bool PostEffectsBase_Dx11Support_m851 (PostEffectsBase_t166 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___supportDX11_2);
		return L_0;
	}
}
// System.Void PostEffectsBase::ReportAutoDisable()
extern "C" void PostEffectsBase_ReportAutoDisable_m852 (PostEffectsBase_t166 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m231_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		String_t* L_1 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral304, L_0, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_2 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral305, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		Debug_LogWarning_m945(NULL /*static, unused*/, L_2, /*hidden argument*/&Debug_LogWarning_m945_MethodInfo);
		return;
	}
}
// System.Boolean PostEffectsBase::CheckShader(UnityEngine.Shader)
extern MethodInfo PostEffectsBase_CheckShader_m853_MethodInfo;
extern "C" bool PostEffectsBase_CheckShader_m853 (PostEffectsBase_t166 * __this, Shader_t18 * ___s, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		NullCheck(___s);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m231_MethodInfo, ___s);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t218_il2cpp_TypeInfo));
		String_t* L_1 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral299, L_0, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_2 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral300, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m231_MethodInfo, __this);
		String_t* L_4 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		String_t* L_5 = RuntimeServices_op_Addition_m929(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral306, /*hidden argument*/&RuntimeServices_op_Addition_m929_MethodInfo);
		Debug_Log_m141(NULL /*static, unused*/, L_5, /*hidden argument*/&Debug_Log_m141_MethodInfo);
		NullCheck(___s);
		bool L_6 = Shader_get_isSupported_m178(___s, /*hidden argument*/&Shader_get_isSupported_m178_MethodInfo);
		if (L_6)
		{
			goto IL_004b;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_NotSupported_m854_MethodInfo, __this);
		G_B3_0 = 0;
		goto IL_0051;
	}

IL_004b:
	{
		G_B3_0 = 0;
		goto IL_0051;
	}

IL_0051:
	{
		return G_B3_0;
	}
}
// System.Void PostEffectsBase::NotSupported()
extern "C" void PostEffectsBase_NotSupported_m854 (PostEffectsBase_t166 * __this, MethodInfo* method)
{
	{
		Behaviour_set_enabled_m176(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m176_MethodInfo);
		__this->___isSupported_3 = 0;
		return;
	}
}
// System.Void PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern MethodInfo PostEffectsBase_DrawBorder_m855_MethodInfo;
extern "C" void PostEffectsBase_DrawBorder_m855 (PostEffectsBase_t166 * __this, RenderTexture_t21 * ___dest, Material_t19 * ___material, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_0));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_1));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_2));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_3));
		RenderTexture_set_active_m952(NULL /*static, unused*/, ___dest, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		V_4 = 1;
		GL_PushMatrix_m954(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m954_MethodInfo);
		GL_LoadOrtho_m974(NULL /*static, unused*/, /*hidden argument*/&GL_LoadOrtho_m974_MethodInfo);
		V_5 = 0;
		goto IL_0287;
	}

IL_003b:
	{
		NullCheck(___material);
		Material_SetPass_m956(___material, V_5, /*hidden argument*/&Material_SetPass_m956_MethodInfo);
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_6));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_7));
		if (!V_4)
		{
			goto IL_006b;
		}
	}
	{
		V_6 = (1.0f);
		V_7 = (((float)0));
		goto IL_0076;
	}

IL_006b:
	{
		V_6 = (((float)0));
		V_7 = (1.0f);
	}

IL_0076:
	{
		V_0 = (((float)0));
		NullCheck(___dest);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___dest);
		V_1 = ((float)((float)(((float)0))+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_0))*(float)(1.0f)))))));
		V_2 = (((float)0));
		V_3 = (1.0f);
		GL_Begin_m975(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m975_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		NullCheck(___dest);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___dest);
		V_0 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_1))*(float)(1.0f)))))));
		V_1 = (1.0f);
		V_2 = (((float)0));
		V_3 = (1.0f);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		V_0 = (((float)0));
		V_1 = (1.0f);
		V_2 = (((float)0));
		NullCheck(___dest);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___dest);
		V_3 = ((float)((float)(((float)0))+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_2))*(float)(1.0f)))))));
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		V_0 = (((float)0));
		V_1 = (1.0f);
		NullCheck(___dest);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___dest);
		V_2 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_3))*(float)(1.0f)))))));
		V_3 = (1.0f);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_End_m978(NULL /*static, unused*/, /*hidden argument*/&GL_End_m978_MethodInfo);
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_0287:
	{
		NullCheck(___material);
		int32_t L_4 = Material_get_passCount_m214(___material, /*hidden argument*/&Material_get_passCount_m214_MethodInfo);
		if ((((int32_t)V_5) < ((int32_t)L_4)))
		{
			goto IL_003b;
		}
	}
	{
		GL_PopMatrix_m958(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m958_MethodInfo);
		return;
	}
}
// System.Void PostEffectsBase::Main()
extern MethodInfo PostEffectsBase_Main_m856_MethodInfo;
extern "C" void PostEffectsBase_Main_m856 (PostEffectsBase_t166 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// PostEffectsHelper
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsHelper.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PostEffectsHelper_t203_il2cpp_TypeInfo;
// PostEffectsHelper
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsHelperMethodDeclarations.h"

extern MethodInfo GL_LoadProjectionMatrix_m983_MethodInfo;


// System.Void PostEffectsHelper::.ctor()
extern MethodInfo PostEffectsHelper__ctor_m857_MethodInfo;
extern "C" void PostEffectsHelper__ctor_m857 (PostEffectsHelper_t203 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		return;
	}
}
// System.Void PostEffectsHelper::Start()
extern MethodInfo PostEffectsHelper_Start_m858_MethodInfo;
extern "C" void PostEffectsHelper_Start_m858 (PostEffectsHelper_t203 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo PostEffectsHelper_OnRenderImage_m859_MethodInfo;
extern "C" void PostEffectsHelper_OnRenderImage_m859 (PostEffectsHelper_t203 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	{
		Debug_Log_m141(NULL /*static, unused*/, (String_t*) &_stringLiteral307, /*hidden argument*/&Debug_Log_m141_MethodInfo);
		return;
	}
}
// System.Void PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern MethodInfo PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m860_MethodInfo;
extern "C" void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m860 (Object_t * __this /* static, unused */, float ___dist, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___material, Camera_t56 * ___cameraForProjectionMatrix, MethodInfo* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		RenderTexture_set_active_m952(NULL /*static, unused*/, ___dest, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		NullCheck(___material);
		Material_SetTexture_m186(___material, (String_t*) &_stringLiteral42, ___source, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		V_0 = 1;
		GL_PushMatrix_m954(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m954_MethodInfo);
		GL_LoadIdentity_m955(NULL /*static, unused*/, /*hidden argument*/&GL_LoadIdentity_m955_MethodInfo);
		NullCheck(___cameraForProjectionMatrix);
		Matrix4x4_t53  L_0 = Camera_get_projectionMatrix_m545(___cameraForProjectionMatrix, /*hidden argument*/&Camera_get_projectionMatrix_m545_MethodInfo);
		GL_LoadProjectionMatrix_m983(NULL /*static, unused*/, L_0, /*hidden argument*/&GL_LoadProjectionMatrix_m983_MethodInfo);
		NullCheck(___cameraForProjectionMatrix);
		float L_1 = Camera_get_fieldOfView_m218(___cameraForProjectionMatrix, /*hidden argument*/&Camera_get_fieldOfView_m218_MethodInfo);
		V_1 = ((float)((float)((float)((float)L_1*(float)(0.5f)))*(float)(0.0174532924f)));
		float L_2 = cosf(V_1);
		float L_3 = sinf(V_1);
		V_2 = ((float)((float)L_2/(float)L_3));
		NullCheck(___cameraForProjectionMatrix);
		float L_4 = Camera_get_aspect_m221(___cameraForProjectionMatrix, /*hidden argument*/&Camera_get_aspect_m221_MethodInfo);
		V_3 = L_4;
		V_4 = ((float)((float)V_3/(float)((-V_2))));
		V_5 = ((float)((float)V_3/(float)V_2));
		V_6 = ((float)((float)(1.0f)/(float)((-V_2))));
		V_7 = ((float)((float)(1.0f)/(float)V_2));
		V_8 = (1.0f);
		V_4 = ((float)((float)V_4*(float)((float)((float)___dist*(float)V_8))));
		V_5 = ((float)((float)V_5*(float)((float)((float)___dist*(float)V_8))));
		V_6 = ((float)((float)V_6*(float)((float)((float)___dist*(float)V_8))));
		V_7 = ((float)((float)V_7*(float)((float)((float)___dist*(float)V_8))));
		V_9 = ((-___dist));
		V_10 = 0;
		goto IL_0153;
	}

IL_00b2:
	{
		NullCheck(___material);
		Material_SetPass_m956(___material, V_10, /*hidden argument*/&Material_SetPass_m956_MethodInfo);
		GL_Begin_m975(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m975_MethodInfo);
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_11));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_12));
		if (!V_0)
		{
			goto IL_00e7;
		}
	}
	{
		V_11 = (1.0f);
		V_12 = (((float)0));
		goto IL_00f2;
	}

IL_00e7:
	{
		V_11 = (((float)0));
		V_12 = (1.0f);
	}

IL_00f2:
	{
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_11, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_4, V_6, V_9, /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_11, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_5, V_6, V_9, /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_12, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_5, V_7, V_9, /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_12, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_4, V_7, V_9, /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_End_m978(NULL /*static, unused*/, /*hidden argument*/&GL_End_m978_MethodInfo);
		V_10 = ((int32_t)((int32_t)V_10+(int32_t)1));
	}

IL_0153:
	{
		NullCheck(___material);
		int32_t L_5 = Material_get_passCount_m214(___material, /*hidden argument*/&Material_get_passCount_m214_MethodInfo);
		if ((((int32_t)V_10) < ((int32_t)L_5)))
		{
			goto IL_00b2;
		}
	}
	{
		GL_PopMatrix_m958(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m958_MethodInfo);
		return;
	}
}
// System.Void PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern MethodInfo PostEffectsHelper_DrawBorder_m861_MethodInfo;
extern "C" void PostEffectsHelper_DrawBorder_m861 (Object_t * __this /* static, unused */, RenderTexture_t21 * ___dest, Material_t19 * ___material, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_0));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_1));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_2));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_3));
		RenderTexture_set_active_m952(NULL /*static, unused*/, ___dest, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		V_4 = 1;
		GL_PushMatrix_m954(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m954_MethodInfo);
		GL_LoadOrtho_m974(NULL /*static, unused*/, /*hidden argument*/&GL_LoadOrtho_m974_MethodInfo);
		V_5 = 0;
		goto IL_0287;
	}

IL_003b:
	{
		NullCheck(___material);
		Material_SetPass_m956(___material, V_5, /*hidden argument*/&Material_SetPass_m956_MethodInfo);
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_6));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_7));
		if (!V_4)
		{
			goto IL_006b;
		}
	}
	{
		V_6 = (1.0f);
		V_7 = (((float)0));
		goto IL_0076;
	}

IL_006b:
	{
		V_6 = (((float)0));
		V_7 = (1.0f);
	}

IL_0076:
	{
		V_0 = (((float)0));
		NullCheck(___dest);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___dest);
		V_1 = ((float)((float)(((float)0))+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_0))*(float)(1.0f)))))));
		V_2 = (((float)0));
		V_3 = (1.0f);
		GL_Begin_m975(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m975_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		NullCheck(___dest);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___dest);
		V_0 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_1))*(float)(1.0f)))))));
		V_1 = (1.0f);
		V_2 = (((float)0));
		V_3 = (1.0f);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		V_0 = (((float)0));
		V_1 = (1.0f);
		V_2 = (((float)0));
		NullCheck(___dest);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___dest);
		V_3 = ((float)((float)(((float)0))+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_2))*(float)(1.0f)))))));
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		V_0 = (((float)0));
		V_1 = (1.0f);
		NullCheck(___dest);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___dest);
		V_2 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_3))*(float)(1.0f)))))));
		V_3 = (1.0f);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_6, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_1, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_7, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, V_0, V_3, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_End_m978(NULL /*static, unused*/, /*hidden argument*/&GL_End_m978_MethodInfo);
		V_5 = ((int32_t)((int32_t)V_5+(int32_t)1));
	}

IL_0287:
	{
		NullCheck(___material);
		int32_t L_4 = Material_get_passCount_m214(___material, /*hidden argument*/&Material_get_passCount_m214_MethodInfo);
		if ((((int32_t)V_5) < ((int32_t)L_4)))
		{
			goto IL_003b;
		}
	}
	{
		GL_PopMatrix_m958(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m958_MethodInfo);
		return;
	}
}
// System.Void PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern MethodInfo PostEffectsHelper_DrawLowLevelQuad_m862_MethodInfo;
extern "C" void PostEffectsHelper_DrawLowLevelQuad_m862 (Object_t * __this /* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t21 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___material, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		RenderTexture_set_active_m952(NULL /*static, unused*/, ___dest, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		NullCheck(___material);
		Material_SetTexture_m186(___material, (String_t*) &_stringLiteral42, ___source, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		V_0 = 1;
		GL_PushMatrix_m954(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m954_MethodInfo);
		GL_LoadOrtho_m974(NULL /*static, unused*/, /*hidden argument*/&GL_LoadOrtho_m974_MethodInfo);
		V_1 = 0;
		goto IL_00cf;
	}

IL_0031:
	{
		NullCheck(___material);
		Material_SetPass_m956(___material, V_1, /*hidden argument*/&Material_SetPass_m956_MethodInfo);
		GL_Begin_m975(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m975_MethodInfo);
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_2));
		Initobj (InitializedTypeInfo(&Single_t57_il2cpp_TypeInfo), (&V_3));
		if (!V_0)
		{
			goto IL_0067;
		}
	}
	{
		V_2 = (1.0f);
		V_3 = (((float)0));
		goto IL_0070;
	}

IL_0067:
	{
		V_2 = (((float)0));
		V_3 = (1.0f);
	}

IL_0070:
	{
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_2, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, ___x1, ___y1, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_2, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, ___x2, ___y1, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (1.0f), V_3, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, ___x2, ___y2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_TexCoord2_m982(NULL /*static, unused*/, (((float)0)), V_3, /*hidden argument*/&GL_TexCoord2_m982_MethodInfo);
		GL_Vertex3_m977(NULL /*static, unused*/, ___x1, ___y2, (0.1f), /*hidden argument*/&GL_Vertex3_m977_MethodInfo);
		GL_End_m978(NULL /*static, unused*/, /*hidden argument*/&GL_End_m978_MethodInfo);
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_00cf:
	{
		NullCheck(___material);
		int32_t L_0 = Material_get_passCount_m214(___material, /*hidden argument*/&Material_get_passCount_m214_MethodInfo);
		if ((((int32_t)V_1) < ((int32_t)L_0)))
		{
			goto IL_0031;
		}
	}
	{
		GL_PopMatrix_m958(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m958_MethodInfo);
		return;
	}
}
// System.Void PostEffectsHelper::Main()
extern MethodInfo PostEffectsHelper_Main_m863_MethodInfo;
extern "C" void PostEffectsHelper_Main_m863 (PostEffectsHelper_t203 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Quads
#include "AssemblyU2DUnityScriptU2Dfirstpass_Quads.h"
#ifndef _MSC_VER
#else
#endif

extern TypeInfo MeshU5BU5D_t204_il2cpp_TypeInfo;
extern TypeInfo Mesh_t80_il2cpp_TypeInfo;
extern TypeInfo Vector3U5BU5D_t81_il2cpp_TypeInfo;
extern TypeInfo Vector2U5BU5D_t51_il2cpp_TypeInfo;
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
extern Il2CppType MeshU5BU5D_t204_0_0_0;
extern Il2CppType Vector3U5BU5D_t81_0_0_0;
extern Il2CppType Vector2U5BU5D_t51_0_0_0;
extern MethodInfo Quads_HasMeshes_m866_MethodInfo;
extern MethodInfo Mathf_CeilToInt_m984_MethodInfo;
extern MethodInfo Mathf_Clamp_m198_MethodInfo;
extern MethodInfo Quads_GetMesh_m869_MethodInfo;
extern MethodInfo Mesh__ctor_m985_MethodInfo;
extern MethodInfo Mesh_set_vertices_m615_MethodInfo;
extern MethodInfo Mesh_set_triangles_m986_MethodInfo;
extern MethodInfo Mesh_set_uv_m987_MethodInfo;
extern MethodInfo Mesh_set_uv2_m988_MethodInfo;


// System.Void Quads::.ctor()
extern MethodInfo Quads__ctor_m864_MethodInfo;
extern "C" void Quads__ctor_m864 (Quads_t205 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		return;
	}
}
// System.Void Quads::.cctor()
extern MethodInfo Quads__cctor_m865_MethodInfo;
extern "C" void Quads__cctor_m865 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean Quads::HasMeshes()
extern "C" bool Quads_HasMeshes_m866 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Mesh_t80 * V_0 = {0};
	int32_t V_1 = 0;
	MeshU5BU5D_t204* V_2 = {0};
	int32_t V_3 = 0;
	int32_t G_B8_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		if ((((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1))
		{
			goto IL_0010;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0044;
	}

IL_0010:
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		V_2 = (((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1);
		NullCheck(V_2);
		int32_t L_0 = Array_get_Length_m947(V_2, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		V_3 = L_0;
		goto IL_003c;
	}

IL_0024:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_1);
		int32_t L_1 = V_1;
		bool L_2 = Object_op_Equality_m164(NULL /*static, unused*/, (Object_t50 *)NULL, (*(Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_2, L_1)), /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0044;
	}

IL_0038:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_003c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_3)))
		{
			goto IL_0024;
		}
	}
	{
		G_B8_0 = 1;
	}

IL_0044:
	{
		return G_B8_0;
	}
}
// System.Void Quads::Cleanup()
extern "C" void Quads_Cleanup_m867 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Mesh_t80 * V_0 = {0};
	int32_t V_1 = 0;
	MeshU5BU5D_t204* V_2 = {0};
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		if ((((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1))
		{
			goto IL_000f;
		}
	}
	{
		goto IL_004e;
	}

IL_000f:
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		V_2 = (((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1);
		NullCheck(V_2);
		int32_t L_0 = Array_get_Length_m947(V_2, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		V_3 = L_0;
		goto IL_0041;
	}

IL_0023:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_1);
		int32_t L_1 = V_1;
		bool L_2 = Object_op_Inequality_m166(NULL /*static, unused*/, (Object_t50 *)NULL, (*(Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_2, L_1)), /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_1);
		int32_t L_3 = V_1;
		Object_DestroyImmediate_m174(NULL /*static, unused*/, (*(Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_2, L_3)), /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_1);
		ArrayElementTypeCheck (V_2, NULL);
		*((Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_2, V_1)) = (Mesh_t80 *)NULL;
	}

IL_003d:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0041:
	{
		if ((((int32_t)V_1) < ((int32_t)V_3)))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1 = (MeshU5BU5D_t204*)NULL;
	}

IL_004e:
	{
		return;
	}
}
// UnityEngine.Mesh[] Quads::GetMeshes(System.Int32,System.Int32)
extern TypeInfo* MeshU5BU5D_t204_il2cpp_TypeInfo_var;
extern "C" MeshU5BU5D_t204* Quads_GetMeshes_m868 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method)
{
	static bool Quads_GetMeshes_m868_init;
	if (!Quads_GetMeshes_m868_init)
	{
		MeshU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MeshU5BU5D_t204_0_0_0);
		Quads_GetMeshes_m868_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MeshU5BU5D_t204* G_B7_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		bool L_0 = Quads_HasMeshes_m866(NULL /*static, unused*/, /*hidden argument*/&Quads_HasMeshes_m866_MethodInfo);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		if ((((uint32_t)(((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___currentQuads_2)) != ((uint32_t)((int32_t)((int32_t)___totalWidth*(int32_t)___totalHeight)))))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		G_B7_0 = (((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1);
		goto IL_0099;
	}

IL_0021:
	{
		V_0 = ((int32_t)10833);
		V_1 = ((int32_t)((int32_t)___totalWidth*(int32_t)___totalHeight));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___currentQuads_2 = V_1;
		int32_t L_1 = Mathf_CeilToInt_m984(NULL /*static, unused*/, ((float)((float)((float)((float)(1.0f)*(float)(((float)V_1))))/(float)((float)((float)(1.0f)*(float)(((float)V_0)))))), /*hidden argument*/&Mathf_CeilToInt_m984_MethodInfo);
		V_2 = L_1;
		((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1 = ((MeshU5BU5D_t204*)SZArrayNew(MeshU5BU5D_t204_il2cpp_TypeInfo_var, V_2));
		V_3 = 0;
		V_4 = 0;
		V_3 = 0;
		goto IL_008d;
	}

IL_005f:
	{
		int32_t L_2 = Mathf_Clamp_m198(NULL /*static, unused*/, ((int32_t)((int32_t)V_1-(int32_t)V_3)), 0, V_0, /*hidden argument*/&Mathf_Clamp_m198_MethodInfo);
		int32_t L_3 = Mathf_FloorToInt_m625(NULL /*static, unused*/, (((float)L_2)), /*hidden argument*/&Mathf_FloorToInt_m625_MethodInfo);
		V_5 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		Mesh_t80 * L_4 = Quads_GetMesh_m869(NULL /*static, unused*/, V_5, V_3, ___totalWidth, ___totalHeight, /*hidden argument*/&Quads_GetMesh_m869_MethodInfo);
		NullCheck((((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1), V_4);
		ArrayElementTypeCheck ((((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1), L_4);
		*((Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema((((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1), V_4)) = (Mesh_t80 *)L_4;
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)V_0));
	}

IL_008d:
	{
		if ((((int32_t)V_3) < ((int32_t)V_1)))
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo));
		G_B7_0 = (((Quads_t205_StaticFields*)InitializedTypeInfo(&Quads_t205_il2cpp_TypeInfo)->static_fields)->___meshes_1);
	}

IL_0099:
	{
		return G_B7_0;
	}
}
// UnityEngine.Mesh Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Vector3U5BU5D_t81_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t220_il2cpp_TypeInfo_var;
extern "C" Mesh_t80 * Quads_GetMesh_m869 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method)
{
	static bool Quads_GetMesh_m869_init;
	if (!Quads_GetMesh_m869_init)
	{
		Vector3U5BU5D_t81_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t81_0_0_0);
		Vector2U5BU5D_t51_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector2U5BU5D_t51_0_0_0);
		Int32U5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t220_0_0_0);
		Quads_GetMesh_m869_init = true;
	}
	Mesh_t80 * V_0 = {0};
	Vector3U5BU5D_t81* V_1 = {0};
	Vector2U5BU5D_t51* V_2 = {0};
	Vector2U5BU5D_t51* V_3 = {0};
	Int32U5BU5D_t220* V_4 = {0};
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t54  V_12 = {0};
	{
		Mesh_t80 * L_0 = (Mesh_t80 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Mesh_t80_il2cpp_TypeInfo));
		Mesh__ctor_m985(L_0, /*hidden argument*/&Mesh__ctor_m985_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		Object_set_hideFlags_m172(V_0, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		V_1 = ((Vector3U5BU5D_t81*)SZArrayNew(Vector3U5BU5D_t81_il2cpp_TypeInfo_var, ((int32_t)((int32_t)___triCount*(int32_t)4))));
		V_2 = ((Vector2U5BU5D_t51*)SZArrayNew(Vector2U5BU5D_t51_il2cpp_TypeInfo_var, ((int32_t)((int32_t)___triCount*(int32_t)4))));
		V_3 = ((Vector2U5BU5D_t51*)SZArrayNew(Vector2U5BU5D_t51_il2cpp_TypeInfo_var, ((int32_t)((int32_t)___triCount*(int32_t)4))));
		V_4 = ((Int32U5BU5D_t220*)SZArrayNew(Int32U5BU5D_t220_il2cpp_TypeInfo_var, ((int32_t)((int32_t)___triCount*(int32_t)6))));
		V_5 = (0.0075f);
		V_6 = 0;
		goto IL_01e5;
	}

IL_0041:
	{
		V_7 = ((int32_t)((int32_t)V_6*(int32_t)4));
		V_8 = ((int32_t)((int32_t)V_6*(int32_t)6));
		V_9 = ((int32_t)((int32_t)___triOffset+(int32_t)V_6));
		float L_1 = floorf((((float)((int32_t)((int32_t)V_9%(int32_t)___totalWidth)))));
		V_10 = ((float)((float)L_1/(float)(((float)___totalWidth))));
		float L_2 = floorf((((float)((int32_t)((int32_t)V_9/(int32_t)___totalWidth)))));
		V_11 = ((float)((float)L_2/(float)(((float)___totalHeight))));
		Vector3_t54  L_3 = {0};
		Vector3__ctor_m222(&L_3, ((float)((float)((float)((float)V_10*(float)(((float)2))))-(float)(((float)1)))), ((float)((float)((float)((float)V_11*(float)(((float)2))))-(float)(((float)1)))), (1.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		V_12 = L_3;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, ((int32_t)((int32_t)V_7+(int32_t)0)));
		*((Vector3_t54 *)(Vector3_t54 *)SZArrayLdElema(V_1, ((int32_t)((int32_t)V_7+(int32_t)0)))) = V_12;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, ((int32_t)((int32_t)V_7+(int32_t)1)));
		*((Vector3_t54 *)(Vector3_t54 *)SZArrayLdElema(V_1, ((int32_t)((int32_t)V_7+(int32_t)1)))) = V_12;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, ((int32_t)((int32_t)V_7+(int32_t)2)));
		*((Vector3_t54 *)(Vector3_t54 *)SZArrayLdElema(V_1, ((int32_t)((int32_t)V_7+(int32_t)2)))) = V_12;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, ((int32_t)((int32_t)V_7+(int32_t)3)));
		*((Vector3_t54 *)(Vector3_t54 *)SZArrayLdElema(V_1, ((int32_t)((int32_t)V_7+(int32_t)3)))) = V_12;
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, ((int32_t)((int32_t)V_7+(int32_t)0)));
		Vector2_t32  L_4 = {0};
		Vector2__ctor_m179(&L_4, (((float)0)), (((float)0)), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_2, ((int32_t)((int32_t)V_7+(int32_t)0)))) = L_4;
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, ((int32_t)((int32_t)V_7+(int32_t)1)));
		Vector2_t32  L_5 = {0};
		Vector2__ctor_m179(&L_5, (1.0f), (((float)0)), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_2, ((int32_t)((int32_t)V_7+(int32_t)1)))) = L_5;
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, ((int32_t)((int32_t)V_7+(int32_t)2)));
		Vector2_t32  L_6 = {0};
		Vector2__ctor_m179(&L_6, (((float)0)), (1.0f), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_2, ((int32_t)((int32_t)V_7+(int32_t)2)))) = L_6;
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, ((int32_t)((int32_t)V_7+(int32_t)3)));
		Vector2_t32  L_7 = {0};
		Vector2__ctor_m179(&L_7, (1.0f), (1.0f), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_2, ((int32_t)((int32_t)V_7+(int32_t)3)))) = L_7;
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, ((int32_t)((int32_t)V_7+(int32_t)0)));
		Vector2_t32  L_8 = {0};
		Vector2__ctor_m179(&L_8, V_10, V_11, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_3, ((int32_t)((int32_t)V_7+(int32_t)0)))) = L_8;
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, ((int32_t)((int32_t)V_7+(int32_t)1)));
		Vector2_t32  L_9 = {0};
		Vector2__ctor_m179(&L_9, V_10, V_11, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_3, ((int32_t)((int32_t)V_7+(int32_t)1)))) = L_9;
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, ((int32_t)((int32_t)V_7+(int32_t)2)));
		Vector2_t32  L_10 = {0};
		Vector2__ctor_m179(&L_10, V_10, V_11, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_3, ((int32_t)((int32_t)V_7+(int32_t)2)))) = L_10;
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, ((int32_t)((int32_t)V_7+(int32_t)3)));
		Vector2_t32  L_11 = {0};
		Vector2__ctor_m179(&L_11, V_10, V_11, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_3, ((int32_t)((int32_t)V_7+(int32_t)3)))) = L_11;
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, ((int32_t)((int32_t)V_8+(int32_t)0)));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_4, ((int32_t)((int32_t)V_8+(int32_t)0)))) = (int32_t)((int32_t)((int32_t)V_7+(int32_t)0));
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, ((int32_t)((int32_t)V_8+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_4, ((int32_t)((int32_t)V_8+(int32_t)1)))) = (int32_t)((int32_t)((int32_t)V_7+(int32_t)1));
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, ((int32_t)((int32_t)V_8+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_4, ((int32_t)((int32_t)V_8+(int32_t)2)))) = (int32_t)((int32_t)((int32_t)V_7+(int32_t)2));
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, ((int32_t)((int32_t)V_8+(int32_t)3)));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_4, ((int32_t)((int32_t)V_8+(int32_t)3)))) = (int32_t)((int32_t)((int32_t)V_7+(int32_t)1));
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, ((int32_t)((int32_t)V_8+(int32_t)4)));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_4, ((int32_t)((int32_t)V_8+(int32_t)4)))) = (int32_t)((int32_t)((int32_t)V_7+(int32_t)2));
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, ((int32_t)((int32_t)V_8+(int32_t)5)));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_4, ((int32_t)((int32_t)V_8+(int32_t)5)))) = (int32_t)((int32_t)((int32_t)V_7+(int32_t)3));
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_01e5:
	{
		if ((((int32_t)V_6) < ((int32_t)___triCount)))
		{
			goto IL_0041;
		}
	}
	{
		NullCheck(V_0);
		Mesh_set_vertices_m615(V_0, V_1, /*hidden argument*/&Mesh_set_vertices_m615_MethodInfo);
		NullCheck(V_0);
		Mesh_set_triangles_m986(V_0, V_4, /*hidden argument*/&Mesh_set_triangles_m986_MethodInfo);
		NullCheck(V_0);
		Mesh_set_uv_m987(V_0, V_2, /*hidden argument*/&Mesh_set_uv_m987_MethodInfo);
		NullCheck(V_0);
		Mesh_set_uv2_m988(V_0, V_3, /*hidden argument*/&Mesh_set_uv2_m988_MethodInfo);
		return V_0;
	}
}
// System.Void Quads::Main()
extern MethodInfo Quads_Main_m870_MethodInfo;
extern "C" void Quads_Main_m870 (Quads_t205 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// ScreenOverlay/OverlayBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_ScreenOverlay_OverlayBlen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo OverlayBlendMode_t206_il2cpp_TypeInfo;
// ScreenOverlay/OverlayBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_ScreenOverlay_OverlayBlenMethodDeclarations.h"



// ScreenOverlay
#include "AssemblyU2DUnityScriptU2Dfirstpass_ScreenOverlay.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScreenOverlay_t207_il2cpp_TypeInfo;
// ScreenOverlay
#include "AssemblyU2DUnityScriptU2Dfirstpass_ScreenOverlayMethodDeclarations.h"

extern MethodInfo ScreenOverlay_CheckResources_m872_MethodInfo;


// System.Void ScreenOverlay::.ctor()
extern MethodInfo ScreenOverlay__ctor_m871_MethodInfo;
extern "C" void ScreenOverlay__ctor_m871 (ScreenOverlay_t207 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___blendMode_4 = 3;
		__this->___intensity_5 = (1.0f);
		return;
	}
}
// System.Boolean ScreenOverlay::CheckResources()
extern "C" bool ScreenOverlay_CheckResources_m872 (ScreenOverlay_t207 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		Shader_t18 * L_0 = (__this->___overlayShader_7);
		Material_t19 * L_1 = (__this->___overlayMaterial_8);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___overlayMaterial_8 = L_2;
		bool L_3 = (__this->___isSupported_3);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0031:
	{
		bool L_4 = (__this->___isSupported_3);
		return L_4;
	}
}
// System.Void ScreenOverlay::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo ScreenOverlay_OnRenderImage_m873_MethodInfo;
extern "C" void ScreenOverlay_OnRenderImage_m873 (ScreenOverlay_t207 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&ScreenOverlay_CheckResources_m872_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_0056;
	}

IL_0017:
	{
		Material_t19 * L_1 = (__this->___overlayMaterial_8);
		float L_2 = (__this->___intensity_5);
		NullCheck(L_1);
		Material_SetFloat_m195(L_1, (String_t*) &_stringLiteral49, L_2, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_3 = (__this->___overlayMaterial_8);
		Texture2D_t36 * L_4 = (__this->___texture_6);
		NullCheck(L_3);
		Material_SetTexture_m186(L_3, (String_t*) &_stringLiteral308, L_4, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_5 = (__this->___overlayMaterial_8);
		int32_t L_6 = (__this->___blendMode_4);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_5, L_6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void ScreenOverlay::Main()
extern MethodInfo ScreenOverlay_Main_m874_MethodInfo;
extern "C" void ScreenOverlay_Main_m874 (ScreenOverlay_t207 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// SunShaftsResolution
#include "AssemblyU2DUnityScriptU2Dfirstpass_SunShaftsResolution.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SunShaftsResolution_t208_il2cpp_TypeInfo;
// SunShaftsResolution
#include "AssemblyU2DUnityScriptU2Dfirstpass_SunShaftsResolutionMethodDeclarations.h"



// ShaftsScreenBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_ShaftsScreenBlendMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShaftsScreenBlendMode_t209_il2cpp_TypeInfo;
// ShaftsScreenBlendMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_ShaftsScreenBlendModeMethodDeclarations.h"



// SunShafts
#include "AssemblyU2DUnityScriptU2Dfirstpass_SunShafts.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SunShafts_t210_il2cpp_TypeInfo;
// SunShafts
#include "AssemblyU2DUnityScriptU2Dfirstpass_SunShaftsMethodDeclarations.h"

extern MethodInfo SunShafts_CheckResources_m876_MethodInfo;
extern MethodInfo GL_ClearWithSkybox_m989_MethodInfo;
extern MethodInfo SunShafts_ClampBlurIterationsToSomethingThatMakesSense_m878_MethodInfo;


// System.Void SunShafts::.ctor()
extern MethodInfo SunShafts__ctor_m875_MethodInfo;
extern "C" void SunShafts__ctor_m875 (SunShafts_t210 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___resolution_4 = 1;
		__this->___screenBlendMode_5 = 0;
		__this->___radialBlurIterations_7 = 2;
		Color_t29  L_0 = Color_get_white_m903(NULL /*static, unused*/, /*hidden argument*/&Color_get_white_m903_MethodInfo);
		__this->___sunColor_8 = L_0;
		__this->___sunShaftBlurRadius_9 = (2.5f);
		__this->___sunShaftIntensity_10 = (1.15f);
		__this->___useSkyBoxAlpha_11 = (0.75f);
		__this->___maxRadius_12 = (0.75f);
		__this->___useDepthTexture_13 = 1;
		return;
	}
}
// System.Boolean SunShafts::CheckResources()
extern "C" bool SunShafts_CheckResources_m876 (SunShafts_t210 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___useDepthTexture_13);
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, L_0);
		Shader_t18 * L_1 = (__this->___sunShaftsShader_14);
		Material_t19 * L_2 = (__this->___sunShaftsMaterial_15);
		Material_t19 * L_3 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_1, L_2);
		__this->___sunShaftsMaterial_15 = L_3;
		Shader_t18 * L_4 = (__this->___simpleClearShader_16);
		Material_t19 * L_5 = (__this->___simpleClearMaterial_17);
		Material_t19 * L_6 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_4, L_5);
		__this->___simpleClearMaterial_17 = L_6;
		bool L_7 = (__this->___isSupported_3);
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_004e:
	{
		bool L_8 = (__this->___isSupported_3);
		return L_8;
	}
}
// System.Void SunShafts::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo SunShafts_OnRenderImage_m877_MethodInfo;
extern "C" void SunShafts_OnRenderImage_m877 (SunShafts_t210 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t54  V_1 = {0};
	RenderTexture_t21 * V_2 = {0};
	RenderTexture_t21 * V_3 = {0};
	RenderTexture_t21 * V_4 = {0};
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	Material_t19 * G_B22_0 = {0};
	RenderTexture_t21 * G_B22_1 = {0};
	RenderTexture_t21 * G_B22_2 = {0};
	Material_t19 * G_B21_0 = {0};
	RenderTexture_t21 * G_B21_1 = {0};
	RenderTexture_t21 * G_B21_2 = {0};
	int32_t G_B23_0 = 0;
	Material_t19 * G_B23_1 = {0};
	RenderTexture_t21 * G_B23_2 = {0};
	RenderTexture_t21 * G_B23_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&SunShafts_CheckResources_m876_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_03b7;
	}

IL_0017:
	{
		bool L_1 = (__this->___useDepthTexture_13);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		Camera_t56 * L_2 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Camera_t56 * L_3 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = Camera_get_depthTextureMode_m216(L_3, /*hidden argument*/&Camera_get_depthTextureMode_m216_MethodInfo);
		NullCheck(L_2);
		Camera_set_depthTextureMode_m217(L_2, ((int32_t)((int32_t)L_4|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m217_MethodInfo);
	}

IL_003a:
	{
		V_0 = (4.0f);
		int32_t L_5 = (__this->___resolution_4);
		if ((((uint32_t)L_5) != ((uint32_t)1)))
		{
			goto IL_0057;
		}
	}
	{
		V_0 = (2.0f);
		goto IL_0069;
	}

IL_0057:
	{
		int32_t L_6 = (__this->___resolution_4);
		if ((((uint32_t)L_6) != ((uint32_t)2)))
		{
			goto IL_0069;
		}
	}
	{
		V_0 = (1.0f);
	}

IL_0069:
	{
		Vector3_t54  L_7 = Vector3_get_one_m203(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m203_MethodInfo);
		Vector3_t54  L_8 = Vector3_op_Multiply_m601(NULL /*static, unused*/, L_7, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m601_MethodInfo);
		V_1 = L_8;
		Transform_t85 * L_9 = (__this->___sunTransform_6);
		bool L_10 = Object_op_Implicit_m173(NULL /*static, unused*/, L_9, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_10)
		{
			goto IL_00a5;
		}
	}
	{
		Camera_t56 * L_11 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		Transform_t85 * L_12 = (__this->___sunTransform_6);
		NullCheck(L_12);
		Vector3_t54  L_13 = Transform_get_position_m535(L_12, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		NullCheck(L_11);
		Vector3_t54  L_14 = Camera_WorldToViewportPoint_m951(L_11, L_13, /*hidden argument*/&Camera_WorldToViewportPoint_m951_MethodInfo);
		V_1 = L_14;
		goto IL_00b7;
	}

IL_00a5:
	{
		Vector3_t54  L_15 = {0};
		Vector3__ctor_m222(&L_15, (0.5f), (0.5f), (((float)0)), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		V_1 = L_15;
	}

IL_00b7:
	{
		NullCheck(___source);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_18 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_16))/(float)V_0)))), (((int32_t)((float)((float)(((float)L_17))/(float)V_0)))), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_2 = L_18;
		NullCheck(___source);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_21 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_19))/(float)V_0)))), (((int32_t)((float)((float)(((float)L_20))/(float)V_0)))), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_3 = L_21;
		Material_t19 * L_22 = (__this->___sunShaftsMaterial_15);
		Vector4_t52  L_23 = {0};
		Vector4__ctor_m193(&L_23, (1.0f), (1.0f), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_24 = (__this->___sunShaftBlurRadius_9);
		Vector4_t52  L_25 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_22);
		Material_SetVector_m194(L_22, (String_t*) &_stringLiteral309, L_25, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_26 = (__this->___sunShaftsMaterial_15);
		NullCheck((&V_1));
		float L_27 = ((&V_1)->___x_1);
		NullCheck((&V_1));
		float L_28 = ((&V_1)->___y_2);
		NullCheck((&V_1));
		float L_29 = ((&V_1)->___z_3);
		float L_30 = (__this->___maxRadius_12);
		Vector4_t52  L_31 = {0};
		Vector4__ctor_m193(&L_31, L_27, L_28, L_29, L_30, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_26);
		Material_SetVector_m194(L_26, (String_t*) &_stringLiteral310, L_31, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_32 = (__this->___sunShaftsMaterial_15);
		float L_33 = (__this->___useSkyBoxAlpha_11);
		NullCheck(L_32);
		Material_SetFloat_m195(L_32, (String_t*) &_stringLiteral311, ((float)((float)(1.0f)-(float)L_33)), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		bool L_34 = (__this->___useDepthTexture_13);
		if (L_34)
		{
			goto IL_01c5;
		}
	}
	{
		NullCheck(___source);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_36 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_37 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, L_35, L_36, 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_4 = L_37;
		RenderTexture_set_active_m952(NULL /*static, unused*/, V_4, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		Camera_t56 * L_38 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		GL_ClearWithSkybox_m989(NULL /*static, unused*/, 0, L_38, /*hidden argument*/&GL_ClearWithSkybox_m989_MethodInfo);
		Material_t19 * L_39 = (__this->___sunShaftsMaterial_15);
		NullCheck(L_39);
		Material_SetTexture_m186(L_39, (String_t*) &_stringLiteral312, V_4, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_40 = (__this->___sunShaftsMaterial_15);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_3, L_40, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_4, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		goto IL_01d3;
	}

IL_01c5:
	{
		Material_t19 * L_41 = (__this->___sunShaftsMaterial_15);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_3, L_41, 2, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_01d3:
	{
		Material_t19 * L_42 = (__this->___simpleClearMaterial_17);
		VirtActionInvoker2< RenderTexture_t21 *, Material_t19 * >::Invoke(&PostEffectsBase_DrawBorder_m855_MethodInfo, __this, V_3, L_42);
		int32_t L_43 = (__this->___radialBlurIterations_7);
		int32_t L_44 = SunShafts_ClampBlurIterationsToSomethingThatMakesSense_m878(__this, L_43, /*hidden argument*/&SunShafts_ClampBlurIterationsToSomethingThatMakesSense_m878_MethodInfo);
		__this->___radialBlurIterations_7 = L_44;
		float L_45 = (__this->___sunShaftBlurRadius_9);
		V_5 = ((float)((float)L_45*(float)(0.00130208337f)));
		Material_t19 * L_46 = (__this->___sunShaftsMaterial_15);
		Vector4_t52  L_47 = {0};
		Vector4__ctor_m193(&L_47, V_5, V_5, (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_46);
		Material_SetVector_m194(L_46, (String_t*) &_stringLiteral309, L_47, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_48 = (__this->___sunShaftsMaterial_15);
		NullCheck((&V_1));
		float L_49 = ((&V_1)->___x_1);
		NullCheck((&V_1));
		float L_50 = ((&V_1)->___y_2);
		NullCheck((&V_1));
		float L_51 = ((&V_1)->___z_3);
		float L_52 = (__this->___maxRadius_12);
		Vector4_t52  L_53 = {0};
		Vector4__ctor_m193(&L_53, L_49, L_50, L_51, L_52, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_48);
		Material_SetVector_m194(L_48, (String_t*) &_stringLiteral310, L_53, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		V_6 = 0;
		goto IL_02f9;
	}

IL_0255:
	{
		Material_t19 * L_54 = (__this->___sunShaftsMaterial_15);
		Graphics_Blit_m224(NULL /*static, unused*/, V_3, V_2, L_54, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		float L_55 = (__this->___sunShaftBlurRadius_9);
		V_5 = ((float)((float)((float)((float)L_55*(float)((float)((float)((float)((float)((float)((float)(((float)V_6))*(float)(2.0f)))+(float)(1.0f)))*(float)(6.0f)))))/(float)(768.0f)));
		Material_t19 * L_56 = (__this->___sunShaftsMaterial_15);
		Vector4_t52  L_57 = {0};
		Vector4__ctor_m193(&L_57, V_5, V_5, (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_56);
		Material_SetVector_m194(L_56, (String_t*) &_stringLiteral309, L_57, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_58 = (__this->___sunShaftsMaterial_15);
		Graphics_Blit_m224(NULL /*static, unused*/, V_2, V_3, L_58, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		float L_59 = (__this->___sunShaftBlurRadius_9);
		V_5 = ((float)((float)((float)((float)L_59*(float)((float)((float)((float)((float)((float)((float)(((float)V_6))*(float)(2.0f)))+(float)(2.0f)))*(float)(6.0f)))))/(float)(768.0f)));
		Material_t19 * L_60 = (__this->___sunShaftsMaterial_15);
		Vector4_t52  L_61 = {0};
		Vector4__ctor_m193(&L_61, V_5, V_5, (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_60);
		Material_SetVector_m194(L_60, (String_t*) &_stringLiteral309, L_61, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_02f9:
	{
		int32_t L_62 = (__this->___radialBlurIterations_7);
		if ((((int32_t)V_6) < ((int32_t)L_62)))
		{
			goto IL_0255;
		}
	}
	{
		NullCheck((&V_1));
		float L_63 = ((&V_1)->___z_3);
		if ((((float)L_63) < ((float)(((float)0)))))
		{
			goto IL_0365;
		}
	}
	{
		Material_t19 * L_64 = (__this->___sunShaftsMaterial_15);
		Color_t29 * L_65 = &(__this->___sunColor_8);
		NullCheck(L_65);
		float L_66 = (L_65->___r_0);
		Color_t29 * L_67 = &(__this->___sunColor_8);
		NullCheck(L_67);
		float L_68 = (L_67->___g_1);
		Color_t29 * L_69 = &(__this->___sunColor_8);
		NullCheck(L_69);
		float L_70 = (L_69->___b_2);
		Color_t29 * L_71 = &(__this->___sunColor_8);
		NullCheck(L_71);
		float L_72 = (L_71->___a_3);
		Vector4_t52  L_73 = {0};
		Vector4__ctor_m193(&L_73, L_66, L_68, L_70, L_72, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		float L_74 = (__this->___sunShaftIntensity_10);
		Vector4_t52  L_75 = Vector4_op_Multiply_m608(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/&Vector4_op_Multiply_m608_MethodInfo);
		NullCheck(L_64);
		Material_SetVector_m194(L_64, (String_t*) &_stringLiteral313, L_75, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		goto IL_037a;
	}

IL_0365:
	{
		Material_t19 * L_76 = (__this->___sunShaftsMaterial_15);
		Vector4_t52  L_77 = Vector4_get_zero_m922(NULL /*static, unused*/, /*hidden argument*/&Vector4_get_zero_m922_MethodInfo);
		NullCheck(L_76);
		Material_SetVector_m194(L_76, (String_t*) &_stringLiteral313, L_77, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
	}

IL_037a:
	{
		Material_t19 * L_78 = (__this->___sunShaftsMaterial_15);
		NullCheck(L_78);
		Material_SetTexture_m186(L_78, (String_t*) &_stringLiteral220, V_3, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_79 = (__this->___sunShaftsMaterial_15);
		int32_t L_80 = (__this->___screenBlendMode_5);
		G_B21_0 = L_79;
		G_B21_1 = ___destination;
		G_B21_2 = ___source;
		if ((((uint32_t)L_80) != ((uint32_t)0)))
		{
			G_B22_0 = L_79;
			G_B22_1 = ___destination;
			G_B22_2 = ___source;
			goto IL_03a5;
		}
	}
	{
		G_B23_0 = 0;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		goto IL_03a6;
	}

IL_03a5:
	{
		G_B23_0 = 4;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
	}

IL_03a6:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B23_3, G_B23_2, G_B23_1, G_B23_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_3, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_2, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_03b7:
	{
		return;
	}
}
// System.Int32 SunShafts::ClampBlurIterationsToSomethingThatMakesSense(System.Int32)
extern "C" int32_t SunShafts_ClampBlurIterationsToSomethingThatMakesSense_m878 (SunShafts_t210 * __this, int32_t ___its, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		if ((((int32_t)___its) >= ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_0020;
	}

IL_000d:
	{
		if ((((int32_t)___its) <= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}
	{
		G_B5_0 = 4;
		goto IL_0020;
	}

IL_001a:
	{
		G_B5_0 = ___its;
		goto IL_0020;
	}

IL_0020:
	{
		return G_B5_0;
	}
}
// System.Void SunShafts::Main()
extern MethodInfo SunShafts_Main_m879_MethodInfo;
extern "C" void SunShafts_Main_m879 (SunShafts_t210 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// TiltShift
#include "AssemblyU2DUnityScriptU2Dfirstpass_TiltShift.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TiltShift_t211_il2cpp_TypeInfo;
// TiltShift
#include "AssemblyU2DUnityScriptU2Dfirstpass_TiltShiftMethodDeclarations.h"

extern MethodInfo TiltShift_CheckResources_m881_MethodInfo;
extern MethodInfo Color_get_black_m623_MethodInfo;


// System.Void TiltShift::.ctor()
extern MethodInfo TiltShift__ctor_m880_MethodInfo;
extern "C" void TiltShift__ctor_m880 (TiltShift_t211 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___renderTextureDivider_6 = 2;
		__this->___blurIterations_7 = 2;
		__this->___enableForegroundBlur_8 = 1;
		__this->___foregroundBlurIterations_9 = 2;
		__this->___maxBlurSpread_10 = (1.5f);
		__this->___focalPoint_11 = (30.0f);
		__this->___smoothness_12 = (1.65f);
		__this->___distance01_15 = (0.2f);
		__this->___end01_16 = (1.0f);
		__this->___curve_17 = (1.0f);
		return;
	}
}
// System.Boolean TiltShift::CheckResources()
extern "C" bool TiltShift_CheckResources_m881 (TiltShift_t211 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 1);
		Shader_t18 * L_0 = (__this->___tiltShiftShader_4);
		Material_t19 * L_1 = (__this->___tiltShiftMaterial_5);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___tiltShiftMaterial_5 = L_2;
		bool L_3 = (__this->___isSupported_3);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0031:
	{
		bool L_4 = (__this->___isSupported_3);
		return L_4;
	}
}
// System.Void TiltShift::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo TiltShift_OnRenderImage_m882_MethodInfo;
extern "C" void TiltShift_OnRenderImage_m882 (TiltShift_t211 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	RenderTexture_t21 * V_3 = {0};
	RenderTexture_t21 * V_4 = {0};
	RenderTexture_t21 * V_5 = {0};
	RenderTexture_t21 * V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t54  V_9 = {0};
	TiltShift_t211 * G_B4_0 = {0};
	TiltShift_t211 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	TiltShift_t211 * G_B5_1 = {0};
	TiltShift_t211 * G_B7_0 = {0};
	TiltShift_t211 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	TiltShift_t211 * G_B8_1 = {0};
	TiltShift_t211 * G_B10_0 = {0};
	TiltShift_t211 * G_B9_0 = {0};
	int32_t G_B11_0 = 0;
	TiltShift_t211 * G_B11_1 = {0};
	TiltShift_t211 * G_B13_0 = {0};
	TiltShift_t211 * G_B12_0 = {0};
	int32_t G_B14_0 = 0;
	TiltShift_t211 * G_B14_1 = {0};
	Material_t19 * G_B25_0 = {0};
	RenderTexture_t21 * G_B25_1 = {0};
	RenderTexture_t21 * G_B25_2 = {0};
	Material_t19 * G_B24_0 = {0};
	RenderTexture_t21 * G_B24_1 = {0};
	RenderTexture_t21 * G_B24_2 = {0};
	int32_t G_B26_0 = 0;
	Material_t19 * G_B26_1 = {0};
	RenderTexture_t21 * G_B26_2 = {0};
	RenderTexture_t21 * G_B26_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&TiltShift_CheckResources_m881_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_03f3;
	}

IL_0017:
	{
		NullCheck(___source);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		V_0 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_1))))/(float)((float)((float)(1.0f)*(float)(((float)L_2))))));
		V_1 = (0.001953125f);
		int32_t L_3 = (__this->___renderTextureDivider_6);
		G_B3_0 = __this;
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			G_B4_0 = __this;
			goto IL_004c;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		goto IL_0052;
	}

IL_004c:
	{
		int32_t L_4 = (__this->___renderTextureDivider_6);
		G_B5_0 = L_4;
		G_B5_1 = G_B4_0;
	}

IL_0052:
	{
		NullCheck(G_B5_1);
		G_B5_1->___renderTextureDivider_6 = G_B5_0;
		int32_t L_5 = (__this->___renderTextureDivider_6);
		G_B6_0 = __this;
		if ((((int32_t)L_5) <= ((int32_t)4)))
		{
			G_B7_0 = __this;
			goto IL_006a;
		}
	}
	{
		G_B8_0 = 4;
		G_B8_1 = G_B6_0;
		goto IL_0070;
	}

IL_006a:
	{
		int32_t L_6 = (__this->___renderTextureDivider_6);
		G_B8_0 = L_6;
		G_B8_1 = G_B7_0;
	}

IL_0070:
	{
		NullCheck(G_B8_1);
		G_B8_1->___renderTextureDivider_6 = G_B8_0;
		int32_t L_7 = (__this->___blurIterations_7);
		G_B9_0 = __this;
		if ((((int32_t)L_7) >= ((int32_t)1)))
		{
			G_B10_0 = __this;
			goto IL_0088;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_008e;
	}

IL_0088:
	{
		int32_t L_8 = (__this->___blurIterations_7);
		G_B11_0 = L_8;
		G_B11_1 = G_B10_0;
	}

IL_008e:
	{
		NullCheck(G_B11_1);
		G_B11_1->___blurIterations_7 = G_B11_0;
		int32_t L_9 = (__this->___blurIterations_7);
		G_B12_0 = __this;
		if ((((int32_t)L_9) <= ((int32_t)4)))
		{
			G_B13_0 = __this;
			goto IL_00a6;
		}
	}
	{
		G_B14_0 = 4;
		G_B14_1 = G_B12_0;
		goto IL_00ac;
	}

IL_00a6:
	{
		int32_t L_10 = (__this->___blurIterations_7);
		G_B14_0 = L_10;
		G_B14_1 = G_B13_0;
	}

IL_00ac:
	{
		NullCheck(G_B14_1);
		G_B14_1->___blurIterations_7 = G_B14_0;
		Camera_t56 * L_11 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		float L_12 = (__this->___focalPoint_11);
		Camera_t56 * L_13 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_13);
		Transform_t85 * L_14 = Component_get_transform_m534(L_13, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_14);
		Vector3_t54  L_15 = Transform_get_forward_m635(L_14, /*hidden argument*/&Transform_get_forward_m635_MethodInfo);
		Vector3_t54  L_16 = Vector3_op_Multiply_m950(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/&Vector3_op_Multiply_m950_MethodInfo);
		Camera_t56 * L_17 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_17);
		Transform_t85 * L_18 = Component_get_transform_m534(L_17, /*hidden argument*/&Component_get_transform_m534_MethodInfo);
		NullCheck(L_18);
		Vector3_t54  L_19 = Transform_get_position_m535(L_18, /*hidden argument*/&Transform_get_position_m535_MethodInfo);
		Vector3_t54  L_20 = Vector3_op_Addition_m602(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/&Vector3_op_Addition_m602_MethodInfo);
		NullCheck(L_11);
		Vector3_t54  L_21 = Camera_WorldToViewportPoint_m951(L_11, L_20, /*hidden argument*/&Camera_WorldToViewportPoint_m951_MethodInfo);
		V_9 = L_21;
		NullCheck((&V_9));
		float L_22 = ((&V_9)->___z_3);
		Camera_t56 * L_23 = Component_get_camera_m215(__this, /*hidden argument*/&Component_get_camera_m215_MethodInfo);
		NullCheck(L_23);
		float L_24 = Camera_get_farClipPlane_m219(L_23, /*hidden argument*/&Camera_get_farClipPlane_m219_MethodInfo);
		V_2 = ((float)((float)L_22/(float)L_24));
		__this->___distance01_15 = V_2;
		__this->___start01_14 = (((float)0));
		__this->___end01_16 = (1.0f);
		float L_25 = (__this->___start01_14);
		float L_26 = Mathf_Min_m916(NULL /*static, unused*/, ((float)((float)V_2-(float)(1.17549435E-38f))), L_25, /*hidden argument*/&Mathf_Min_m916_MethodInfo);
		__this->___start01_14 = L_26;
		float L_27 = (__this->___end01_16);
		float L_28 = Mathf_Max_m915(NULL /*static, unused*/, ((float)((float)V_2+(float)(1.17549435E-38f))), L_27, /*hidden argument*/&Mathf_Max_m915_MethodInfo);
		__this->___end01_16 = L_28;
		float L_29 = (__this->___smoothness_12);
		float L_30 = (__this->___distance01_15);
		__this->___curve_17 = ((float)((float)L_29*(float)L_30));
		NullCheck(___source);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_33 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, L_31, L_32, 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_3 = L_33;
		NullCheck(___source);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		RenderTexture_t21 * L_36 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, L_34, L_35, 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_4 = L_36;
		NullCheck(___source);
		int32_t L_37 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		int32_t L_38 = (__this->___renderTextureDivider_6);
		NullCheck(___source);
		int32_t L_39 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		int32_t L_40 = (__this->___renderTextureDivider_6);
		RenderTexture_t21 * L_41 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, ((int32_t)((int32_t)L_37/(int32_t)L_38)), ((int32_t)((int32_t)L_39/(int32_t)L_40)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_5 = L_41;
		NullCheck(___source);
		int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		int32_t L_43 = (__this->___renderTextureDivider_6);
		NullCheck(___source);
		int32_t L_44 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		int32_t L_45 = (__this->___renderTextureDivider_6);
		RenderTexture_t21 * L_46 = RenderTexture_GetTemporary_m183(NULL /*static, unused*/, ((int32_t)((int32_t)L_42/(int32_t)L_43)), ((int32_t)((int32_t)L_44/(int32_t)L_45)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m183_MethodInfo);
		V_6 = L_46;
		Material_t19 * L_47 = (__this->___tiltShiftMaterial_5);
		float L_48 = (__this->___start01_14);
		float L_49 = (__this->___distance01_15);
		float L_50 = (__this->___end01_16);
		float L_51 = (__this->___curve_17);
		Vector4_t52  L_52 = {0};
		Vector4__ctor_m193(&L_52, L_48, L_49, L_50, L_51, /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_47);
		Material_SetVector_m194(L_47, (String_t*) &_stringLiteral314, L_52, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_53 = (__this->___tiltShiftMaterial_5);
		NullCheck(L_53);
		Material_SetTexture_m186(L_53, (String_t*) &_stringLiteral315, V_3, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		bool L_54 = (__this->___enableForegroundBlur_8);
		if (!L_54)
		{
			goto IL_02df;
		}
	}
	{
		Material_t19 * L_55 = (__this->___tiltShiftMaterial_5);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_3, L_55, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Graphics_Blit_m184(NULL /*static, unused*/, V_3, V_5, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		V_7 = 0;
		goto IL_02ab;
	}

IL_0231:
	{
		Material_t19 * L_56 = (__this->___tiltShiftMaterial_5);
		float L_57 = (__this->___maxBlurSpread_10);
		Vector4_t52  L_58 = {0};
		Vector4__ctor_m193(&L_58, (((float)0)), ((float)((float)((float)((float)L_57*(float)(0.75f)))*(float)V_1)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_56);
		Material_SetVector_m194(L_56, (String_t*) &_stringLiteral225, L_58, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_59 = (__this->___tiltShiftMaterial_5);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_6, L_59, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_60 = (__this->___tiltShiftMaterial_5);
		float L_61 = (__this->___maxBlurSpread_10);
		Vector4_t52  L_62 = {0};
		Vector4__ctor_m193(&L_62, ((float)((float)((float)((float)((float)((float)L_61*(float)(0.75f)))/(float)V_0))*(float)V_1)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_60);
		Material_SetVector_m194(L_60, (String_t*) &_stringLiteral225, L_62, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_63 = (__this->___tiltShiftMaterial_5);
		Graphics_Blit_m224(NULL /*static, unused*/, V_6, V_5, L_63, 3, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		V_7 = ((int32_t)((int32_t)V_7+(int32_t)1));
	}

IL_02ab:
	{
		int32_t L_64 = (__this->___foregroundBlurIterations_9);
		if ((((int32_t)V_7) < ((int32_t)L_64)))
		{
			goto IL_0231;
		}
	}
	{
		Material_t19 * L_65 = (__this->___tiltShiftMaterial_5);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_4, L_65, 7, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_66 = (__this->___tiltShiftMaterial_5);
		NullCheck(L_66);
		Material_SetTexture_m186(L_66, (String_t*) &_stringLiteral315, V_4, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		goto IL_02f1;
	}

IL_02df:
	{
		RenderTexture_set_active_m952(NULL /*static, unused*/, V_3, /*hidden argument*/&RenderTexture_set_active_m952_MethodInfo);
		Color_t29  L_67 = Color_get_black_m623(NULL /*static, unused*/, /*hidden argument*/&Color_get_black_m623_MethodInfo);
		GL_Clear_m953(NULL /*static, unused*/, 0, 1, L_67, /*hidden argument*/&GL_Clear_m953_MethodInfo);
	}

IL_02f1:
	{
		Material_t19 * L_68 = (__this->___tiltShiftMaterial_5);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_3, L_68, 5, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_69 = (__this->___tiltShiftMaterial_5);
		NullCheck(L_69);
		Material_SetTexture_m186(L_69, (String_t*) &_stringLiteral315, V_3, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, V_6, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		V_8 = 0;
		goto IL_039a;
	}

IL_0320:
	{
		Material_t19 * L_70 = (__this->___tiltShiftMaterial_5);
		float L_71 = (__this->___maxBlurSpread_10);
		Vector4_t52  L_72 = {0};
		Vector4__ctor_m193(&L_72, (((float)0)), ((float)((float)((float)((float)L_71*(float)(1.0f)))*(float)V_1)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_70);
		Material_SetVector_m194(L_70, (String_t*) &_stringLiteral225, L_72, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_73 = (__this->___tiltShiftMaterial_5);
		Graphics_Blit_m224(NULL /*static, unused*/, V_6, V_5, L_73, 6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		Material_t19 * L_74 = (__this->___tiltShiftMaterial_5);
		float L_75 = (__this->___maxBlurSpread_10);
		Vector4_t52  L_76 = {0};
		Vector4__ctor_m193(&L_76, ((float)((float)((float)((float)((float)((float)L_75*(float)(1.0f)))/(float)V_0))*(float)V_1)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_74);
		Material_SetVector_m194(L_74, (String_t*) &_stringLiteral225, L_76, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_77 = (__this->___tiltShiftMaterial_5);
		Graphics_Blit_m224(NULL /*static, unused*/, V_5, V_6, L_77, 6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		V_8 = ((int32_t)((int32_t)V_8+(int32_t)1));
	}

IL_039a:
	{
		int32_t L_78 = (__this->___blurIterations_7);
		if ((((int32_t)V_8) < ((int32_t)L_78)))
		{
			goto IL_0320;
		}
	}
	{
		Material_t19 * L_79 = (__this->___tiltShiftMaterial_5);
		NullCheck(L_79);
		Material_SetTexture_m186(L_79, (String_t*) &_stringLiteral316, V_6, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_80 = (__this->___tiltShiftMaterial_5);
		bool L_81 = (__this->___visualizeCoc_13);
		G_B24_0 = L_80;
		G_B24_1 = ___destination;
		G_B24_2 = ___source;
		if (!L_81)
		{
			G_B25_0 = L_80;
			G_B25_1 = ___destination;
			G_B25_2 = ___source;
			goto IL_03d2;
		}
	}
	{
		G_B26_0 = 4;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		G_B26_3 = G_B24_2;
		goto IL_03d3;
	}

IL_03d2:
	{
		G_B26_0 = 1;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
	}

IL_03d3:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B26_3, G_B26_2, G_B26_1, G_B26_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_3, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_4, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_5, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_6, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_03f3:
	{
		return;
	}
}
// System.Void TiltShift::Main()
extern MethodInfo TiltShift_Main_m883_MethodInfo;
extern "C" void TiltShift_Main_m883 (TiltShift_t211 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Tonemapping/TonemapperType
#include "AssemblyU2DUnityScriptU2Dfirstpass_Tonemapping_TonemapperTyp.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TonemapperType_t212_il2cpp_TypeInfo;
// Tonemapping/TonemapperType
#include "AssemblyU2DUnityScriptU2Dfirstpass_Tonemapping_TonemapperTypMethodDeclarations.h"



// Tonemapping/AdaptiveTexSize
#include "AssemblyU2DUnityScriptU2Dfirstpass_Tonemapping_AdaptiveTexSi.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AdaptiveTexSize_t213_il2cpp_TypeInfo;
// Tonemapping/AdaptiveTexSize
#include "AssemblyU2DUnityScriptU2Dfirstpass_Tonemapping_AdaptiveTexSiMethodDeclarations.h"



// Tonemapping
#include "AssemblyU2DUnityScriptU2Dfirstpass_Tonemapping.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Tonemapping_t214_il2cpp_TypeInfo;
// Tonemapping
#include "AssemblyU2DUnityScriptU2Dfirstpass_TonemappingMethodDeclarations.h"

// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
extern TypeInfo KeyframeU5BU5D_t221_il2cpp_TypeInfo;
extern TypeInfo Keyframe_t222_il2cpp_TypeInfo;
extern TypeInfo AnimationCurve_t182_il2cpp_TypeInfo;
extern TypeInfo RenderTextureU5BU5D_t25_il2cpp_TypeInfo;
// UnityScript.Lang.Extensions
#include "UnityScript_Lang_UnityScript_Lang_ExtensionsMethodDeclarations.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
extern Il2CppType KeyframeU5BU5D_t221_0_0_0;
extern Il2CppType RenderTextureU5BU5D_t25_0_0_0;
extern MethodInfo AnimationCurve_get_keys_m990_MethodInfo;
extern MethodInfo Extensions_get_length_m991_MethodInfo;
extern MethodInfo Keyframe__ctor_m992_MethodInfo;
extern MethodInfo AnimationCurve__ctor_m993_MethodInfo;
extern MethodInfo AnimationCurve_get_length_m994_MethodInfo;
extern MethodInfo AnimationCurve_get_Item_m995_MethodInfo;
extern MethodInfo Keyframe_get_time_m996_MethodInfo;
extern MethodInfo RenderTexture__ctor_m997_MethodInfo;
extern MethodInfo Tonemapping_CheckResources_m885_MethodInfo;
extern MethodInfo Tonemapping_UpdateCurve_m886_MethodInfo;
extern MethodInfo Tonemapping_CreateInternalRenderTexture_m888_MethodInfo;
extern MethodInfo Mathf_Log_m998_MethodInfo;


// System.Void Tonemapping::.ctor()
extern MethodInfo Tonemapping__ctor_m884_MethodInfo;
extern "C" void Tonemapping__ctor_m884 (Tonemapping_t214 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___type_4 = 3;
		__this->___adaptiveTextureSize_5 = ((int32_t)256);
		__this->___exposureAdjustment_8 = (1.5f);
		__this->___middleGrey_9 = (0.4f);
		__this->___white_10 = (2.0f);
		__this->___adaptionSpeed_11 = (1.5f);
		__this->___validRenderTextureFormat_13 = 1;
		__this->___rtFormat_16 = 2;
		return;
	}
}
// System.Boolean Tonemapping::CheckResources()
extern "C" bool Tonemapping_CheckResources_m885 (Tonemapping_t214 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker2< bool, bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m850_MethodInfo, __this, 0, 1);
		Shader_t18 * L_0 = (__this->___tonemapper_12);
		Material_t19 * L_1 = (__this->___tonemapMaterial_14);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___tonemapMaterial_14 = L_2;
		Texture2D_t36 * L_3 = (__this->___curveTex_7);
		bool L_4 = Object_op_Implicit_m173(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (L_4)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_5 = (__this->___type_4);
		if ((((uint32_t)L_5) != ((uint32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		Texture2D_t36 * L_6 = (Texture2D_t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t36_il2cpp_TypeInfo));
		Texture2D__ctor_m934(L_6, ((int32_t)256), 1, 5, 0, 1, /*hidden argument*/&Texture2D__ctor_m934_MethodInfo);
		__this->___curveTex_7 = L_6;
		Texture2D_t36 * L_7 = (__this->___curveTex_7);
		NullCheck(L_7);
		Texture_set_filterMode_m917(L_7, 1, /*hidden argument*/&Texture_set_filterMode_m917_MethodInfo);
		Texture2D_t36 * L_8 = (__this->___curveTex_7);
		NullCheck(L_8);
		Texture_set_wrapMode_m918(L_8, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		Texture2D_t36 * L_9 = (__this->___curveTex_7);
		NullCheck(L_9);
		Object_set_hideFlags_m172(L_9, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
	}

IL_0075:
	{
		bool L_10 = (__this->___isSupported_3);
		if (L_10)
		{
			goto IL_0086;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0086:
	{
		bool L_11 = (__this->___isSupported_3);
		return L_11;
	}
}
// System.Single Tonemapping::UpdateCurve()
extern TypeInfo* KeyframeU5BU5D_t221_il2cpp_TypeInfo_var;
extern "C" float Tonemapping_UpdateCurve_m886 (Tonemapping_t214 * __this, MethodInfo* method)
{
	static bool Tonemapping_UpdateCurve_m886_init;
	if (!Tonemapping_UpdateCurve_m886_init)
	{
		KeyframeU5BU5D_t221_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&KeyframeU5BU5D_t221_0_0_0);
		Tonemapping_UpdateCurve_m886_init = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Keyframe_t222  V_3 = {0};
	{
		V_0 = (1.0f);
		AnimationCurve_t182 * L_0 = (__this->___remapCurve_6);
		NullCheck(L_0);
		KeyframeU5BU5D_t221* L_1 = AnimationCurve_get_keys_m990(L_0, /*hidden argument*/&AnimationCurve_get_keys_m990_MethodInfo);
		int32_t L_2 = Extensions_get_length_m991(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, /*hidden argument*/&Extensions_get_length_m991_MethodInfo);
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0057;
		}
	}
	{
		KeyframeU5BU5D_t221* L_3 = ((KeyframeU5BU5D_t221*)SZArrayNew(KeyframeU5BU5D_t221_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		Keyframe_t222  L_4 = {0};
		Keyframe__ctor_m992(&L_4, (((float)0)), (((float)0)), /*hidden argument*/&Keyframe__ctor_m992_MethodInfo);
		*((Keyframe_t222 *)(Keyframe_t222 *)SZArrayLdElema(L_3, 0)) = L_4;
		KeyframeU5BU5D_t221* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		Keyframe_t222  L_6 = {0};
		Keyframe__ctor_m992(&L_6, (((float)2)), (((float)1)), /*hidden argument*/&Keyframe__ctor_m992_MethodInfo);
		*((Keyframe_t222 *)(Keyframe_t222 *)SZArrayLdElema(L_5, 1)) = L_6;
		AnimationCurve_t182 * L_7 = (AnimationCurve_t182 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnimationCurve_t182_il2cpp_TypeInfo));
		AnimationCurve__ctor_m993(L_7, L_5, /*hidden argument*/&AnimationCurve__ctor_m993_MethodInfo);
		__this->___remapCurve_6 = L_7;
	}

IL_0057:
	{
		AnimationCurve_t182 * L_8 = (__this->___remapCurve_6);
		if (!L_8)
		{
			goto IL_00ef;
		}
	}
	{
		AnimationCurve_t182 * L_9 = (__this->___remapCurve_6);
		NullCheck(L_9);
		int32_t L_10 = AnimationCurve_get_length_m994(L_9, /*hidden argument*/&AnimationCurve_get_length_m994_MethodInfo);
		if (!L_10)
		{
			goto IL_0093;
		}
	}
	{
		AnimationCurve_t182 * L_11 = (__this->___remapCurve_6);
		AnimationCurve_t182 * L_12 = (__this->___remapCurve_6);
		NullCheck(L_12);
		int32_t L_13 = AnimationCurve_get_length_m994(L_12, /*hidden argument*/&AnimationCurve_get_length_m994_MethodInfo);
		NullCheck(L_11);
		Keyframe_t222  L_14 = AnimationCurve_get_Item_m995(L_11, ((int32_t)((int32_t)L_13-(int32_t)1)), /*hidden argument*/&AnimationCurve_get_Item_m995_MethodInfo);
		V_3 = L_14;
		float L_15 = Keyframe_get_time_m996((&V_3), /*hidden argument*/&Keyframe_get_time_m996_MethodInfo);
		V_0 = L_15;
	}

IL_0093:
	{
		V_1 = (((float)0));
		goto IL_00d9;
	}

IL_009b:
	{
		AnimationCurve_t182 * L_16 = (__this->___remapCurve_6);
		NullCheck(L_16);
		float L_17 = AnimationCurve_Evaluate_m935(L_16, ((float)((float)((float)((float)V_1*(float)(1.0f)))*(float)V_0)), /*hidden argument*/&AnimationCurve_Evaluate_m935_MethodInfo);
		V_2 = L_17;
		Texture2D_t36 * L_18 = (__this->___curveTex_7);
		float L_19 = floorf(((float)((float)V_1*(float)(255.0f))));
		Color_t29  L_20 = {0};
		Color__ctor_m937(&L_20, V_2, V_2, V_2, /*hidden argument*/&Color__ctor_m937_MethodInfo);
		NullCheck(L_18);
		Texture2D_SetPixel_m938(L_18, (((int32_t)L_19)), 0, L_20, /*hidden argument*/&Texture2D_SetPixel_m938_MethodInfo);
		V_1 = ((float)((float)V_1+(float)(0.003921569f)));
	}

IL_00d9:
	{
		if ((((float)V_1) <= ((float)(1.0f))))
		{
			goto IL_009b;
		}
	}
	{
		Texture2D_t36 * L_21 = (__this->___curveTex_7);
		NullCheck(L_21);
		Texture2D_Apply_m939(L_21, /*hidden argument*/&Texture2D_Apply_m939_MethodInfo);
	}

IL_00ef:
	{
		return ((float)((float)(1.0f)/(float)V_0));
	}
}
// System.Void Tonemapping::OnDisable()
extern MethodInfo Tonemapping_OnDisable_m887_MethodInfo;
extern "C" void Tonemapping_OnDisable_m887 (Tonemapping_t214 * __this, MethodInfo* method)
{
	{
		RenderTexture_t21 * L_0 = (__this->___rt_15);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RenderTexture_t21 * L_2 = (__this->___rt_15);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
		__this->___rt_15 = (RenderTexture_t21 *)NULL;
	}

IL_0022:
	{
		Material_t19 * L_3 = (__this->___tonemapMaterial_14);
		bool L_4 = Object_op_Implicit_m173(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		Material_t19 * L_5 = (__this->___tonemapMaterial_14);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
		__this->___tonemapMaterial_14 = (Material_t19 *)NULL;
	}

IL_0044:
	{
		Texture2D_t36 * L_6 = (__this->___curveTex_7);
		bool L_7 = Object_op_Implicit_m173(NULL /*static, unused*/, L_6, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		Texture2D_t36 * L_8 = (__this->___curveTex_7);
		Object_DestroyImmediate_m174(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
		__this->___curveTex_7 = (Texture2D_t36 *)NULL;
	}

IL_0066:
	{
		return;
	}
}
// System.Boolean Tonemapping::CreateInternalRenderTexture()
extern "C" bool Tonemapping_CreateInternalRenderTexture_m888 (Tonemapping_t214 * __this, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	Tonemapping_t214 * G_B4_0 = {0};
	Tonemapping_t214 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	Tonemapping_t214 * G_B5_1 = {0};
	{
		RenderTexture_t21 * L_0 = (__this->___rt_15);
		bool L_1 = Object_op_Implicit_m173(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0051;
	}

IL_0016:
	{
		bool L_2 = SystemInfo_SupportsRenderTextureFormat_m213(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/&SystemInfo_SupportsRenderTextureFormat_m213_MethodInfo);
		G_B3_0 = __this;
		if (!L_2)
		{
			G_B4_0 = __this;
			goto IL_002a;
		}
	}
	{
		G_B5_0 = ((int32_t)13);
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		NullCheck(G_B5_1);
		G_B5_1->___rtFormat_16 = G_B5_0;
		int32_t L_3 = (__this->___rtFormat_16);
		RenderTexture_t21 * L_4 = (RenderTexture_t21 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenderTexture_t21_il2cpp_TypeInfo));
		RenderTexture__ctor_m997(L_4, 1, 1, 0, L_3, /*hidden argument*/&RenderTexture__ctor_m997_MethodInfo);
		__this->___rt_15 = L_4;
		RenderTexture_t21 * L_5 = (__this->___rt_15);
		NullCheck(L_5);
		Object_set_hideFlags_m172(L_5, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		G_B6_0 = 1;
	}

IL_0051:
	{
		return G_B6_0;
	}
}
// System.Void Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo Tonemapping_OnRenderImage_m889_MethodInfo;
extern TypeInfo* RenderTextureU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" void Tonemapping_OnRenderImage_m889 (Tonemapping_t214 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	static bool Tonemapping_OnRenderImage_m889_init;
	if (!Tonemapping_OnRenderImage_m889_init)
	{
		RenderTextureU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&RenderTextureU5BU5D_t25_0_0_0);
		Tonemapping_OnRenderImage_m889_init = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	RenderTexture_t21 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RenderTextureU5BU5D_t25* V_5 = {0};
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	RenderTexture_t21 * V_8 = {0};
	Tonemapping_t214 * G_B4_0 = {0};
	Tonemapping_t214 * G_B3_0 = {0};
	float G_B5_0 = 0.0f;
	Tonemapping_t214 * G_B5_1 = {0};
	Tonemapping_t214 * G_B29_0 = {0};
	Tonemapping_t214 * G_B28_0 = {0};
	float G_B30_0 = 0.0f;
	Tonemapping_t214 * G_B30_1 = {0};
	Material_t19 * G_B32_0 = {0};
	RenderTexture_t21 * G_B32_1 = {0};
	RenderTexture_t21 * G_B32_2 = {0};
	Material_t19 * G_B31_0 = {0};
	RenderTexture_t21 * G_B31_1 = {0};
	RenderTexture_t21 * G_B31_2 = {0};
	int32_t G_B33_0 = 0;
	Material_t19 * G_B33_1 = {0};
	RenderTexture_t21 * G_B33_2 = {0};
	RenderTexture_t21 * G_B33_3 = {0};
	Tonemapping_t214 * G_B35_0 = {0};
	Tonemapping_t214 * G_B34_0 = {0};
	float G_B36_0 = 0.0f;
	Tonemapping_t214 * G_B36_1 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Tonemapping_CheckResources_m885_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_03ec;
	}

IL_0017:
	{
		float L_1 = (__this->___exposureAdjustment_8);
		G_B3_0 = __this;
		if ((((float)L_1) >= ((float)(0.001f))))
		{
			G_B4_0 = __this;
			goto IL_0032;
		}
	}
	{
		G_B5_0 = (0.001f);
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_0032:
	{
		float L_2 = (__this->___exposureAdjustment_8);
		G_B5_0 = L_2;
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		NullCheck(G_B5_1);
		G_B5_1->___exposureAdjustment_8 = G_B5_0;
		int32_t L_3 = (__this->___type_4);
		if ((((uint32_t)L_3) != ((uint32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		float L_4 = (float)VirtFuncInvoker0< float >::Invoke(&Tonemapping_UpdateCurve_m886_MethodInfo, __this);
		V_0 = L_4;
		Material_t19 * L_5 = (__this->___tonemapMaterial_14);
		NullCheck(L_5);
		Material_SetFloat_m195(L_5, (String_t*) &_stringLiteral317, V_0, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_6 = (__this->___tonemapMaterial_14);
		Texture2D_t36 * L_7 = (__this->___curveTex_7);
		NullCheck(L_6);
		Material_SetTexture_m186(L_6, (String_t*) &_stringLiteral318, L_7, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_8 = (__this->___tonemapMaterial_14);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_8, 4, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_03ec;
	}

IL_008a:
	{
		int32_t L_9 = (__this->___type_4);
		if ((((uint32_t)L_9) != ((uint32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		Material_t19 * L_10 = (__this->___tonemapMaterial_14);
		float L_11 = (__this->___exposureAdjustment_8);
		NullCheck(L_10);
		Material_SetFloat_m195(L_10, (String_t*) &_stringLiteral319, L_11, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_12 = (__this->___tonemapMaterial_14);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_12, 6, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_03ec;
	}

IL_00bf:
	{
		int32_t L_13 = (__this->___type_4);
		if ((((uint32_t)L_13) != ((uint32_t)2)))
		{
			goto IL_00f4;
		}
	}
	{
		Material_t19 * L_14 = (__this->___tonemapMaterial_14);
		float L_15 = (__this->___exposureAdjustment_8);
		NullCheck(L_14);
		Material_SetFloat_m195(L_14, (String_t*) &_stringLiteral319, L_15, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_16 = (__this->___tonemapMaterial_14);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_16, 5, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_03ec;
	}

IL_00f4:
	{
		int32_t L_17 = (__this->___type_4);
		if ((((uint32_t)L_17) != ((uint32_t)3)))
		{
			goto IL_0129;
		}
	}
	{
		Material_t19 * L_18 = (__this->___tonemapMaterial_14);
		float L_19 = (__this->___exposureAdjustment_8);
		NullCheck(L_18);
		Material_SetFloat_m195(L_18, (String_t*) &_stringLiteral319, L_19, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_20 = (__this->___tonemapMaterial_14);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_20, 8, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_03ec;
	}

IL_0129:
	{
		int32_t L_21 = (__this->___type_4);
		if ((((uint32_t)L_21) != ((uint32_t)4)))
		{
			goto IL_0164;
		}
	}
	{
		Material_t19 * L_22 = (__this->___tonemapMaterial_14);
		float L_23 = (__this->___exposureAdjustment_8);
		NullCheck(L_22);
		Material_SetFloat_m195(L_22, (String_t*) &_stringLiteral319, ((float)((float)(0.5f)*(float)L_23)), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_24 = (__this->___tonemapMaterial_14);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_24, 7, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_03ec;
	}

IL_0164:
	{
		bool L_25 = (bool)VirtFuncInvoker0< bool >::Invoke(&Tonemapping_CreateInternalRenderTexture_m888_MethodInfo, __this);
		V_1 = L_25;
		int32_t L_26 = (__this->___adaptiveTextureSize_5);
		int32_t L_27 = (__this->___adaptiveTextureSize_5);
		int32_t L_28 = (__this->___rtFormat_16);
		RenderTexture_t21 * L_29 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, L_26, L_27, 0, L_28, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_2 = L_29;
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, V_2, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		NullCheck(V_2);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_2);
		float L_31 = Mathf_Log_m998(NULL /*static, unused*/, ((float)((float)(((float)L_30))*(float)(1.0f))), (((float)2)), /*hidden argument*/&Mathf_Log_m998_MethodInfo);
		V_3 = (((int32_t)L_31));
		V_4 = 2;
		V_5 = ((RenderTextureU5BU5D_t25*)SZArrayNew(RenderTextureU5BU5D_t25_il2cpp_TypeInfo_var, V_3));
		V_6 = 0;
		goto IL_01e3;
	}

IL_01b4:
	{
		NullCheck(V_2);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_2);
		NullCheck(V_2);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, V_2);
		int32_t L_34 = (__this->___rtFormat_16);
		RenderTexture_t21 * L_35 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, ((int32_t)((int32_t)L_32/(int32_t)V_4)), ((int32_t)((int32_t)L_33/(int32_t)V_4)), 0, L_34, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		ArrayElementTypeCheck (V_5, L_35);
		*((RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, V_6)) = (RenderTexture_t21 *)L_35;
		V_4 = ((int32_t)((int32_t)V_4*(int32_t)2));
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_01e3:
	{
		if ((((int32_t)V_6) < ((int32_t)V_3)))
		{
			goto IL_01b4;
		}
	}
	{
		NullCheck(___source);
		int32_t L_36 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_37 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		V_7 = ((float)((float)((float)((float)(((float)L_36))*(float)(1.0f)))/(float)((float)((float)(((float)L_37))*(float)(1.0f)))));
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, ((int32_t)((int32_t)V_3-(int32_t)1)));
		int32_t L_38 = ((int32_t)((int32_t)V_3-(int32_t)1));
		V_8 = (*(RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, L_38));
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, 0);
		int32_t L_39 = 0;
		Material_t19 * L_40 = (__this->___tonemapMaterial_14);
		Graphics_Blit_m224(NULL /*static, unused*/, V_2, (*(RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, L_39)), L_40, 1, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		int32_t L_41 = (__this->___type_4);
		if ((((uint32_t)L_41) != ((uint32_t)6)))
		{
			goto IL_026c;
		}
	}
	{
		V_6 = 0;
		goto IL_025d;
	}

IL_0235:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		int32_t L_42 = V_6;
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, ((int32_t)((int32_t)V_6+(int32_t)1)));
		int32_t L_43 = ((int32_t)((int32_t)V_6+(int32_t)1));
		Material_t19 * L_44 = (__this->___tonemapMaterial_14);
		Graphics_Blit_m224(NULL /*static, unused*/, (*(RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, L_42)), (*(RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, L_43)), L_44, ((int32_t)9), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, ((int32_t)((int32_t)V_6+(int32_t)1)));
		int32_t L_45 = ((int32_t)((int32_t)V_6+(int32_t)1));
		V_8 = (*(RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, L_45));
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_025d:
	{
		if ((((int32_t)V_6) < ((int32_t)((int32_t)((int32_t)V_3-(int32_t)1)))))
		{
			goto IL_0235;
		}
	}
	{
		goto IL_02aa;
	}

IL_026c:
	{
		int32_t L_46 = (__this->___type_4);
		if ((((uint32_t)L_46) != ((uint32_t)5)))
		{
			goto IL_02aa;
		}
	}
	{
		V_6 = 0;
		goto IL_02a0;
	}

IL_0280:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		int32_t L_47 = V_6;
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, ((int32_t)((int32_t)V_6+(int32_t)1)));
		int32_t L_48 = ((int32_t)((int32_t)V_6+(int32_t)1));
		Graphics_Blit_m184(NULL /*static, unused*/, (*(RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, L_47)), (*(RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, L_48)), /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, ((int32_t)((int32_t)V_6+(int32_t)1)));
		int32_t L_49 = ((int32_t)((int32_t)V_6+(int32_t)1));
		V_8 = (*(RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, L_49));
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_02a0:
	{
		if ((((int32_t)V_6) < ((int32_t)((int32_t)((int32_t)V_3-(int32_t)1)))))
		{
			goto IL_0280;
		}
	}

IL_02aa:
	{
		float L_50 = (__this->___adaptionSpeed_11);
		G_B28_0 = __this;
		if ((((float)L_50) >= ((float)(0.001f))))
		{
			G_B29_0 = __this;
			goto IL_02c5;
		}
	}
	{
		G_B30_0 = (0.001f);
		G_B30_1 = G_B28_0;
		goto IL_02cb;
	}

IL_02c5:
	{
		float L_51 = (__this->___adaptionSpeed_11);
		G_B30_0 = L_51;
		G_B30_1 = G_B29_0;
	}

IL_02cb:
	{
		NullCheck(G_B30_1);
		G_B30_1->___adaptionSpeed_11 = G_B30_0;
		Material_t19 * L_52 = (__this->___tonemapMaterial_14);
		float L_53 = (__this->___adaptionSpeed_11);
		NullCheck(L_52);
		Material_SetFloat_m195(L_52, (String_t*) &_stringLiteral320, L_53, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		RenderTexture_t21 * L_54 = (__this->___rt_15);
		Material_t19 * L_55 = (__this->___tonemapMaterial_14);
		G_B31_0 = L_55;
		G_B31_1 = L_54;
		G_B31_2 = V_8;
		if (!V_1)
		{
			G_B32_0 = L_55;
			G_B32_1 = L_54;
			G_B32_2 = V_8;
			goto IL_0300;
		}
	}
	{
		G_B33_0 = 3;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		G_B33_3 = G_B31_2;
		goto IL_0301;
	}

IL_0300:
	{
		G_B33_0 = 2;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
		G_B33_3 = G_B32_2;
	}

IL_0301:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B33_3, G_B33_2, G_B33_1, G_B33_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		float L_56 = (__this->___middleGrey_9);
		G_B34_0 = __this;
		if ((((float)L_56) >= ((float)(0.001f))))
		{
			G_B35_0 = __this;
			goto IL_0321;
		}
	}
	{
		G_B36_0 = (0.001f);
		G_B36_1 = G_B34_0;
		goto IL_0327;
	}

IL_0321:
	{
		float L_57 = (__this->___middleGrey_9);
		G_B36_0 = L_57;
		G_B36_1 = G_B35_0;
	}

IL_0327:
	{
		NullCheck(G_B36_1);
		G_B36_1->___middleGrey_9 = G_B36_0;
		Material_t19 * L_58 = (__this->___tonemapMaterial_14);
		float L_59 = (__this->___middleGrey_9);
		float L_60 = (__this->___middleGrey_9);
		float L_61 = (__this->___middleGrey_9);
		float L_62 = (__this->___white_10);
		float L_63 = (__this->___white_10);
		Vector4_t52  L_64 = {0};
		Vector4__ctor_m193(&L_64, L_59, L_60, L_61, ((float)((float)L_62*(float)L_63)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_58);
		Material_SetVector_m194(L_58, (String_t*) &_stringLiteral321, L_64, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_65 = (__this->___tonemapMaterial_14);
		RenderTexture_t21 * L_66 = (__this->___rt_15);
		NullCheck(L_65);
		Material_SetTexture_m186(L_65, (String_t*) &_stringLiteral322, L_66, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		int32_t L_67 = (__this->___type_4);
		if ((((uint32_t)L_67) != ((uint32_t)5)))
		{
			goto IL_0395;
		}
	}
	{
		Material_t19 * L_68 = (__this->___tonemapMaterial_14);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_68, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_03c6;
	}

IL_0395:
	{
		int32_t L_69 = (__this->___type_4);
		if ((((uint32_t)L_69) != ((uint32_t)6)))
		{
			goto IL_03b5;
		}
	}
	{
		Material_t19 * L_70 = (__this->___tonemapMaterial_14);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, ___destination, L_70, ((int32_t)10), /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		goto IL_03c6;
	}

IL_03b5:
	{
		Debug_LogError_m948(NULL /*static, unused*/, (String_t*) &_stringLiteral323, /*hidden argument*/&Debug_LogError_m948_MethodInfo);
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
	}

IL_03c6:
	{
		V_6 = 0;
		goto IL_03de;
	}

IL_03ce:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		int32_t L_71 = V_6;
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, (*(RenderTexture_t21 **)(RenderTexture_t21 **)SZArrayLdElema(V_5, L_71)), /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_03de:
	{
		if ((((int32_t)V_6) < ((int32_t)V_3)))
		{
			goto IL_03ce;
		}
	}
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_2, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_03ec:
	{
		return;
	}
}
// System.Void Tonemapping::Main()
extern MethodInfo Tonemapping_Main_m890_MethodInfo;
extern "C" void Tonemapping_Main_m890 (Tonemapping_t214 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Triangles
#include "AssemblyU2DUnityScriptU2Dfirstpass_Triangles.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Triangles_t215_il2cpp_TypeInfo;
// Triangles
#include "AssemblyU2DUnityScriptU2Dfirstpass_TrianglesMethodDeclarations.h"

extern MethodInfo Triangles_HasMeshes_m893_MethodInfo;
extern MethodInfo Triangles_GetMesh_m896_MethodInfo;


// System.Void Triangles::.ctor()
extern MethodInfo Triangles__ctor_m891_MethodInfo;
extern "C" void Triangles__ctor_m891 (Triangles_t215 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m130(__this, /*hidden argument*/&MonoBehaviour__ctor_m130_MethodInfo);
		return;
	}
}
// System.Void Triangles::.cctor()
extern MethodInfo Triangles__cctor_m892_MethodInfo;
extern "C" void Triangles__cctor_m892 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean Triangles::HasMeshes()
extern "C" bool Triangles_HasMeshes_m893 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Mesh_t80 * V_0 = {0};
	int32_t V_1 = 0;
	MeshU5BU5D_t204* V_2 = {0};
	int32_t V_3 = 0;
	int32_t G_B8_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		if ((((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1))
		{
			goto IL_0010;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0044;
	}

IL_0010:
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		V_2 = (((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1);
		NullCheck(V_2);
		int32_t L_0 = Array_get_Length_m947(V_2, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		V_3 = L_0;
		goto IL_003c;
	}

IL_0024:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_1);
		int32_t L_1 = V_1;
		bool L_2 = Object_op_Equality_m164(NULL /*static, unused*/, (Object_t50 *)NULL, (*(Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_2, L_1)), /*hidden argument*/&Object_op_Equality_m164_MethodInfo);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0044;
	}

IL_0038:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_003c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_3)))
		{
			goto IL_0024;
		}
	}
	{
		G_B8_0 = 1;
	}

IL_0044:
	{
		return G_B8_0;
	}
}
// System.Void Triangles::Cleanup()
extern MethodInfo Triangles_Cleanup_m894_MethodInfo;
extern "C" void Triangles_Cleanup_m894 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Mesh_t80 * V_0 = {0};
	int32_t V_1 = 0;
	MeshU5BU5D_t204* V_2 = {0};
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		if ((((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1))
		{
			goto IL_000f;
		}
	}
	{
		goto IL_004e;
	}

IL_000f:
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		V_2 = (((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1);
		NullCheck(V_2);
		int32_t L_0 = Array_get_Length_m947(V_2, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		V_3 = L_0;
		goto IL_0041;
	}

IL_0023:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_1);
		int32_t L_1 = V_1;
		bool L_2 = Object_op_Inequality_m166(NULL /*static, unused*/, (Object_t50 *)NULL, (*(Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_2, L_1)), /*hidden argument*/&Object_op_Inequality_m166_MethodInfo);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_1);
		int32_t L_3 = V_1;
		Object_DestroyImmediate_m174(NULL /*static, unused*/, (*(Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_2, L_3)), /*hidden argument*/&Object_DestroyImmediate_m174_MethodInfo);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_1);
		ArrayElementTypeCheck (V_2, NULL);
		*((Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema(V_2, V_1)) = (Mesh_t80 *)NULL;
	}

IL_003d:
	{
		V_1 = ((int32_t)((int32_t)V_1+(int32_t)1));
	}

IL_0041:
	{
		if ((((int32_t)V_1) < ((int32_t)V_3)))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1 = (MeshU5BU5D_t204*)NULL;
	}

IL_004e:
	{
		return;
	}
}
// UnityEngine.Mesh[] Triangles::GetMeshes(System.Int32,System.Int32)
extern MethodInfo Triangles_GetMeshes_m895_MethodInfo;
extern TypeInfo* MeshU5BU5D_t204_il2cpp_TypeInfo_var;
extern "C" MeshU5BU5D_t204* Triangles_GetMeshes_m895 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method)
{
	static bool Triangles_GetMeshes_m895_init;
	if (!Triangles_GetMeshes_m895_init)
	{
		MeshU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MeshU5BU5D_t204_0_0_0);
		Triangles_GetMeshes_m895_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MeshU5BU5D_t204* G_B7_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		bool L_0 = Triangles_HasMeshes_m893(NULL /*static, unused*/, /*hidden argument*/&Triangles_HasMeshes_m893_MethodInfo);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		if ((((uint32_t)(((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___currentTris_2)) != ((uint32_t)((int32_t)((int32_t)___totalWidth*(int32_t)___totalHeight)))))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		G_B7_0 = (((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1);
		goto IL_0099;
	}

IL_0021:
	{
		V_0 = ((int32_t)21666);
		V_1 = ((int32_t)((int32_t)___totalWidth*(int32_t)___totalHeight));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___currentTris_2 = V_1;
		int32_t L_1 = Mathf_CeilToInt_m984(NULL /*static, unused*/, ((float)((float)((float)((float)(1.0f)*(float)(((float)V_1))))/(float)((float)((float)(1.0f)*(float)(((float)V_0)))))), /*hidden argument*/&Mathf_CeilToInt_m984_MethodInfo);
		V_2 = L_1;
		((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1 = ((MeshU5BU5D_t204*)SZArrayNew(MeshU5BU5D_t204_il2cpp_TypeInfo_var, V_2));
		V_3 = 0;
		V_4 = 0;
		V_3 = 0;
		goto IL_008d;
	}

IL_005f:
	{
		int32_t L_2 = Mathf_Clamp_m198(NULL /*static, unused*/, ((int32_t)((int32_t)V_1-(int32_t)V_3)), 0, V_0, /*hidden argument*/&Mathf_Clamp_m198_MethodInfo);
		int32_t L_3 = Mathf_FloorToInt_m625(NULL /*static, unused*/, (((float)L_2)), /*hidden argument*/&Mathf_FloorToInt_m625_MethodInfo);
		V_5 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		Mesh_t80 * L_4 = Triangles_GetMesh_m896(NULL /*static, unused*/, V_5, V_3, ___totalWidth, ___totalHeight, /*hidden argument*/&Triangles_GetMesh_m896_MethodInfo);
		NullCheck((((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1), V_4);
		ArrayElementTypeCheck ((((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1), L_4);
		*((Mesh_t80 **)(Mesh_t80 **)SZArrayLdElema((((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1), V_4)) = (Mesh_t80 *)L_4;
		V_4 = ((int32_t)((int32_t)V_4+(int32_t)1));
		V_3 = ((int32_t)((int32_t)V_3+(int32_t)V_0));
	}

IL_008d:
	{
		if ((((int32_t)V_3) < ((int32_t)V_1)))
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo));
		G_B7_0 = (((Triangles_t215_StaticFields*)InitializedTypeInfo(&Triangles_t215_il2cpp_TypeInfo)->static_fields)->___meshes_1);
	}

IL_0099:
	{
		return G_B7_0;
	}
}
// UnityEngine.Mesh Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Vector3U5BU5D_t81_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t220_il2cpp_TypeInfo_var;
extern "C" Mesh_t80 * Triangles_GetMesh_m896 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method)
{
	static bool Triangles_GetMesh_m896_init;
	if (!Triangles_GetMesh_m896_init)
	{
		Vector3U5BU5D_t81_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t81_0_0_0);
		Vector2U5BU5D_t51_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector2U5BU5D_t51_0_0_0);
		Int32U5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t220_0_0_0);
		Triangles_GetMesh_m896_init = true;
	}
	Mesh_t80 * V_0 = {0};
	Vector3U5BU5D_t81* V_1 = {0};
	Vector2U5BU5D_t51* V_2 = {0};
	Vector2U5BU5D_t51* V_3 = {0};
	Int32U5BU5D_t220* V_4 = {0};
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t54  V_11 = {0};
	{
		Mesh_t80 * L_0 = (Mesh_t80 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Mesh_t80_il2cpp_TypeInfo));
		Mesh__ctor_m985(L_0, /*hidden argument*/&Mesh__ctor_m985_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		Object_set_hideFlags_m172(V_0, 4, /*hidden argument*/&Object_set_hideFlags_m172_MethodInfo);
		V_1 = ((Vector3U5BU5D_t81*)SZArrayNew(Vector3U5BU5D_t81_il2cpp_TypeInfo_var, ((int32_t)((int32_t)___triCount*(int32_t)3))));
		V_2 = ((Vector2U5BU5D_t51*)SZArrayNew(Vector2U5BU5D_t51_il2cpp_TypeInfo_var, ((int32_t)((int32_t)___triCount*(int32_t)3))));
		V_3 = ((Vector2U5BU5D_t51*)SZArrayNew(Vector2U5BU5D_t51_il2cpp_TypeInfo_var, ((int32_t)((int32_t)___triCount*(int32_t)3))));
		V_4 = ((Int32U5BU5D_t220*)SZArrayNew(Int32U5BU5D_t220_il2cpp_TypeInfo_var, ((int32_t)((int32_t)___triCount*(int32_t)3))));
		V_5 = (0.0075f);
		V_6 = 0;
		goto IL_0177;
	}

IL_0041:
	{
		V_7 = ((int32_t)((int32_t)V_6*(int32_t)3));
		V_8 = ((int32_t)((int32_t)___triOffset+(int32_t)V_6));
		float L_1 = floorf((((float)((int32_t)((int32_t)V_8%(int32_t)___totalWidth)))));
		V_9 = ((float)((float)L_1/(float)(((float)___totalWidth))));
		float L_2 = floorf((((float)((int32_t)((int32_t)V_8/(int32_t)___totalWidth)))));
		V_10 = ((float)((float)L_2/(float)(((float)___totalHeight))));
		Vector3_t54  L_3 = {0};
		Vector3__ctor_m222(&L_3, ((float)((float)((float)((float)V_9*(float)(((float)2))))-(float)(((float)1)))), ((float)((float)((float)((float)V_10*(float)(((float)2))))-(float)(((float)1)))), (1.0f), /*hidden argument*/&Vector3__ctor_m222_MethodInfo);
		V_11 = L_3;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, ((int32_t)((int32_t)V_7+(int32_t)0)));
		*((Vector3_t54 *)(Vector3_t54 *)SZArrayLdElema(V_1, ((int32_t)((int32_t)V_7+(int32_t)0)))) = V_11;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, ((int32_t)((int32_t)V_7+(int32_t)1)));
		*((Vector3_t54 *)(Vector3_t54 *)SZArrayLdElema(V_1, ((int32_t)((int32_t)V_7+(int32_t)1)))) = V_11;
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, ((int32_t)((int32_t)V_7+(int32_t)2)));
		*((Vector3_t54 *)(Vector3_t54 *)SZArrayLdElema(V_1, ((int32_t)((int32_t)V_7+(int32_t)2)))) = V_11;
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, ((int32_t)((int32_t)V_7+(int32_t)0)));
		Vector2_t32  L_4 = {0};
		Vector2__ctor_m179(&L_4, (((float)0)), (((float)0)), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_2, ((int32_t)((int32_t)V_7+(int32_t)0)))) = L_4;
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, ((int32_t)((int32_t)V_7+(int32_t)1)));
		Vector2_t32  L_5 = {0};
		Vector2__ctor_m179(&L_5, (1.0f), (((float)0)), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_2, ((int32_t)((int32_t)V_7+(int32_t)1)))) = L_5;
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, ((int32_t)((int32_t)V_7+(int32_t)2)));
		Vector2_t32  L_6 = {0};
		Vector2__ctor_m179(&L_6, (((float)0)), (1.0f), /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_2, ((int32_t)((int32_t)V_7+(int32_t)2)))) = L_6;
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, ((int32_t)((int32_t)V_7+(int32_t)0)));
		Vector2_t32  L_7 = {0};
		Vector2__ctor_m179(&L_7, V_9, V_10, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_3, ((int32_t)((int32_t)V_7+(int32_t)0)))) = L_7;
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, ((int32_t)((int32_t)V_7+(int32_t)1)));
		Vector2_t32  L_8 = {0};
		Vector2__ctor_m179(&L_8, V_9, V_10, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_3, ((int32_t)((int32_t)V_7+(int32_t)1)))) = L_8;
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, ((int32_t)((int32_t)V_7+(int32_t)2)));
		Vector2_t32  L_9 = {0};
		Vector2__ctor_m179(&L_9, V_9, V_10, /*hidden argument*/&Vector2__ctor_m179_MethodInfo);
		*((Vector2_t32 *)(Vector2_t32 *)SZArrayLdElema(V_3, ((int32_t)((int32_t)V_7+(int32_t)2)))) = L_9;
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, ((int32_t)((int32_t)V_7+(int32_t)0)));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_4, ((int32_t)((int32_t)V_7+(int32_t)0)))) = (int32_t)((int32_t)((int32_t)V_7+(int32_t)0));
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, ((int32_t)((int32_t)V_7+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_4, ((int32_t)((int32_t)V_7+(int32_t)1)))) = (int32_t)((int32_t)((int32_t)V_7+(int32_t)1));
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, ((int32_t)((int32_t)V_7+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_4, ((int32_t)((int32_t)V_7+(int32_t)2)))) = (int32_t)((int32_t)((int32_t)V_7+(int32_t)2));
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_0177:
	{
		if ((((int32_t)V_6) < ((int32_t)___triCount)))
		{
			goto IL_0041;
		}
	}
	{
		NullCheck(V_0);
		Mesh_set_vertices_m615(V_0, V_1, /*hidden argument*/&Mesh_set_vertices_m615_MethodInfo);
		NullCheck(V_0);
		Mesh_set_triangles_m986(V_0, V_4, /*hidden argument*/&Mesh_set_triangles_m986_MethodInfo);
		NullCheck(V_0);
		Mesh_set_uv_m987(V_0, V_2, /*hidden argument*/&Mesh_set_uv_m987_MethodInfo);
		NullCheck(V_0);
		Mesh_set_uv2_m988(V_0, V_3, /*hidden argument*/&Mesh_set_uv2_m988_MethodInfo);
		return V_0;
	}
}
// System.Void Triangles::Main()
extern MethodInfo Triangles_Main_m897_MethodInfo;
extern "C" void Triangles_Main_m897 (Triangles_t215 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Vignetting/AberrationMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Vignetting_AberrationMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AberrationMode_t216_il2cpp_TypeInfo;
// Vignetting/AberrationMode
#include "AssemblyU2DUnityScriptU2Dfirstpass_Vignetting_AberrationModeMethodDeclarations.h"



// Vignetting
#include "AssemblyU2DUnityScriptU2Dfirstpass_Vignetting.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Vignetting_t217_il2cpp_TypeInfo;
// Vignetting
#include "AssemblyU2DUnityScriptU2Dfirstpass_VignettingMethodDeclarations.h"

extern MethodInfo Vignetting_CheckResources_m899_MethodInfo;
extern MethodInfo Mathf_Abs_m651_MethodInfo;


// System.Void Vignetting::.ctor()
extern MethodInfo Vignetting__ctor_m898_MethodInfo;
extern "C" void Vignetting__ctor_m898 (Vignetting_t217 * __this, MethodInfo* method)
{
	{
		PostEffectsBase__ctor_m842(__this, /*hidden argument*/&PostEffectsBase__ctor_m842_MethodInfo);
		__this->___mode_4 = 0;
		__this->___intensity_5 = (0.375f);
		__this->___chromaticAberration_6 = (0.2f);
		__this->___axialAberration_7 = (0.5f);
		__this->___blurSpread_9 = (0.75f);
		__this->___luminanceDependency_10 = (0.25f);
		return;
	}
}
// System.Boolean Vignetting::CheckResources()
extern "C" bool Vignetting_CheckResources_m899 (Vignetting_t217 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker1< bool, bool >::Invoke(&PostEffectsBase_CheckSupport_m849_MethodInfo, __this, 0);
		Shader_t18 * L_0 = (__this->___vignetteShader_11);
		Material_t19 * L_1 = (__this->___vignetteMaterial_12);
		Material_t19 * L_2 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_0, L_1);
		__this->___vignetteMaterial_12 = L_2;
		Shader_t18 * L_3 = (__this->___separableBlurShader_13);
		Material_t19 * L_4 = (__this->___separableBlurMaterial_14);
		Material_t19 * L_5 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_3, L_4);
		__this->___separableBlurMaterial_14 = L_5;
		Shader_t18 * L_6 = (__this->___chromAberrationShader_15);
		Material_t19 * L_7 = (__this->___chromAberrationMaterial_16);
		Material_t19 * L_8 = (Material_t19 *)VirtFuncInvoker2< Material_t19 *, Shader_t18 *, Material_t19 * >::Invoke(&PostEffectsBase_CheckShaderAndCreateMaterial_m843_MethodInfo, __this, L_6, L_7);
		__this->___chromAberrationMaterial_16 = L_8;
		bool L_9 = (__this->___isSupported_3);
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		VirtActionInvoker0::Invoke(&PostEffectsBase_ReportAutoDisable_m852_MethodInfo, __this);
	}

IL_0061:
	{
		bool L_10 = (__this->___isSupported_3);
		return L_10;
	}
}
// System.Void Vignetting::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo Vignetting_OnRenderImage_m900_MethodInfo;
extern "C" void Vignetting_OnRenderImage_m900 (Vignetting_t217 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	RenderTexture_t21 * V_3 = {0};
	RenderTexture_t21 * V_4 = {0};
	RenderTexture_t21 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	RenderTexture_t21 * G_B16_0 = {0};
	Material_t19 * G_B18_0 = {0};
	RenderTexture_t21 * G_B18_1 = {0};
	RenderTexture_t21 * G_B18_2 = {0};
	Material_t19 * G_B17_0 = {0};
	RenderTexture_t21 * G_B17_1 = {0};
	RenderTexture_t21 * G_B17_2 = {0};
	int32_t G_B19_0 = 0;
	Material_t19 * G_B19_1 = {0};
	RenderTexture_t21 * G_B19_2 = {0};
	RenderTexture_t21 * G_B19_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Vignetting_CheckResources_m899_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Graphics_Blit_m184(NULL /*static, unused*/, ___source, ___destination, /*hidden argument*/&Graphics_Blit_m184_MethodInfo);
		goto IL_028d;
	}

IL_0017:
	{
		float L_1 = (__this->___blur_8);
		float L_2 = fabsf(L_1);
		int32_t L_3 = ((((float)L_2) > ((float)(((float)0))))? 1 : 0);
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_003c;
		}
	}
	{
		float L_4 = (__this->___intensity_5);
		float L_5 = fabsf(L_4);
		G_B4_0 = ((((float)L_5) > ((float)(((float)0))))? 1 : 0);
	}

IL_003c:
	{
		V_0 = G_B4_0;
		NullCheck(___source);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		V_1 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_6))))/(float)((float)((float)(1.0f)*(float)(((float)L_7))))));
		V_2 = (0.001953125f);
		V_3 = (RenderTexture_t21 *)NULL;
		V_4 = (RenderTexture_t21 *)NULL;
		V_5 = (RenderTexture_t21 *)NULL;
		if (!V_0)
		{
			goto IL_01c3;
		}
	}
	{
		NullCheck(___source);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_10 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_11 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, L_8, L_9, 0, L_10, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_3 = L_11;
		float L_12 = (__this->___blur_8);
		float L_13 = fabsf(L_12);
		if ((((float)L_13) <= ((float)(((float)0)))))
		{
			goto IL_0177;
		}
	}
	{
		NullCheck(___source);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_16 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_17 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_14))/(float)(2.0f))))), (((int32_t)((float)((float)(((float)L_15))/(float)(2.0f))))), 0, L_16, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_4 = L_17;
		NullCheck(___source);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m181_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m182_MethodInfo, ___source);
		NullCheck(___source);
		int32_t L_20 = RenderTexture_get_format_m904(___source, /*hidden argument*/&RenderTexture_get_format_m904_MethodInfo);
		RenderTexture_t21 * L_21 = RenderTexture_GetTemporary_m906(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_18))/(float)(2.0f))))), (((int32_t)((float)((float)(((float)L_19))/(float)(2.0f))))), 0, L_20, /*hidden argument*/&RenderTexture_GetTemporary_m906_MethodInfo);
		V_5 = L_21;
		Material_t19 * L_22 = (__this->___chromAberrationMaterial_16);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_4, L_22, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		V_6 = 0;
		goto IL_016f;
	}

IL_0103:
	{
		Material_t19 * L_23 = (__this->___separableBlurMaterial_14);
		float L_24 = (__this->___blurSpread_9);
		Vector4_t52  L_25 = {0};
		Vector4__ctor_m193(&L_25, (((float)0)), ((float)((float)L_24*(float)V_2)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_23);
		Material_SetVector_m194(L_23, (String_t*) &_stringLiteral225, L_25, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_26 = (__this->___separableBlurMaterial_14);
		Graphics_Blit_m187(NULL /*static, unused*/, V_4, V_5, L_26, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		Material_t19 * L_27 = (__this->___separableBlurMaterial_14);
		float L_28 = (__this->___blurSpread_9);
		Vector4_t52  L_29 = {0};
		Vector4__ctor_m193(&L_29, ((float)((float)((float)((float)L_28*(float)V_2))/(float)V_1)), (((float)0)), (((float)0)), (((float)0)), /*hidden argument*/&Vector4__ctor_m193_MethodInfo);
		NullCheck(L_27);
		Material_SetVector_m194(L_27, (String_t*) &_stringLiteral225, L_29, /*hidden argument*/&Material_SetVector_m194_MethodInfo);
		Material_t19 * L_30 = (__this->___separableBlurMaterial_14);
		Graphics_Blit_m187(NULL /*static, unused*/, V_5, V_4, L_30, /*hidden argument*/&Graphics_Blit_m187_MethodInfo);
		V_6 = ((int32_t)((int32_t)V_6+(int32_t)1));
	}

IL_016f:
	{
		if ((((int32_t)V_6) < ((int32_t)2)))
		{
			goto IL_0103;
		}
	}

IL_0177:
	{
		Material_t19 * L_31 = (__this->___vignetteMaterial_12);
		float L_32 = (__this->___intensity_5);
		NullCheck(L_31);
		Material_SetFloat_m195(L_31, (String_t*) &_stringLiteral49, L_32, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_33 = (__this->___vignetteMaterial_12);
		float L_34 = (__this->___blur_8);
		NullCheck(L_33);
		Material_SetFloat_m195(L_33, (String_t*) &_stringLiteral324, L_34, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_35 = (__this->___vignetteMaterial_12);
		NullCheck(L_35);
		Material_SetTexture_m186(L_35, (String_t*) &_stringLiteral325, V_4, /*hidden argument*/&Material_SetTexture_m186_MethodInfo);
		Material_t19 * L_36 = (__this->___vignetteMaterial_12);
		Graphics_Blit_m224(NULL /*static, unused*/, ___source, V_3, L_36, 0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
	}

IL_01c3:
	{
		Material_t19 * L_37 = (__this->___chromAberrationMaterial_16);
		float L_38 = (__this->___chromaticAberration_6);
		NullCheck(L_37);
		Material_SetFloat_m195(L_37, (String_t*) &_stringLiteral326, L_38, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_39 = (__this->___chromAberrationMaterial_16);
		float L_40 = (__this->___axialAberration_7);
		NullCheck(L_39);
		Material_SetFloat_m195(L_39, (String_t*) &_stringLiteral327, L_40, /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		Material_t19 * L_41 = (__this->___chromAberrationMaterial_16);
		float L_42 = (__this->___luminanceDependency_10);
		NullCheck(L_41);
		Material_SetFloat_m195(L_41, (String_t*) &_stringLiteral328, ((float)((float)(1.0f)/(float)((float)((float)(1.17549435E-38f)+(float)L_42)))), /*hidden argument*/&Material_SetFloat_m195_MethodInfo);
		if (!V_0)
		{
			goto IL_0223;
		}
	}
	{
		NullCheck(V_3);
		Texture_set_wrapMode_m918(V_3, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
		goto IL_022a;
	}

IL_0223:
	{
		NullCheck(___source);
		Texture_set_wrapMode_m918(___source, 1, /*hidden argument*/&Texture_set_wrapMode_m918_MethodInfo);
	}

IL_022a:
	{
		if (!V_0)
		{
			goto IL_0236;
		}
	}
	{
		G_B16_0 = V_3;
		goto IL_0237;
	}

IL_0236:
	{
		G_B16_0 = ___source;
	}

IL_0237:
	{
		Material_t19 * L_43 = (__this->___chromAberrationMaterial_16);
		int32_t L_44 = (__this->___mode_4);
		G_B17_0 = L_43;
		G_B17_1 = ___destination;
		G_B17_2 = G_B16_0;
		if ((((uint32_t)L_44) != ((uint32_t)1)))
		{
			G_B18_0 = L_43;
			G_B18_1 = ___destination;
			G_B18_2 = G_B16_0;
			goto IL_0250;
		}
	}
	{
		G_B19_0 = 2;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_0251;
	}

IL_0250:
	{
		G_B19_0 = 1;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_0251:
	{
		Graphics_Blit_m224(NULL /*static, unused*/, G_B19_3, G_B19_2, G_B19_1, G_B19_0, /*hidden argument*/&Graphics_Blit_m224_MethodInfo);
		bool L_45 = Object_op_Implicit_m173(NULL /*static, unused*/, V_3, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_45)
		{
			goto IL_0267;
		}
	}
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_3, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_0267:
	{
		bool L_46 = Object_op_Implicit_m173(NULL /*static, unused*/, V_4, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_46)
		{
			goto IL_027a;
		}
	}
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_4, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_027a:
	{
		bool L_47 = Object_op_Implicit_m173(NULL /*static, unused*/, V_5, /*hidden argument*/&Object_op_Implicit_m173_MethodInfo);
		if (!L_47)
		{
			goto IL_028d;
		}
	}
	{
		RenderTexture_ReleaseTemporary_m185(NULL /*static, unused*/, V_5, /*hidden argument*/&RenderTexture_ReleaseTemporary_m185_MethodInfo);
	}

IL_028d:
	{
		return;
	}
}
// System.Void Vignetting::Main()
extern MethodInfo Vignetting_Main_m901_MethodInfo;
extern "C" void Vignetting_Main_m901 (Vignetting_t217 * __this, MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
