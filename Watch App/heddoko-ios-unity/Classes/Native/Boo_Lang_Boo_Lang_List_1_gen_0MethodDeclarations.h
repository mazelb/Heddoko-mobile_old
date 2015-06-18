#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.List`1<System.Object>
struct List_1_t2988;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t160;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.String
struct String_t;

// System.Void Boo.Lang.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m17422_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1__ctor_m17422(__this, method) (( void (*) (List_1_t2988 *, MethodInfo*))List_1__ctor_m17422_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m17423_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m17423(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m17423_gshared)(__this /* static, unused */, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m17424_gshared (List_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m17424(__this, ___item, method) (( void (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m17424_gshared)(__this, ___item, method)
// System.Collections.IEnumerator Boo.Lang.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17425_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17425(__this, method) (( Object_t * (*) (List_1_t2988 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17425_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void List_1_System_Collections_Generic_IListU3CTU3E_Insert_m17426_gshared (List_1_t2988 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_Insert_m17426(__this, ___index, ___item, method) (( void (*) (List_1_t2988 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_Generic_IListU3CTU3E_Insert_m17426_gshared)(__this, ___index, ___item, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m17427_gshared (List_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m17427(__this, ___index, method) (( void (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m17427_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m17428_gshared (List_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m17428(__this, ___item, method) (( bool (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m17428_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17429_gshared (List_1_t2988 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17429(__this, ___value, method) (( int32_t (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m17429_gshared)(__this, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17430_gshared (List_1_t2988 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17430(__this, ___index, ___value, method) (( void (*) (List_1_t2988 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m17430_gshared)(__this, ___index, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17431_gshared (List_1_t2988 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17431(__this, ___value, method) (( void (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m17431_gshared)(__this, ___value, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17432_gshared (List_1_t2988 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17432(__this, ___value, method) (( int32_t (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m17432_gshared)(__this, ___value, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17433_gshared (List_1_t2988 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17433(__this, ___value, method) (( bool (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m17433_gshared)(__this, ___value, method)
// System.Object Boo.Lang.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17434_gshared (List_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17434(__this, ___index, method) (( Object_t * (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m17434_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17435_gshared (List_1_t2988 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17435(__this, ___index, ___value, method) (( void (*) (List_1_t2988 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m17435_gshared)(__this, ___index, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void List_1_System_Collections_IList_RemoveAt_m17436_gshared (List_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_RemoveAt_m17436(__this, ___index, method) (( void (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_System_Collections_IList_RemoveAt_m17436_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17437_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17437(__this, method) (( bool (*) (List_1_t2988 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17437_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17438_gshared (List_1_t2988 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17438(__this, ___array, ___index, method) (( void (*) (List_1_t2988 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17438_gshared)(__this, ___array, ___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m17439_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_get_Count_m17439(__this, method) (( int32_t (*) (List_1_t2988 *, MethodInfo*))List_1_get_Count_m17439_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.List`1<System.Object>::GetEnumerator()
extern "C" Object_t* List_1_GetEnumerator_m17440_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m17440(__this, method) (( Object_t* (*) (List_1_t2988 *, MethodInfo*))List_1_GetEnumerator_m17440_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17441_gshared (List_1_t2988 * __this, ObjectU5BU5D_t137* ___target, int32_t ___index, MethodInfo* method);
#define List_1_CopyTo_m17441(__this, ___target, ___index, method) (( void (*) (List_1_t2988 *, ObjectU5BU5D_t137*, int32_t, MethodInfo*))List_1_CopyTo_m17441_gshared)(__this, ___target, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsSynchronized()
extern "C" bool List_1_get_IsSynchronized_m17442_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_get_IsSynchronized_m17442(__this, method) (( bool (*) (List_1_t2988 *, MethodInfo*))List_1_get_IsSynchronized_m17442_gshared)(__this, method)
// System.Object Boo.Lang.List`1<System.Object>::get_SyncRoot()
extern "C" Object_t * List_1_get_SyncRoot_m17443_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_get_SyncRoot_m17443(__this, method) (( Object_t * (*) (List_1_t2988 *, MethodInfo*))List_1_get_SyncRoot_m17443_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsReadOnly()
extern "C" bool List_1_get_IsReadOnly_m17444_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_get_IsReadOnly_m17444(__this, method) (( bool (*) (List_1_t2988 *, MethodInfo*))List_1_get_IsReadOnly_m17444_gshared)(__this, method)
// T Boo.Lang.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m17445_gshared (List_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m17445(__this, ___index, method) (( Object_t * (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_get_Item_m17445_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17446_gshared (List_1_t2988 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m17446(__this, ___index, ___value, method) (( void (*) (List_1_t2988 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m17446_gshared)(__this, ___index, ___value, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Push(T)
extern "C" List_1_t2988 * List_1_Push_m17447_gshared (List_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Push_m17447(__this, ___item, method) (( List_1_t2988 * (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_Push_m17447_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Add(T)
extern "C" List_1_t2988 * List_1_Add_m17448_gshared (List_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m17448(__this, ___item, method) (( List_1_t2988 * (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_Add_m17448_gshared)(__this, ___item, method)
// System.String Boo.Lang.List`1<System.Object>::ToString()
extern "C" String_t* List_1_ToString_m17449_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_ToString_m17449(__this, method) (( String_t* (*) (List_1_t2988 *, MethodInfo*))List_1_ToString_m17449_gshared)(__this, method)
// System.String Boo.Lang.List`1<System.Object>::Join(System.String)
extern "C" String_t* List_1_Join_m17450_gshared (List_1_t2988 * __this, String_t* ___separator, MethodInfo* method);
#define List_1_Join_m17450(__this, ___separator, method) (( String_t* (*) (List_1_t2988 *, String_t*, MethodInfo*))List_1_Join_m17450_gshared)(__this, ___separator, method)
// System.Int32 Boo.Lang.List`1<System.Object>::GetHashCode()
extern "C" int32_t List_1_GetHashCode_m17451_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_GetHashCode_m17451(__this, method) (( int32_t (*) (List_1_t2988 *, MethodInfo*))List_1_GetHashCode_m17451_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(System.Object)
extern "C" bool List_1_Equals_m17452_gshared (List_1_t2988 * __this, Object_t * ___other, MethodInfo* method);
#define List_1_Equals_m17452(__this, ___other, method) (( bool (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_Equals_m17452_gshared)(__this, ___other, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(Boo.Lang.List`1<T>)
extern "C" bool List_1_Equals_m17453_gshared (List_1_t2988 * __this, List_1_t2988 * ___other, MethodInfo* method);
#define List_1_Equals_m17453(__this, ___other, method) (( bool (*) (List_1_t2988 *, List_1_t2988 *, MethodInfo*))List_1_Equals_m17453_gshared)(__this, ___other, method)
// System.Void Boo.Lang.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m17454_gshared (List_1_t2988 * __this, MethodInfo* method);
#define List_1_Clear_m17454(__this, method) (( void (*) (List_1_t2988 *, MethodInfo*))List_1_Clear_m17454_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m17455_gshared (List_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m17455(__this, ___item, method) (( bool (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_Contains_m17455_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17456_gshared (List_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m17456(__this, ___item, method) (( int32_t (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_IndexOf_m17456_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Insert(System.Int32,T)
extern "C" List_1_t2988 * List_1_Insert_m17457_gshared (List_1_t2988 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m17457(__this, ___index, ___item, method) (( List_1_t2988 * (*) (List_1_t2988 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m17457_gshared)(__this, ___index, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Remove(T)
extern "C" List_1_t2988 * List_1_Remove_m17458_gshared (List_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m17458(__this, ___item, method) (( List_1_t2988 * (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_Remove_m17458_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" List_1_t2988 * List_1_RemoveAt_m17459_gshared (List_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m17459(__this, ___index, method) (( List_1_t2988 * (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_RemoveAt_m17459_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::EnsureCapacity(System.Int32)
extern "C" void List_1_EnsureCapacity_m17460_gshared (List_1_t2988 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_EnsureCapacity_m17460(__this, ___minCapacity, method) (( void (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_EnsureCapacity_m17460_gshared)(__this, ___minCapacity, method)
// T[] Boo.Lang.List`1<System.Object>::NewArray(System.Int32)
extern "C" ObjectU5BU5D_t137* List_1_NewArray_m17461_gshared (List_1_t2988 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_NewArray_m17461(__this, ___minCapacity, method) (( ObjectU5BU5D_t137* (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_NewArray_m17461_gshared)(__this, ___minCapacity, method)
// System.Void Boo.Lang.List`1<System.Object>::InnerRemoveAt(System.Int32)
extern "C" void List_1_InnerRemoveAt_m17462_gshared (List_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define List_1_InnerRemoveAt_m17462(__this, ___index, method) (( void (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_InnerRemoveAt_m17462_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::InnerRemove(T)
extern "C" bool List_1_InnerRemove_m17463_gshared (List_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_InnerRemove_m17463(__this, ___item, method) (( bool (*) (List_1_t2988 *, Object_t *, MethodInfo*))List_1_InnerRemove_m17463_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" int32_t List_1_CheckIndex_m17464_gshared (List_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m17464(__this, ___index, method) (( int32_t (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_CheckIndex_m17464_gshared)(__this, ___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::NormalizeIndex(System.Int32)
extern "C" int32_t List_1_NormalizeIndex_m17465_gshared (List_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define List_1_NormalizeIndex_m17465(__this, ___index, method) (( int32_t (*) (List_1_t2988 *, int32_t, MethodInfo*))List_1_NormalizeIndex_m17465_gshared)(__this, ___index, method)
// T Boo.Lang.List`1<System.Object>::Coerce(System.Object)
extern "C" Object_t * List_1_Coerce_m17466_gshared (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method);
#define List_1_Coerce_m17466(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))List_1_Coerce_m17466_gshared)(__this /* static, unused */, ___value, method)
