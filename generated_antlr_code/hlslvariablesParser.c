
//
// generated_antlr_code/hlslvariablesParser.c
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 70
//

// <002DA07F> generated_antlr_code/hlslvariablesParser.c:177
// variables: 2
int texture_type_dx11_2(phlslvariablesParser ctx)
{

ruletexture_type_dx11_2Ex: // 258
	int paramType; // 179
	{
		ANTLR3_UINT32 alt89; // 189
	}
} /* size: 317, variables: 1, goto labels: 1 */

// <002D9F6C> generated_antlr_code/hlslvariablesParser.c:276
// variables: 2
int texture_type_dx11_3(phlslvariablesParser ctx)
{

ruletexture_type_dx11_3Ex: // 397
	int paramType; // 278
	{
		ANTLR3_UINT32 alt90; // 288
	}
} /* size: 443, variables: 1, goto labels: 1 */

// <002D9E7A> generated_antlr_code/hlslvariablesParser.c:415
// variables: 2
int texture_type_vulkan_hlsl(phlslvariablesParser ctx)
{

ruletexture_type_vulkan_hlslEx: // 516
	int paramType; // 417
	{
		ANTLR3_UINT32 alt91; // 427
	}
} /* size: 363, variables: 1, goto labels: 1 */

// <0032A805> generated_antlr_code/hlslvariablesParser.c:417
const char* getGrammarFileName(void)
{
} /* size: 12 */

// <0032A70B> generated_antlr_code/hlslvariablesParser.c:442
// variable: 1
phlslvariablesParser hlslvariablesParserNewSSD(pANTLR3_COMMON_TOKEN_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state)
{
	phlslvariablesParser ctx; // 444
} /* size: 1165, variables: 1 */

// <002D9DDC> generated_antlr_code/hlslvariablesParser.c:534
void type_modifier(phlslvariablesParser ctx)
{

ruletype_modifierEx: // 567
} /* size: 315, goto labels: 1 */

// <0032A6BB> generated_antlr_code/hlslvariablesParser.c:563
void hlslvariablesParserFree(phlslvariablesParser ctx)
{
} /* size: 38 */

// <002D9BF7> generated_antlr_code/hlslvariablesParser.c:585
// variables: 2
hlslvariablesParser_storage_class_return storage_class(phlslvariablesParser ctx)
{

rulestorage_classEx: // 795
	hlslvariablesParser_storage_class_return retval; // 587
	{
		ANTLR3_UINT32 alt92; // 603
	}
} /* size: 634, variables: 1, goto labels: 1 */

// <002D9B4A> generated_antlr_code/hlslvariablesParser.c:814
// variables: 3
const char* interpolation_modifier(phlslvariablesParser ctx)
{

ruleinterpolation_modifierEx: // 982
	const char* pInterpolationModifierName; // 816
	pANTLR3_COMMON_TOKEN mod; // 818
	{
		ANTLR3_UINT32 alt93; // 833
	}
} /* size: 431, variables: 2, goto labels: 1 */

// <002D9ABF> generated_antlr_code/hlslvariablesParser.c:1000
void accept_some_interpolation_modifiers(phlslvariablesParser ctx)
{

ruleaccept_some_interpolation_modifiersEx: // 1033
} /* size: 283, goto labels: 1 */

// <002D96EF> generated_antlr_code/hlslvariablesParser.c:1051
// variables: 2
// function calls: 15
void function_attribute(phlslvariablesParser ctx)
{

rulefunction_attributeEx: // 1092
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* function_attribute_def54; // 1053
	{
		int i; // 1721
		CUtlMemory<VariableValue_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 16
		VariableValue_t::~VariableValue_t(); // 1526
		Destruct<VariableValue_t>(VariableValue_t* pMemory); // 1723
	}
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VariableValue_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VariableValue_t, int>::Purge(); // 903
	CUtlMemory<VariableValue_t, int>::Purge(); // 1799
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Purge(); // 560
	ValidateAlignment<VariableValue_t>(void); // 508
	CUtlMemory<VariableValue_t, int>::Purge(); // 510
	CUtlMemory<VariableValue_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >::~CUtlVector(); // 1080
} /* size: 308, variables: 1, goto labels: 1, inline expansions: 10 (491 bytes) */

// <002D914A> generated_antlr_code/hlslvariablesParser.c:1110
// variables: 4
// function calls: 18
CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* function_attribute_def(phlslvariablesParser ctx)
{

rulefunction_attribute_defEx: // 1197
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* pValueArray; // 1112
	pANTLR3_COMMON_TOKEN ID55; // 1114
	{
		VariableValue_t val; // 1143
		CUtlString::CUtlString(); // 28
		VariableValue_t::VariableValue_t(); // 1143
		CUtlMemory<VariableValue_t, int>::Base(); // 112
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Base(); // 368
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 16
		VariableValue_t::VariableValue_t(
				const VariableValue_t  &);  // 1520
		CopyConstruct<VariableValue_t>(VariableValue_t* pMemory,
						const VariableValue_t& src);  // 1201
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::AddToTail(
				const VariableValue_t& src);  // 1146
		CUtlString::~CUtlString(); // 16
		VariableValue_t::~VariableValue_t(); // 1148
	}
	{
		int alt94; // 1152
	}
	CUtlMemory<VariableValue_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VariableValue_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >::CUtlVector(); // 1121
} /* size: 499, variables: 2, goto labels: 1, inline expansions: 5 (77 bytes) */

