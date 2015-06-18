#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t12;
// UnityEngine.Coroutine
struct Coroutine_t396;
struct Coroutine_t396_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t124;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m130 (MonoBehaviour_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t396 * MonoBehaviour_StartCoroutine_m648 (MonoBehaviour_t12 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t396 * MonoBehaviour_StartCoroutine_Auto_m5448 (MonoBehaviour_t12 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" Coroutine_t396 * MonoBehaviour_StartCoroutine_m1068 (MonoBehaviour_t12 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m5449 (MonoBehaviour_t12 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m2673 (MonoBehaviour_t12 * __this, Coroutine_t396 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5450 (MonoBehaviour_t12 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m5451 (MonoBehaviour_t12 * __this, Coroutine_t396 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
