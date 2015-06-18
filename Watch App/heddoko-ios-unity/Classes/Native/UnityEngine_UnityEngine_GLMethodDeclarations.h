#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GL
struct GL_t1055;
// UnityEngine.Camera
struct Camera_t56;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C" void GL_Vertex3_m977 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
extern "C" void GL_TexCoord2_m982 (Object_t * __this /* static, unused */, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
extern "C" void GL_MultiTexCoord2_m976 (Object_t * __this /* static, unused */, int32_t ___unit, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" void GL_Begin_m975 (Object_t * __this /* static, unused */, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C" void GL_End_m978 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadOrtho()
extern "C" void GL_LoadOrtho_m974 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
extern "C" void GL_LoadProjectionMatrix_m983 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void GL_INTERNAL_CALL_LoadProjectionMatrix_m4958 (Object_t * __this /* static, unused */, Matrix4x4_t53 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadIdentity()
extern "C" void GL_LoadIdentity_m955 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C" void GL_PushMatrix_m954 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C" void GL_PopMatrix_m958 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" Matrix4x4_t53  GL_GetGPUProjectionMatrix_m913 (Object_t * __this /* static, unused */, Matrix4x4_t53  ___proj, bool ___renderIntoTexture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean)
extern "C" Matrix4x4_t53  GL_INTERNAL_CALL_GetGPUProjectionMatrix_m4959 (Object_t * __this /* static, unused */, Matrix4x4_t53 * ___proj, bool ___renderIntoTexture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::SetRevertBackfacing(System.Boolean)
extern "C" void GL_SetRevertBackfacing_m550 (Object_t * __this /* static, unused */, bool ___revertBackFaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C" void GL_Clear_m953 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t29  ___backgroundColor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Clear_m4960 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t29  ___backgroundColor, float ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Internal_Clear_m4961 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t29  ___backgroundColor, float ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C" void GL_INTERNAL_CALL_Internal_Clear_m4962 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t29 * ___backgroundColor, float ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
extern "C" void GL_ClearWithSkybox_m989 (Object_t * __this /* static, unused */, bool ___clearDepth, Camera_t56 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
