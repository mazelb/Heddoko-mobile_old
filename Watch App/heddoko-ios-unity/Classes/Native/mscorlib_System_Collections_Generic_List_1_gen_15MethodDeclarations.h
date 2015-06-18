#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t416;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t338;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t3365;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t3366;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t3367;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t2892;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t2881;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t2896;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t2899;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
#define List_1__ctor_m2708(__this, method) (( void (*) (List_1_t416 *, MethodInfo*))List_1__ctor_m11874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m16387(__this, ___collection, method) (( void (*) (List_1_t416 *, Object_t*, MethodInfo*))List_1__ctor_m11876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m16388(__this, ___capacity, method) (( void (*) (List_1_t416 *, int32_t, MethodInfo*))List_1__ctor_m11878_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m16389(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11880_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16390(__this, method) (( Object_t* (*) (List_1_t416 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16391(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t416 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16392(__this, method) (( Object_t * (*) (List_1_t416 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11886_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16393(__this, ___item, method) (( int32_t (*) (List_1_t416 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m11888_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16394(__this, ___item, method) (( bool (*) (List_1_t416 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m11890_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16395(__this, ___item, method) (( int32_t (*) (List_1_t416 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m11892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16396(__this, ___index, ___item, method) (( void (*) (List_1_t416 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m11894_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16397(__this, ___item, method) (( void (*) (List_1_t416 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m11896_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16398(__this, method) (( bool (*) (List_1_t416 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11898_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16399(__this, method) (( bool (*) (List_1_t416 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11900_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16400(__this, method) (( Object_t * (*) (List_1_t416 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16401(__this, method) (( bool (*) (List_1_t416 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16402(__this, method) (( bool (*) (List_1_t416 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11906_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16403(__this, ___index, method) (( Object_t * (*) (List_1_t416 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m11908_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16404(__this, ___index, ___value, method) (( void (*) (List_1_t416 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m11910_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m2712(__this, ___item, method) (( void (*) (List_1_t416 *, Selectable_t338 *, MethodInfo*))List_1_Add_m11911_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16405(__this, ___newCount, method) (( void (*) (List_1_t416 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11913_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16406(__this, ___collection, method) (( void (*) (List_1_t416 *, Object_t*, MethodInfo*))List_1_AddCollection_m11915_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16407(__this, ___enumerable, method) (( void (*) (List_1_t416 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11917_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16408(__this, ___collection, method) (( void (*) (List_1_t416 *, Object_t*, MethodInfo*))List_1_AddRange_m11919_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m16409(__this, method) (( ReadOnlyCollection_1_t2892 * (*) (List_1_t416 *, MethodInfo*))List_1_AsReadOnly_m11921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m16410(__this, method) (( void (*) (List_1_t416 *, MethodInfo*))List_1_Clear_m11922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m16411(__this, ___item, method) (( bool (*) (List_1_t416 *, Selectable_t338 *, MethodInfo*))List_1_Contains_m11923_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16412(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t416 *, SelectableU5BU5D_t2881*, int32_t, MethodInfo*))List_1_CopyTo_m11925_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m16413(__this, ___match, method) (( Selectable_t338 * (*) (List_1_t416 *, Predicate_1_t2896 *, MethodInfo*))List_1_Find_m11927_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16414(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2896 *, MethodInfo*))List_1_CheckMatch_m11929_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16415(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t416 *, int32_t, int32_t, Predicate_1_t2896 *, MethodInfo*))List_1_GetIndex_m11931_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m16416(__this, method) (( Enumerator_t2890  (*) (List_1_t416 *, MethodInfo*))List_1_GetEnumerator_m11933_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m16417(__this, ___item, method) (( int32_t (*) (List_1_t416 *, Selectable_t338 *, MethodInfo*))List_1_IndexOf_m11935_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16418(__this, ___start, ___delta, method) (( void (*) (List_1_t416 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11937_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16419(__this, ___index, method) (( void (*) (List_1_t416 *, int32_t, MethodInfo*))List_1_CheckIndex_m11939_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m16420(__this, ___index, ___item, method) (( void (*) (List_1_t416 *, int32_t, Selectable_t338 *, MethodInfo*))List_1_Insert_m11941_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16421(__this, ___collection, method) (( void (*) (List_1_t416 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11943_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m2713(__this, ___item, method) (( bool (*) (List_1_t416 *, Selectable_t338 *, MethodInfo*))List_1_Remove_m11945_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16422(__this, ___match, method) (( int32_t (*) (List_1_t416 *, Predicate_1_t2896 *, MethodInfo*))List_1_RemoveAll_m11947_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16423(__this, ___index, method) (( void (*) (List_1_t416 *, int32_t, MethodInfo*))List_1_RemoveAt_m11949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m16424(__this, method) (( void (*) (List_1_t416 *, MethodInfo*))List_1_Reverse_m11951_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m16425(__this, method) (( void (*) (List_1_t416 *, MethodInfo*))List_1_Sort_m11953_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16426(__this, ___comparison, method) (( void (*) (List_1_t416 *, Comparison_1_t2899 *, MethodInfo*))List_1_Sort_m11955_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m16427(__this, method) (( SelectableU5BU5D_t2881* (*) (List_1_t416 *, MethodInfo*))List_1_ToArray_m11956_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m16428(__this, method) (( void (*) (List_1_t416 *, MethodInfo*))List_1_TrimExcess_m11958_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m16429(__this, method) (( int32_t (*) (List_1_t416 *, MethodInfo*))List_1_get_Capacity_m11960_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16430(__this, ___value, method) (( void (*) (List_1_t416 *, int32_t, MethodInfo*))List_1_set_Capacity_m11962_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m2718(__this, method) (( int32_t (*) (List_1_t416 *, MethodInfo*))List_1_get_Count_m11963_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m2716(__this, ___index, method) (( Selectable_t338 * (*) (List_1_t416 *, int32_t, MethodInfo*))List_1_get_Item_m11964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m16431(__this, ___index, ___value, method) (( void (*) (List_1_t416 *, int32_t, Selectable_t338 *, MethodInfo*))List_1_set_Item_m11966_gshared)(__this, ___index, ___value, method)
