﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Identity
struct Identity_t1604;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t912;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1602;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern "C" void Identity__ctor_m8488 (Identity_t1604 * __this, String_t* ___objectUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type)
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C" Object_t * Identity_get_ChannelSink_m8489 (Identity_t1604 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void Identity_set_ChannelSink_m8490 (Identity_t1604 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C" String_t* Identity_get_ObjectUri_m8491 (Identity_t1604 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C" bool Identity_get_Disposed_m8492 (Identity_t1604 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern "C" void Identity_set_Disposed_m8493 (Identity_t1604 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
