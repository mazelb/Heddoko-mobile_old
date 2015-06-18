#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t630;
// System.Net.WebRequest
struct WebRequest_t625;
// System.Uri
struct Uri_t626;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m3072 (FileWebRequestCreator_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t625 * FileWebRequestCreator_Create_m3073 (FileWebRequestCreator_t630 * __this, Uri_t626 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
