#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t10;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t2545;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2316;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t3296;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t3297;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t133;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
#define Dictionary_2__ctor_m129(__this, method) (( void (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2__ctor_m12706_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m12707(__this, ___comparer, method) (( void (*) (Dictionary_2_t10 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12708_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m12709(__this, ___capacity, method) (( void (*) (Dictionary_2_t10 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12710_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m12711(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t10 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2__ctor_m12712_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12713(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t10 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12714_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12715(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t10 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12716_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m12717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t10 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12718_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m12719(__this, ___key, method) (( void (*) (Dictionary_2_t10 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12720_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12721(__this, method) (( bool (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12722_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12723(__this, method) (( Object_t * (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12724_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12725(__this, method) (( bool (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12726_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12727(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t10 *, KeyValuePair_2_t2543 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12728_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12729(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t10 *, KeyValuePair_2_t2543 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12730_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12731(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t10 *, KeyValuePair_2U5BU5D_t3296*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12732_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12733(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t10 *, KeyValuePair_2_t2543 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12734_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12735(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t10 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12736_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12737(__this, method) (( Object_t * (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12738_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12739(__this, method) (( Object_t* (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12740_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12741(__this, method) (( Object_t * (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12742_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
#define Dictionary_2_get_Count_m12743(__this, method) (( int32_t (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_get_Count_m12744_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m139(__this, ___key, method) (( String_t* (*) (Dictionary_2_t10 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m12745_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m12746(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t10 *, String_t*, String_t*, MethodInfo*))Dictionary_2_set_Item_m12747_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m12748(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t10 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12749_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m12750(__this, ___size, method) (( void (*) (Dictionary_2_t10 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12751_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m12752(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t10 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12753_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m12754(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2543  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_make_pair_m12755_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m12756(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_pick_value_m12757_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m12758(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t10 *, KeyValuePair_2U5BU5D_t3296*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12759_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
#define Dictionary_2_Resize_m12760(__this, method) (( void (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_Resize_m12761_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m158(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t10 *, String_t*, String_t*, MethodInfo*))Dictionary_2_Add_m12762_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
#define Dictionary_2_Clear_m12763(__this, method) (( void (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_Clear_m12764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m138(__this, ___key, method) (( bool (*) (Dictionary_2_t10 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m12765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m12766(__this, ___value, method) (( bool (*) (Dictionary_2_t10 *, String_t*, MethodInfo*))Dictionary_2_ContainsValue_m12767_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m12768(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t10 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2_GetObjectData_m12769_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m12770(__this, ___sender, method) (( void (*) (Dictionary_2_t10 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12771_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m12772(__this, ___key, method) (( bool (*) (Dictionary_2_t10 *, String_t*, MethodInfo*))Dictionary_2_Remove_m12773_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m12774(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t10 *, String_t*, String_t**, MethodInfo*))Dictionary_2_TryGetValue_m12775_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
#define Dictionary_2_get_Values_m12776(__this, method) (( ValueCollection_t2545 * (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_get_Values_m12777_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m12778(__this, ___key, method) (( String_t* (*) (Dictionary_2_t10 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12779_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m12780(__this, ___value, method) (( String_t* (*) (Dictionary_2_t10 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12781_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m12782(__this, ___pair, method) (( bool (*) (Dictionary_2_t10 *, KeyValuePair_2_t2543 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12783_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m12784(__this, method) (( Enumerator_t2547  (*) (Dictionary_2_t10 *, MethodInfo*))Dictionary_2_GetEnumerator_m12785_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m12786(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t134  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12787_gshared)(__this /* static, unused */, ___key, ___value, method)
