
//
// thirdparty/spirv-reflect/spirv_reflect.c
//
//	referenced by: librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 118
//	structs: 12
//

// <00D56601> ../thirdparty/spirv-reflect/spirv_reflect.c:68
// member variables: 2
// struct size: 8
struct SpvReflectPrvArrayTraits {
	uint32_t element_type_id; /* 0 4 */
	uint32_t length_id; /* 4 4 */
};

// <00D56639> ../thirdparty/spirv-reflect/spirv_reflect.c:73
// member variables: 7
// struct size: 28
struct SpvReflectPrvImageTraits {
	uint32_t sampled_type_id; /* 0 4 */
	SpvDim dim; /* 4 4 */
	uint32_t depth; /* 8 4 */
	uint32_t arrayed; /* 12 4 */
	uint32_t ms; /* 16 4 */
	uint32_t sampled; /* 20 4 */
	SpvImageFormat image_format; /* 24 4 */
};

// <00D566BB> ../thirdparty/spirv-reflect/spirv_reflect.c:83
// member variables: 2
// struct size: 8
struct SpvReflectPrvNumberDecoration {
	uint32_t word_offset; /* 0 4 */
	uint32_t value; /* 4 4 */
};

// <00D566F3> ../thirdparty/spirv-reflect/spirv_reflect.c:88
// member variables: 2
// struct size: 16
struct SpvReflectPrvStringDecoration {
	uint32_t word_offset; /* 0 4 */
	const char * value; /* 8 8 */
};

// <00D5672B> ../thirdparty/spirv-reflect/spirv_reflect.c:93
// member variables: 28
// struct size: 112
struct SpvReflectPrvDecorations {
	bool is_relaxed_precision; /* 0 1 */
	bool is_block; /* 1 1 */
	bool is_buffer_block; /* 2 1 */
	bool is_row_major; /* 3 1 */
	bool is_column_major; /* 4 1 */
	bool is_built_in; /* 5 1 */
	bool is_noperspective; /* 6 1 */
	bool is_flat; /* 7 1 */
	bool is_non_writable; /* 8 1 */
	bool is_non_readable; /* 9 1 */
	bool is_patch; /* 10 1 */
	bool is_per_vertex; /* 11 1 */
	bool is_per_task; /* 12 1 */
	bool is_weight_texture; /* 13 1 */
	bool is_block_match_texture; /* 14 1 */
	SpvReflectUserType user_type; /* 16 4 */
	SpvReflectPrvNumberDecoration set; /* 20 8 */
	SpvReflectPrvNumberDecoration binding; /* 28 8 */
	SpvReflectPrvNumberDecoration input_attachment_index; /* 36 8 */
	SpvReflectPrvNumberDecoration location; /* 44 8 */
	SpvReflectPrvNumberDecoration component; /* 52 8 */
	SpvReflectPrvNumberDecoration offset; /* 60 8 */
	SpvReflectPrvNumberDecoration uav_counter_buffer; /* 68 8 */
	SpvReflectPrvStringDecoration semantic; /* 80 16 */
	uint32_t array_stride; /* 96 4 */
	uint32_t matrix_stride; /* 100 4 */
	uint32_t spec_id; /* 104 4 */
	SpvBuiltIn built_in; /* 108 4 */
};

// <00D568EE> ../thirdparty/spirv-reflect/spirv_reflect.c:124
// member variables: 17
// struct size: 224
struct SpvReflectPrvNode {
	uint32_t result_id; /* 0 4 */
	SpvOp op; /* 4 4 */
	uint32_t result_type_id; /* 8 4 */
	uint32_t type_id; /* 12 4 */
	SpvCapability capability; /* 16 4 */
	SpvStorageClass storage_class; /* 20 4 */
	uint32_t word_offset; /* 24 4 */
	uint32_t word_count; /* 28 4 */
	bool is_type; /* 32 1 */
	SpvReflectPrvArrayTraits array_traits; /* 36 8 */
	SpvReflectPrvImageTraits image_traits; /* 44 28 */
	uint32_t image_type_id; /* 72 4 */
	const char * name; /* 80 8 */
	SpvReflectPrvDecorations decorations; /* 88 112 */
	uint32_t member_count; /* 200 4 */
	const char * * member_names; /* 208 8 */
	SpvReflectPrvDecorations * member_decorations; /* 216 8 */
};

// <00D56A14> ../thirdparty/spirv-reflect/spirv_reflect.c:146
// member variables: 2
// struct size: 16
struct SpvReflectPrvString {
	uint32_t result_id; /* 0 4 */
	const char * string; /* 8 8 */
};

// <00D56A4C> ../thirdparty/spirv-reflect/spirv_reflect.c:159
// member variables: 3
// struct size: 16
struct SpvReflectPrvAccessedVariable {
	SpvReflectPrvNode * p_node; /* 0 8 */
	uint32_t result_id; /* 8 4 */
	uint32_t variable_ptr; /* 12 4 */
};

// <00D56A9E> ../thirdparty/spirv-reflect/spirv_reflect.c:165
// member variables: 6
// struct size: 40
struct SpvReflectPrvFunction {
	uint32_t id; /* 0 4 */
	uint32_t callee_count; /* 4 4 */
	uint32_t * callees; /* 8 8 */
	SpvReflectPrvFunction * * callee_ptrs; /* 16 8 */
	uint32_t accessed_variable_count; /* 24 4 */
	SpvReflectPrvAccessedVariable * accessed_variables; /* 32 8 */
};

// <00D56B28> ../thirdparty/spirv-reflect/spirv_reflect.c:174
// member variables: 6
// struct size: 32
struct SpvReflectPrvAccessChain {
	uint32_t result_id; /* 0 4 */
	uint32_t result_type_id; /* 4 4 */
	uint32_t base_id; /* 8 4 */
	uint32_t index_count; /* 12 4 */
	uint32_t * indexes; /* 16 8 */
	SpvReflectBlockVariable * block_var; /* 24 8 */
};

// <00D56B9C> ../thirdparty/spirv-reflect/spirv_reflect.c:196
// member variables: 2
// struct size: 16
struct SpvReflectPrvPhysicalPointerStruct {
	uint32_t struct_id; /* 0 4 */
	SpvReflectBlockVariable * p_var; /* 8 8 */
};

// <00D56BD4> ../thirdparty/spirv-reflect/spirv_reflect.c:202
// member variables: 23
// struct size: 1,176
struct SpvReflectPrvParser {
	size_t spirv_word_count; /* 0 8 */
	uint32_t * spirv_code; /* 8 8 */
	uint32_t string_count; /* 16 4 */
	SpvReflectPrvString * strings; /* 24 8 */
	SpvSourceLanguage source_language; /* 32 4 */
	uint32_t source_language_version; /* 36 4 */
	uint32_t source_file_id; /* 40 4 */
	const char * source_embedded; /* 48 8 */
	size_t node_count; /* 56 8 */
	SpvReflectPrvNode * nodes; /* 64 8 */
	uint32_t entry_point_count; /* 72 4 */
	uint32_t capability_count; /* 76 4 */
	uint32_t function_count; /* 80 4 */
	SpvReflectPrvFunction * functions; /* 88 8 */
	uint32_t access_chain_count; /* 96 4 */
	SpvReflectPrvAccessChain * access_chains; /* 104 8 */
	uint32_t type_count; /* 112 4 */
	uint32_t descriptor_count; /* 116 4 */
	uint32_t push_constant_count; /* 120 4 */
	SpvReflectTypeDescription * physical_pointer_check[128]; /* 128 1024 */
	uint32_t physical_pointer_count; /* 1152 4 */
	SpvReflectPrvPhysicalPointerStruct * physical_pointer_structs; /* 1160 8 */
	uint32_t physical_pointer_struct_count; /* 1168 4 */
};

// <00D669D6> ../thirdparty/spirv-reflect/spirv_reflect.c:232
uint32_t Max(uint32_t a, uint32_t b)
{
} /* size: 0 */

// <00D669B0> ../thirdparty/spirv-reflect/spirv_reflect.c:233
uint32_t Min(uint32_t a, uint32_t b)
{
} /* size: 0 */

// <00D66985> ../thirdparty/spirv-reflect/spirv_reflect.c:235
uint32_t RoundUp(uint32_t value, uint32_t multiple)
{
} /* size: 0 */

// <00D6691F> ../thirdparty/spirv-reflect/spirv_reflect.c:250
// variables: 2
int SortCompareUint32(const void* a, const void* b)
{
	const uint32_t* p_a; // 251
	const uint32_t* p_b; // 252
} /* size: 9, variables: 2 */

// <00D668B5> ../thirdparty/spirv-reflect/spirv_reflect.c:257
// variables: 2
int SortCompareAccessedVariable(const void* a, const void* b)
{
	const SpvReflectPrvAccessedVariable* p_a; // 258
	const SpvReflectPrvAccessedVariable* p_b; // 259
} /* size: 11, variables: 2 */

// <00D6686E> ../thirdparty/spirv-reflect/spirv_reflect.c:271
// variables: 2
size_t DedupSortedUint32(uint32_t* arr, size_t size)
{
	size_t dedup_idx; // 275
	{
		size_t i; // 276
	}
} /* size: 0, variables: 1 */

// <00D6680D> ../thirdparty/spirv-reflect/spirv_reflect.c:285
// variables: 3
bool SearchSortedUint32(const uint32_t* arr, size_t size, uint32_t target)
{
	size_t lo; // 286
	size_t hi; // 287
	{
		size_t mid; // 289
	}
} /* size: 0, variables: 2 */

// <00D66C7C> ../thirdparty/spirv-reflect/spirv_reflect.c:301
// variables: 5
SpvReflectResult IntersectSortedAccessedVariable(const SpvReflectPrvAccessedVariable* p_arr0, size_t arr0_size, const uint32_t* p_arr1, size_t arr1_size, uint32_t** pp_res, size_t* res_size)
{
	const SpvReflectPrvAccessedVariable* p_arr0_end; // 310
	const uint32_t* p_arr1_end; // 311
	const SpvReflectPrvAccessedVariable* p_idx0; // 313
	const uint32_t* p_idx1; // 314
	{
		uint32_t* p_idxr; // 332
	}
} /* size: 250, variables: 4 */

// <00D66723> ../thirdparty/spirv-reflect/spirv_reflect.c:350
// variable: 1
bool InRange(const SpvReflectPrvParser* p_parser, uint32_t index)
{
	bool in_range; // 351
} /* size: 0, variables: 1 */

// <00D666DC> ../thirdparty/spirv-reflect/spirv_reflect.c:358
// variable: 1
SpvReflectResult ReadU32(SpvReflectPrvParser* p_parser, uint32_t word_offset, uint32_t* p_value)
{
	SpvReflectResult result; // 362
} /* size: 0, variables: 1 */

// <00D66B44> ../thirdparty/spirv-reflect/spirv_reflect.c:405
// variables: 7
// function call: 1
SpvReflectResult ReadStr(SpvReflectPrvParser* p_parser, uint32_t word_offset, uint32_t word_count, uint32_t* p_buf_size, char* p_buf, uint32_t word_index)
{
	uint32_t limit; // 407
	SpvReflectResult result; // 411
	InRange(const SpvReflectPrvParser* p_parser,
		uint32_t index);  // 412
	{
		const char* c_str; // 413
		uint32_t n; // 414
		uint32_t length_with_terminator; // 415
		{
			uint32_t i; // 416
			{
				char c; // 417
			}
		}
	}
} /* size: 88, variables: 2, inline expansions: 1 (3 bytes) */

// <00D66620> ../thirdparty/spirv-reflect/spirv_reflect.c:405
// variables: 7
SpvReflectResult ReadStr(SpvReflectPrvParser* p_parser, uint32_t word_offset, uint32_t word_index, uint32_t word_count, uint32_t* p_buf_size, char* p_buf)
{
	uint32_t limit; // 407
	SpvReflectResult result; // 411
	{
		const char* c_str; // 413
		uint32_t n; // 414
		uint32_t length_with_terminator; // 415
		{
			uint32_t i; // 416
			{
				char c; // 417
			}
		}
	}
} /* size: 0, variables: 2 */

// <00D66D47> ../thirdparty/spirv-reflect/spirv_reflect.c:444
// variable: 1
SpvReflectDecorationFlags ApplyDecorations(const SpvReflectPrvDecorations* p_decoration_fields)
{
	SpvReflectDecorationFlags decorations; // 445
} /* size: 142, variables: 1 */

// <00D665C4> ../thirdparty/spirv-reflect/spirv_reflect.c:494
void ApplyNumericTraits(const SpvReflectTypeDescription* p_type, SpvReflectNumericTraits* p_numeric_traits)
{
} /* size: 0 */

// <00D66595> ../thirdparty/spirv-reflect/spirv_reflect.c:498
void ApplyArrayTraits(const SpvReflectTypeDescription* p_type, SpvReflectArrayTraits* p_array_traits)
{
} /* size: 0 */

// <00D66575> ../thirdparty/spirv-reflect/spirv_reflect.c:502
bool IsSpecConstant(const SpvReflectPrvNode* p_node)
{
} /* size: 0 */

// <00D6651F> ../thirdparty/spirv-reflect/spirv_reflect.c:507
// variables: 3
SpvReflectPrvNode* FindNode(SpvReflectPrvParser* p_parser, uint32_t result_id)
{
	SpvReflectPrvNode* p_node; // 508
	{
		size_t i; // 509
		{
			SpvReflectPrvNode* p_elem; // 510
		}
	}
} /* size: 0, variables: 1 */

// <00D664C9> ../thirdparty/spirv-reflect/spirv_reflect.c:519
// variables: 3
SpvReflectTypeDescription* FindType(SpvReflectShaderModule* p_module, uint32_t type_id)
{
	SpvReflectTypeDescription* p_type; // 520
	{
		size_t i; // 521
		{
			SpvReflectTypeDescription* p_elem; // 522
		}
	}
} /* size: 0, variables: 1 */

// <00D66483> ../thirdparty/spirv-reflect/spirv_reflect.c:531
// variables: 2
SpvReflectPrvAccessChain* FindAccessChain(SpvReflectPrvParser* p_parser, uint32_t id)
{
	uint32_t ac_cnt; // 532
	{
		uint32_t i; // 533
	}
} /* size: 0, variables: 1 */

// <00D6642E> ../thirdparty/spirv-reflect/spirv_reflect.c:541
// variables: 3
uint32_t FindBaseId(SpvReflectPrvParser* p_parser, SpvReflectPrvAccessChain* ac)
{
	uint32_t base_id; // 542
	SpvReflectPrvNode* base_node; // 543
	{
		SpvReflectPrvAccessChain* base_ac; // 563
	}
} /* size: 0, variables: 2 */

