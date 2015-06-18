#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_23.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo ReadOnlyCollection_1_t3020_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_23MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Array
#include "mscorlib_System_Array.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t43_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t150_il2cpp_TypeInfo;
extern TypeInfo IList_1_t3019_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3387_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t785_il2cpp_TypeInfo;
extern TypeInfo ICollection_t715_il2cpp_TypeInfo;
extern TypeInfo Void_t42_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t244_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t124_il2cpp_TypeInfo;
extern TypeInfo Boolean_t44_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t138_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3386_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3385_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<System.Type>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_22MethodDeclarations.h"
extern Il2CppType ReadOnlyCollection_1_t3020_0_0_0;
extern Il2CppType IList_1_t3019_0_0_0;
extern Il2CppType ICollection_1_t3387_0_0_0;
extern Il2CppType IEnumerable_1_t3386_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m17785_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m701_MethodInfo;
extern MethodInfo IList_1_get_Item_m23688_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23684_MethodInfo;
extern MethodInfo Object__ctor_m127_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3869_MethodInfo;
extern MethodInfo ICollection_CopyTo_m3856_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m4016_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23689_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23690_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23685_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23686_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m17785_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23688_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23684_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m17817_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23689_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23690_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23685_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23686_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<System.Type>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_22.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3021_il2cpp_TypeInfo;

// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_20.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo List_1_t1114_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t522_il2cpp_TypeInfo;
extern TypeInfo IList_t743_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Collection_1_t3021_0_0_0;
extern Il2CppType List_1_t1114_0_0_0;
extern Il2CppType Type_t_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23691_MethodInfo;
extern MethodInfo Collection_1_SetItem_m17816_MethodInfo;
extern MethodInfo List_1__ctor_m5499_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m10299_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m17809_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m17807_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m17812_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m17803_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23692_MethodInfo;
extern MethodInfo IList_1_Insert_m23693_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23694_MethodInfo;
extern MethodInfo IList_1_set_Item_m23695_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m577_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6487_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2758_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m10585_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m10586_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23691_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m17820_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m17821_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m17818_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m17816_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m5499_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m17809_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m17819_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m17807_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m17812_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m17803_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23692_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23693_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23694_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23695_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Type>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::get_Count()
// T System.Collections.ObjectModel.Collection`1<System.Type>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<System.Type>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsFixedSize(System.Collections.Generic.IList`1<T>)
// System.Collections.Generic.EqualityComparer`1<System.Type>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3022_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Type>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_32MethodDeclarations.h"

// System.Collections.Generic.GenericEqualityComparer`1
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Type>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_33.h"
extern TypeInfo IEquatable_1_t4043_il2cpp_TypeInfo;
extern TypeInfo GenericEqualityComparer_1_t1376_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3023_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Type>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_33MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3022_0_0_0;
extern Il2CppType IEquatable_1_t4043_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t1376_0_0_0;
extern Il2CppType TypeU5BU5D_t138_0_0_0;
extern Il2CppType DefaultComparer_t3023_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m4313_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5553_MethodInfo;
extern MethodInfo Activator_CreateInstance_m5587_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m17827_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23696_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22096_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m17827_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23696_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22096_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Type>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<System.Type>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Type>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Type>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Type>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Type>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Type>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4044_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Type>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Type>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Type>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m227_MethodInfo;
extern MethodInfo Object_Equals_m225_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m17822_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Type>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Type>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Type>::Equals(T,T)
// System.Predicate`1<System.Type>
#include "mscorlib_System_Predicate_1_gen_23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Predicate_1_t3024_il2cpp_TypeInfo;
// System.Predicate`1<System.Type>
#include "mscorlib_System_Predicate_1_gen_23MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Predicate`1<System.Type>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<System.Type>::Invoke(T)
// System.IAsyncResult System.Predicate`1<System.Type>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<System.Type>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Comparer`1<System.Type>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t3025_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Type>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_23MethodDeclarations.h"

