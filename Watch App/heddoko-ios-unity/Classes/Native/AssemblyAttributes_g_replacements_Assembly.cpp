#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo RuntimeCompatibilityAttribute_t68_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m259_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m260_MethodInfo;
void g_replacements_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t68 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t68 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t68_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m259(tmp, &RuntimeCompatibilityAttribute__ctor_m259_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m260(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m260_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_replacements_Assembly__CustomAttributeCache = {
1,
NULL,
&g_replacements_Assembly_CustomAttributesCacheGenerator
};
