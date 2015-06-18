#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2509;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2513;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2507;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3293;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3294;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t133;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12482_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m12482(__this, method) (( void (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2__ctor_m12482_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12484_gshared (Dictionary_2_t2509 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m12484(__this, ___comparer, method) (( void (*) (Dictionary_2_t2509 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12484_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12485_gshared (Dictionary_2_t2509 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m12485(__this, ___capacity, method) (( void (*) (Dictionary_2_t2509 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12485_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12487_gshared (Dictionary_2_t2509 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m12487(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2509 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2__ctor_m12487_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12489_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12489(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12489_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12491_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12491(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2509 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12491_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12493_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12493(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2509 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12493_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12495_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12495(__this, ___key, method) (( void (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12495_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12497_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12497(__this, method) (( bool (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12499_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12499(__this, method) (( Object_t * (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12501_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12501(__this, method) (( bool (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12501_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12503_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2_t2510  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12503(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2509 *, KeyValuePair_2_t2510 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12503_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12505_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2_t2510  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12505(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2509 *, KeyValuePair_2_t2510 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12505_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12507_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2U5BU5D_t3293* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12507(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2509 *, KeyValuePair_2U5BU5D_t3293*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12507_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12509_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2_t2510  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12509(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2509 *, KeyValuePair_2_t2510 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12509_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12511_gshared (Dictionary_2_t2509 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12511(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12511_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12513_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12513(__this, method) (( Object_t * (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12513_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12515_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12515(__this, method) (( Object_t* (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12515_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12517_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12517(__this, method) (( Object_t * (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12517_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12519_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m12519(__this, method) (( int32_t (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_get_Count_m12519_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12520_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m12520(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m12520_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12522_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m12522(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2509 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_set_Item_m12522_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12524_gshared (Dictionary_2_t2509 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m12524(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2509 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12524_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12526_gshared (Dictionary_2_t2509 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m12526(__this, ___size, method) (( void (*) (Dictionary_2_t2509 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12526_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12528_gshared (Dictionary_2_t2509 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12528(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2509 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12528_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2510  Dictionary_2_make_pair_m12530_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m12530(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2510  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_make_pair_m12530_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12532_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m12532(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_pick_value_m12532_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12534_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2U5BU5D_t3293* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m12534(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2509 *, KeyValuePair_2U5BU5D_t3293*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12534_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12536_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m12536(__this, method) (( void (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_Resize_m12536_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12537_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m12537(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2509 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_Add_m12537_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12538_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m12538(__this, method) (( void (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_Clear_m12538_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12539_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m12539(__this, ___key, method) (( bool (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m12539_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12541_gshared (Dictionary_2_t2509 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m12541(__this, ___value, method) (( bool (*) (Dictionary_2_t2509 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m12541_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12543_gshared (Dictionary_2_t2509 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m12543(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2509 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2_GetObjectData_m12543_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12545_gshared (Dictionary_2_t2509 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12545(__this, ___sender, method) (( void (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12545_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12547_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m12547(__this, ___key, method) (( bool (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m12547_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12548_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m12548(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2509 *, Object_t *, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m12548_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2513 * Dictionary_2_get_Values_m12550_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m12550(__this, method) (( ValueCollection_t2513 * (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_get_Values_m12550_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12552_gshared (Dictionary_2_t2509 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m12552(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12552_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12554_gshared (Dictionary_2_t2509 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m12554(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2509 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12554_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12556_gshared (Dictionary_2_t2509 * __this, KeyValuePair_2_t2510  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12556(__this, ___pair, method) (( bool (*) (Dictionary_2_t2509 *, KeyValuePair_2_t2510 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12556_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2515  Dictionary_2_GetEnumerator_m12558_gshared (Dictionary_2_t2509 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12558(__this, method) (( Enumerator_t2515  (*) (Dictionary_2_t2509 *, MethodInfo*))Dictionary_2_GetEnumerator_m12558_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t134  Dictionary_2_U3CCopyToU3Em__0_m12560_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12560(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t134  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12560_gshared)(__this /* static, unused */, ___key, ___value, method)
