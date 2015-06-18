#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OperatingSystem
struct OperatingSystem_t1805;
// System.Version
struct Version_t637;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.String
struct String_t;
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern "C" void OperatingSystem__ctor_m10092 (OperatingSystem_t1805 * __this, int32_t ___platform, Version_t637 * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C" int32_t OperatingSystem_get_Platform_m10093 (OperatingSystem_t1805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OperatingSystem_GetObjectData_m10094 (OperatingSystem_t1805 * __this, SerializationInfo_t612 * ___info, StreamingContext_t614  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
extern "C" String_t* OperatingSystem_ToString_m10095 (OperatingSystem_t1805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
