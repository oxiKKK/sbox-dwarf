
//
// thirdparty/spirv-reflect/spirv_reflect.h
//
//	referenced by: librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 18
//	structs: 20
//

// <009963AA> ../thirdparty/spirv-reflect/spirv_reflect.h:340
// member variables: 3
// struct size: 24
struct SpvReflectNumericTraits {
	/* ../thirdparty/spirv-reflect/spirv_reflect.h:341 */
	struct Scalar {
		uint32_t width; /* 0 4 */
		uint32_t signedness; /* 4 4 */
	};
	/* ../thirdparty/spirv-reflect/spirv_reflect.h:346 */
	struct Vector {
		uint32_t component_count; /* 0 4 */
	};
	/* ../thirdparty/spirv-reflect/spirv_reflect.h:350 */
	struct Matrix {
		uint32_t column_count; /* 0 4 */
		uint32_t row_count; /* 4 4 */
		uint32_t stride; /* 8 4 */
	};
	Scalar scalar; /* 0 8 */
	Vector vector; /* 8 4 */
	Matrix matrix; /* 12 12 */
};

// <0016B4FC> ../../thirdparty/spirv-reflect/spirv_reflect.h:340
// member variables: 3
// struct size: 24
struct SpvReflectNumericTraits {
	/* ../../thirdparty/spirv-reflect/spirv_reflect.h:341 */
	struct Scalar {
		uint32_t width; /* 0 4 */
		uint32_t signedness; /* 4 4 */
	};
	/* ../../thirdparty/spirv-reflect/spirv_reflect.h:346 */
	struct Vector {
		uint32_t component_count; /* 0 4 */
	};
	/* ../../thirdparty/spirv-reflect/spirv_reflect.h:350 */
	struct Matrix {
		uint32_t column_count; /* 0 4 */
		uint32_t row_count; /* 4 4 */
		uint32_t stride; /* 8 4 */
	};
	Scalar scalar; /* 0 8 */
	Vector vector; /* 8 4 */
	Matrix matrix; /* 12 12 */
};

// <00996483> ../thirdparty/spirv-reflect/spirv_reflect.h:357
// member variables: 6
// struct size: 24
struct SpvReflectImageTraits {
	SpvDim dim; /* 0 4 */
	uint32_t depth; /* 4 4 */
	uint32_t arrayed; /* 8 4 */
	uint32_t ms; /* 12 4 */
	uint32_t sampled; /* 16 4 */
	SpvImageFormat image_format; /* 20 4 */
};

// <00996500> ../thirdparty/spirv-reflect/spirv_reflect.h:370
// member variables: 4
// struct size: 264
struct SpvReflectArrayTraits {
	uint32_t dims_count; /* 0 4 */
	uint32_t dims[32]; /* 4 128 */
	uint32_t spec_constant_op_ids[32]; /* 132 128 */
	uint32_t stride; /* 260 4 */
};

// <00996560> ../thirdparty/spirv-reflect/spirv_reflect.h:382
// member variables: 2
// struct size: 132
struct SpvReflectBindingArrayTraits {
	uint32_t dims_count; /* 0 4 */
	uint32_t dims[32]; /* 4 128 */
};

// <0099659C> ../thirdparty/spirv-reflect/spirv_reflect.h:390
// member variables: 12
// struct size: 376
struct SpvReflectTypeDescription {
	/* ../thirdparty/spirv-reflect/spirv_reflect.h:400 */
	struct Traits {
		SpvReflectNumericTraits numeric; /* 0 24 */
		SpvReflectImageTraits image; /* 24 24 */
		SpvReflectArrayTraits array; /* 48 264 */
	};
	uint32_t id; /* 0 4 */
	SpvOp op; /* 4 4 */
	const char * type_name; /* 8 8 */
	const char * struct_member_name; /* 16 8 */
	SpvStorageClass storage_class; /* 24 4 */
	SpvReflectTypeFlags type_flags; /* 28 4 */
	SpvReflectDecorationFlags decoration_flags; /* 32 4 */
	Traits traits; /* 36 312 */
	SpvReflectTypeDescription * struct_type_description; /* 352 8 */
	uint32_t copied; /* 360 4 */
	uint32_t member_count; /* 364 4 */
	SpvReflectTypeDescription * members; /* 368 8 */
};

