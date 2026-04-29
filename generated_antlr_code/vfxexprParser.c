
//
// generated_antlr_code/vfxexprParser.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 18
//

// <06AD5646> generated_antlr_code/vfxexprParser.c:272
const char* getGrammarFileName(void)
{
} /* size: 0 */

// <06AD554E> generated_antlr_code/vfxexprParser.c:297
// variable: 1
pvfxexprParser vfxexprParserNewSSD(pANTLR3_COMMON_TOKEN_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state)
{
	pvfxexprParser ctx; // 299
} /* size: 0, variables: 1 */

// <06AD54FF> generated_antlr_code/vfxexprParser.c:366
void vfxexprParserFree(pvfxexprParser ctx)
{
} /* size: 0 */

// <06AD528A> generated_antlr_code/vfxexprParser.c:596
// variables: 3
// function calls: 2
void root(pvfxexprParser ctx)
{

loop1: // 660

rulerootEx: // 749
	{
		int alt1; // 611
	}
	{
		int alt2; // 665
	}
	{
		int alt3; // 704
	}
	CUtlStackMachineBuilder::AddOperator(
			SM_OpCode_t nOp);  // 94
	CUtlStackMachineBuilder::AddStop(); // 732
} /* size: 0, goto labels: 2, inline expansions: 2 (0 bytes) */

// <06AD518D> generated_antlr_code/vfxexprParser.c:767
// variable: 1
void assignment_expression(pvfxexprParser ctx)
{

ruleassignment_expressionEx: // 814
	pANTLR3_COMMON_TOKEN tmpVar; // 769
} /* size: 0, variables: 1, goto labels: 1 */

// <06AD5111> generated_antlr_code/vfxexprParser.c:832
void expression(pvfxexprParser ctx)
{

ruleexpressionEx: // 860
} /* size: 0, goto labels: 1 */

// <06AD4EC7> generated_antlr_code/vfxexprParser.c:878
// variables: 4
void arithmetic_if_expression(pvfxexprParser ctx)
{

rulearithmetic_if_expressionEx: // 985
	uint16 nLabel1; // 885
	uint16 nLabel2; // 886
	uint16 nLabel3; // 887
	{
		int alt4; // 905
	}
} /* size: 0, variables: 3, goto labels: 1 */

// <06AD4CA9> generated_antlr_code/vfxexprParser.c:1003
// variables: 5
void logical_or_expression(pvfxexprParser ctx)
{

loop5: // 1094

rulelogical_or_expressionEx: // 1105
	pANTLR3_COMMON_TOKEN op; // 1005
	uint16 nLabel1; // 1012
	uint16 nLabel2; // 1013
	uint16 nLabel3; // 1014
	{
		int alt5; // 1036
	}
} /* size: 0, variables: 4, goto labels: 2 */

// <06AD4A8B> generated_antlr_code/vfxexprParser.c:1123
// variables: 5
void logical_and_expression(pvfxexprParser ctx)
{

loop6: // 1214

rulelogical_and_expressionEx: // 1225
	pANTLR3_COMMON_TOKEN op; // 1125
	uint16 nLabel1; // 1132
	uint16 nLabel2; // 1133
	uint16 nLabel3; // 1134
	{
		int alt6; // 1156
	}
} /* size: 0, variables: 4, goto labels: 2 */

// <06AD4904> generated_antlr_code/vfxexprParser.c:1243
// variables: 2
void equality_expression(pvfxexprParser ctx)
{

loop7: // 1324

ruleequality_expressionEx: // 1335
	pANTLR3_COMMON_TOKEN op; // 1245
	{
		int alt7; // 1271
	}
} /* size: 0, variables: 1, goto labels: 2 */

// <06AD477D> generated_antlr_code/vfxexprParser.c:1353
// variables: 2
void relational_expression(pvfxexprParser ctx)
{

loop8: // 1436

rulerelational_expressionEx: // 1447
	pANTLR3_COMMON_TOKEN op; // 1355
	{
		int alt8; // 1381
	}
} /* size: 0, variables: 1, goto labels: 2 */

