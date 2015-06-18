#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2719;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2722;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2716;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3335;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3336;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t133;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14688_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m14688(__this, method) (( void (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2__ctor_m14688_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14690_gshared (Dictionary_2_t2719 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14690(__this, ___comparer, method) (( void (*) (Dictionary_2_t2719 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14690_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14692_gshared (Dictionary_2_t2719 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m14692(__this, ___capacity, method) (( void (*) (Dictionary_2_t2719 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14692_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14694_gshared (Dictionary_2_t2719 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m14694(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2719 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2__ctor_m14694_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14696_gshared (Dictionary_2_t2719 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14696(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2719 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14696_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14698_gshared (Dictionary_2_t2719 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14698(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2719 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14698_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14700_gshared (Dictionary_2_t2719 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14700(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2719 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14700_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14702_gshared (Dictionary_2_t2719 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14702(__this, ___key, method) (( void (*) (Dictionary_2_t2719 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14702_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14704_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14704(__this, method) (( bool (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14704_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14706_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14706(__this, method) (( Object_t * (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14706_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14708_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14708(__this, method) (( bool (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14708_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14710_gshared (Dictionary_2_t2719 * __this, KeyValuePair_2_t2720  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14710(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2719 *, KeyValuePair_2_t2720 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14710_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14712_gshared (Dictionary_2_t2719 * __this, KeyValuePair_2_t2720  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14712(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2719 *, KeyValuePair_2_t2720 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14712_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14714_gshared (Dictionary_2_t2719 * __this, KeyValuePair_2U5BU5D_t3335* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14714(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2719 *, KeyValuePair_2U5BU5D_t3335*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14714_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14716_gshared (Dictionary_2_t2719 * __this, KeyValuePair_2_t2720  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14716(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2719 *, KeyValuePair_2_t2720 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14716_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14718_gshared (Dictionary_2_t2719 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14718(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2719 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14718_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14720_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14720(__this, method) (( Object_t * (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14720_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14722_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14722(__this, method) (( Object_t* (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14722_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14724_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14724(__this, method) (( Object_t * (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14724_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14726_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m14726(__this, method) (( int32_t (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_get_Count_m14726_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14728_gshared (Dictionary_2_t2719 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m14728(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2719 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m14728_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14730_gshared (Dictionary_2_t2719 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m14730(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2719 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m14730_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14732_gshared (Dictionary_2_t2719 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m14732(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2719 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14732_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14734_gshared (Dictionary_2_t2719 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m14734(__this, ___size, method) (( void (*) (Dictionary_2_t2719 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14734_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14736_gshared (Dictionary_2_t2719 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14736(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2719 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14736_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2720  Dictionary_2_make_pair_m14738_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m14738(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2720  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m14738_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14740_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m14740(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m14740_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14742_gshared (Dictionary_2_t2719 * __this, KeyValuePair_2U5BU5D_t3335* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m14742(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2719 *, KeyValuePair_2U5BU5D_t3335*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14742_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14744_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m14744(__this, method) (( void (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_Resize_m14744_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14745_gshared (Dictionary_2_t2719 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m14745(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2719 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_Add_m14745_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14746_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m14746(__this, method) (( void (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_Clear_m14746_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14748_gshared (Dictionary_2_t2719 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m14748(__this, ___key, method) (( bool (*) (Dictionary_2_t2719 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m14748_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14750_gshared (Dictionary_2_t2719 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m14750(__this, ___value, method) (( bool (*) (Dictionary_2_t2719 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m14750_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14752_gshared (Dictionary_2_t2719 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m14752(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2719 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2_GetObjectData_m14752_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14754_gshared (Dictionary_2_t2719 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14754(__this, ___sender, method) (( void (*) (Dictionary_2_t2719 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14754_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14755_gshared (Dictionary_2_t2719 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m14755(__this, ___key, method) (( bool (*) (Dictionary_2_t2719 *, int32_t, MethodInfo*))Dictionary_2_Remove_m14755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14756_gshared (Dictionary_2_t2719 * __this, int32_t ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m14756(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2719 *, int32_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m14756_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2722 * Dictionary_2_get_Values_m14757_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m14757(__this, method) (( ValueCollection_t2722 * (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_get_Values_m14757_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m14759_gshared (Dictionary_2_t2719 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m14759(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2719 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14759_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14761_gshared (Dictionary_2_t2719 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m14761(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2719 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14761_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14763_gshared (Dictionary_2_t2719 * __this, KeyValuePair_2_t2720  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14763(__this, ___pair, method) (( bool (*) (Dictionary_2_t2719 *, KeyValuePair_2_t2720 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14763_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2724  Dictionary_2_GetEnumerator_m14764_gshared (Dictionary_2_t2719 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14764(__this, method) (( Enumerator_t2724  (*) (Dictionary_2_t2719 *, MethodInfo*))Dictionary_2_GetEnumerator_m14764_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t134  Dictionary_2_U3CCopyToU3Em__0_m14766_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14766(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t134  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14766_gshared)(__this /* static, unused */, ___key, ___value, method)
