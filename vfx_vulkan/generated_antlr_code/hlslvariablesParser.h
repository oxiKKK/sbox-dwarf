
//
// vfx_vulkan/generated_antlr_code/hlslvariablesParser.h
//
//	referenced by: libvfx_vulkan.so
//
//	function: 1
//	structs: 15
//

// <0027CF41> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:181
// member variables: 2
// struct size: 16
struct hlslvariablesParser_variable_definition_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
};

// <0027CF79> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:190
// member variables: 3
// struct size: 24
struct hlslvariablesParser_semantic_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
	const char * pSemanticName; /* 16 8 */
};

// <0027CFC0> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:200
// member variables: 3
// struct size: 24
struct hlslvariablesParser_manual_register_allocation_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
	int nRegister; /* 16 4 */
};

// <0027D007> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:210
// member variables: 3
// struct size: 24
struct hlslvariablesParser_vulkan_binding_layout_qualifier_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
	int nDescriptorSetSlot; /* 16 4 */
};

// <0027D04E> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:220
// member variables: 2
// struct size: 16
struct hlslvariablesParser_vulkan_attribute_qualifier_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
};

// <0027D086> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:229
// member variables: 2
// struct size: 16
struct hlslvariablesParser_annotations_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
};

// <0027D0BE> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:238
// member variables: 3
// struct size: 24
struct hlslvariablesParser_intliteral_expression_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
	int nIntValue; /* 16 4 */
};

// <0027D105> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:248
// member variables: 4
// struct size: 24
struct hlslvariablesParser_array_spec_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
	int nValue; /* 16 4 */
	bool bUnsized; /* 20 1 */
};

// <0027D15C> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:259
// member variables: 6
// struct size: 32
struct hlslvariablesParser_type_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
	int paramClass; /* 16 4 */
	int paramType; /* 20 4 */
	int nNumRows; /* 24 4 */
	int nNumColumns; /* 28 4 */
};

// <0027D1D8> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:272
// member variables: 4
// struct size: 24
struct hlslvariablesParser_vector_type_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
	int paramType; /* 16 4 */
	int nNumColumns; /* 20 4 */
};

// <0027D234> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:283
// member variables: 5
// struct size: 32
struct hlslvariablesParser_matrix_type_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
	int paramType; /* 16 4 */
	int nNumColumns; /* 20 4 */
	int nNumRows; /* 24 4 */
};

// <0027D2A0> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:295
// member variables: 4
// struct size: 24
struct hlslvariablesParser_storage_class_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
	bool bIsStatic; /* 16 1 */
	bool bIsGroupShared; /* 17 1 */
};

// <0027D2FC> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:306
// member variables: 2
// struct size: 16
struct hlslvariablesParser_function_scope_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
};

// <0027D338> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:315
// member variables: 2
// struct size: 16
struct hlslvariablesParser_function_parameter_list_return_struct {
	pANTLR3_COMMON_TOKEN start; /* 0 8 */
	pANTLR3_COMMON_TOKEN stop; /* 8 8 */
};

