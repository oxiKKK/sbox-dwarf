
//
// vulkan/descriptorsetvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 26
//

// <004B5968> vulkan/descriptorsetvulkan.cpp:32
// variable: 1
VkDescriptorBindingFlags VulkanDescriptorBindingFlagsFromRenderBindingFlags(RenderDescriptorBindingsFlags_t nDescriptorBindingFlags)
{
	VkDescriptorBindingFlags nVKDescriptorBindingFlags; // 34
} /* size: 0, variables: 1 */

// <004B5931> vulkan/descriptorsetvulkan.cpp:55
// variables: 2
int32 GetBindingStartOffset(RenderDescriptorType_t nDescriptorType)
{
	VkDescriptorType nVkDescriptorBindingType; // 57
	int32 nDescriptorSet; // 63
} /* size: 0, variables: 2 */

// <004B569A> vulkan/descriptorsetvulkan.cpp:71
// function calls: 11
void CDescriptorSetVulkan::CDescriptorSetVulkan(VkDevice pDevice, CPipelineManagerVulkan& pipelineManager)
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 88
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 88
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResource this); // 88
} /* size: 206, inline expansions: 11 (227 bytes) */

// <004B5669> vulkan/descriptorsetvulkan.cpp:71
void CDescriptorSetVulkan::CDescriptorSetVulkan(VkDevice pDevice, CPipelineManagerVulkan& pipelineManager)
{
} /* size: 0 */

// <004B521C> vulkan/descriptorsetvulkan.cpp:93
// variable: 1
// function calls: 22
void CDescriptorSetVulkan::~CDescriptorSetVulkan()
{
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResource this); // 96
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 96
} /* size: 219, inline expansions: 17 (693 bytes) */

// <004B51B5> vulkan/descriptorsetvulkan.cpp:93
void CDescriptorSetVulkan::~CDescriptorSetVulkan()
{
} /* size: 36 */

// <004B5133> vulkan/descriptorsetvulkan.cpp:99
void CDescriptorSetVulkan::Shutdown()
{
} /* size: 110 */

// <004B4E95> vulkan/descriptorsetvulkan.cpp:115
// variable: 1
// function calls: 12
void CDescriptorSetVulkan::ReleaseHandles()
{
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 1800
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 124
	ReleaseRefBuffers(const RenderDescriptorBinding_t* pDescriptorBindings,
				int32 nDescriptorBindings);  // 121
} /* size: 217, inline expansions: 7 (345 bytes) */

