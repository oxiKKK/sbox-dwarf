
//
// vfx/vfx_vulkan/vfx_spirv_reflect.cpp
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 14
//

// <0017A02C> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:14
VfxRegisterType_t SpvReflectionTypeToRegisterType(const SpvReflectTypeDescription& typeDescription)
{
} /* size: 0 */

// <00179FFD> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:39
void CVfxSpirVReflect::CVfxSpirVReflect()
{
} /* size: 20 */

// <00179F50> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:45
// function call: 1
void CVfxSpirVReflect::~CVfxSpirVReflect()
{
	ShaderModule::~ShaderModule(); // 49
} /* size: 70, inline expansions: 1 (9 bytes) */

// <00179E74> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:45
// function calls: 2
void CVfxSpirVReflect::~CVfxSpirVReflect()
{
	ShaderModule::~ShaderModule(); // 49
	CVfxSpirVReflect::~CVfxSpirVReflect(); // 51
} /* size: 73, inline expansions: 2 (52 bytes) */

// <00179E5B> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:45
void CVfxSpirVReflect::~CVfxSpirVReflect()
{
} /* size: 0 */

// <00179CAC> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:54
// variables: 2
// function calls: 2
void CVfxSpirVReflect::SetSpirVCode(uint32 nNumBytes, const uint8* pSpirVCode)
{
	const char   __FUNCTION__; // 47136
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 63
	}
	ShaderModule::~ShaderModule(); // 58
	ShaderModule::ShaderModule(
			size_t size,
			const void* p_code,
			SpvReflectModuleFlags flags);  // 61
} /* size: 0, variables: 1, inline expansions: 2 (47 bytes) */

// <00179139> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:67
// variables: 16
// function calls: 39
void CVfxSpirVReflect::GetActiveUniforms(CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >& activeUniforms)
{
	uint32_t nNumDescriptorSets; // 74
	SpvReflectDescriptorSet** ppSets; // 81
	const char   __FUNCTION__; // 47256
	{
		uint32_t nDescriptorSet; // 83
		{
			const SpvReflectDescriptorSet* pDescriptorSet; // 85
			uint32_t nBindingCount; // 86
			{
				uint32_t nBinding; // 87
				{
					const SpvReflectDescriptorBinding* pBinding; // 89
					{
						uint32_t nUBOMember; // 102
						{
							VfxUniformInfo_t uniformInfo; // 104
							const SpvReflectBlockVariable* pBlockMember; // 105
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
							}
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 131
							}
							CUtlMemory<VfxUniformInfo_t, int>::Base(); // 112
							CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Base(); // 368
							CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::GrowMemory(
									int num);  // 1198
							CUtlMemory<VfxUniformInfo_t, int>::NumAllocated(); // 1196
							CUtlMemory<VfxUniformInfo_t, int>::operator[](
									int i);  // 602
							CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Element(
								int i);  // 1201
							CUtlString::Get(); // 354
							CUtlString::CUtlString(
									const CUtlString& string);  // 17
							VfxUniformInfo_t::VfxUniformInfo_t(
									const VfxUniformInfo_t  &);  // 1520
							CopyConstruct<VfxUniformInfo_t>(VfxUniformInfo_t* pMemory,
											const VfxUniformInfo_t& src);  // 1201
							CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::AddToTail(
									const VfxUniformInfo_t& src);  // 136
							SpvReflectionTypeToRegisterType(const SpvReflectTypeDescription& typeDescription); // 111
							CUtlString::~CUtlString(); // 17
							VfxUniformInfo_t::~VfxUniformInfo_t(); // 137
							CUtlString::operator=(
									const char* src);  // 107
							CUtlString::CUtlString(); // 104
							CUtlString::~CUtlString(); // 17
							VfxUniformInfo_t::~VfxUniformInfo_t(); // 137
						}
					}
					{
						VfxUniformInfo_t uniformInfo; // 148
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 158
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 188
						}
						CUtlString::operator=(
								const char* src);  // 149
						CUtlString::CUtlString(); // 148
						CUtlMemory<VfxUniformInfo_t, int>::NumAllocated(); // 1196
						CUtlMemory<VfxUniformInfo_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Element(
							int i);  // 1201
						CUtlString::Get(); // 354
						CUtlString::CUtlString(
								const CUtlString& string);  // 17
						VfxUniformInfo_t::VfxUniformInfo_t(
								const VfxUniformInfo_t  &);  // 1520
						CopyConstruct<VfxUniformInfo_t>(VfxUniformInfo_t* pMemory,
										const VfxUniformInfo_t& src);  // 1201
						CUtlMemory<VfxUniformInfo_t, int>::Base(); // 112
						CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Base(); // 368
						CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::AddToTail(
								const VfxUniformInfo_t& src);  // 194
						CUtlString::~CUtlString(); // 17
						VfxUniformInfo_t::~VfxUniformInfo_t(); // 195
					}
					strstr(const char* __haystack,
						const char* __needle);  // 247
					V_strstr(const char* s1,
						const char* search);  // 91
				}
			}
		}
	}
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 75
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 82
} /* size: 0, variables: 3, inline expansions: 2 (44 bytes) */

