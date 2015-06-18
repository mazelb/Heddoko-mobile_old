#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t1091;
struct CacheIndex_t1091_marshaled;

void CacheIndex_t1091_marshal(const CacheIndex_t1091& unmarshaled, CacheIndex_t1091_marshaled& marshaled);
void CacheIndex_t1091_marshal_back(const CacheIndex_t1091_marshaled& marshaled, CacheIndex_t1091& unmarshaled);
void CacheIndex_t1091_marshal_cleanup(CacheIndex_t1091_marshaled& marshaled);
