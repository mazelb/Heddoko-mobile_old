﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t924;
struct GcAchievementData_t924_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t925;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t925 * GcAchievementData_ToAchievement_m4413 (GcAchievementData_t924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t924_marshal(const GcAchievementData_t924& unmarshaled, GcAchievementData_t924_marshaled& marshaled);
void GcAchievementData_t924_marshal_back(const GcAchievementData_t924_marshaled& marshaled, GcAchievementData_t924& unmarshaled);
void GcAchievementData_t924_marshal_cleanup(GcAchievementData_t924_marshaled& marshaled);
