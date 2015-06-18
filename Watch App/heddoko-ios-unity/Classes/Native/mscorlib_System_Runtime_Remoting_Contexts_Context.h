#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t610;
// System.Collections.Hashtable
struct Hashtable_t74;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Contexts.Context
struct Context_t1561  : public Object_t
{
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t610 * ___context_properties_1;
};
struct Context_t1561_StaticFields{
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t74 * ___namedSlots_2;
};
