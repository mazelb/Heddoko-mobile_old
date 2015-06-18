#pragma once
#include <stdint.h>
// nodController
struct nodController_t90;
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// BonesControl/NodQuaternionOrientation
#include "AssemblyU2DCSharp_BonesControl_NodQuaternionOrientation.h"
// BonesControl
struct BonesControl_t91  : public MonoBehaviour_t12
{
	// nodController BonesControl::nc
	nodController_t90 * ___nc_1;
	// System.Single BonesControl::initXDisplacement
	float ___initXDisplacement_2;
	// System.Int16 BonesControl::lastButtonState
	int16_t ___lastButtonState_3;
	// UnityEngine.Transform BonesControl::lowerSpineTransform
	Transform_t85 * ___lowerSpineTransform_4;
	// UnityEngine.Transform BonesControl::rightUpperArmTransform
	Transform_t85 * ___rightUpperArmTransform_5;
	// UnityEngine.Transform BonesControl::rightForeArmTransform
	Transform_t85 * ___rightForeArmTransform_6;
	// UnityEngine.Transform BonesControl::leftUpperArmTransform
	Transform_t85 * ___leftUpperArmTransform_7;
	// UnityEngine.Transform BonesControl::leftForeArmTransform
	Transform_t85 * ___leftForeArmTransform_8;
	// UnityEngine.Transform BonesControl::upperSpineTransform
	Transform_t85 * ___upperSpineTransform_9;
	// UnityEngine.Transform BonesControl::rightThighTransform
	Transform_t85 * ___rightThighTransform_10;
	// UnityEngine.Transform BonesControl::rightCalfTransform
	Transform_t85 * ___rightCalfTransform_11;
	// UnityEngine.Transform BonesControl::leftCalfTransform
	Transform_t85 * ___leftCalfTransform_12;
	// UnityEngine.Transform BonesControl::leftThighTransform
	Transform_t85 * ___leftThighTransform_13;
	// UnityEngine.Quaternion BonesControl::rightUpperArmTarget
	Quaternion_t55  ___rightUpperArmTarget_14;
	// UnityEngine.Quaternion BonesControl::rightForeArmTarget
	Quaternion_t55  ___rightForeArmTarget_15;
	// UnityEngine.Quaternion BonesControl::leftUpperArmTarget
	Quaternion_t55  ___leftUpperArmTarget_16;
	// UnityEngine.Quaternion BonesControl::leftForeArmTarget
	Quaternion_t55  ___leftForeArmTarget_17;
	// UnityEngine.Quaternion BonesControl::upperSpineTarget
	Quaternion_t55  ___upperSpineTarget_18;
	// UnityEngine.Quaternion BonesControl::rightThighTarget
	Quaternion_t55  ___rightThighTarget_19;
	// UnityEngine.Quaternion BonesControl::rightCalfTarget
	Quaternion_t55  ___rightCalfTarget_20;
	// UnityEngine.Quaternion BonesControl::leftCalfTarget
	Quaternion_t55  ___leftCalfTarget_21;
	// UnityEngine.Quaternion BonesControl::leftThighTarget
	Quaternion_t55  ___leftThighTarget_22;
	// UnityEngine.Vector3 BonesControl::lowerSpineInitPos
	Vector3_t54  ___lowerSpineInitPos_23;
	// UnityEngine.Vector3 BonesControl::rightUpperArmInitEulers
	Vector3_t54  ___rightUpperArmInitEulers_24;
	// UnityEngine.Vector3 BonesControl::rightForeArmInitEulers
	Vector3_t54  ___rightForeArmInitEulers_25;
	// UnityEngine.Vector3 BonesControl::leftUpperArmInitEulers
	Vector3_t54  ___leftUpperArmInitEulers_26;
	// UnityEngine.Vector3 BonesControl::leftForeArmInitEulers
	Vector3_t54  ___leftForeArmInitEulers_27;
	// UnityEngine.Vector3 BonesControl::upperSpineInitEulers
	Vector3_t54  ___upperSpineInitEulers_28;
	// UnityEngine.Vector3 BonesControl::rightThighInitEulers
	Vector3_t54  ___rightThighInitEulers_29;
	// UnityEngine.Vector3 BonesControl::rightCalfInitEulers
	Vector3_t54  ___rightCalfInitEulers_30;
	// UnityEngine.Vector3 BonesControl::leftThighInitEulers
	Vector3_t54  ___leftThighInitEulers_31;
	// UnityEngine.Vector3 BonesControl::leftCalfInitEulers
	Vector3_t54  ___leftCalfInitEulers_32;
	// UnityEngine.Quaternion BonesControl::rightUpperArmInitQuat
	Quaternion_t55  ___rightUpperArmInitQuat_33;
	// UnityEngine.Quaternion BonesControl::rightForeArmInitQuat
	Quaternion_t55  ___rightForeArmInitQuat_34;
	// UnityEngine.Quaternion BonesControl::leftUpperArmInitQuat
	Quaternion_t55  ___leftUpperArmInitQuat_35;
	// UnityEngine.Quaternion BonesControl::leftForeArmInitQuat
	Quaternion_t55  ___leftForeArmInitQuat_36;
	// UnityEngine.Quaternion BonesControl::upperSpineInitQuat
	Quaternion_t55  ___upperSpineInitQuat_37;
	// UnityEngine.Quaternion BonesControl::rightThighInitQuat
	Quaternion_t55  ___rightThighInitQuat_38;
	// UnityEngine.Quaternion BonesControl::rightCalfInitQuat
	Quaternion_t55  ___rightCalfInitQuat_39;
	// UnityEngine.Quaternion BonesControl::leftCalfInitQuat
	Quaternion_t55  ___leftCalfInitQuat_40;
	// UnityEngine.Quaternion BonesControl::leftThighInitQuat
	Quaternion_t55  ___leftThighInitQuat_41;
	// BonesControl/NodQuaternionOrientation BonesControl::rightUpperArmInitNodQuat
	NodQuaternionOrientation_t89  ___rightUpperArmInitNodQuat_42;
	// BonesControl/NodQuaternionOrientation BonesControl::rightForeArmInitNodQuat
	NodQuaternionOrientation_t89  ___rightForeArmInitNodQuat_43;
	// BonesControl/NodQuaternionOrientation BonesControl::leftUpperArmInitNodQuat
	NodQuaternionOrientation_t89  ___leftUpperArmInitNodQuat_44;
	// BonesControl/NodQuaternionOrientation BonesControl::leftForeArmInitNodQuat
	NodQuaternionOrientation_t89  ___leftForeArmInitNodQuat_45;
	// BonesControl/NodQuaternionOrientation BonesControl::upperSpineInitNodQuat
	NodQuaternionOrientation_t89  ___upperSpineInitNodQuat_46;
	// BonesControl/NodQuaternionOrientation BonesControl::rightThighInitNodQuat
	NodQuaternionOrientation_t89  ___rightThighInitNodQuat_47;
	// BonesControl/NodQuaternionOrientation BonesControl::rightCalfInitNodQuat
	NodQuaternionOrientation_t89  ___rightCalfInitNodQuat_48;
	// BonesControl/NodQuaternionOrientation BonesControl::leftCalfInitNodQuat
	NodQuaternionOrientation_t89  ___leftCalfInitNodQuat_49;
	// BonesControl/NodQuaternionOrientation BonesControl::leftThighInitNodQuat
	NodQuaternionOrientation_t89  ___leftThighInitNodQuat_50;
	// UnityEngine.Vector3 BonesControl::lowerSpineCurrentPos
	Vector3_t54  ___lowerSpineCurrentPos_51;
	// UnityEngine.Vector3 BonesControl::rightUpperArmCurrentEulers
	Vector3_t54  ___rightUpperArmCurrentEulers_52;
	// UnityEngine.Vector3 BonesControl::rightForeArmCurrentEulers
	Vector3_t54  ___rightForeArmCurrentEulers_53;
	// UnityEngine.Vector3 BonesControl::leftUpperArmCurrentEulers
	Vector3_t54  ___leftUpperArmCurrentEulers_54;
	// UnityEngine.Vector3 BonesControl::leftForeArmCurrentEulers
	Vector3_t54  ___leftForeArmCurrentEulers_55;
	// UnityEngine.Vector3 BonesControl::upperSpineCurrentEulers
	Vector3_t54  ___upperSpineCurrentEulers_56;
	// UnityEngine.Vector3 BonesControl::rightThighCurrentEulers
	Vector3_t54  ___rightThighCurrentEulers_57;
	// UnityEngine.Vector3 BonesControl::rightCalfCurrentEulers
	Vector3_t54  ___rightCalfCurrentEulers_58;
	// UnityEngine.Vector3 BonesControl::leftThighCurrentEulers
	Vector3_t54  ___leftThighCurrentEulers_59;
	// UnityEngine.Vector3 BonesControl::leftCalfCurrentEulers
	Vector3_t54  ___leftCalfCurrentEulers_60;
	// UnityEngine.Quaternion BonesControl::rightUpperArmCurrentQuat
	Quaternion_t55  ___rightUpperArmCurrentQuat_61;
	// UnityEngine.Quaternion BonesControl::rightForeArmCurrentQuat
	Quaternion_t55  ___rightForeArmCurrentQuat_62;
	// UnityEngine.Quaternion BonesControl::leftUpperArmCurrentQuat
	Quaternion_t55  ___leftUpperArmCurrentQuat_63;
	// UnityEngine.Quaternion BonesControl::leftForeArmCurrentQuat
	Quaternion_t55  ___leftForeArmCurrentQuat_64;
	// UnityEngine.Quaternion BonesControl::upperSpineCurrentQuat
	Quaternion_t55  ___upperSpineCurrentQuat_65;
	// UnityEngine.Quaternion BonesControl::rightThighCurrentQuat
	Quaternion_t55  ___rightThighCurrentQuat_66;
	// UnityEngine.Quaternion BonesControl::rightCalfCurrentQuat
	Quaternion_t55  ___rightCalfCurrentQuat_67;
	// UnityEngine.Quaternion BonesControl::leftCalfCurrentQuat
	Quaternion_t55  ___leftCalfCurrentQuat_68;
	// UnityEngine.Quaternion BonesControl::leftThighCurrentQuat
	Quaternion_t55  ___leftThighCurrentQuat_69;
	// BonesControl/NodQuaternionOrientation BonesControl::rightUpperArmCurrentNodQuat
	NodQuaternionOrientation_t89  ___rightUpperArmCurrentNodQuat_70;
	// BonesControl/NodQuaternionOrientation BonesControl::rightForeArmCurrentNodQuat
	NodQuaternionOrientation_t89  ___rightForeArmCurrentNodQuat_71;
	// BonesControl/NodQuaternionOrientation BonesControl::leftUpperArmCurrentNodQuat
	NodQuaternionOrientation_t89  ___leftUpperArmCurrentNodQuat_72;
	// BonesControl/NodQuaternionOrientation BonesControl::leftForeArmCurrentNodQuat
	NodQuaternionOrientation_t89  ___leftForeArmCurrentNodQuat_73;
	// BonesControl/NodQuaternionOrientation BonesControl::upperSpineCurrentNodQuat
	NodQuaternionOrientation_t89  ___upperSpineCurrentNodQuat_74;
	// BonesControl/NodQuaternionOrientation BonesControl::rightThighCurrentNodQuat
	NodQuaternionOrientation_t89  ___rightThighCurrentNodQuat_75;
	// BonesControl/NodQuaternionOrientation BonesControl::rightCalfCurrentNodQuat
	NodQuaternionOrientation_t89  ___rightCalfCurrentNodQuat_76;
	// BonesControl/NodQuaternionOrientation BonesControl::leftCalfCurrentNodQuat
	NodQuaternionOrientation_t89  ___leftCalfCurrentNodQuat_77;
	// BonesControl/NodQuaternionOrientation BonesControl::leftThighCurrentNodQuat
	NodQuaternionOrientation_t89  ___leftThighCurrentNodQuat_78;
	// System.Boolean BonesControl::isInitialized
	bool ___isInitialized_79;
};
