
//
// vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 21
//	struct: 1
//

// <000D5ABD> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:30
// variable: 1
// function calls: 17
void CVfxVulkan::BuildComboMacros(CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >& macros, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& macroValueStrings, int startIndex, const VfxComboValueVector_t& comboValueArray, const CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >& combos)
{
	{
		int i; // 32
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 32
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 35
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 36
		CUtlString::Get(); // 99
		CUtlString::String(); // 36
		CUtlMemory<VfxShaderMacro_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
				int i);  // 36
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 34
		CUtlMemory<VfxShaderMacro_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
				int i);  // 34
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 35
	}
} /* size: 241 */

// <000D8B11> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:41
// variable: 1
void CVfxVulkan::CalcNumGlobalMacros(VfxCompileTarget_t compileTarget)
{
	int numGlobalMacros; // 44
} /* size: 0, variables: 1 */

// <000D4F08> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:62
// variables: 3
// function calls: 43
void CVfxVulkan::CreateGlobalMacrosAndNULLTerminate(CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >& macros, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& macroValueStrings, int startIndex, VfxCompileTarget_t compileTarget, VfxProgram_t programType)
{
	int macroIndex; // 64
	const char   __FUNCTION__; // 15561
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 101
	}
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 67
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 68
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 69
	CUtlString::Get(); // 99
	CUtlString::String(); // 69
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 69
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 73
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 74
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 75
	CUtlString::Get(); // 99
	CUtlString::String(); // 75
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 75
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 80
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 81
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 85
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 86
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 90
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 91
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 96
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 97
	CVfxVulkan::CalcNumGlobalMacros(
				VfxCompileTarget_t compileTarget);  // 101
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::Count(); // 108
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 108
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::Count(); // 109
	CUtlMemory<VfxShaderMacro_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::operator[](
			int i);  // 109
} /* size: 0, variables: 2, inline expansions: 43 (193 bytes) */