// System.Collections.Generic.GenericComparer`1
#include "mscorlib_System_Collections_Generic_GenericComparer_1.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Type>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_24.h"
extern TypeInfo IComparable_1_t3551_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t1366_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3026_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Type>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_24MethodDeclarations.h"
extern Il2CppType Comparer_1_t3025_0_0_0;
extern Il2CppType IComparable_1_t3551_0_0_0;
extern Il2CppType GenericComparer_1_t1366_0_0_0;
extern Il2CppType DefaultComparer_t3026_0_0_0;
extern MethodInfo DefaultComparer__ctor_m17838_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23697_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9445_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m17838_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23697_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Type>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<System.Type>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<System.Type>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<System.Type>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Type>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3550_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Type>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<System.Type>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t60_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m22105_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10265_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m17834_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22105_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Type>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Type>::Compare(T,T)
// System.Comparison`1<System.Type>
#include "mscorlib_System_Comparison_1_gen_23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3027_il2cpp_TypeInfo;
// System.Comparison`1<System.Type>
#include "mscorlib_System_Comparison_1_gen_23MethodDeclarations.h"



// System.Void System.Comparison`1<System.Type>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<System.Type>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<System.Type>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<System.Type>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4045_il2cpp_TypeInfo;

// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterModifier>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_134.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3028_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_134MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo ParameterModifier_t1117_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3028_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m3860_MethodInfo;
extern MethodInfo Array_get_Length_m947_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
extern "C" ParameterModifier_t1117  Array_InternalArray__get_Item_TisParameterModifier_t1117_m22110_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisParameterModifier_t1117_m22110(__this, p0, method) (( ParameterModifier_t1117  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisParameterModifier_t1117_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17848_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisParameterModifier_t1117_m22110_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m17844_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m17844_gshared (InternalEnumerator_1_t3028 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17845_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17845_gshared (InternalEnumerator_1_t3028 * __this, MethodInfo* method)
{
	{
		ParameterModifier_t1117  L_0 = (( ParameterModifier_t1117  (*) (InternalEnumerator_1_t3028 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ParameterModifier_t1117  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m17846_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m17846_gshared (InternalEnumerator_1_t3028 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m17847_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m17847_gshared (InternalEnumerator_1_t3028 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::get_Current()
extern "C" ParameterModifier_t1117  InternalEnumerator_1_get_Current_m17848_gshared (InternalEnumerator_1_t3028 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		ParameterModifier_t1117  L_8 = (( ParameterModifier_t1117  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4046_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4047_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterModifier>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4048_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4049_il2cpp_TypeInfo;

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_135.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3029_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_135MethodDeclarations.h"

extern TypeInfo UserProfile_t920_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3029_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m20072_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m20072(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.Impl.UserProfile>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.Impl.UserProfile>(System.Int32)
#define Array_InternalArray__get_Item_TisUserProfile_t920_m22121(__this, p0, method) (( UserProfile_t920 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17853_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUserProfile_t920_m22121_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4050_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4051_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4052_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4053_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IUserProfile>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IUserProfile>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IUserProfile>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IUserProfile>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IUserProfile>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IUserProfile>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IUserProfile>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4054_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IUserProfile>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4055_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IUserProfile>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IUserProfile>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_136.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3030_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IUserProfile>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_136MethodDeclarations.h"

extern TypeInfo IUserProfile_t1124_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3030_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IUserProfile>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IUserProfile>(System.Int32)
#define Array_InternalArray__get_Item_TisIUserProfile_t1124_m22132(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17858_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIUserProfile_t1124_m22132_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IUserProfile>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IUserProfile>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IUserProfile>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IUserProfile>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IUserProfile>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4056_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IUserProfile>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IUserProfile>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IUserProfile>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IUserProfile>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IUserProfile>::set_Item(System.Int32,T)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t928_il2cpp_TypeInfo;
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"



// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t3031_il2cpp_TypeInfo;
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Action_1__ctor_m17860_GenericMethod;
extern "C" void Action_1__ctor_m17860_gshared (Action_1_t3031 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern Il2CppGenericMethod Action_1_Invoke_m17861_GenericMethod;
extern "C" void Action_1_Invoke_m17861_gshared (Action_1_t3031 * __this, uint8_t ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m17861((Action_1_t3031 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, uint8_t ___obj, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, uint8_t ___obj, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Action_1_BeginInvoke_m17863_GenericMethod;
extern "C" Object_t * Action_1_BeginInvoke_m17863_gshared (Action_1_t3031 * __this, uint8_t ___obj, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Byte_t41_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Action_1_EndInvoke_m17865_GenericMethod;
extern "C" void Action_1_EndInvoke_m17865_gshared (Action_1_t3031 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t929_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4057_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_137.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3032_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_137MethodDeclarations.h"

extern TypeInfo IAchievementDescription_t1119_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3032_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievementDescription>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievementDescription>(System.Int32)
#define Array_InternalArray__get_Item_TisIAchievementDescription_t1119_m22143(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17873_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIAchievementDescription_t1119_m22143_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4058_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4059_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IAchievementDescription>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4060_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::set_Item(System.Int32,T)
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t930_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4061_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3033_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_138MethodDeclarations.h"

extern TypeInfo IAchievement_t941_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3033_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievement>(System.Int32)
#define Array_InternalArray__get_Item_TisIAchievement_t941_m22154(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17881_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIAchievement_t941_m22154_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4062_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4063_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IAchievement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4064_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::set_Item(System.Int32,T)
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t931_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4065_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IScore>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_139.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3034_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_139MethodDeclarations.h"

extern TypeInfo IScore_t946_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3034_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IScore>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IScore>(System.Int32)
#define Array_InternalArray__get_Item_TisIScore_t946_m22165(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17889_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIScore_t946_m22165_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4066_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4067_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IScore>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4068_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::set_Item(System.Int32,T)
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t932_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4069_il2cpp_TypeInfo;

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_140.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3035_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_140MethodDeclarations.h"

extern TypeInfo AchievementDescription_t923_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3035_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.Impl.AchievementDescription>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.Impl.AchievementDescription>(System.Int32)
#define Array_InternalArray__get_Item_TisAchievementDescription_t923_m22176(__this, p0, method) (( AchievementDescription_t923 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17897_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisAchievementDescription_t923_m22176_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4070_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4071_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4072_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t935_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderb.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_24.h"
// System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Predicate_1_gen_24.h"
// System.Collections.Generic.Comparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_24.h"
// System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Comparison_1_gen_24.h"
extern TypeInfo GcLeaderboard_t1044_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t1828_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1812_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t786_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3390_il2cpp_TypeInfo;
extern TypeInfo GcLeaderboardU5BU5D_t3036_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t1123_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3388_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3389_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t135_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3039_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3043_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3044_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_24MethodDeclarations.h"
// System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Predicate_1_gen_24MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_24MethodDeclarations.h"
extern Il2CppType List_1_t935_0_0_0;
extern Il2CppType ICollection_1_t3390_0_0_0;
extern Il2CppType GcLeaderboardU5BU5D_t3036_0_0_0;
extern Il2CppType Enumerator_t1123_0_0_0;
extern Il2CppType IEnumerable_1_t3388_0_0_0;
extern Il2CppType IEnumerator_1_t3389_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3039_0_0_0;
extern Il2CppType Predicate_1_t3043_0_0_0;
extern Il2CppType Comparer_1_t3044_0_0_0;
extern MethodInfo List_1_get_Item_m17943_MethodInfo;
extern MethodInfo List_1_set_Item_m17944_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4062_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3870_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23698_MethodInfo;
extern MethodInfo Array_Copy_m6433_MethodInfo;
extern MethodInfo List_1_Add_m5512_MethodInfo;
extern MethodInfo List_1_Contains_m17922_MethodInfo;
extern MethodInfo List_1_IndexOf_m17927_MethodInfo;
extern MethodInfo List_1_Insert_m17930_MethodInfo;
extern MethodInfo List_1_Remove_m17932_MethodInfo;
extern MethodInfo Math_Max_m9890_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23699_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23700_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23701_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m563_MethodInfo;
extern MethodInfo IDisposable_Dispose_m564_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m17954_MethodInfo;
extern MethodInfo Array_Clear_m6430_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m18029_MethodInfo;
extern MethodInfo Enumerator__ctor_m17950_MethodInfo;
extern MethodInfo List_1_RemoveAt_m17934_MethodInfo;
extern MethodInfo Array_Reverse_m6445_MethodInfo;
extern MethodInfo Array_Copy_m6432_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m20083_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t137** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m20083(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t137**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20083_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(!!0[]&,System.Int32)
#define Array_Resize_TisGcLeaderboard_t1044_m22198(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, GcLeaderboardU5BU5D_t3036**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20083_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_33.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10300_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t137* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10300(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t137*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10300_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisGcLeaderboard_t1044_m22200(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, GcLeaderboardU5BU5D_t3036*, GcLeaderboard_t1044 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10300_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20152_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t137* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m20152(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t137*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20152_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisGcLeaderboard_t1044_m22202(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, GcLeaderboardU5BU5D_t3036*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20152_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20336_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t137* p0, int32_t p1, Comparison_1_t2471 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m20336(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t137*, int32_t, Comparison_1_t2471 *, MethodInfo*))Array_Sort_TisObject_t_m20336_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisGcLeaderboard_t1044_m22210(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, GcLeaderboardU5BU5D_t3036*, int32_t, Comparison_1_t3046 *, MethodInfo*))Array_Sort_TisObject_t_m20336_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m17943_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m17944_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisGcLeaderboard_t1044_m22198_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m17929_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m17931_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m17918_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23698_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m17917_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m5519_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m5512_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m17922_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m17927_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m17930_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m17932_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m17916_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m17940_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m17941_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23699_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23700_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23701_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m17954_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisGcLeaderboard_t1044_m22200_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m17925_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m17926_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m18029_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17950_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m17928_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m17934_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m18035_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisGcLeaderboard_t1044_m22202_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisGcLeaderboard_t1044_m22210_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3037_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_141MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3037_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>(System.Int32)
#define Array_InternalArray__get_Item_TisGcLeaderboard_t1044_m22187(__this, p0, method) (( GcLeaderboard_t1044 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17949_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGcLeaderboard_t1044_m22187_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3038_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1831_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m3868_MethodInfo;
extern MethodInfo Object_GetType_m2357_MethodInfo;
extern MethodInfo Type_get_FullName_m5572_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m10087_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m17953_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_23MethodDeclarations.h"
extern Il2CppType IList_1_t3038_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m17983_MethodInfo;
extern MethodInfo IList_1_get_Item_m23702_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23703_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23704_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m17983_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23702_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m18015_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23703_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23704_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3040_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t3040_0_0_0;
extern Il2CppType GcLeaderboard_t1044_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23705_MethodInfo;
extern MethodInfo Collection_1_SetItem_m18014_MethodInfo;
extern MethodInfo List_1__ctor_m5507_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m18007_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m18005_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m18010_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m18001_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23706_MethodInfo;
extern MethodInfo IList_1_Insert_m23707_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23708_MethodInfo;
extern MethodInfo IList_1_set_Item_m23709_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23705_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m18018_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m18019_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m18016_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m18014_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m5507_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m18007_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m18017_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m18005_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m18010_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m18001_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23706_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23707_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23708_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23709_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3041_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_33MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_34.h"
extern TypeInfo IEquatable_1_t4073_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3042_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_34MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3041_0_0_0;
extern Il2CppType IEquatable_1_t4073_0_0_0;
extern Il2CppType DefaultComparer_t3042_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18025_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23710_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22199_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18025_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23710_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22199_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4074_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m18020_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_25.h"
extern TypeInfo IComparable_1_t3553_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3045_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_25MethodDeclarations.h"
extern Il2CppType IComparable_1_t3553_0_0_0;
extern Il2CppType DefaultComparer_t3045_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18036_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23711_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18036_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23711_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3552_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m22208_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m18032_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22208_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3046_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Comparison_1_gen_24MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4075_il2cpp_TypeInfo;

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_142.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3047_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_142MethodDeclarations.h"

extern TypeInfo GcAchievementData_t924_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3047_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
extern "C" GcAchievementData_t924  Array_InternalArray__get_Item_TisGcAchievementData_t924_m22213_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisGcAchievementData_t924_m22213(__this, p0, method) (( GcAchievementData_t924  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisGcAchievementData_t924_m22213_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18046_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGcAchievementData_t924_m22213_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18042_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18042_gshared (InternalEnumerator_1_t3047 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18043_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18043_gshared (InternalEnumerator_1_t3047 * __this, MethodInfo* method)
{
	{
		GcAchievementData_t924  L_0 = (( GcAchievementData_t924  (*) (InternalEnumerator_1_t3047 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		GcAchievementData_t924  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18044_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18044_gshared (InternalEnumerator_1_t3047 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18045_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18045_gshared (InternalEnumerator_1_t3047 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_Current()
extern "C" GcAchievementData_t924  InternalEnumerator_1_get_Current_m18046_gshared (InternalEnumerator_1_t3047 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		GcAchievementData_t924  L_8 = (( GcAchievementData_t924  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4076_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4077_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4078_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4079_il2cpp_TypeInfo;

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.Impl.Achievement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Achievement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_143.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3048_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Achievement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_143MethodDeclarations.h"

extern TypeInfo Achievement_t925_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3048_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.Impl.Achievement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.Impl.Achievement>(System.Int32)
#define Array_InternalArray__get_Item_TisAchievement_t925_m22224(__this, p0, method) (( Achievement_t925 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18051_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisAchievement_t925_m22224_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Achievement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Achievement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Achievement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Achievement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Achievement>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4080_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Achievement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Achievement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Achievement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Achievement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Achievement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Achievement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Achievement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4081_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.Impl.Achievement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4082_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Achievement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Achievement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Achievement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Achievement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Achievement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4083_il2cpp_TypeInfo;

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_144.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3049_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_144MethodDeclarations.h"

extern TypeInfo GcScoreData_t926_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3049_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
extern "C" GcScoreData_t926  Array_InternalArray__get_Item_TisGcScoreData_t926_m22235_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisGcScoreData_t926_m22235(__this, p0, method) (( GcScoreData_t926  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisGcScoreData_t926_m22235_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18056_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGcScoreData_t926_m22235_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18052_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18052_gshared (InternalEnumerator_1_t3049 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18053_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18053_gshared (InternalEnumerator_1_t3049 * __this, MethodInfo* method)
{
	{
		GcScoreData_t926  L_0 = (( GcScoreData_t926  (*) (InternalEnumerator_1_t3049 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		GcScoreData_t926  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18054_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18054_gshared (InternalEnumerator_1_t3049 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18055_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18055_gshared (InternalEnumerator_1_t3049 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_Current()
extern "C" GcScoreData_t926  InternalEnumerator_1_get_Current_m18056_gshared (InternalEnumerator_1_t3049 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		GcScoreData_t926  L_8 = (( GcScoreData_t926  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4084_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4085_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4086_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4087_il2cpp_TypeInfo;

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.Impl.Score>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Score>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_145.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3050_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Score>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_145MethodDeclarations.h"

extern TypeInfo Score_t927_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3050_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.Impl.Score>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.Impl.Score>(System.Int32)
#define Array_InternalArray__get_Item_TisScore_t927_m22246(__this, p0, method) (( Score_t927 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20072_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18061_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisScore_t927_m22246_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Score>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Score>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Score>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Score>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.Impl.Score>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4088_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Score>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Score>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Score>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Score>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Score>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Score>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.Impl.Score>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4089_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.Impl.Score>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4090_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Score>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Score>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Score>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Score>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.Impl.Score>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4091_il2cpp_TypeInfo;

// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_146.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3051_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_146MethodDeclarations.h"

extern TypeInfo HitInfo_t950_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3051_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C" HitInfo_t950  Array_InternalArray__get_Item_TisHitInfo_t950_m22257_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisHitInfo_t950_m22257(__this, p0, method) (( HitInfo_t950  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisHitInfo_t950_m22257_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18066_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisHitInfo_t950_m22257_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18062_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18062_gshared (InternalEnumerator_1_t3051 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18063_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18063_gshared (InternalEnumerator_1_t3051 * __this, MethodInfo* method)
{
	{
		HitInfo_t950  L_0 = (( HitInfo_t950  (*) (InternalEnumerator_1_t3051 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		HitInfo_t950  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18064_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18064_gshared (InternalEnumerator_1_t3051 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18065_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18065_gshared (InternalEnumerator_1_t3051 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m947(L_1, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
extern "C" HitInfo_t950  InternalEnumerator_1_get_Current_m18066_gshared (InternalEnumerator_1_t3051 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t784 * L_1 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_1, (String_t*) &_stringLiteral1115, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t784 * L_3 = (InvalidOperationException_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3860(L_3, (String_t*) &_stringLiteral1116, /*hidden argument*/&InvalidOperationException__ctor_m3860_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m947(L_5, /*hidden argument*/&Array_get_Length_m947_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		HitInfo_t950  L_8 = (( HitInfo_t950  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4092_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4093_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SendMouseEvents/HitInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4094_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t964_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"

// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_31.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_14.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_34.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_35.h"
extern TypeInfo Event_t397_il2cpp_TypeInfo;
extern TypeInfo TextEditOp_t962_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3054_il2cpp_TypeInfo;
extern TypeInfo Link_t1367_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1377_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3060_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3391_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3056_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3445_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t134_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3055_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3064_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3062_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3066_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3067_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t220_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2210_il2cpp_TypeInfo;
extern TypeInfo EventU5BU5D_t3052_il2cpp_TypeInfo;
extern TypeInfo TextEditOpU5BU5D_t3053_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t74_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3069_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t4095_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_31MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_14MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_34MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_35MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType Dictionary_2_t964_0_0_0;
extern Il2CppType IEqualityComparer_1_t3054_0_0_0;
extern Il2CppType ValueCollection_t3060_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3391_0_0_0;
extern Il2CppType KeyValuePair_2_t3056_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3445_0_0_0;
extern Il2CppType Transform_1_t3055_0_0_0;
extern Il2CppType Transform_1_t3064_0_0_0;
extern Il2CppType Enumerator_t3062_0_0_0;
extern Il2CppType ShimEnumerator_t3066_0_0_0;
extern Il2CppType EqualityComparer_1_t3067_0_0_0;
extern Il2CppType Int32U5BU5D_t220_0_0_0;
extern Il2CppType LinkU5BU5D_t2210_0_0_0;
extern Il2CppType EventU5BU5D_t3052_0_0_0;
extern Il2CppType TextEditOpU5BU5D_t3053_0_0_0;
extern Il2CppType EqualityComparer_1_t3069_0_0_0;
extern Il2CppType IEqualityComparer_1_t4095_0_0_0;
extern Il2CppType Event_t397_0_0_0;
extern Il2CppType TextEditOp_t962_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m18098_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m18087_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m18088_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m23712_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m23713_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7051_MethodInfo;
extern MethodInfo ValueCollection__ctor_m18131_MethodInfo;
extern MethodInfo Dictionary_2_Add_m18096_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m18102_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m18109_MethodInfo;
extern MethodInfo Transform_1__ctor_m18166_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m18092_MethodInfo;
extern MethodInfo Transform_1__ctor_m18170_MethodInfo;
extern MethodInfo Enumerator__ctor_m18150_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m18178_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18086_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18110_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m7223_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m23714_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3879_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m3895_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m3894_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m3880_MethodInfo;
extern MethodInfo Type_ToString_m6514_MethodInfo;
extern MethodInfo String_Concat_m140_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3867_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m18103_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23715_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m3861_MethodInfo;
struct Dictionary_2_t964;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m22303 (Dictionary_2_t964 * __this, DictionaryEntryU5BU5D_t3445* p0, int32_t p1, Transform_1_t3055 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t964;
struct Dictionary_2_t2509;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3056_m22306_gshared (Dictionary_2_t2509 * __this, Array_t * p0, int32_t p1, Transform_1_t3065 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3056_m22306(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, Transform_1_t3065 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3056_m22306_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3056_m22305(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t964 *, Array_t *, int32_t, Transform_1_t3064 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3056_m22306_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t964;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3056_TisKeyValuePair_2_t3056_m22308 (Dictionary_2_t964 * __this, KeyValuePair_2U5BU5D_t3391* p0, int32_t p1, Transform_1_t3064 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m18098_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m18105_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m18087_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m18106_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m18088_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m23712_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m23713_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m18095_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m18131_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m18089_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m18096_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m18102_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18111_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18113_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m18107_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m18094_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18091_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m18109_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18166_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t134_TisDictionaryEntry_t134_m22303_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m18092_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18170_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3056_m22305_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18150_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m18178_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m18188_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m18090_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18086_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18110_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3056_TisKeyValuePair_2_t3056_m22308_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m18196_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m23714_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m18103_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23715_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4096_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4097_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::GetEnumerator()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
