#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t152;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t3309;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t3310;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t3311;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t2612;
// System.Single[]
struct SingleU5BU5D_t126;
// System.Predicate`1<System.Single>
struct Predicate_1_t2617;
// System.Comparison`1<System.Single>
struct Comparison_1_t2620;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m710_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1__ctor_m710(__this, method) (( void (*) (List_1_t152 *, MethodInfo*))List_1__ctor_m710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13382_gshared (List_1_t152 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m13382(__this, ___collection, method) (( void (*) (List_1_t152 *, Object_t*, MethodInfo*))List_1__ctor_m13382_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13383_gshared (List_1_t152 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m13383(__this, ___capacity, method) (( void (*) (List_1_t152 *, int32_t, MethodInfo*))List_1__ctor_m13383_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m13384_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m13384(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13384_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13385_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13385(__this, method) (( Object_t* (*) (List_1_t152 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13386_gshared (List_1_t152 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13386(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t152 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13386_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13387_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13387(__this, method) (( Object_t * (*) (List_1_t152 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13387_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13388_gshared (List_1_t152 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13388(__this, ___item, method) (( int32_t (*) (List_1_t152 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m13388_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13389_gshared (List_1_t152 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13389(__this, ___item, method) (( bool (*) (List_1_t152 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m13389_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13390_gshared (List_1_t152 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13390(__this, ___item, method) (( int32_t (*) (List_1_t152 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m13390_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13391_gshared (List_1_t152 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13391(__this, ___index, ___item, method) (( void (*) (List_1_t152 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m13391_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13392_gshared (List_1_t152 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13392(__this, ___item, method) (( void (*) (List_1_t152 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m13392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13393_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13393(__this, method) (( bool (*) (List_1_t152 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13394_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13394(__this, method) (( bool (*) (List_1_t152 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13394_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13395_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13395(__this, method) (( Object_t * (*) (List_1_t152 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13395_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13396_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13396(__this, method) (( bool (*) (List_1_t152 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13396_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13397_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13397(__this, method) (( bool (*) (List_1_t152 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13397_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13398_gshared (List_1_t152 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13398(__this, ___index, method) (( Object_t * (*) (List_1_t152 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m13398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13399_gshared (List_1_t152 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13399(__this, ___index, ___value, method) (( void (*) (List_1_t152 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m13399_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m711_gshared (List_1_t152 * __this, float ___item, MethodInfo* method);
#define List_1_Add_m711(__this, ___item, method) (( void (*) (List_1_t152 *, float, MethodInfo*))List_1_Add_m711_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13400_gshared (List_1_t152 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m13400(__this, ___newCount, method) (( void (*) (List_1_t152 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13400_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13401_gshared (List_1_t152 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m13401(__this, ___collection, method) (( void (*) (List_1_t152 *, Object_t*, MethodInfo*))List_1_AddCollection_m13401_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13402_gshared (List_1_t152 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m13402(__this, ___enumerable, method) (( void (*) (List_1_t152 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13402_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13403_gshared (List_1_t152 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m13403(__this, ___collection, method) (( void (*) (List_1_t152 *, Object_t*, MethodInfo*))List_1_AddRange_m13403_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2612 * List_1_AsReadOnly_m13404_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m13404(__this, method) (( ReadOnlyCollection_1_t2612 * (*) (List_1_t152 *, MethodInfo*))List_1_AsReadOnly_m13404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m13405_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_Clear_m13405(__this, method) (( void (*) (List_1_t152 *, MethodInfo*))List_1_Clear_m13405_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m13406_gshared (List_1_t152 * __this, float ___item, MethodInfo* method);
#define List_1_Contains_m13406(__this, ___item, method) (( bool (*) (List_1_t152 *, float, MethodInfo*))List_1_Contains_m13406_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13407_gshared (List_1_t152 * __this, SingleU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m13407(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t152 *, SingleU5BU5D_t126*, int32_t, MethodInfo*))List_1_CopyTo_m13407_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m13408_gshared (List_1_t152 * __this, Predicate_1_t2617 * ___match, MethodInfo* method);
#define List_1_Find_m13408(__this, ___match, method) (( float (*) (List_1_t152 *, Predicate_1_t2617 *, MethodInfo*))List_1_Find_m13408_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13409_gshared (Object_t * __this /* static, unused */, Predicate_1_t2617 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m13409(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2617 *, MethodInfo*))List_1_CheckMatch_m13409_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13410_gshared (List_1_t152 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2617 * ___match, MethodInfo* method);
#define List_1_GetIndex_m13410(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t152 *, int32_t, int32_t, Predicate_1_t2617 *, MethodInfo*))List_1_GetIndex_m13410_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t153  List_1_GetEnumerator_m720_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m720(__this, method) (( Enumerator_t153  (*) (List_1_t152 *, MethodInfo*))List_1_GetEnumerator_m720_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13411_gshared (List_1_t152 * __this, float ___item, MethodInfo* method);
#define List_1_IndexOf_m13411(__this, ___item, method) (( int32_t (*) (List_1_t152 *, float, MethodInfo*))List_1_IndexOf_m13411_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13412_gshared (List_1_t152 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m13412(__this, ___start, ___delta, method) (( void (*) (List_1_t152 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13412_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13413_gshared (List_1_t152 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m13413(__this, ___index, method) (( void (*) (List_1_t152 *, int32_t, MethodInfo*))List_1_CheckIndex_m13413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13414_gshared (List_1_t152 * __this, int32_t ___index, float ___item, MethodInfo* method);
#define List_1_Insert_m13414(__this, ___index, ___item, method) (( void (*) (List_1_t152 *, int32_t, float, MethodInfo*))List_1_Insert_m13414_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13415_gshared (List_1_t152 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m13415(__this, ___collection, method) (( void (*) (List_1_t152 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13415_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m13416_gshared (List_1_t152 * __this, float ___item, MethodInfo* method);
#define List_1_Remove_m13416(__this, ___item, method) (( bool (*) (List_1_t152 *, float, MethodInfo*))List_1_Remove_m13416_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13417_gshared (List_1_t152 * __this, Predicate_1_t2617 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m13417(__this, ___match, method) (( int32_t (*) (List_1_t152 *, Predicate_1_t2617 *, MethodInfo*))List_1_RemoveAll_m13417_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13418_gshared (List_1_t152 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m13418(__this, ___index, method) (( void (*) (List_1_t152 *, int32_t, MethodInfo*))List_1_RemoveAt_m13418_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m13419_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_Reverse_m13419(__this, method) (( void (*) (List_1_t152 *, MethodInfo*))List_1_Reverse_m13419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m13420_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_Sort_m13420(__this, method) (( void (*) (List_1_t152 *, MethodInfo*))List_1_Sort_m13420_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13421_gshared (List_1_t152 * __this, Comparison_1_t2620 * ___comparison, MethodInfo* method);
#define List_1_Sort_m13421(__this, ___comparison, method) (( void (*) (List_1_t152 *, Comparison_1_t2620 *, MethodInfo*))List_1_Sort_m13421_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t126* List_1_ToArray_m723_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_ToArray_m723(__this, method) (( SingleU5BU5D_t126* (*) (List_1_t152 *, MethodInfo*))List_1_ToArray_m723_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m13422_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_TrimExcess_m13422(__this, method) (( void (*) (List_1_t152 *, MethodInfo*))List_1_TrimExcess_m13422_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13423_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_get_Capacity_m13423(__this, method) (( int32_t (*) (List_1_t152 *, MethodInfo*))List_1_get_Capacity_m13423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13424_gshared (List_1_t152 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m13424(__this, ___value, method) (( void (*) (List_1_t152 *, int32_t, MethodInfo*))List_1_set_Capacity_m13424_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m712_gshared (List_1_t152 * __this, MethodInfo* method);
#define List_1_get_Count_m712(__this, method) (( int32_t (*) (List_1_t152 *, MethodInfo*))List_1_get_Count_m712_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m13425_gshared (List_1_t152 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m13425(__this, ___index, method) (( float (*) (List_1_t152 *, int32_t, MethodInfo*))List_1_get_Item_m13425_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13426_gshared (List_1_t152 * __this, int32_t ___index, float ___value, MethodInfo* method);
#define List_1_set_Item_m13426(__this, ___index, ___value, method) (( void (*) (List_1_t152 *, int32_t, float, MethodInfo*))List_1_set_Item_m13426_gshared)(__this, ___index, ___value, method)
