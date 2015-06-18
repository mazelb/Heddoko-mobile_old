#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t80;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t81;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t51;
// System.Int32[]
struct Int32U5BU5D_t220;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m985 (Mesh_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m4909 (Object_t * __this /* static, unused */, Mesh_t80 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t81* Mesh_get_vertices_m613 (Mesh_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m615 (Mesh_t80 * __this, Vector3U5BU5D_t81* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t81* Mesh_get_normals_m614 (Mesh_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C" void Mesh_set_normals_m616 (Mesh_t80 * __this, Vector3U5BU5D_t81* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m987 (Mesh_t80 * __this, Vector2U5BU5D_t51* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv2_m988 (Mesh_t80 * __this, Vector2U5BU5D_t51* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m986 (Mesh_t80 * __this, Int32U5BU5D_t220* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
