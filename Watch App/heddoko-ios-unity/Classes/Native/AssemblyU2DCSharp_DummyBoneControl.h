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
// DummyBoneControl/NodQuaternionOrientation
#include "AssemblyU2DCSharp_DummyBoneControl_NodQuaternionOrientation.h"
// DummyBoneControl
struct DummyBoneControl_t93  : public MonoBehaviour_t12
{
	// nodController DummyBoneControl::nc
	nodController_t90 * ___nc_1;
	// System.Single DummyBoneControl::initXDisplacement
	float ___initXDisplacement_2;
	// UnityEngine.Transform DummyBoneControl::lowerSpineTransform
	Transform_t85 * ___lowerSpineTransform_3;
	// UnityEngine.Transform DummyBoneControl::rightUpperArmTransform
	Transform_t85 * ___rightUpperArmTransform_4;
	// UnityEngine.Transform DummyBoneControl::rightForeArmTransform
	Transform_t85 * ___rightForeArmTransform_5;
	// UnityEngine.Transform DummyBoneControl::leftUpperArmTransform
	Transform_t85 * ___leftUpperArmTransform_6;
	// UnityEngine.Transform DummyBoneControl::leftForeArmTransform
	Transform_t85 * ___leftForeArmTransform_7;
	// UnityEngine.Transform DummyBoneControl::upperSpineTransform
	Transform_t85 * ___upperSpineTransform_8;
	// UnityEngine.Transform DummyBoneControl::rightThighTransform
	Transform_t85 * ___rightThighTransform_9;
	// UnityEngine.Transform DummyBoneControl::rightCalfTransform
	Transform_t85 * ___rightCalfTransform_10;
	// UnityEngine.Transform DummyBoneControl::leftCalfTransform
	Transform_t85 * ___leftCalfTransform_11;
	// UnityEngine.Transform DummyBoneControl::leftThighTransform
	Transform_t85 * ___leftThighTransform_12;
	// UnityEngine.Quaternion DummyBoneControl::rightUpperArmTarget
	Quaternion_t55  ___rightUpperArmTarget_13;
	// UnityEngine.Quaternion DummyBoneControl::rightForeArmTarget
	Quaternion_t55  ___rightForeArmTarget_14;
	// UnityEngine.Quaternion DummyBoneControl::leftUpperArmTarget
	Quaternion_t55  ___leftUpperArmTarget_15;
	// UnityEngine.Quaternion DummyBoneControl::leftForeArmTarget
	Quaternion_t55  ___leftForeArmTarget_16;
	// UnityEngine.Quaternion DummyBoneControl::upperSpineTarget
	Quaternion_t55  ___upperSpineTarget_17;
	// UnityEngine.Quaternion DummyBoneControl::rightThighTarget
	Quaternion_t55  ___rightThighTarget_18;
	// UnityEngine.Quaternion DummyBoneControl::rightCalfTarget
	Quaternion_t55  ___rightCalfTarget_19;
	// UnityEngine.Quaternion DummyBoneControl::leftCalfTarget
	Quaternion_t55  ___leftCalfTarget_20;
	// UnityEngine.Quaternion DummyBoneControl::leftThighTarget
	Quaternion_t55  ___leftThighTarget_21;
	// UnityEngine.Vector3 DummyBoneControl::lowerSpineInitPos
	Vector3_t54  ___lowerSpineInitPos_22;
	// UnityEngine.Vector3 DummyBoneControl::rightUpperArmInitEulers
	Vector3_t54  ___rightUpperArmInitEulers_23;
	// UnityEngine.Vector3 DummyBoneControl::rightForeArmInitEulers
	Vector3_t54  ___rightForeArmInitEulers_24;
	// UnityEngine.Vector3 DummyBoneControl::leftUpperArmInitEulers
	Vector3_t54  ___leftUpperArmInitEulers_25;
	// UnityEngine.Vector3 DummyBoneControl::leftForeArmInitEulers
	Vector3_t54  ___leftForeArmInitEulers_26;
	// UnityEngine.Vector3 DummyBoneControl::upperSpineInitEulers
	Vector3_t54  ___upperSpineInitEulers_27;
	// UnityEngine.Vector3 DummyBoneControl::rightThighInitEulers
	Vector3_t54  ___rightThighInitEulers_28;
	// UnityEngine.Vector3 DummyBoneControl::rightCalfInitEulers
	Vector3_t54  ___rightCalfInitEulers_29;
	// UnityEngine.Vector3 DummyBoneControl::leftThighInitEulers
	Vector3_t54  ___leftThighInitEulers_30;
	// UnityEngine.Vector3 DummyBoneControl::leftCalfInitEulers
	Vector3_t54  ___leftCalfInitEulers_31;
	// UnityEngine.Quaternion DummyBoneControl::rightUpperArmInitQuat
	Quaternion_t55  ___rightUpperArmInitQuat_32;
	// UnityEngine.Quaternion DummyBoneControl::rightForeArmInitQuat
	Quaternion_t55  ___rightForeArmInitQuat_33;
	// UnityEngine.Quaternion DummyBoneControl::leftUpperArmInitQuat
	Quaternion_t55  ___leftUpperArmInitQuat_34;
	// UnityEngine.Quaternion DummyBoneControl::leftForeArmInitQuat
	Quaternion_t55  ___leftForeArmInitQuat_35;
	// UnityEngine.Quaternion DummyBoneControl::upperSpineInitQuat
	Quaternion_t55  ___upperSpineInitQuat_36;
	// UnityEngine.Quaternion DummyBoneControl::rightThighInitQuat
	Quaternion_t55  ___rightThighInitQuat_37;
	// UnityEngine.Quaternion DummyBoneControl::rightCalfInitQuat
	Quaternion_t55  ___rightCalfInitQuat_38;
	// UnityEngine.Quaternion DummyBoneControl::leftCalfInitQuat
	Quaternion_t55  ___leftCalfInitQuat_39;
	// UnityEngine.Quaternion DummyBoneControl::leftThighInitQuat
	Quaternion_t55  ___leftThighInitQuat_40;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::rightUpperArmInitNodQuat
	NodQuaternionOrientation_t92  ___rightUpperArmInitNodQuat_41;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::rightForeArmInitNodQuat
	NodQuaternionOrientation_t92  ___rightForeArmInitNodQuat_42;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::leftUpperArmInitNodQuat
	NodQuaternionOrientation_t92  ___leftUpperArmInitNodQuat_43;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::leftForeArmInitNodQuat
	NodQuaternionOrientation_t92  ___leftForeArmInitNodQuat_44;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::upperSpineInitNodQuat
	NodQuaternionOrientation_t92  ___upperSpineInitNodQuat_45;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::rightThighInitNodQuat
	NodQuaternionOrientation_t92  ___rightThighInitNodQuat_46;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::rightCalfInitNodQuat
	NodQuaternionOrientation_t92  ___rightCalfInitNodQuat_47;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::leftCalfInitNodQuat
	NodQuaternionOrientation_t92  ___leftCalfInitNodQuat_48;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::leftThighInitNodQuat
	NodQuaternionOrientation_t92  ___leftThighInitNodQuat_49;
	// UnityEngine.Vector3 DummyBoneControl::lowerSpineCurrentPos
	Vector3_t54  ___lowerSpineCurrentPos_50;
	// UnityEngine.Vector3 DummyBoneControl::rightUpperArmCurrentEulers
	Vector3_t54  ___rightUpperArmCurrentEulers_51;
	// UnityEngine.Vector3 DummyBoneControl::rightForeArmCurrentEulers
	Vector3_t54  ___rightForeArmCurrentEulers_52;
	// UnityEngine.Vector3 DummyBoneControl::leftUpperArmCurrentEulers
	Vector3_t54  ___leftUpperArmCurrentEulers_53;
	// UnityEngine.Vector3 DummyBoneControl::leftForeArmCurrentEulers
	Vector3_t54  ___leftForeArmCurrentEulers_54;
	// UnityEngine.Vector3 DummyBoneControl::upperSpineCurrentEulers
	Vector3_t54  ___upperSpineCurrentEulers_55;
	// UnityEngine.Vector3 DummyBoneControl::rightThighCurrentEulers
	Vector3_t54  ___rightThighCurrentEulers_56;
	// UnityEngine.Vector3 DummyBoneControl::rightCalfCurrentEulers
	Vector3_t54  ___rightCalfCurrentEulers_57;
	// UnityEngine.Vector3 DummyBoneControl::leftThighCurrentEulers
	Vector3_t54  ___leftThighCurrentEulers_58;
	// UnityEngine.Vector3 DummyBoneControl::leftCalfCurrentEulers
	Vector3_t54  ___leftCalfCurrentEulers_59;
	// UnityEngine.Quaternion DummyBoneControl::rightUpperArmCurrentQuat
	Quaternion_t55  ___rightUpperArmCurrentQuat_60;
	// UnityEngine.Quaternion DummyBoneControl::rightForeArmCurrentQuat
	Quaternion_t55  ___rightForeArmCurrentQuat_61;
	// UnityEngine.Quaternion DummyBoneControl::leftUpperArmCurrentQuat
	Quaternion_t55  ___leftUpperArmCurrentQuat_62;
	// UnityEngine.Quaternion DummyBoneControl::leftForeArmCurrentQuat
	Quaternion_t55  ___leftForeArmCurrentQuat_63;
	// UnityEngine.Quaternion DummyBoneControl::upperSpineCurrentQuat
	Quaternion_t55  ___upperSpineCurrentQuat_64;
	// UnityEngine.Quaternion DummyBoneControl::rightThighCurrentQuat
	Quaternion_t55  ___rightThighCurrentQuat_65;
	// UnityEngine.Quaternion DummyBoneControl::rightCalfCurrentQuat
	Quaternion_t55  ___rightCalfCurrentQuat_66;
	// UnityEngine.Quaternion DummyBoneControl::leftCalfCurrentQuat
	Quaternion_t55  ___leftCalfCurrentQuat_67;
	// UnityEngine.Quaternion DummyBoneControl::leftThighCurrentQuat
	Quaternion_t55  ___leftThighCurrentQuat_68;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::rightUpperArmCurrentNodQuat
	NodQuaternionOrientation_t92  ___rightUpperArmCurrentNodQuat_69;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::rightForeArmCurrentNodQuat
	NodQuaternionOrientation_t92  ___rightForeArmCurrentNodQuat_70;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::leftUpperArmCurrentNodQuat
	NodQuaternionOrientation_t92  ___leftUpperArmCurrentNodQuat_71;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::leftForeArmCurrentNodQuat
	NodQuaternionOrientation_t92  ___leftForeArmCurrentNodQuat_72;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::upperSpineCurrentNodQuat
	NodQuaternionOrientation_t92  ___upperSpineCurrentNodQuat_73;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::rightThighCurrentNodQuat
	NodQuaternionOrientation_t92  ___rightThighCurrentNodQuat_74;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::rightCalfCurrentNodQuat
	NodQuaternionOrientation_t92  ___rightCalfCurrentNodQuat_75;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::leftCalfCurrentNodQuat
	NodQuaternionOrientation_t92  ___leftCalfCurrentNodQuat_76;
	// DummyBoneControl/NodQuaternionOrientation DummyBoneControl::leftThighCurrentNodQuat
	NodQuaternionOrientation_t92  ___leftThighCurrentNodQuat_77;
	// System.Boolean DummyBoneControl::isInitialized
	bool ___isInitialized_78;
};