// <000D40AC> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:113
// variables: 10
// function calls: 52
void CVfxVulkan::CreateMacros(CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >& macros, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& macroValueStrings, const CVfxProgramData* pProgramData, uint64 nStaticIndex, uint64 nDynamicIndex, VfxCompileTarget_t compileTarget, VfxProgram_t programType)
{
	int numGlobalMacros; // 115
	int numStaticMacros; // 116
	int numDynamicMacros; // 117
	VfxComboValueVector_t dynamicComboValueArray; // 124
	VfxComboValueVector_t staticComboValueArray; // 130
	CVfxVulkan::CalcNumGlobalMacros(
				VfxCompileTarget_t compileTarget);  // 115
	CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 116
	CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 117
	CUtlMemory<VfxShaderMacro_t, int>::NumAllocated(); // 782
	CUtlMemory<VfxShaderMacro_t, int>::IsGrowable(); // 823
	CUtlMemory<VfxShaderMacro_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<VfxShaderMacro_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<VfxShaderMacro_t, int>::Grow(
		int num);  // 806
	CUtlMemory<VfxShaderMacro_t, int>::Base(); // 112
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::Base(); // 368
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::SetCount(
		int count);  // 120
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowable(); // 124
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 125
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowable(); // 130
	{
		int* _pCrash; // 109
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 109
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 131
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowable(); // 137
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowable(); // 137
} /* size: 1311, variables: 5, inline expansions: 42 (3183 bytes) */

// <000D406C> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:171
// variables: 2
void MarkAllExternalDescriptorSetsUsed(CVfxParsedShaderParamMap& paramMap)
{
	bool s_bDumpExternalDescSets; // 173
	{
		short unsigned int nIdx; // 174
	}
} /* size: 0, variables: 1 */

// <000D7068> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:213
// function calls: 3
int SamplerNameSortFunction(const CUtlString* pLeft, const CUtlString* pRight)
{
	CUtlString::Get(); // 215
	CUtlString::Get(); // 215
	V_strcmp(const char* s1,
		const char* s2);  // 215
} /* size: 0, inline expansions: 3 (0 bytes) */

// <000D4041> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:213
int SamplerNameSortFunction(const CUtlString* pLeft, const CUtlString* pRight)
{
} /* size: 0 */

// <000D3F7C> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:222
// variables: 11
void BindlessComputeGlobalsSize(CVfxParsedConstantBufferVector& constantBuffers, CVfxParsedShaderParamMap* pParamsOut, uint32* pMaterialOwnedConstantBufferSizeOut, bool bMarkAllGlobalsUsed)
{
	int nBindlessSamplers; // 225
	{
		CVfxParsedConstantBuffer* pConstantBuffer; // 226
		CUtlVectorAutoPurge<CVfxParsedConstantBuffer*>& __for_range; // 5946
		iterator __for_begin; // 41151
		iterator __for_end; // 41151
		{
			CVfxParsedShaderParam* pParamIn; // 230
			CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& __for_range; // 60732
			iterator __for_begin; // 51359
			iterator __for_end; // 51359
			{
				uint16 nParamIdx; // 232
				{
					CVfxParsedShaderParam* pParam; // 235
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CECFB> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:263
// variables: 74
// function calls: 303
void CVfxVulkan::ConvertShaderParams(const CHLSLShaderCompiler* pHLSLCompiler, VfxCompileTarget_t compileTarget, VfxProgram_t programType, CVfxParsedShaderParamMap* pParamsOut, CVfxParsedConstantBufferVector& constantBuffers, uint32* pMaterialOwnedConstantBufferSizeOut, uint32* pThreadGroupSizeOut, bool& bGlobalsInBufferDeviceAddressOut, CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& entryPointsOut)
{
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> > activeUniforms; // 274
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> > activeUniformBlocks; // 280
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > sortedSamplerNames; // 288
	int32 nGlobalsUniformBlockIndex; // 330
	const char   __FUNCTION__; // 15216
	{
		short unsigned int nIndex; // 289
		{
			const CVfxParsedShaderParam* pParam; // 291
		}
	}
	{
		const bool  bMarkAllGlobalsUsed; // 323
		{
			CVfxParsedConstantBuffer* pConstantBuffer; // 226
			CUtlVectorAutoPurge<CVfxParsedConstantBuffer*>& __for_range; // 6143
			iterator __for_begin; // 6154
			iterator __for_end; // 6165
			CUtlMemory<CVfxParsedConstantBuffer::Base(); // 112
			CUtlVectorBase<CVfxParsedConstantBuffer::Base(); // 102
			CUtlVectorBase<CVfxParsedConstantBuffer::begin(); // 226
			CUtlVectorBase<CVfxParsedConstantBuffer::Count(); // 104
			CUtlVectorBase<CVfxParsedConstantBuffer::end(); // 226
			CUtlString::CUtlString(
					const char* pString);  // 228
			CUtlString::~CUtlString(); // 228
			{
				CVfxParsedShaderParam* pParamIn; // 230
				CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& __for_range; // 6189
				iterator __for_begin; // 6200
				iterator __for_end; // 6211
				CUtlMemory<CVfxParsedShaderParam::Base(); // 112
				CUtlVectorBase<CVfxParsedShaderParam::Base(); // 102
				CUtlVectorBase<CVfxParsedShaderParam::begin(); // 230
				CUtlVectorBase<CVfxParsedShaderParam::Count(); // 104
				CUtlVectorBase<CVfxParsedShaderParam::end(); // 230
				{
					uint16 nParamIdx; // 232
					CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
									const CUtlString& search);  // 243
					CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
						const KeyType_t& key);  // 232
					{
						CVfxParsedShaderParam* pParam; // 235
						CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
								short unsigned int i);  // 539
						CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
							short unsigned int i);  // 90
						CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
							IndexType_t i);  // 235
						Max<unsigned int>(const unsigned int& val1,
									const unsigned int& val2);  // 240
						RoundUpToMultipleOf<unsigned int>(unsigned int n,
											unsigned int m);  // 243
					}
				}
			}
		}
		BindlessComputeGlobalsSize(CVfxParsedConstantBufferVector& constantBuffers,
						CVfxParsedShaderParamMap* pParamsOut,
						uint32* pMaterialOwnedConstantBufferSizeOut,
						bool bMarkAllGlobalsUsed);  // 324
	}
	{
		int32 i; // 331
		{
			VfxUniformBlockInfo_t* pUniformBlockInfo; // 333
			operator==(const CUtlString& utlString,
					const char* pString);  // 337
			CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
					int i);  // 333
			operator==(const CUtlString& utlString,
					const char* pString);  // 336
		}
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 331
	}
	{
		int32 i; // 346
		{
			const VfxUniformInfo_t* pUniformInfo; // 348
			const VfxRegisterType_t  regType; // 349
			{
				uint16 nParamIdx; // 354
				CVfxParsedShaderParam* pFoundParam; // 405
				{
					const char* pUniformName; // 357
					const char* pArrayStr; // 361
					{
						int nLength; // 364
						char* pArrayBaseName; // 365
						V_strncpy<int>(char* pDest,
								const char* pSrc,
								int maxLenInChars);  // 366
						CUtlString::CUtlString(
								const char* pString);  // 368
						CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
										const CUtlString& search);  // 243
						CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
							const KeyType_t& key);  // 368
						CUtlString::~CUtlString(); // 368
					}
					{
						const char* pStructStr; // 387
						{
							int nLength; // 390
							char* pStructBaseName; // 391
							V_strncpy<int>(char* pDest,
									const char* pSrc,
									int maxLenInChars);  // 392
							CUtlString::CUtlString(
									const char* pString);  // 394
							CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
											const CUtlString& search);  // 243
							CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
								const KeyType_t& key);  // 394
							CUtlString::~CUtlString(); // 394
						}
						strstr(const char* __haystack,
							const char* __needle);  // 247
						V_strstr(const char* s1,
							const char* search);  // 387
					}
					strstr(const char* __haystack,
						const char* __needle);  // 247
					V_strstr(const char* s1,
						const char* search);  // 361
					CUtlString::Get(); // 357
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 400
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 411
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 412
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 420
				}
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
								const CUtlString& search);  // 243
				CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
					const KeyType_t& key);  // 354
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
					short unsigned int i);  // 90
				CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
					IndexType_t i);  // 405
				CUtlMemory<CVfxParsedShaderParam::Grow(
					int num);  // 806
				CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
						int num);  // 1249
				Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
				CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
						CVfxParsedShaderParam *& src);  // 229
				{
					int i; // 231
					CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
					CUtlMemory<CVfxParsedShaderParam::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxParsedShaderParam::operator[](
							int i);  // 233
					{
						int i; // 1531
					}
					CUtlVectorBase<CVfxParsedShaderParam::Find(
						CVfxParsedShaderParam* const& src);  // 233
				}
				CVfxParsedShaderParam::SetUsedInShaderInternal(
							bool bUsed,
							CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
				CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
				CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
				CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
				CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
				ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
				CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
				CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
				CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
				CVfxParsedShaderParam::SetUsedInShader(
						bool bUsed);  // 406
			}
			CUtlMemory<VfxUniformInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
					int i);  // 348
		}
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Count(); // 346
	}
	{
		int32 i; // 450
		{
			VfxUniformInfo_t* pUniformInfo; // 452
			VfxRegisterType_t regType; // 453
			{
				uint16 nParamIdx; // 456
				CVfxParsedShaderParam* pFoundParam; // 463
				int32 nSamplerBinding; // 471
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 466
				}
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
								const CUtlString& search);  // 243
				CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
					const KeyType_t& key);  // 456
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
					short unsigned int i);  // 90
				CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
					IndexType_t i);  // 463
				CUtlMemory<CVfxParsedShaderParam::Grow(
					int num);  // 806
				CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
						int num);  // 1249
				Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
				CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
						CVfxParsedShaderParam *& src);  // 229
				{
					int i; // 231
					CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
					CUtlMemory<CVfxParsedShaderParam::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxParsedShaderParam::operator[](
							int i);  // 233
					{
						int i; // 1531
					}
					CUtlVectorBase<CVfxParsedShaderParam::Find(
						CVfxParsedShaderParam* const& src);  // 233
				}
				CVfxParsedShaderParam::SetUsedInShaderInternal(
							bool bUsed,
							CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
				CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
				CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
				CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
				CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
				ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
				CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
				CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
				CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
				CVfxParsedShaderParam::SetUsedInShader(
						bool bUsed);  // 464
				CUtlString::Get(); // 459
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 459
			}
			CUtlMemory<VfxUniformInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
					int i);  // 452
		}
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Count(); // 450
	}
	{
		int32 i; // 488
		{
			VfxUniformBlockInfo_t* pUniformBlockInfo; // 490
			CUtlString blockName; // 491
			CUtlString blockSearchName; // 494
			VfxRegisterType_t regType; // 502
			{
				uint16 nParamIdx; // 505
				{
					CVfxParsedShaderParam* pFoundParam; // 508
					HLSLRegisterSpace_t hlslRegisterSpace; // 512
					VfxRegisterType_t registerTypeForBinding; // 513
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
							short unsigned int i);  // 539
					CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
						short unsigned int i);  // 90
					CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
						IndexType_t i);  // 508
					CUtlMemory<CVfxParsedShaderParam::Grow(
						int num);  // 806
					CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
							int num);  // 1249
					Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
					CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
							CVfxParsedShaderParam *& src);  // 229
					{
						int i; // 231
						CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
						CUtlMemory<CVfxParsedShaderParam::operator[](
								int i);  // 588
						CUtlVectorBase<CVfxParsedShaderParam::operator[](
								int i);  // 233
						{
							int i; // 1531
						}
						CUtlVectorBase<CVfxParsedShaderParam::Find(
							CVfxParsedShaderParam* const& src);  // 233
					}
					CVfxParsedShaderParam::SetUsedInShaderInternal(
								bool bUsed,
								CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
					CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
					CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
					CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
					CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
					ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
					CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
					CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
					CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
					CVfxParsedShaderParam::SetUsedInShader(
							bool bUsed);  // 509
				}
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
								const CUtlString& search);  // 243
				CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
					const KeyType_t& key);  // 505
			}
			{
				CVfxParsedConstantBuffer* pCB; // 526
				{
					int j; // 527
					CUtlVectorBase<CVfxParsedConstantBuffer::Count(); // 527
					CUtlMemory<CVfxParsedConstantBuffer::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
							int i);  // 529
					CUtlMemory<CVfxParsedConstantBuffer::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
							int i);  // 531
				}
				{
					const bool  bMarkAllGlobalsUsed; // 544
					{
						CVfxParsedConstantBuffer* pConstantBuffer; // 549
						CUtlVectorAutoPurge<CVfxParsedConstantBuffer*>& __for_range; // 5946
						iterator __for_begin; // 41151
						iterator __for_end; // 41151
						CUtlMemory<CVfxParsedConstantBuffer::Base(); // 112
						CUtlVectorBase<CVfxParsedConstantBuffer::Base(); // 102
						CUtlVectorBase<CVfxParsedConstantBuffer::begin(); // 549
						CUtlVectorBase<CVfxParsedConstantBuffer::Count(); // 104
						CUtlVectorBase<CVfxParsedConstantBuffer::end(); // 549
						CUtlString::CUtlString(
								const char* pString);  // 551
						CUtlString::~CUtlString(); // 551
					}
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
				}
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 538
				strstr(const char* __haystack,
					const char* __needle);  // 247
				V_strstr(const char* s1,
					const char* search);  // 538
				CUtlString::Get(); // 99
				CUtlString::String(); // 560
			}
			CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
					int i);  // 490
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 491
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 494
			operator==(const CUtlString& utlString,
					const char* pString);  // 497
			CUtlString::~CUtlString(); // 584
			CUtlString::~CUtlString(); // 584
			CUtlString::~CUtlString(); // 584
			CUtlString::operator=(
					const char* src);  // 499
		}
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 488
	}
	CUtlMemory<VfxUniformInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxUniformInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::CUtlVector(); // 274
	CUtlMemory<VfxUniformBlockInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxUniformBlockInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::CUtlVector(); // 280
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 288
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Sort(
		int (*pfnCompare)(const CUtlString *, const CUtlString *));  // 301
	{
		short unsigned int nIdx; // 174
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::NumAllocated(); // 594
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement(); // 187
		CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement()(const CUtlString&, const CUtlString& this); // 174
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
				short unsigned int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
				short unsigned int i);  // 667
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				short unsigned int i);  // 659
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				short unsigned int i);  // 190
		CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				IndexType_t i);  // 174
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
			short unsigned int i);  // 92
		CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				IndexType_t i);  // 183
		CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
		CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
		CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
		CUtlMemory<CVfxParsedShaderParam::Grow(
			int num);  // 806
		CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
				int num);  // 1249
		Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
		CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
				CVfxParsedShaderParam *& src);  // 229
		{
			int i; // 231
			CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
			CUtlMemory<CVfxParsedShaderParam::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxParsedShaderParam::operator[](
					int i);  // 233
			{
				int i; // 1531
			}
			CUtlVectorBase<CVfxParsedShaderParam::Find(
				CVfxParsedShaderParam* const& src);  // 233
		}
		CVfxParsedShaderParam::SetUsedInShaderInternal(
					bool bUsed,
					CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
		CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
		ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
		CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
		CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
		CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
		CVfxParsedShaderParam::SetUsedInShader(
				bool bUsed);  // 183
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 180
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
			short unsigned int i);  // 92
		CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				IndexType_t i);  // 180
		CUtlString::Get(); // 180
		CUtlString::Get(); // 180
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
			short unsigned int i);  // 92
		CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				IndexType_t i);  // 180
	}
	MarkAllExternalDescriptorSetsUsed(CVfxParsedShaderParamMap& paramMap); // 587
	{
		int i; // 1721
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 602
	{
		int i; // 1721
		CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 42
		VfxUniformBlockInfo_t::~VfxUniformBlockInfo_t(); // 1526
		Destruct<VfxUniformBlockInfo_t>(VfxUniformBlockInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxUniformBlockInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 903
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Purge(); // 560
	ValidateAlignment<VfxUniformBlockInfo_t>(void); // 508
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 510
	CUtlMemory<VfxUniformBlockInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVector(); // 602
	{
		int i; // 1721
		CUtlMemory<VfxUniformInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 17
		VfxUniformInfo_t::~VfxUniformInfo_t(); // 1526
		Destruct<VfxUniformInfo_t>(VfxUniformInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 903
	CUtlMemory<VfxUniformInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Purge(); // 560
	ValidateAlignment<VfxUniformInfo_t>(void); // 508
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 510
	CUtlMemory<VfxUniformInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVector(); // 602
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 283
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 277
	{
		int i; // 1721
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 602
	{
		int i; // 1721
		CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 42
		VfxUniformBlockInfo_t::~VfxUniformBlockInfo_t(); // 1526
		Destruct<VfxUniformBlockInfo_t>(VfxUniformBlockInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxUniformBlockInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 903
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Purge(); // 560
	ValidateAlignment<VfxUniformBlockInfo_t>(void); // 508
	CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 510
	CUtlMemory<VfxUniformBlockInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVector(); // 602
	{
		int i; // 1721
		CUtlMemory<VfxUniformInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 17
		VfxUniformInfo_t::~VfxUniformInfo_t(); // 1526
		Destruct<VfxUniformInfo_t>(VfxUniformInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 903
	CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVector(); // 602
} /* size: 0, variables: 5, inline expansions: 71 (2336 bytes) */

// <000CECCD> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:623
// variable: 1
bool IsBuiltInHLSLSemantic(const char* pSemantic)
{
	{
		int32 i; // 625
	}
} /* size: 0 */

// <000CDDC9> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:636
// variables: 4
// function calls: 63
CVfxStructDecl* CreateStrippedStructDecl(const CVfxStructDecl& srcStruct, VfxProgram_t programType, VfxCompileTarget_t compileTarget, bool bInput)
{
	CVfxStructDecl* pNewStruct; // 638
	{
		int i; // 641
		{
			CVfxStructMember* pCopy; // 647
			CUtlMemory<CVfxStructMember::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxStructMember::operator[](
					int i);  // 643
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 643
			{
				int32 i; // 625
			}
			IsBuiltInHLSLSemantic(const char* pSemantic); // 643
			CUtlString::CUtlString(); // 279
			CUtlString::CUtlString(); // 279
			CUtlString::CUtlString(); // 279
			CKeyLess::CKeyLess(
				LessFunc_t lessFunc);  // 63
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 484
			InvalidIndex(void); // 486
			InvalidIndex(void); // 488
			Iterator_t::Iterator_t(
					short unsigned int i);  // 86
			InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 489
			ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 491
			CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
					int growSize,
					int initSize,
					const LessFunc_t& lessfunc);  // 63
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::CUtlMap(
				int growSize,
				int initSize,
				LessFunc_t lessfunc);  // 279
			CVfxStructMember::CVfxStructMember(); // 647
			CUtlMemory<CVfxStructMember::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxStructMember::operator[](
					int i);  // 648
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 648
			CUtlMemory<CVfxStructMember::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxStructMember::operator[](
					int i);  // 649
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 649
			CUtlMemory<CVfxStructMember::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxStructMember::operator[](
					int i);  // 650
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 650
			CUtlMemory<CVfxStructMember::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxStructMember::operator[](
					int i);  // 651
			CUtlMemory<CVfxStructMember::NumAllocated(); // 1196
			CUtlMemory<CVfxStructMember::Base(); // 112
			CUtlVectorBase<CVfxStructMember::Base(); // 368
			CUtlVectorBase<CVfxStructMember::ResetDbgInfo(); // 824
			CUtlMemory<CVfxStructMember::IsGrowable(); // 823
			CUtlMemory<CVfxStructMember::IsExternallyAllocated(); // 859
			CUtlMemory<CVfxStructMember::IsExternallyAllocated(); // 861
			CUtlMemory<CVfxStructMember::Grow(
				int num);  // 806
			CUtlVectorBase<CVfxStructMember::GrowMemory(
					int num);  // 1198
			CUtlMemory<CVfxStructMember::operator[](
					int i);  // 602
			CUtlVectorBase<CVfxStructMember::Element(
				int i);  // 1201
			CopyConstruct<CVfxStructMember*>(CVfxStructMember** pMemory,
							CVfxStructMember* const& src);  // 1201
			CUtlVectorBase<CVfxStructMember::AddToTail(
					CVfxStructMember* const& src);  // 656
		}
		CUtlVectorBase<CVfxStructMember::Count(); // 641
	}
	CUtlString::Get(); // 99
	CUtlString::String(); // 639
	CUtlString::CUtlString(); // 296
	CUtlMemory<CVfxStructMember::ValidateGrowSize(); // 475
	CUtlMemory<CVfxStructMember::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxStructMember::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxStructMember::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxStructMember::CUtlVector(); // 1895
	CUtlVectorAutoPurge<CVfxStructMember::CUtlVectorAutoPurge(); // 296
	CVfxStructDecl::CVfxStructDecl(); // 638
} /* size: 861, variables: 1, inline expansions: 10 (159 bytes) */

// <000B023C> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:678
// member variables: 2
// struct size: 16
struct VsInputSemanticEntry_t {
	const char * pD3DSemantic; /* 0 8 */
	SemanticUsageVulkan_t nSemanticUsage; /* 8 4 */
};

// <000CDD72> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:698
// variables: 2
const VsInputSemanticEntry_t* FindVulkanVsInputSemanticForD3DSemantic(const char* pSemantic)
{
	{
		int nEntry; // 701
		{
			const VsInputSemanticEntry_t* pVsInputSemantic; // 703
		}
	}
} /* size: 0 */

// <000CD172> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:717
// variables: 17
// function calls: 39
void BuildVertexAttributeMap(const CVfxStructDecl& mainInputStruct, VfxProgram_t programType, VfxCompileTarget_t compileTarget, CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& attribMapOut)
{
	CUtlString metaDataComments; // 719
	const char   __FUNCTION__; // 15309
	{
		CVfxStructDecl* pStrippedInputDecl; // 722
		{
			int nInput; // 724
			{
				CVfxStructMember* pInputStructDecl; // 726
				CUtlString semanticUsage; // 732
				CUtlString semanticIndex; // 733
				int nSemanticIndex; // 734
				const VsInputSemanticEntry_t* pVsInputSemantic; // 756
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 727
				}
				{
					int nStrIndex; // 735
					{
						char nCurCh; // 737
						CUtlString::Append(
							const char  chAddition);  // 742
						CUtlString::Append(
							const char  chAddition);  // 746
					}
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 735
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 753
				}
				{
					int nSemanticHash; // 759
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 760
					}
					CUtlMemory<unsigned char, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
						int i);  // 1252
					Construct<unsigned char, unsigned char>(unsigned char* pMemory); // 1252
					CUtlMemory<unsigned char, int>::Base(); // 112
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddToTail(
							unsigned char& src);  // 761
				}
				CUtlMemory<CVfxStructMember::operator[](
						int i);  // 588
				CUtlVectorBase<CVfxStructMember::operator[](
						int i);  // 726
				CUtlString::CUtlString(); // 732
				CUtlString::CUtlString(); // 733
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 750
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 756
				{
					int nEntry; // 701
					{
						const VsInputSemanticEntry_t* pVsInputSemantic; // 703
					}
				}
				FindVulkanVsInputSemanticForD3DSemantic(const char* pSemantic); // 756
				CUtlString::Get(); // 765
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 765
				CUtlMemory<unsigned char, int>::NumAllocated(); // 1247
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
					int i);  // 1252
				Construct<unsigned char, unsigned char>(unsigned char* pMemory); // 1252
				CUtlMemory<unsigned char, int>::Base(); // 112
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddToTail(
						unsigned char& src);  // 766
				CUtlString::~CUtlString(); // 768
				CUtlString::~CUtlString(); // 768
			}
			CUtlVectorBase<CVfxStructMember::Count(); // 724
		}
	}
	CUtlString::CUtlString(); // 719
	CUtlString::~CUtlString(); // 770
} /* size: 0, variables: 2, inline expansions: 2 (28 bytes) */

// <000CD133> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:773
// variable: 1
CVfxStructDecl* FindStructDecl(const char* pStructName, CVfxStructDeclVector& decls)
{
	{
		int i; // 775
	}
} /* size: 0 */

// <000CCACB> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:788
// variables: 4
// function calls: 28
CUtlString ParseHLSLCodeAttribute(const char* pCodeStr)
{
	CUtlString result; // 790
	CUtlStringList tokens; // 791
	const char* sep; // 792
	CUtlString::CUtlString(); // 790
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 791
	CUtlVectorBase<char::Count(); // 794
	CUtlMemory<char::operator[](
			int i);  // 588
	CUtlVectorBase<char::operator[](
			int i);  // 796
	CUtlString::operator=(
			const char* src);  // 796
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 800
} /* size: 0, variables: 3, inline expansions: 25 (0 bytes) */

// <000CCA9D> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:802
const char* CompileTargetToShaderModelString(VfxCompileTarget_t compileTarget, VfxProgram_t programType)
{
} /* size: 0 */

// <000C65B3> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:810
// variables: 46
// function calls: 407
void CVfxVulkan::CompileShaderAndGetVariables(uint64 nStaticComboIndex, uint64 nDynamicComboIndex, const CVfx* pVfx, VfxCompileTarget_t compileTarget, VfxProgram_t programType, VfxCompiledShaderInfo_t* pCompiledShaderInfoOut, bool bUseShaderCache, uint nVfxCompileShaderFlags, IShaderCompileContext* sharedContext)
{
	ShaderCompileContext* context; // 812
	CUtlString inputInterfaceString; // 826
	CUtlString outputInterfaceString; // 827
	CVfxParsedInputSignatureVector vertexShaderInputSignature; // 850
	const char* pShaderModel; // 853
	CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> > macros; // 854
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > macroValueStrings; // 855
	const CVfxProgramData* pProgramData; // 856
	CUtlString mungedShaderSource; // 867
	CVfxParsedShaderParamMap effectParams; // 868
	CVfxParsedShaderParamMap effectParamsBufferDeviceAddress; // 869
	CVfxParsedShaderParamMap* pEffectParams; // 870
	CCleanOnExit cleanOnExit; // 898
	CVfxParsedConstantBufferVector constantBuffers; // 900
	CVfxParsedConstantBufferVector constantBuffersBufferDeviceAddress; // 901
	CVfxParsedConstantBufferVector* pConstantBuffers; // 902
	CVfxStructDeclVector structDecls; // 904
	CVfxMainEntryPointInfo mainEntryPointInfo; // 905
	CUtlString metaDataComments; // 907
	bool bNeedsEntryPoint; // 909
	CUtlString preprocessedShaderSource; // 911
	unique_ptr<CHLSLShaderCompiler, std::default_delete<CHLSLShaderCompiler> > pHLSLCompiler; // 913
	bool bSuccess; // 915
	CVfxCompiledShaderCache shaderCache; // 947
	CVfxHashValue cacheHandle; // 948
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > attribMapOut; // 950
	bool bPerformCompile; // 965
	const char   __FUNCTION__; // 15424
	{
		CToolsStallMonitorScope stall_monitor_scope_check_object; // 921
		CToolsStallMonitorScope::CToolsStallMonitorScope(
					const char* pScopeName,
					bool bDisableDetection,
					uint32 nStallThresholdMS);  // 921
		CBufferString::IsEmpty(); // 1280
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1280
		CVfx::GetFilename(); // 924
		CUtlString::Get(); // 99
		CUtlString::String(); // 924
		CToolsStallMonitorScope::~CToolsStallMonitorScope(); // 942
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 926
	}
	{
		CShaderParamBuilder paramBuilder; // 975
		CHlslParser hlslParser; // 979
		CUtlString errorMessage; // 980
		{
			CVfxStructDecl* pInputStruct; // 989
			RegisterAllocationFormat_t eRegisterAllocation; // 995
			HLSLCompiler_t eHLSLCompiler; // 996
			CUtlString shaderSourceWithoutBDARewriting; // 998
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1003
			}
			CUtlString::Get(); // 989
			{
				int i; // 775
				CUtlVectorBase<CVfxStructDecl::Count(); // 775
				CUtlMemory<CVfxStructDecl::operator[](
						int i);  // 588
				CUtlVectorBase<CVfxStructDecl::operator[](
						int i);  // 777
				operator==(const CUtlString& utlString,
						const char* pString);  // 777
				CUtlMemory<CVfxStructDecl::operator[](
						int i);  // 588
				CUtlVectorBase<CVfxStructDecl::operator[](
						int i);  // 779
			}
			FindStructDecl(const char* pStructName,
					CVfxStructDeclVector& decls);  // 989
			CUtlString::CUtlString(); // 998
			CUtlString::CUtlString(); // 998
			CUtlString::~CUtlString(); // 998
			CUtlString::~CUtlString(); // 998
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 999
			CShaderParamBuilder::GetBDAGlobalsVariable(); // 21
			CHlslParser::GetBDAGlobalsVaraiable(); // 1001
			CUtlString::~CUtlString(); // 1005
		}
		CUtlString::CUtlString(); // 980
		CUtlString::IsEmpty(); // 1010
		CUtlString::operator=(
				const char* src);  // 1010
		CUtlString::IsEmpty(); // 1016
		CUtlString::operator=(
				const char* src);  // 1016
		CUtlString::~CUtlString(); // 1020
		CUtlString::Get(); // 99
		CUtlString::String(); // 1018
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1018
	}
	CUtlString::CUtlString(); // 826
	CUtlString::CUtlString(); // 827
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::RemoveAll(); // 838
	CompileTargetToShaderModelString(VfxCompileTarget_t compileTarget,
					VfxProgram_t programType);  // 853
	CUtlMemory<VfxParsedInputSignatureElement_t::ValidateGrowSize(); // 475
	CUtlMemory<VfxParsedInputSignatureElement_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxParsedInputSignatureElement_t::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxParsedInputSignatureElement_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxParsedInputSignatureElement_t::CUtlVector(); // 1895
	CUtlVectorAutoPurge<VfxParsedInputSignatureElement_t::CUtlVectorAutoPurge(); // 850
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<VfxShaderMacro_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxShaderMacro_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::CUtlVector(); // 854
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 855
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::ResetDbgInfo(); // 491
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<CUtlString, CVfxParsedShaderParam::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 868
	CUtlString::CUtlString(); // 244
	CUtlString::CUtlString(); // 244
	CUtlString::CUtlString(
			const char* pString);  // 244
	CUtlString::CUtlString(); // 244
	CUtlString::CUtlString(); // 244
	CUtlString::CUtlString(); // 244
	CUtlString::CUtlString(); // 244
	CUtlString::CUtlString(); // 244
	CUtlString::CUtlString(); // 244
	CVfxMainEntryPointInfo::CVfxMainEntryPointInfo(
				const char* pName);  // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<CUtlString, CVfxParsedShaderParam::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 869
	CUtlString::CUtlString(); // 867
	CCleanOnExit::CCleanOnExit(
			CVfxParsedShaderParamMap& effectParams,
			CVfxParsedShaderParamMap& effectParamsBufferDeviceAddress,
			CVfxParsedInputSignatureVector& vertexShaderInputSignature);  // 898
	CUtlMemory<CVfxParsedConstantBuffer::ValidateGrowSize(); // 475
	CUtlMemory<CVfxParsedConstantBuffer::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxParsedConstantBuffer::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxParsedConstantBuffer::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxParsedConstantBuffer::CUtlVector(); // 1895
	CUtlVectorAutoPurge<CVfxParsedConstantBuffer::CUtlVectorAutoPurge(); // 900
	CUtlMemory<CVfxParsedConstantBuffer::ValidateGrowSize(); // 475
	CUtlMemory<CVfxParsedConstantBuffer::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxParsedConstantBuffer::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxParsedConstantBuffer::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxParsedConstantBuffer::CUtlVector(); // 1895
	CUtlVectorAutoPurge<CVfxParsedConstantBuffer::CUtlVectorAutoPurge(); // 901
	CUtlMemory<CVfxStructDecl::ValidateGrowSize(); // 475
	CUtlMemory<CVfxStructDecl::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxStructDecl::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxStructDecl::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxStructDecl::CUtlVector(); // 1895
	CUtlVectorAutoPurge<CVfxStructDecl::CUtlVectorAutoPurge(); // 904
	CUtlString::CUtlString(); // 907
	_Head_base<1, std::default_delete<CHLSLShaderCompiler>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CHLSLShaderCompiler> >::_Tuple_impl(); // 303
	_Head_base<0, CHLSLShaderCompiler::_Head_base(); // 303
	_Tuple_impl<0, CHLSLShaderCompiler::_Tuple_impl(); // 966
	tuple<CHLSLShaderCompiler::tuple(); // 169
	__uniq_ptr_impl<CHLSLShaderCompiler, std::default_delete<CHLSLShaderCompiler> >::_M_ptr(); // 169
	__uniq_ptr_impl<CHLSLShaderCompiler, std::default_delete<CHLSLShaderCompiler> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CHLSLShaderCompiler, std::default_delete<CHLSLShaderCompiler>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CHLSLShaderCompiler, std::default_delete<CHLSLShaderCompiler> >::unique_ptr<>(
			pointer __p);  // 1084
	make_unique<CHLSLShaderCompiler>(void); // 913
	CUtlString::CUtlString(); // 911
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 286
	CVfxHashValue::Reset(); // 276
	CVfxHashValue::CVfxHashValue(); // 948
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 950
	CUtlString::Get(); // 99
	CUtlString::String(); // 954
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1088
	CUtlString::~CUtlString(); // 1088
	CUtlString::~CUtlString(); // 1088
	{
		CHLSLShaderCompiler *& __ptr; // 396
		__uniq_ptr_impl<CHLSLShaderCompiler, std::default_delete<CHLSLShaderCompiler> >::_M_ptr(); // 396
		unique_ptr<CHLSLShaderCompiler, std::default_delete<CHLSLShaderCompiler> >::get_deleter(); // 398
		default_delete<CHLSLShaderCompiler>::operator(
				CHLSLShaderCompiler* __ptr);  // 86
		default_delete<CHLSLShaderCompiler>::operator(
				CHLSLShaderCompiler* __ptr);  // 398
	}
	unique_ptr<CHLSLShaderCompiler, std::default_delete<CHLSLShaderCompiler> >::~unique_ptr(); // 1088
	CUtlString::~CUtlString(); // 1088
	CUtlString::~CUtlString(); // 1088
	CUtlString::~CUtlString(); // 241
	CUtlString::~CUtlString(); // 241
	CUtlString::~CUtlString(); // 241
	CUtlString::~CUtlString(); // 241
	CUtlString::~CUtlString(); // 241
	CUtlString::~CUtlString(); // 241
	CUtlString::~CUtlString(); // 241
	CUtlString::~CUtlString(); // 241
	CUtlString::~CUtlString(); // 241
	CVfxMainEntryPointInfo::~CVfxMainEntryPointInfo(); // 1088
	CUtlVectorBase<CVfxStructDecl::RemoveAll(); // 1798
	CUtlMemory<CVfxStructDecl::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxStructDecl::Purge(); // 903
	CUtlMemory<CVfxStructDecl::Purge(); // 1799
	CUtlVectorBase<CVfxStructDecl::Purge(); // 560
	ValidateAlignment<CVfxStructDecl*>(void); // 508
	CUtlMemory<CVfxStructDecl::Purge(); // 510
	CUtlMemory<CVfxStructDecl::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxStructDecl::~CUtlVectorBase(); // 410
	CUtlVector<CVfxStructDecl::~CUtlVector(); // 1901
	CUtlVectorAutoPurge<CVfxStructDecl::~CUtlVectorAutoPurge(); // 1088
	{
		int i; // 1807
	}
	CUtlVectorBase<CVfxParsedConstantBuffer::PurgeAndDeleteElements(); // 1900
	CUtlVectorBase<CVfxParsedConstantBuffer::Purge(); // 560
	ValidateAlignment<CVfxParsedConstantBuffer*>(void); // 508
	CUtlMemory<CVfxParsedConstantBuffer::Purge(); // 510
	CUtlMemory<CVfxParsedConstantBuffer::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxParsedConstantBuffer::~CUtlVectorBase(); // 410
	CUtlVector<CVfxParsedConstantBuffer::~CUtlVector(); // 1901
	CUtlVectorAutoPurge<CVfxParsedConstantBuffer::~CUtlVectorAutoPurge(); // 1088
	{
		int i; // 1807
		CUtlMemory<CVfxParsedConstantBuffer::operator[](
				int i);  // 602
		CUtlVectorBase<CVfxParsedConstantBuffer::Element(
			int i);  // 1809
		IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 905
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 1288
		Purge(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 47
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::~CUtlMap()(const CUtlString&, const CUtlString&)>* this); // 307
		CUtlVectorBase<CVfxParsedShaderParam::RemoveAll(); // 1798
		CUtlMemory<CVfxParsedShaderParam::IsExternallyAllocated(); // 905
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
		CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
		ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
		CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
		CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
		CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 307
		CUtlString::~CUtlString(); // 307
		CVfxParsedConstantBuffer::~CVfxParsedConstantBuffer(); // 1809
	}
	CUtlMemory<CVfxParsedConstantBuffer::Purge(); // 903
	CUtlMemory<CVfxParsedConstantBuffer::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxParsedConstantBuffer::Purge(); // 1799
	CUtlVectorBase<CVfxParsedConstantBuffer::RemoveAll(); // 1798
	CUtlVectorBase<CVfxParsedConstantBuffer::Purge(); // 1811
	CUtlVectorBase<CVfxParsedConstantBuffer::PurgeAndDeleteElements(); // 1900
	CUtlVectorBase<CVfxParsedConstantBuffer::Purge(); // 560
	ValidateAlignment<CVfxParsedConstantBuffer*>(void); // 508
	CUtlMemory<CVfxParsedConstantBuffer::Purge(); // 510
	CUtlMemory<CVfxParsedConstantBuffer::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxParsedConstantBuffer::~CUtlVectorBase(); // 410
	CUtlVector<CVfxParsedConstantBuffer::~CUtlVector(); // 1901
	CUtlVectorAutoPurge<CVfxParsedConstantBuffer::~CUtlVectorAutoPurge(); // 1088
	{
		short unsigned int nIdx; // 883
		CUtlMap<CUtlString, CVfxParsedShaderParam::FirstElement()(const CUtlString&, const CUtlString& this); // 883
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::NumAllocated(); // 594
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement(); // 187
		CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement()(const CUtlString&, const CUtlString& this); // 883
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
				short unsigned int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
				short unsigned int i);  // 667
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				short unsigned int i);  // 659
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				short unsigned int i);  // 190
		CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				IndexType_t i);  // 883
		CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				IndexType_t i);  // 885
		IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 905
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 1288
		Purge(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 47
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::~CUtlMap()(const CUtlString&, const CUtlString&)>* this); // 165
		CUtlVectorBase<CVfxParsedShaderParam::RemoveAll(); // 1798
		CUtlMemory<CVfxParsedShaderParam::IsExternallyAllocated(); // 905
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
		CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
		ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
		CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
		CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
		CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 165
		CUtlString::~CUtlString(); // 165
		CUtlString::~CUtlString(); // 165
		CVfxParsedShaderParam::~CVfxParsedShaderParam(); // 885
	}
	{
		short unsigned int nIdx; // 887
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::NumAllocated(); // 594
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement(); // 187
		CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement()(const CUtlString&, const CUtlString& this); // 887
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
				short unsigned int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
				short unsigned int i);  // 667
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				short unsigned int i);  // 659
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				short unsigned int i);  // 190
		CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				IndexType_t i);  // 887
		CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				IndexType_t i);  // 889
		IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 905
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 1288
		Purge(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 47
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::~CUtlMap()(const CUtlString&, const CUtlString&)>* this); // 165
		CUtlVectorBase<CVfxParsedShaderParam::RemoveAll(); // 1798
		CUtlMemory<CVfxParsedShaderParam::IsExternallyAllocated(); // 905
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
		CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
		ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
		CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
		CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
		CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 165
		CUtlString::~CUtlString(); // 165
		CUtlString::~CUtlString(); // 165
		CVfxParsedShaderParam::~CVfxParsedShaderParam(); // 889
	}
	{
		int i; // 1807
		CUtlMemory<VfxParsedInputSignatureElement_t::operator[](
				int i);  // 602
		CUtlVectorBase<VfxParsedInputSignatureElement_t::Element(
			int i);  // 1809
		IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 905
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 1288
		Purge(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 47
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::~CUtlMap()(const CUtlString&, const CUtlString&)>* this); // 328
		VfxParsedInputSignatureElement_t::~VfxParsedInputSignatureElement_t(); // 1809
	}
	CUtlMemory<VfxParsedInputSignatureElement_t::Purge(); // 903
	CUtlMemory<VfxParsedInputSignatureElement_t::IsExternallyAllocated(); // 905
	CUtlMemory<VfxParsedInputSignatureElement_t::Purge(); // 1799
	CUtlVectorBase<VfxParsedInputSignatureElement_t::RemoveAll(); // 1798
	CUtlVectorBase<VfxParsedInputSignatureElement_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<VfxParsedInputSignatureElement_t::Purge(); // 1811
	CUtlVectorBase<VfxParsedInputSignatureElement_t::PurgeAndDeleteElements(); // 891
	CCleanOnExit::~CCleanOnExit(); // 1088
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam*>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::~CUtlRBTree(); // 47
	CUtlMap<CUtlString, CVfxParsedShaderParam::~CUtlMap()(const CUtlString&, const CUtlString&)>* this); // 1088
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam*>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::~CUtlRBTree(); // 47
	CUtlMap<CUtlString, CVfxParsedShaderParam::~CUtlMap()(const CUtlString&, const CUtlString&)>* this); // 1088
	CUtlString::~CUtlString(); // 1088
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1088
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxShaderMacro_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxShaderMacro_t, int>::Purge(); // 903
	CUtlMemory<VfxShaderMacro_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::Purge(); // 560
	ValidateAlignment<VfxShaderMacro_t>(void); // 508
	CUtlMemory<VfxShaderMacro_t, int>::Purge(); // 510
	CUtlMemory<VfxShaderMacro_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >::~CUtlVector(); // 1088
	{
		int i; // 1807
		CUtlMemory<VfxParsedInputSignatureElement_t::operator[](
				int i);  // 602
		CUtlVectorBase<VfxParsedInputSignatureElement_t::Element(
			int i);  // 1809
		IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 905
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 1288
		Purge(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 47
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::~CUtlMap()(const CUtlString&, const CUtlString&)>* this); // 328
		VfxParsedInputSignatureElement_t::~VfxParsedInputSignatureElement_t(); // 1809
	}
	CUtlMemory<VfxParsedInputSignatureElement_t::Purge(); // 903
	CUtlMemory<VfxParsedInputSignatureElement_t::IsExternallyAllocated(); // 905
	CUtlMemory<VfxParsedInputSignatureElement_t::Purge(); // 1799
	CUtlVectorBase<VfxParsedInputSignatureElement_t::RemoveAll(); // 1798
	CUtlVectorBase<VfxParsedInputSignatureElement_t::Purge(); // 1811
	CUtlVectorBase<VfxParsedInputSignatureElement_t::PurgeAndDeleteElements(); // 1900
	CUtlVectorBase<VfxParsedInputSignatureElement_t::Purge(); // 560
	ValidateAlignment<VfxParsedInputSignatureElement_t*>(void); // 508
	CUtlMemory<VfxParsedInputSignatureElement_t::Purge(); // 510
	CUtlMemory<VfxParsedInputSignatureElement_t::~CUtlMemory(); // 562
	CUtlVectorBase<VfxParsedInputSignatureElement_t::~CUtlVectorBase(); // 410
	CUtlVector<VfxParsedInputSignatureElement_t::~CUtlVector(); // 1901
	CUtlVectorAutoPurge<VfxParsedInputSignatureElement_t::~CUtlVectorAutoPurge(); // 1088
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 846
	CBufferString::IsEmpty(); // 1280
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1280
	CVfx::GetFilename(); // 1043
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1043
	CUtlString::Get(); // 1043
	CUtlString::Get(); // 99
	CUtlString::String(); // 63
	CHLSLShaderCompiler::GetCompilerOutput(); // 1045
	CUtlString::operator=(
			const char* src);  // 1045
	VfxProgramHasRenderState(VfxProgram_t programType); // 1029
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 308
	CVfxHashValue::GetHashUint32(
			uint index);  // 281
	CVfxHashValue::IsValid(); // 1077
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1081
	CUtlMemory<CVfxParsedConstantBuffer::operator[](
			int i);  // 588
	CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
			int i);  // 1049
} /* size: 0, variables: 28, inline expansions: 235 (7256 bytes) */

