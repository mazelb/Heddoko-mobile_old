﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>
struct ReadOnlyCollection_1_t2492;
// SensorData
struct SensorData_t1;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<SensorData>
struct IList_1_t2491;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// SensorData[]
struct SensorDataU5BU5D_t2489;
// System.Collections.Generic.IEnumerator`1<SensorData>
struct IEnumerator_1_t3289;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m12355(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2492 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m11978_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12356(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2492 *, SensorData_t1 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11979_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12357(__this, method) (( void (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11980_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12358(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2492 *, int32_t, SensorData_t1 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11981_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12359(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2492 *, SensorData_t1 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11982_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12360(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2492 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11983_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12361(__this, ___index, method) (( SensorData_t1 * (*) (ReadOnlyCollection_1_t2492 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11984_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12362(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2492 *, int32_t, SensorData_t1 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11985_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12363(__this, method) (( bool (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11986_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12364(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2492 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11987_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12365(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11988_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m12366(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2492 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m11989_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m12367(__this, method) (( void (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m11990_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m12368(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2492 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m11991_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12369(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2492 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11992_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m12370(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2492 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m11993_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m12371(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2492 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m11994_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12372(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2492 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11995_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12373(__this, method) (( bool (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11996_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12374(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11997_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12375(__this, method) (( bool (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11998_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12376(__this, method) (( bool (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11999_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m12377(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2492 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m12000_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m12378(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2492 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m12001_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::Contains(T)
#define ReadOnlyCollection_1_Contains_m12379(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2492 *, SensorData_t1 *, MethodInfo*))ReadOnlyCollection_1_Contains_m12002_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m12380(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2492 *, SensorDataU5BU5D_t2489*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m12003_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m12381(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m12004_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m12382(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2492 *, SensorData_t1 *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m12005_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::get_Count()
#define ReadOnlyCollection_1_get_Count_m12383(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2492 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m12006_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<SensorData>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m12384(__this, ___index, method) (( SensorData_t1 * (*) (ReadOnlyCollection_1_t2492 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m12007_gshared)(__this, ___index, method)