// <0027CA88> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:328
// member functions: 69
// member variables: 70
// struct size: 560
struct hlslvariablesParser_Ctx_struct {
	pANTLR3_PARSER pParser; /* 0 8 */
	void (*hlsl)(hlslvariablesParser_Ctx_struct* ); /* 8 8* /
	void (*element)(hlslvariablesParser_Ctx_struct* ); /* 16 8* /
	void (*bindless_constant_def)(hlslvariablesParser_Ctx_struct* ); /* 24 8* /
	void (*auto_bindless_texture2d_binding)(hlslvariablesParser_Ctx_struct* ); /* 32 8* /
	void (*struct_decl)(hlslvariablesParser_Ctx_struct* ); /* 40 8* /
	void (*enum_decl)(hlslvariablesParser_Ctx_struct* ); /* 48 8* /
	void (*enum_member_list)(hlslvariablesParser_Ctx_struct* ); /* 56 8* /
	void (*enum_member)(hlslvariablesParser_Ctx_struct* ); /* 64 8* /
	void (*class_member_definition)(hlslvariablesParser_Ctx_struct* ); /* 72 8* /
	void (*class_declaration)(hlslvariablesParser_Ctx_struct* ); /* 80 8* /
	void (*type_def)(hlslvariablesParser_Ctx_struct* ); /* 88 8* /
	void (*function_definition)(hlslvariablesParser_Ctx_struct* ); /* 96 8* /
	void (*namespace_name)(hlslvariablesParser_Ctx_struct* ); /* 104 8* /
	int (*constant_buffer_and_manual_register_allocation)(hlslvariablesParser_Ctx_struct* ); /* 112 8* /
	void (*constant_buffer)(hlslvariablesParser_Ctx_struct* ); /* 120 8* /
	void (*struct_member_decl)(hlslvariablesParser_Ctx_struct* ); /* 128 8* /
	hlslvariablesParser_variable_definition_return (*variable_definition)(hlslvariablesParser_Ctx_struct* , bool); /* 136 8* /
	hlslvariablesParser_semantic_return (*semantic)(hlslvariablesParser_Ctx_struct* ); /* 144 8* /
	void (*pack_offset)(hlslvariablesParser_Ctx_struct* ); /* 152 8* /
	void (*inherited_class)(hlslvariablesParser_Ctx_struct* ); /* 160 8* /
	hlslvariablesParser_manual_register_allocation_return (*manual_register_allocation)(hlslvariablesParser_Ctx_struct* ); /* 168 8* /
	void (*layout_qualifier_id)(hlslvariablesParser_Ctx_struct* ); /* 176 8* /
	void (*binding_layout_qualifier)(hlslvariablesParser_Ctx_struct* ); /* 184 8* /
	hlslvariablesParser_vulkan_binding_layout_qualifier_return (*vulkan_binding_layout_qualifier)(hlslvariablesParser_Ctx_struct* ); /* 192 8* /
	int (*dxc_vulkan_register_qualifier)(hlslvariablesParser_Ctx_struct* ); /* 200 8* /
	hlslvariablesParser_vulkan_attribute_qualifier_return (*vulkan_attribute_qualifier)(hlslvariablesParser_Ctx_struct* ); /* 208 8* /
	hlslvariablesParser_annotations_return (*annotations)(hlslvariablesParser_Ctx_struct* , bool); /* 216 8* /
	void (*annotation_variable_definition)(hlslvariablesParser_Ctx_struct* , bool); /* 224 8* /
	void (*ignored_expression)(hlslvariablesParser_Ctx_struct* ); /* 232 8* /
	void (*expression)(hlslvariablesParser_Ctx_struct* ); /* 240 8* /
	void (*atom)(hlslvariablesParser_Ctx_struct* ); /* 248 8* /
	void (*binary_op)(hlslvariablesParser_Ctx_struct* ); /* 256 8* /
	void (*unary_op)(hlslvariablesParser_Ctx_struct* ); /* 264 8* /
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* (*value)(hlslvariablesParser_Ctx_struct* ); /* 272 8* /
	void (*single_value)(hlslvariablesParser_Ctx_struct* , CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* ); /* 280 8* /
	void (*number_literal)(hlslvariablesParser_Ctx_struct* ); /* 288 8* /
	void (*value_array)(hlslvariablesParser_Ctx_struct* , CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* ); /* 296 8* /
	hlslvariablesParser_intliteral_expression_return (*intliteral_expression)(hlslvariablesParser_Ctx_struct* ); /* 304 8* /
	int (*intliteral_ternary_expression)(hlslvariablesParser_Ctx_struct* ); /* 312 8* /
	int (*intliteral_compare_expression)(hlslvariablesParser_Ctx_struct* ); /* 320 8* /
	int (*intliteral_add_expression)(hlslvariablesParser_Ctx_struct* ); /* 328 8* /
	int (*intliteral_multiply_expression)(hlslvariablesParser_Ctx_struct* ); /* 336 8* /
	int (*intliteral_unary_expression)(hlslvariablesParser_Ctx_struct* ); /* 344 8* /
	int (*intliteral_primary_expression)(hlslvariablesParser_Ctx_struct* ); /* 352 8* /
	hlslvariablesParser_array_spec_return (*array_spec)(hlslvariablesParser_Ctx_struct* ); /* 360 8* /
	hlslvariablesParser_type_return (*type)(hlslvariablesParser_Ctx_struct* ); /* 368 8* /
	int (*scalar_type)(hlslvariablesParser_Ctx_struct* ); /* 376 8* /
	hlslvariablesParser_vector_type_return (*vector_type)(hlslvariablesParser_Ctx_struct* ); /* 384 8* /
	hlslvariablesParser_matrix_type_return (*matrix_type)(hlslvariablesParser_Ctx_struct* ); /* 392 8* /
	int (*sampler_type)(hlslvariablesParser_Ctx_struct* ); /* 400 8* /
	int (*texture_type_dx11)(hlslvariablesParser_Ctx_struct* ); /* 408 8* /
	int (*texture_type_dx11_1)(hlslvariablesParser_Ctx_struct* ); /* 416 8* /
	int (*texture_type_dx11_2)(hlslvariablesParser_Ctx_struct* ); /* 424 8* /
	int (*texture_type_dx11_3)(hlslvariablesParser_Ctx_struct* ); /* 432 8* /
	int (*texture_type_vulkan_hlsl)(hlslvariablesParser_Ctx_struct* ); /* 440 8* /
	void (*type_modifier)(hlslvariablesParser_Ctx_struct* ); /* 448 8* /
	hlslvariablesParser_storage_class_return (*storage_class)(hlslvariablesParser_Ctx_struct* ); /* 456 8* /
	const char* (*interpolation_modifier)(hlslvariablesParser_Ctx_struct* ); /* 464 8* /
	void (*accept_some_interpolation_modifiers)(hlslvariablesParser_Ctx_struct* ); /* 472 8* /
	void (*function_attribute)(hlslvariablesParser_Ctx_struct* ); /* 480 8* /
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* (*function_attribute_def)(hlslvariablesParser_Ctx_struct* ); /* 488 8* /
	void (*function_attribute_list)(hlslvariablesParser_Ctx_struct* , CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* ); /* 496 8* /
	void (*function_specifier)(hlslvariablesParser_Ctx_struct* ); /* 504 8* /
	hlslvariablesParser_function_scope_return (*function_scope)(hlslvariablesParser_Ctx_struct* ); /* 512 8* /
	void (*code_scope)(hlslvariablesParser_Ctx_struct* ); /* 520 8* /
	hlslvariablesParser_function_parameter_list_return (*function_parameter_list)(hlslvariablesParser_Ctx_struct* ); /* 528 8* /
	void (*forward_declaration)(hlslvariablesParser_Ctx_struct* ); /* 536 8* /
	const char* (*getGrammarFileName)(void); /* 544 8* /
	void (*free)(hlslvariablesParser_Ctx_struct* ); /* 552 8* /
};

// <0028A204> ../vfx_dx/../vfx_vulkan/generated_antlr_code/hlslvariablesParser.h:412
phlslvariablesParser hlslvariablesParserNew(pANTLR3_COMMON_TOKEN_STREAM)
{
} /* size: 0 */