// <000C0408> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:1090
// variables: 46
// function calls: 365
void CVfxVulkan::CompileSource(IShaderCompileContext* context, CHLSLShaderCompiler* pHlslShaderCompiler, const char* pShaderSource, VfxCompileTarget_t compileTarget, VfxProgram_t programType, VfxCompiledShaderInfo_t* pCompiledShaderInfoOut, uint nVfxCompileShaderFlags, const char* szEntryPointName, const char* szDebugName, CUtlString& metaDataComments, CVfxParsedShaderParamMap& effectParams, CVfxParsedConstantBufferVector& constantBuffers, const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& attribMap, CUtlString& inputInterfaceString, CUtlString& outputInterfaceString)
{
	char* pMungedShaderSource; // 1094
	CVfxShaderFileVulkan shaderFileVulkan; // 1121
	uint8* pBinaryIL; // 1122
	uint32 nBinaryILSize; // 1123
	bool bConverted; // 1124
	const char   __FUNCTION__; // 15069
	bool bSuccess; // 1136
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > activeSamplerBindings; // 1142
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > activeUniformBufferBindings; // 1143
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > activeTextureBindings; // 1144
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > activeImageBindings; // 1145
	CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> > activeStorageBufferBindings; // 1146
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > activeUniformTexelBufferBindings; // 1147
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > activeStorageTexelBufferBindings; // 1148
	CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> > hiddenUAVCounters; // 1149
	CUtlVector<int, CUtlMemory<int, int> > activeInputAttachmentBindings; // 1150
	int32 nNumActiveUniformBuffersInDynamicSet; // 1152
	int32 nNumActiveTexturesInDynamicSet; // 1153
	int32 nNumActiveSamplersInDynamicSet; // 1154
	int32 nNumActiveStorageBuffersInDynamicSet; // 1155
	int32 nNumActiveUniformTexelBuffersInDynamicSet; // 1156
	int32 nNumActiveStorageTexelBuffersInDynamicSet; // 1157
	int32 nNumActiveImagesInDynamicSet; // 1158
	int32 nMaxSamplerBindingInDynamicSet; // 1159
	{
		int nSrcLen; // 1096
		V_strlen(const char* str); // 1096
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1098
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1130
	}
	{
		CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> > activeUniformBlocks; // 1163
		{
			int nIndex; // 1165
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1170
			}
			{
				int32 nBinding; // 1180
				CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
						int i);  // 1181
				CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
					int i);  // 1252
				Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
				CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
						VfxDescriptor_t& src);  // 1181
				VfxDescriptor_t::VfxDescriptor_t(
						int32 nDescriptorSet,
						int32 nBinding);  // 1181
				CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
						int i);  // 1182
			}
			{
				HLSLRegisterSpace_t hlslRegisterSpace; // 1193
				VfxRegisterType_t registerTypeForBinding; // 1194
				ShaderStorageBufferBinding_t shaderStorageBufferBinding; // 1195
				{
					HiddenUAVCounter_t hiddenUAVCounter; // 1210
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1209
					}
					CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 1209
					CUtlMemory<ShaderStorageBufferBinding_t, int>::operator[](
							int i);  // 630
					CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Tail(); // 1211
					CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
							int i);  // 1212
					CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
							int i);  // 1212
					CUtlMemory<HiddenUAVCounter_t, int>::NumAllocated(); // 1196
					CUtlMemory<HiddenUAVCounter_t, int>::Base(); // 112
					CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::Base(); // 368
					CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::ResetDbgInfo(); // 824
					CUtlMemory<HiddenUAVCounter_t, int>::IsGrowable(); // 823
					CUtlMemory<HiddenUAVCounter_t, int>::IsExternallyAllocated(); // 859
					CUtlMemory<HiddenUAVCounter_t, int>::IsExternallyAllocated(); // 861
					CUtlMemory<HiddenUAVCounter_t, int>::Grow(
						int num);  // 806
					CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlMemory<HiddenUAVCounter_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::Element(
						int i);  // 1201
					CopyConstruct<HiddenUAVCounter_t>(HiddenUAVCounter_t* pMemory,
										const HiddenUAVCounter_t& src);  // 1201
					CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::AddToTail(
							const HiddenUAVCounter_t& src);  // 1213
				}
				CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
						int i);  // 1196
				CUtlMemory<ShaderStorageBufferBinding_t, int>::NumAllocated(); // 1196
				CUtlMemory<ShaderStorageBufferBinding_t, int>::Base(); // 112
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Base(); // 368
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::ResetDbgInfo(); // 824
				CUtlMemory<ShaderStorageBufferBinding_t, int>::IsGrowable(); // 823
				CUtlMemory<ShaderStorageBufferBinding_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<ShaderStorageBufferBinding_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<ShaderStorageBufferBinding_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::GrowMemory(
						int num);  // 1198
				CopyConstruct<ShaderStorageBufferBinding_t>(ShaderStorageBufferBinding_t* pMemory,
										const ShaderStorageBufferBinding_t& src);  // 1201
				CUtlMemory<ShaderStorageBufferBinding_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::AddToTail(
						const ShaderStorageBufferBinding_t& src);  // 1200
				CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
						int i);  // 1198
				CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
						int i);  // 1201
				CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
						int i);  // 1207
			}
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Count(); // 1165
			CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
					int i);  // 1172
			CVfxShaderFileVulkan::SetPushConstantSize(
						uint16 nPushConstantSize);  // 1176
			CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::operator[](
					int i);  // 1168
		}
		CUtlMemory<VfxUniformBlockInfo_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<VfxUniformBlockInfo_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::CUtlVector(); // 1163
		CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 903
		CUtlMemory<VfxUniformBlockInfo_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 1799
		{
			int i; // 1721
			CUtlMemory<VfxUniformBlockInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 42
			VfxUniformBlockInfo_t::~VfxUniformBlockInfo_t(); // 1526
			Destruct<VfxUniformBlockInfo_t>(VfxUniformBlockInfo_t* pMemory); // 1723
		}
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::RemoveAll(); // 1798
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::Purge(); // 560
		ValidateAlignment<VfxUniformBlockInfo_t>(void); // 508
		CUtlMemory<VfxUniformBlockInfo_t, int>::Purge(); // 510
		CUtlMemory<VfxUniformBlockInfo_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >::~CUtlVector(); // 1217
	}
	{
		CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> > activeUniforms; // 1221
		{
			int nIndex; // 1223
			{
				VfxRegisterType_t regType; // 1231
				{
					int32 nBinding; // 1246
					DescriptorFlag_t nDescriptorFlag; // 1247
					CUtlMemory<VfxUniformInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
							int i);  // 1249
					VfxDescriptor_t::VfxDescriptor_t(
							int32 nDescriptorSet,
							int32 nBinding,
							DescriptorFlag_t nDescriptorFlag);  // 1253
					CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
					CUtlMemory<VfxDescriptor_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
						int i);  // 1252
					Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
					CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
							VfxDescriptor_t& src);  // 1253
					CUtlMemory<VfxUniformInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
							int i);  // 1254
				}
				{
					int32 nBinding; // 1262
					CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
					CUtlMemory<VfxDescriptor_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
						int i);  // 1252
					Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
					CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
							VfxDescriptor_t& src);  // 1263
					CUtlMemory<VfxUniformInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
							int i);  // 1263
					VfxDescriptor_t::VfxDescriptor_t(
							int32 nDescriptorSet,
							int32 nBinding);  // 1263
					CUtlMemory<VfxUniformInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
							int i);  // 1264
					Max<int>(const int& val1,
						const int& val2);  // 1267
				}
				CUtlMemory<VfxUniformInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
						int i);  // 1283
				CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
					int i);  // 1252
				Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
				CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
						VfxDescriptor_t& src);  // 1283
				VfxDescriptor_t::VfxDescriptor_t(
						int32 nDescriptorSet,
						int32 nBinding);  // 1283
				CUtlMemory<VfxUniformInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
						int i);  // 1284
				CUtlMemory<VfxUniformInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
						int i);  // 1275
				CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
					int i);  // 1252
				Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
				CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
						VfxDescriptor_t& src);  // 1275
				VfxDescriptor_t::VfxDescriptor_t(
						int32 nDescriptorSet,
						int32 nBinding);  // 1275
				CUtlMemory<VfxUniformInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
						int i);  // 1276
				CUtlMemory<VfxUniformInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
						int i);  // 1237
				CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
					int i);  // 1252
				Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
				CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
						VfxDescriptor_t& src);  // 1237
				VfxDescriptor_t::VfxDescriptor_t(
						int32 nDescriptorSet,
						int32 nBinding);  // 1237
				CUtlMemory<VfxUniformInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
						int i);  // 1238
				CUtlMemory<VfxUniformInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::operator[](
						int i);  // 1225
			}
			CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Count(); // 1223
		}
		CUtlMemory<VfxUniformInfo_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<VfxUniformInfo_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::CUtlVector(); // 1221
		CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 903
		CUtlMemory<VfxUniformInfo_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 1799
		{
			int i; // 1721
			CUtlMemory<VfxUniformInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 17
			VfxUniformInfo_t::~VfxUniformInfo_t(); // 1526
			Destruct<VfxUniformInfo_t>(VfxUniformInfo_t* pMemory); // 1723
		}
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::RemoveAll(); // 1798
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::Purge(); // 560
		ValidateAlignment<VfxUniformInfo_t>(void); // 508
		CUtlMemory<VfxUniformInfo_t, int>::Purge(); // 510
		CUtlMemory<VfxUniformInfo_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >::~CUtlVector(); // 1291
	}
	{
		uint32 outputVertices; // 1338
		uint32 outputTotalComponents; // 1338
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1349
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1343
	}
	{
		short unsigned int nIdx; // 1382
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::NumAllocated(); // 594
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement(); // 187
		CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement()(const CUtlString&, const CUtlString& this); // 1382
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
				short unsigned int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
				short unsigned int i);  // 667
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				short unsigned int i);  // 659
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				short unsigned int i);  // 190
		CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
				IndexType_t i);  // 1382
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1386
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 1386
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
			short unsigned int i);  // 92
		CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				IndexType_t i);  // 1386
	}
	CUtlMemory<CVfxParsedConstantBuffer::operator[](
			int i);  // 588
	CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
			int i);  // 1114
	CUtlMemory<CVfxParsedConstantBuffer::operator[](
			int i);  // 588
	CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
			int i);  // 1115
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1551
	CUtlBuffer::Purge(); // 1119
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 1142
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 1143
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 1144
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 1145
	CUtlMemory<ShaderStorageBufferBinding_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ShaderStorageBufferBinding_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::CUtlVector(); // 1146
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 1147
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 1148
	CUtlMemory<HiddenUAVCounter_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<HiddenUAVCounter_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::CUtlVector(); // 1149
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1150
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1402
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::RemoveAll(); // 1798
	CUtlMemory<HiddenUAVCounter_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<HiddenUAVCounter_t, int>::Purge(); // 903
	CUtlMemory<HiddenUAVCounter_t, int>::Purge(); // 1799
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::Purge(); // 560
	ValidateAlignment<HiddenUAVCounter_t>(void); // 508
	CUtlMemory<HiddenUAVCounter_t, int>::Purge(); // 510
	CUtlMemory<HiddenUAVCounter_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::~CUtlVector(); // 1402
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 1402
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 1402
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ShaderStorageBufferBinding_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 903
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 1799
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Purge(); // 560
	ValidateAlignment<ShaderStorageBufferBinding_t>(void); // 508
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 510
	CUtlMemory<ShaderStorageBufferBinding_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVector(); // 1402
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 1402
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 1402
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 1402
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 1402
	CVfxShaderFileVulkan::SetUseShaderStageName(
				bool bUseShaderStageName);  // 1372
	CHLSLShaderCompiler::GetRequiredSubgroupSize(); // 1379
	CVfxShaderFileVulkan::SetRequiredSubgroupSize(
				uint16 nRequiredSubgroupSize);  // 1379
	CUtlMemory<CUtlStringToken, int>::Base(); // 112
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 1392
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 1392
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1551
	CUtlBuffer::Purge(); // 1397
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1301
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1296
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1306
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1311
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1316
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1321
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1326
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1331
} /* size: 0, variables: 24, inline expansions: 165 (2712 bytes) */

