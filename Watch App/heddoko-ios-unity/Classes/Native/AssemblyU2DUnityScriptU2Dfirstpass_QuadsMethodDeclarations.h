#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Quads
struct Quads_t205;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t204;
// UnityEngine.Mesh
struct Mesh_t80;

// System.Void Quads::.ctor()
extern "C" void Quads__ctor_m864 (Quads_t205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Quads::.cctor()
extern "C" void Quads__cctor_m865 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Quads::HasMeshes()
extern "C" bool Quads_HasMeshes_m866 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Quads::Cleanup()
extern "C" void Quads_Cleanup_m867 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] Quads::GetMeshes(System.Int32,System.Int32)
extern "C" MeshU5BU5D_t204* Quads_GetMeshes_m868 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" Mesh_t80 * Quads_GetMesh_m869 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Quads::Main()
extern "C" void Quads_Main_m870 (Quads_t205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