// <06AD45F6> generated_antlr_code/vfxexprParser.c:1465
// variables: 2
void add_expression(pvfxexprParser ctx)
{

loop9: // 1546

ruleadd_expressionEx: // 1557
	pANTLR3_COMMON_TOKEN op; // 1467
	{
		int alt9; // 1493
	}
} /* size: 0, variables: 1, goto labels: 2 */

// <06AD446F> generated_antlr_code/vfxexprParser.c:1575
// variables: 2
void multiply_expression(pvfxexprParser ctx)
{

loop10: // 1657

rulemultiply_expressionEx: // 1668
	pANTLR3_COMMON_TOKEN op; // 1577
	{
		int alt10; // 1603
	}
} /* size: 0, variables: 1, goto labels: 2 */

// <06AD4257> generated_antlr_code/vfxexprParser.c:1686
// variables: 2
// function calls: 2
void unary_expression(pvfxexprParser ctx)
{

ruleunary_expressionEx: // 1804
	pANTLR3_COMMON_TOKEN op; // 1688
	{
		ANTLR3_UINT32 alt11; // 1700
		CUtlStackMachineBuilder::AddOperator(
				SM_OpCode_t nOp);  // 1773
		CUtlStackMachineBuilder::AddOperator(
				SM_OpCode_t nOp);  // 1769
	}
} /* size: 0, variables: 1, goto labels: 1 */

// <06AD4098> generated_antlr_code/vfxexprParser.c:1822
// variables: 3
// function calls: 2
void dereference_expression(pvfxexprParser ctx)
{

loop12: // 1894

ruledereference_expressionEx: // 1905
	pANTLR3_COMMON_TOKEN subscript; // 1824
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 1830
	{
		int alt12; // 1851
		CUtlString::Get(); // 80
		CVfxStackMachineBuilder::GetLastError(); // 1883
	}
} /* size: 0, variables: 2, goto labels: 2 */

// <06AD3C77> generated_antlr_code/vfxexprParser.c:1923
// variables: 6
// function calls: 2
void function_call(pvfxexprParser ctx)
{

loop13: // 2191

rulefunction_callEx: // 2229
	pANTLR3_COMMON_TOKEN fn; // 1925
	pANTLR3_COMMON_TOKEN varName; // 1926
	int nArgCount; // 1933
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 1934
	{
		ANTLR3_UINT32 alt14; // 1943
		{
			int alt13; // 2148
		}
		CUtlString::Get(); // 80
		CVfxStackMachineBuilder::GetLastError(); // 2200
	}
} /* size: 0, variables: 4, goto labels: 2 */

// <06AD3A1E> generated_antlr_code/vfxexprParser.c:2247
// variables: 3
// function calls: 2
vfxexprParser_primary_expression_return primary_expression(pvfxexprParser ctx)
{

ruleprimary_expressionEx: // 2366
	vfxexprParser_primary_expression_return retval; // 2249
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 2255
	{
		ANTLR3_UINT32 alt15; // 2262
		CUtlString::Get(); // 80
		CVfxStackMachineBuilder::GetLastError(); // 2310
	}
} /* size: 0, variables: 2, goto labels: 1 */

// <06AD36AD> generated_antlr_code/vfxexprParser.c:2385
// variables: 5
// function calls: 3
vfxexprParser_constant_return constant(pvfxexprParser ctx)
{

ruleconstantEx: // 2513
	vfxexprParser_constant_return retval; // 2387
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 2393
	{
		ANTLR3_UINT32 alt16; // 2400
		{
			int nInt; // 2466
		}
		{
			bool b; // 2499
			V_strcmp(const char* s1,
				const char* s2);  // 2499
			CUtlString::Get(); // 80
			CVfxStackMachineBuilder::GetLastError(); // 2499
		}
	}
} /* size: 0, variables: 2, goto labels: 1 */