// <0016B6FB> ../../thirdparty/spirv-reflect/spirv_reflect.h:390
// member variables: 12
// struct size: 376
struct SpvReflectTypeDescription {
	/* ../../thirdparty/spirv-reflect/spirv_reflect.h:400 */
	struct Traits {
		SpvReflectNumericTraits numeric; /* 0 24 */
		SpvReflectImageTraits image; /* 24 24 */
		SpvReflectArrayTraits array; /* 48 264 */
	};
	uint32_t id; /* 0 4 */
	SpvOp op; /* 4 4 */
	const char * type_name; /* 8 8 */
	const char * struct_member_name; /* 16 8 */
	SpvStorageClass storage_class; /* 24 4 */
	SpvReflectTypeFlags type_flags; /* 28 4 */
	SpvReflectDecorationFlags decoration_flags; /* 32 4 */
	Traits traits; /* 36 312 */
	SpvReflectTypeDescription * struct_type_description; /* 352 8 */
	uint32_t copied; /* 360 4 */
	uint32_t member_count; /* 364 4 */
	SpvReflectTypeDescription * members; /* 368 8 */
};

// <009966C5> ../thirdparty/spirv-reflect/spirv_reflect.h:424
// member variables: 15
// struct size: 376
struct SpvReflectInterfaceVariable {
	/* ../thirdparty/spirv-reflect/spirv_reflect.h:447 */
	struct {
		uint32_t location; /* 0 4 */
	};
	uint32_t spirv_id; /* 0 4 */
	const char * name; /* 8 8 */
	uint32_t location; /* 16 4 */
	uint32_t component; /* 20 4 */
	SpvStorageClass storage_class; /* 24 4 */
	const char * semantic; /* 32 8 */
	SpvReflectDecorationFlags decoration_flags; /* 40 4 */
	SpvBuiltIn built_in; /* 44 4 */
	SpvReflectNumericTraits numeric; /* 48 24 */
	SpvReflectArrayTraits array; /* 72 264 */
	uint32_t member_count; /* 336 4 */
	SpvReflectInterfaceVariable * members; /* 344 8 */
	SpvReflectFormat format; /* 352 4 */
	SpvReflectTypeDescription * type_description; /* 360 8 */
	struct {
		uint32_t location; /* 368 4 */
	} word_offset; /* 368 4 */
};

// <0016B825> ../../thirdparty/spirv-reflect/spirv_reflect.h:424
// member variables: 15
// struct size: 376
struct SpvReflectInterfaceVariable {
	/* ../../thirdparty/spirv-reflect/spirv_reflect.h:447 */
	struct {
		uint32_t location; /* 0 4 */
	};
	uint32_t spirv_id; /* 0 4 */
	const char * name; /* 8 8 */
	uint32_t location; /* 16 4 */
	uint32_t component; /* 20 4 */
	SpvStorageClass storage_class; /* 24 4 */
	const char * semantic; /* 32 8 */
	SpvReflectDecorationFlags decoration_flags; /* 40 4 */
	SpvBuiltIn built_in; /* 44 4 */
	SpvReflectNumericTraits numeric; /* 48 24 */
	SpvReflectArrayTraits array; /* 72 264 */
	uint32_t member_count; /* 336 4 */
	SpvReflectInterfaceVariable * members; /* 344 8 */
	SpvReflectFormat format; /* 352 4 */
	SpvReflectTypeDescription * type_description; /* 360 8 */
	struct {
		uint32_t location; /* 368 4 */
	} word_offset; /* 368 4 */
};

// <00996805> ../thirdparty/spirv-reflect/spirv_reflect.h:455
// member variables: 14
// struct size: 360
struct SpvReflectBlockVariable {
	/* ../thirdparty/spirv-reflect/spirv_reflect.h:473 */
	struct {
		uint32_t offset; /* 0 4 */
	};
	uint32_t spirv_id; /* 0 4 */
	const char * name; /* 8 8 */
	uint32_t offset; /* 16 4 */
	uint32_t absolute_offset; /* 20 4 */
	uint32_t size; /* 24 4 */
	uint32_t padded_size; /* 28 4 */
	SpvReflectDecorationFlags decoration_flags; /* 32 4 */
	SpvReflectNumericTraits numeric; /* 36 24 */
	SpvReflectArrayTraits array; /* 60 264 */
	SpvReflectVariableFlags flags; /* 324 4 */
	uint32_t member_count; /* 328 4 */
	SpvReflectBlockVariable * members; /* 336 8 */
	SpvReflectTypeDescription * type_description; /* 344 8 */
	struct {
		uint32_t offset; /* 352 4 */
	} word_offset; /* 352 4 */
};