// <004B1564> vulkan/descriptorsetvulkan.cpp:136
// variables: 25
// function calls: 232
void CDescriptorSetVulkan::Create(VulkanDescriptorSetPool_t* pDescriptorSetPool, int32 nNumDescriptors, const RenderDescriptorDesc_t* pDescriptorDescs, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bFullyRewriteEachFrame)
{
	const bool  bUseDescriptorIndexing; // 150
	const char   __FUNCTION__; // 3390
	PipelineLayoutVulkan_t pipelineLayout; // 162
	uint32_t nDescriptorTypeMask; // 163
	{
		int32 nDesc; // 146
		operator&(RenderDescriptorBindingsFlags_t a,
				RenderDescriptorBindingsFlags_t b);  // 35
		operator&(RenderDescriptorBindingsFlags_t a,
				RenderDescriptorBindingsFlags_t b);  // 39
		operator&(RenderDescriptorBindingsFlags_t a,
				RenderDescriptorBindingsFlags_t b);  // 43
		operator&(RenderDescriptorBindingsFlags_t a,
				RenderDescriptorBindingsFlags_t b);  // 47
		VulkanDescriptorBindingFlagsFromRenderBindingFlags(RenderDescriptorBindingsFlags_t nDescriptorBindingFlags); // 148
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
	}
	{
		PipelineLayoutCreateInfo_t pipelineLayoutHash; // 165
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> > immutableSamplers; // 181
		VkDescriptorSetLayoutBinding* pLayoutBinding; // 183
		PipelineLayoutCreateHashFunctor_t hash; // 244
		{
			int32 nDescriptor; // 184
			{
				VkDescriptorType nDescriptorType; // 186
				int32 nBindingOffset; // 188
				uint32 nArraySize; // 191
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 194
				}
				{
					VkDescriptorBindingFlags* pDescriptorBindingFlags; // 199
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 200
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 203
					}
					CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
							int i);  // 199
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 199
					operator&(RenderDescriptorBindingsFlags_t a,
							RenderDescriptorBindingsFlags_t b);  // 35
					operator&(RenderDescriptorBindingsFlags_t a,
							RenderDescriptorBindingsFlags_t b);  // 39
					operator&(RenderDescriptorBindingsFlags_t a,
							RenderDescriptorBindingsFlags_t b);  // 43
					operator&(RenderDescriptorBindingsFlags_t a,
							RenderDescriptorBindingsFlags_t b);  // 47
					VulkanDescriptorBindingFlagsFromRenderBindingFlags(RenderDescriptorBindingsFlags_t nDescriptorBindingFlags); // 201
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1201
					CopyConstruct<unsigned int>(unsigned int* pMemory,
									const unsigned int& src);  // 1201
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							const unsigned int& src);  // 202
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 203
				}
				{
					bool bIsAnsitropicFilter; // 208
					PipelineLayoutImmutableSampler_t immutableSampler; // 211
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
					}
					CSamplerStateDescBase::GetFilterMode(); // 208
					PipelineLayoutImmutableSampler_t::PipelineLayoutImmutableSampler_t(); // 211
					CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Element(
						int i);  // 1201
					CopyConstruct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory,
											const PipelineLayoutImmutableSampler_t& src);  // 1201
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::AddToTail(
							const PipelineLayoutImmutableSampler_t& src);  // 220
					Min<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 800
					CSamplerStateDescBase::SetMaxAnisotropy(
							uint32 nMaxAniso);  // 218
				}
				GetBindingStartOffset(RenderDescriptorType_t nDescriptorType); // 188
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 227
		}
		CUtlMemory<int, int>::IsExternallyAllocated(); // 859
		CUtlMemory<int, int>::IsExternallyAllocated(); // 861
		CUtlMemory<int, int>::Grow(
			int num);  // 806
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount(
			int count);  // 167
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 255
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 530
		CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this); // 255
		CUtlMemory<VkPushConstantRange, int>::ValidateGrowSize(); // 475
		CUtlMemory<VkPushConstantRange, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVector(); // 255
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(); // 255
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 530
		CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 255
		PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(); // 165
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int i);  // 170
		CUtlMemory<VkPushConstantRange, int>::NumAllocated(); // 782
		CUtlMemory<VkPushConstantRange, int>::IsGrowable(); // 823
		CUtlMemory<VkPushConstantRange, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkPushConstantRange, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkPushConstantRange, int>::Grow(
			int num);  // 806
		CUtlMemory<VkPushConstantRange, int>::Base(); // 112
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 368
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::SetCount(
			int count);  // 172
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(); // 181
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 183
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int i);  // 183
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 102
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::begin(); // 1344
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<PipelineLayoutImmutableSampler_t>(const PipelineLayoutImmutableSampler_t* pFrom,
									const PipelineLayoutImmutableSampler_t* pFromEnd,
									PipelineLayoutImmutableSampler_t* pTo);  // 173
		UtlTraitsCopyRange<PipelineLayoutImmutableSampler_t>(const PipelineLayoutImmutableSampler_t* pFrom,
									const PipelineLayoutImmutableSampler_t* pFromEnd,
									PipelineLayoutImmutableSampler_t* pTo);  // 1344
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CopyArray(
				const PipelineLayoutImmutableSampler_t* pArray,
				int size);  // 230
		PipelineLayoutImmutableSampler_t::PipelineLayoutImmutableSampler_t(); // 234
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 235
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 241
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 511
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 512
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 513
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 514
		CUtlMemory<int, int>::Base(); // 113
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 515
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 515
		{
			int16 nDescriptorSet; // 516
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 518
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this,
					int i);  // 520
			CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
			CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 520
			HashCombine(uint32& nSeed,
					uint32 nHash);  // 520
			Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 521
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int,  this,
					int i);  // 523
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 523
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 525
			CUtlMemory<unsigned int, int>::Base(); // 113
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 525
			HashCombine(uint32& nSeed,
					uint32 nHash);  // 525
		}
		CUtlMemory<VkPushConstantRange, int>::Base(); // 113
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 532
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 532
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 113
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 536
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 536
		PipelineLayoutCreateHashFunctor_t::operator(
				const PipelineLayoutCreateInfo_t& pipelineLayoutCreateInfo);  // 245
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 903
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 1799
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Purge(); // 560
		ValidateAlignment<PipelineLayoutImmutableSampler_t>(void); // 508
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 510
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVector(); // 248
		{
			int i; // 1721
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				int i);  // 1723
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
			CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<unsigned int, int>::Purge(); // 903
			CUtlMemory<unsigned int, int>::Purge(); // 1799
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
			ValidateAlignment<unsigned int>(void); // 508
			CUtlMemory<unsigned int, int>::Purge(); // 510
			CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1526
			Destruct<CUtlVector<unsigned int> >(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pMemory); // 1723
		}
		RemoveAll(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 1798
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 903
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 560
		ValidateAlignment<CUtlVector<unsigned int> >(void); // 508
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 510
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 410
		~CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 255
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::RemoveAll(); // 1798
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 903
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 1799
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Purge(); // 560
		ValidateAlignment<PipelineLayoutImmutableSampler_t>(void); // 508
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 510
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVector(); // 255
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::RemoveAll(); // 1798
		CUtlMemory<VkPushConstantRange, int>::IsExternallyAllocated(); // 905
		CUtlMemory<VkPushConstantRange, int>::Purge(); // 903
		CUtlMemory<VkPushConstantRange, int>::Purge(); // 1799
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Purge(); // 560
		ValidateAlignment<VkPushConstantRange>(void); // 508
		CUtlMemory<VkPushConstantRange, int>::Purge(); // 510
		CUtlMemory<VkPushConstantRange, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::~CUtlVector(); // 255
		{
			int i; // 1721
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int i);  // 1723
			CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::RemoveAll(); // 1798
			CUtlMemory<VkDescriptorSetLayoutBinding, int>::IsExternallyAllocated(); // 905
			CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 903
			CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 1799
			CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Purge(); // 560
			ValidateAlignment<VkDescriptorSetLayoutBinding>(void); // 508
			CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 510
			CUtlMemory<VkDescriptorSetLayoutBinding, int>::~CUtlMemory(); // 562
			CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVectorBase(); // 410
			CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVector(); // 1526
			Destruct<CUtlVector<VkDescriptorSetLayoutBinding> >(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pMemory); // 1723
		}
		RemoveAll(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 1798
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Purge(); // 903
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 560
		ValidateAlignment<CUtlVector<VkDescriptorSetLayoutBinding> >(void); // 508
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Purge(); // 510
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 410
		~CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this); // 255
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 255
		PipelineLayoutCreateInfo_t::~PipelineLayoutCreateInfo_t(); // 248
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				int i);  // 178
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 140
	CRenderDeviceVulkan::EXTDescriptorIndexingEnabled(); // 153
	CRenderDeviceVulkan::EXTDescriptorIndexingEnabled(); // 154
	RenderDescriptorDesc_t::RenderDescriptorDesc_t(); // 252
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 253
} /* size: 0, variables: 4, inline expansions: 6 (84 bytes) */

