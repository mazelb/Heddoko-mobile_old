#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1353;
// System.Collections.Stack
struct Stack_t734;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct SecurityParser_t1354  : public SmallXmlParser_t1355
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1353 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1353 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t734 * ___stack_15;
};
