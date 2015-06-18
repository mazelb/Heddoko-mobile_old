#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t220;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Int64[]
struct Int64U5BU5D_t1255;
// System.Collections.IComparer
struct IComparer_t605;
// System.Array/Swapper
struct Swapper_t1254;
// System.Double[]
struct DoubleU5BU5D_t1256;
// System.Char[]
struct CharU5BU5D_t45;

// System.Void System.Array::.ctor()
extern "C" void Array__ctor_m6375 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Array_System_Collections_IList_get_Item_m6376 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Array_System_Collections_IList_set_Item_m6377 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
extern "C" int32_t Array_System_Collections_IList_Add_m6378 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
extern "C" void Array_System_Collections_IList_Clear_m6379 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
extern "C" bool Array_System_Collections_IList_Contains_m6380 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Array_System_Collections_IList_IndexOf_m6381 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Array_System_Collections_IList_Insert_m6382 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
extern "C" void Array_System_Collections_IList_Remove_m6383 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void Array_System_Collections_IList_RemoveAt_m6384 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
extern "C" int32_t Array_System_Collections_ICollection_get_Count_m6385 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
extern "C" int32_t Array_InternalArray__ICollection_get_Count_m6386 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
extern "C" bool Array_InternalArray__ICollection_get_IsReadOnly_m6387 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
extern "C" void Array_InternalArray__ICollection_Clear_m6388 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
extern "C" void Array_InternalArray__RemoveAt_m6389 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C" int32_t Array_get_Length_m947 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
extern "C" int64_t Array_get_LongLength_m6390 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
extern "C" int32_t Array_get_Rank_m3872 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
extern "C" int32_t Array_GetRank_m6391 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C" int32_t Array_GetLength_m6392 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
extern "C" int64_t Array_GetLongLength_m6393 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
extern "C" int32_t Array_GetLowerBound_m6394 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
extern "C" Object_t * Array_GetValue_m6395 (Array_t * __this, Int32U5BU5D_t220* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
extern "C" void Array_SetValue_m6396 (Array_t * __this, Object_t * ___value, Int32U5BU5D_t220* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
extern "C" Object_t * Array_GetValueImpl_m6397 (Array_t * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
extern "C" void Array_SetValueImpl_m6398 (Array_t * __this, Object_t * ___value, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" bool Array_FastCopy_m6399 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___source_idx, Array_t * ___dest, int32_t ___dest_idx, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
extern "C" Array_t * Array_CreateInstanceImpl_m6400 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t220* ___lengths, Int32U5BU5D_t220* ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
extern "C" bool Array_get_IsSynchronized_m6401 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
extern "C" Object_t * Array_get_SyncRoot_m6402 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
extern "C" bool Array_get_IsFixedSize_m6403 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
extern "C" bool Array_get_IsReadOnly_m6404 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C" Object_t * Array_GetEnumerator_m4064 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
extern "C" int32_t Array_GetUpperBound_m6405 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
extern "C" Object_t * Array_GetValue_m4297 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
extern "C" Object_t * Array_GetValue_m6406 (Array_t * __this, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
extern "C" Object_t * Array_GetValue_m6407 (Array_t * __this, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
extern "C" Object_t * Array_GetValue_m6408 (Array_t * __this, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
extern "C" Object_t * Array_GetValue_m6409 (Array_t * __this, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
extern "C" Object_t * Array_GetValue_m6410 (Array_t * __this, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
extern "C" void Array_SetValue_m6411 (Array_t * __this, Object_t * ___value, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
extern "C" void Array_SetValue_m6412 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
extern "C" void Array_SetValue_m6413 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C" void Array_SetValue_m3866 (Array_t * __this, Object_t * ___value, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
extern "C" void Array_SetValue_m6414 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
extern "C" void Array_SetValue_m6415 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
extern "C" Array_t * Array_CreateInstance_m6416 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
extern "C" Array_t * Array_CreateInstance_m6417 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
extern "C" Array_t * Array_CreateInstance_m6418 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, int32_t ___length3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
extern "C" Array_t * Array_CreateInstance_m6419 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t220* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
extern "C" Array_t * Array_CreateInstance_m6420 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t220* ___lengths, Int32U5BU5D_t220* ___lowerBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
extern "C" Int32U5BU5D_t220* Array_GetIntArray_m6421 (Object_t * __this /* static, unused */, Int64U5BU5D_t1255* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
extern "C" Array_t * Array_CreateInstance_m6422 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int64U5BU5D_t1255* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
extern "C" Object_t * Array_GetValue_m6423 (Array_t * __this, Int64U5BU5D_t1255* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
extern "C" void Array_SetValue_m6424 (Array_t * __this, Object_t * ___value, Int64U5BU5D_t1255* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
extern "C" int32_t Array_BinarySearch_m6425 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_BinarySearch_m6426 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
extern "C" int32_t Array_BinarySearch_m6427 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_BinarySearch_m6428 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_DoBinarySearch_m6429 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C" void Array_Clear_m6430 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
extern "C" void Array_ClearInternal_m6431 (Object_t * __this /* static, unused */, Array_t * ___a, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
extern "C" Object_t * Array_Clone_m3903 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" void Array_Copy_m6432 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void Array_Copy_m6433 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
extern "C" void Array_Copy_m6434 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int64_t ___sourceIndex, Array_t * ___destinationArray, int64_t ___destinationIndex, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
extern "C" void Array_Copy_m6435 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
extern "C" int32_t Array_IndexOf_m6436 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
extern "C" int32_t Array_IndexOf_m6437 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_m6438 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
extern "C" void Array_Initialize_m6439 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
extern "C" int32_t Array_LastIndexOf_m6440 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
extern "C" int32_t Array_LastIndexOf_m6441 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C" int32_t Array_LastIndexOf_m6442 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
extern "C" Swapper_t1254 * Array_get_swapper_m6443 (Object_t * __this /* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
extern "C" void Array_Reverse_m6444 (Object_t * __this /* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C" void Array_Reverse_m6445 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
extern "C" void Array_Sort_m6446 (Object_t * __this /* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
extern "C" void Array_Sort_m6447 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
extern "C" void Array_Sort_m6448 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
extern "C" void Array_Sort_m6449 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
extern "C" void Array_Sort_m6450 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
extern "C" void Array_Sort_m6451 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_Sort_m6452 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_Sort_m6453 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
extern "C" void Array_int_swapper_m6454 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
extern "C" void Array_obj_swapper_m6455 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
extern "C" void Array_slow_swapper_m6456 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
extern "C" void Array_double_swapper_m6457 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
extern "C" int32_t Array_new_gap_m6458 (Object_t * __this /* static, unused */, int32_t ___gap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m6459 (Object_t * __this /* static, unused */, DoubleU5BU5D_t1256* ___array, int32_t ___start, int32_t ___size, Swapper_t1254 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m6460 (Object_t * __this /* static, unused */, Int32U5BU5D_t220* ___array, int32_t ___start, int32_t ___size, Swapper_t1254 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m6461 (Object_t * __this /* static, unused */, CharU5BU5D_t45* ___array, int32_t ___start, int32_t ___size, Swapper_t1254 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_qsort_m6462 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___low0, int32_t ___high0, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
extern "C" void Array_swap_m6463 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_compare_m6464 (Object_t * __this /* static, unused */, Object_t * ___value1, Object_t * ___value2, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C" void Array_CopyTo_m4063 (Array_t * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
extern "C" void Array_CopyTo_m6465 (Array_t * __this, Array_t * ___array, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void Array_ConstrainedCopy_m6466 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