// <0016B964> ../../thirdparty/spirv-reflect/spirv_reflect.h:455
// member variables: 14
// struct size: 360
struct SpvReflectBlockVariable {
	/* ../../thirdparty/spirv-reflect/spirv_reflect.h:473 */
	struct {
		uint32_t offset; /* 0 4 */
	};
	uint32_t spirv_id; /* 0 4 */
	const char * name; /* 8 8 */
	uint32_t offset; /* 16 4 */
	uint32_t absolute_offset; /* 20 4 */
	uint32_t size; /* 24 4 */
	uint32_t padded_size; /* 28 4 */
	SpvReflectDecorationFlags decoration_flags; /* 32 4 */
	SpvReflectNumericTraits numeric; /* 36 24 */
	SpvReflectArrayTraits array; /* 60 264 */
	SpvReflectVariableFlags flags; /* 324 4 */
	uint32_t member_count; /* 328 4 */
	SpvReflectBlockVariable * members; /* 336 8 */
	SpvReflectTypeDescription * type_description; /* 344 8 */
	struct {
		uint32_t offset; /* 352 4 */
	} word_offset; /* 352 4 */
};

// <0099692F> ../thirdparty/spirv-reflect/spirv_reflect.h:482
// member variables: 20
// struct size: 616
struct SpvReflectDescriptorBinding {
	/* ../thirdparty/spirv-reflect/spirv_reflect.h:502 */
	struct {
		uint32_t binding; /* 0 4 */
		uint32_t set; /* 4 4 */
	};
	uint32_t spirv_id; /* 0 4 */
	const char * name; /* 8 8 */
	uint32_t binding; /* 16 4 */
	uint32_t input_attachment_index; /* 20 4 */
	uint32_t set; /* 24 4 */
	SpvReflectDescriptorType descriptor_type; /* 28 4 */
	SpvReflectResourceType resource_type; /* 32 4 */
	SpvReflectImageTraits image; /* 36 24 */
	SpvReflectBlockVariable block; /* 64 360 */
	SpvReflectBindingArrayTraits array; /* 424 132 */
	uint32_t count; /* 556 4 */
	uint32_t accessed; /* 560 4 */
	uint32_t uav_counter_id; /* 564 4 */
	SpvReflectDescriptorBinding * uav_counter_binding; /* 568 8 */
	uint32_t byte_address_buffer_offset_count; /* 576 4 */
	uint32_t * byte_address_buffer_offsets; /* 584 8 */
	SpvReflectTypeDescription * type_description; /* 592 8 */
	struct {
		uint32_t binding; /* 600 4 */
		uint32_t set; /* 604 4 */
	} word_offset; /* 600 8 */
	SpvReflectDecorationFlags decoration_flags; /* 608 4 */
	SpvReflectUserType user_type; /* 612 4 */
};

// <0016BA8D> ../../thirdparty/spirv-reflect/spirv_reflect.h:482
// member variables: 20
// struct size: 616
struct SpvReflectDescriptorBinding {
	/* ../../thirdparty/spirv-reflect/spirv_reflect.h:502 */
	struct {
		uint32_t binding; /* 0 4 */
		uint32_t set; /* 4 4 */
	};
	uint32_t spirv_id; /* 0 4 */
	const char * name; /* 8 8 */
	uint32_t binding; /* 16 4 */
	uint32_t input_attachment_index; /* 20 4 */
	uint32_t set; /* 24 4 */
	SpvReflectDescriptorType descriptor_type; /* 28 4 */
	SpvReflectResourceType resource_type; /* 32 4 */
	SpvReflectImageTraits image; /* 36 24 */
	SpvReflectBlockVariable block; /* 64 360 */
	SpvReflectBindingArrayTraits array; /* 424 132 */
	uint32_t count; /* 556 4 */
	uint32_t accessed; /* 560 4 */
	uint32_t uav_counter_id; /* 564 4 */
	SpvReflectDescriptorBinding * uav_counter_binding; /* 568 8 */
	uint32_t byte_address_buffer_offset_count; /* 576 4 */
	uint32_t * byte_address_buffer_offsets; /* 584 8 */
	SpvReflectTypeDescription * type_description; /* 592 8 */
	struct {
		uint32_t binding; /* 600 4 */
		uint32_t set; /* 604 4 */
	} word_offset; /* 600 8 */
	SpvReflectDecorationFlags decoration_flags; /* 608 4 */
	SpvReflectUserType user_type; /* 612 4 */
};

