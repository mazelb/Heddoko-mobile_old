#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>
struct List_1_t129;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<SensorData>
struct List_1_t3;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<SensorData>>
struct IEnumerable_1_t3306;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<SensorData>>
struct IEnumerator_1_t3307;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<SensorData>>
struct ICollection_1_t3308;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<SensorData>>
struct ReadOnlyCollection_1_t2603;
// System.Collections.Generic.List`1<SensorData>[]
struct List_1U5BU5D_t2598;
// System.Predicate`1<System.Collections.Generic.List`1<SensorData>>
struct Predicate_1_t2607;
// System.Comparison`1<System.Collections.Generic.List`1<SensorData>>
struct Comparison_1_t2610;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<SensorData>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
#define List_1__ctor_m706(__this, method) (( void (*) (List_1_t129 *, MethodInfo*))List_1__ctor_m11874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13231(__this, ___collection, method) (( void (*) (List_1_t129 *, Object_t*, MethodInfo*))List_1__ctor_m11876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::.ctor(System.Int32)
#define List_1__ctor_m13232(__this, ___capacity, method) (( void (*) (List_1_t129 *, int32_t, MethodInfo*))List_1__ctor_m11878_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::.cctor()
#define List_1__cctor_m13233(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11880_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13234(__this, method) (( Object_t* (*) (List_1_t129 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13235(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t129 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13236(__this, method) (( Object_t * (*) (List_1_t129 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11886_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13237(__this, ___item, method) (( int32_t (*) (List_1_t129 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m11888_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13238(__this, ___item, method) (( bool (*) (List_1_t129 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m11890_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13239(__this, ___item, method) (( int32_t (*) (List_1_t129 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m11892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13240(__this, ___index, ___item, method) (( void (*) (List_1_t129 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m11894_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13241(__this, ___item, method) (( void (*) (List_1_t129 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m11896_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13242(__this, method) (( bool (*) (List_1_t129 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11898_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13243(__this, method) (( bool (*) (List_1_t129 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11900_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13244(__this, method) (( Object_t * (*) (List_1_t129 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13245(__this, method) (( bool (*) (List_1_t129 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13246(__this, method) (( bool (*) (List_1_t129 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11906_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13247(__this, ___index, method) (( Object_t * (*) (List_1_t129 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m11908_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13248(__this, ___index, ___value, method) (( void (*) (List_1_t129 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m11910_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Add(T)
#define List_1_Add_m702(__this, ___item, method) (( void (*) (List_1_t129 *, List_1_t3 *, MethodInfo*))List_1_Add_m11911_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13249(__this, ___newCount, method) (( void (*) (List_1_t129 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11913_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13250(__this, ___collection, method) (( void (*) (List_1_t129 *, Object_t*, MethodInfo*))List_1_AddCollection_m11915_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13251(__this, ___enumerable, method) (( void (*) (List_1_t129 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11917_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13252(__this, ___collection, method) (( void (*) (List_1_t129 *, Object_t*, MethodInfo*))List_1_AddRange_m11919_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::AsReadOnly()
#define List_1_AsReadOnly_m13253(__this, method) (( ReadOnlyCollection_1_t2603 * (*) (List_1_t129 *, MethodInfo*))List_1_AsReadOnly_m11921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Clear()
#define List_1_Clear_m707(__this, method) (( void (*) (List_1_t129 *, MethodInfo*))List_1_Clear_m11922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Contains(T)
#define List_1_Contains_m13254(__this, ___item, method) (( bool (*) (List_1_t129 *, List_1_t3 *, MethodInfo*))List_1_Contains_m11923_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13255(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t129 *, List_1U5BU5D_t2598*, int32_t, MethodInfo*))List_1_CopyTo_m11925_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Find(System.Predicate`1<T>)
#define List_1_Find_m13256(__this, ___match, method) (( List_1_t3 * (*) (List_1_t129 *, Predicate_1_t2607 *, MethodInfo*))List_1_Find_m11927_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13257(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2607 *, MethodInfo*))List_1_CheckMatch_m11929_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13258(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t129 *, int32_t, int32_t, Predicate_1_t2607 *, MethodInfo*))List_1_GetIndex_m11931_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::GetEnumerator()
#define List_1_GetEnumerator_m703(__this, method) (( Enumerator_t128  (*) (List_1_t129 *, MethodInfo*))List_1_GetEnumerator_m11933_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::IndexOf(T)
#define List_1_IndexOf_m13259(__this, ___item, method) (( int32_t (*) (List_1_t129 *, List_1_t3 *, MethodInfo*))List_1_IndexOf_m11935_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13260(__this, ___start, ___delta, method) (( void (*) (List_1_t129 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11937_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13261(__this, ___index, method) (( void (*) (List_1_t129 *, int32_t, MethodInfo*))List_1_CheckIndex_m11939_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Insert(System.Int32,T)
#define List_1_Insert_m13262(__this, ___index, ___item, method) (( void (*) (List_1_t129 *, int32_t, List_1_t3 *, MethodInfo*))List_1_Insert_m11941_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13263(__this, ___collection, method) (( void (*) (List_1_t129 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11943_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Remove(T)
#define List_1_Remove_m13264(__this, ___item, method) (( bool (*) (List_1_t129 *, List_1_t3 *, MethodInfo*))List_1_Remove_m11945_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13265(__this, ___match, method) (( int32_t (*) (List_1_t129 *, Predicate_1_t2607 *, MethodInfo*))List_1_RemoveAll_m11947_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13266(__this, ___index, method) (( void (*) (List_1_t129 *, int32_t, MethodInfo*))List_1_RemoveAt_m11949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Reverse()
#define List_1_Reverse_m13267(__this, method) (( void (*) (List_1_t129 *, MethodInfo*))List_1_Reverse_m11951_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Sort()
#define List_1_Sort_m13268(__this, method) (( void (*) (List_1_t129 *, MethodInfo*))List_1_Sort_m11953_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13269(__this, ___comparison, method) (( void (*) (List_1_t129 *, Comparison_1_t2610 *, MethodInfo*))List_1_Sort_m11955_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::ToArray()
#define List_1_ToArray_m13270(__this, method) (( List_1U5BU5D_t2598* (*) (List_1_t129 *, MethodInfo*))List_1_ToArray_m11956_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::TrimExcess()
#define List_1_TrimExcess_m13271(__this, method) (( void (*) (List_1_t129 *, MethodInfo*))List_1_TrimExcess_m11958_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::get_Capacity()
#define List_1_get_Capacity_m13272(__this, method) (( int32_t (*) (List_1_t129 *, MethodInfo*))List_1_get_Capacity_m11960_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13273(__this, ___value, method) (( void (*) (List_1_t129 *, int32_t, MethodInfo*))List_1_set_Capacity_m11962_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::get_Count()
#define List_1_get_Count_m708(__this, method) (( int32_t (*) (List_1_t129 *, MethodInfo*))List_1_get_Count_m11963_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::get_Item(System.Int32)
#define List_1_get_Item_m709(__this, ___index, method) (( List_1_t3 * (*) (List_1_t129 *, int32_t, MethodInfo*))List_1_get_Item_m11964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<SensorData>>::set_Item(System.Int32,T)
#define List_1_set_Item_m13274(__this, ___index, ___value, method) (( void (*) (List_1_t129 *, int32_t, List_1_t3 *, MethodInfo*))List_1_set_Item_m11966_gshared)(__this, ___index, ___value, method)
