#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t631;
// System.Net.WebRequest
struct WebRequest_t625;
// System.Uri
struct Uri_t626;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m3074 (FtpRequestCreator_t631 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t625 * FtpRequestCreator_Create_m3075 (FtpRequestCreator_t631 * __this, Uri_t626 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