// <00996AD1> ../thirdparty/spirv-reflect/spirv_reflect.h:515
// member variables: 3
// struct size: 16
struct SpvReflectDescriptorSet {
	uint32_t set; /* 0 4 */
	uint32_t binding_count; /* 4 4 */
	SpvReflectDescriptorBinding * * bindings; /* 8 8 */
};

// <00996B2F> ../thirdparty/spirv-reflect/spirv_reflect.h:528
// member variables: 21
// struct size: 152
struct SpvReflectEntryPoint {
	/* ../thirdparty/spirv-reflect/spirv_reflect.h:553 */
	struct LocalSize {
		uint32_t x; /* 0 4 */
		uint32_t y; /* 4 4 */
		uint32_t z; /* 8 4 */
	};
	const char * name; /* 0 8 */
	uint32_t id; /* 8 4 */
	SpvExecutionModel spirv_execution_model; /* 12 4 */
	SpvReflectShaderStageFlagBits shader_stage; /* 16 4 */
	uint32_t input_variable_count; /* 20 4 */
	SpvReflectInterfaceVariable * * input_variables; /* 24 8 */
	uint32_t output_variable_count; /* 32 4 */
	SpvReflectInterfaceVariable * * output_variables; /* 40 8 */
	uint32_t interface_variable_count; /* 48 4 */
	SpvReflectInterfaceVariable * interface_variables; /* 56 8 */
	uint32_t descriptor_set_count; /* 64 4 */
	SpvReflectDescriptorSet * descriptor_sets; /* 72 8 */
	uint32_t used_uniform_count; /* 80 4 */
	uint32_t * used_uniforms; /* 88 8 */
	uint32_t used_push_constant_count; /* 96 4 */
	uint32_t * used_push_constants; /* 104 8 */
	uint32_t execution_mode_count; /* 112 4 */
	SpvExecutionMode * execution_modes; /* 120 8 */
	LocalSize local_size; /* 128 12 */
	uint32_t invocations; /* 140 4 */
	uint32_t output_vertices; /* 144 4 */
};

// <0016BC8F> ../../thirdparty/spirv-reflect/spirv_reflect.h:528
// member variables: 21
// struct size: 152
struct SpvReflectEntryPoint {
	/* ../../thirdparty/spirv-reflect/spirv_reflect.h:553 */
	struct LocalSize {
		uint32_t x; /* 0 4 */
		uint32_t y; /* 4 4 */
		uint32_t z; /* 8 4 */
	};
	const char * name; /* 0 8 */
	uint32_t id; /* 8 4 */
	SpvExecutionModel spirv_execution_model; /* 12 4 */
	SpvReflectShaderStageFlagBits shader_stage; /* 16 4 */
	uint32_t input_variable_count; /* 20 4 */
	SpvReflectInterfaceVariable * * input_variables; /* 24 8 */
	uint32_t output_variable_count; /* 32 4 */
	SpvReflectInterfaceVariable * * output_variables; /* 40 8 */
	uint32_t interface_variable_count; /* 48 4 */
	SpvReflectInterfaceVariable * interface_variables; /* 56 8 */
	uint32_t descriptor_set_count; /* 64 4 */
	SpvReflectDescriptorSet * descriptor_sets; /* 72 8 */
	uint32_t used_uniform_count; /* 80 4 */
	uint32_t * used_uniforms; /* 88 8 */
	uint32_t used_push_constant_count; /* 96 4 */
	uint32_t * used_push_constants; /* 104 8 */
	uint32_t execution_mode_count; /* 112 4 */
	SpvExecutionMode * execution_modes; /* 120 8 */
	LocalSize local_size; /* 128 12 */
	uint32_t invocations; /* 140 4 */
	uint32_t output_vertices; /* 144 4 */
};

// <00996CF2> ../thirdparty/spirv-reflect/spirv_reflect.h:565
// member variables: 2
// struct size: 8
struct SpvReflectCapability {
	SpvCapability value; /* 0 4 */
	uint32_t word_offset; /* 4 4 */
};

// <00996D2E> ../thirdparty/spirv-reflect/spirv_reflect.h:574
// member variables: 3
// struct size: 16
struct SpvReflectSpecializationConstant {
	uint32_t spirv_id; /* 0 4 */
	uint32_t constant_id; /* 4 4 */
	const char * name; /* 8 8 */
};