// <004B1421> vulkan/descriptorsetvulkan.cpp:276
// variables: 7
void CDescriptorSetVulkan::AllocateVulkanDescriptorSet(VulkanDescriptorSetPool_t* pDescriptorSetPool)
{
	const char   __FUNCTION__; // 3495
	VkDescriptorSetAllocateInfo allocInfo; // 286
	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT descriptorSetVariableDescriptorCount; // 293
	VkDescriptorSet pDescriptorSet; // 304
	VkResult nResult; // 305
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 5 */

// <004A95CA> vulkan/descriptorsetvulkan.cpp:512
// variable: 1
int ReleaseDescriptorSetRef<CConstantBufferVulkan>(CConstantBufferVulkan* pBuffer)
{
	int nCount; // 514
} /* size: 0, variables: 1 */

// <004A9591> vulkan/descriptorsetvulkan.cpp:512
// variable: 1
int ReleaseDescriptorSetRef<CVertexBufferVulkan>(CVertexBufferVulkan* pBuffer)
{
	int nCount; // 514
} /* size: 0, variables: 1 */

// <004A9558> vulkan/descriptorsetvulkan.cpp:512
// variable: 1
int ReleaseDescriptorSetRef<CBaseAccelerationStructureVulkan>(CBaseAccelerationStructureVulkan* pBuffer)
{
	int nCount; // 514
} /* size: 0, variables: 1 */

// <004AD413> vulkan/descriptorsetvulkan.cpp:526
// variables: 17
// function calls: 47
void AddOrReleaseRefBuffersInternal(const RenderDescriptorBinding_t* pDescriptorBindings, int32 nDescriptorBindings, bool bAddRef)
{
	const char   __FUNCTION__; // 3537
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		int32 i; // 529
		{
			const RenderDescriptorBinding_t& binding; // 531
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
			}
			{
				ConstantBuffer_t* pBuf; // 539
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 540
				}
				{
					int32 nCount; // 549
					ThreadInterlockedExchangeAdd(volatile int32* p,
									int32 value);  // 660
					CInterlockedIntT<int, 4>::AtomicAdd(
							int add);  // 39
					CDescriptorSetReferenced::ReleaseDescriptorSetRef(); // 514
					CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
					CRenderDeviceBase::GetContextFrameCount(); // 521
					CConstantBufferVulkan::MarkUsed(
						uint nFrameNumber);  // 521
					ReleaseDescriptorSetRef<CConstantBufferVulkan>(CConstantBufferVulkan* pBuffer); // 549
					CDescriptorSetReferenced::IsDeleted(); // 550
				}
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 36
				CDescriptorSetReferenced::AddDescriptorSetRef(); // 545
			}
			{
				CVertexBufferVulkan* pBuffer; // 562
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 563
				}
				{
					int32 nCount; // 572
					ThreadInterlockedExchangeAdd(volatile int32* p,
									int32 value);  // 660
					CInterlockedIntT<int, 4>::AtomicAdd(
							int add);  // 39
					CDescriptorSetReferenced::ReleaseDescriptorSetRef(); // 514
					Max<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 80
					CRenderResource::MarkUsed(
						uint nFrameNumber);  // 521
					CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
					CRenderDeviceBase::GetContextFrameCount(); // 521
					ReleaseDescriptorSetRef<CVertexBufferVulkan>(CVertexBufferVulkan* pBuffer); // 572
					CDescriptorSetReferenced::IsDeleted(); // 573
				}
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 36
				CDescriptorSetReferenced::AddDescriptorSetRef(); // 568
			}
			{
				CVertexBufferVulkan* pBuffer; // 583
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 584
				}
				{
					int32 nCount; // 593
					ThreadInterlockedExchangeAdd(volatile int32* p,
									int32 value);  // 660
					CInterlockedIntT<int, 4>::AtomicAdd(
							int add);  // 39
					CDescriptorSetReferenced::ReleaseDescriptorSetRef(); // 514
					Max<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 80
					CRenderResource::MarkUsed(
						uint nFrameNumber);  // 521
					CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
					CRenderDeviceBase::GetContextFrameCount(); // 521
					ReleaseDescriptorSetRef<CVertexBufferVulkan>(CVertexBufferVulkan* pBuffer); // 593
					CDescriptorSetReferenced::IsDeleted(); // 594
				}
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 36
				CDescriptorSetReferenced::AddDescriptorSetRef(); // 589
			}
			{
				CBaseAccelerationStructureVulkan* pAccelStruct; // 604
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 605
				}
				{
					int32 nCount; // 614
					ThreadInterlockedExchangeAdd(volatile int32* p,
									int32 value);  // 660
					CInterlockedIntT<int, 4>::AtomicAdd(
							int add);  // 39
					CDescriptorSetReferenced::ReleaseDescriptorSetRef(); // 514
					Max<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 80
					CRenderResource::MarkUsed(
						uint nFrameNumber);  // 521
					CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
					CRenderDeviceBase::GetContextFrameCount(); // 521
					ReleaseDescriptorSetRef<CBaseAccelerationStructureVulkan>(CBaseAccelerationStructureVulkan* pBuffer); // 614
					CDescriptorSetReferenced::IsDeleted(); // 615
				}
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 36
				CDescriptorSetReferenced::AddDescriptorSetRef(); // 610
			}
		}
	}
} /* size: 0, variables: 1 */

