#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Nod.NodButtons
struct NodButtons_t113;
struct NodButtons_t113_marshaled;

void NodButtons_t113_marshal(const NodButtons_t113& unmarshaled, NodButtons_t113_marshaled& marshaled);
void NodButtons_t113_marshal_back(const NodButtons_t113_marshaled& marshaled, NodButtons_t113& unmarshaled);
void NodButtons_t113_marshal_cleanup(NodButtons_t113_marshaled& marshaled);