// <002D9025> generated_antlr_code/hlslvariablesParser.c:1215
// variable: 1
void function_attribute_list(phlslvariablesParser ctx, CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* pValueArray)
{

loop95: // 1285

rulefunction_attribute_listEx: // 1302
	{
		int alt95; // 1245
	}
} /* size: 275, goto labels: 2 */

// <002D8FBA> generated_antlr_code/hlslvariablesParser.c:1320
void function_specifier(phlslvariablesParser ctx)
{

rulefunction_specifierEx: // 1345
} /* size: 88, goto labels: 1 */

// <002D8DD9> generated_antlr_code/hlslvariablesParser.c:1363
// variables: 3
hlslvariablesParser_function_scope_return function_scope(phlslvariablesParser ctx)
{

loop97: // 1732

rulefunction_scopeEx: // 1749
	hlslvariablesParser_function_scope_return retval; // 1365
	{
		int alt97; // 1388
		{
			int alt96; // 1533
		}
	}
} /* size: 777, variables: 1, goto labels: 2 */

// <002D8C3B> generated_antlr_code/hlslvariablesParser.c:1768
// variables: 2
void code_scope(phlslvariablesParser ctx)
{

loop99: // 2133

rulecode_scopeEx: // 2150
	{
		int alt99; // 1789
		{
			int alt98; // 1934
		}
	}
} /* size: 763, goto labels: 2 */

// <002D8A5A> generated_antlr_code/hlslvariablesParser.c:2168
// variables: 3
hlslvariablesParser_function_parameter_list_return function_parameter_list(phlslvariablesParser ctx)
{

loop101: // 2537

rulefunction_parameter_listEx: // 2554
	hlslvariablesParser_function_parameter_list_return retval; // 2170
	{
		int alt101; // 2193
		{
			int alt100; // 2338
		}
	}
} /* size: 777, variables: 1, goto labels: 2 */

// <0032A5DF> generated_antlr_code/hlslvariablesParser.c:2205
// variable: 1
void hlsl(phlslvariablesParser ctx)
{

loop1: // 2336

rulehlslEx: // 2353
	{
		int alt1; // 2220
	}
} /* size: 215, goto labels: 2 */

// <0032A2F5> generated_antlr_code/hlslvariablesParser.c:2371
// variables: 2
void element(phlslvariablesParser ctx)
{

ruleelementEx: // 2574
	pANTLR3_COMMON_TOKEN semicolon; // 2373
	{
		ANTLR3_UINT32 alt2; // 2385
	}
} /* size: 597, variables: 1, goto labels: 1 */

// <002D897C> generated_antlr_code/hlslvariablesParser.c:2573
void forward_declaration(phlslvariablesParser ctx)
{

ruleforward_declarationEx: // 2618
} /* size: 368, goto labels: 1 */

// <0032A1C9> generated_antlr_code/hlslvariablesParser.c:2592
// variables: 3
void bindless_constant_def(phlslvariablesParser ctx)
{

rulebindless_constant_defEx: // 2646
	pANTLR3_COMMON_TOKEN bindlessToken; // 2594
	pANTLR3_COMMON_TOKEN INTEGERLITERAL1; // 2595
	pANTLR3_COMMON_TOKEN ID2; // 2596
} /* size: 317, variables: 3, goto labels: 1 */

// <00329F23> generated_antlr_code/hlslvariablesParser.c:2664
// variables: 8
void auto_bindless_texture2d_binding(phlslvariablesParser ctx)
{

ruleauto_bindless_texture2d_bindingEx: // 2789
	pANTLR3_COMMON_TOKEN textureToken; // 2666
	pANTLR3_COMMON_TOKEN nameToken; // 2667
	pANTLR3_COMMON_TOKEN setToken; // 2668
	pANTLR3_COMMON_TOKEN INTEGERLITERAL3; // 2669
	hlslvariablesParser_annotations_return annotations4; // 2670
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 2679
	{
		int nDescriptorSetSlot; // 2732
	}
	{
		int alt3; // 2745
	}
} /* size: 781, variables: 6, goto labels: 1 */

// <002E218C> generated_antlr_code/hlslvariablesParser.c:2807
// variables: 3
void struct_decl(phlslvariablesParser ctx)
{

loop5: // 56447

rulestruct_declEx: // 56473
	pANTLR3_COMMON_TOKEN ID5; // 2809
	{
		int alt4; // 2836
	}
	{
		int alt5; // 2880
	}
} /* size: 665574, variables: 1, goto labels: 2 */

