#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2753;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t160;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.Predicate`1<System.Object>
struct Predicate_1_t2452;
// System.Comparison`1<System.Object>
struct Comparison_1_t2471;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m15068_gshared (IndexedSet_1_t2753 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m15068(__this, method) (( void (*) (IndexedSet_1_t2753 *, MethodInfo*))IndexedSet_1__ctor_m15068_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15070_gshared (IndexedSet_1_t2753 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15070(__this, method) (( Object_t * (*) (IndexedSet_1_t2753 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15070_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m15071_gshared (IndexedSet_1_t2753 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m15071(__this, ___item, method) (( void (*) (IndexedSet_1_t2753 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m15071_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m15072_gshared (IndexedSet_1_t2753 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m15072(__this, ___item, method) (( bool (*) (IndexedSet_1_t2753 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m15072_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m15074_gshared (IndexedSet_1_t2753 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m15074(__this, method) (( Object_t* (*) (IndexedSet_1_t2753 *, MethodInfo*))IndexedSet_1_GetEnumerator_m15074_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m15075_gshared (IndexedSet_1_t2753 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m15075(__this, method) (( void (*) (IndexedSet_1_t2753 *, MethodInfo*))IndexedSet_1_Clear_m15075_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m15077_gshared (IndexedSet_1_t2753 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m15077(__this, ___item, method) (( bool (*) (IndexedSet_1_t2753 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m15077_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m15079_gshared (IndexedSet_1_t2753 * __this, ObjectU5BU5D_t137* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m15079(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2753 *, ObjectU5BU5D_t137*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m15079_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m15080_gshared (IndexedSet_1_t2753 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m15080(__this, method) (( int32_t (*) (IndexedSet_1_t2753 *, MethodInfo*))IndexedSet_1_get_Count_m15080_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m15082_gshared (IndexedSet_1_t2753 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m15082(__this, method) (( bool (*) (IndexedSet_1_t2753 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m15082_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m15084_gshared (IndexedSet_1_t2753 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m15084(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2753 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m15084_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m15086_gshared (IndexedSet_1_t2753 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m15086(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2753 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m15086_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m15088_gshared (IndexedSet_1_t2753 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m15088(__this, ___index, method) (( void (*) (IndexedSet_1_t2753 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m15088_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m15089_gshared (IndexedSet_1_t2753 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m15089(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2753 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m15089_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m15091_gshared (IndexedSet_1_t2753 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m15091(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2753 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m15091_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m15092_gshared (IndexedSet_1_t2753 * __this, Predicate_1_t2452 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m15092(__this, ___match, method) (( void (*) (IndexedSet_1_t2753 *, Predicate_1_t2452 *, MethodInfo*))IndexedSet_1_RemoveAll_m15092_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m15093_gshared (IndexedSet_1_t2753 * __this, Comparison_1_t2471 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m15093(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2753 *, Comparison_1_t2471 *, MethodInfo*))IndexedSet_1_Sort_m15093_gshared)(__this, ___sortLayoutFunction, method)