// <004B92C0> vulkan/descriptorsetvulkan.cpp:634
void AddRefBuffers(const RenderDescriptorBinding_t* pDescriptorBindings, int32 nDescriptorBindings)
{
} /* size: 0 */

// <004B9320> vulkan/descriptorsetvulkan.cpp:640
void ReleaseRefBuffers(const RenderDescriptorBinding_t* pDescriptorBindings, int32 nDescriptorBindings)
{
} /* size: 0 */

// <004AC9BC> vulkan/descriptorsetvulkan.cpp:648
// variables: 3
// function calls: 40
void CDescriptorSetVulkan::WriteDescriptorSetData(const RenderDescriptorBinding_t* pDescriptorBindings, int32 nNumDescriptorBindings)
{
	RenderDescriptorBinding_t* pNewDescriptorBindings; // 653
	{
		int32 nBinding; // 682
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 684
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 684
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
				int i);  // 687
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 570
		CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 239
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 687
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
				int i);  // 688
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 688
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 654
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 1800
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 677
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 844
	DescriptorBindParams_t(const union DescriptorBindParams_t* this); // 759
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 756
	RenderDescriptorBinding_t::RenderDescriptorBinding_t(); // 653
	AddRefBuffers(const RenderDescriptorBinding_t* pDescriptorBindings,
			int32 nDescriptorBindings);  // 659
	ReleaseRefBuffers(const RenderDescriptorBinding_t* pDescriptorBindings,
				int32 nDescriptorBindings);  // 666
} /* size: 884, variables: 1, inline expansions: 18 (821 bytes) */