// <002E2037> generated_antlr_code/hlslvariablesParser.c:56491
// variable: 1
void enum_decl(phlslvariablesParser ctx)
{

ruleenum_declEx: // 56573
	{
		int alt6; // 56510
	}
} /* size: 334, goto labels: 1 */

// <002E1F65> generated_antlr_code/hlslvariablesParser.c:56591
// variable: 1
void enum_member_list(phlslvariablesParser ctx)
{

loop7: // 56655

ruleenum_member_listEx: // 56666
	{
		int alt7; // 56615
	}
} /* size: 231, goto labels: 2 */

// <002E1E8A> generated_antlr_code/hlslvariablesParser.c:56684
// variable: 1
void enum_member(phlslvariablesParser ctx)
{

ruleenum_memberEx: // 56745
	{
		int alt8; // 56703
	}
} /* size: 200, goto labels: 1 */

// <002E1AB0> generated_antlr_code/hlslvariablesParser.c:56763
// variables: 7
void class_member_definition(phlslvariablesParser ctx)
{

loop9: // 56812

ruleclass_member_definitionEx: // 57071
	{
		int alt9; // 56778
	}
	{
		int alt10; // 56817
	}
	{
		int alt11; // 56858
	}
	{
		int alt12; // 56906
	}
	{
		int alt13; // 56939
	}
	{
		int alt14; // 56972
	}
	{
		int alt15; // 57005
	}
} /* size: 1173, goto labels: 2 */

// <002E179D> generated_antlr_code/hlslvariablesParser.c:57089
// variables: 3
void class_declaration(phlslvariablesParser ctx)
{

loop17: // 57399

ruleclass_declarationEx: // 57422
	pANTLR3_COMMON_TOKEN closingBrace; // 57091
	{
		int alt16; // 57118
	}
	{
		int alt17; // 57163
	}
} /* size: 971, variables: 1, goto labels: 2 */

// <002E16A2> generated_antlr_code/hlslvariablesParser.c:57440
void type_def(phlslvariablesParser ctx)
{

ruletype_defEx: // 57486
} /* size: 284, goto labels: 1 */

// <002E0E10> generated_antlr_code/hlslvariablesParser.c:57504
// variables: 14
// function calls: 15
void function_definition(phlslvariablesParser ctx)
{

loop18: // 57571

rulefunction_definitionEx: // 57840
	pANTLR3_COMMON_TOKEN ID6; // 57506
	hlslvariablesParser_type_return type7; // 57507
	hlslvariablesParser_function_parameter_list_return function_parameter_list8; // 57511
	hlslvariablesParser_function_scope_return function_scope9; // 57515
	CUtlString functionName; // 57524
	{
		int alt18; // 57537
	}
	{
		int alt19; // 57576
	}
	{
		int alt20; // 57617
	}
	{
		int alt21; // 57659
	}
	{
		CBufferString outputTypeStr; // 57717
		CBufferString paramStr; // 57718
		CUtlString::operator=(
				const char* src);  // 57715
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 57719
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 57719
		CUtlString::Get(); // 57719
		CBufferString::~CBufferString(); // 57728
		CBufferString::~CBufferString(); // 57728
	}
	{
		int alt22; // 57732
	}
	{
		int alt23; // 57765
		{
			CUtlString bodyPrefix; // 57806
			CUtlString::Get(); // 57806
			CUtlString::IsEmpty(); // 57807
			CUtlString::~CUtlString(); // 57812
		}
	}
	CUtlString::CUtlString(); // 57524
	CUtlString::~CUtlString(); // 57858
} /* size: 1755, variables: 5, goto labels: 2, inline expansions: 2 (33 bytes) */

// <002E0D0C> generated_antlr_code/hlslvariablesParser.c:57866
// variables: 2
void namespace_name(phlslvariablesParser ctx)
{

loop25: // 57957

rulenamespace_nameEx: // 57968
	{
		int alt25; // 57887
		{
			int alt24; // 57912
		}
	}
} /* size: 248, goto labels: 2 */

// <002E0A36> generated_antlr_code/hlslvariablesParser.c:57986
// variables: 7
int constant_buffer_and_manual_register_allocation(phlslvariablesParser ctx)
{

ruleconstant_buffer_and_manual_register_allocationEx: // 58192
	int nExplicitBindSlot; // 57988
	pANTLR3_COMMON_TOKEN ID10; // 57990
	hlslvariablesParser_manual_register_allocation_return manual_register_allocation11; // 57991
	hlslvariablesParser_vulkan_binding_layout_qualifier_return vulkan_binding_layout_qualifier12; // 57995
	{
		int alt26; // 58015
	}
	{
		int alt27; // 58073
	}
	{
		int alt28; // 58144
	}
} /* size: 969, variables: 4, goto labels: 1 */

