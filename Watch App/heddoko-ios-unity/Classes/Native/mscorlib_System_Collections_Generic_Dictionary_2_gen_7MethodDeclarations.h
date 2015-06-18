#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t649;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t2971;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2316;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3380;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t3381;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t133;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"
#define Dictionary_2__ctor_m17271(__this, method) (( void (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2__ctor_m12937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m3926(__this, ___comparer, method) (( void (*) (Dictionary_2_t649 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12939_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17272(__this, ___capacity, method) (( void (*) (Dictionary_2_t649 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12941_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17273(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t649 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2__ctor_m12943_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17274(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t649 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12945_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17275(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t649 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12947_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17276(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t649 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12949_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17277(__this, ___key, method) (( void (*) (Dictionary_2_t649 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12951_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17278(__this, method) (( bool (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12953_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17279(__this, method) (( Object_t * (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12955_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17280(__this, method) (( bool (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12957_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17281(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t649 *, KeyValuePair_2_t2969 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12959_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17282(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t649 *, KeyValuePair_2_t2969 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12961_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17283(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t649 *, KeyValuePair_2U5BU5D_t3380*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12963_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17284(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t649 *, KeyValuePair_2_t2969 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12965_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17285(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t649 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12967_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17286(__this, method) (( Object_t * (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12969_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17287(__this, method) (( Object_t* (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12971_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17288(__this, method) (( Object_t * (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12973_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m17289(__this, method) (( int32_t (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_get_Count_m12975_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m17290(__this, ___key, method) (( bool (*) (Dictionary_2_t649 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m12976_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m17291(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t649 *, String_t*, bool, MethodInfo*))Dictionary_2_set_Item_m12977_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17292(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t649 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12979_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17293(__this, ___size, method) (( void (*) (Dictionary_2_t649 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12981_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17294(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t649 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12983_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17295(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2969  (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_make_pair_m12985_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17296(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_pick_value_m12987_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17297(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t649 *, KeyValuePair_2U5BU5D_t3380*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12989_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m17298(__this, method) (( void (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_Resize_m12991_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m3927(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t649 *, String_t*, bool, MethodInfo*))Dictionary_2_Add_m12992_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m17299(__this, method) (( void (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_Clear_m12993_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17300(__this, ___key, method) (( bool (*) (Dictionary_2_t649 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m12994_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17301(__this, ___value, method) (( bool (*) (Dictionary_2_t649 *, bool, MethodInfo*))Dictionary_2_ContainsValue_m12996_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17302(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t649 *, SerializationInfo_t612 *, StreamingContext_t614 , MethodInfo*))Dictionary_2_GetObjectData_m12998_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17303(__this, ___sender, method) (( void (*) (Dictionary_2_t649 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m13000_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m17304(__this, ___key, method) (( bool (*) (Dictionary_2_t649 *, String_t*, MethodInfo*))Dictionary_2_Remove_m13002_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m17305(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t649 *, String_t*, bool*, MethodInfo*))Dictionary_2_TryGetValue_m13004_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m17306(__this, method) (( ValueCollection_t2971 * (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_get_Values_m13006_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17307(__this, ___key, method) (( String_t* (*) (Dictionary_2_t649 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m13008_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17308(__this, ___value, method) (( bool (*) (Dictionary_2_t649 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m13010_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17309(__this, ___pair, method) (( bool (*) (Dictionary_2_t649 *, KeyValuePair_2_t2969 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13012_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m17310(__this, method) (( Enumerator_t2973  (*) (Dictionary_2_t649 *, MethodInfo*))Dictionary_2_GetEnumerator_m13014_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17311(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t134  (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13016_gshared)(__this /* static, unused */, ___key, ___value, method)