// <004AC876> vulkan/descriptorsetvulkan.cpp:698
// variables: 4
// function call: 1
void CDescriptorSetVulkan::CopyDescriptorSetData(VkDescriptorSet pDynamicDescriptorSet)
{
	VkCopyDescriptorSet* pDescriptorCopies; // 706
	const RenderDescriptorBinding_t* pBinding; // 707
	{
		int32 nDescriptor; // 708
		{
			int32 nBindingOffset; // 710
			GetBindingStartOffset(RenderDescriptorType_t nDescriptorType); // 710
		}
	}
} /* size: 408, variables: 2 */

// <004AC665> vulkan/descriptorsetvulkan.cpp:738
// variables: 7
// function calls: 2
void CDescriptorSetVulkan::Rebake()
{
	VulkanDescriptorSetPool_t* pPrevDescriptorSetPool; // 755
	const char   __FUNCTION__; // 3390
	VkDescriptorSet pDescriptorSet; // 758
	VkDescriptorSetAllocateInfo allocInfo; // 759
	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT descriptorSetVariableDescriptorCount; // 766
	VkResult nResult; // 780
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	CRenderDeviceVulkan::GetCurrentStaticDescriptorPool(); // 784
	CRenderDeviceVulkan::GetCurrentStaticDescriptorPool(); // 800
} /* size: 0, variables: 6, inline expansions: 2 (24 bytes) */

// <004AC376> vulkan/descriptorsetvulkan.cpp:834
// variables: 3
// function calls: 11
void CDescriptorSetVulkan::RemoveFromTextureReferences()
{
	const char   __FUNCTION__; // 3495
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 848
	}
	{
		int32 nDescriptor; // 849
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 851
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
				int i);  // 851
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 851
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 853
	}
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoF this); // 848
} /* size: 0, variables: 1, inline expansions: 1 (6 bytes) */

// <004ABF35> vulkan/descriptorsetvulkan.cpp:861
// variables: 4
// function calls: 17
void CDescriptorSetVulkan::RemoveReferencesToTextureInBindings(HRenderTexture hTexture)
{
	bool bFound; // 875
	const char   __FUNCTION__; // 3558
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 876
	}
	{
		int32 nDescriptor; // 877
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
				int i);  // 879
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator==(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 879
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 884
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 884
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 885
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
				int i);  // 885
		CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 239
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 885
	}
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoF this); // 876
} /* size: 0, variables: 2, inline expansions: 1 (6 bytes) */

// <004ABCFE> vulkan/descriptorsetvulkan.cpp:893
// variable: 1
// function calls: 11
void CDescriptorSetVulkan::RemoveReferencesToAllTexturesInBindings()
{
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 1800
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 895
} /* size: 178, inline expansions: 6 (338 bytes) */

// <004ABC52> vulkan/descriptorsetvulkan.cpp:899
// function calls: 2
void CDescriptorSetVulkan::AddLayoutRef()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 901
} /* size: 15, inline expansions: 2 (20 bytes) */

// <004ABBA6> vulkan/descriptorsetvulkan.cpp:905
// function calls: 2
void CDescriptorSetVulkan::ReleaseLayoutRef()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 907
} /* size: 15, inline expansions: 2 (20 bytes) */

// <004ABB45> vulkan/descriptorsetvulkan.cpp:911
// function call: 1
void CDescriptorSetVulkan::LayoutRefCount()
{
	CInterlockedIntT<int, 4>::operator int(); // 913
} /* size: 8, inline expansions: 1 (3 bytes) */

// <004ABA96> vulkan/descriptorsetvulkan.cpp:917
// variables: 2
// function call: 1
void CDescriptorSetVulkan::GetLayoutBindingFlags()
{
	const char   __FUNCTION__; // 3453
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 922
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 920
} /* size: 0, variables: 1, inline expansions: 1 (6 bytes) */