// <002E084E> generated_antlr_code/hlslvariablesParser.c:58210
// variables: 3
void constant_buffer(phlslvariablesParser ctx)
{

loop30: // 58389

ruleconstant_bufferEx: // 58417
	hlslvariablesParser_annotations_return annotations13; // 58212
	{
		int alt29; // 58236
	}
	{
		int alt30; // 58282
	}
} /* size: 570, variables: 1, goto labels: 2 */

// <002E02F7> generated_antlr_code/hlslvariablesParser.c:58435
// variables: 15
// function calls: 3
void struct_member_decl(phlslvariablesParser ctx)
{

loop31: // 58523

rulestruct_member_declEx: // 58747
	pANTLR3_COMMON_TOKEN name; // 58437
	const char* interpolation_modifier14; // 58438
	hlslvariablesParser_type_return type15; // 58442
	hlslvariablesParser_array_spec_return array_spec16; // 58446
	hlslvariablesParser_semantic_return semantic17; // 58450
	hlslvariablesParser_annotations_return annotations18; // 58454
	int nArraySize; // 58463
	const char* pSemantic; // 58464
	CUtlString sInterpolationModifiers; // 58465
	{
		int alt31; // 58479
	}
	{
		int alt32; // 58528
	}
	{
		int alt33; // 58561
	}
	{
		int alt34; // 58612
	}
	{
		int alt35; // 58648
	}
	{
		int alt36; // 58696
	}
	CUtlString::CUtlString(); // 58465
	CUtlString::Get(); // 58685
	CUtlString::~CUtlString(); // 58757
} /* size: 1248, variables: 9, goto labels: 2, inline expansions: 3 (61 bytes) */

// <002DF190> generated_antlr_code/hlslvariablesParser.c:58765
// variables: 54
// function calls: 12
hlslvariablesParser_variable_definition_return variable_definition(phlslvariablesParser ctx, bool bInCBuffer)
{

loop37: // 58891

rulevariable_definitionEx: // 59527
	hlslvariablesParser_variable_definition_return retval; // 58767
	pANTLR3_COMMON_TOKEN INTEGERLITERAL25; // 58769
	pANTLR3_COMMON_TOKEN ID27; // 58770
	hlslvariablesParser_vulkan_attribute_qualifier_return vulkan_attribute_qualifier19; // 58771
	hlslvariablesParser_storage_class_return storage_class20; // 58775
	hlslvariablesParser_array_spec_return array_spec21; // 58779
	hlslvariablesParser_semantic_return semantic22; // 58783
	hlslvariablesParser_manual_register_allocation_return manual_register_allocation23; // 58787
	hlslvariablesParser_vulkan_binding_layout_qualifier_return vulkan_binding_layout_qualifier24; // 58791
	hlslvariablesParser_type_return type26; // 58795
	hlslvariablesParser_annotations_return annotations28; // 58799
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 58808
	int nArraySize; // 58809
	int nExplicitDescriptorSetSlot; // 58810
	bool bIsStaticVariable; // 58811
	bool bIsGroupSharedVariable; // 58812
	bool bHasManualRegisterAssignment; // 58813
	int nManualRegisterStart; // 58814
	int nManualRegisterStop; // 58815
	bool bRelocateVariableDefinition; // 58816
	bool bInsertManualAllocation; // 58817
	bool bIsStringVariable; // 58818
	bool bIsSamplerStateVariable; // 58819
	bool bIsExternalDescriptorSetVariable; // 58820
	bool bIsRenderStateVariable; // 58821
	bool bIsDxcPushConstant; // 58822
	bool bHasPackOffset; // 58823
	VfxParsedShaderParamClass_t paramClass; // 58824
	int nRegisterAllocInsertPos; // 58825
	int nDelayedSkipAnnotationStart; // 58826
	int nDelayedSkipAnnotationStop; // 58827
	CUtlString variableName; // 58828
	VfxOverrideShaderVariable_t shaderOverride; // 58829
	int nTypeTokenStart; // 58830
	int nTypeTokenStop; // 58831
	int nDescriptorSetSlot; // 58832
	const char   __FUNCTION__; // 40832
	{
		int alt37; // 58847
		{
			const char* pVulkanAttributeQualifier; // 58874
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 58876
		}
	}
	{
		int alt38; // 58896
	}
	{
		int alt39; // 58932
	}
	{
		int alt40; // 58965
	}
	{
		int alt41; // 59012
	}
	{
		int alt42; // 59062
	}
	{
		int alt43; // 59101
	}
	{
		int alt44; // 59148
	}
	{
		int alt45; // 59194
	}
	{
		int alt46; // 59266
	}
	{
		int alt47; // 59309
	}
	{
		bool bResult; // 59360
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59418
		}
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 718
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 717
		CBufferString::CBufferString(
				const char* pString,
				int nChars,
				bool bExact,
				bool bGrowable);  // 59355
		CBufferString::~CBufferString(); // 59355
		CUtlString::operator=(
				const char* src);  // 59356
		CUtlString::Get(); // 59363
	}
	{
		int alt48; // 59426
		{
			bool bShouldSkipAnnotations; // 59459
		}
	}
	{
		int alt49; // 59476
	}
	CUtlString::CUtlString(); // 58828
	CUtlString::~CUtlString(); // 59598
	CUtlString::Get(); // 59557
	CUtlString::~CUtlString(); // 59558
} /* size: 0, variables: 37, goto labels: 2, inline expansions: 4 (76 bytes) */

