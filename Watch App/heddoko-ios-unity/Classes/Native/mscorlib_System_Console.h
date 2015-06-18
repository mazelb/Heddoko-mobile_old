#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t816;
// System.IO.TextReader
struct TextReader_t1359;
// System.Text.Encoding
struct Encoding_t805;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct Console_t815  : public Object_t
{
};
struct Console_t815_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t816 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t816 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1359 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t805 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t805 * ___outputEncoding_4;
};