// <00996D7A> ../thirdparty/spirv-reflect/spirv_reflect.h:583
// member variables: 28
// struct size: 1,216
struct SpvReflectShaderModule {
	/* ../thirdparty/spirv-reflect/spirv_reflect.h:612 */
	struct Internal {
		SpvReflectModuleFlags module_flags; /* 0 4 */
		size_t spirv_size; /* 8 8 */
		uint32_t * spirv_code; /* 16 8 */
		uint32_t spirv_word_count; /* 24 4 */
		size_t type_description_count; /* 32 8 */
		SpvReflectTypeDescription * type_descriptions; /* 40 8 */
	};
	SpvReflectGenerator generator; /* 0 4 */
	const char * entry_point_name; /* 8 8 */
	uint32_t entry_point_id; /* 16 4 */
	uint32_t entry_point_count; /* 20 4 */
	SpvReflectEntryPoint * entry_points; /* 24 8 */
	SpvSourceLanguage source_language; /* 32 4 */
	uint32_t source_language_version; /* 36 4 */
	const char * source_file; /* 40 8 */
	const char * source_source; /* 48 8 */
	uint32_t capability_count; /* 56 4 */
	SpvReflectCapability * capabilities; /* 64 8 */
	SpvExecutionModel spirv_execution_model; /* 72 4 */
	SpvReflectShaderStageFlagBits shader_stage; /* 76 4 */
	uint32_t descriptor_binding_count; /* 80 4 */
	SpvReflectDescriptorBinding * descriptor_bindings; /* 88 8 */
	uint32_t descriptor_set_count; /* 96 4 */
	SpvReflectDescriptorSet descriptor_sets[64]; /* 104 1024 */
	uint32_t input_variable_count; /* 1128 4 */
	SpvReflectInterfaceVariable * * input_variables; /* 1136 8 */
	uint32_t output_variable_count; /* 1144 4 */
	SpvReflectInterfaceVariable * * output_variables; /* 1152 8 */
	uint32_t interface_variable_count; /* 1160 4 */
	SpvReflectInterfaceVariable * interface_variables; /* 1168 8 */
	uint32_t push_constant_block_count; /* 1176 4 */
	SpvReflectBlockVariable * push_constant_blocks; /* 1184 8 */
	uint32_t spec_constant_count; /* 1192 4 */
	SpvReflectSpecializationConstant * spec_constants; /* 1200 8 */
	Internal * _internal; /* 1208 8 */
};

// <0016BEDB> ../../thirdparty/spirv-reflect/spirv_reflect.h:583
// member variables: 28
// struct size: 1,216
struct SpvReflectShaderModule {
	/* ../../thirdparty/spirv-reflect/spirv_reflect.h:612 */
	struct Internal {
		SpvReflectModuleFlags module_flags; /* 0 4 */
		size_t spirv_size; /* 8 8 */
		uint32_t * spirv_code; /* 16 8 */
		uint32_t spirv_word_count; /* 24 4 */
		size_t type_description_count; /* 32 8 */
		SpvReflectTypeDescription * type_descriptions; /* 40 8 */
	};
	SpvReflectGenerator generator; /* 0 4 */
	const char * entry_point_name; /* 8 8 */
	uint32_t entry_point_id; /* 16 4 */
	uint32_t entry_point_count; /* 20 4 */
	SpvReflectEntryPoint * entry_points; /* 24 8 */
	SpvSourceLanguage source_language; /* 32 4 */
	uint32_t source_language_version; /* 36 4 */
	const char * source_file; /* 40 8 */
	const char * source_source; /* 48 8 */
	uint32_t capability_count; /* 56 4 */
	SpvReflectCapability * capabilities; /* 64 8 */
	SpvExecutionModel spirv_execution_model; /* 72 4 */
	SpvReflectShaderStageFlagBits shader_stage; /* 76 4 */
	uint32_t descriptor_binding_count; /* 80 4 */
	SpvReflectDescriptorBinding * descriptor_bindings; /* 88 8 */
	uint32_t descriptor_set_count; /* 96 4 */
	SpvReflectDescriptorSet descriptor_sets[64]; /* 104 1024 */
	uint32_t input_variable_count; /* 1128 4 */
	SpvReflectInterfaceVariable * * input_variables; /* 1136 8 */
	uint32_t output_variable_count; /* 1144 4 */
	SpvReflectInterfaceVariable * * output_variables; /* 1152 8 */
	uint32_t interface_variable_count; /* 1160 4 */
	SpvReflectInterfaceVariable * interface_variables; /* 1168 8 */
	uint32_t push_constant_block_count; /* 1176 4 */
	SpvReflectBlockVariable * push_constant_blocks; /* 1184 8 */
	uint32_t spec_constant_count; /* 1192 4 */
	SpvReflectSpecializationConstant * spec_constants; /* 1200 8 */
	Internal * _internal; /* 1208 8 */
};

