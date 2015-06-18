#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Collection_1_t2641;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEventSystemHandler
struct IEventSystemHandler_t478;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// UnityEngine.EventSystems.IEventSystemHandler[]
struct IEventSystemHandlerU5BU5D_t2637;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerator_1_t3316;
// System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IList_1_t544;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m13787(__this, method) (( void (*) (Collection_1_t2641 *, MethodInfo*))Collection_1__ctor_m12008_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13788(__this, method) (( bool (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12009_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m13789(__this, ___array, ___index, method) (( void (*) (Collection_1_t2641 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12010_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m13790(__this, method) (( Object_t * (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12011_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m13791(__this, ___value, method) (( int32_t (*) (Collection_1_t2641 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12012_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m13792(__this, ___value, method) (( bool (*) (Collection_1_t2641 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m13793(__this, ___value, method) (( int32_t (*) (Collection_1_t2641 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12014_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m13794(__this, ___index, ___value, method) (( void (*) (Collection_1_t2641 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12015_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m13795(__this, ___value, method) (( void (*) (Collection_1_t2641 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12016_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m13796(__this, method) (( bool (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12017_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m13797(__this, method) (( Object_t * (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12018_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m13798(__this, method) (( bool (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12019_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m13799(__this, method) (( bool (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12020_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m13800(__this, ___index, method) (( Object_t * (*) (Collection_1_t2641 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12021_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m13801(__this, ___index, ___value, method) (( void (*) (Collection_1_t2641 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12022_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
#define Collection_1_Add_m13802(__this, ___item, method) (( void (*) (Collection_1_t2641 *, Object_t *, MethodInfo*))Collection_1_Add_m12023_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
#define Collection_1_Clear_m13803(__this, method) (( void (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_Clear_m12024_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::ClearItems()
#define Collection_1_ClearItems_m13804(__this, method) (( void (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_ClearItems_m12025_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
#define Collection_1_Contains_m13805(__this, ___item, method) (( bool (*) (Collection_1_t2641 *, Object_t *, MethodInfo*))Collection_1_Contains_m12026_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m13806(__this, ___array, ___index, method) (( void (*) (Collection_1_t2641 *, IEventSystemHandlerU5BU5D_t2637*, int32_t, MethodInfo*))Collection_1_CopyTo_m12027_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
#define Collection_1_GetEnumerator_m13807(__this, method) (( Object_t* (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_GetEnumerator_m12028_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
#define Collection_1_IndexOf_m13808(__this, ___item, method) (( int32_t (*) (Collection_1_t2641 *, Object_t *, MethodInfo*))Collection_1_IndexOf_m12029_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
#define Collection_1_Insert_m13809(__this, ___index, ___item, method) (( void (*) (Collection_1_t2641 *, int32_t, Object_t *, MethodInfo*))Collection_1_Insert_m12030_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m13810(__this, ___index, ___item, method) (( void (*) (Collection_1_t2641 *, int32_t, Object_t *, MethodInfo*))Collection_1_InsertItem_m12031_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
#define Collection_1_Remove_m13811(__this, ___item, method) (( bool (*) (Collection_1_t2641 *, Object_t *, MethodInfo*))Collection_1_Remove_m12032_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m13812(__this, ___index, method) (( void (*) (Collection_1_t2641 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12033_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m13813(__this, ___index, method) (( void (*) (Collection_1_t2641 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12034_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
#define Collection_1_get_Count_m13814(__this, method) (( int32_t (*) (Collection_1_t2641 *, MethodInfo*))Collection_1_get_Count_m12035_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
#define Collection_1_get_Item_m13815(__this, ___index, method) (( Object_t * (*) (Collection_1_t2641 *, int32_t, MethodInfo*))Collection_1_get_Item_m12036_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m13816(__this, ___index, ___value, method) (( void (*) (Collection_1_t2641 *, int32_t, Object_t *, MethodInfo*))Collection_1_set_Item_m12037_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m13817(__this, ___index, ___item, method) (( void (*) (Collection_1_t2641 *, int32_t, Object_t *, MethodInfo*))Collection_1_SetItem_m12038_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m13818(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12039_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m13819(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12040_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m13820(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12041_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m13821(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12042_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m13822(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12043_gshared)(__this /* static, unused */, ___list, method)
