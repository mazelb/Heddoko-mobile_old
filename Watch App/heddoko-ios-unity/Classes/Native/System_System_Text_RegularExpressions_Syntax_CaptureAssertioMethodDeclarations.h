#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t762;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t757;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t752;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t761;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t754;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m3716 (CaptureAssertion_t762 * __this, Literal_t761 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m3717 (CaptureAssertion_t762 * __this, CapturingGroup_t757 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m3718 (CaptureAssertion_t762 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m3719 (CaptureAssertion_t762 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t752 * CaptureAssertion_get_Alternate_m3720 (CaptureAssertion_t762 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
