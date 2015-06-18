#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<SensorData>
struct List_1_t3;
// System.Object
struct Object_t;
// SensorData
struct SensorData_t1;
// System.Collections.Generic.IEnumerable`1<SensorData>
struct IEnumerable_1_t3288;
// System.Collections.Generic.IEnumerator`1<SensorData>
struct IEnumerator_1_t3289;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.ICollection`1<SensorData>
struct ICollection_1_t3290;
// System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>
struct ReadOnlyCollection_1_t2492;
// SensorData[]
struct SensorDataU5BU5D_t2489;
// System.Predicate`1<SensorData>
struct Predicate_1_t2496;
// System.Comparison`1<SensorData>
struct Comparison_1_t2499;
// System.Collections.Generic.List`1/Enumerator<SensorData>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<SensorData>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
#define List_1__ctor_m132(__this, method) (( void (*) (List_1_t3 *, MethodInfo*))List_1__ctor_m11874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SensorData>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m12301(__this, ___collection, method) (( void (*) (List_1_t3 *, Object_t*, MethodInfo*))List_1__ctor_m11876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<SensorData>::.ctor(System.Int32)
#define List_1__ctor_m12302(__this, ___capacity, method) (( void (*) (List_1_t3 *, int32_t, MethodInfo*))List_1__ctor_m11878_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<SensorData>::.cctor()
#define List_1__cctor_m12303(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11880_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<SensorData>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12304(__this, method) (( Object_t* (*) (List_1_t3 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SensorData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12305(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<SensorData>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12306(__this, method) (( Object_t * (*) (List_1_t3 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11886_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SensorData>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12307(__this, ___item, method) (( int32_t (*) (List_1_t3 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m11888_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SensorData>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12308(__this, ___item, method) (( bool (*) (List_1_t3 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m11890_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<SensorData>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12309(__this, ___item, method) (( int32_t (*) (List_1_t3 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m11892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SensorData>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12310(__this, ___index, ___item, method) (( void (*) (List_1_t3 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m11894_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<SensorData>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12311(__this, ___item, method) (( void (*) (List_1_t3 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m11896_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SensorData>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12312(__this, method) (( bool (*) (List_1_t3 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11898_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SensorData>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12313(__this, method) (( bool (*) (List_1_t3 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11900_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SensorData>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12314(__this, method) (( Object_t * (*) (List_1_t3 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SensorData>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12315(__this, method) (( bool (*) (List_1_t3 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SensorData>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12316(__this, method) (( bool (*) (List_1_t3 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11906_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SensorData>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12317(__this, ___index, method) (( Object_t * (*) (List_1_t3 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m11908_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SensorData>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12318(__this, ___index, ___value, method) (( void (*) (List_1_t3 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m11910_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<SensorData>::Add(T)
#define List_1_Add_m156(__this, ___item, method) (( void (*) (List_1_t3 *, SensorData_t1 *, MethodInfo*))List_1_Add_m11911_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SensorData>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12319(__this, ___newCount, method) (( void (*) (List_1_t3 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11913_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<SensorData>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12320(__this, ___collection, method) (( void (*) (List_1_t3 *, Object_t*, MethodInfo*))List_1_AddCollection_m11915_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<SensorData>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12321(__this, ___enumerable, method) (( void (*) (List_1_t3 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11917_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<SensorData>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12322(__this, ___collection, method) (( void (*) (List_1_t3 *, Object_t*, MethodInfo*))List_1_AddRange_m11919_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<SensorData>::AsReadOnly()
#define List_1_AsReadOnly_m12323(__this, method) (( ReadOnlyCollection_1_t2492 * (*) (List_1_t3 *, MethodInfo*))List_1_AsReadOnly_m11921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SensorData>::Clear()
#define List_1_Clear_m12324(__this, method) (( void (*) (List_1_t3 *, MethodInfo*))List_1_Clear_m11922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SensorData>::Contains(T)
#define List_1_Contains_m12325(__this, ___item, method) (( bool (*) (List_1_t3 *, SensorData_t1 *, MethodInfo*))List_1_Contains_m11923_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SensorData>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12326(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3 *, SensorDataU5BU5D_t2489*, int32_t, MethodInfo*))List_1_CopyTo_m11925_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<SensorData>::Find(System.Predicate`1<T>)
#define List_1_Find_m12327(__this, ___match, method) (( SensorData_t1 * (*) (List_1_t3 *, Predicate_1_t2496 *, MethodInfo*))List_1_Find_m11927_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<SensorData>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12328(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2496 *, MethodInfo*))List_1_CheckMatch_m11929_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<SensorData>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12329(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3 *, int32_t, int32_t, Predicate_1_t2496 *, MethodInfo*))List_1_GetIndex_m11931_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SensorData>::GetEnumerator()
#define List_1_GetEnumerator_m717(__this, method) (( Enumerator_t151  (*) (List_1_t3 *, MethodInfo*))List_1_GetEnumerator_m11933_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SensorData>::IndexOf(T)
#define List_1_IndexOf_m12330(__this, ___item, method) (( int32_t (*) (List_1_t3 *, SensorData_t1 *, MethodInfo*))List_1_IndexOf_m11935_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SensorData>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12331(__this, ___start, ___delta, method) (( void (*) (List_1_t3 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11937_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<SensorData>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12332(__this, ___index, method) (( void (*) (List_1_t3 *, int32_t, MethodInfo*))List_1_CheckIndex_m11939_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SensorData>::Insert(System.Int32,T)
#define List_1_Insert_m12333(__this, ___index, ___item, method) (( void (*) (List_1_t3 *, int32_t, SensorData_t1 *, MethodInfo*))List_1_Insert_m11941_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<SensorData>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12334(__this, ___collection, method) (( void (*) (List_1_t3 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11943_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<SensorData>::Remove(T)
#define List_1_Remove_m12335(__this, ___item, method) (( bool (*) (List_1_t3 *, SensorData_t1 *, MethodInfo*))List_1_Remove_m11945_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<SensorData>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12336(__this, ___match, method) (( int32_t (*) (List_1_t3 *, Predicate_1_t2496 *, MethodInfo*))List_1_RemoveAll_m11947_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<SensorData>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12337(__this, ___index, method) (( void (*) (List_1_t3 *, int32_t, MethodInfo*))List_1_RemoveAt_m11949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SensorData>::Reverse()
#define List_1_Reverse_m12338(__this, method) (( void (*) (List_1_t3 *, MethodInfo*))List_1_Reverse_m11951_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SensorData>::Sort()
#define List_1_Sort_m12339(__this, method) (( void (*) (List_1_t3 *, MethodInfo*))List_1_Sort_m11953_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SensorData>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12340(__this, ___comparison, method) (( void (*) (List_1_t3 *, Comparison_1_t2499 *, MethodInfo*))List_1_Sort_m11955_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<SensorData>::ToArray()
#define List_1_ToArray_m12341(__this, method) (( SensorDataU5BU5D_t2489* (*) (List_1_t3 *, MethodInfo*))List_1_ToArray_m11956_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SensorData>::TrimExcess()
#define List_1_TrimExcess_m12342(__this, method) (( void (*) (List_1_t3 *, MethodInfo*))List_1_TrimExcess_m11958_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SensorData>::get_Capacity()
#define List_1_get_Capacity_m12343(__this, method) (( int32_t (*) (List_1_t3 *, MethodInfo*))List_1_get_Capacity_m11960_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SensorData>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12344(__this, ___value, method) (( void (*) (List_1_t3 *, int32_t, MethodInfo*))List_1_set_Capacity_m11962_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<SensorData>::get_Count()
#define List_1_get_Count_m713(__this, method) (( int32_t (*) (List_1_t3 *, MethodInfo*))List_1_get_Count_m11963_gshared)(__this, method)
// T System.Collections.Generic.List`1<SensorData>::get_Item(System.Int32)
#define List_1_get_Item_m147(__this, ___index, method) (( SensorData_t1 * (*) (List_1_t3 *, int32_t, MethodInfo*))List_1_get_Item_m11964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SensorData>::set_Item(System.Int32,T)
#define List_1_set_Item_m12345(__this, ___index, ___value, method) (( void (*) (List_1_t3 *, int32_t, SensorData_t1 *, MethodInfo*))List_1_set_Item_m11966_gshared)(__this, ___index, ___value, method)
