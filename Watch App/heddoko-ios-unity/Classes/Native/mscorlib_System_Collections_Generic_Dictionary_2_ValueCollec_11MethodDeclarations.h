#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t2545;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t10;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3285;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.String[]
struct StringU5BU5D_t17;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_9MethodDeclarations.h"
#define ValueCollection__ctor_m12859(__this, ___dictionary, method) (( void (*) (ValueCollection_t2545 *, Dictionary_2_t10 *, MethodInfo*))ValueCollection__ctor_m12799_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12860(__this, ___item, method) (( void (*) (ValueCollection_t2545 *, String_t*, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12800_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12861(__this, method) (( void (*) (ValueCollection_t2545 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12862(__this, ___item, method) (( bool (*) (ValueCollection_t2545 *, String_t*, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12863(__this, ___item, method) (( bool (*) (ValueCollection_t2545 *, String_t*, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12803_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12864(__this, method) (( Object_t* (*) (ValueCollection_t2545 *, MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m12865(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2545 *, Array_t *, int32_t, MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m12805_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12866(__this, method) (( Object_t * (*) (ValueCollection_t2545 *, MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12806_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12867(__this, method) (( bool (*) (ValueCollection_t2545 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12807_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12868(__this, method) (( bool (*) (ValueCollection_t2545 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12808_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m12869(__this, method) (( Object_t * (*) (ValueCollection_t2545 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m12809_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m12870(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2545 *, StringU5BU5D_t17*, int32_t, MethodInfo*))ValueCollection_CopyTo_m12810_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::GetEnumerator()
#define ValueCollection_GetEnumerator_m12871(__this, method) (( Enumerator_t2546  (*) (ValueCollection_t2545 *, MethodInfo*))ValueCollection_GetEnumerator_m12811_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::get_Count()
#define ValueCollection_get_Count_m12872(__this, method) (( int32_t (*) (ValueCollection_t2545 *, MethodInfo*))ValueCollection_get_Count_m12812_gshared)(__this, method)
