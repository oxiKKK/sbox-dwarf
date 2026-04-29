
//
// generated_antlr_code/vfxexprParser.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	function: 1
//	structs: 3
//

// <06A5610A> generated_antlr_code/vfxexprParser.h:124
// member variables: 2
// struct size: 16
struct vfxexprParser_primary_expression_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
};

// <06A56142> generated_antlr_code/vfxexprParser.h:133
// member variables: 2
// struct size: 16
struct vfxexprParser_constant_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
};

// <06A55FDA> generated_antlr_code/vfxexprParser.h:146
// member functions: 17
// member variables: 18
// struct size: 144
struct vfxexprParser_Ctx_struct {
	pANTLR3_PARSER pParser; /* 0 8 */
	void (*root)(vfxexprParser_Ctx_struct* ); /* 8 8* /
	void (*assignment_expression)(vfxexprParser_Ctx_struct* ); /* 16 8* /
	void (*expression)(vfxexprParser_Ctx_struct* ); /* 24 8* /
	void (*arithmetic_if_expression)(vfxexprParser_Ctx_struct* ); /* 32 8* /
	void (*logical_or_expression)(vfxexprParser_Ctx_struct* ); /* 40 8* /
	void (*logical_and_expression)(vfxexprParser_Ctx_struct* ); /* 48 8* /
	void (*equality_expression)(vfxexprParser_Ctx_struct* ); /* 56 8* /
	void (*relational_expression)(vfxexprParser_Ctx_struct* ); /* 64 8* /
	void (*add_expression)(vfxexprParser_Ctx_struct* ); /* 72 8* /
	void (*multiply_expression)(vfxexprParser_Ctx_struct* ); /* 80 8* /
	void (*unary_expression)(vfxexprParser_Ctx_struct* ); /* 88 8* /
	void (*dereference_expression)(vfxexprParser_Ctx_struct* ); /* 96 8* /
	void (*function_call)(vfxexprParser_Ctx_struct* ); /* 104 8* /
	vfxexprParser_primary_expression_return (*primary_expression)(vfxexprParser_Ctx_struct* ); /* 112 8* /
	vfxexprParser_constant_return (*constant)(vfxexprParser_Ctx_struct* ); /* 120 8* /
	const char* (*getGrammarFileName)(void); /* 128 8* /
	void (*free)(vfxexprParser_Ctx_struct* ); /* 136 8* /
};

// <06A5984D> generated_antlr_code/vfxexprParser.h:178
pvfxexprParser vfxexprParserNew(pANTLR3_COMMON_TOKEN_STREAM)
{
} /* size: 0 */

