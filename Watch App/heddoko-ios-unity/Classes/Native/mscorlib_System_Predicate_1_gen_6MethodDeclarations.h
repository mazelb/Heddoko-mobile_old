﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.List`1<SensorData>>
struct Predicate_1_t2607;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<SensorData>
struct List_1_t3;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Collections.Generic.List`1<SensorData>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m13368(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2607 *, Object_t *, IntPtr_t98, MethodInfo*))Predicate_1__ctor_m12082_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.List`1<SensorData>>::Invoke(T)
#define Predicate_1_Invoke_m13369(__this, ___obj, method) (( bool (*) (Predicate_1_t2607 *, List_1_t3 *, MethodInfo*))Predicate_1_Invoke_m12083_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.List`1<SensorData>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m13370(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2607 *, List_1_t3 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m12084_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.List`1<SensorData>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m13371(__this, ___result, method) (( bool (*) (Predicate_1_t2607 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m12085_gshared)(__this, ___result, method)