// <000C038A> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:1404
void CVfxVulkan::SerializeCompiledShaderInfo(const VfxCompiledShaderInfo_t& compiledShaderInfo, CUtlBuffer& buf)
{
} /* size: 15 */

// <000C030C> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:1409
void CVfxVulkan::UnserializeCompiledShaderInfo(VfxCompiledShaderInfo_t* pCompiledShaderInfoOut, CUtlBuffer& buf)
{
} /* size: 15 */

// <000BFDA7> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:1414
// function calls: 22
void CVfxVulkan::CreateSharedContext()
{
	IShaderCompileContext::IShaderCompileContext(); // 66
	CUtlString::CUtlString(); // 66
	CThreadMutex::CThreadMutex(
			const char* pName);  // 66
	__shared_mutex_pthread::__shared_mutex_pthread(); // 419
	shared_mutex::shared_mutex(); // 66
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::ValidateGrowSize()(char const* const&, char const* const&)> this); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char const* co this); // 489
	CUtlRBTree<CUtlMap<char const::ResetDbgInfo()(char const* const&, char const* const&)>::Node_t, int, C this); // 491
	CUtlRBTree<CUtlMap<char const::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<char const::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 130
	CUtlRBTree<CUtlMap<char const::SetLessFunc(
			const LessFunc_t& func);  // 201
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 201
	CUtlMap<char const::SetLessFunc(
			LessFunc_t func);  // 150
	CUtlDict<CUtlBuffer::SetCompareType(
			EDictCompareType compareType);  // 142
	CUtlDict<CUtlBuffer::SetCompareType(
			EDictCompareType compareType);  // 132
	CUtlDict<CUtlBuffer::CUtlDict(
		int compareType,
		int growSize,
		int initSize);  // 66
	ShaderCompileContext::ShaderCompileContext(); // 1416
} /* size: 180, inline expansions: 22 (427 bytes) */

