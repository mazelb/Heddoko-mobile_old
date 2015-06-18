#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t2480;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.String[]
struct StringU5BU5D_t17;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3285;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2478;

// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m12237(__this, method) (( void (*) (Collection_1_t2480 *, MethodInfo*))Collection_1__ctor_m12008_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12238(__this, method) (( bool (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12009_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m12239(__this, ___array, ___index, method) (( void (*) (Collection_1_t2480 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12010_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12240(__this, method) (( Object_t * (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12011_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m12241(__this, ___value, method) (( int32_t (*) (Collection_1_t2480 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12012_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m12242(__this, ___value, method) (( bool (*) (Collection_1_t2480 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m12243(__this, ___value, method) (( int32_t (*) (Collection_1_t2480 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12014_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m12244(__this, ___index, ___value, method) (( void (*) (Collection_1_t2480 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12015_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m12245(__this, ___value, method) (( void (*) (Collection_1_t2480 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12016_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m12246(__this, method) (( bool (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12017_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12247(__this, method) (( Object_t * (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12018_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m12248(__this, method) (( bool (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12019_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m12249(__this, method) (( bool (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12020_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m12250(__this, ___index, method) (( Object_t * (*) (Collection_1_t2480 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12021_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m12251(__this, ___index, ___value, method) (( void (*) (Collection_1_t2480 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12022_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Add(T)
#define Collection_1_Add_m12252(__this, ___item, method) (( void (*) (Collection_1_t2480 *, String_t*, MethodInfo*))Collection_1_Add_m12023_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Clear()
#define Collection_1_Clear_m12253(__this, method) (( void (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_Clear_m12024_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::ClearItems()
#define Collection_1_ClearItems_m12254(__this, method) (( void (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_ClearItems_m12025_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Contains(T)
#define Collection_1_Contains_m12255(__this, ___item, method) (( bool (*) (Collection_1_t2480 *, String_t*, MethodInfo*))Collection_1_Contains_m12026_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m12256(__this, ___array, ___index, method) (( void (*) (Collection_1_t2480 *, StringU5BU5D_t17*, int32_t, MethodInfo*))Collection_1_CopyTo_m12027_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.String>::GetEnumerator()
#define Collection_1_GetEnumerator_m12257(__this, method) (( Object_t* (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_GetEnumerator_m12028_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::IndexOf(T)
#define Collection_1_IndexOf_m12258(__this, ___item, method) (( int32_t (*) (Collection_1_t2480 *, String_t*, MethodInfo*))Collection_1_IndexOf_m12029_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Insert(System.Int32,T)
#define Collection_1_Insert_m12259(__this, ___index, ___item, method) (( void (*) (Collection_1_t2480 *, int32_t, String_t*, MethodInfo*))Collection_1_Insert_m12030_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m12260(__this, ___index, ___item, method) (( void (*) (Collection_1_t2480 *, int32_t, String_t*, MethodInfo*))Collection_1_InsertItem_m12031_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Remove(T)
#define Collection_1_Remove_m12261(__this, ___item, method) (( bool (*) (Collection_1_t2480 *, String_t*, MethodInfo*))Collection_1_Remove_m12032_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m12262(__this, ___index, method) (( void (*) (Collection_1_t2480 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12033_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m12263(__this, ___index, method) (( void (*) (Collection_1_t2480 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12034_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::get_Count()
#define Collection_1_get_Count_m12264(__this, method) (( int32_t (*) (Collection_1_t2480 *, MethodInfo*))Collection_1_get_Count_m12035_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::get_Item(System.Int32)
#define Collection_1_get_Item_m12265(__this, ___index, method) (( String_t* (*) (Collection_1_t2480 *, int32_t, MethodInfo*))Collection_1_get_Item_m12036_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m12266(__this, ___index, ___value, method) (( void (*) (Collection_1_t2480 *, int32_t, String_t*, MethodInfo*))Collection_1_set_Item_m12037_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m12267(__this, ___index, ___item, method) (( void (*) (Collection_1_t2480 *, int32_t, String_t*, MethodInfo*))Collection_1_SetItem_m12038_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m12268(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12039_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m12269(__this /* static, unused */, ___item, method) (( String_t* (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12040_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m12270(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12041_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m12271(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12042_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m12272(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12043_gshared)(__this /* static, unused */, ___list, method)