// <00D663CE> ../thirdparty/spirv-reflect/spirv_reflect.c:576
// variables: 4
SpvReflectBlockVariable* GetRefBlkVar(SpvReflectPrvParser* p_parser, SpvReflectPrvAccessChain* ac)
{
	uint32_t base_id; // 577
	SpvReflectPrvNode* base_node; // 578
	SpvReflectPrvAccessChain* base_ac; // 581
	SpvReflectBlockVariable* base_var; // 583
} /* size: 0, variables: 4 */

// <00D661A8> ../thirdparty/spirv-reflect/spirv_reflect.c:588
// variables: 7
// function calls: 4
bool IsPointerToPointer(SpvReflectPrvParser* p_parser, uint32_t type_id)
{
	SpvReflectPrvNode* ptr_node; // 589
	uint32_t pte_id; // 593
	SpvReflectPrvNode* pte_node; // 595
	{
		size_t i; // 509
		{
			SpvReflectPrvNode* p_elem; // 510
		}
	}
	FindNode(SpvReflectPrvParser* p_parser,
		uint32_t result_id);  // 589
	InRange(const SpvReflectPrvParser* p_parser,
		uint32_t index);  // 363
	ReadU32(SpvReflectPrvParser* p_parser,
		uint32_t word_offset,
		uint32_t* p_value);  // 594
	{
		size_t i; // 509
		{
			SpvReflectPrvNode* p_elem; // 510
		}
	}
	FindNode(SpvReflectPrvParser* p_parser,
		uint32_t result_id);  // 595
} /* size: 162, variables: 3, inline expansions: 4 (118 bytes) */

// <00D6616E> ../thirdparty/spirv-reflect/spirv_reflect.c:602
SpvReflectResult CreateParser(size_t size, void* p_code, SpvReflectPrvParser* p_parser)
{
} /* size: 0 */

// <00D66114> ../thirdparty/spirv-reflect/spirv_reflect.c:624
// variables: 4
void DestroyParser(SpvReflectPrvParser* p_parser)
{
	{
		size_t i; // 627
		{
			SpvReflectPrvNode* p_node; // 628
		}
	}
	{
		size_t i; // 638
	}
	{
		uint32_t i; // 645
	}
} /* size: 0 */

// <00D65BFF> ../thirdparty/spirv-reflect/spirv_reflect.c:662
// variables: 75
SpvReflectResult ParseNodes(SpvReflectPrvParser* p_parser)
{
	uint32_t* p_spirv; // 666
	uint32_t spirv_word_index; // 667
	uint32_t node_count; // 670
	uint32_t function_node; // 713
	uint32_t node_index; // 724
	uint32_t access_chain_index; // 725
	{
		uint32_t word; // 672
		SpvOp op; // 673
		uint32_t node_word_count; // 674
	}
	{
		uint32_t i; // 696
	}
	{
		uint32_t word; // 728
		SpvOp op; // 729
		uint32_t node_word_count; // 730
		SpvReflectPrvNode* p_node; // 732
		{
			uint32_t checked_readu32_cast_u32; // 746
			SpvReflectResult checked_readu32_cast_result; // 746
		}
		{
			SpvReflectResult checked_readu32_result; // 747
		}
		{
			SpvReflectResult checked_readu32_result; // 749
		}
		{
			const char* p_source; // 752
			const size_t  source_len; // 754
			char* p_source_temp; // 755
		}
		{
			const char* p_source; // 773
			const size_t  source_len; // 775
			const size_t  embedded_source_len; // 776
			char* p_continued_source; // 777
		}
		{
			SpvReflectResult checked_readu32_result; // 800
		}
		{
			uint32_t member_offset; // 806
			uint32_t name_start; // 807
		}
		{
			SpvReflectResult checked_readu32_result; // 838
		}
		{
			SpvReflectResult checked_readu32_result; // 843
		}
		{
			SpvReflectResult checked_readu32_result; // 844
		}
		{
			SpvReflectResult checked_readu32_result; // 845
		}
		{
			SpvReflectResult checked_readu32_result; // 846
		}
		{
			SpvReflectResult checked_readu32_result; // 847
		}
		{
			SpvReflectResult checked_readu32_result; // 848
		}
		{
			SpvReflectResult checked_readu32_result; // 849
		}
		{
			SpvReflectResult checked_readu32_result; // 850
		}
		{
			SpvReflectResult checked_readu32_result; // 855
		}
		{
			SpvReflectResult checked_readu32_result; // 856
		}
		{
			SpvReflectResult checked_readu32_result; // 861
		}
		{
			SpvReflectResult checked_readu32_result; // 862
		}
		{
			SpvReflectResult checked_readu32_result; // 863
		}
		{
			SpvReflectResult checked_readu32_result; // 868
		}
		{
			SpvReflectResult checked_readu32_result; // 869
		}
		{
			uint32_t result_id; // 874
			SpvReflectPrvNode* p_fwd_node; // 877
			{
				SpvReflectResult checked_readu32_result; // 875
			}
			{
				SpvReflectResult checked_readu32_result; // 883
			}
			{
				SpvReflectResult checked_readu32_result; // 884
			}
		}
		{
			SpvReflectResult checked_readu32_result; // 889
		}
		{
			SpvReflectResult checked_readu32_result; // 890
		}
		{
			SpvReflectResult checked_readu32_result; // 900
		}
		{
			SpvReflectResult checked_readu32_result; // 901
		}
		{
			SpvReflectResult checked_readu32_result; // 909
		}
		{
			SpvReflectResult checked_readu32_result; // 910
		}
		{
			SpvReflectResult checked_readu32_result; // 914
		}
		{
			SpvReflectResult checked_readu32_result; // 915
		}
		{
			SpvReflectResult checked_readu32_result; // 916
		}
		{
			SpvReflectResult checked_readu32_result; // 921
		}
		{
			SpvReflectResult checked_readu32_result; // 922
		}
		{
			SpvReflectPrvAccessChain* p_access_chain; // 926
			{
				SpvReflectResult checked_readu32_result; // 927
			}
			{
				SpvReflectResult checked_readu32_result; // 928
			}
			{
				SpvReflectResult checked_readu32_result; // 929
			}
			{
				uint32_t index_index; // 941
				{
					uint32_t index_id; // 943
					SpvReflectPrvNode* p_index_value_node; // 946
					{
						SpvReflectResult checked_readu32_result; // 944
					}
					{
						uint32_t index_value; // 950
						{
							SpvReflectResult checked_readu32_result; // 951
						}
					}
				}
			}
		}
		{
			SpvReflectResult checked_readu32_result; // 962
		}
		{
			SpvReflectPrvNode* p_func_node; // 972
			{
				SpvReflectResult checked_readu32_result; // 973
			}
		}
		{
			SpvReflectResult checked_readu32_result; // 983
		}
		{
			SpvReflectResult checked_readu32_result; // 992
		}
	}
} /* size: 0, variables: 6 */

// <00D65B8B> ../thirdparty/spirv-reflect/spirv_reflect.c:1007
// variables: 6
SpvReflectResult ParseStrings(SpvReflectPrvParser* p_parser)
{
	{
		uint32_t string_index; // 1021
		{
			size_t i; // 1022
			{
				SpvReflectPrvNode* p_node; // 1023
				SpvReflectPrvString* p_string; // 1035
				uint32_t string_start; // 1039
				{
					SpvReflectResult checked_readu32_result; // 1036
				}
			}
		}
	}
} /* size: 0 */

// <00D65B22> ../thirdparty/spirv-reflect/spirv_reflect.c:1050
// variables: 4
SpvReflectResult ParseSource(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module)
{
	{
		uint32_t i; // 1057
		{
			SpvReflectPrvString* p_string; // 1058
		}
	}
	{
		const size_t  source_len; // 1068
		char* p_source; // 1069
	}
} /* size: 0 */

// <00D659F9> ../thirdparty/spirv-reflect/spirv_reflect.c:1088
// variables: 14
SpvReflectResult ParseFunction(SpvReflectPrvParser* p_parser, SpvReflectPrvNode* p_func_node, SpvReflectPrvFunction* p_func, size_t first_label_index)
{
	{
		size_t i; // 1096
		{
			SpvReflectPrvNode* p_node; // 1097
		}
	}
	{
		size_t i; // 1143
		{
			SpvReflectPrvNode* p_node; // 1144
			{
				SpvReflectResult checked_readu32_result; // 1150
			}
			{
				const uint32_t  result_index; // 1161
				const uint32_t  ptr_index; // 1162
				SpvReflectPrvAccessedVariable* access_ptr; // 1163
				{
					SpvReflectResult checked_readu32_result; // 1167
				}
				{
					SpvReflectResult checked_readu32_result; // 1168
				}
			}
			{
				const uint32_t  result_index; // 1172
				{
					SpvReflectResult checked_readu32_result; // 1173
				}
			}
			{
				SpvReflectResult checked_readu32_result; // 1180
			}
			{
				SpvReflectResult checked_readu32_result; // 1183
			}
		}
	}
} /* size: 0 */

// <00D6598B> ../thirdparty/spirv-reflect/spirv_reflect.c:1205
// variables: 2
int SortCompareFunctions(const void* a, const void* b)
{
	const SpvReflectPrvFunction* af; // 1206
	const SpvReflectPrvFunction* bf; // 1207
} /* size: 9, variables: 2 */

// <00D658E1> ../thirdparty/spirv-reflect/spirv_reflect.c:1211
// variables: 10
SpvReflectResult ParseFunctions(SpvReflectPrvParser* p_parser)
{
	{
		size_t function_index; // 1226
		{
			size_t i; // 1227
			{
				SpvReflectPrvNode* p_node; // 1228
				bool func_definition; // 1234
				SpvReflectPrvFunction* p_function; // 1250
				SpvReflectResult result; // 1252
			}
		}
		{
			size_t i; // 1264
			{
				SpvReflectPrvFunction* p_func; // 1265
				{
					size_t j; // 1270
					size_t k; // 1270
				}
			}
		}
	}
} /* size: 0 */

// <00D6583C> ../thirdparty/spirv-reflect/spirv_reflect.c:1286
// variables: 9
SpvReflectResult ParseMemberCounts(SpvReflectPrvParser* p_parser)
{
	{
		size_t i; // 1292
		{
			SpvReflectPrvNode* p_node; // 1293
			uint32_t target_id; // 1298
			uint32_t member_index; // 1299
			SpvReflectPrvNode* p_target_node; // 1302
			{
				SpvReflectResult checked_readu32_result; // 1300
			}
			{
				SpvReflectResult checked_readu32_result; // 1301
			}
		}
	}
	{
		uint32_t i; // 1315
		{
			SpvReflectPrvNode* p_node; // 1316
		}
	}
} /* size: 0 */

// <00D657A8> ../thirdparty/spirv-reflect/spirv_reflect.c:1335
// variables: 8
SpvReflectResult ParseNames(SpvReflectPrvParser* p_parser)
{
	{
		size_t i; // 1341
		{
			SpvReflectPrvNode* p_node; // 1342
			uint32_t target_id; // 1347
			SpvReflectPrvNode* p_target_node; // 1349
			const char ** pp_target_name; // 1355
			{
				SpvReflectResult checked_readu32_result; // 1348
			}
			{
				uint32_t member_index; // 1357
				{
					SpvReflectResult checked_readu32_result; // 1358
				}
			}
		}
	}
} /* size: 0 */

// <00D66AC4> ../thirdparty/spirv-reflect/spirv_reflect.c:1371
// variable: 1
bool UserTypeMatches(const char* user_type, const char* pattern)
{
	const size_t  pattern_length; // 1372
} /* size: 91, variables: 1 */

