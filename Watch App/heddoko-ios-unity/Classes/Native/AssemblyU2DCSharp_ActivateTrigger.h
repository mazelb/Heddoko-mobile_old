#pragma once
#include <stdint.h>
// UnityEngine.Object
struct Object_t50;
struct Object_t50_marshaled;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ActivateTrigger/Mode
#include "AssemblyU2DCSharp_ActivateTrigger_Mode.h"
// ActivateTrigger
struct ActivateTrigger_t99  : public MonoBehaviour_t12
{
	// ActivateTrigger/Mode ActivateTrigger::action
	int32_t ___action_1;
	// UnityEngine.Object ActivateTrigger::target
	Object_t50 * ___target_2;
	// UnityEngine.GameObject ActivateTrigger::source
	GameObject_t49 * ___source_3;
	// System.Int32 ActivateTrigger::triggerCount
	int32_t ___triggerCount_4;
	// System.Boolean ActivateTrigger::repeatTrigger
	bool ___repeatTrigger_5;
};