// <002DF0AB> generated_antlr_code/hlslvariablesParser.c:59606
// variables: 2
hlslvariablesParser_semantic_return semantic(phlslvariablesParser ctx)
{

rulesemanticEx: // 59650
	hlslvariablesParser_semantic_return retval; // 59608
	pANTLR3_COMMON_TOKEN sem; // 59610
} /* size: 206, variables: 2, goto labels: 1 */

// <002DEF9C> generated_antlr_code/hlslvariablesParser.c:59669
void pack_offset(phlslvariablesParser ctx)
{

rulepack_offsetEx: // 59726
} /* size: 414, goto labels: 1 */

// <002DEF11> generated_antlr_code/hlslvariablesParser.c:59744
void inherited_class(phlslvariablesParser ctx)
{

ruleinherited_classEx: // 59775
} /* size: 128, goto labels: 1 */

// <002DED50> generated_antlr_code/hlslvariablesParser.c:59793
// variables: 3
// function call: 1
hlslvariablesParser_manual_register_allocation_return manual_register_allocation(phlslvariablesParser ctx)
{

rulemanual_register_allocationEx: // 59865
	hlslvariablesParser_manual_register_allocation_return retval; // 59795
	pANTLR3_COMMON_TOKEN reg; // 59797
	{
		const char* p; // 59845
		V_isdigit(char c); // 59846
	}
} /* size: 353, variables: 2, goto labels: 1 */

// <002DEA72> generated_antlr_code/hlslvariablesParser.c:59884
// variables: 6
void layout_qualifier_id(phlslvariablesParser ctx)
{

rulelayout_qualifier_idEx: // 60076
	pANTLR3_COMMON_TOKEN name; // 59886
	pANTLR3_COMMON_TOKEN val; // 59887
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 59894
	{
		ANTLR3_UINT32 alt50; // 59903
		{
			int nDescriptorSetSlot; // 60051
			char tmp; // 60057
		}
	}
} /* size: 1205, variables: 3, goto labels: 1 */

// <002DE919> generated_antlr_code/hlslvariablesParser.c:60094
// variables: 2
void binding_layout_qualifier(phlslvariablesParser ctx)
{

loop52: // 60197

rulebinding_layout_qualifierEx: // 60217
	{
		int alt51; // 60122
	}
	{
		int alt52; // 60157
	}
} /* size: 362, goto labels: 2 */

// <002DE75E> generated_antlr_code/hlslvariablesParser.c:60235
// variables: 4
hlslvariablesParser_vulkan_binding_layout_qualifier_return vulkan_binding_layout_qualifier(phlslvariablesParser ctx)
{

rulevulkan_binding_layout_qualifierEx: // 60380
	hlslvariablesParser_vulkan_binding_layout_qualifier_return retval; // 60237
	int dxc_vulkan_register_qualifier29; // 60239
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 60249
	{
		ANTLR3_UINT32 alt53; // 60258
	}
} /* size: 663, variables: 3, goto labels: 1 */

// <002DE4FB> generated_antlr_code/hlslvariablesParser.c:60399
// variables: 5
// function call: 1
int dxc_vulkan_register_qualifier(phlslvariablesParser ctx)
{

ruledxc_vulkan_register_qualifierEx: // 60491
	int nDescriptorSetSlot; // 60401
	pANTLR3_COMMON_TOKEN DXC_DESCRIPTOR_SPACE30; // 60403
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 60410
	{
		const char* pDescriptorSpace; // 60465
		{
			char tmp; // 60475
		}
		V_isalpha(char c); // 60466
	}
} /* size: 653, variables: 3, goto labels: 1 */

// <002DE344> generated_antlr_code/hlslvariablesParser.c:60509
// variables: 2
hlslvariablesParser_vulkan_attribute_qualifier_return vulkan_attribute_qualifier(phlslvariablesParser ctx)
{

loop54: // 60704

rulevulkan_attribute_qualifierEx: // 60727
	hlslvariablesParser_vulkan_attribute_qualifier_return retval; // 60511
	{
		int alt54; // 60540
	}
} /* size: 593, variables: 1, goto labels: 2 */

// <002DE17A> generated_antlr_code/hlslvariablesParser.c:60746
// variables: 4
hlslvariablesParser_annotations_return annotations(phlslvariablesParser ctx, bool bEmitAnnotations)
{

loop56: // 60911

loop55: // 60882

ruleannotationsEx: // 60922
	hlslvariablesParser_annotations_return retval; // 60748
	{
		int cnt56; // 60762
		{
			int alt56; // 60766
			{
				int alt55; // 60793
			}
		}
	}
} /* size: 443, variables: 1, goto labels: 3 */

