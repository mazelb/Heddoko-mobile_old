#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t361;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t3353;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t3354;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t521;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2814;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t394;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2818;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2821;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m2584_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1__ctor_m2584(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1__ctor_m2584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15657_gshared (List_1_t361 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m15657(__this, ___collection, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1__ctor_m15657_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5538_gshared (List_1_t361 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m5538(__this, ___capacity, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1__ctor_m5538_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m15658_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m15658(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15658_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15659_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15659(__this, method) (( Object_t* (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15659_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15660_gshared (List_1_t361 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15660(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t361 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15660_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15661_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15661(__this, method) (( Object_t * (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15661_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15662_gshared (List_1_t361 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15662(__this, ___item, method) (( int32_t (*) (List_1_t361 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15662_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15663_gshared (List_1_t361 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15663(__this, ___item, method) (( bool (*) (List_1_t361 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15663_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15664_gshared (List_1_t361 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15664(__this, ___item, method) (( int32_t (*) (List_1_t361 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15665_gshared (List_1_t361 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15665(__this, ___index, ___item, method) (( void (*) (List_1_t361 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15666_gshared (List_1_t361 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15666(__this, ___item, method) (( void (*) (List_1_t361 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15666_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15667_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15667(__this, method) (( bool (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15667_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15668_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15668(__this, method) (( bool (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15668_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15669_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15669(__this, method) (( Object_t * (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15669_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15670_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15670(__this, method) (( bool (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15670_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15671_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15671(__this, method) (( bool (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15671_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15672_gshared (List_1_t361 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15672(__this, ___index, method) (( Object_t * (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15672_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15673_gshared (List_1_t361 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15673(__this, ___index, ___value, method) (( void (*) (List_1_t361 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15673_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m2478_gshared (List_1_t361 * __this, UIVertex_t379  ___item, MethodInfo* method);
#define List_1_Add_m2478(__this, ___item, method) (( void (*) (List_1_t361 *, UIVertex_t379 , MethodInfo*))List_1_Add_m2478_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15674_gshared (List_1_t361 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m15674(__this, ___newCount, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15674_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15675_gshared (List_1_t361 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m15675(__this, ___collection, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1_AddCollection_m15675_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15676_gshared (List_1_t361 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m15676(__this, ___enumerable, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15676_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15677_gshared (List_1_t361 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m15677(__this, ___collection, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1_AddRange_m15677_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2814 * List_1_AsReadOnly_m15678_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m15678(__this, method) (( ReadOnlyCollection_1_t2814 * (*) (List_1_t361 *, MethodInfo*))List_1_AsReadOnly_m15678_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m2489_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_Clear_m2489(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1_Clear_m2489_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m15679_gshared (List_1_t361 * __this, UIVertex_t379  ___item, MethodInfo* method);
#define List_1_Contains_m15679(__this, ___item, method) (( bool (*) (List_1_t361 *, UIVertex_t379 , MethodInfo*))List_1_Contains_m15679_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15680_gshared (List_1_t361 * __this, UIVertexU5BU5D_t394* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m15680(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t361 *, UIVertexU5BU5D_t394*, int32_t, MethodInfo*))List_1_CopyTo_m15680_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t379  List_1_Find_m15681_gshared (List_1_t361 * __this, Predicate_1_t2818 * ___match, MethodInfo* method);
#define List_1_Find_m15681(__this, ___match, method) (( UIVertex_t379  (*) (List_1_t361 *, Predicate_1_t2818 *, MethodInfo*))List_1_Find_m15681_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15682_gshared (Object_t * __this /* static, unused */, Predicate_1_t2818 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m15682(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2818 *, MethodInfo*))List_1_CheckMatch_m15682_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15683_gshared (List_1_t361 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2818 * ___match, MethodInfo* method);
#define List_1_GetIndex_m15683(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t361 *, int32_t, int32_t, Predicate_1_t2818 *, MethodInfo*))List_1_GetIndex_m15683_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2813  List_1_GetEnumerator_m15684_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m15684(__this, method) (( Enumerator_t2813  (*) (List_1_t361 *, MethodInfo*))List_1_GetEnumerator_m15684_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15685_gshared (List_1_t361 * __this, UIVertex_t379  ___item, MethodInfo* method);
#define List_1_IndexOf_m15685(__this, ___item, method) (( int32_t (*) (List_1_t361 *, UIVertex_t379 , MethodInfo*))List_1_IndexOf_m15685_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15686_gshared (List_1_t361 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m15686(__this, ___start, ___delta, method) (( void (*) (List_1_t361 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15686_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15687_gshared (List_1_t361 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m15687(__this, ___index, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_CheckIndex_m15687_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15688_gshared (List_1_t361 * __this, int32_t ___index, UIVertex_t379  ___item, MethodInfo* method);
#define List_1_Insert_m15688(__this, ___index, ___item, method) (( void (*) (List_1_t361 *, int32_t, UIVertex_t379 , MethodInfo*))List_1_Insert_m15688_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15689_gshared (List_1_t361 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m15689(__this, ___collection, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15689_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m15690_gshared (List_1_t361 * __this, UIVertex_t379  ___item, MethodInfo* method);
#define List_1_Remove_m15690(__this, ___item, method) (( bool (*) (List_1_t361 *, UIVertex_t379 , MethodInfo*))List_1_Remove_m15690_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15691_gshared (List_1_t361 * __this, Predicate_1_t2818 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m15691(__this, ___match, method) (( int32_t (*) (List_1_t361 *, Predicate_1_t2818 *, MethodInfo*))List_1_RemoveAll_m15691_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15692_gshared (List_1_t361 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m15692(__this, ___index, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_RemoveAt_m15692_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m15693_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_Reverse_m15693(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1_Reverse_m15693_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m15694_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_Sort_m15694(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1_Sort_m15694_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15695_gshared (List_1_t361 * __this, Comparison_1_t2821 * ___comparison, MethodInfo* method);
#define List_1_Sort_m15695(__this, ___comparison, method) (( void (*) (List_1_t361 *, Comparison_1_t2821 *, MethodInfo*))List_1_Sort_m15695_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t394* List_1_ToArray_m2665_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_ToArray_m2665(__this, method) (( UIVertexU5BU5D_t394* (*) (List_1_t361 *, MethodInfo*))List_1_ToArray_m2665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m15696_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_TrimExcess_m15696(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1_TrimExcess_m15696_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2498_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_get_Capacity_m2498(__this, method) (( int32_t (*) (List_1_t361 *, MethodInfo*))List_1_get_Capacity_m2498_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m2499_gshared (List_1_t361 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m2499(__this, ___value, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_set_Capacity_m2499_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m2626_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_get_Count_m2626(__this, method) (( int32_t (*) (List_1_t361 *, MethodInfo*))List_1_get_Count_m2626_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t379  List_1_get_Item_m2833_gshared (List_1_t361 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m2833(__this, ___index, method) (( UIVertex_t379  (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_get_Item_m2833_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m2834_gshared (List_1_t361 * __this, int32_t ___index, UIVertex_t379  ___value, MethodInfo* method);
#define List_1_set_Item_m2834(__this, ___index, ___value, method) (( void (*) (List_1_t361 *, int32_t, UIVertex_t379 , MethodInfo*))List_1_set_Item_m2834_gshared)(__this, ___index, ___value, method)
