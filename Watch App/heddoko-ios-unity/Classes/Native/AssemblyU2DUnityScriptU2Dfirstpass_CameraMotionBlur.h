#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.Shader
struct Shader_t18;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Texture2D
struct Texture2D_t36;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// CameraMotionBlur/MotionBlurFilter
#include "AssemblyU2DUnityScriptU2Dfirstpass_CameraMotionBlur_MotionBl.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// CameraMotionBlur
struct CameraMotionBlur_t180  : public PostEffectsBase_t166
{
	// CameraMotionBlur/MotionBlurFilter CameraMotionBlur::filterType
	int32_t ___filterType_5;
	// System.Boolean CameraMotionBlur::preview
	bool ___preview_6;
	// UnityEngine.Vector3 CameraMotionBlur::previewScale
	Vector3_t54  ___previewScale_7;
	// System.Single CameraMotionBlur::movementScale
	float ___movementScale_8;
	// System.Single CameraMotionBlur::rotationScale
	float ___rotationScale_9;
	// System.Single CameraMotionBlur::maxVelocity
	float ___maxVelocity_10;
	// System.Int32 CameraMotionBlur::maxNumSamples
	int32_t ___maxNumSamples_11;
	// System.Single CameraMotionBlur::minVelocity
	float ___minVelocity_12;
	// System.Single CameraMotionBlur::velocityScale
	float ___velocityScale_13;
	// System.Single CameraMotionBlur::softZDistance
	float ___softZDistance_14;
	// System.Int32 CameraMotionBlur::velocityDownsample
	int32_t ___velocityDownsample_15;
	// UnityEngine.LayerMask CameraMotionBlur::excludeLayers
	LayerMask_t76  ___excludeLayers_16;
	// UnityEngine.GameObject CameraMotionBlur::tmpCam
	GameObject_t49 * ___tmpCam_17;
	// UnityEngine.Shader CameraMotionBlur::shader
	Shader_t18 * ___shader_18;
	// UnityEngine.Shader CameraMotionBlur::dx11MotionBlurShader
	Shader_t18 * ___dx11MotionBlurShader_19;
	// UnityEngine.Shader CameraMotionBlur::replacementClear
	Shader_t18 * ___replacementClear_20;
	// UnityEngine.Material CameraMotionBlur::motionBlurMaterial
	Material_t19 * ___motionBlurMaterial_21;
	// UnityEngine.Material CameraMotionBlur::dx11MotionBlurMaterial
	Material_t19 * ___dx11MotionBlurMaterial_22;
	// UnityEngine.Texture2D CameraMotionBlur::noiseTexture
	Texture2D_t36 * ___noiseTexture_23;
	// System.Boolean CameraMotionBlur::showVelocity
	bool ___showVelocity_24;
	// System.Single CameraMotionBlur::showVelocityScale
	float ___showVelocityScale_25;
	// UnityEngine.Matrix4x4 CameraMotionBlur::currentViewProjMat
	Matrix4x4_t53  ___currentViewProjMat_26;
	// UnityEngine.Matrix4x4 CameraMotionBlur::prevViewProjMat
	Matrix4x4_t53  ___prevViewProjMat_27;
	// System.Int32 CameraMotionBlur::prevFrameCount
	int32_t ___prevFrameCount_28;
	// System.Boolean CameraMotionBlur::wasActive
	bool ___wasActive_29;
	// UnityEngine.Vector3 CameraMotionBlur::prevFrameForward
	Vector3_t54  ___prevFrameForward_30;
	// UnityEngine.Vector3 CameraMotionBlur::prevFrameRight
	Vector3_t54  ___prevFrameRight_31;
	// UnityEngine.Vector3 CameraMotionBlur::prevFrameUp
	Vector3_t54  ___prevFrameUp_32;
	// UnityEngine.Vector3 CameraMotionBlur::prevFramePos
	Vector3_t54  ___prevFramePos_33;
};
struct CameraMotionBlur_t180_StaticFields{
	// System.Int32 CameraMotionBlur::MAX_RADIUS
	int32_t ___MAX_RADIUS_4;
};
