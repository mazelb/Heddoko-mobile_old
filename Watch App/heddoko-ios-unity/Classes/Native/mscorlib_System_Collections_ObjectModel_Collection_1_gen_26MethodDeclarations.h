#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
struct Collection_1_t3103;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t980;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t3099;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t3400;
// System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>
struct IList_1_t3101;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m18610(__this, method) (( void (*) (Collection_1_t3103 *, MethodInfo*))Collection_1__ctor_m12008_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18611(__this, method) (( bool (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12009_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m18612(__this, ___array, ___index, method) (( void (*) (Collection_1_t3103 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12010_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m18613(__this, method) (( Object_t * (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12011_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m18614(__this, ___value, method) (( int32_t (*) (Collection_1_t3103 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12012_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m18615(__this, ___value, method) (( bool (*) (Collection_1_t3103 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m18616(__this, ___value, method) (( int32_t (*) (Collection_1_t3103 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12014_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m18617(__this, ___index, ___value, method) (( void (*) (Collection_1_t3103 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12015_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m18618(__this, ___value, method) (( void (*) (Collection_1_t3103 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12016_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m18619(__this, method) (( bool (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12017_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m18620(__this, method) (( Object_t * (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12018_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m18621(__this, method) (( bool (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12019_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m18622(__this, method) (( bool (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12020_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m18623(__this, ___index, method) (( Object_t * (*) (Collection_1_t3103 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12021_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m18624(__this, ___index, ___value, method) (( void (*) (Collection_1_t3103 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12022_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Add(T)
#define Collection_1_Add_m18625(__this, ___item, method) (( void (*) (Collection_1_t3103 *, PersistentCall_t980 *, MethodInfo*))Collection_1_Add_m12023_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Clear()
#define Collection_1_Clear_m18626(__this, method) (( void (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_Clear_m12024_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ClearItems()
#define Collection_1_ClearItems_m18627(__this, method) (( void (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_ClearItems_m12025_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define Collection_1_Contains_m18628(__this, ___item, method) (( bool (*) (Collection_1_t3103 *, PersistentCall_t980 *, MethodInfo*))Collection_1_Contains_m12026_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m18629(__this, ___array, ___index, method) (( void (*) (Collection_1_t3103 *, PersistentCallU5BU5D_t3099*, int32_t, MethodInfo*))Collection_1_CopyTo_m12027_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define Collection_1_GetEnumerator_m18630(__this, method) (( Object_t* (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_GetEnumerator_m12028_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define Collection_1_IndexOf_m18631(__this, ___item, method) (( int32_t (*) (Collection_1_t3103 *, PersistentCall_t980 *, MethodInfo*))Collection_1_IndexOf_m12029_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define Collection_1_Insert_m18632(__this, ___index, ___item, method) (( void (*) (Collection_1_t3103 *, int32_t, PersistentCall_t980 *, MethodInfo*))Collection_1_Insert_m12030_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m18633(__this, ___index, ___item, method) (( void (*) (Collection_1_t3103 *, int32_t, PersistentCall_t980 *, MethodInfo*))Collection_1_InsertItem_m12031_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define Collection_1_Remove_m18634(__this, ___item, method) (( bool (*) (Collection_1_t3103 *, PersistentCall_t980 *, MethodInfo*))Collection_1_Remove_m12032_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m18635(__this, ___index, method) (( void (*) (Collection_1_t3103 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12033_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m18636(__this, ___index, method) (( void (*) (Collection_1_t3103 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12034_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Count()
#define Collection_1_get_Count_m18637(__this, method) (( int32_t (*) (Collection_1_t3103 *, MethodInfo*))Collection_1_get_Count_m12035_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define Collection_1_get_Item_m18638(__this, ___index, method) (( PersistentCall_t980 * (*) (Collection_1_t3103 *, int32_t, MethodInfo*))Collection_1_get_Item_m12036_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m18639(__this, ___index, ___value, method) (( void (*) (Collection_1_t3103 *, int32_t, PersistentCall_t980 *, MethodInfo*))Collection_1_set_Item_m12037_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m18640(__this, ___index, ___item, method) (( void (*) (Collection_1_t3103 *, int32_t, PersistentCall_t980 *, MethodInfo*))Collection_1_SetItem_m12038_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m18641(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12039_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m18642(__this /* static, unused */, ___item, method) (( PersistentCall_t980 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12040_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m18643(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12041_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m18644(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12042_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m18645(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12043_gshared)(__this /* static, unused */, ___list, method)
