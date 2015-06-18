#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t142;
// UnityEngine.Transform
struct Transform_t85;
// UnityEngine.Rigidbody
struct Rigidbody_t241;
// UnityEngine.Camera
struct Camera_t56;
// UnityEngine.Renderer
struct Renderer_t139;
// UnityEngine.GameObject
struct GameObject_t49;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t458;

// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t85 * Component_get_transform_m534 (Component_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::InternalGetTransform()
extern "C" Transform_t85 * Component_InternalGetTransform_m5464 (Component_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Component::get_rigidbody()
extern "C" Rigidbody_t241 * Component_get_rigidbody_m1032 (Component_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Component::get_camera()
extern "C" Camera_t56 * Component_get_camera_m215 (Component_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer UnityEngine.Component::get_renderer()
extern "C" Renderer_t139 * Component_get_renderer_m530 (Component_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t49 * Component_get_gameObject_m562 (Component_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::InternalGetGameObject()
extern "C" GameObject_t49 * Component_InternalGetGameObject_m5465 (Component_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t142 * Component_GetComponent_m578 (Component_t142 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Type,System.Boolean,System.Boolean,System.Object)
extern "C" void Component_GetComponentsForListInternal_m5466 (Component_t142 * __this, Type_t * ___searchType, Type_t * ___listElementType, bool ___recursive, bool ___includeInactive, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m2456 (Component_t142 * __this, Type_t * ___type, List_1_t458 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
