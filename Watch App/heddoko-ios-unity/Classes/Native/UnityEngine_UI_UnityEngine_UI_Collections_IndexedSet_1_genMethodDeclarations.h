#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
struct IndexedSet_1_t341;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t344;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
struct IEnumerator_1_t3341;
// UnityEngine.UI.ICanvasElement[]
struct ICanvasElementU5BU5D_t2755;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t343;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t342;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m2424(__this, method) (( void (*) (IndexedSet_1_t341 *, MethodInfo*))IndexedSet_1__ctor_m15068_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15069(__this, method) (( Object_t * (*) (IndexedSet_1_t341 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15070_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Add(T)
#define IndexedSet_1_Add_m2435(__this, ___item, method) (( void (*) (IndexedSet_1_t341 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m15071_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#define IndexedSet_1_Remove_m2436(__this, ___item, method) (( bool (*) (IndexedSet_1_t341 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m15072_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m15073(__this, method) (( Object_t* (*) (IndexedSet_1_t341 *, MethodInfo*))IndexedSet_1_GetEnumerator_m15074_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Clear()
#define IndexedSet_1_Clear_m2434(__this, method) (( void (*) (IndexedSet_1_t341 *, MethodInfo*))IndexedSet_1_Clear_m15075_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Contains(T)
#define IndexedSet_1_Contains_m15076(__this, ___item, method) (( bool (*) (IndexedSet_1_t341 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m15077_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m15078(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t341 *, ICanvasElementU5BU5D_t2755*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m15079_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Count()
#define IndexedSet_1_get_Count_m2433(__this, method) (( int32_t (*) (IndexedSet_1_t341 *, MethodInfo*))IndexedSet_1_get_Count_m15080_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m15081(__this, method) (( bool (*) (IndexedSet_1_t341 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m15082_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
#define IndexedSet_1_IndexOf_m15083(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t341 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m15084_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m15085(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t341 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m15086_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m15087(__this, ___index, method) (( void (*) (IndexedSet_1_t341 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m15088_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m2429(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t341 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m15089_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m15090(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t341 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m15091_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m2438(__this, ___match, method) (( void (*) (IndexedSet_1_t341 *, Predicate_1_t343 *, MethodInfo*))IndexedSet_1_RemoveAll_m15092_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m2439(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t341 *, Comparison_1_t342 *, MethodInfo*))IndexedSet_1_Sort_m15093_gshared)(__this, ___sortLayoutFunction, method)
