﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t601;
// System.Collections.IDictionary
struct IDictionary_t602;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t133;

// System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern "C" void HybridDictionary__ctor_m2981 (HybridDictionary_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::.ctor(System.Int32,System.Boolean)
extern "C" void HybridDictionary__ctor_m2982 (HybridDictionary_t601 * __this, int32_t ___initialSize, bool ___caseInsensitive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m2983 (HybridDictionary_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Collections.Specialized.HybridDictionary::get_inner()
extern "C" Object_t * HybridDictionary_get_inner_m2984 (HybridDictionary_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern "C" int32_t HybridDictionary_get_Count_m2985 (HybridDictionary_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.HybridDictionary::get_IsSynchronized()
extern "C" bool HybridDictionary_get_IsSynchronized_m2986 (HybridDictionary_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern "C" Object_t * HybridDictionary_get_Item_m2987 (HybridDictionary_t601 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern "C" void HybridDictionary_set_Item_m2988 (HybridDictionary_t601 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern "C" Object_t * HybridDictionary_get_SyncRoot_m2989 (HybridDictionary_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern "C" void HybridDictionary_Add_m2990 (HybridDictionary_t601 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern "C" void HybridDictionary_CopyTo_m2991 (HybridDictionary_t601 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern "C" Object_t * HybridDictionary_GetEnumerator_m2992 (HybridDictionary_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Remove(System.Object)
extern "C" void HybridDictionary_Remove_m2993 (HybridDictionary_t601 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Switch()
extern "C" void HybridDictionary_Switch_m2994 (HybridDictionary_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;