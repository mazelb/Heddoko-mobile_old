#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t636;
// System.Net.WebRequest
struct WebRequest_t625;
// System.Uri
struct Uri_t626;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m3080 (HttpRequestCreator_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t625 * HttpRequestCreator_Create_m3081 (HttpRequestCreator_t636 * __this, Uri_t626 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
