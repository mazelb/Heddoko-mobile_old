#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t1384;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t610;
// System.Collections.ICollection
struct ICollection_t715;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.Collections.IComparer
struct IComparer_t605;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void ArrayListWrapper__ctor_m7057 (ArrayListWrapper_t1384 * __this, ArrayList_t610 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * ArrayListWrapper_get_Item_m7058 (ArrayListWrapper_t1384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void ArrayListWrapper_set_Item_m7059 (ArrayListWrapper_t1384 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
extern "C" int32_t ArrayListWrapper_get_Count_m7060 (ArrayListWrapper_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
extern "C" bool ArrayListWrapper_get_IsFixedSize_m7061 (ArrayListWrapper_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
extern "C" bool ArrayListWrapper_get_IsReadOnly_m7062 (ArrayListWrapper_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
extern "C" bool ArrayListWrapper_get_IsSynchronized_m7063 (ArrayListWrapper_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
extern "C" Object_t * ArrayListWrapper_get_SyncRoot_m7064 (ArrayListWrapper_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
extern "C" int32_t ArrayListWrapper_Add_m7065 (ArrayListWrapper_t1384 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
extern "C" void ArrayListWrapper_Clear_m7066 (ArrayListWrapper_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
extern "C" bool ArrayListWrapper_Contains_m7067 (ArrayListWrapper_t1384 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t ArrayListWrapper_IndexOf_m7068 (ArrayListWrapper_t1384 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m7069 (ArrayListWrapper_t1384 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m7070 (ArrayListWrapper_t1384 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void ArrayListWrapper_Insert_m7071 (ArrayListWrapper_t1384 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void ArrayListWrapper_InsertRange_m7072 (ArrayListWrapper_t1384 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
extern "C" void ArrayListWrapper_Remove_m7073 (ArrayListWrapper_t1384 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
extern "C" void ArrayListWrapper_RemoveAt_m7074 (ArrayListWrapper_t1384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
extern "C" void ArrayListWrapper_CopyTo_m7075 (ArrayListWrapper_t1384 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m7076 (ArrayListWrapper_t1384 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m7077 (ArrayListWrapper_t1384 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
extern "C" Object_t * ArrayListWrapper_GetEnumerator_m7078 (ArrayListWrapper_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void ArrayListWrapper_AddRange_m7079 (ArrayListWrapper_t1384 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
extern "C" void ArrayListWrapper_Sort_m7080 (ArrayListWrapper_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void ArrayListWrapper_Sort_m7081 (ArrayListWrapper_t1384 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t137* ArrayListWrapper_ToArray_m7082 (ArrayListWrapper_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * ArrayListWrapper_ToArray_m7083 (ArrayListWrapper_t1384 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
