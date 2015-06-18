#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
struct CharacterInfo_t1057;
struct CharacterInfo_t1057_marshaled;

void CharacterInfo_t1057_marshal(const CharacterInfo_t1057& unmarshaled, CharacterInfo_t1057_marshaled& marshaled);
void CharacterInfo_t1057_marshal_back(const CharacterInfo_t1057_marshaled& marshaled, CharacterInfo_t1057& unmarshaled);
void CharacterInfo_t1057_marshal_cleanup(CharacterInfo_t1057_marshaled& marshaled);
