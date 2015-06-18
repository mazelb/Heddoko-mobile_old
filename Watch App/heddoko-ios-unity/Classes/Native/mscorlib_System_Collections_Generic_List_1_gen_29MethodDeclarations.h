#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t1918;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1722;
// System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
struct IEnumerable_1_t3420;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t3421;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
struct ICollection_1_t3422;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
struct ReadOnlyCollection_1_t3257;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t3255;
// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t3261;
// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t3264;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
#define List_1__ctor_m19841(__this, method) (( void (*) (List_1_t1918 *, MethodInfo*))List_1__ctor_m11874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19842(__this, ___collection, method) (( void (*) (List_1_t1918 *, Object_t*, MethodInfo*))List_1__ctor_m11876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m10393(__this, ___capacity, method) (( void (*) (List_1_t1918 *, int32_t, MethodInfo*))List_1__ctor_m11878_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m19843(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11880_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19844(__this, method) (( Object_t* (*) (List_1_t1918 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19845(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1918 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19846(__this, method) (( Object_t * (*) (List_1_t1918 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11886_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19847(__this, ___item, method) (( int32_t (*) (List_1_t1918 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m11888_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19848(__this, ___item, method) (( bool (*) (List_1_t1918 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m11890_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19849(__this, ___item, method) (( int32_t (*) (List_1_t1918 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m11892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19850(__this, ___index, ___item, method) (( void (*) (List_1_t1918 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m11894_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19851(__this, ___item, method) (( void (*) (List_1_t1918 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m11896_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19852(__this, method) (( bool (*) (List_1_t1918 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11898_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19853(__this, method) (( bool (*) (List_1_t1918 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11900_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19854(__this, method) (( Object_t * (*) (List_1_t1918 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19855(__this, method) (( bool (*) (List_1_t1918 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19856(__this, method) (( bool (*) (List_1_t1918 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11906_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19857(__this, ___index, method) (( Object_t * (*) (List_1_t1918 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m11908_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19858(__this, ___index, ___value, method) (( void (*) (List_1_t1918 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m11910_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m19859(__this, ___item, method) (( void (*) (List_1_t1918 *, StrongName_t1722 *, MethodInfo*))List_1_Add_m11911_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19860(__this, ___newCount, method) (( void (*) (List_1_t1918 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11913_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19861(__this, ___collection, method) (( void (*) (List_1_t1918 *, Object_t*, MethodInfo*))List_1_AddCollection_m11915_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19862(__this, ___enumerable, method) (( void (*) (List_1_t1918 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11917_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19863(__this, ___collection, method) (( void (*) (List_1_t1918 *, Object_t*, MethodInfo*))List_1_AddRange_m11919_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
#define List_1_AsReadOnly_m19864(__this, method) (( ReadOnlyCollection_1_t3257 * (*) (List_1_t1918 *, MethodInfo*))List_1_AsReadOnly_m11921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m19865(__this, method) (( void (*) (List_1_t1918 *, MethodInfo*))List_1_Clear_m11922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m19866(__this, ___item, method) (( bool (*) (List_1_t1918 *, StrongName_t1722 *, MethodInfo*))List_1_Contains_m11923_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19867(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1918 *, StrongNameU5BU5D_t3255*, int32_t, MethodInfo*))List_1_CopyTo_m11925_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
#define List_1_Find_m19868(__this, ___match, method) (( StrongName_t1722 * (*) (List_1_t1918 *, Predicate_1_t3261 *, MethodInfo*))List_1_Find_m11927_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19869(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3261 *, MethodInfo*))List_1_CheckMatch_m11929_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19870(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1918 *, int32_t, int32_t, Predicate_1_t3261 *, MethodInfo*))List_1_GetIndex_m11931_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m19871(__this, method) (( Enumerator_t3256  (*) (List_1_t1918 *, MethodInfo*))List_1_GetEnumerator_m11933_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m19872(__this, ___item, method) (( int32_t (*) (List_1_t1918 *, StrongName_t1722 *, MethodInfo*))List_1_IndexOf_m11935_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19873(__this, ___start, ___delta, method) (( void (*) (List_1_t1918 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11937_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19874(__this, ___index, method) (( void (*) (List_1_t1918 *, int32_t, MethodInfo*))List_1_CheckIndex_m11939_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m19875(__this, ___index, ___item, method) (( void (*) (List_1_t1918 *, int32_t, StrongName_t1722 *, MethodInfo*))List_1_Insert_m11941_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19876(__this, ___collection, method) (( void (*) (List_1_t1918 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11943_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m19877(__this, ___item, method) (( bool (*) (List_1_t1918 *, StrongName_t1722 *, MethodInfo*))List_1_Remove_m11945_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19878(__this, ___match, method) (( int32_t (*) (List_1_t1918 *, Predicate_1_t3261 *, MethodInfo*))List_1_RemoveAll_m11947_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19879(__this, ___index, method) (( void (*) (List_1_t1918 *, int32_t, MethodInfo*))List_1_RemoveAt_m11949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
#define List_1_Reverse_m19880(__this, method) (( void (*) (List_1_t1918 *, MethodInfo*))List_1_Reverse_m11951_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
#define List_1_Sort_m19881(__this, method) (( void (*) (List_1_t1918 *, MethodInfo*))List_1_Sort_m11953_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19882(__this, ___comparison, method) (( void (*) (List_1_t1918 *, Comparison_1_t3264 *, MethodInfo*))List_1_Sort_m11955_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m19883(__this, method) (( StrongNameU5BU5D_t3255* (*) (List_1_t1918 *, MethodInfo*))List_1_ToArray_m11956_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
#define List_1_TrimExcess_m19884(__this, method) (( void (*) (List_1_t1918 *, MethodInfo*))List_1_TrimExcess_m11958_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m19885(__this, method) (( int32_t (*) (List_1_t1918 *, MethodInfo*))List_1_get_Capacity_m11960_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19886(__this, ___value, method) (( void (*) (List_1_t1918 *, int32_t, MethodInfo*))List_1_set_Capacity_m11962_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m19887(__this, method) (( int32_t (*) (List_1_t1918 *, MethodInfo*))List_1_get_Count_m11963_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m19888(__this, ___index, method) (( StrongName_t1722 * (*) (List_1_t1918 *, int32_t, MethodInfo*))List_1_get_Item_m11964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m19889(__this, ___index, ___value, method) (( void (*) (List_1_t1918 *, int32_t, StrongName_t1722 *, MethodInfo*))List_1_set_Item_m11966_gshared)(__this, ___index, ___value, method)
