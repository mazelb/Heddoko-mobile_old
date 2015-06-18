#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Graphics
struct Graphics_t1051;
// UnityEngine.Mesh
struct Mesh_t80;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t195;
// UnityEngine.Texture
struct Texture_t22;
// UnityEngine.RenderTexture
struct RenderTexture_t21;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t51;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.MeshTopology
#include "UnityEngine_UnityEngine_MeshTopology.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C" void Graphics_DrawMeshNow_m957 (Object_t * __this /* static, unused */, Mesh_t80 * ___mesh, Matrix4x4_t53  ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow2_m4946 (Object_t * __this /* static, unused */, Mesh_t80 * ___mesh, Matrix4x4_t53  ___matrix, int32_t ___materialIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m4947 (Object_t * __this /* static, unused */, Mesh_t80 * ___mesh, Matrix4x4_t53 * ___matrix, int32_t ___materialIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C" void Graphics_DrawProceduralIndirect_m968 (Object_t * __this /* static, unused */, int32_t ___topology, ComputeBuffer_t195 * ___bufferWithArgs, int32_t ___argsOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" void Graphics_Blit_m184 (Object_t * __this /* static, unused */, Texture_t22 * ___source, RenderTexture_t21 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m187 (Object_t * __this /* static, unused */, Texture_t22 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m224 (Object_t * __this /* static, unused */, Texture_t22 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___mat, int32_t ___pass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m4948 (Object_t * __this /* static, unused */, Texture_t22 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___mat, int32_t ___pass, bool ___setRT, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_BlitMultiTap_m180 (Object_t * __this /* static, unused */, Texture_t22 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___mat, Vector2U5BU5D_t51* ___offsets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_Internal_BlitMultiTap_m4949 (Object_t * __this /* static, unused */, Texture_t22 * ___source, RenderTexture_t21 * ___dest, Material_t19 * ___mat, Vector2U5BU5D_t51* ___offsets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C" void Graphics_SetRenderTarget_m965 (Object_t * __this /* static, unused */, RenderTexture_t21 * ___rt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRT(UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void Graphics_Internal_SetRT_m4950 (Object_t * __this /* static, unused */, RenderTexture_t21 * ___rt, int32_t ___mipLevel, int32_t ___face, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_SetRandomWriteTarget_m963 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t195 * ___uav, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C" void Graphics_ClearRandomWriteTargets_m964 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_Internal_SetRandomWriteTargetBuffer_m4951 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t195 * ___uav, MethodInfo* method) IL2CPP_METHOD_ATTR;
