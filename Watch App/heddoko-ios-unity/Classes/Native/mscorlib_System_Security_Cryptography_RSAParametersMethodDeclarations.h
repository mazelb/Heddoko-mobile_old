#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t799;
struct RSAParameters_t799_marshaled;

void RSAParameters_t799_marshal(const RSAParameters_t799& unmarshaled, RSAParameters_t799_marshaled& marshaled);
void RSAParameters_t799_marshal_back(const RSAParameters_t799_marshaled& marshaled, RSAParameters_t799& unmarshaled);
void RSAParameters_t799_marshal_cleanup(RSAParameters_t799_marshaled& marshaled);