// <00D65465> ../thirdparty/spirv-reflect/spirv_reflect.c:1381
// variables: 46
SpvReflectResult ParseDecorations(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module)
{
	uint32_t spec_constant_count; // 1382
	{
		uint32_t i; // 1383
		{
			SpvReflectPrvNode* p_node; // 1384
			uint32_t member_offset; // 1392
			uint32_t decoration; // 1398
			bool skip; // 1403
			uint32_t target_id; // 1443
			SpvReflectPrvNode* p_target_node; // 1445
			SpvReflectPrvDecorations* p_target_decorations; // 1455
			{
				SpvReflectResult checked_readu32_result; // 1399
			}
			{
				SpvReflectResult checked_readu32_result; // 1444
			}
			{
				uint32_t member_index; // 1458
				{
					SpvReflectResult checked_readu32_result; // 1459
				}
			}
			{
				uint32_t word_offset; // 1488
				{
					SpvReflectResult checked_readu32_result; // 1489
				}
			}
			{
				uint32_t word_offset; // 1493
				{
					SpvReflectResult checked_readu32_result; // 1494
				}
			}
			{
				uint32_t word_offset; // 1499
				{
					uint32_t checked_readu32_cast_u32; // 1500
					SpvReflectResult checked_readu32_cast_result; // 1500
				}
			}
			{
				uint32_t word_offset; // 1532
				{
					SpvReflectResult checked_readu32_result; // 1533
				}
			}
			{
				uint32_t word_offset; // 1538
				{
					SpvReflectResult checked_readu32_result; // 1539
				}
			}
			{
				uint32_t word_offset; // 1544
				{
					SpvReflectResult checked_readu32_result; // 1545
				}
			}
			{
				uint32_t word_offset; // 1550
				{
					SpvReflectResult checked_readu32_result; // 1551
				}
			}
			{
				uint32_t word_offset; // 1556
				{
					SpvReflectResult checked_readu32_result; // 1557
				}
			}
			{
				uint32_t word_offset; // 1562
				{
					SpvReflectResult checked_readu32_result; // 1563
				}
			}
			{
				uint32_t word_offset; // 1572
				{
					SpvReflectResult checked_readu32_result; // 1573
				}
			}
			{
				uint32_t word_offset; // 1578
			}
			{
				uint32_t terminator; // 1593
				SpvReflectResult result; // 1594
				const char* name; // 1598
			}
		}
	}
	{
		uint32_t i; // 1687
		{
			SpvReflectPrvNode* p_node; // 1688
			{
				uint32_t decoration; // 1690
				{
					SpvReflectResult checked_readu32_result; // 1691
				}
				{
					const uint32_t  count; // 1693
					SpvReflectPrvNode* target_node; // 1697
					{
						SpvReflectResult checked_readu32_result; // 1694
					}
					{
						SpvReflectResult checked_readu32_result; // 1695
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00D6541E> ../thirdparty/spirv-reflect/spirv_reflect.c:1709
// variable: 1
SpvReflectResult EnumerateAllUniforms(SpvReflectShaderModule* p_module, size_t* p_uniform_count, uint32_t** pp_uniforms)
{
	{
		size_t i; // 1720
	}
} /* size: 0 */

// <00D63D7E> ../thirdparty/spirv-reflect/spirv_reflect.c:1727
// variables: 54
// function calls: 55
SpvReflectResult ParseType(SpvReflectPrvParser* p_parser, SpvReflectPrvNode* p_node, SpvReflectPrvDecorations* p_struct_member_decorations, SpvReflectShaderModule* p_module, SpvReflectTypeDescription* p_type)
{
	SpvReflectResult result; // 1730
	{
		size_t i; // 1738
		{
			SpvReflectTypeDescription* p_member_type; // 1739
		}
	}
	{
		uint32_t component_type_id; // 1785
		SpvReflectPrvNode* p_next_node; // 1789
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1786
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1787
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 1789
	}
	{
		uint32_t column_type_id; // 1800
		SpvReflectPrvNode* p_next_node; // 1803
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1801
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1802
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 1803
	}
	{
		uint32_t sampled_type_id; // 1820
		SpvReflectPrvNode* p_next_node; // 1822
		{
			uint32_t if_readu32_cast_u32; // 1828
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 1828
		}
		{
			uint32_t if_readu32_cast_u32; // 1833
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 1833
		}
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1821
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 1822
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1829
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1830
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1831
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1832
	}
	{
		uint32_t image_type_id; // 1842
		SpvReflectPrvNode* p_next_node; // 1844
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1843
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 1844
	}
	{
		uint32_t element_type_id; // 1856
		uint32_t length_id; // 1857
		SpvReflectPrvNode* p_length_node; // 1864
		{
			uint32_t dim_index; // 1866
			uint32_t length; // 1867
			SpvReflectPrvNode* p_next_node; // 1879
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 1868
			IsSpecConstant(const SpvReflectPrvNode* p_node); // 1873
			{
				size_t i; // 509
				{
					SpvReflectPrvNode* p_elem; // 510
				}
			}
			FindNode(SpvReflectPrvParser* p_parser,
				uint32_t result_id);  // 1879
		}
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1858
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1859
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 1864
	}
	{
		uint32_t element_type_id; // 1892
		uint32_t dim_index; // 1895
		SpvReflectPrvNode* p_next_node; // 1900
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 1900
		InRange(const SpvReflectPrvParser* p_parser,
			uint32_t index);  // 363
		ReadU32(SpvReflectPrvParser* p_parser,
			uint32_t word_offset,
			uint32_t* p_value);  // 1893
	}
	{
		uint32_t word_index; // 1912
		uint32_t member_index; // 1913
		{
			uint32_t member_id; // 1915
			SpvReflectPrvNode* p_member_node; // 1918
			SpvReflectPrvDecorations* p_member_decorations; // 1926
			SpvReflectTypeDescription* p_member_type; // 1930
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 1916
			{
				size_t i; // 509
				{
					SpvReflectPrvNode* p_elem; // 510
				}
			}
			FindNode(SpvReflectPrvParser* p_parser,
				uint32_t result_id);  // 1918
		}
	}
	{
		bool found_recursion; // 1950
		SpvReflectPrvNode* p_next_node; // 1972
		{
			uint32_t if_readu32_cast_u32; // 1948
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 1948
		}
		{
			uint32_t i; // 1953
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 1956
		}
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 1972
		{
			size_t i; // 521
			{
				SpvReflectTypeDescription* p_elem; // 522
			}
		}
		FindType(SpvReflectShaderModule* p_module,
			uint32_t type_id);  // 1978
	}
	{
		size_t i; // 521
		{
			SpvReflectTypeDescription* p_elem; // 522
		}
	}
	FindType(SpvReflectShaderModule* p_module,
		uint32_t type_id);  // 1733
	InRange(const SpvReflectPrvParser* p_parser,
		uint32_t index);  // 363
	ReadU32(SpvReflectPrvParser* p_parser,
		uint32_t word_offset,
		uint32_t* p_value);  // 1774
	InRange(const SpvReflectPrvParser* p_parser,
		uint32_t index);  // 363
	ReadU32(SpvReflectPrvParser* p_parser,
		uint32_t word_offset,
		uint32_t* p_value);  // 1775
	InRange(const SpvReflectPrvParser* p_parser,
		uint32_t index);  // 363
	ReadU32(SpvReflectPrvParser* p_parser,
		uint32_t word_offset,
		uint32_t* p_value);  // 1780
} /* size: 2736, variables: 1, inline expansions: 7 (166 bytes) */

// <00D63CEE> ../thirdparty/spirv-reflect/spirv_reflect.c:2002
// variables: 7
SpvReflectResult ParseTypes(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module)
{
	size_t type_index; // 2022
	{
		size_t i; // 2015
		{
			SpvReflectTypeDescription* p_type; // 2016
		}
	}
	{
		size_t i; // 2023
		{
			SpvReflectPrvNode* p_node; // 2024
			SpvReflectTypeDescription* p_type; // 2029
			SpvReflectResult result; // 2031
		}
	}
} /* size: 0, variables: 1 */

// <00D63C6B> ../thirdparty/spirv-reflect/spirv_reflect.c:2049
// variables: 6
SpvReflectResult ParseCapabilities(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module)
{
	size_t capability_index; // 2067
	{
		size_t i; // 2061
		{
			SpvReflectCapability* p_cap; // 2062
		}
	}
	{
		size_t i; // 2068
		{
			SpvReflectPrvNode* p_node; // 2069
			SpvReflectCapability* p_cap; // 2074
		}
	}
} /* size: 0, variables: 1 */

// <00D63BEC> ../thirdparty/spirv-reflect/spirv_reflect.c:2083
// variables: 3
int SortCompareDescriptorBinding(const void* a, const void* b)
{
	const SpvReflectDescriptorBinding* p_elem_a; // 2084
	const SpvReflectDescriptorBinding* p_elem_b; // 2085
	int value; // 2086
} /* size: 17, variables: 3 */

// <00D636C5> ../thirdparty/spirv-reflect/spirv_reflect.c:2096
// variables: 25
// function calls: 6
SpvReflectResult ParseDescriptorBindings(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module)
{
	size_t descriptor_index; // 2132
	{
		size_t i; // 2098
		{
			SpvReflectPrvNode* p_node; // 2099
		}
	}
	{
		uint32_t descriptor_index; // 2123
		{
			SpvReflectDescriptorBinding* p_descriptor; // 2124
		}
	}
	{
		size_t i; // 2133
		{
			SpvReflectPrvNode* p_node; // 2134
			SpvReflectTypeDescription* p_type; // 2144
			SpvStorageClass pointer_storage_class; // 2150
			SpvReflectDescriptorBinding* p_descriptor; // 2165
			const SpvReflectPrvNode* p_type_node; // 2180
			{
				SpvReflectPrvNode* p_type_node; // 2154
				{
					size_t i; // 509
					{
						SpvReflectPrvNode* p_elem; // 510
					}
				}
				FindNode(SpvReflectPrvParser* p_parser,
					uint32_t result_id);  // 2154
				{
					size_t i; // 521
					{
						SpvReflectTypeDescription* p_elem; // 522
					}
				}
				FindType(SpvReflectShaderModule* p_module,
					uint32_t type_id);  // 2159
			}
			{
				SpvReflectPrvDecorations common_flags; // 2182
				{
					uint32_t m; // 2184
				}
			}
			{
				const uint32_t  resource_mask; // 2224
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 2226
			}
			{
				uint32_t dim_index; // 2233
				{
					uint32_t dim_value; // 2234
				}
			}
			{
				size_t i; // 521
				{
					SpvReflectTypeDescription* p_elem; // 522
				}
			}
			FindType(SpvReflectShaderModule* p_module,
				uint32_t type_id);  // 2144
			{
				size_t i; // 509
				{
					SpvReflectPrvNode* p_elem; // 510
				}
			}
			FindNode(SpvReflectPrvParser* p_parser,
				uint32_t result_id);  // 2180
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2219
		}
	}
} /* size: 1835, variables: 1 */

// <00D6367A> ../thirdparty/spirv-reflect/spirv_reflect.c:2256
// variables: 3
SpvReflectResult ParseDescriptorType(SpvReflectShaderModule* p_module)
{
	{
		uint32_t descriptor_index; // 2261
		{
			SpvReflectDescriptorBinding* p_descriptor; // 2262
			SpvReflectTypeDescription* p_type; // 2263
		}
	}
} /* size: 0 */

// <00D635B4> ../thirdparty/spirv-reflect/spirv_reflect.c:2382
// variables: 10
SpvReflectResult ParseUAVCounterBindings(SpvReflectShaderModule* p_module)
{
	char name; // 2383
	const char* k_count_tag; // 2384
	{
		uint32_t descriptor_index; // 2386
		{
			SpvReflectDescriptorBinding* p_descriptor; // 2387
			SpvReflectDescriptorBinding* p_counter_descriptor; // 2393
			{
				uint32_t counter_descriptor_index; // 2396
				{
					SpvReflectDescriptorBinding* p_test_counter_descriptor; // 2398
				}
			}
			{
				const size_t  descriptor_name_length; // 2410
				{
					uint32_t counter_descriptor_index; // 2420
					{
						SpvReflectDescriptorBinding* p_test_counter_descriptor; // 2422
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <00D62DB6> ../thirdparty/spirv-reflect/spirv_reflect.c:2441
// variables: 34
// function calls: 13
SpvReflectResult ParseDescriptorBlockVariable(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module, SpvReflectTypeDescription* p_type, SpvReflectBlockVariable* p_var)
{
	bool has_non_writable; // 2443
	{
		SpvReflectPrvNode* p_type_node; // 2452
		{
			SpvReflectTypeDescription* p_type_temp; // 2462
			{
				size_t i; // 521
				{
					SpvReflectTypeDescription* p_elem; // 522
				}
			}
			FindType(SpvReflectShaderModule* p_module,
				uint32_t type_id);  // 2462
			{
				size_t i; // 509
				{
					SpvReflectPrvNode* p_elem; // 510
				}
			}
			FindNode(SpvReflectPrvParser* p_parser,
				uint32_t result_id);  // 2467
		}
		{
			uint32_t member_index; // 2475
			{
				SpvReflectTypeDescription* p_member_type; // 2476
				SpvReflectBlockVariable* p_member_var; // 2477
				SpvReflectTypeDescription* p_member_ptr_type; // 2479
				bool found_recursion; // 2480
				bool is_struct; // 2530
				{
					SpvReflectPrvNode* p_member_type_node; // 2520
					{
						SpvReflectPrvNode* p_node; // 2489
						uint32_t element_type_id; // 2493
						{
							size_t i; // 509
							{
								SpvReflectPrvNode* p_elem; // 510
							}
						}
						FindNode(SpvReflectPrvParser* p_parser,
							uint32_t result_id);  // 2489
						{
							size_t i; // 521
							{
								SpvReflectTypeDescription* p_elem; // 522
							}
						}
						FindType(SpvReflectShaderModule* p_module,
							uint32_t type_id);  // 2494
					}
					{
						uint32_t i; // 2501
					}
					{
						uint32_t struct_id; // 2508
						{
							size_t i; // 521
							{
								SpvReflectTypeDescription* p_elem; // 522
							}
						}
						FindType(SpvReflectShaderModule* p_module,
							uint32_t type_id);  // 2508
					}
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 2520
					{
						size_t i; // 521
						{
							SpvReflectTypeDescription* p_elem; // 522
						}
					}
					FindType(SpvReflectShaderModule* p_module,
						uint32_t type_id);  // 2525
				}
				{
					SpvReflectResult result; // 2533
				}
				{
					uint32_t i; // 2540
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 495
				ApplyNumericTraits(const SpvReflectTypeDescription* p_type,
							SpvReflectNumericTraits* p_numeric_traits);  // 2563
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 499
				ApplyArrayTraits(const SpvReflectTypeDescription* p_type,
						SpvReflectArrayTraits* p_array_traits);  // 2565
			}
		}
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 2452
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 2459
	}
} /* size: 0, variables: 1 */

// <00D62D7D> ../thirdparty/spirv-reflect/spirv_reflect.c:2582
// variable: 1
uint32_t GetPhysicalPointerStructSize(SpvReflectPrvParser* p_parser, uint32_t id)
{
	{
		uint32_t i; // 2583
	}
} /* size: 0 */

// <00D628B6> ../thirdparty/spirv-reflect/spirv_reflect.c:2591
// variables: 24
// function calls: 4
SpvReflectResult ParseDescriptorBlockVariableSizes(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module, bool is_parent_root, bool is_parent_aos, bool is_parent_rta, SpvReflectBlockVariable* p_var)
{
	bool is_parent_ref; // 2598
	{
		uint32_t member_index; // 2601
		{
			SpvReflectBlockVariable* p_member_var; // 2602
		}
	}
	{
		uint32_t member_index; // 2612
		{
			SpvReflectBlockVariable* p_member_var; // 2613
			SpvReflectTypeDescription* p_member_type; // 2614
			{
				uint32_t size; // 2631
			}
			{
				bool is_struct; // 2646
				uint32_t element_count; // 2659
				{
					SpvReflectResult result; // 2651
				}
				{
					uint32_t i; // 2660
				}
			}
			{
				bool is_struct; // 2667
				{
					SpvReflectResult result; // 2669
				}
			}
			{
				SpvReflectPrvNode* p_member_type_node; // 2678
				{
					size_t i; // 509
					{
						SpvReflectPrvNode* p_elem; // 510
					}
				}
				FindNode(SpvReflectPrvParser* p_parser,
					uint32_t result_id);  // 2678
				{
					size_t i; // 521
					{
						SpvReflectTypeDescription* p_elem; // 522
					}
				}
				FindType(SpvReflectShaderModule* p_module,
					uint32_t type_id);  // 2683
			}
			{
				SpvReflectResult result; // 2695
			}
			{
				uint32_t i; // 2583
			}
			GetPhysicalPointerStructSize(SpvReflectPrvParser* p_parser,
							uint32_t id);  // 2693
		}
	}
	{
		uint32_t member_index; // 2709
		{
			SpvReflectBlockVariable* p_member_var; // 2710
			SpvReflectBlockVariable* p_next_member_var; // 2711
		}
	}
	{
		SpvReflectBlockVariable* p_member_var; // 2723
		RoundUp(uint32_t value,
			uint32_t multiple);  // 2724
	}
} /* size: 1353, variables: 1 */

// <00D676DE> ../thirdparty/spirv-reflect/spirv_reflect.c:2746
// variables: 11
// function calls: 9
void MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var)
{
	SpvOp op_type; // 2750
	{
		uint32_t i; // 2759
		{
			SpvReflectBlockVariable* p_member_var; // 2760
			{
				uint32_t i; // 2759
				{
					SpvReflectBlockVariable* p_member_var; // 2760
					{
						uint32_t i; // 2759
						{
							SpvReflectBlockVariable* p_member_var; // 2760
							{
								uint32_t i; // 2759
								{
									SpvReflectBlockVariable* p_member_var; // 2760
									{
										uint32_t i; // 2759
										{
											SpvReflectBlockVariable* p_member_var; // 2760
											MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2761
										}
									}
									MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2746
									MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2761
								}
							}
							MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2746
							MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2761
						}
					}
					MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2746
					MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2761
				}
			}
			MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2746
			MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2761
		}
	}
} /* size: 433, variables: 1 */

// <00D62871> ../thirdparty/spirv-reflect/spirv_reflect.c:2746
// variables: 3
void MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var)
{
	SpvOp op_type; // 2750
	{
		uint32_t i; // 2759
		{
			SpvReflectBlockVariable* p_member_var; // 2760
		}
	}
} /* size: 0, variables: 1 */

// <00D62436> ../thirdparty/spirv-reflect/spirv_reflect.c:2767
// variables: 18
// function calls: 6
SpvReflectResult ParseDescriptorBlockVariableUsage(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module, SpvReflectPrvAccessChain* p_access_chain, uint32_t index_index, SpvOp override_op_type, SpvReflectBlockVariable* p_var)
{
	SpvReflectTypeDescription* p_type; // 2775
	SpvOp op_type; // 2776
	{
		SpvReflectPrvNode* p_node; // 2789
		uint32_t element_type_id; // 2793
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 2789
		{
			size_t i; // 521
			{
				SpvReflectTypeDescription* p_elem; // 522
			}
		}
		FindType(SpvReflectShaderModule* p_module,
			uint32_t type_id);  // 2795
	}
	{
		SpvReflectResult result; // 2812
	}
	{
		SpvReflectPrvNode* p_type_node; // 2825
		{
			size_t i; // 509
			{
				SpvReflectPrvNode* p_elem; // 510
			}
		}
		FindNode(SpvReflectPrvParser* p_parser,
			uint32_t result_id);  // 2825
		{
			size_t i; // 521
			{
				SpvReflectTypeDescription* p_elem; // 522
			}
		}
		FindType(SpvReflectShaderModule* p_module,
			uint32_t type_id);  // 2830
	}
	{
		uint32_t index; // 2852
		SpvReflectBlockVariable* p_member_var; // 2856
		bool is_pointer_to_pointer; // 2858
		{
			SpvReflectResult result; // 2875
		}
		MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2882
	}
	MarkSelfAndAllMemberVarsAsUsed(SpvReflectBlockVariable* p_var); // 2819
} /* size: 621, variables: 2, inline expansions: 1 (17 bytes) */

// <00D623A6> ../thirdparty/spirv-reflect/spirv_reflect.c:2890
// variables: 7
SpvReflectResult ParseDescriptorBlocks(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module)
{
	{
		uint32_t descriptor_index; // 2897
		{
			SpvReflectDescriptorBinding* p_descriptor; // 2898
			SpvReflectTypeDescription* p_type; // 2899
			SpvReflectResult result; // 2909
			bool is_parent_rta; // 2928
			{
				uint32_t access_chain_index; // 2914
				{
					SpvReflectPrvAccessChain* p_access_chain; // 2915
				}
			}
		}
	}
} /* size: 0 */

// <00D62337> ../thirdparty/spirv-reflect/spirv_reflect.c:2943
// variables: 4
SpvReflectResult ParseFormat(const SpvReflectTypeDescription* p_type, SpvReflectFormat* p_format)
{
	SpvReflectResult result; // 2944
	bool signedness; // 2945
	uint32_t bit_width; // 2946
	{
		uint32_t component_count; // 2948
	}
} /* size: 0, variables: 3 */

// <00D66E78> ../thirdparty/spirv-reflect/spirv_reflect.c:3075
// variables: 10
// function calls: 6
SpvReflectResult ParseInterfaceVariable(SpvReflectPrvParser* p_parser, const SpvReflectPrvDecorations* p_var_node_decorations, const SpvReflectPrvDecorations* p_type_node_decorations, SpvReflectTypeDescription* p_type, SpvReflectInterfaceVariable* p_var, bool* p_has_built_in, SpvReflectShaderModule* p_module)
{
	SpvReflectPrvNode* p_type_node; // 3080
	{
		size_t i; // 509
		{
			SpvReflectPrvNode* p_elem; // 510
		}
	}
	FindNode(SpvReflectPrvParser* p_parser,
		uint32_t result_id);  // 3080
	{
		uint32_t member_index; // 3092
		{
			SpvReflectPrvDecorations* p_member_decorations; // 3093
			SpvReflectTypeDescription* p_member_type; // 3094
			SpvReflectInterfaceVariable* p_member_var; // 3095
			SpvReflectResult result; // 3100
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 495
	ApplyNumericTraits(const SpvReflectTypeDescription* p_type,
				SpvReflectNumericTraits* p_numeric_traits);  // 3120
	{
		SpvReflectResult result; // 3131
		{
			uint32_t component_count; // 2948
		}
		ParseFormat(const SpvReflectTypeDescription* p_type,
				SpvReflectFormat* p_format);  // 3131
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 499
	ApplyArrayTraits(const SpvReflectTypeDescription* p_type,
			SpvReflectArrayTraits* p_array_traits);  // 3122
} /* size: 1533, variables: 1, inline expansions: 5 (139 bytes) */

// <00D6225E> ../thirdparty/spirv-reflect/spirv_reflect.c:3075
// variables: 7
SpvReflectResult ParseInterfaceVariable(SpvReflectPrvParser* p_parser, const SpvReflectPrvDecorations* p_var_node_decorations, const SpvReflectPrvDecorations* p_type_node_decorations, SpvReflectShaderModule* p_module, SpvReflectTypeDescription* p_type, SpvReflectInterfaceVariable* p_var, bool* p_has_built_in)
{
	SpvReflectPrvNode* p_type_node; // 3080
	{
		uint32_t member_index; // 3092
		{
			SpvReflectPrvDecorations* p_member_decorations; // 3093
			SpvReflectTypeDescription* p_member_type; // 3094
			SpvReflectInterfaceVariable* p_member_var; // 3095
			SpvReflectResult result; // 3100
		}
	}
	{
		SpvReflectResult result; // 3131
	}
} /* size: 0, variables: 1 */

// <00D6214A> ../thirdparty/spirv-reflect/spirv_reflect.c:3141
// variables: 14
SpvReflectResult ParseInterfaceVariables(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module, SpvReflectEntryPoint* p_entry, uint32_t interface_variable_count, uint32_t* p_interface_variable_ids)
{
	size_t input_index; // 3189
	size_t output_index; // 3190
	{
		size_t i; // 3151
		{
			uint32_t var_result_id; // 3152
			SpvReflectPrvNode* p_node; // 3153
		}
	}
	{
		size_t i; // 3191
		{
			uint32_t var_result_id; // 3192
			SpvReflectPrvNode* p_node; // 3193
			SpvReflectTypeDescription* p_type; // 3198
			SpvReflectPrvNode* p_type_node; // 3216
			SpvReflectInterfaceVariable* p_var; // 3221
			bool has_built_in; // 3224
			SpvReflectResult result; // 3225
			{
				SpvReflectPrvNode* p_type_node; // 3205
			}
		}
	}
} /* size: 0, variables: 2 */

// <00D620FD> ../thirdparty/spirv-reflect/spirv_reflect.c:3267
// variable: 1
SpvReflectResult EnumerateAllPushConstants(SpvReflectShaderModule* p_module, size_t* p_push_constant_count, uint32_t** p_push_constants)
{
	{
		size_t i; // 3279
	}
} /* size: 0 */

// <00D66D80> ../thirdparty/spirv-reflect/spirv_reflect.c:3286
// variables: 2
// function call: 1
SpvReflectResult TraverseCallGraph(SpvReflectPrvParser* p_parser, SpvReflectPrvFunction* p_func, size_t* p_func_count, uint32_t* p_func_ids, uint32_t depth)
{
	{
		size_t i; // 3299
		{
			SpvReflectResult result; // 3300
			TraverseCallGraph(SpvReflectPrvParser* p_parser,
						SpvReflectPrvFunction* p_func,
						size_t* p_func_count,
						uint32_t* p_func_ids,
						uint32_t depth);  // 3300
		}
	}
} /* size: 187 */

// <00D62087> ../thirdparty/spirv-reflect/spirv_reflect.c:3286
// variables: 2
SpvReflectResult TraverseCallGraph(SpvReflectPrvParser* p_parser, SpvReflectPrvFunction* p_func, size_t* p_func_count, uint32_t* p_func_ids, uint32_t depth)
{
	{
		size_t i; // 3299
		{
			SpvReflectResult result; // 3300
		}
	}
} /* size: 0 */

// <00D61EFA> ../thirdparty/spirv-reflect/spirv_reflect.c:3308
// variables: 4
// function calls: 3
uint32_t GetUint32Constant(SpvReflectPrvParser* p_parser, uint32_t id)
{
	uint32_t result; // 3309
	SpvReflectPrvNode* p_node; // 3310
	{
		size_t i; // 509
		{
			SpvReflectPrvNode* p_elem; // 510
		}
	}
	FindNode(SpvReflectPrvParser* p_parser,
		uint32_t result_id);  // 3310
	InRange(const SpvReflectPrvParser* p_parser,
		uint32_t index);  // 363
	ReadU32(SpvReflectPrvParser* p_parser,
		uint32_t word_offset,
		uint32_t* p_value);  // 3312
} /* size: 93, variables: 2, inline expansions: 3 (75 bytes) */

// <00D61ECD> ../thirdparty/spirv-reflect/spirv_reflect.c:3317
bool HasByteAddressBufferOffset(SpvReflectPrvNode* p_node, SpvReflectDescriptorBinding* p_binding)
{
} /* size: 0 */

// <00D61E0C> ../thirdparty/spirv-reflect/spirv_reflect.c:3323
// variables: 9
SpvReflectResult ParseByteAddressBuffer(SpvReflectPrvParser* p_parser, SpvReflectPrvNode* p_node, SpvReflectDescriptorBinding* p_binding)
{
	const SpvReflectResult  not_found; // 3325
	uint32_t offset; // 3330
	uint32_t base_id; // 3332
	SpvReflectPrvNode* p_next_node; // 3339
	SpvReflectPrvNode* arithmetic_node_stack; // 3351
	uint32_t arithmetic_count; // 3352
	const uint32_t  count; // 3367
	{
		uint32_t i; // 3368
		{
			uint32_t value; // 3372
		}
	}
} /* size: 0, variables: 7 */

// <00D61C84> ../thirdparty/spirv-reflect/spirv_reflect.c:3408
// variables: 20
SpvReflectResult ParseStaticallyUsedResources(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module, SpvReflectEntryPoint* p_entry, size_t uniform_count, uint32_t* uniforms, size_t push_constant_count, uint32_t* push_constants)
{
	SpvReflectPrvFunction* p_func; // 3412
	size_t called_function_count; // 3423
	SpvReflectResult result; // 3424
	uint32_t* p_called_functions; // 3429
	uint32_t used_acessed_count; // 3449
	SpvReflectPrvAccessedVariable* p_used_accesses; // 3458
	size_t used_uniform_count; // 3483
	size_t used_push_constant_count; // 3491
	{
		size_t i; // 3413
	}
	{
		size_t i; // 3450
		size_t j; // 3450
	}
	{
		size_t i; // 3467
		size_t j; // 3467
	}
	{
		uint32_t i; // 3499
		{
			SpvReflectDescriptorBinding* p_binding; // 3500
			uint32_t byte_address_buffer_offset_count; // 3501
			{
				uint32_t j; // 3503
			}
			{
				bool multi_entrypoint; // 3515
				{
					uint32_t* prev_byte_address_buffer_offsets; // 3519
				}
				{
					uint32_t j; // 3535
				}
			}
		}
	}
} /* size: 0, variables: 8 */

// <00D60511> ../thirdparty/spirv-reflect/spirv_reflect.c:3562
// variables: 69
// function calls: 42
SpvReflectResult ParseEntryPoints(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module)
{
	SpvReflectResult result; // 3573
	size_t uniform_count; // 3574
	uint32_t* uniforms; // 3575
	size_t push_constant_count; // 3579
	uint32_t* push_constants; // 3580
	size_t entry_point_index; // 3585
	{
		size_t i; // 3586
		{
			SpvReflectPrvNode* p_node; // 3587
			SpvReflectEntryPoint* p_entry_point; // 3592
			uint32_t name_start_word_offset; // 3652
			uint32_t name_length_with_terminator; // 3653
			uint32_t name_word_count; // 3661
			uint32_t interface_variable_count; // 3662
			uint32_t* p_interface_variables; // 3663
			{
				uint32_t checked_readu32_cast_u32; // 3593
				SpvReflectResult checked_readu32_cast_result; // 3593
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 3593
			}
			{
				SpvReflectResult checked_readu32_result; // 3594
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 3594
			}
			{
				uint32_t var_index; // 3671
				{
					uint32_t var_result_id; // 3672
					uint32_t offset; // 3673
					{
						SpvReflectResult checked_readu32_result; // 3674
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 3674
					}
				}
			}
			{
				size_t i; // 3413
			}
			{
				size_t i; // 3299
				{
					SpvReflectResult result; // 3300
					TraverseCallGraph(SpvReflectPrvParser* p_parser,
								SpvReflectPrvFunction* p_func,
								size_t* p_func_count,
								uint32_t* p_func_ids,
								uint32_t depth);  // 3300
				}
			}
			TraverseCallGraph(SpvReflectPrvParser* p_parser,
						SpvReflectPrvFunction* p_func,
						size_t* p_func_count,
						uint32_t* p_func_ids,
						uint32_t depth);  // 3286
			TraverseCallGraph(SpvReflectPrvParser* p_parser,
						SpvReflectPrvFunction* p_func,
						size_t* p_func_count,
						uint32_t* p_func_ids,
						uint32_t depth);  // 3424
			TraverseCallGraph(SpvReflectPrvParser* p_parser,
						SpvReflectPrvFunction* p_func,
						size_t* p_func_count,
						uint32_t* p_func_ids,
						uint32_t depth);  // 3438
			{
				size_t i; // 3450
				size_t j; // 3450
			}
			{
				size_t i; // 3467
				size_t j; // 3467
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 3472
			}
			{
				uint32_t i; // 3499
				{
					SpvReflectDescriptorBinding* p_binding; // 3500
					uint32_t byte_address_buffer_offset_count; // 3501
					{
						uint32_t j; // 3503
						HasByteAddressBufferOffset(SpvReflectPrvNode* p_node,
										SpvReflectDescriptorBinding* p_binding);  // 3317
						HasByteAddressBufferOffset(SpvReflectPrvNode* p_node,
										SpvReflectDescriptorBinding* p_binding);  // 3507
					}
					{
						bool multi_entrypoint; // 3515
						{
							uint32_t* prev_byte_address_buffer_offsets; // 3519
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 3522
						}
						{
							uint32_t j; // 3535
							HasByteAddressBufferOffset(SpvReflectPrvNode* p_node,
											SpvReflectDescriptorBinding* p_binding);  // 3317
							HasByteAddressBufferOffset(SpvReflectPrvNode* p_node,
											SpvReflectDescriptorBinding* p_binding);  // 3326
							InRange(const SpvReflectPrvParser* p_parser,
								uint32_t index);  // 363
							ReadU32(SpvReflectPrvParser* p_parser,
								uint32_t word_offset,
								uint32_t* p_value);  // 3334
							InRange(const SpvReflectPrvParser* p_parser,
								uint32_t index);  // 363
							ReadU32(SpvReflectPrvParser* p_parser,
								uint32_t word_offset,
								uint32_t* p_value);  // 3338
							{
								size_t i; // 509
								{
									SpvReflectPrvNode* p_elem; // 510
								}
							}
							FindNode(SpvReflectPrvParser* p_parser,
								uint32_t result_id);  // 3339
							InRange(const SpvReflectPrvParser* p_parser,
								uint32_t index);  // 363
							ReadU32(SpvReflectPrvParser* p_parser,
								uint32_t word_offset,
								uint32_t* p_value);  // 3363
							{
								size_t i; // 509
								{
									SpvReflectPrvNode* p_elem; // 510
								}
							}
							FindNode(SpvReflectPrvParser* p_parser,
								uint32_t result_id);  // 3364
							{
								uint32_t i; // 3368
								{
									uint32_t value; // 3372
									InRange(const SpvReflectPrvParser* p_parser,
										uint32_t index);  // 363
									ReadU32(SpvReflectPrvParser* p_parser,
										uint32_t word_offset,
										uint32_t* p_value);  // 3371
								}
							}
							ParseByteAddressBuffer(SpvReflectPrvParser* p_parser,
										SpvReflectPrvNode* p_node,
										SpvReflectDescriptorBinding* p_binding);  // 3537
						}
						{
							size_t i; // 276
						}
						DedupSortedUint32(uint32_t* arr,
									size_t size);  // 271
						DedupSortedUint32(uint32_t* arr,
									size_t size);  // 3549
					}
				}
			}
			{
				size_t i; // 276
			}
			DedupSortedUint32(uint32_t* arr,
						size_t size);  // 271
			DedupSortedUint32(uint32_t* arr,
						size_t size);  // 3447
			ParseStaticallyUsedResources(SpvReflectPrvParser* p_parser,
							SpvReflectShaderModule* p_module,
							SpvReflectEntryPoint* p_entry,
							size_t uniform_count,
							uint32_t* uniforms,
							size_t push_constant_count,
							uint32_t* push_constants);  // 3684
			RoundUp(uint32_t value,
				uint32_t multiple);  // 3661
			{
				size_t i; // 3151
				{
					uint32_t var_result_id; // 3152
					SpvReflectPrvNode* p_node; // 3153
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 3153
				}
			}
			{
				size_t i; // 3191
				{
					uint32_t var_result_id; // 3192
					SpvReflectPrvNode* p_node; // 3193
					SpvReflectTypeDescription* p_type; // 3198
					SpvReflectPrvNode* p_type_node; // 3216
					SpvReflectInterfaceVariable* p_var; // 3221
					bool has_built_in; // 3224
					SpvReflectResult result; // 3225
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 3193
					{
						size_t i; // 521
						{
							SpvReflectTypeDescription* p_elem; // 522
						}
					}
					FindType(SpvReflectShaderModule* p_module,
						uint32_t type_id);  // 3198
					{
						SpvReflectPrvNode* p_type_node; // 3205
						{
							size_t i; // 509
							{
								SpvReflectPrvNode* p_elem; // 510
							}
						}
						FindNode(SpvReflectPrvParser* p_parser,
							uint32_t result_id);  // 3205
						{
							size_t i; // 521
							{
								SpvReflectTypeDescription* p_elem; // 522
							}
						}
						FindType(SpvReflectShaderModule* p_module,
							uint32_t type_id);  // 3210
					}
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 3216
				}
			}
			ParseInterfaceVariables(SpvReflectPrvParser* p_parser,
						SpvReflectShaderModule* p_module,
						SpvReflectEntryPoint* p_entry,
						uint32_t interface_variable_count,
						uint32_t* p_interface_variable_ids);  // 3678
		}
	}
	{
		size_t i; // 1720
	}
	EnumerateAllUniforms(SpvReflectShaderModule* p_module,
				size_t* p_uniform_count,
				uint32_t** pp_uniforms);  // 3576
	{
		size_t i; // 3279
	}
	EnumerateAllPushConstants(SpvReflectShaderModule* p_module,
					size_t* p_push_constant_count,
					uint32_t** p_push_constants);  // 3581
} /* size: 4681, variables: 6, inline expansions: 2 (252 bytes) */

// <00D5F5EC> ../thirdparty/spirv-reflect/spirv_reflect.c:3697
// variables: 43
// function calls: 36
SpvReflectResult ParseExecutionModes(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module)
{
	{
		uint32_t* indices; // 3783
		{
			size_t node_idx; // 3703
			{
				SpvReflectPrvNode* p_node; // 3704
				uint32_t entry_point_id; // 3710
				SpvReflectEntryPoint* p_entry_point; // 3714
				uint32_t execution_mode; // 3727
				{
					SpvReflectResult checked_readu32_result; // 3711
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 3711
				}
				{
					size_t entry_point_idx; // 3715
				}
				{
					SpvReflectResult checked_readu32_result; // 3728
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 3728
				}
				{
					SpvReflectResult checked_readu32_result; // 3733
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 3733
				}
				{
					SpvReflectResult checked_readu32_result; // 3737
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 3737
				}
				{
					SpvReflectResult checked_readu32_result; // 3738
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 3738
				}
				{
					SpvReflectResult checked_readu32_result; // 3739
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 3739
				}
				{
					uint32_t local_size_x_id; // 3742
					uint32_t local_size_y_id; // 3743
					uint32_t local_size_z_id; // 3744
					SpvReflectPrvNode* x_node; // 3749
					SpvReflectPrvNode* y_node; // 3750
					SpvReflectPrvNode* z_node; // 3751
					{
						SpvReflectResult checked_readu32_result; // 3745
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 3745
					}
					{
						SpvReflectResult checked_readu32_result; // 3746
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 3746
					}
					{
						SpvReflectResult checked_readu32_result; // 3747
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 3747
					}
					{
						SpvReflectResult checked_readu32_result; // 3756
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 3756
					}
					{
						SpvReflectResult checked_readu32_result; // 3762
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 3762
					}
					{
						SpvReflectResult checked_readu32_result; // 3768
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 3768
					}
					IsSpecConstant(const SpvReflectPrvNode* p_node); // 3765
					IsSpecConstant(const SpvReflectPrvNode* p_node); // 3753
					IsSpecConstant(const SpvReflectPrvNode* p_node); // 3759
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 3749
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 3750
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 3751
				}
				{
					SpvReflectResult checked_readu32_result; // 3775
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 3775
				}
			}
		}
		{
			size_t entry_point_idx; // 3787
			{
				SpvReflectEntryPoint* p_entry_point; // 3788
			}
		}
		{
			size_t node_idx; // 3799
			{
				SpvReflectPrvNode* p_node; // 3800
				uint32_t entry_point_id; // 3806
				SpvReflectEntryPoint* p_entry_point; // 3810
				uint32_t* idx; // 3811
				uint32_t execution_mode; // 3821
				{
					SpvReflectResult checked_readu32_result; // 3807
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 3807
				}
				{
					size_t entry_point_idx; // 3812
				}
				{
					SpvReflectResult checked_readu32_result; // 3822
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 3822
				}
			}
		}
	}
} /* size: 1280 */

// <00D5F4DE> ../thirdparty/spirv-reflect/spirv_reflect.c:3830
// variables: 15
SpvReflectResult ParsePushConstantBlocks(SpvReflectPrvParser* p_parser, SpvReflectShaderModule* p_module)
{
	uint32_t push_constant_index; // 3851
	{
		size_t i; // 3831
		{
			SpvReflectPrvNode* p_node; // 3832
		}
	}
	{
		size_t i; // 3852
		{
			SpvReflectPrvNode* p_node; // 3853
			SpvReflectTypeDescription* p_type; // 3858
			SpvReflectPrvNode* p_type_node; // 3876
			SpvReflectBlockVariable* p_push_constant; // 3881
			SpvReflectResult result; // 3884
			{
				SpvReflectPrvNode* p_type_node; // 3865
			}
			{
				uint32_t access_chain_index; // 3889
				{
					SpvReflectPrvAccessChain* p_access_chain; // 3890
					SpvReflectBlockVariable* p_var; // 3895
				}
			}
			{
				uint32_t k; // 3912
				{
					const uint32_t  member_offset; // 3913
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00D5F45F> ../thirdparty/spirv-reflect/spirv_reflect.c:3923
// variables: 3
int SortCompareDescriptorSet(const void* a, const void* b)
{
	const SpvReflectDescriptorSet* p_elem_a; // 3924
	const SpvReflectDescriptorSet* p_elem_b; // 3925
	int value; // 3926
} /* size: 9, variables: 3 */

// <00D5F364> ../thirdparty/spirv-reflect/spirv_reflect.c:3933
// variables: 15
SpvReflectResult ParseEntrypointDescriptorSets(SpvReflectShaderModule* p_module)
{
	{
		uint32_t i; // 3935
		{
			SpvReflectEntryPoint* p_entry; // 3936
			{
				uint32_t j; // 3937
			}
			{
				uint32_t j; // 3942
				{
					const SpvReflectDescriptorSet* p_set; // 3943
					{
						uint32_t k; // 3944
						{
							bool found; // 3945
						}
					}
				}
			}
			{
				uint32_t j; // 3961
				{
					const SpvReflectDescriptorSet* p_set; // 3962
					uint32_t count; // 3963
					SpvReflectDescriptorSet* p_entry_set; // 3973
					{
						uint32_t k; // 3964
						{
							bool found; // 3965
						}
					}
					{
						uint32_t k; // 3979
						{
							bool found; // 3980
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <00D67221> ../thirdparty/spirv-reflect/spirv_reflect.c:3991
// variables: 32
// function calls: 4
SpvReflectResult ParseDescriptorSets(SpvReflectShaderModule* p_module)
{
	{
		uint32_t i; // 3993
		{
			SpvReflectDescriptorBinding* p_descriptor; // 3994
			SpvReflectDescriptorSet* p_target_set; // 3997
			{
				uint32_t j; // 3998
				{
					SpvReflectDescriptorSet* p_set; // 3999
				}
			}
			{
				uint32_t j; // 4008
				{
					SpvReflectDescriptorSet* p_set; // 4009
				}
			}
		}
	}
	{
		uint32_t i; // 4026
		{
			const SpvReflectDescriptorSet* p_set; // 4027
		}
	}
	{
		uint32_t i; // 3935
		{
			SpvReflectEntryPoint* p_entry; // 3936
			{
				uint32_t j; // 3937
			}
			{
				uint32_t j; // 3942
				{
					const SpvReflectDescriptorSet* p_set; // 3943
					{
						uint32_t k; // 3944
						{
							bool found; // 3945
							{
								size_t mid; // 289
							}
							SearchSortedUint32(const uint32_t* arr,
										size_t size,
										uint32_t target);  // 3945
						}
					}
				}
			}
			{
				uint32_t j; // 3961
				{
					const SpvReflectDescriptorSet* p_set; // 3962
					uint32_t count; // 3963
					SpvReflectDescriptorSet* p_entry_set; // 3973
					{
						uint32_t k; // 3964
						{
							bool found; // 3965
							{
								size_t mid; // 289
							}
							SearchSortedUint32(const uint32_t* arr,
										size_t size,
										uint32_t target);  // 3965
						}
					}
					{
						uint32_t k; // 3979
						{
							bool found; // 3980
							{
								size_t mid; // 289
							}
							SearchSortedUint32(const uint32_t* arr,
										size_t size,
										uint32_t target);  // 3980
						}
					}
				}
			}
		}
	}
	ParseEntrypointDescriptorSets(SpvReflectShaderModule* p_module); // 4055
	{
		uint32_t i; // 4040
		{
			SpvReflectDescriptorSet* p_set; // 4041
			uint32_t descriptor_index; // 4044
			{
				uint32_t j; // 4045
				{
					SpvReflectDescriptorBinding* p_descriptor; // 4046
				}
			}
		}
	}
} /* size: 1120, inline expansions: 1 (749 bytes) */

// <00D5F276> ../thirdparty/spirv-reflect/spirv_reflect.c:3991
// variables: 14
SpvReflectResult ParseDescriptorSets(SpvReflectShaderModule* p_module)
{
	{
		uint32_t i; // 3993
		{
			SpvReflectDescriptorBinding* p_descriptor; // 3994
			SpvReflectDescriptorSet* p_target_set; // 3997
			{
				uint32_t j; // 3998
				{
					SpvReflectDescriptorSet* p_set; // 3999
				}
			}
			{
				uint32_t j; // 4008
				{
					SpvReflectDescriptorSet* p_set; // 4009
				}
			}
		}
	}
	{
		uint32_t i; // 4026
		{
			const SpvReflectDescriptorSet* p_set; // 4027
		}
	}
	{
		uint32_t i; // 4040
		{
			SpvReflectDescriptorSet* p_set; // 4041
			uint32_t descriptor_index; // 4044
			{
				uint32_t j; // 4045
				{
					SpvReflectDescriptorBinding* p_descriptor; // 4046
				}
			}
		}
	}
} /* size: 0 */

// <00D5F238> ../thirdparty/spirv-reflect/spirv_reflect.c:4058
// variables: 2
SpvReflectResult DisambiguateStorageBufferSrvUav(SpvReflectShaderModule* p_module)
{
	{
		uint32_t descriptor_index; // 4063
		{
			SpvReflectDescriptorBinding* p_descriptor; // 4064
		}
	}
} /* size: 0 */

// <00D5F1EF> ../thirdparty/spirv-reflect/spirv_reflect.c:4084
// variables: 3
SpvReflectResult SynchronizeDescriptorSets(SpvReflectShaderModule* p_module)
{
	SpvReflectResult result; // 4095
	{
		uint32_t i; // 4086
		{
			SpvReflectDescriptorSet* p_set; // 4087
		}
	}
} /* size: 0, variables: 1 */

// <00D596A1> ../thirdparty/spirv-reflect/spirv_reflect.c:4099
// variables: 246
// function calls: 190
SpvReflectResult CreateShaderModule(uint32_t flags, size_t size, const void* p_code, SpvReflectShaderModule* p_module)
{
	SpvReflectPrvParser parser; // 4138
	SpvReflectResult result; // 4142
	{
		const uint32_t* p_ptr; // 4146
	}
	{
		uint32_t set_number; // 4188
	}
	{
		SpvReflectEntryPoint* p_entry; // 4225
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4101
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4139
	CreateParser(size_t size,
			void* p_code,
			SpvReflectPrvParser* p_parser);  // 4142
	{
		uint32_t word; // 672
		SpvOp op; // 673
		uint32_t node_word_count; // 674
	}
	{
		uint32_t i; // 696
	}
	{
		uint32_t word; // 728
		SpvOp op; // 729
		uint32_t node_word_count; // 730
		SpvReflectPrvNode* p_node; // 732
		{
			SpvReflectResult checked_readu32_result; // 838
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 838
		}
		{
			SpvReflectResult checked_readu32_result; // 921
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 921
		}
		{
			SpvReflectResult checked_readu32_result; // 922
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 922
		}
		{
			SpvReflectResult checked_readu32_result; // 992
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 992
		}
		{
			uint32_t member_offset; // 806
			uint32_t name_start; // 807
		}
		{
			uint32_t checked_readu32_cast_u32; // 746
			SpvReflectResult checked_readu32_cast_result; // 746
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 746
		}
		{
			SpvReflectPrvNode* p_func_node; // 972
			{
				SpvReflectResult checked_readu32_result; // 973
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 973
			}
		}
		{
			SpvReflectResult checked_readu32_result; // 914
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 914
		}
		{
			SpvReflectResult checked_readu32_result; // 915
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 915
		}
		{
			SpvReflectResult checked_readu32_result; // 916
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 916
		}
		{
			SpvReflectResult checked_readu32_result; // 962
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 962
		}
		{
			SpvReflectResult checked_readu32_result; // 800
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 800
		}
		{
			const char* p_source; // 773
			const size_t  source_len; // 775
			const size_t  embedded_source_len; // 776
			char* p_continued_source; // 777
			strcpy(char* __dest,
				const char* __src);  // 787
			strcat(char* __dest,
				const char* __src);  // 788
		}
		{
			SpvReflectResult checked_readu32_result; // 747
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 747
		}
		{
			SpvReflectResult checked_readu32_result; // 749
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 749
		}
		{
			const char* p_source; // 752
			const size_t  source_len; // 754
			char* p_source_temp; // 755
			strcpy(char* __dest,
				const char* __src);  // 764
		}
		{
			SpvReflectPrvAccessChain* p_access_chain; // 926
			{
				SpvReflectResult checked_readu32_result; // 927
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 927
			}
			{
				SpvReflectResult checked_readu32_result; // 928
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 928
			}
			{
				SpvReflectResult checked_readu32_result; // 929
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 929
			}
			{
				uint32_t index_index; // 941
				{
					uint32_t index_id; // 943
					SpvReflectPrvNode* p_index_value_node; // 946
					{
						SpvReflectResult checked_readu32_result; // 944
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 944
					}
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 946
					{
						uint32_t index_value; // 950
						{
							SpvReflectResult checked_readu32_result; // 951
							InRange(const SpvReflectPrvParser* p_parser,
								uint32_t index);  // 363
							ReadU32(SpvReflectPrvParser* p_parser,
								uint32_t word_offset,
								uint32_t* p_value);  // 951
						}
					}
				}
			}
		}
		{
			SpvReflectResult checked_readu32_result; // 889
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 889
		}
		{
			SpvReflectResult checked_readu32_result; // 890
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 890
		}
		{
			SpvReflectResult checked_readu32_result; // 868
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 868
		}
		{
			SpvReflectResult checked_readu32_result; // 869
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 869
		}
		{
			SpvReflectResult checked_readu32_result; // 861
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 861
		}
		{
			SpvReflectResult checked_readu32_result; // 862
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 862
		}
		{
			SpvReflectResult checked_readu32_result; // 863
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 863
		}
		{
			SpvReflectResult checked_readu32_result; // 855
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 855
		}
		{
			SpvReflectResult checked_readu32_result; // 856
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 856
		}
		{
			SpvReflectResult checked_readu32_result; // 843
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 843
		}
		{
			SpvReflectResult checked_readu32_result; // 844
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 844
		}
		{
			SpvReflectResult checked_readu32_result; // 845
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 845
		}
		{
			SpvReflectResult checked_readu32_result; // 846
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 846
		}
		{
			SpvReflectResult checked_readu32_result; // 847
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 847
		}
		{
			SpvReflectResult checked_readu32_result; // 848
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 848
		}
		{
			SpvReflectResult checked_readu32_result; // 849
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 849
		}
		{
			SpvReflectResult checked_readu32_result; // 850
			InRange(const SpvReflectPrvParser* p_parser,
				uint32_t index);  // 363
			ReadU32(SpvReflectPrvParser* p_parser,
				uint32_t word_offset,
				uint32_t* p_value);  // 850
		}
		{
			uint32_t result_id; // 874
			SpvReflectPrvNode* p_fwd_node; // 877
			{
				SpvReflectResult checked_readu32_result; // 875
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 875
			}
			{
				size_t i; // 509
				{
					SpvReflectPrvNode* p_elem; // 510
				}
			}
			FindNode(SpvReflectPrvParser* p_parser,
				uint32_t result_id);  // 877
			{
				SpvReflectResult checked_readu32_result; // 883
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 883
			}
			{
				SpvReflectResult checked_readu32_result; // 884
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 884
			}
		}
	}
	ParseNodes(SpvReflectPrvParser* p_parser); // 4151
	spvReflectDestroyShaderModule(SpvReflectShaderModule* p_module); // 4252
	{
		size_t i; // 627
		{
			SpvReflectPrvNode* p_node; // 628
		}
	}
	{
		size_t i; // 638
	}
	{
		uint32_t i; // 645
	}
	DestroyParser(SpvReflectPrvParser* p_parser); // 4255
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 4134
	{
		uint32_t string_index; // 1021
		{
			size_t i; // 1022
			{
				SpvReflectPrvNode* p_node; // 1023
				SpvReflectPrvString* p_string; // 1035
				uint32_t string_start; // 1039
				{
					SpvReflectResult checked_readu32_result; // 1036
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1036
				}
			}
		}
	}
	ParseStrings(SpvReflectPrvParser* p_parser); // 4155
	{
		uint32_t i; // 1057
		{
			SpvReflectPrvString* p_string; // 1058
		}
	}
	{
		const size_t  source_len; // 1068
		char* p_source; // 1069
		strcpy(char* __dest,
			const char* __src);  // 1078
	}
	ParseSource(SpvReflectPrvParser* p_parser,
			SpvReflectShaderModule* p_module);  // 4159
	{
		size_t function_index; // 1226
		{
			size_t i; // 1264
			{
				SpvReflectPrvFunction* p_func; // 1265
				{
					size_t j; // 1270
					size_t k; // 1270
				}
			}
		}
		{
			size_t i; // 1227
			{
				SpvReflectPrvNode* p_node; // 1228
				bool func_definition; // 1234
				SpvReflectPrvFunction* p_function; // 1250
				SpvReflectResult result; // 1252
				{
					size_t i; // 1143
					{
						SpvReflectPrvNode* p_node; // 1144
						{
							const uint32_t  result_index; // 1161
							const uint32_t  ptr_index; // 1162
							SpvReflectPrvAccessedVariable* access_ptr; // 1163
							{
								SpvReflectResult checked_readu32_result; // 1167
								InRange(const SpvReflectPrvParser* p_parser,
									uint32_t index);  // 363
								ReadU32(SpvReflectPrvParser* p_parser,
									uint32_t word_offset,
									uint32_t* p_value);  // 1167
							}
							{
								SpvReflectResult checked_readu32_result; // 1168
								InRange(const SpvReflectPrvParser* p_parser,
									uint32_t index);  // 363
								ReadU32(SpvReflectPrvParser* p_parser,
									uint32_t word_offset,
									uint32_t* p_value);  // 1168
							}
						}
						{
							SpvReflectResult checked_readu32_result; // 1180
							InRange(const SpvReflectPrvParser* p_parser,
								uint32_t index);  // 363
							ReadU32(SpvReflectPrvParser* p_parser,
								uint32_t word_offset,
								uint32_t* p_value);  // 1180
						}
						{
							SpvReflectResult checked_readu32_result; // 1183
							InRange(const SpvReflectPrvParser* p_parser,
								uint32_t index);  // 363
							ReadU32(SpvReflectPrvParser* p_parser,
								uint32_t word_offset,
								uint32_t* p_value);  // 1183
						}
						{
							SpvReflectResult checked_readu32_result; // 1150
							InRange(const SpvReflectPrvParser* p_parser,
								uint32_t index);  // 363
							ReadU32(SpvReflectPrvParser* p_parser,
								uint32_t word_offset,
								uint32_t* p_value);  // 1150
						}
						{
							const uint32_t  result_index; // 1172
							{
								SpvReflectResult checked_readu32_result; // 1173
								InRange(const SpvReflectPrvParser* p_parser,
									uint32_t index);  // 363
								ReadU32(SpvReflectPrvParser* p_parser,
									uint32_t word_offset,
									uint32_t* p_value);  // 1173
							}
						}
					}
				}
				{
					size_t i; // 1096
					{
						SpvReflectPrvNode* p_node; // 1097
					}
				}
				{
					size_t i; // 276
				}
				DedupSortedUint32(uint32_t* arr,
							size_t size);  // 271
				DedupSortedUint32(uint32_t* arr,
							size_t size);  // 1195
				ParseFunction(SpvReflectPrvParser* p_parser,
						SpvReflectPrvNode* p_func_node,
						SpvReflectPrvFunction* p_func,
						size_t first_label_index);  // 1252
			}
		}
	}
	ParseFunctions(SpvReflectPrvParser* p_parser); // 4163
	{
		size_t i; // 1292
		{
			SpvReflectPrvNode* p_node; // 1293
			uint32_t target_id; // 1298
			uint32_t member_index; // 1299
			SpvReflectPrvNode* p_target_node; // 1302
			{
				SpvReflectResult checked_readu32_result; // 1300
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 1300
			}
			{
				SpvReflectResult checked_readu32_result; // 1301
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 1301
			}
			{
				size_t i; // 509
				{
					SpvReflectPrvNode* p_elem; // 510
				}
			}
			FindNode(SpvReflectPrvParser* p_parser,
				uint32_t result_id);  // 1302
			Max(uint32_t a,
				uint32_t b);  // 1312
		}
	}
	{
		uint32_t i; // 1315
		{
			SpvReflectPrvNode* p_node; // 1316
		}
	}
	ParseMemberCounts(SpvReflectPrvParser* p_parser); // 4167
	{
		size_t i; // 1341
		{
			SpvReflectPrvNode* p_node; // 1342
			uint32_t target_id; // 1347
			SpvReflectPrvNode* p_target_node; // 1349
			const char ** pp_target_name; // 1355
			{
				SpvReflectResult checked_readu32_result; // 1348
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 1348
			}
			{
				size_t i; // 509
				{
					SpvReflectPrvNode* p_elem; // 510
				}
			}
			FindNode(SpvReflectPrvParser* p_parser,
				uint32_t result_id);  // 1349
			{
				uint32_t member_index; // 1357
				{
					SpvReflectResult checked_readu32_result; // 1358
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1358
				}
			}
		}
	}
	ParseNames(SpvReflectPrvParser* p_parser); // 4171
	{
		uint32_t i; // 1383
		{
			SpvReflectPrvNode* p_node; // 1384
			uint32_t member_offset; // 1392
			uint32_t decoration; // 1398
			bool skip; // 1403
			uint32_t target_id; // 1443
			SpvReflectPrvNode* p_target_node; // 1445
			SpvReflectPrvDecorations* p_target_decorations; // 1455
			{
				SpvReflectResult checked_readu32_result; // 1399
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 1399
			}
			{
				SpvReflectResult checked_readu32_result; // 1444
				InRange(const SpvReflectPrvParser* p_parser,
					uint32_t index);  // 363
				ReadU32(SpvReflectPrvParser* p_parser,
					uint32_t word_offset,
					uint32_t* p_value);  // 1444
			}
			{
				size_t i; // 509
				{
					SpvReflectPrvNode* p_elem; // 510
				}
			}
			FindNode(SpvReflectPrvParser* p_parser,
				uint32_t result_id);  // 1445
			{
				uint32_t member_index; // 1458
				{
					SpvReflectResult checked_readu32_result; // 1459
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1459
				}
			}
			{
				uint32_t word_offset; // 1562
				{
					SpvReflectResult checked_readu32_result; // 1563
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1563
				}
			}
			{
				uint32_t word_offset; // 1556
				{
					SpvReflectResult checked_readu32_result; // 1557
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1557
				}
			}
			{
				uint32_t word_offset; // 1550
				{
					SpvReflectResult checked_readu32_result; // 1551
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1551
				}
			}
			{
				uint32_t word_offset; // 1544
				{
					SpvReflectResult checked_readu32_result; // 1545
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1545
				}
			}
			{
				uint32_t word_offset; // 1538
				{
					SpvReflectResult checked_readu32_result; // 1539
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1539
				}
			}
			{
				uint32_t word_offset; // 1532
				{
					SpvReflectResult checked_readu32_result; // 1533
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1533
				}
			}
			{
				uint32_t word_offset; // 1499
				{
					uint32_t checked_readu32_cast_u32; // 1500
					SpvReflectResult checked_readu32_cast_result; // 1500
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1500
				}
			}
			{
				uint32_t word_offset; // 1493
				{
					SpvReflectResult checked_readu32_result; // 1494
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1494
				}
			}
			{
				uint32_t word_offset; // 1488
				{
					SpvReflectResult checked_readu32_result; // 1489
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1489
				}
			}
			{
				uint32_t word_offset; // 1578
			}
			{
				uint32_t word_offset; // 1572
				{
					SpvReflectResult checked_readu32_result; // 1573
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1573
				}
			}
			{
				uint32_t terminator; // 1593
				SpvReflectResult result; // 1594
				const char* name; // 1598
				UserTypeMatches(const char* user_type,
						const char* pattern);  // 1599
				UserTypeMatches(const char* user_type,
						const char* pattern);  // 1601
				UserTypeMatches(const char* user_type,
						const char* pattern);  // 1603
				UserTypeMatches(const char* user_type,
						const char* pattern);  // 1605
			}
		}
	}
	{
		uint32_t i; // 1687
		{
			SpvReflectPrvNode* p_node; // 1688
			{
				uint32_t decoration; // 1690
				{
					const uint32_t  count; // 1693
					SpvReflectPrvNode* target_node; // 1697
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 1697
					{
						SpvReflectResult checked_readu32_result; // 1694
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 1694
					}
					{
						SpvReflectResult checked_readu32_result; // 1695
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 1695
					}
				}
				{
					SpvReflectResult checked_readu32_result; // 1691
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 1691
				}
			}
		}
	}
	ParseDecorations(SpvReflectPrvParser* p_parser,
			SpvReflectShaderModule* p_module);  // 4175
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4186
	{
		size_t i; // 2015
		{
			SpvReflectTypeDescription* p_type; // 2016
		}
	}
	{
		size_t i; // 2023
		{
			SpvReflectPrvNode* p_node; // 2024
			SpvReflectTypeDescription* p_type; // 2029
			SpvReflectResult result; // 2031
		}
	}
	ParseTypes(SpvReflectPrvParser* p_parser,
			SpvReflectShaderModule* p_module);  // 4193
	{
		uint32_t descriptor_index; // 2261
		{
			SpvReflectDescriptorBinding* p_descriptor; // 2262
			SpvReflectTypeDescription* p_type; // 2263
		}
	}
	ParseDescriptorType(SpvReflectShaderModule* p_module); // 4201
	{
		uint32_t descriptor_index; // 2386
		{
			SpvReflectDescriptorBinding* p_descriptor; // 2387
			SpvReflectDescriptorBinding* p_counter_descriptor; // 2393
			{
				const size_t  descriptor_name_length; // 2410
				memset(void* __dest,
					int __ch,
					size_t __len);  // 2412
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 2413
				{
					uint32_t counter_descriptor_index; // 2420
					{
						SpvReflectDescriptorBinding* p_test_counter_descriptor; // 2422
					}
				}
			}
			{
				uint32_t counter_descriptor_index; // 2396
				{
					SpvReflectDescriptorBinding* p_test_counter_descriptor; // 2398
				}
			}
		}
	}
	ParseUAVCounterBindings(SpvReflectShaderModule* p_module); // 4205
	{
		uint32_t descriptor_index; // 2897
		{
			SpvReflectDescriptorBinding* p_descriptor; // 2898
			SpvReflectTypeDescription* p_type; // 2899
			SpvReflectResult result; // 2909
			bool is_parent_rta; // 2928
			{
				uint32_t access_chain_index; // 2914
				{
					SpvReflectPrvAccessChain* p_access_chain; // 2915
				}
			}
		}
	}
	ParseDescriptorBlocks(SpvReflectPrvParser* p_parser,
				SpvReflectShaderModule* p_module);  // 4209
	{
		size_t i; // 3831
		{
			SpvReflectPrvNode* p_node; // 3832
		}
	}
	{
		size_t i; // 3852
		{
			SpvReflectPrvNode* p_node; // 3853
			SpvReflectTypeDescription* p_type; // 3858
			SpvReflectPrvNode* p_type_node; // 3876
			SpvReflectBlockVariable* p_push_constant; // 3881
			SpvReflectResult result; // 3884
			{
				size_t i; // 521
				{
					SpvReflectTypeDescription* p_elem; // 522
				}
			}
			FindType(SpvReflectShaderModule* p_module,
				uint32_t type_id);  // 3858
			{
				SpvReflectPrvNode* p_type_node; // 3865
				{
					size_t i; // 509
					{
						SpvReflectPrvNode* p_elem; // 510
					}
				}
				FindNode(SpvReflectPrvParser* p_parser,
					uint32_t result_id);  // 3865
				{
					size_t i; // 521
					{
						SpvReflectTypeDescription* p_elem; // 522
					}
				}
				FindType(SpvReflectShaderModule* p_module,
					uint32_t type_id);  // 3870
			}
			{
				size_t i; // 509
				{
					SpvReflectPrvNode* p_elem; // 510
				}
			}
			FindNode(SpvReflectPrvParser* p_parser,
				uint32_t result_id);  // 3876
			{
				uint32_t k; // 3912
				{
					const uint32_t  member_offset; // 3913
					Min(uint32_t a,
						uint32_t b);  // 3914
				}
			}
			{
				uint32_t access_chain_index; // 3889
				{
					SpvReflectPrvAccessChain* p_access_chain; // 3890
					SpvReflectBlockVariable* p_var; // 3895
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 543
					{
						SpvReflectPrvAccessChain* base_ac; // 563
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 553
						InRange(const SpvReflectPrvParser* p_parser,
							uint32_t index);  // 363
						ReadU32(SpvReflectPrvParser* p_parser,
							uint32_t word_offset,
							uint32_t* p_value);  // 556
						{
							uint32_t i; // 533
						}
						FindAccessChain(SpvReflectPrvParser* p_parser,
								uint32_t id);  // 563
						{
							size_t i; // 509
							{
								SpvReflectPrvNode* p_elem; // 510
							}
						}
						FindNode(SpvReflectPrvParser* p_parser,
							uint32_t result_id);  // 568
					}
					FindBaseId(SpvReflectPrvParser* p_parser,
							SpvReflectPrvAccessChain* ac);  // 3892
					{
						size_t i; // 509
						{
							SpvReflectPrvNode* p_elem; // 510
						}
					}
					FindNode(SpvReflectPrvParser* p_parser,
						uint32_t result_id);  // 578
					InRange(const SpvReflectPrvParser* p_parser,
						uint32_t index);  // 363
					ReadU32(SpvReflectPrvParser* p_parser,
						uint32_t word_offset,
						uint32_t* p_value);  // 580
					{
						uint32_t i; // 533
					}
					FindAccessChain(SpvReflectPrvParser* p_parser,
							uint32_t id);  // 581
					GetRefBlkVar(SpvReflectPrvParser* p_parser,
							SpvReflectPrvAccessChain* ac);  // 3896
				}
			}
		}
	}
	ParsePushConstantBlocks(SpvReflectPrvParser* p_parser,
				SpvReflectShaderModule* p_module);  // 4213
	{
		size_t i; // 2061
		{
			SpvReflectCapability* p_cap; // 2062
		}
	}
	{
		size_t i; // 2068
		{
			SpvReflectPrvNode* p_node; // 2069
			SpvReflectCapability* p_cap; // 2074
		}
	}
	ParseCapabilities(SpvReflectPrvParser* p_parser,
				SpvReflectShaderModule* p_module);  // 4221
	{
		uint32_t descriptor_index; // 4063
		{
			SpvReflectDescriptorBinding* p_descriptor; // 4064
		}
	}
	DisambiguateStorageBufferSrvUav(SpvReflectShaderModule* p_module); // 4238
	{
		uint32_t i; // 4086
		{
			SpvReflectDescriptorSet* p_set; // 4087
		}
	}
	SynchronizeDescriptorSets(SpvReflectShaderModule* p_module); // 4242
} /* size: 0, variables: 2, inline expansions: 22 (12123 bytes) */

// <00D59666> ../thirdparty/spirv-reflect/spirv_reflect.c:4260
SpvReflectResult spvReflectCreateShaderModule(size_t size, const void* p_code, SpvReflectShaderModule* p_module)
{
} /* size: 0 */

// <00D59585> ../thirdparty/spirv-reflect/spirv_reflect.c:4268
SpvReflectResult spvReflectGetShaderModule(size_t size, const void* p_code, SpvReflectShaderModule* p_module)
{
} /* size: 0 */

// <00D594FA> ../thirdparty/spirv-reflect/spirv_reflect.c:4272
// variables: 2
void SafeFreeTypes(SpvReflectTypeDescription* p_type)
{
	{
		size_t i; // 4278
		{
			SpvReflectTypeDescription* p_member; // 4279
		}
	}
} /* size: 129 */

// <00D679D4> ../thirdparty/spirv-reflect/spirv_reflect.c:4288
// variables: 2
// function call: 1
void SafeFreeBlockVariables(SpvReflectBlockVariable* p_block)
{
	{
		size_t i; // 4299
		{
			SpvReflectBlockVariable* p_member; // 4300
			SafeFreeBlockVariables(SpvReflectBlockVariable* p_block); // 4301
		}
	}
} /* size: 129 */

// <00D594C2> ../thirdparty/spirv-reflect/spirv_reflect.c:4288
// variables: 2
void SafeFreeBlockVariables(SpvReflectBlockVariable* p_block)
{
	{
		size_t i; // 4299
		{
			SpvReflectBlockVariable* p_member; // 4300
		}
	}
} /* size: 0 */

// <00D67A71> ../thirdparty/spirv-reflect/spirv_reflect.c:4309
// variables: 18
// function calls: 8
void SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface)
{
	{
		size_t i; // 4315
		{
			SpvReflectInterfaceVariable* p_member; // 4316
			{
				size_t i; // 4315
				{
					SpvReflectInterfaceVariable* p_member; // 4316
					{
						size_t i; // 4315
						{
							SpvReflectInterfaceVariable* p_member; // 4316
							{
								size_t i; // 4315
								{
									SpvReflectInterfaceVariable* p_member; // 4316
									{
										size_t i; // 4315
										{
											SpvReflectInterfaceVariable* p_member; // 4316
											{
												size_t i; // 4315
												{
													SpvReflectInterfaceVariable* p_member; // 4316
													{
														size_t i; // 4315
														{
															SpvReflectInterfaceVariable* p_member; // 4316
															{
																size_t i; // 4315
																{
																SpvReflectInterfaceVariable* p_member; // 4316
																{
																size_t i; // 4315
																{
																SpvReflectInterfaceVariable* p_member; // 4316
																}
																}
																SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface); // 4317
																}
															}
															SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface); // 4317
														}
													}
													SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface); // 4317
												}
											}
											SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface); // 4317
										}
									}
									SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface); // 4317
								}
							}
							SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface); // 4317
						}
					}
					SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface); // 4317
				}
			}
			SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface); // 4317
		}
	}
} /* size: 1271 */

// <00D5948A> ../thirdparty/spirv-reflect/spirv_reflect.c:4309
// variables: 2
void SafeFreeInterfaceVariable(SpvReflectInterfaceVariable* p_interface)
{
	{
		size_t i; // 4315
		{
			SpvReflectInterfaceVariable* p_member; // 4316
		}
	}
} /* size: 0 */

// <00D5938B> ../thirdparty/spirv-reflect/spirv_reflect.c:4393
uint32_t spvReflectGetCodeSize(const SpvReflectShaderModule* p_module)
{
} /* size: 0 */

// <00D59355> ../thirdparty/spirv-reflect/spirv_reflect.c:4401
const uint32_t* spvReflectGetCode(const SpvReflectShaderModule* p_module)
{
} /* size: 0 */

// <00D5931A> ../thirdparty/spirv-reflect/spirv_reflect.c:4409
// variable: 1
const SpvReflectEntryPoint* spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module, const char* entry_point)
{
	{
		uint32_t i; // 4414
	}
} /* size: 0 */

// <00D5927E> ../thirdparty/spirv-reflect/spirv_reflect.c:4422
// variables: 2
SpvReflectResult spvReflectEnumerateDescriptorBindings(const SpvReflectShaderModule* p_module, uint32_t* p_count, SpvReflectDescriptorBinding** pp_bindings)
{
	{
		uint32_t index; // 4436
		{
			SpvReflectDescriptorBinding* p_bindings; // 4437
		}
	}
} /* size: 0 */

// <00D590BB> ../thirdparty/spirv-reflect/spirv_reflect.c:4447
// variables: 6
// function calls: 3
SpvReflectResult spvReflectEnumerateEntryPointDescriptorBindings(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t* p_count, SpvReflectDescriptorBinding** pp_bindings)
{
	const SpvReflectEntryPoint* p_entry; // 4456
	uint32_t count; // 4461
	{
		uint32_t i; // 4462
		{
			bool found; // 4463
			{
				size_t mid; // 289
			}
			SearchSortedUint32(const uint32_t* arr,
						size_t size,
						uint32_t target);  // 4463
		}
	}
	{
		uint32_t i; // 4414
	}
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4409
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4456
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00D58EBB> ../thirdparty/spirv-reflect/spirv_reflect.c:4510
// variables: 4
// function calls: 2
SpvReflectResult spvReflectEnumerateEntryPointDescriptorSets(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t* p_count, SpvReflectDescriptorSet** pp_sets)
{
	const SpvReflectEntryPoint* p_entry; // 4519
	{
		uint32_t index; // 4529
		{
			SpvReflectDescriptorSet* p_set; // 4530
		}
	}
	{
		uint32_t i; // 4414
	}
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4409
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4519
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00D58E1F> ../thirdparty/spirv-reflect/spirv_reflect.c:4540
// variables: 2
SpvReflectResult spvReflectEnumerateInterfaceVariables(const SpvReflectShaderModule* p_module, uint32_t* p_count, SpvReflectInterfaceVariable** pp_variables)
{
	{
		uint32_t index; // 4554
		{
			SpvReflectInterfaceVariable* p_var; // 4555
		}
	}
} /* size: 0 */

// <00D58CD3> ../thirdparty/spirv-reflect/spirv_reflect.c:4565
// variables: 4
// function calls: 2
SpvReflectResult spvReflectEnumerateEntryPointInterfaceVariables(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t* p_count, SpvReflectInterfaceVariable** pp_variables)
{
	const SpvReflectEntryPoint* p_entry; // 4574
	{
		uint32_t index; // 4584
		{
			SpvReflectInterfaceVariable* p_var; // 4585
		}
	}
	{
		uint32_t i; // 4414
	}
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4409
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4574
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00D58C2B> ../thirdparty/spirv-reflect/spirv_reflect.c:4595
// variables: 2
SpvReflectResult spvReflectEnumerateInputVariables(const SpvReflectShaderModule* p_module, uint32_t* p_count, SpvReflectInterfaceVariable** pp_variables)
{
	{
		uint32_t index; // 4609
		{
			SpvReflectInterfaceVariable* p_var; // 4610
		}
	}
} /* size: 0 */

// <00D58AD3> ../thirdparty/spirv-reflect/spirv_reflect.c:4620
// variables: 4
// function calls: 2
SpvReflectResult spvReflectEnumerateEntryPointInputVariables(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t* p_count, SpvReflectInterfaceVariable** pp_variables)
{
	const SpvReflectEntryPoint* p_entry; // 4629
	{
		uint32_t index; // 4639
		{
			SpvReflectInterfaceVariable* p_var; // 4640
		}
	}
	{
		uint32_t i; // 4414
	}
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4409
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4629
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00D58A2B> ../thirdparty/spirv-reflect/spirv_reflect.c:4650
// variables: 2
SpvReflectResult spvReflectEnumerateOutputVariables(const SpvReflectShaderModule* p_module, uint32_t* p_count, SpvReflectInterfaceVariable** pp_variables)
{
	{
		uint32_t index; // 4664
		{
			SpvReflectInterfaceVariable* p_var; // 4665
		}
	}
} /* size: 0 */

// <00D588D3> ../thirdparty/spirv-reflect/spirv_reflect.c:4675
// variables: 4
// function calls: 2
SpvReflectResult spvReflectEnumerateEntryPointOutputVariables(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t* p_count, SpvReflectInterfaceVariable** pp_variables)
{
	const SpvReflectEntryPoint* p_entry; // 4684
	{
		uint32_t index; // 4694
		{
			SpvReflectInterfaceVariable* p_var; // 4695
		}
	}
	{
		uint32_t i; // 4414
	}
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4409
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4684
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00D5887A> ../thirdparty/spirv-reflect/spirv_reflect.c:4705
// variables: 2
SpvReflectResult spvReflectEnumeratePushConstantBlocks(const SpvReflectShaderModule* p_module, uint32_t* p_count, SpvReflectBlockVariable** pp_blocks)
{
	{
		uint32_t index; // 4719
		{
			SpvReflectBlockVariable* p_push_constant_blocks; // 4720
		}
	}
} /* size: 0 */

// <00D587A7> ../thirdparty/spirv-reflect/spirv_reflect.c:4729
// variables: 2
// function call: 1
SpvReflectResult spvReflectEnumeratePushConstants(const SpvReflectShaderModule* p_module, uint32_t* p_count, SpvReflectBlockVariable** pp_blocks)
{
	{
		uint32_t index; // 4719
		{
			SpvReflectBlockVariable* p_push_constant_blocks; // 4720
		}
	}
	spvReflectEnumeratePushConstantBlocks(const SpvReflectShaderModule* p_module,
						uint32_t* p_count,
						SpvReflectBlockVariable** pp_blocks);  // 4731
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00D585E4> ../thirdparty/spirv-reflect/spirv_reflect.c:4734
// variables: 6
// function calls: 3
SpvReflectResult spvReflectEnumerateEntryPointPushConstantBlocks(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t* p_count, SpvReflectBlockVariable** pp_blocks)
{
	const SpvReflectEntryPoint* p_entry; // 4743
	uint32_t count; // 4748
	{
		uint32_t i; // 4749
		{
			bool found; // 4750
			{
				size_t mid; // 289
			}
			SearchSortedUint32(const uint32_t* arr,
						size_t size,
						uint32_t target);  // 4750
		}
	}
	{
		uint32_t i; // 4414
	}
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4409
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4743
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00D5853C> ../thirdparty/spirv-reflect/spirv_reflect.c:4773
// variables: 2
SpvReflectResult spvReflectEnumerateSpecializationConstants(const SpvReflectShaderModule* p_module, uint32_t* p_count, SpvReflectSpecializationConstant** pp_constants)
{
	{
		uint32_t index; // 4787
		{
			SpvReflectSpecializationConstant* p_constant; // 4788
		}
	}
} /* size: 0 */

// <00D58476> ../thirdparty/spirv-reflect/spirv_reflect.c:4798
// variables: 3
const SpvReflectDescriptorBinding* spvReflectGetDescriptorBinding(const SpvReflectShaderModule* p_module, uint32_t binding_number, uint32_t set_number, SpvReflectResult* p_result)
{
	const SpvReflectDescriptorBinding* p_descriptor; // 4800
	{
		uint32_t index; // 4802
		{
			const SpvReflectDescriptorBinding* p_potential; // 4803
		}
	}
} /* size: 0, variables: 1 */

// <00D5826F> ../thirdparty/spirv-reflect/spirv_reflect.c:4818
// variables: 7
// function calls: 3
const SpvReflectDescriptorBinding* spvReflectGetEntryPointDescriptorBinding(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t binding_number, uint32_t set_number, SpvReflectResult* p_result)
{
	const SpvReflectEntryPoint* p_entry; // 4821
	const SpvReflectDescriptorBinding* p_descriptor; // 4828
	{
		uint32_t index; // 4830
		{
			const SpvReflectDescriptorBinding* p_potential; // 4831
			bool found; // 4832
			{
				size_t mid; // 289
			}
			SearchSortedUint32(const uint32_t* arr,
						size_t size,
						uint32_t target);  // 4832
		}
	}
	{
		uint32_t i; // 4414
	}
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4409
	spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
				const char* entry_point);  // 4821
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00D581B8> ../thirdparty/spirv-reflect/spirv_reflect.c:4847
// variables: 3
const SpvReflectDescriptorSet* spvReflectGetDescriptorSet(const SpvReflectShaderModule* p_module, uint32_t set_number, SpvReflectResult* p_result)
{
	const SpvReflectDescriptorSet* p_set; // 4849
	{
		uint32_t index; // 4851
		{
			const SpvReflectDescriptorSet* p_potential; // 4852
		}
	}
} /* size: 0, variables: 1 */

// <00D58039> ../thirdparty/spirv-reflect/spirv_reflect.c:4866
// variables: 5
// function calls: 2
const SpvReflectDescriptorSet* spvReflectGetEntryPointDescriptorSet(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t set_number, SpvReflectResult* p_result)
{
	const SpvReflectDescriptorSet* p_set; // 4868
	{
		const SpvReflectEntryPoint* p_entry; // 4870
		{
			uint32_t index; // 4877
			{
				const SpvReflectDescriptorSet* p_potential; // 4878
			}
		}
		{
			uint32_t i; // 4414
		}
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 4409
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 4870
	}
} /* size: 0, variables: 1 */

// <00D57F82> ../thirdparty/spirv-reflect/spirv_reflect.c:4892
// variables: 3
const SpvReflectInterfaceVariable* spvReflectGetInputVariableByLocation(const SpvReflectShaderModule* p_module, uint32_t location, SpvReflectResult* p_result)
{
	const SpvReflectInterfaceVariable* p_var; // 4900
	{
		uint32_t index; // 4902
		{
			const SpvReflectInterfaceVariable* p_potential; // 4903
		}
	}
} /* size: 0, variables: 1 */

// <00D57EFF> ../thirdparty/spirv-reflect/spirv_reflect.c:4916
const SpvReflectInterfaceVariable* spvReflectGetInputVariable(const SpvReflectShaderModule* p_module, uint32_t location, SpvReflectResult* p_result)
{
} /* size: 0 */

// <00D57D80> ../thirdparty/spirv-reflect/spirv_reflect.c:4921
// variables: 5
// function calls: 2
const SpvReflectInterfaceVariable* spvReflectGetEntryPointInputVariableByLocation(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t location, SpvReflectResult* p_result)
{
	const SpvReflectInterfaceVariable* p_var; // 4931
	{
		const SpvReflectEntryPoint* p_entry; // 4933
		{
			uint32_t index; // 4940
			{
				const SpvReflectInterfaceVariable* p_potential; // 4941
			}
		}
		{
			uint32_t i; // 4414
		}
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 4409
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 4933
	}
} /* size: 0, variables: 1 */

// <00D57CAE> ../thirdparty/spirv-reflect/spirv_reflect.c:4955
// variables: 3
const SpvReflectInterfaceVariable* spvReflectGetInputVariableBySemantic(const SpvReflectShaderModule* p_module, const char* semantic, SpvReflectResult* p_result)
{
	const SpvReflectInterfaceVariable* p_var; // 4969
	{
		uint32_t index; // 4971
		{
			const SpvReflectInterfaceVariable* p_potential; // 4972
		}
	}
} /* size: 0, variables: 1 */

// <00D57B0F> ../thirdparty/spirv-reflect/spirv_reflect.c:4986
// variables: 5
// function calls: 2
const SpvReflectInterfaceVariable* spvReflectGetEntryPointInputVariableBySemantic(const SpvReflectShaderModule* p_module, const char* entry_point, const char* semantic, SpvReflectResult* p_result)
{
	const SpvReflectInterfaceVariable* p_var; // 5001
	{
		const SpvReflectEntryPoint* p_entry; // 5003
		{
			uint32_t index; // 5010
			{
				const SpvReflectInterfaceVariable* p_potential; // 5011
			}
		}
		{
			uint32_t i; // 4414
		}
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 4409
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 5003
	}
} /* size: 0, variables: 1 */

// <00D57A58> ../thirdparty/spirv-reflect/spirv_reflect.c:5025
// variables: 3
const SpvReflectInterfaceVariable* spvReflectGetOutputVariableByLocation(const SpvReflectShaderModule* p_module, uint32_t location, SpvReflectResult* p_result)
{
	const SpvReflectInterfaceVariable* p_var; // 5033
	{
		uint32_t index; // 5035
		{
			const SpvReflectInterfaceVariable* p_potential; // 5036
		}
	}
} /* size: 0, variables: 1 */

// <00D579D5> ../thirdparty/spirv-reflect/spirv_reflect.c:5049
const SpvReflectInterfaceVariable* spvReflectGetOutputVariable(const SpvReflectShaderModule* p_module, uint32_t location, SpvReflectResult* p_result)
{
} /* size: 0 */

// <00D57856> ../thirdparty/spirv-reflect/spirv_reflect.c:5054
// variables: 5
// function calls: 2
const SpvReflectInterfaceVariable* spvReflectGetEntryPointOutputVariableByLocation(const SpvReflectShaderModule* p_module, const char* entry_point, uint32_t location, SpvReflectResult* p_result)
{
	const SpvReflectInterfaceVariable* p_var; // 5064
	{
		const SpvReflectEntryPoint* p_entry; // 5066
		{
			uint32_t index; // 5073
			{
				const SpvReflectInterfaceVariable* p_potential; // 5074
			}
		}
		{
			uint32_t i; // 4414
		}
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 4409
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 5066
	}
} /* size: 0, variables: 1 */

// <00D57784> ../thirdparty/spirv-reflect/spirv_reflect.c:5088
// variables: 3
const SpvReflectInterfaceVariable* spvReflectGetOutputVariableBySemantic(const SpvReflectShaderModule* p_module, const char* semantic, SpvReflectResult* p_result)
{
	const SpvReflectInterfaceVariable* p_var; // 5102
	{
		uint32_t index; // 5104
		{
			const SpvReflectInterfaceVariable* p_potential; // 5105
		}
	}
} /* size: 0, variables: 1 */

// <00D575E5> ../thirdparty/spirv-reflect/spirv_reflect.c:5119
// variables: 5
// function calls: 2
const SpvReflectInterfaceVariable* spvReflectGetEntryPointOutputVariableBySemantic(const SpvReflectShaderModule* p_module, const char* entry_point, const char* semantic, SpvReflectResult* p_result)
{
	const SpvReflectInterfaceVariable* p_var; // 5134
	{
		const SpvReflectEntryPoint* p_entry; // 5136
		{
			uint32_t index; // 5143
			{
				const SpvReflectInterfaceVariable* p_potential; // 5144
			}
		}
		{
			uint32_t i; // 4414
		}
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 4409
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 5136
	}
} /* size: 0, variables: 1 */

// <00D5759D> ../thirdparty/spirv-reflect/spirv_reflect.c:5158
// variable: 1
const SpvReflectBlockVariable* spvReflectGetPushConstantBlock(const SpvReflectShaderModule* p_module, uint32_t index, SpvReflectResult* p_result)
{
	const SpvReflectBlockVariable* p_push_constant; // 5160
} /* size: 0, variables: 1 */

// <00D574FD> ../thirdparty/spirv-reflect/spirv_reflect.c:5173
// function call: 1
const SpvReflectBlockVariable* spvReflectGetPushConstant(const SpvReflectShaderModule* p_module, uint32_t index, SpvReflectResult* p_result)
{
	spvReflectGetPushConstantBlock(const SpvReflectShaderModule* p_module,
					uint32_t index,
					SpvReflectResult* p_result);  // 5175
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00D57335> ../thirdparty/spirv-reflect/spirv_reflect.c:5178
// variables: 6
// function calls: 3
const SpvReflectBlockVariable* spvReflectGetEntryPointPushConstantBlock(const SpvReflectShaderModule* p_module, const char* entry_point, SpvReflectResult* p_result)
{
	const SpvReflectBlockVariable* p_push_constant; // 5180
	{
		const SpvReflectEntryPoint* p_entry; // 5182
		{
			uint32_t i; // 5189
			{
				bool found; // 5190
				{
					size_t mid; // 289
				}
				SearchSortedUint32(const uint32_t* arr,
							size_t size,
							uint32_t target);  // 5190
			}
		}
		{
			uint32_t i; // 4414
		}
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 4409
		spvReflectGetEntryPoint(const SpvReflectShaderModule* p_module,
					const char* entry_point);  // 5182
	}
} /* size: 0, variables: 1 */

// <00D5729E> ../thirdparty/spirv-reflect/spirv_reflect.c:5206
// variables: 5
SpvReflectResult spvReflectChangeDescriptorBindingNumbers(SpvReflectShaderModule* p_module, const SpvReflectDescriptorBinding* p_binding, uint32_t new_binding_number, uint32_t new_set_binding)
{
	SpvReflectDescriptorBinding* p_target_descriptor; // 5216
	SpvReflectResult result; // 5242
	{
		uint32_t index; // 5217
	}
	{
		uint32_t* p_code; // 5230
	}
	{
		uint32_t* p_code; // 5236
	}
} /* size: 0, variables: 2 */

// <00D571F8> ../thirdparty/spirv-reflect/spirv_reflect.c:5248
SpvReflectResult spvReflectChangeDescriptorBindingNumber(SpvReflectShaderModule* p_module, const SpvReflectDescriptorBinding* p_descriptor_binding, uint32_t new_binding_number, uint32_t optional_new_set_number)
{
} /* size: 0 */

// <00D57082> ../thirdparty/spirv-reflect/spirv_reflect.c:5254
// variables: 8
// function call: 1
SpvReflectResult spvReflectChangeDescriptorSetNumber(SpvReflectShaderModule* p_module, const SpvReflectDescriptorSet* p_set, uint32_t new_set_number)
{
	SpvReflectDescriptorSet* p_target_set; // 5262
	SpvReflectResult result; // 5272
	{
		uint32_t index; // 5263
	}
	{
		uint32_t index; // 5274
		{
			SpvReflectDescriptorBinding* p_descriptor; // 5275
			uint32_t* p_code; // 5280
		}
	}
	{
		uint32_t i; // 4086
		{
			SpvReflectDescriptorSet* p_set; // 4087
		}
	}
	SynchronizeDescriptorSets(SpvReflectShaderModule* p_module); // 5285
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <00D5703B> ../thirdparty/spirv-reflect/spirv_reflect.c:5291
// variable: 1
SpvReflectResult ChangeVariableLocation(SpvReflectShaderModule* p_module, SpvReflectInterfaceVariable* p_variable, uint32_t new_location)
{
	uint32_t* p_code; // 5296
} /* size: 0, variables: 1 */

// <00D56F5C> ../thirdparty/spirv-reflect/spirv_reflect.c:5302
// variable: 1
// function call: 1
SpvReflectResult spvReflectChangeInputVariableLocation(SpvReflectShaderModule* p_module, const SpvReflectInterfaceVariable* p_input_variable, uint32_t new_location)
{
	{
		uint32_t index; // 5310
		ChangeVariableLocation(SpvReflectShaderModule* p_module,
					SpvReflectInterfaceVariable* p_variable,
					uint32_t new_location);  // 5312
	}
} /* size: 0 */

// <00D56E77> ../thirdparty/spirv-reflect/spirv_reflect.c:5318
// variable: 1
// function call: 1
SpvReflectResult spvReflectChangeOutputVariableLocation(SpvReflectShaderModule* p_module, const SpvReflectInterfaceVariable* p_output_variable, uint32_t new_location)
{
	{
		uint32_t index; // 5327
		ChangeVariableLocation(SpvReflectShaderModule* p_module,
					SpvReflectInterfaceVariable* p_variable,
					uint32_t new_location);  // 5329
	}
} /* size: 0 */

// <00D56E3B> ../thirdparty/spirv-reflect/spirv_reflect.c:5335
const char* spvReflectSourceLanguage(SpvSourceLanguage source_lang)
{
} /* size: 0 */

// <00D56E05> ../thirdparty/spirv-reflect/spirv_reflect.c:5363
const char* spvReflectBlockVariableTypeName(const SpvReflectBlockVariable* p_var)
{
} /* size: 0 */

