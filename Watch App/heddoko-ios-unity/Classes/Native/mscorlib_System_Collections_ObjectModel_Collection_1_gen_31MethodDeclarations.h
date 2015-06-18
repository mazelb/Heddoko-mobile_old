#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
struct Collection_1_t3258;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1722;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t3255;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t3421;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1718;

// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m19926(__this, method) (( void (*) (Collection_1_t3258 *, MethodInfo*))Collection_1__ctor_m12008_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19927(__this, method) (( bool (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12009_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m19928(__this, ___array, ___index, method) (( void (*) (Collection_1_t3258 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12010_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m19929(__this, method) (( Object_t * (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12011_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m19930(__this, ___value, method) (( int32_t (*) (Collection_1_t3258 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12012_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m19931(__this, ___value, method) (( bool (*) (Collection_1_t3258 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m19932(__this, ___value, method) (( int32_t (*) (Collection_1_t3258 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12014_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m19933(__this, ___index, ___value, method) (( void (*) (Collection_1_t3258 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12015_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m19934(__this, ___value, method) (( void (*) (Collection_1_t3258 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12016_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m19935(__this, method) (( bool (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12017_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m19936(__this, method) (( Object_t * (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12018_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m19937(__this, method) (( bool (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12019_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m19938(__this, method) (( bool (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12020_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m19939(__this, ___index, method) (( Object_t * (*) (Collection_1_t3258 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12021_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m19940(__this, ___index, ___value, method) (( void (*) (Collection_1_t3258 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12022_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
#define Collection_1_Add_m19941(__this, ___item, method) (( void (*) (Collection_1_t3258 *, StrongName_t1722 *, MethodInfo*))Collection_1_Add_m12023_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
#define Collection_1_Clear_m19942(__this, method) (( void (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_Clear_m12024_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
#define Collection_1_ClearItems_m19943(__this, method) (( void (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_ClearItems_m12025_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
#define Collection_1_Contains_m19944(__this, ___item, method) (( bool (*) (Collection_1_t3258 *, StrongName_t1722 *, MethodInfo*))Collection_1_Contains_m12026_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m19945(__this, ___array, ___index, method) (( void (*) (Collection_1_t3258 *, StrongNameU5BU5D_t3255*, int32_t, MethodInfo*))Collection_1_CopyTo_m12027_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
#define Collection_1_GetEnumerator_m19946(__this, method) (( Object_t* (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_GetEnumerator_m12028_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
#define Collection_1_IndexOf_m19947(__this, ___item, method) (( int32_t (*) (Collection_1_t3258 *, StrongName_t1722 *, MethodInfo*))Collection_1_IndexOf_m12029_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define Collection_1_Insert_m19948(__this, ___index, ___item, method) (( void (*) (Collection_1_t3258 *, int32_t, StrongName_t1722 *, MethodInfo*))Collection_1_Insert_m12030_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m19949(__this, ___index, ___item, method) (( void (*) (Collection_1_t3258 *, int32_t, StrongName_t1722 *, MethodInfo*))Collection_1_InsertItem_m12031_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
#define Collection_1_Remove_m19950(__this, ___item, method) (( bool (*) (Collection_1_t3258 *, StrongName_t1722 *, MethodInfo*))Collection_1_Remove_m12032_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m19951(__this, ___index, method) (( void (*) (Collection_1_t3258 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12033_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m19952(__this, ___index, method) (( void (*) (Collection_1_t3258 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12034_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
#define Collection_1_get_Count_m19953(__this, method) (( int32_t (*) (Collection_1_t3258 *, MethodInfo*))Collection_1_get_Count_m12035_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define Collection_1_get_Item_m19954(__this, ___index, method) (( StrongName_t1722 * (*) (Collection_1_t3258 *, int32_t, MethodInfo*))Collection_1_get_Item_m12036_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m19955(__this, ___index, ___value, method) (( void (*) (Collection_1_t3258 *, int32_t, StrongName_t1722 *, MethodInfo*))Collection_1_set_Item_m12037_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m19956(__this, ___index, ___item, method) (( void (*) (Collection_1_t3258 *, int32_t, StrongName_t1722 *, MethodInfo*))Collection_1_SetItem_m12038_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m19957(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12039_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m19958(__this /* static, unused */, ___item, method) (( StrongName_t1722 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12040_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m19959(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12041_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m19960(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12042_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m19961(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12043_gshared)(__this /* static, unused */, ___list, method)
