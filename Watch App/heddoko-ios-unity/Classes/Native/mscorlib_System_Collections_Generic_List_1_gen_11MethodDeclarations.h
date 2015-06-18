#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t458;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t142;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Component>
struct IEnumerable_1_t3319;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t3320;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.ICollection`1<UnityEngine.Component>
struct ICollection_1_t3321;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
struct ReadOnlyCollection_1_t2658;
// UnityEngine.Component[]
struct ComponentU5BU5D_t1012;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_t456;
// System.Comparison`1<UnityEngine.Component>
struct Comparison_1_t2664;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
#define List_1__ctor_m13902(__this, method) (( void (*) (List_1_t458 *, MethodInfo*))List_1__ctor_m11874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13903(__this, ___collection, method) (( void (*) (List_1_t458 *, Object_t*, MethodInfo*))List_1__ctor_m11876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Int32)
#define List_1__ctor_m13904(__this, ___capacity, method) (( void (*) (List_1_t458 *, int32_t, MethodInfo*))List_1__ctor_m11878_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.cctor()
#define List_1__cctor_m13905(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11880_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13906(__this, method) (( Object_t* (*) (List_1_t458 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13907(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t458 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13908(__this, method) (( Object_t * (*) (List_1_t458 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11886_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13909(__this, ___item, method) (( int32_t (*) (List_1_t458 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m11888_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13910(__this, ___item, method) (( bool (*) (List_1_t458 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m11890_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13911(__this, ___item, method) (( int32_t (*) (List_1_t458 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m11892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13912(__this, ___index, ___item, method) (( void (*) (List_1_t458 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m11894_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13913(__this, ___item, method) (( void (*) (List_1_t458 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m11896_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13914(__this, method) (( bool (*) (List_1_t458 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11898_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13915(__this, method) (( bool (*) (List_1_t458 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11900_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13916(__this, method) (( Object_t * (*) (List_1_t458 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13917(__this, method) (( bool (*) (List_1_t458 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13918(__this, method) (( bool (*) (List_1_t458 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11906_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13919(__this, ___index, method) (( Object_t * (*) (List_1_t458 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m11908_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13920(__this, ___index, ___value, method) (( void (*) (List_1_t458 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m11910_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
#define List_1_Add_m13921(__this, ___item, method) (( void (*) (List_1_t458 *, Component_t142 *, MethodInfo*))List_1_Add_m11911_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13922(__this, ___newCount, method) (( void (*) (List_1_t458 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11913_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13923(__this, ___collection, method) (( void (*) (List_1_t458 *, Object_t*, MethodInfo*))List_1_AddCollection_m11915_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13924(__this, ___enumerable, method) (( void (*) (List_1_t458 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11917_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13925(__this, ___collection, method) (( void (*) (List_1_t458 *, Object_t*, MethodInfo*))List_1_AddRange_m11919_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::AsReadOnly()
#define List_1_AsReadOnly_m13926(__this, method) (( ReadOnlyCollection_1_t2658 * (*) (List_1_t458 *, MethodInfo*))List_1_AsReadOnly_m11921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
#define List_1_Clear_m2830(__this, method) (( void (*) (List_1_t458 *, MethodInfo*))List_1_Clear_m11922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Contains(T)
#define List_1_Contains_m13927(__this, ___item, method) (( bool (*) (List_1_t458 *, Component_t142 *, MethodInfo*))List_1_Contains_m11923_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13928(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t458 *, ComponentU5BU5D_t1012*, int32_t, MethodInfo*))List_1_CopyTo_m11925_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::Find(System.Predicate`1<T>)
#define List_1_Find_m13929(__this, ___match, method) (( Component_t142 * (*) (List_1_t458 *, Predicate_1_t456 *, MethodInfo*))List_1_Find_m11927_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13930(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t456 *, MethodInfo*))List_1_CheckMatch_m11929_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13931(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t458 *, int32_t, int32_t, Predicate_1_t456 *, MethodInfo*))List_1_GetIndex_m11931_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
#define List_1_GetEnumerator_m13932(__this, method) (( Enumerator_t2656  (*) (List_1_t458 *, MethodInfo*))List_1_GetEnumerator_m11933_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::IndexOf(T)
#define List_1_IndexOf_m13933(__this, ___item, method) (( int32_t (*) (List_1_t458 *, Component_t142 *, MethodInfo*))List_1_IndexOf_m11935_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13934(__this, ___start, ___delta, method) (( void (*) (List_1_t458 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11937_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13935(__this, ___index, method) (( void (*) (List_1_t458 *, int32_t, MethodInfo*))List_1_CheckIndex_m11939_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Insert(System.Int32,T)
#define List_1_Insert_m13936(__this, ___index, ___item, method) (( void (*) (List_1_t458 *, int32_t, Component_t142 *, MethodInfo*))List_1_Insert_m11941_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13937(__this, ___collection, method) (( void (*) (List_1_t458 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11943_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Remove(T)
#define List_1_Remove_m13938(__this, ___item, method) (( bool (*) (List_1_t458 *, Component_t142 *, MethodInfo*))List_1_Remove_m11945_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m2810(__this, ___match, method) (( int32_t (*) (List_1_t458 *, Predicate_1_t456 *, MethodInfo*))List_1_RemoveAll_m11947_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13939(__this, ___index, method) (( void (*) (List_1_t458 *, int32_t, MethodInfo*))List_1_RemoveAt_m11949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Reverse()
#define List_1_Reverse_m13940(__this, method) (( void (*) (List_1_t458 *, MethodInfo*))List_1_Reverse_m11951_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort()
#define List_1_Sort_m13941(__this, method) (( void (*) (List_1_t458 *, MethodInfo*))List_1_Sort_m11953_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13942(__this, ___comparison, method) (( void (*) (List_1_t458 *, Comparison_1_t2664 *, MethodInfo*))List_1_Sort_m11955_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Component>::ToArray()
#define List_1_ToArray_m13943(__this, method) (( ComponentU5BU5D_t1012* (*) (List_1_t458 *, MethodInfo*))List_1_ToArray_m11956_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::TrimExcess()
#define List_1_TrimExcess_m13944(__this, method) (( void (*) (List_1_t458 *, MethodInfo*))List_1_TrimExcess_m11958_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Capacity()
#define List_1_get_Capacity_m13945(__this, method) (( int32_t (*) (List_1_t458 *, MethodInfo*))List_1_get_Capacity_m11960_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13946(__this, ___value, method) (( void (*) (List_1_t458 *, int32_t, MethodInfo*))List_1_set_Capacity_m11962_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
#define List_1_get_Count_m2459(__this, method) (( int32_t (*) (List_1_t458 *, MethodInfo*))List_1_get_Count_m11963_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
#define List_1_get_Item_m2457(__this, ___index, method) (( Component_t142 * (*) (List_1_t458 *, int32_t, MethodInfo*))List_1_get_Item_m11964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Item(System.Int32,T)
#define List_1_set_Item_m13947(__this, ___index, ___value, method) (( void (*) (List_1_t458 *, int32_t, Component_t142 *, MethodInfo*))List_1_set_Item_m11966_gshared)(__this, ___index, ___value, method)
