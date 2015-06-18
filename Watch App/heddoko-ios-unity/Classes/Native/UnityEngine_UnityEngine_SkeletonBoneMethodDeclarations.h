#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1016;
struct SkeletonBone_t1016_marshaled;

void SkeletonBone_t1016_marshal(const SkeletonBone_t1016& unmarshaled, SkeletonBone_t1016_marshaled& marshaled);
void SkeletonBone_t1016_marshal_back(const SkeletonBone_t1016_marshaled& marshaled, SkeletonBone_t1016& unmarshaled);
void SkeletonBone_t1016_marshal_cleanup(SkeletonBone_t1016_marshaled& marshaled);
