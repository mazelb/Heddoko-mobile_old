#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2534;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2537;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2507;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3298;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3299;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t133;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12706_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m12706(__this, method) (( void (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2__ctor_m12706_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12708_gshared (Dictionary_2_t2534 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m12708(__this, ___comparer, method) (( void (*) (Dictionary_2_t2534 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12708_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12710_gshared (Dictionary_2_t2534 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m12710(__this, ___capacity, method) (( void (*) (Dictionary_2_t2534 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12710_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12712_gshared (Dictionary_2_t2534 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m12712(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2534 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2__ctor_m12712_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12714_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12714(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12714_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12716_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12716(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2534 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12716_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12718_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12718(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2534 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12718_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12720_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12720(__this, ___key, method) (( void (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12720_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12722_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12722(__this, method) (( bool (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12722_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12724_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12724(__this, method) (( Object_t * (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12724_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12726_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12726(__this, method) (( bool (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12726_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12728_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2_t2535  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12728(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2534 *, KeyValuePair_2_t2535 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12728_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12730_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2_t2535  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12730(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2534 *, KeyValuePair_2_t2535 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12730_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12732_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2U5BU5D_t3298* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12732(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2534 *, KeyValuePair_2U5BU5D_t3298*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12732_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12734_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2_t2535  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12734(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2534 *, KeyValuePair_2_t2535 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12734_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12736_gshared (Dictionary_2_t2534 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12736(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12736_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12738_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12738(__this, method) (( Object_t * (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12738_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12740_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12740(__this, method) (( Object_t* (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12740_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12742_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12742(__this, method) (( Object_t * (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12742_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12744_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m12744(__this, method) (( int32_t (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_get_Count_m12744_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12745_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m12745(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m12745_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12747_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m12747(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2534 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_set_Item_m12747_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12749_gshared (Dictionary_2_t2534 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m12749(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2534 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12749_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12751_gshared (Dictionary_2_t2534 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m12751(__this, ___size, method) (( void (*) (Dictionary_2_t2534 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12751_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12753_gshared (Dictionary_2_t2534 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12753(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2534 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12753_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2535  Dictionary_2_make_pair_m12755_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m12755(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2535  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_make_pair_m12755_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12757_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m12757(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_value_m12757_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12759_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2U5BU5D_t3298* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m12759(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2534 *, KeyValuePair_2U5BU5D_t3298*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12759_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12761_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m12761(__this, method) (( void (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_Resize_m12761_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12762_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m12762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2534 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_Add_m12762_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12764_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m12764(__this, method) (( void (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_Clear_m12764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12765_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m12765(__this, ___key, method) (( bool (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m12765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12767_gshared (Dictionary_2_t2534 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m12767(__this, ___value, method) (( bool (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m12767_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12769_gshared (Dictionary_2_t2534 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m12769(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2534 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2_GetObjectData_m12769_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12771_gshared (Dictionary_2_t2534 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12771(__this, ___sender, method) (( void (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12771_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12773_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m12773(__this, ___key, method) (( bool (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m12773_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12775_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m12775(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2534 *, Object_t *, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m12775_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2537 * Dictionary_2_get_Values_m12777_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m12777(__this, method) (( ValueCollection_t2537 * (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_get_Values_m12777_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12779_gshared (Dictionary_2_t2534 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m12779(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12779_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12781_gshared (Dictionary_2_t2534 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m12781(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2534 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12781_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12783_gshared (Dictionary_2_t2534 * __this, KeyValuePair_2_t2535  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12783(__this, ___pair, method) (( bool (*) (Dictionary_2_t2534 *, KeyValuePair_2_t2535 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12783_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2539  Dictionary_2_GetEnumerator_m12785_gshared (Dictionary_2_t2534 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12785(__this, method) (( Enumerator_t2539  (*) (Dictionary_2_t2534 *, MethodInfo*))Dictionary_2_GetEnumerator_m12785_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t134  Dictionary_2_U3CCopyToU3Em__0_m12787_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12787(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t134  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12787_gshared)(__this /* static, unused */, ___key, ___value, method)
