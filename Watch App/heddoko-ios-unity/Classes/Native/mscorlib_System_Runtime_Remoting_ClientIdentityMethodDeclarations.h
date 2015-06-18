#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1605;
// System.MarshalByRefObject
struct MarshalByRefObject_t653;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1602;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m8494 (ClientIdentity_t1605 * __this, String_t* ___objectUri, ObjRef_t1602 * ___objRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t653 * ClientIdentity_get_ClientProxy_m8495 (ClientIdentity_t1605 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m8496 (ClientIdentity_t1605 * __this, MarshalByRefObject_t653 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1602 * ClientIdentity_CreateObjRef_m8497 (ClientIdentity_t1605 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m8498 (ClientIdentity_t1605 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
