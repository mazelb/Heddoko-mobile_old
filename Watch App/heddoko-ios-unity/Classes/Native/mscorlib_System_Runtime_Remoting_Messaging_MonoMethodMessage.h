#pragma once
#include <stdint.h>
// System.Reflection.MonoMethod
struct MonoMethod_t1508;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1586;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t140;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t138;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1576  : public Object_t
{
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t1508 * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t137* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t13* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t1586 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	Object_t * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t140 * ___exc_5;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t138* ___methodSignature_7;
};
