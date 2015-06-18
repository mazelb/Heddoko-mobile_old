#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
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
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t163_il2cpp_TypeInfo;
extern TypeInfo AAMode_t164_il2cpp_TypeInfo;
extern TypeInfo AntialiasingAsPostEffect_t165_il2cpp_TypeInfo;
extern TypeInfo LensFlareStyle_t167_il2cpp_TypeInfo;
extern TypeInfo TweakMode_t168_il2cpp_TypeInfo;
extern TypeInfo HDRBloomMode_t169_il2cpp_TypeInfo;
extern TypeInfo BloomScreenBlendMode_t170_il2cpp_TypeInfo;
extern TypeInfo BloomQuality_t171_il2cpp_TypeInfo;
extern TypeInfo Bloom_t172_il2cpp_TypeInfo;
extern TypeInfo LensflareStyle34_t173_il2cpp_TypeInfo;
extern TypeInfo TweakMode34_t174_il2cpp_TypeInfo;
extern TypeInfo HDRBloomMode_t175_il2cpp_TypeInfo;
extern TypeInfo BloomScreenBlendMode_t176_il2cpp_TypeInfo;
extern TypeInfo BloomAndLensFlares_t177_il2cpp_TypeInfo;
extern TypeInfo CameraInfo_t178_il2cpp_TypeInfo;
extern TypeInfo MotionBlurFilter_t179_il2cpp_TypeInfo;
extern TypeInfo CameraMotionBlur_t180_il2cpp_TypeInfo;
extern TypeInfo ColorCorrectionMode_t181_il2cpp_TypeInfo;
extern TypeInfo ColorCorrectionCurves_t183_il2cpp_TypeInfo;
extern TypeInfo ColorCorrectionLut_t185_il2cpp_TypeInfo;
extern TypeInfo ContrastEnhance_t186_il2cpp_TypeInfo;
extern TypeInfo Crease_t187_il2cpp_TypeInfo;
extern TypeInfo Dof34QualitySetting_t188_il2cpp_TypeInfo;
extern TypeInfo DofResolution_t189_il2cpp_TypeInfo;
extern TypeInfo DofBlurriness_t190_il2cpp_TypeInfo;
extern TypeInfo BokehDestination_t191_il2cpp_TypeInfo;
extern TypeInfo DepthOfField34_t192_il2cpp_TypeInfo;
extern TypeInfo BlurType_t193_il2cpp_TypeInfo;
extern TypeInfo BlurSampleCount_t194_il2cpp_TypeInfo;
extern TypeInfo DepthOfFieldScatter_t196_il2cpp_TypeInfo;
extern TypeInfo EdgeDetectMode_t197_il2cpp_TypeInfo;
extern TypeInfo EdgeDetectEffectNormals_t198_il2cpp_TypeInfo;
extern TypeInfo Fisheye_t199_il2cpp_TypeInfo;
extern TypeInfo FogMode_t200_il2cpp_TypeInfo;
extern TypeInfo GlobalFog_t201_il2cpp_TypeInfo;
extern TypeInfo NoiseAndGrain_t202_il2cpp_TypeInfo;
extern TypeInfo PostEffectsBase_t166_il2cpp_TypeInfo;
extern TypeInfo PostEffectsHelper_t203_il2cpp_TypeInfo;
extern TypeInfo Quads_t205_il2cpp_TypeInfo;
extern TypeInfo OverlayBlendMode_t206_il2cpp_TypeInfo;
extern TypeInfo ScreenOverlay_t207_il2cpp_TypeInfo;
extern TypeInfo SunShaftsResolution_t208_il2cpp_TypeInfo;
extern TypeInfo ShaftsScreenBlendMode_t209_il2cpp_TypeInfo;
extern TypeInfo SunShafts_t210_il2cpp_TypeInfo;
extern TypeInfo TiltShift_t211_il2cpp_TypeInfo;
extern TypeInfo TonemapperType_t212_il2cpp_TypeInfo;
extern TypeInfo AdaptiveTexSize_t213_il2cpp_TypeInfo;
extern TypeInfo Tonemapping_t214_il2cpp_TypeInfo;
extern TypeInfo Triangles_t215_il2cpp_TypeInfo;
extern TypeInfo AberrationMode_t216_il2cpp_TypeInfo;
extern TypeInfo Vignetting_t217_il2cpp_TypeInfo;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly_Types[52] = 
{
	&U3CModuleU3E_t163_il2cpp_TypeInfo,
	&AAMode_t164_il2cpp_TypeInfo,
	&AntialiasingAsPostEffect_t165_il2cpp_TypeInfo,
	&LensFlareStyle_t167_il2cpp_TypeInfo,
	&TweakMode_t168_il2cpp_TypeInfo,
	&HDRBloomMode_t169_il2cpp_TypeInfo,
	&BloomScreenBlendMode_t170_il2cpp_TypeInfo,
	&BloomQuality_t171_il2cpp_TypeInfo,
	&Bloom_t172_il2cpp_TypeInfo,
	&LensflareStyle34_t173_il2cpp_TypeInfo,
	&TweakMode34_t174_il2cpp_TypeInfo,
	&HDRBloomMode_t175_il2cpp_TypeInfo,
	&BloomScreenBlendMode_t176_il2cpp_TypeInfo,
	&BloomAndLensFlares_t177_il2cpp_TypeInfo,
	&CameraInfo_t178_il2cpp_TypeInfo,
	&MotionBlurFilter_t179_il2cpp_TypeInfo,
	&CameraMotionBlur_t180_il2cpp_TypeInfo,
	&ColorCorrectionMode_t181_il2cpp_TypeInfo,
	&ColorCorrectionCurves_t183_il2cpp_TypeInfo,
	&ColorCorrectionLut_t185_il2cpp_TypeInfo,
	&ContrastEnhance_t186_il2cpp_TypeInfo,
	&Crease_t187_il2cpp_TypeInfo,
	&Dof34QualitySetting_t188_il2cpp_TypeInfo,
	&DofResolution_t189_il2cpp_TypeInfo,
	&DofBlurriness_t190_il2cpp_TypeInfo,
	&BokehDestination_t191_il2cpp_TypeInfo,
	&DepthOfField34_t192_il2cpp_TypeInfo,
	&BlurType_t193_il2cpp_TypeInfo,
	&BlurSampleCount_t194_il2cpp_TypeInfo,
	&DepthOfFieldScatter_t196_il2cpp_TypeInfo,
	&EdgeDetectMode_t197_il2cpp_TypeInfo,
	&EdgeDetectEffectNormals_t198_il2cpp_TypeInfo,
	&Fisheye_t199_il2cpp_TypeInfo,
	&FogMode_t200_il2cpp_TypeInfo,
	&GlobalFog_t201_il2cpp_TypeInfo,
	&NoiseAndGrain_t202_il2cpp_TypeInfo,
	&PostEffectsBase_t166_il2cpp_TypeInfo,
	&PostEffectsHelper_t203_il2cpp_TypeInfo,
	&Quads_t205_il2cpp_TypeInfo,
	&OverlayBlendMode_t206_il2cpp_TypeInfo,
	&ScreenOverlay_t207_il2cpp_TypeInfo,
	&SunShaftsResolution_t208_il2cpp_TypeInfo,
	&ShaftsScreenBlendMode_t209_il2cpp_TypeInfo,
	&SunShafts_t210_il2cpp_TypeInfo,
	&TiltShift_t211_il2cpp_TypeInfo,
	&TonemapperType_t212_il2cpp_TypeInfo,
	&AdaptiveTexSize_t213_il2cpp_TypeInfo,
	&Tonemapping_t214_il2cpp_TypeInfo,
	&Triangles_t215_il2cpp_TypeInfo,
	&AberrationMode_t216_il2cpp_TypeInfo,
	&Vignetting_t217_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DUnityScriptU2Dfirstpass_Image;
extern CustomAttributesCache g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly__CustomAttributeCache;
Il2CppAssembly g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly = 
{
	{ "Assembly-UnityScript-firstpass", 0, 0, 0, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_AssemblyU2DUnityScriptU2Dfirstpass_Image,
	&g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly__CustomAttributeCache,
};
Il2CppImage g_AssemblyU2DUnityScriptU2Dfirstpass_Image = 
{
	 "Assembly-UnityScript-firstpass.dll" ,
	&g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly,
	g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly_Types,
	51,
	NULL,
};
static void s_AssemblyU2DUnityScriptU2DfirstpassRegistration()
{
	RegisterAssembly (&g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_AssemblyU2DUnityScriptU2DfirstpassRegistrationVariable(&s_AssemblyU2DUnityScriptU2DfirstpassRegistration, NULL);