// <009A597E> ../thirdparty/spirv-reflect/spirv_reflect.h:651
SpvReflectResult spvReflectCreateShaderModule2(SpvReflectModuleFlags, size_t, const void *, SpvReflectShaderModule *)
{
} /* size: 0 */

// <009A5939> ../thirdparty/spirv-reflect/spirv_reflect.h:671
void spvReflectDestroyShaderModule(SpvReflectShaderModule *)
{
} /* size: 0 */

// <00173B68> ../../thirdparty/spirv-reflect/spirv_reflect.h:680
uint32_t spvReflectGetCodeSize(const SpvReflectShaderModule *)
{
} /* size: 0 */

// <00173B49> ../../thirdparty/spirv-reflect/spirv_reflect.h:689
const uint32_t* spvReflectGetCode(const SpvReflectShaderModule *)
{
} /* size: 0 */

// <009A5955> ../thirdparty/spirv-reflect/spirv_reflect.h:772
SpvReflectResult spvReflectEnumerateDescriptorSets(const SpvReflectShaderModule *, uint32_t *, SpvReflectDescriptorSet* *)
{
} /* size: 0 */

// <00173B81> ../../thirdparty/spirv-reflect/spirv_reflect.h:1461
SpvReflectResult spvReflectChangeDescriptorBindingNumbers(SpvReflectShaderModule *, const SpvReflectDescriptorBinding *, uint32_t, uint32_t)
{
} /* size: 0 */

// <00A54420> ../thirdparty/spirv-reflect/spirv_reflect.h:1699
void ShaderModule::ShaderModule(size_t size, const void* p_code, SpvReflectModuleFlags flags)
{
} /* size: 0 */

// <00A543DC> ../thirdparty/spirv-reflect/spirv_reflect.h:1699
inline void ShaderModule::ShaderModule(size_t size, const void* p_code, SpvReflectModuleFlags flags)
{
} /* size: 0 */

// <00A543C5> ../thirdparty/spirv-reflect/spirv_reflect.h:1736
void ShaderModule::~ShaderModule()
{
} /* size: 0 */

// <00A543A8> ../thirdparty/spirv-reflect/spirv_reflect.h:1736
inline void ShaderModule::~ShaderModule()
{
} /* size: 0 */

// <0017A167> ../../thirdparty/spirv-reflect/spirv_reflect.h:1760
inline void ShaderModule::GetResult()
{
} /* size: 0 */

// <0017A14B> ../../thirdparty/spirv-reflect/spirv_reflect.h:1770
inline void ShaderModule::GetShaderModule()
{
} /* size: 0 */

// <0017A12F> ../../thirdparty/spirv-reflect/spirv_reflect.h:1780
inline void ShaderModule::GetCodeSize()
{
} /* size: 0 */

// <0017A113> ../../thirdparty/spirv-reflect/spirv_reflect.h:1790
inline void ShaderModule::GetCode()
{
} /* size: 0 */

// <0017A0F7> ../../thirdparty/spirv-reflect/spirv_reflect.h:1818
inline void ShaderModule::GetEntryPointCount()
{
} /* size: 0 */

// <0017A0CE> ../../thirdparty/spirv-reflect/spirv_reflect.h:1827
inline void ShaderModule::GetEntryPointName(uint32_t index)
{
} /* size: 0 */

// <00A54371> ../thirdparty/spirv-reflect/spirv_reflect.h:1899
inline void ShaderModule::EnumerateDescriptorSets(uint32_t* p_count, SpvReflectDescriptorSet** pp_sets)
{
} /* size: 0 */

// <0017A055> ../../thirdparty/spirv-reflect/spirv_reflect.h:2375
inline void ShaderModule::ChangeDescriptorBindingNumbers(const SpvReflectDescriptorBinding* p_binding, uint32_t new_binding_number, uint32_t new_set_number)
{
} /* size: 0 */

