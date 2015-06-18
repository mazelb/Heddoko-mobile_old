#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t9;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t2525;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2316;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3291;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t3292;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t133;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
#define Dictionary_2__ctor_m128(__this, method) (( void (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2__ctor_m12482_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m12483(__this, ___comparer, method) (( void (*) (Dictionary_2_t9 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12484_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m3937(__this, ___capacity, method) (( void (*) (Dictionary_2_t9 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12485_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m12486(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2__ctor_m12487_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12488(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12489_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12490(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12491_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m12492(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12493_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m12494(__this, ___key, method) (( void (*) (Dictionary_2_t9 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12495_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12496(__this, method) (( bool (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12498(__this, method) (( Object_t * (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12500(__this, method) (( bool (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12501_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12502(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t9 *, KeyValuePair_2_t2523 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12503_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12504(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9 *, KeyValuePair_2_t2523 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12505_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12506(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9 *, KeyValuePair_2U5BU5D_t3291*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12507_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12508(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9 *, KeyValuePair_2_t2523 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12509_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12510(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12511_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12512(__this, method) (( Object_t * (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12513_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12514(__this, method) (( Object_t* (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12515_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12516(__this, method) (( Object_t * (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12517_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m12518(__this, method) (( int32_t (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_get_Count_m12519_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m143(__this, ___key, method) (( int32_t (*) (Dictionary_2_t9 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m12520_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m12521(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9 *, String_t*, int32_t, MethodInfo*))Dictionary_2_set_Item_m12522_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m12523(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t9 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12524_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m12525(__this, ___size, method) (( void (*) (Dictionary_2_t9 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12526_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m12527(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12528_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m12529(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2523  (*) (Object_t * /* static, unused */, String_t*, int32_t, MethodInfo*))Dictionary_2_make_pair_m12530_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m12531(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, MethodInfo*))Dictionary_2_pick_value_m12532_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m12533(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9 *, KeyValuePair_2U5BU5D_t3291*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12534_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m12535(__this, method) (( void (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_Resize_m12536_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m137(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9 *, String_t*, int32_t, MethodInfo*))Dictionary_2_Add_m12537_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m136(__this, method) (( void (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_Clear_m12538_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m142(__this, ___key, method) (( bool (*) (Dictionary_2_t9 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m12539_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m12540(__this, ___value, method) (( bool (*) (Dictionary_2_t9 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m12541_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m12542(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2_GetObjectData_m12543_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m12544(__this, ___sender, method) (( void (*) (Dictionary_2_t9 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12545_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m12546(__this, ___key, method) (( bool (*) (Dictionary_2_t9 *, String_t*, MethodInfo*))Dictionary_2_Remove_m12547_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m3938(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t9 *, String_t*, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m12548_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m12549(__this, method) (( ValueCollection_t2525 * (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_get_Values_m12550_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m12551(__this, ___key, method) (( String_t* (*) (Dictionary_2_t9 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12552_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m12553(__this, ___value, method) (( int32_t (*) (Dictionary_2_t9 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12554_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m12555(__this, ___pair, method) (( bool (*) (Dictionary_2_t9 *, KeyValuePair_2_t2523 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12556_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m12557(__this, method) (( Enumerator_t2527  (*) (Dictionary_2_t9 *, MethodInfo*))Dictionary_2_GetEnumerator_m12558_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m12559(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t134  (*) (Object_t * /* static, unused */, String_t*, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12560_gshared)(__this /* static, unused */, ___key, ___value, method)