// <00174ED6> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:209
// variables: 61
// function calls: 147
void CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >& activeUniformBlocks)
{
	CUtlVector<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t, CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t, int> > hiddenUAVCounterMappings; // 224
	CUtlVector<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t, CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t, int> > hiddenUAVCounterMappingsDXC; // 232
	uint32_t nNumDescriptorSets; // 236
	SpvReflectDescriptorSet** ppSets; // 238
	const char   __FUNCTION__; // 47371
	const SpvReflectShaderModule& shaderModule; // 347
	{
		uint32_t nDescriptorSet; // 240
		{
			const SpvReflectDescriptorSet* pDescriptorSet; // 242
			uint32_t nBindingCount; // 243
			{
				uint32_t nBinding; // 244
				{
					const SpvReflectDescriptorBinding* pBinding; // 246
					CUtlString strBlockName; // 248
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
					}
					{
						VfxUniformBlockInfo_t uniformBlockInfo; // 267
						{
							SpvReflectDescriptorBinding* pUAVCounterBinding; // 281
							HiddenUAVCounterMapping_t hiddenUAVCounterMapping; // 284
							CUtlString::CUtlString(); // 216
							HiddenUAVCounterMapping_t::HiddenUAVCounterMapping_t(); // 284
							CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 285
							CUtlString::operator=(
									const char* src);  // 286
							operator[](const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this,
									int i); // 602
							Element(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
								int i); // 1201
							CUtlString::Get(); // 354
							CUtlString::CUtlString(
									const CUtlString& string);  // 216
							HiddenUAVCounterMapping_t::HiddenUAVCounterMapping_t(
											const HiddenUAVCounterMapping_t  &);  // 1520
							CopyConstruct<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t>(HiddenUAVCounterMapping_t* pMemory,
																const HiddenUAVCounterMapping_t& src); // 1201
							Grow(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this,
								int num); // 806
							GrowMemory(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
									int num); // 1198
							AddToTail(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
									const HiddenUAVCounterMapping_t& src); // 287
							CUtlString::~CUtlString(); // 216
							HiddenUAVCounterMapping_t::~HiddenUAVCounterMapping_t(); // 288
						}
						{
							HiddenUAVCounterMappingDXC_t hiddenUAVCounterMappingDXC; // 295
							CUtlString::CUtlString(); // 227
							HiddenUAVCounterMappingDXC_t::HiddenUAVCounterMappingDXC_t(); // 295
							CUtlString::operator=(
									const char* src);  // 296
							CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 297
							operator[](const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this,
									int i); // 602
							Element(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
								int i); // 1201
							CUtlString::Get(); // 354
							CUtlString::CUtlString(
									const CUtlString& string);  // 227
							HiddenUAVCounterMappingDXC_t::HiddenUAVCounterMappingDXC_t(
											const HiddenUAVCounterMappingDXC_t  &);  // 1520
							CopyConstruct<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t>(HiddenUAVCounterMappingDXC_t* pMemory,
																const HiddenUAVCounterMappingDXC_t& src); // 1201
							Grow(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this,
								int num); // 806
							GrowMemory(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
									int num); // 1198
							AddToTail(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
									const HiddenUAVCounterMappingDXC_t& src); // 298
							CUtlString::~CUtlString(); // 227
							HiddenUAVCounterMappingDXC_t::~HiddenUAVCounterMappingDXC_t(); // 299
						}
						V_strlen(const char* str); // 393
						CUtlString::Length(); // 161
						CUtlString::Get(); // 161
						CUtlString::operator=(
								const CUtlString& src);  // 269
						strstr(const char* __haystack,
							const char* __needle);  // 247
						V_strstr(const char* s1,
							const char* search);  // 293
						CUtlString::CUtlString(); // 267
						CUtlMemory<VfxUniformBlockInfo_t, int>::NumAllocated(); // 1196
						CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Element(
							int i);  // 1201
						CUtlString::Get(); // 354
						CUtlString::CUtlString(
								const CUtlString& string);  // 42
						VfxUniformBlockInfo_t::VfxUniformBlockInfo_t(
									const VfxUniformBlockInfo_t  &);  // 1520
						CopyConstruct<VfxUniformBlockInfo_t>(VfxUniformBlockInfo_t* pMemory,
											const VfxUniformBlockInfo_t& src);  // 1201
						CUtlMemory<VfxUniformBlockInfo_t, int>::Base(); // 112
						CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Base(); // 368
						CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::AddToTail(
								const VfxUniformBlockInfo_t& src);  // 302
						CUtlString::~CUtlString(); // 42
						VfxUniformBlockInfo_t::~VfxUniformBlockInfo_t(); // 303
					}
					CUtlString::~CUtlString(); // 309
					CUtlString::CUtlString(); // 248
					V_isempty(const char* pszString); // 250
					V_isempty(const char* pszString); // 258
					CUtlString::operator=(
							const char* src);  // 259
				}
			}
		}
	}
	{
		const HiddenUAVCounterMapping_t& hiddenUAVCounterMapping; // 313
		CUtlVector<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t, CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t, int> >& __for_range; // 19471
		iterator __for_begin; // 50312
		iterator __for_end; // 50312
		{
			int32 nBlockIndexOfCounter; // 315
			{
				const VfxUniformBlockInfo_t& uniformBlockInfo; // 316
				CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >& __for_range; // 4963
				iterator __for_begin; // 61020
				iterator __for_end; // 61020
				CUtlMemory<VfxUniformBlockInfo_t, int>::Base(); // 112
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Base(); // 102
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::begin(); // 316
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 104
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::end(); // 316
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 325
			}
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 325
			CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
					int i);  // 326
		}
		end(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 313
	}
	{
		const HiddenUAVCounterMappingDXC_t& hiddenUAVCounterMappingDXC; // 330
		CUtlVector<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t, CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t, int> >& __for_range; // 19477
		iterator __for_begin; // 55522
		iterator __for_end; // 55522
		{
			int32 nBlockIndexOfUAV; // 332
			{
				const VfxUniformBlockInfo_t& uniformBlockInfo; // 333
				CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >& __for_range; // 4963
				iterator __for_begin; // 61020
				iterator __for_end; // 61020
				CUtlMemory<VfxUniformBlockInfo_t, int>::Base(); // 112
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Base(); // 102
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::begin(); // 333
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 104
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::end(); // 333
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 342
			}
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 342
			CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
					int i);  // 343
		}
		end(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 330
	}
	{
		uint32 nPushConstant; // 348
		{
			const SpvReflectBlockVariable* pPushConstantBlock; // 350
			VfxUniformBlockInfo_t uniformBlockInfo; // 351
			CUtlString pushConstantName; // 355
			const char* pTypePushConstant; // 356
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 357
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 359
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 359
			CUtlString::~CUtlString(); // 359
			CUtlMemory<VfxUniformBlockInfo_t, int>::NumAllocated(); // 1196
			CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Element(
				int i);  // 1201
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 42
			VfxUniformBlockInfo_t::VfxUniformBlockInfo_t(
						const VfxUniformBlockInfo_t  &);  // 1520
			CopyConstruct<VfxUniformBlockInfo_t>(VfxUniformBlockInfo_t* pMemory,
								const VfxUniformBlockInfo_t& src);  // 1201
			CUtlMemory<VfxUniformBlockInfo_t, int>::Base(); // 112
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Base(); // 368
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::AddToTail(
					const VfxUniformBlockInfo_t& src);  // 372
			CUtlString::~CUtlString(); // 373
			CUtlString::~CUtlString(); // 42
			VfxUniformBlockInfo_t::~VfxUniformBlockInfo_t(); // 373
			CUtlString::CUtlString(
					const char* pString);  // 355
			CUtlString::CUtlString(); // 351
			CUtlString::Get(); // 357
			CUtlString::Length(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 363
		}
	}
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 237
	ValidateGrowSize(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 475
	CUtlMemory(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this,
			int nGrowSize,
			int nInitAllocationCount); // 527
	ResetDbgInfo(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 530
	CUtlVectorBase(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
			int growSize,
			int initCapacity); // 418
	CUtlVector(const CUtlVector<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 224
	ValidateGrowSize(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 475
	CUtlMemory(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this,
			int nGrowSize,
			int nInitAllocationCount); // 527
	ResetDbgInfo(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 530
	CUtlVectorBase(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
			int growSize,
			int initCapacity); // 418
	CUtlVector(const CUtlVector<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 232
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 239
	{
		int i; // 1721
		operator[](const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this,
				int i); // 602
		Element(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
			int i); // 1723
		CUtlString::~CUtlString(); // 227
		HiddenUAVCounterMappingDXC_t::~HiddenUAVCounterMappingDXC_t(); // 1526
		Destruct<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t>(HiddenUAVCounterMappingDXC_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 1798
	Purge(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 903
	Purge(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 1799
	Purge(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 560
	ValidateAlignment<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t>(void); // 508
	Purge(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 510
	~CUtlMemory(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 410
	~CUtlVector(const CUtlVector<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 377
	{
		int i; // 1721
		operator[](const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this,
				int i); // 602
		Element(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this,
			int i); // 1723
		CUtlString::~CUtlString(); // 216
		HiddenUAVCounterMapping_t::~HiddenUAVCounterMapping_t(); // 1526
		Destruct<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t>(HiddenUAVCounterMapping_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 1798
	Purge(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 903
	Purge(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 1799
	Purge(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 560
	ValidateAlignment<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t>(void); // 508
	Purge(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 510
	~CUtlMemory(const CUtlMemory<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounter this); // 410
	~CUtlVector(const CUtlVector<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapp this); // 377
} /* size: 0, variables: 6, inline expansions: 30 (1164 bytes) */

// <00179027> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:380
// variables: 2
void CVfxSpirVReflect::GetThreadGroupSize(uint32* pThreadGroupSizeOut)
{
	const SpvReflectShaderModule& shaderModule; // 387
	{
		const SpvReflectEntryPoint* pEntryPoint; // 390
	}
} /* size: 75, variables: 1 */

// <00179006> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:400
int FormatComponentCount(SpvReflectFormat format)
{
} /* size: 0 */

// <00178F05> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:425
// variables: 4
// function call: 1
void CVfxSpirVReflect::GetOutputVertices(uint32* pOutputVertices, uint32* pOutputTotalComponents)
{
	const SpvReflectShaderModule& shaderModule; // 432
	{
		const SpvReflectEntryPoint* pEntryPoint; // 435
		uint32_t outputComponents; // 437
		{
			uint i; // 438
			FormatComponentCount(SpvReflectFormat format); // 440
		}
	}
} /* size: 146, variables: 1 */

// <00178A41> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:453
// variables: 3
// function calls: 18
void CVfxSpirVReflect::GetEntryPoints(CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& entryPoints)
{
	uint32 nEntryPointCount; // 458
	{
		uint32 i; // 459
		{
			const char* pEntryPointName; // 461
			CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlStringToken, int>::Base(); // 112
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CUtlStringToken, int>::IsGrowable(); // 823
			CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CUtlStringToken, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
				int i);  // 1252
			Construct<CUtlStringToken, CUtlStringToken>(CUtlStringToken* pMemory); // 1252
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddToTail(
					CUtlStringToken& src);  // 462
			ShaderModule::GetEntryPointName(
						uint32_t index);  // 461
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 462
		}
	}
	ShaderModule::GetEntryPointCount(); // 458
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0017835D> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:473
// variables: 11
// function calls: 18
void CVfxSpirVReflect::ShiftBindingsMatchingName(uint32 nDescriptorSet, const CUtlString& strSearch, uint32 nShift, CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& spirvOut)
{
	uint32_t nNumDescriptorSets; // 478
	SpvReflectDescriptorSet** ppSets; // 480
	{
		uint32_t nReflectSet; // 482
		{
			const SpvReflectDescriptorSet* pDescriptorSet; // 484
			uint32_t nBindingCount; // 492
			uint32 nBinding; // 493
			bool bNeedsShift; // 494
			{
				const SpvReflectDescriptorBinding* pBinding; // 497
				CUtlString::Get(); // 99
				CUtlString::String(); // 499
				strstr(const char* __haystack,
					const char* __needle);  // 247
				V_strstr(const char* s1,
					const char* search);  // 499
			}
			{
				uint32 nNewBinding; // 509
				{
					const SpvReflectDescriptorBinding* pBinding; // 514
				}
				{
					const SpvReflectDescriptorBinding* pBinding; // 526
					CUtlString::Get(); // 99
					CUtlString::String(); // 528
					strstr(const char* __haystack,
						const char* __needle);  // 247
					V_strstr(const char* s1,
						const char* search);  // 528
					ShaderModule::ChangeDescriptorBindingNumbers(
									const SpvReflectDescriptorBinding* p_binding,
									uint32_t new_binding_number,
									uint32_t new_set_number);  // 530
				}
			}
		}
	}
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 479
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 481
	ShaderModule::GetCodeSize(); // 540
	ShaderModule::GetCodeSize(); // 541
	ShaderModule::GetCode(); // 541
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 541
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 541
} /* size: 621, variables: 2, inline expansions: 9 (123 bytes) */

// <00177DBF> vfx/vfx_vulkan/vfx_spirv_reflect.cpp:545
// variables: 11
// function calls: 15
void CVfxSpirVReflect::ChangeBindingNumbers(const CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >& bindingChanges, CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& spirvOut)
{
	uint32_t nNumDescriptorSets; // 550
	SpvReflectDescriptorSet** ppSets; // 552
	{
		uint32_t nReflectSet; // 554
		{
			const SpvReflectDescriptorSet* pDescriptorSet; // 556
			uint32_t nBindingCount; // 558
			{
				uint32 nBinding; // 559
				{
					const SpvReflectDescriptorBinding* pBinding; // 561
					{
						const BindingNumberChange_t& bindingChange; // 565
						const CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >& __for_range; // 4764
						const_iterator __for_begin; // 1354
						const_iterator __for_end; // 1354
						CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int>::Base(); // 113
						Base(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, i this); // 103
						begin(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, i this); // 565
						Count(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, i this); // 105
						end(const CUtlVectorBase<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, i this); // 565
						ShaderModule::ChangeDescriptorBindingNumbers(
										const SpvReflectDescriptorBinding* p_binding,
										uint32_t new_binding_number,
										uint32_t new_set_number);  // 570
					}
				}
			}
		}
	}
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 551
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 553
	ShaderModule::GetCodeSize(); // 581
	ShaderModule::GetCodeSize(); // 582
	ShaderModule::GetCode(); // 582
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 582
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 582
} /* size: 534, variables: 2, inline expansions: 9 (120 bytes) */

