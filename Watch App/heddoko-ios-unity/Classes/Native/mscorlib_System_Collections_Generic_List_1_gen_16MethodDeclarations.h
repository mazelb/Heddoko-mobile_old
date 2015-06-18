#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t417;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t499;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t3368;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t3369;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t3370;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t2905;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t2900;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t2909;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t2912;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
#define List_1__ctor_m2707(__this, method) (( void (*) (List_1_t417 *, MethodInfo*))List_1__ctor_m11874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m16566(__this, ___collection, method) (( void (*) (List_1_t417 *, Object_t*, MethodInfo*))List_1__ctor_m11876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m16567(__this, ___capacity, method) (( void (*) (List_1_t417 *, int32_t, MethodInfo*))List_1__ctor_m11878_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m16568(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11880_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16569(__this, method) (( Object_t* (*) (List_1_t417 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16570(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t417 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16571(__this, method) (( Object_t * (*) (List_1_t417 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11886_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16572(__this, ___item, method) (( int32_t (*) (List_1_t417 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m11888_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16573(__this, ___item, method) (( bool (*) (List_1_t417 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m11890_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16574(__this, ___item, method) (( int32_t (*) (List_1_t417 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m11892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16575(__this, ___index, ___item, method) (( void (*) (List_1_t417 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m11894_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16576(__this, ___item, method) (( void (*) (List_1_t417 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m11896_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16577(__this, method) (( bool (*) (List_1_t417 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11898_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16578(__this, method) (( bool (*) (List_1_t417 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11900_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16579(__this, method) (( Object_t * (*) (List_1_t417 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16580(__this, method) (( bool (*) (List_1_t417 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16581(__this, method) (( bool (*) (List_1_t417 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11906_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16582(__this, ___index, method) (( Object_t * (*) (List_1_t417 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m11908_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16583(__this, ___index, ___value, method) (( void (*) (List_1_t417 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m11910_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m16584(__this, ___item, method) (( void (*) (List_1_t417 *, CanvasGroup_t499 *, MethodInfo*))List_1_Add_m11911_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16585(__this, ___newCount, method) (( void (*) (List_1_t417 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11913_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16586(__this, ___collection, method) (( void (*) (List_1_t417 *, Object_t*, MethodInfo*))List_1_AddCollection_m11915_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16587(__this, ___enumerable, method) (( void (*) (List_1_t417 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11917_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16588(__this, ___collection, method) (( void (*) (List_1_t417 *, Object_t*, MethodInfo*))List_1_AddRange_m11919_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m16589(__this, method) (( ReadOnlyCollection_1_t2905 * (*) (List_1_t417 *, MethodInfo*))List_1_AsReadOnly_m11921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m16590(__this, method) (( void (*) (List_1_t417 *, MethodInfo*))List_1_Clear_m11922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m16591(__this, ___item, method) (( bool (*) (List_1_t417 *, CanvasGroup_t499 *, MethodInfo*))List_1_Contains_m11923_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16592(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t417 *, CanvasGroupU5BU5D_t2900*, int32_t, MethodInfo*))List_1_CopyTo_m11925_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m16593(__this, ___match, method) (( CanvasGroup_t499 * (*) (List_1_t417 *, Predicate_1_t2909 *, MethodInfo*))List_1_Find_m11927_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16594(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2909 *, MethodInfo*))List_1_CheckMatch_m11929_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16595(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t417 *, int32_t, int32_t, Predicate_1_t2909 *, MethodInfo*))List_1_GetIndex_m11931_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m16596(__this, method) (( Enumerator_t2903  (*) (List_1_t417 *, MethodInfo*))List_1_GetEnumerator_m11933_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m16597(__this, ___item, method) (( int32_t (*) (List_1_t417 *, CanvasGroup_t499 *, MethodInfo*))List_1_IndexOf_m11935_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16598(__this, ___start, ___delta, method) (( void (*) (List_1_t417 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11937_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16599(__this, ___index, method) (( void (*) (List_1_t417 *, int32_t, MethodInfo*))List_1_CheckIndex_m11939_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m16600(__this, ___index, ___item, method) (( void (*) (List_1_t417 *, int32_t, CanvasGroup_t499 *, MethodInfo*))List_1_Insert_m11941_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16601(__this, ___collection, method) (( void (*) (List_1_t417 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11943_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m16602(__this, ___item, method) (( bool (*) (List_1_t417 *, CanvasGroup_t499 *, MethodInfo*))List_1_Remove_m11945_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16603(__this, ___match, method) (( int32_t (*) (List_1_t417 *, Predicate_1_t2909 *, MethodInfo*))List_1_RemoveAll_m11947_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16604(__this, ___index, method) (( void (*) (List_1_t417 *, int32_t, MethodInfo*))List_1_RemoveAt_m11949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m16605(__this, method) (( void (*) (List_1_t417 *, MethodInfo*))List_1_Reverse_m11951_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m16606(__this, method) (( void (*) (List_1_t417 *, MethodInfo*))List_1_Sort_m11953_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16607(__this, ___comparison, method) (( void (*) (List_1_t417 *, Comparison_1_t2912 *, MethodInfo*))List_1_Sort_m11955_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m16608(__this, method) (( CanvasGroupU5BU5D_t2900* (*) (List_1_t417 *, MethodInfo*))List_1_ToArray_m11956_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m16609(__this, method) (( void (*) (List_1_t417 *, MethodInfo*))List_1_TrimExcess_m11958_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m16610(__this, method) (( int32_t (*) (List_1_t417 *, MethodInfo*))List_1_get_Capacity_m11960_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16611(__this, ___value, method) (( void (*) (List_1_t417 *, int32_t, MethodInfo*))List_1_set_Capacity_m11962_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m2711(__this, method) (( int32_t (*) (List_1_t417 *, MethodInfo*))List_1_get_Count_m11963_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m2709(__this, ___index, method) (( CanvasGroup_t499 * (*) (List_1_t417 *, int32_t, MethodInfo*))List_1_get_Item_m11964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m16612(__this, ___index, ___value, method) (( void (*) (List_1_t417 *, int32_t, CanvasGroup_t499 *, MethodInfo*))List_1_set_Item_m11966_gshared)(__this, ___index, ___value, method)
