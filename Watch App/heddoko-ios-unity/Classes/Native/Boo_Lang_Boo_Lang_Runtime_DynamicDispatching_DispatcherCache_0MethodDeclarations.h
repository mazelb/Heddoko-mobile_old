#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t861;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t858;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t862;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t859;

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C" void DispatcherCache__ctor_m4240 (DispatcherCache_t861 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern "C" void DispatcherCache__cctor_m4241 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" Dispatcher_t858 * DispatcherCache_Get_m4242 (DispatcherCache_t861 * __this, DispatcherKey_t862 * ___key, DispatcherFactory_t859 * ___factory, MethodInfo* method) IL2CPP_METHOD_ATTR;