// <002DDBB2> generated_antlr_code/hlslvariablesParser.c:60941
// variables: 7
// function calls: 15
void annotation_variable_definition(phlslvariablesParser ctx, bool bEmitAnnotations)
{

ruleannotation_variable_definitionEx: // 61063
	pANTLR3_COMMON_TOKEN ID32; // 60943
	hlslvariablesParser_array_spec_return array_spec31; // 60944
	hlslvariablesParser_type_return type33; // 60948
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* value34; // 60952
	int nArraySize; // 60961
	{
		int alt57; // 60988
	}
	{
		int i; // 1721
		CUtlMemory<VariableValue_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 16
		VariableValue_t::~VariableValue_t(); // 1526
		Destruct<VariableValue_t>(VariableValue_t* pMemory); // 1723
	}
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VariableValue_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VariableValue_t, int>::Purge(); // 903
	CUtlMemory<VariableValue_t, int>::Purge(); // 1799
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Purge(); // 560
	ValidateAlignment<VariableValue_t>(void); // 508
	CUtlMemory<VariableValue_t, int>::Purge(); // 510
	CUtlMemory<VariableValue_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >::~CUtlVector(); // 61051
} /* size: 829, variables: 5, goto labels: 1, inline expansions: 10 (499 bytes) */

// <002DDAC8> generated_antlr_code/hlslvariablesParser.c:61081
// variable: 1
void ignored_expression(phlslvariablesParser ctx)
{

ruleignored_expressionEx: // 61167
	{
		ANTLR3_UINT32 alt58; // 61091
	}
} /* size: 329, goto labels: 1 */

// <002DD9A6> generated_antlr_code/hlslvariablesParser.c:61185
// variable: 1
void expression(phlslvariablesParser ctx)
{

ruleexpressionEx: // 61267
	{
		int alt59; // 61207
	}
} /* size: 320, goto labels: 1 */

// <002DD7C2> generated_antlr_code/hlslvariablesParser.c:61285
// variable: 1
void atom(phlslvariablesParser ctx)
{

ruleatomEx: // 61455
	{
		ANTLR3_UINT32 alt60; // 61295
	}
} /* size: 641, goto labels: 1 */

// <002DD711> generated_antlr_code/hlslvariablesParser.c:61473
void binary_op(phlslvariablesParser ctx)
{

rulebinary_opEx: // 61506
} /* size: 339, goto labels: 1 */

// <002DD673> generated_antlr_code/hlslvariablesParser.c:61524
void unary_op(phlslvariablesParser ctx)
{

ruleunary_opEx: // 61557
} /* size: 315, goto labels: 1 */

// <002DD430> generated_antlr_code/hlslvariablesParser.c:61575
// variables: 2
// function calls: 5
CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* value(phlslvariablesParser ctx)
{

rulevalueEx: // 61663
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* pValueArray; // 61577
	{
		ANTLR3_UINT32 alt61; // 61590
	}
	CUtlMemory<VariableValue_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VariableValue_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >::CUtlVector(); // 61584
} /* size: 369, variables: 1, goto labels: 1, inline expansions: 5 (77 bytes) */

// <002DC771> generated_antlr_code/hlslvariablesParser.c:61681
// variables: 9
// function calls: 47
void single_value(phlslvariablesParser ctx, CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* pValueArray)
{

rulesingle_valueEx: // 61867
	pANTLR3_COMMON_TOKEN FLOATLITERAL36; // 61683
	pANTLR3_COMMON_TOKEN FLOATLITERAL37; // 61684
	pANTLR3_COMMON_TOKEN STRINGLITERAL38; // 61685
	hlslvariablesParser_intliteral_expression_return intliteral_expression35; // 61686
	{
		ANTLR3_UINT32 alt62; // 61702
		{
			VariableValue_t val; // 61781
			CUtlString::CUtlString(); // 28
			VariableValue_t::VariableValue_t(); // 61781
			CUtlMemory<VariableValue_t, int>::NumAllocated(); // 1196
			CUtlMemory<VariableValue_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Element(
				int i);  // 1201
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 16
			VariableValue_t::VariableValue_t(
					const VariableValue_t  &);  // 1520
			CopyConstruct<VariableValue_t>(VariableValue_t* pMemory,
							const VariableValue_t& src);  // 1201
			CUtlMemory<VariableValue_t, int>::Base(); // 112
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Base(); // 368
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::AddToTail(
					const VariableValue_t& src);  // 61784
			CUtlString::~CUtlString(); // 16
			VariableValue_t::~VariableValue_t(); // 61786
		}
		{
			VariableValue_t val; // 61801
			CUtlString::CUtlString(); // 28
			VariableValue_t::VariableValue_t(); // 61801
			CUtlMemory<VariableValue_t, int>::NumAllocated(); // 1196
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::AddToTail(
					const VariableValue_t& src);  // 61804
		}
		{
			VariableValue_t val; // 61827
			CUtlString::CUtlString(); // 28
			VariableValue_t::VariableValue_t(); // 61827
			CUtlMemory<VariableValue_t, int>::NumAllocated(); // 1196
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::AddToTail(
					const VariableValue_t& src);  // 61830
		}
		{
			VariableValue_t val; // 61847
			CUtlMemory<VariableValue_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Element(
				int i);  // 1201
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 16
			VariableValue_t::VariableValue_t(
					const VariableValue_t  &);  // 1520
			CopyConstruct<VariableValue_t>(VariableValue_t* pMemory,
							const VariableValue_t& src);  // 1201
			CUtlMemory<VariableValue_t, int>::NumAllocated(); // 1196
			CUtlMemory<VariableValue_t, int>::Base(); // 112
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Base(); // 368
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::AddToTail(
					const VariableValue_t& src);  // 61852
			CUtlString::~CUtlString(); // 16
			VariableValue_t::~VariableValue_t(); // 61854
			CUtlString::CUtlString(); // 28
			VariableValue_t::VariableValue_t(); // 61847
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 61851
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 61851
			CUtlString::~CUtlString(); // 61851
		}
	}
} /* size: 1345, variables: 4, goto labels: 1 */

