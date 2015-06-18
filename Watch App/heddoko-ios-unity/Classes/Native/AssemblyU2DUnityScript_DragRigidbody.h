#pragma once
#include <stdint.h>
// UnityEngine.SpringJoint
struct SpringJoint_t240;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DragRigidbody
struct DragRigidbody_t234  : public MonoBehaviour_t12
{
	// System.Single DragRigidbody::spring
	float ___spring_1;
	// System.Single DragRigidbody::damper
	float ___damper_2;
	// System.Single DragRigidbody::drag
	float ___drag_3;
	// System.Single DragRigidbody::angularDrag
	float ___angularDrag_4;
	// System.Single DragRigidbody::distance
	float ___distance_5;
	// System.Boolean DragRigidbody::attachToCenterOfMass
	bool ___attachToCenterOfMass_6;
	// UnityEngine.SpringJoint DragRigidbody::springJoint
	SpringJoint_t240 * ___springJoint_7;
};
