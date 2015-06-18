#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t926;
struct GcScoreData_t926_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t927;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t927 * GcScoreData_ToScore_m4414 (GcScoreData_t926 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t926_marshal(const GcScoreData_t926& unmarshaled, GcScoreData_t926_marshaled& marshaled);
void GcScoreData_t926_marshal_back(const GcScoreData_t926_marshaled& marshaled, GcScoreData_t926& unmarshaled);
void GcScoreData_t926_marshal_cleanup(GcScoreData_t926_marshaled& marshaled);