// <002DC6E6> generated_antlr_code/hlslvariablesParser.c:61885
void number_literal(phlslvariablesParser ctx)
{

rulenumber_literalEx: // 61918
} /* size: 283, goto labels: 1 */

// <002DC5C1> generated_antlr_code/hlslvariablesParser.c:61936
// variable: 1
void value_array(phlslvariablesParser ctx, CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >* pValueArray)
{

loop63: // 62006

rulevalue_arrayEx: // 62023
	{
		int alt63; // 61966
	}
} /* size: 275, goto labels: 2 */

// <002DC4E5> generated_antlr_code/hlslvariablesParser.c:62041
// variables: 2
hlslvariablesParser_intliteral_expression_return intliteral_expression(phlslvariablesParser ctx)
{

ruleintliteral_expressionEx: // 62083
	hlslvariablesParser_intliteral_expression_return retval; // 62043
	int intliteral_ternary_expression39; // 62045
} /* size: 197, variables: 2, goto labels: 1 */

// <002DC326> generated_antlr_code/hlslvariablesParser.c:62102
// variables: 5
int intliteral_ternary_expression(phlslvariablesParser ctx)
{

ruleintliteral_ternary_expressionEx: // 62219
	int nIntValue; // 62104
	int a; // 62106
	int b; // 62110
	int c; // 62114
	{
		int alt64; // 62147
	}
} /* size: 426, variables: 4, goto labels: 1 */

// <002DC018> generated_antlr_code/hlslvariablesParser.c:62237
// variables: 4
int intliteral_compare_expression(phlslvariablesParser ctx)
{

ruleintliteral_compare_expressionEx: // 62518
	int nIntValue; // 62239
	int a; // 62241
	int b; // 62245
	{
		int alt65; // 62277
	}
} /* size: 981, variables: 3, goto labels: 1 */

// <002DBE51> generated_antlr_code/hlslvariablesParser.c:62536
// variables: 4
int intliteral_add_expression(phlslvariablesParser ctx)
{

loop66: // 62666

ruleintliteral_add_expressionEx: // 62677
	int nIntValue; // 62538
	int a; // 62540
	int b; // 62544
	{
		int alt66; // 62578
	}
} /* size: 452, variables: 3, goto labels: 2 */

// <002DBBE2> generated_antlr_code/hlslvariablesParser.c:62695
// variables: 4
int intliteral_multiply_expression(phlslvariablesParser ctx)
{

loop67: // 62899

ruleintliteral_multiply_expressionEx: // 62910
	int nIntValue; // 62697
	int a; // 62699
	int b; // 62703
	{
		int alt67; // 62737
	}
} /* size: 724, variables: 3, goto labels: 2 */

// <002DBA8E> generated_antlr_code/hlslvariablesParser.c:62928
// variables: 4
int intliteral_unary_expression(phlslvariablesParser ctx)
{

ruleintliteral_unary_expressionEx: // 63037
	int nIntValue; // 62930
	int intliteral_primary_expression40; // 62932
	int intliteral_primary_expression41; // 62936
	{
		ANTLR3_UINT32 alt68; // 62951
	}
} /* size: 421, variables: 3, goto labels: 1 */

// <002DB8E4> generated_antlr_code/hlslvariablesParser.c:63055
// variables: 4
int intliteral_primary_expression(phlslvariablesParser ctx)
{

ruleintliteral_primary_expressionEx: // 63162
	int nIntValue; // 63057
	pANTLR3_COMMON_TOKEN INTEGERLITERAL42; // 63059
	hlslvariablesParser_intliteral_expression_return intliteral_expression43; // 63060
	{
		ANTLR3_UINT32 alt69; // 63074
	}
} /* size: 507, variables: 3, goto labels: 1 */

