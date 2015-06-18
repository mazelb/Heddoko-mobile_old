#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t801;
struct DSAParameters_t801_marshaled;

void DSAParameters_t801_marshal(const DSAParameters_t801& unmarshaled, DSAParameters_t801_marshaled& marshaled);
void DSAParameters_t801_marshal_back(const DSAParameters_t801_marshaled& marshaled, DSAParameters_t801& unmarshaled);
void DSAParameters_t801_marshal_cleanup(DSAParameters_t801_marshaled& marshaled);
