#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WaterBase
struct WaterBase_t77;
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.Camera
struct Camera_t56;

// System.Void WaterBase::.ctor()
extern "C" void WaterBase__ctor_m307 (WaterBase_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaterBase::UpdateShader()
extern "C" void WaterBase_UpdateShader_m308 (WaterBase_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaterBase::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern "C" void WaterBase_WaterTileBeingRendered_m309 (WaterBase_t77 * __this, Transform_t85 * ___tr, Camera_t56 * ___currentCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaterBase::Update()
extern "C" void WaterBase_Update_m310 (WaterBase_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
