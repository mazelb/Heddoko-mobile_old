﻿#pragma once
#include <stdint.h>
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1515;
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.MonoProperty
struct MonoProperty_t1513  : public PropertyInfo_t1262
{
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t98 ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t98 ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t1512  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t1515 * ___cached_getter_4;
};
