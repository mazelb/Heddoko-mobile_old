#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.Camera
struct Camera_t56;
// UnityEngine.Animation
struct Animation_t144;
// UnityEngine.GUIText
struct GUIText_t95;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t138;
// UnityEngine.Component
struct Component_t142;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t1012;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m165 (GameObject_t49 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern "C" void GameObject__ctor_m596 (GameObject_t49 * __this, String_t* ___name, TypeU5BU5D_t138* ___components, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t142 * GameObject_GetComponent_m612 (GameObject_t49 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_isStatic(System.Boolean)
extern "C" void GameObject_set_isStatic_m4703 (GameObject_t49 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentsForListInternal(System.Type,System.Type,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" void GameObject_GetComponentsForListInternal_m4704 (GameObject_t49 * __this, Type_t * ___searchType, Type_t * ___listElementType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" ComponentU5BU5D_t1012* GameObject_GetComponentsInternal_m4705 (GameObject_t49 * __this, Type_t * ___type, bool ___isGenericTypeArray, bool ___recursive, bool ___includeInactive, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t85 * GameObject_get_transform_m655 (GameObject_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.GameObject::get_camera()
extern "C" Camera_t56 * GameObject_get_camera_m597 (GameObject_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animation UnityEngine.GameObject::get_animation()
extern "C" Animation_t144 * GameObject_get_animation_m659 (GameObject_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIText UnityEngine.GameObject::get_guiText()
extern "C" GUIText_t95 * GameObject_get_guiText_m1028 (GameObject_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m2624 (GameObject_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" void GameObject_set_layer_m2625 (GameObject_t49 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m658 (GameObject_t49 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m914 (GameObject_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m4706 (GameObject_t49 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_BroadcastMessage_m4707 (GameObject_t49 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String)
extern "C" void GameObject_BroadcastMessage_m654 (GameObject_t49 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.String)
extern "C" Component_t142 * GameObject_AddComponent_m598 (GameObject_t49 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t142 * GameObject_AddComponent_m619 (GameObject_t49 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t142 * GameObject_Internal_AddComponentWithType_m4708 (GameObject_t49 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m4709 (Object_t * __this /* static, unused */, GameObject_t49 * ___mono, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t49 * GameObject_Find_m163 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
