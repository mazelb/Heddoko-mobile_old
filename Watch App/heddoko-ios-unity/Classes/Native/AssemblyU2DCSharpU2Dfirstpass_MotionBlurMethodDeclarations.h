#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MotionBlur
struct MotionBlur_t33;
// UnityEngine.RenderTexture
struct RenderTexture_t21;

// System.Void MotionBlur::.ctor()
extern "C" void MotionBlur__ctor_m103 (MotionBlur_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MotionBlur::Start()
extern "C" void MotionBlur_Start_m104 (MotionBlur_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MotionBlur::OnDisable()
extern "C" void MotionBlur_OnDisable_m105 (MotionBlur_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void MotionBlur_OnRenderImage_m106 (MotionBlur_t33 * __this, RenderTexture_t21 * ___source, RenderTexture_t21 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
