#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Triangles
struct Triangles_t215;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t204;
// UnityEngine.Mesh
struct Mesh_t80;

// System.Void Triangles::.ctor()
extern "C" void Triangles__ctor_m891 (Triangles_t215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::.cctor()
extern "C" void Triangles__cctor_m892 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Triangles::HasMeshes()
extern "C" bool Triangles_HasMeshes_m893 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::Cleanup()
extern "C" void Triangles_Cleanup_m894 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] Triangles::GetMeshes(System.Int32,System.Int32)
extern "C" MeshU5BU5D_t204* Triangles_GetMeshes_m895 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" Mesh_t80 * Triangles_GetMesh_m896 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::Main()
extern "C" void Triangles_Main_m897 (Triangles_t215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