// <002DB6E9> generated_antlr_code/hlslvariablesParser.c:63180
// variables: 5
hlslvariablesParser_array_spec_return array_spec(phlslvariablesParser ctx)
{

rulearray_specEx: // 63298
	hlslvariablesParser_array_spec_return retval; // 63182
	hlslvariablesParser_intliteral_expression_return SIZE1; // 63184
	pANTLR3_COMMON_TOKEN tokenForErrorReporting; // 63195
	{
		int alt70; // 63212
	}
	{
		int alt71; // 63259
	}
} /* size: 489, variables: 3, goto labels: 1 */

// <002DB338> generated_antlr_code/hlslvariablesParser.c:63317
// variables: 8
hlslvariablesParser_type_return type(phlslvariablesParser ctx)
{

ruletypeEx: // 63689
	hlslvariablesParser_type_return retval; // 63319
	int scalar_type44; // 63321
	hlslvariablesParser_vector_type_return vector_type45; // 63325
	hlslvariablesParser_matrix_type_return matrix_type46; // 63329
	int sampler_type47; // 63333
	int texture_type_dx1148; // 63337
	{
		ANTLR3_UINT32 alt73; // 63354
		{
			int alt72; // 63557
		}
	}
} /* size: 1305, variables: 6, goto labels: 1 */

// <002DB1FD> generated_antlr_code/hlslvariablesParser.c:63708
// variables: 2
int scalar_type(phlslvariablesParser ctx)
{

rulescalar_typeEx: // 63889
	int paramType; // 63710
	{
		ANTLR3_UINT32 alt74; // 63720
	}
} /* size: 528, variables: 1, goto labels: 1 */

// <002DAF35> generated_antlr_code/hlslvariablesParser.c:63907
// variables: 6
// function call: 1
hlslvariablesParser_vector_type_return vector_type(phlslvariablesParser ctx)
{

rulevector_typeEx: // 64039
	hlslvariablesParser_vector_type_return retval; // 63909
	pANTLR3_COMMON_TOKEN VECTOR_TYPE49; // 63911
	pANTLR3_COMMON_TOKEN INTEGERLITERAL51; // 63912
	int scalar_type50; // 63913
	{
		ANTLR3_UINT32 alt75; // 63930
		{
			int nLen; // 63972
			V_strlen(const char* str); // 63972
		}
	}
} /* size: 713, variables: 4, goto labels: 1 */

// <002DABF1> generated_antlr_code/hlslvariablesParser.c:64058
// variables: 7
// function call: 1
hlslvariablesParser_matrix_type_return matrix_type(phlslvariablesParser ctx)
{

rulematrix_typeEx: // 64206
	hlslvariablesParser_matrix_type_return retval; // 64060
	pANTLR3_COMMON_TOKEN digit1; // 64062
	pANTLR3_COMMON_TOKEN digit2; // 64063
	pANTLR3_COMMON_TOKEN MATRIX_TYPE52; // 64064
	int scalar_type53; // 64065
	{
		ANTLR3_UINT32 alt76; // 64083
		{
			int nLen; // 64125
			V_strlen(const char* str); // 64125
		}
	}
} /* size: 848, variables: 5, goto labels: 1 */

// <002DAAD7> generated_antlr_code/hlslvariablesParser.c:64225
// variables: 2
int sampler_type(phlslvariablesParser ctx)
{

rulesampler_typeEx: // 64526
	int paramType; // 64227
	{
		ANTLR3_UINT32 alt77; // 64237
	}
} /* size: 772, variables: 1, goto labels: 1 */

// <002DA438> generated_antlr_code/hlslvariablesParser.c:64544
// variables: 16
int texture_type_dx11(phlslvariablesParser ctx)
{

ruletexture_type_dx11Ex: // 65276
	int paramType; // 64546
	pANTLR3_COMMON_TOKEN structname; // 64548
	int tex1; // 64549
	int tex2; // 64553
	int tex3; // 64557
	int tex4; // 64561
	{
		ANTLR3_UINT32 alt87; // 64579
		{
			int alt79; // 64660
			{
				int alt78; // 64684
			}
		}
		{
			int alt82; // 64809
			{
				int alt80; // 64833
			}
			{
				int alt81; // 64903
			}
		}
		{
			int alt84; // 65004
			{
				int alt83; // 65028
			}
		}
		{
			int alt86; // 65153
			{
				int alt85; // 65177
			}
		}
	}
} /* size: 2341, variables: 6, goto labels: 1 */

// <002DA150> generated_antlr_code/hlslvariablesParser.c:65294
// variables: 2
int texture_type_dx11_1(phlslvariablesParser ctx)
{

ruletexture_type_dx11_1Ex: // 159
	int paramType; // 65296
	{
		ANTLR3_UINT32 alt88; // 65306
	}
} /* size: 1113, variables: 1, goto labels: 1 */

