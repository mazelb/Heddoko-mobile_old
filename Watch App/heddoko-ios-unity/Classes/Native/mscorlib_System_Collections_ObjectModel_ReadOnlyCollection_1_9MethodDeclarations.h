#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ReadOnlyCollection_1_t2680;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t310;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>
struct IList_1_t2679;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t2676;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerator_1_t3326;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m14238(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2680 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m11978_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14239(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2680 *, BaseRaycaster_t310 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11979_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14240(__this, method) (( void (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11980_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14241(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2680 *, int32_t, BaseRaycaster_t310 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11981_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14242(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2680 *, BaseRaycaster_t310 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11982_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14243(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2680 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11983_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14244(__this, ___index, method) (( BaseRaycaster_t310 * (*) (ReadOnlyCollection_1_t2680 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11984_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14245(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2680 *, int32_t, BaseRaycaster_t310 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11985_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14246(__this, method) (( bool (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11986_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14247(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2680 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11987_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14248(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11988_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m14249(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2680 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m11989_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m14250(__this, method) (( void (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m11990_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m14251(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2680 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m11991_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14252(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2680 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11992_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m14253(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2680 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m11993_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m14254(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2680 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m11994_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14255(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2680 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11995_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14256(__this, method) (( bool (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11996_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14257(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11997_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14258(__this, method) (( bool (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11998_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14259(__this, method) (( bool (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11999_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m14260(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2680 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m12000_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m14261(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2680 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m12001_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
#define ReadOnlyCollection_1_Contains_m14262(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2680 *, BaseRaycaster_t310 *, MethodInfo*))ReadOnlyCollection_1_Contains_m12002_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m14263(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2680 *, BaseRaycasterU5BU5D_t2676*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m12003_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m14264(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m12004_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m14265(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2680 *, BaseRaycaster_t310 *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m12005_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
#define ReadOnlyCollection_1_get_Count_m14266(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2680 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m12006_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m14267(__this, ___index, method) (( BaseRaycaster_t310 * (*) (ReadOnlyCollection_1_t2680 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m12007_gshared)(__this, ___index, method)
