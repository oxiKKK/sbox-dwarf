
//
// vulkan/pipelinemgrvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 67
//	classes: 2
//	structs: 17
//	union: 1
//

// <0060A669> vulkan/pipelinemgrvulkan.h:84
// member variables: 8
// struct size: 4
struct PipelineColorBlendCreateInfo_t {
	uint32_t m_bBlendEnable:1; /* 0: 0 4 */
	uint32_t m_nSrcBlendColor:5; /* 0: 1 4 */
	uint32_t m_nDestBlendColor:5; /* 0: 6 4 */
	uint32_t m_nBlendOpColor:3; /* 0:11 4 */
	uint32_t m_nSrcBlendAlpha:5; /* 0:14 4 */
	uint32_t m_nDestBlendAlpha:5; /* 0:19 4 */
	uint32_t m_nBlendOpAlpha:3; /* 0:24 4 */
	uint32_t m_nChannelWriteMask:4; /* 0:27 4 */
};

// <0060A707> vulkan/pipelinemgrvulkan.h:96
// member variables: 3
// struct size: 4
struct PipelineVertexInputBindingCreateInfo_t {
	uint32_t m_nBinding:4; /* 0: 0 4 */
	uint32_t m_nStrideInBytes:16; /* 0: 4 4 */
	uint32_t m_nInputRate:1; /* 0:20 4 */
};

// <0060A74B> vulkan/pipelinemgrvulkan.h:103
// member variables: 4
// struct size: 4
struct PipelineVertexInputAttributeCreateInfo_t {
	uint32_t m_nLocation:4; /* 0: 0 4 */
	uint32_t m_nBinding:4; /* 0: 4 4 */
	uint32_t m_nFormat:8; /* 0: 8 4 */
	uint32_t m_nOffsetInBytes:16; /* 0:16 4 */
};

// <0060A7A1> vulkan/pipelinemgrvulkan.h:111
// member variables: 13
// struct size: 8
struct DepthStencilBits_t {
	uint32_t m_bDepthTestEnable:1; /* 0: 0 4 */
	uint32_t m_bDepthWriteEnable:1; /* 0: 1 4 */
	uint32_t m_nDepthCompareOp:3; /* 0: 2 4 */
	uint32_t m_bStencilTestEnable:1; /* 0: 5 4 */
	uint32_t m_nFrontStencilFailOp:3; /* 0: 6 4 */
	uint32_t m_nFrontStencilPassOp:3; /* 0: 9 4 */
	uint32_t m_nFrontStencilDepthFailOp:3; /* 0:12 4 */
	uint32_t m_nFrontStencilCompareOp:3; /* 0:15 4 */
	uint32_t m_nBackStencilFailOp:3; /* 0:18 4 */
	uint32_t m_nBackStencilPassOp:3; /* 0:21 4 */
	uint32_t m_nBackStencilDepthFailOp:3; /* 0:24 4 */
	uint32_t m_nBackStencilCompareOp:3; /* 0:27 4 */
	uint32_t :0;
	uint32_t m_nDepthStencilFormat:8; /* 4: 0 4 */
};

// <0060A899> vulkan/pipelinemgrvulkan.h:128
// member functions: 2
// member variables: 27
// struct size: 272
struct PipelineCreateInfo_t {
	/* vulkan/pipelinemgrvulkan.h:231 */
	union {
		DepthStencilBits_t m_depthStencilBits; /* 0 8 */
		uint64_t m_nDepthStencilAllBits; /* 0 8 */
	};
	/* vulkan/pipelinemgrvulkan.h:130 */
	void PipelineCreateInfo_t(PipelineCreateInfo_t* );
	/* vulkan/pipelinemgrvulkan.h:133 */
	void Dump(const PipelineCreateInfo_t* );
	uint64 m_nCachedHash; /* 0 8 */
	uint32_t m_nVertexBindingCount:4; /* 8: 0 4 */
	uint32_t m_nVertexAttributeCount:4; /* 8: 4 4 */
	uint32_t m_nPrimitiveTopology:4; /* 8: 8 4 */
	uint32_t m_bDepthClipEnable:1; /* 8:12 4 */
	uint32_t m_nFillMode:2; /* 8:13 4 */
	uint32_t m_nCullMode:2; /* 8:15 4 */
	uint32_t m_nFrontFace:1; /* 8:17 4 */
	uint32_t m_bAlphaToCoverageEnable:1; /* 8:18 4 */
	uint32_t m_nAttachmentCount:4; /* 8:19 4 */
	uint32_t m_nRasterSamples:5; /* 8:23 4 */
	uint32_t m_nViewportAndScissorCount:4; /* 8:28 4 */
	uint32_t m_nPatchControlPoints:8; /* 12: 0 4 */
	uint32_t m_nRenderPassSubPass:5; /* 12: 8 4 */
	uint32_t m_nRenderPassSubPassCount:5; /* 12:13 4 */
	uint32_t m_bIsComputeShaderDispatch:1; /* 12:18 4 */
	uint32_t m_nStaticDescriptorSetCount:3; /* 12:19 4 */
	uint32_t m_bUseGraphicsPipelineLibrary:1; /* 12:22 4 */
	VkSampleMask m_nSampleMask; /* 16 4 */
	uint64_t m_nShaderHash[4]; /* 24 32 */
	PipelineColorBlendCreateInfo_t m_cbAttachmentState[8]; /* 56 32 */
	PipelineVertexInputBindingCreateInfo_t m_bindingDescriptions[16]; /* 88 64 */
	PipelineVertexInputAttributeCreateInfo_t m_attributeDescriptions[16]; /* 152 64 */
	uint32 m_nUnusedVertexRateBindingSlots; /* 216 4 */
	VkFormat m_nColorRendertargetFormat[4]; /* 220 16 */
	uint32_t m_nStaticDescriptorSetLayoutHash[7]; /* 236 28 */
	union {
		DepthStencilBits_t m_depthStencilBits; /* 264 8 */
		uint64_t m_nDepthStencilAllBits; /* 264 8 */
	}; /* 264 8 */
};

// <00740A34> vulkan/pipelinemgrvulkan.h:130
void PipelineCreateInfo_t::PipelineCreateInfo_t()
{
} /* size: 0 */

// <00740A1B> vulkan/pipelinemgrvulkan.h:130
inline void PipelineCreateInfo_t::PipelineCreateInfo_t()
{
} /* size: 0 */

// <009A91DD> vulkan/pipelinemgrvulkan.h:241
void PipelineLayoutImmutableSampler_t::PipelineLayoutImmutableSampler_t()
{
} /* size: 0 */

// <009A91C0> vulkan/pipelinemgrvulkan.h:241
inline void PipelineLayoutImmutableSampler_t::PipelineLayoutImmutableSampler_t()
{
} /* size: 0 */

// <00494C7D> vulkan/pipelinemgrvulkan.h:241
// member function: 1
// member variables: 3
// struct size: 24
struct PipelineLayoutImmutableSampler_t {
	uint16_t m_nDescriptorSetIndex; /* 0 2 */
	uint16_t m_nLayoutBindingIndex; /* 2 2 */
	CSamplerStateDesc m_samplerDesc; /* 4 20 */
	void PipelineLayoutImmutableSampler_t(PipelineLayoutImmutableSampler_t* );
};

// <009FF40A> vulkan/pipelinemgrvulkan.h:255
void PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t()
{
} /* size: 0 */

// <009FF3ED> vulkan/pipelinemgrvulkan.h:255
inline void PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t()
{
} /* size: 0 */

// <009FF3D6> vulkan/pipelinemgrvulkan.h:255
void PipelineLayoutCreateInfo_t::~PipelineLayoutCreateInfo_t()
{
} /* size: 0 */

// <009FF3B9> vulkan/pipelinemgrvulkan.h:255
inline void PipelineLayoutCreateInfo_t::~PipelineLayoutCreateInfo_t()
{
} /* size: 0 */

// <00730EC4> vulkan/pipelinemgrvulkan.h:255
// variable: 1
// function calls: 59
void PipelineLayoutCreateInfo_t::~PipelineLayoutCreateInfo_t()
{
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
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 255
} /* size: 0, inline expansions: 46 (0 bytes) */

// <0071B3B2> vulkan/pipelinemgrvulkan.h:255
// function calls: 114
void PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(const PipelineLayoutCreateInfo_t &)
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 573
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
	CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 574
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 105
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 105
	CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 574
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 565
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 452
	CUtlVector<int, CUtlMemory<int, int> >::operator=(
			const CUtlVector<int, CUtlMemory<int, int> >& src);  // 434
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			const CUtlVector<int, CUtlMemory<int, int> >& src);  // 255
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int growSize,
			int initCapacity);  // 434
	Count(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this); // 573
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 102
	begin(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 574
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Base(); // 113
	Base(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this); // 105
	Count(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this); // 105
	end(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this); // 574
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 573
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 102
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::begin(); // 574
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 105
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 105
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding* pFrom,
							const VkDescriptorSetLayoutBinding* pFromEnd,
							VkDescriptorSetLayoutBinding* pTo);  // 574
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
			const CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& other);  // 565
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
			const CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& other);  // 452
	CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
			const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& src);  // 209
	UtlTraitsCopyRange<CUtlVector<VkDescriptorSetLayoutBinding> >(const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pFrom,
									const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pFromEnd,
									CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pTo);  // 200
	UtlTraitsCopyRange<CUtlVector<VkDescriptorSetLayoutBinding> >(const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pFrom,
									const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pFromEnd,
									CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pTo);  // 574
	operator=(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory other);  // 565
	operator=(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory other);  // 452
	operator=(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this,
			const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt src);  // 434
	CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this,
			const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt src);  // 255
	CUtlMemory<VkPushConstantRange, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkPushConstantRange, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Count(); // 573
	CUtlMemory<VkPushConstantRange, int>::Base(); // 112
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 102
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::begin(); // 574
	CUtlMemory<VkPushConstantRange, int>::Base(); // 113
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 105
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Count(); // 105
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<VkPushConstantRange>(const VkPushConstantRange* pFrom,
						const VkPushConstantRange* pFromEnd,
						VkPushConstantRange* pTo);  // 574
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator=(
			const CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& other);  // 565
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator=(
			const CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& other);  // 452
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator=(
			const CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& src);  // 434
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVector(
			const CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& src);  // 255
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Count(); // 573
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 113
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 105
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Count(); // 105
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::end(); // 574
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 102
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::begin(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<PipelineLayoutImmutableSampler_t>(const PipelineLayoutImmutableSampler_t* pFrom,
								const PipelineLayoutImmutableSampler_t* pFromEnd,
								PipelineLayoutImmutableSampler_t* pTo);  // 574
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
			const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& other);  // 565
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
			const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& other);  // 452
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
			const CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& src);  // 434
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(
			const CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& src);  // 255
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int growSize,
			int initCapacity);  // 434
	Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 573
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 102
	begin(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 574
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Base(); // 113
	Base(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 105
	Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 105
	end(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 574
	UtlTraitsCopyRange<CUtlVector<unsigned int> >(const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pFrom,
							const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pFromEnd,
							CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pTo);  // 574
	operator=(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe other);  // 565
	operator=(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe other);  // 452
	operator=(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this,
			const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory src);  // 434
	CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this,
			const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory src);  // 255
} /* size: 731, inline expansions: 114 (3373 bytes) */

// <0071B390> vulkan/pipelinemgrvulkan.h:255
inline void PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(const PipelineLayoutCreateInfo_t &)
{
} /* size: 0 */

// <006FE152> vulkan/pipelinemgrvulkan.h:255
void PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(PipelineLayoutCreateInfo_t &)
{
} /* size: 0 */

// <006FE130> vulkan/pipelinemgrvulkan.h:255
inline void PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(PipelineLayoutCreateInfo_t &)
{
} /* size: 0 */

// <0067C38C> vulkan/pipelinemgrvulkan.h:255
// variables: 2
// function calls: 73
void PipelineLayoutCreateInfo_t::~PipelineLayoutCreateInfo_t()
{
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
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 255
} /* size: 411, inline expansions: 47 (1559 bytes) */

// <0049AAC8> vulkan/pipelinemgrvulkan.h:255
// member functions: 2
// member variables: 10
// struct size: 168
struct PipelineLayoutCreateInfo_t {
	uint8_t m_nDescriptorSets; /* 0 1 */
	uint8_t m_nNumPushConstantRanges; /* 1 1 */
	uint8_t m_nNumImmutableSamplers; /* 2 1 */
	uint8_t m_nUseNullDescriptorSetLayoutMask; /* 3 1 */
	VkPipelineLayoutCreateFlags m_nLayoutCreateFlags; /* 4 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_numLayoutBindingsPerSet; /* 8 32 */
	CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int> > m_layoutBindings; /* 40 32 */
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> > m_pushConstantRanges; /* 72 32 */
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> > m_immutableSamplers; /* 104 32 */
	CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int> > m_layoutBindingFlags; /* 136 32 */
	void ~PipelineLayoutCreateInfo_t(PipelineLayoutCreateInfo_t* );
	void PipelineLayoutCreateInfo_t(PipelineLayoutCreateInfo_t* );
};

// <0049ABAF> vulkan/pipelinemgrvulkan.h:277
// member variables: 3
// struct size: 24
struct PipelineLayoutVulkan_t {
	int16 m_nNumDescriptorSets; /* 0 2 */
	VkDescriptorSetLayout * m_ppDescriptorSetLayouts; /* 8 8 */
	VkPipelineLayout m_pPipelineLayout; /* 16 8 */
};

// <006C1852> vulkan/pipelinemgrvulkan.h:289
union DescriptorBindingUnion_t {
	VkDescriptorImageInfo m_image; /* 0 24 */
	VkDescriptorBufferInfo m_buffer; /* 0 24 */
	VkBufferView m_texelBufferView; /* 0 8 */
};

// <006C1889> vulkan/pipelinemgrvulkan.h:299
// member function: 1
// struct size: 1
struct PipelineCreateHashFunctor_t {
	/* vulkan/pipelinemgrvulkan.h:301 */
	unsigned int operator()(const PipelineCreateHashFunctor_t* , const PipelineCreateInfo_t& );
};

// <006C18D2> vulkan/pipelinemgrvulkan.h:308
// member function: 1
// struct size: 1
struct PipelineLibraryVertexInputCreateHashFunctor_t {
	/* vulkan/pipelinemgrvulkan.h:310 */
	unsigned int operator()(const PipelineLibraryVertexInputCreateHashFunctor_t* , const PipelineCreateInfo_t& );
};

// <007409C1> vulkan/pipelinemgrvulkan.h:310
// variables: 4
inline void PipelineLibraryVertexInputCreateHashFunctor_t::operator(const PipelineCreateInfo_t& pipelineCreateInfo)
{
	uint64 nHash; // 312
	uint32 nVertexBindingCount; // 315
	uint32 nVertexAttributeCount; // 316
	uint32 nPrimitiveTopology; // 317
} /* size: 0, variables: 4 */

// <006C1915> vulkan/pipelinemgrvulkan.h:330
// member function: 1
// struct size: 1
struct PipelineLibraryVertexInputCreateEqualFunctor_t {
	/* vulkan/pipelinemgrvulkan.h:332 */
	bool operator()(const PipelineLibraryVertexInputCreateEqualFunctor_t* , const PipelineCreateInfo_t& , const PipelineCreateInfo_t& );
};

// <00740981> vulkan/pipelinemgrvulkan.h:332
// variable: 1
inline void PipelineLibraryVertexInputCreateEqualFunctor_t::operator(const PipelineCreateInfo_t& rhs, const PipelineCreateInfo_t& lhs)
{
	int nCmpResult; // 349
} /* size: 0, variables: 1 */

// <006C195D> vulkan/pipelinemgrvulkan.h:370
// member function: 1
// struct size: 1
struct PipelineLibraryFragmentOutputCreateHashFunctor_t {
	/* vulkan/pipelinemgrvulkan.h:372 */
	unsigned int operator()(const PipelineLibraryFragmentOutputCreateHashFunctor_t* , const PipelineCreateInfo_t& );
};

// <00747109> vulkan/pipelinemgrvulkan.h:372
// variables: 6
// function calls: 6
void PipelineCreateInfo_t& pipelineCreateInfo, const PipelineLibraryFragmentOutputCreateHashFunctor_t::operator()(const PipelineCreateInfo_t& pipelineCreateInfo, const PipelineLibraryFragmentOutputCreateHashFunctor_t* this)
{
	uint64 nHash; // 374
	uint32 nAttachmentCount; // 378
	uint32 nRasterSamples; // 383
	uint32 nSampleMask; // 385
	bool bAlphaToCoverage; // 387
	uint32 nDepthStencilFormat; // 391
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 380
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 384
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 386
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 388
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 392
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 393
} /* size: 439, variables: 6, inline expansions: 6 (159 bytes) */

// <0074090D> vulkan/pipelinemgrvulkan.h:372
// variables: 6
inline void PipelineLibraryFragmentOutputCreateHashFunctor_t::operator(const PipelineCreateInfo_t& pipelineCreateInfo)
{
	uint64 nHash; // 374
	uint32 nAttachmentCount; // 378
	uint32 nRasterSamples; // 383
	uint32 nSampleMask; // 385
	bool bAlphaToCoverage; // 387
	uint32 nDepthStencilFormat; // 391
} /* size: 0, variables: 6 */

// <006C19A0> vulkan/pipelinemgrvulkan.h:401
// member function: 1
// struct size: 1
struct PipelineLibraryFragmentOutputCreateEqualFunctor_t {
	/* vulkan/pipelinemgrvulkan.h:403 */
	bool operator()(const PipelineLibraryFragmentOutputCreateEqualFunctor_t* , const PipelineCreateInfo_t& , const PipelineCreateInfo_t& );
};

// <007408BE> vulkan/pipelinemgrvulkan.h:403
// variables: 2
inline void PipelineLibraryFragmentOutputCreateEqualFunctor_t::operator(const PipelineCreateInfo_t& rhs, const PipelineCreateInfo_t& lhs)
{
	int nCmpResult; // 410
	{
		uint32_t nAttachmentCount; // 421
	}
} /* size: 0, variables: 1 */

// <006C19E8> vulkan/pipelinemgrvulkan.h:452
// member function: 1
// struct size: 1
struct PipelineCreateEqualFunctor_t {
	/* vulkan/pipelinemgrvulkan.h:454 */
	bool operator()(const PipelineCreateEqualFunctor_t* , const PipelineCreateInfo_t& , const PipelineCreateInfo_t& );
};

// <0074088B> vulkan/pipelinemgrvulkan.h:454
inline void PipelineCreateEqualFunctor_t::operator(const PipelineCreateInfo_t& rhs, const PipelineCreateInfo_t& lhs)
{
} /* size: 0 */

// <0049ABEE> vulkan/pipelinemgrvulkan.h:506
// member function: 1
// struct size: 1
struct PipelineLayoutCreateHashFunctor_t {
	/* vulkan/pipelinemgrvulkan.h:508 */
	unsigned int operator()(const PipelineLayoutCreateHashFunctor_t* , const PipelineLayoutCreateInfo_t& );
};

// <0074696C> vulkan/pipelinemgrvulkan.h:508
// variables: 2
// function calls: 29
void PipelineLayoutCreateInfo_t& pipelineLayoutCreateInfo, const PipelineLayoutCreateHashFunctor_t::operator()(const PipelineLayoutCreateInfo_t& pipelineLayoutCreateInfo, const PipelineLayoutCreateHashFunctor_t* this)
{
	uint32 nHash; // 510
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
} /* size: 618, variables: 1, inline expansions: 13 (178 bytes) */

// <00740849> vulkan/pipelinemgrvulkan.h:508
// variables: 2
inline void PipelineLayoutCreateHashFunctor_t::operator(const PipelineLayoutCreateInfo_t& pipelineLayoutCreateInfo)
{
	uint32 nHash; // 510
	{
		int16 nDescriptorSet; // 516
	}
} /* size: 0, variables: 1 */

// <006C3016> vulkan/pipelinemgrvulkan.h:545
// member function: 1
// struct size: 1
struct PipelineLayoutCreateEqualFunctor_t {
	/* vulkan/pipelinemgrvulkan.h:547 */
	bool operator()(const PipelineLayoutCreateEqualFunctor_t* , const PipelineLayoutCreateInfo_t& , const PipelineLayoutCreateInfo_t& );
};

// <0074078C> vulkan/pipelinemgrvulkan.h:547
// variables: 8
inline void PipelineLayoutCreateEqualFunctor_t::operator(const PipelineLayoutCreateInfo_t& rhs, const PipelineLayoutCreateInfo_t& lhs)
{
	const char   __FUNCTION__; // 56785
	{
		int32 nDescriptorSet; // 559
		{
			size_t nSizeToCompare; // 567
			int nCmpResult; // 568
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 590
			}
		}
	}
	{
		int nCmpResult; // 610
	}
	{
		int nCmpResult; // 625
	}
} /* size: 0, variables: 1 */

// <006C305E> vulkan/pipelinemgrvulkan.h:642
// member function: 1
// member variables: 21
// struct size: 448
struct PipelineObjectVulkan_t {
	/* vulkan/pipelinemgrvulkan.h:644 */
	void PipelineObjectVulkan_t(PipelineObjectVulkan_t* );
	VkPipeline m_pPipeline; /* 0 8 */
	VkPipeline m_pPreLinkTimeOptimizedPipeline; /* 8 8 */
	VkShaderModule m_pShaderModules[4]; /* 16 32 */
	uint32 m_nNumDescriptorSets; /* 48 4 */
	VkDescriptorSetLayout * m_ppDescriptorSetLayouts; /* 56 8 */
	VkPipelineLayout m_pPipelineLayout; /* 64 8 */
	VkPipelineBindPoint m_nPipelineBindPoint; /* 72 4 */
	uint32_t m_nDescriptorTypeMask; /* 76 4 */
	PipelineCreateInfo_t m_pipelineCreateInfo; /* 80 272 */
	VkRenderPass m_pRenderPass; /* 352 8 */
	VkDescriptorUpdateTemplateKHR m_pDescriptorUpdateTemplates[3]; /* 360 24 */
	uint32_t m_nDescriptorUpdateCount[3]; /* 384 12 */
	bool m_bHasDynamicDescriptors; /* 396 1 */
	VkShaderStageFlags m_nPushConstantStageMask; /* 400 4 */
	uint32 m_nPushConstantSize; /* 404 4 */
	uint32_t m_nLastFrameUsed; /* 408 4 */
	volatile bool m_bHasOutstandingLinkTimeOptimizedCompile; /* 412 1 */
	PipelineObjectVulkan_t * m_pPreRasterizationPipelineLibrary; /* 416 8 */
	PipelineObjectVulkan_t * m_pFragmentShaderPipelineLibrary; /* 424 8 */
	VkGraphicsPipelineLibraryFlagsEXT m_nPipelineLibraryStageFlags; /* 432 4 */
	COneTimeEvent * m_pCompileFinishedEvent; /* 440 8 */
};

// <00740775> vulkan/pipelinemgrvulkan.h:644
void PipelineObjectVulkan_t::PipelineObjectVulkan_t()
{
} /* size: 0 */

// <0074075C> vulkan/pipelinemgrvulkan.h:644
inline void PipelineObjectVulkan_t::PipelineObjectVulkan_t()
{
} /* size: 0 */

// <006C3282> vulkan/pipelinemgrvulkan.h:710
// member functions: 82
// member variables: 31
// class size: 19,704
class CPipelineVulkan {
	/* vulkan/pipelinemgrvulkan.h:786 */
	struct DescriptorBindingData_t {
		union DescriptorBindingUnion_t m_textures[4][128]; /* 0 12288 */
		VkDescriptorBufferInfo m_uniformBuffers[4][16]; /* 12288 1536 */
		VkDescriptorImageInfo m_samplers[4][32]; /* 13824 3072 */
		union DescriptorBindingUnion_t m_UAVs[4][16]; /* 16896 1536 */
	};
	void CPipelineVulkan(CPipelineVulkan* , const CPipelineVulkan& );
	int ()(void) * * _vptr.CPipelineVulkan; /* 0 8 */
	/* vulkan/pipelinemgrvulkan.cpp:395 */
	void CPipelineVulkan(CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:409 */
	virtual void ~CPipelineVulkan(CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:416 */
	void Reset(CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:477 */
	void ResetDefaultCBBindings(CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:540 */
	void BindShader(CPipelineVulkan* , RenderShaderType_t, const CShaderVulkanBase* , const InputLayoutVulkan_t* );
	/* vulkan/pipelinemgrvulkan.h:720 */
	const PipelineCreateInfo_t& GetPipelineInfo(const CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.h:721 */
	void SetPipelineInfo(CPipelineVulkan* , const PipelineCreateInfo_t& );
	/* vulkan/pipelinemgrvulkan.h:1040 */
	const InputLayoutVulkan_t* GetBoundInputLayout(const CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.h:1030 */
	const CShaderVulkanBase* GetShader(const CPipelineVulkan* , RenderShaderType_t);
	/* vulkan/pipelinemgrvulkan.h:1045 */
	void SetRenderPass(CPipelineVulkan* , int32_t, VkRenderPass, uint32, uint32, const VkFormat* , VkFormat);
	/* vulkan/pipelinemgrvulkan.h:1092 */
	void SetDepthStencilState(CPipelineVulkan* , const DepthStencilStateVulkan_t* , bool);
	/* vulkan/pipelinemgrvulkan.h:1079 */
	void SetRasterizerState(CPipelineVulkan* , const RasterizerStateVulkan_t* , uint32);
	/* vulkan/pipelinemgrvulkan.h:1121 */
	void SetBlendState(CPipelineVulkan* , const BlendStateVulkan_t* );
	/* vulkan/pipelinemgrvulkan.h:1188 */
	void SetMSAAState(CPipelineVulkan* , uint32, VkSampleMask);
	/* vulkan/pipelinemgrvulkan.h:1196 */
	void SetViewportState(CPipelineVulkan* , uint32);
	/* vulkan/pipelinemgrvulkan.h:731 */
	bool SetTopology(CPipelineVulkan* , VkPrimitiveTopology);
	/* vulkan/pipelinemgrvulkan.h:742 */
	VkPolygonMode GetPolygonMode(const CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.h:1146 */
	void SetTessState(CPipelineVulkan* , uint32);
	/* vulkan/pipelinemgrvulkan.h:1153 */
	void BindIndexBuffer(CPipelineVulkan* , VkBuffer, VkDeviceSize, VkIndexType);
	/* vulkan/pipelinemgrvulkan.h:1166 */
	void BindVertexBuffer(CPipelineVulkan* , uint32, VkBuffer, VkDeviceSize, VkDeviceSize);
	/* vulkan/pipelinemgrvulkan.h:1213 */
	union DescriptorBindingUnion_t& GetTextureDescriptor(CPipelineVulkan* , RenderShaderType_t, uint32);
	/* vulkan/pipelinemgrvulkan.h:1219 */
	VkDescriptorBufferInfo& GetUniformBufferDescriptor(CPipelineVulkan* , RenderShaderType_t, uint32);
	/* vulkan/pipelinemgrvulkan.h:1226 */
	VkDescriptorImageInfo& GetSeparateSamplerDescriptor(CPipelineVulkan* , RenderShaderType_t, uint32);
	/* vulkan/pipelinemgrvulkan.h:1232 */
	union DescriptorBindingUnion_t& GetUAVDescriptor(CPipelineVulkan* , RenderShaderType_t, uint32);
	/* vulkan/pipelinemgrvulkan.h:1238 */
	void SetTextureImage(CPipelineVulkan* , RenderShaderType_t, uint32, VkImageView, VkImageLayout);
	/* vulkan/pipelinemgrvulkan.h:1245 */
	void SetTextureSampler(CPipelineVulkan* , RenderShaderType_t, uint32, VkSampler);
	/* vulkan/pipelinemgrvulkan.h:1251 */
	void SetSeparateSampler(CPipelineVulkan* , RenderShaderType_t, uint32, VkSampler);
	/* vulkan/pipelinemgrvulkan.h:1257 */
	void ClearUAVDescriptors(CPipelineVulkan* , RenderShaderType_t, int32_t);
	/* vulkan/pipelinemgrvulkan.cpp:678 */
	void BindDescriptorSets(CPipelineVulkan* , int32, int32, const CDescriptorSetVulkan** , VkDescriptorSet* , const int32* , const uint32** );
	/* vulkan/pipelinemgrvulkan.cpp:750 */
	void ValidatePipelineLibraryDescriptorSets(CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:777 */
	void ValidateComputeDispatchDescriptorSets(CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.h:1263 */
	VkPipeline GetCurrentPipeline(const CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.h:1268 */
	VkPipelineLayout GetCurrentPipelineLayout(const CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.h:1273 */
	VkPipelineStageFlags GetCurrentPushConstantsStageMask(const CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.h:1278 */
	uint32_t ClampToCurrentPushConstantSize(const CPipelineVulkan* , uint32_t);
	/* vulkan/pipelinemgrvulkan.h:1203 */
	void SetIsComputeDispatch(CPipelineVulkan* , bool);
	/* vulkan/pipelinemgrvulkan.h:1285 */
	void SetStaticDescriptorSetCountForPreWarm(CPipelineVulkan* , uint32);
	/* vulkan/pipelinemgrvulkan.h:772 */
	bool UseGraphicsPipelineLibrary(const CPipelineVulkan* );
private:
	/* vulkan/pipelinemgrvulkan.h:779 */
	void MarkPipelineDirty(CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:800 */
	void ValidateDescriptorSets(CPipelineVulkan* , uint32);
	const class CDescriptorSetVulkan * m_pBoundDescriptorSetsForLayout[8]; /* 8 64 */
	VkDescriptorSet m_pBoundDescriptorSets[8]; /* 72 64 */
	uint32_t m_boundDynamicOffsets[8][4]; /* 136 128 */
	uint32_t m_nBoundDynamicOffsets[8]; /* 264 32 */
	uint32_t m_boundDynamicOffsetsFlattened[32]; /* 296 128 */
	uint32_t m_nBoundDynamicOffsetsFlattened; /* 424 4 */
	int32 m_nMaxDescriptorSetBound; /* 428 4 */
	int32 m_nBoundStaticDescriptorSetDirty; /* 432 4 */
	const class CShaderVulkanBase * m_pBoundShader[4]; /* 440 32 */
	const class InputLayoutVulkan_t * m_pBoundInputLayout; /* 472 8 */
	PipelineCreateInfo_t m_pipelineCreateInfo; /* 480 272 */
	VkBuffer m_ibAttachBuffer; /* 752 8 */
	VkDeviceSize m_ibAttachOffset; /* 760 8 */
	VkIndexType m_ibAttachIndexType; /* 768 4 */
	VkBuffer m_vbAttachBuffer[16]; /* 776 128 */
	VkDeviceSize m_vbAttachOffsets[16]; /* 904 128 */
	VkDeviceSize m_vbAttachStrides[16]; /* 1032 128 */
	DescriptorBindingData_t m_descriptorBindings; /* 1160 18432 */
	VkDescriptorBufferInfo m_cbDefaultDescriptor; /* 19592 24 */
	int8_t m_nMaxConstantBufferBound[4]; /* 19616 4 */
	VkRenderPass m_pRenderPass; /* 19624 8 */
	PipelineObjectVulkan_t * m_pCurrentPipelineCached; /* 19632 8 */
	VkPipeline m_pCurrentBoundPipeline; /* 19640 8 */
	VkPipelineLayout m_pCurrentBoundPipelineLayout; /* 19648 8 */
	VkDescriptorSetLayout m_pCurrentBoundDynamicDescriptorSetLayouts[3]; /* 19656 24 */
	VkPipelineStageFlags m_nPushConstantStageMask; /* 19680 4 */
	uint32_t m_nPushConstantSize; /* 19684 4 */
	bool m_bIndexBufferDirty; /* 19688 1 */
	uint32_t m_nVertexBindingDirtyMask; /* 19692 4 */
	uint32_t m_nLastDefaultVBBindingSlot; /* 19696 4 */
	virtual void ~CPipelineVulkan(class CPipelineVulkan *); /* linkage=_ZN15CPipelineVulkanD4Ev */
	void BindShader(class CPipelineVulkan *, enum RenderShaderType_t, const class CShaderVulkanBase  *, const class InputLayoutVulkan_t  *); /* linkage=_ZN15CPipelineVulkan10BindShaderE18RenderShaderType_tPK17CShaderVulkanBasePK19InputLayoutVulkan_t */
	void CPipelineVulkan(class CPipelineVulkan *); /* linkage=_ZN15CPipelineVulkanC4Ev */
	void SetStaticDescriptorSetCountForPreWarm(class CPipelineVulkan *, uint32); /* linkage=_ZN15CPipelineVulkan37SetStaticDescriptorSetCountForPreWarmEj */
	void SetRenderPass(class CPipelineVulkan *, int32_t, VkRenderPass, uint32, uint32, const VkFormat  *, VkFormat); /* linkage=_ZN15CPipelineVulkan13SetRenderPassEiP14VkRenderPass_TjjPK8VkFormatS2_ */
	void MarkPipelineDirty(class CPipelineVulkan *); /* linkage=_ZN15CPipelineVulkan17MarkPipelineDirtyEv */
	void SetPipelineInfo(class CPipelineVulkan *, const class PipelineCreateInfo_t  &); /* linkage=_ZN15CPipelineVulkan15SetPipelineInfoERK20PipelineCreateInfo_t */
	void CPipelineVulkan(class CPipelineVulkan *, const class CPipelineVulkan  &); /* linkage=_ZN15CPipelineVulkanC4ERKS_ */
	void Reset(class CPipelineVulkan *); /* linkage=_ZN15CPipelineVulkan5ResetEv */
	/* <750898> vulkan/pipelinemgrvulkan.cpp:477 */
	void ResetDefaultCBBindings(class CPipelineVulkan *); /* linkage=_ZN15CPipelineVulkan22ResetDefaultCBBindingsEv */
	const class PipelineCreateInfo_t  & GetPipelineInfo(const class CPipelineVulkan  *); /* linkage=_ZNK15CPipelineVulkan15GetPipelineInfoEv */
	const class InputLayoutVulkan_t  * GetBoundInputLayout(const class CPipelineVulkan  *); /* linkage=_ZNK15CPipelineVulkan19GetBoundInputLayoutEv */
	const class CShaderVulkanBase  * GetShader(const class CPipelineVulkan  *, enum RenderShaderType_t); /* linkage=_ZNK15CPipelineVulkan9GetShaderE18RenderShaderType_t */
	void SetDepthStencilState(class CPipelineVulkan *, const class DepthStencilStateVulkan_t  *, bool); /* linkage=_ZN15CPipelineVulkan20SetDepthStencilStateEPK25DepthStencilStateVulkan_tb */
	void SetRasterizerState(class CPipelineVulkan *, const class RasterizerStateVulkan_t  *, uint32); /* linkage=_ZN15CPipelineVulkan18SetRasterizerStateEPK23RasterizerStateVulkan_tj */
	void SetBlendState(class CPipelineVulkan *, const class BlendStateVulkan_t  *); /* linkage=_ZN15CPipelineVulkan13SetBlendStateEPK18BlendStateVulkan_t */
	void SetMSAAState(class CPipelineVulkan *, uint32, VkSampleMask); /* linkage=_ZN15CPipelineVulkan12SetMSAAStateEjj */
	void SetViewportState(class CPipelineVulkan *, uint32); /* linkage=_ZN15CPipelineVulkan16SetViewportStateEj */
	bool SetTopology(class CPipelineVulkan *, VkPrimitiveTopology); /* linkage=_ZN15CPipelineVulkan11SetTopologyE19VkPrimitiveTopology */
	VkPolygonMode GetPolygonMode(const class CPipelineVulkan  *); /* linkage=_ZNK15CPipelineVulkan14GetPolygonModeEv */
	void SetTessState(class CPipelineVulkan *, uint32); /* linkage=_ZN15CPipelineVulkan12SetTessStateEj */
	void BindIndexBuffer(class CPipelineVulkan *, VkBuffer, VkDeviceSize, VkIndexType); /* linkage=_ZN15CPipelineVulkan15BindIndexBufferEP10VkBuffer_Tm11VkIndexType */
	void BindVertexBuffer(class CPipelineVulkan *, uint32, VkBuffer, VkDeviceSize, VkDeviceSize); /* linkage=_ZN15CPipelineVulkan16BindVertexBufferEjP10VkBuffer_Tmm */
	union DescriptorBindingUnion_t & GetTextureDescriptor(class CPipelineVulkan *, enum RenderShaderType_t, uint32); /* linkage=_ZN15CPipelineVulkan20GetTextureDescriptorE18RenderShaderType_tj */
	VkDescriptorBufferInfo & GetUniformBufferDescriptor(class CPipelineVulkan *, enum RenderShaderType_t, uint32); /* linkage=_ZN15CPipelineVulkan26GetUniformBufferDescriptorE18RenderShaderType_tj */
	VkDescriptorImageInfo & GetSeparateSamplerDescriptor(class CPipelineVulkan *, enum RenderShaderType_t, uint32); /* linkage=_ZN15CPipelineVulkan28GetSeparateSamplerDescriptorE18RenderShaderType_tj */
	union DescriptorBindingUnion_t & GetUAVDescriptor(class CPipelineVulkan *, enum RenderShaderType_t, uint32); /* linkage=_ZN15CPipelineVulkan16GetUAVDescriptorE18RenderShaderType_tj */
	void SetTextureImage(class CPipelineVulkan *, enum RenderShaderType_t, uint32, VkImageView, VkImageLayout); /* linkage=_ZN15CPipelineVulkan15SetTextureImageE18RenderShaderType_tjP13VkImageView_T13VkImageLayout */
	void SetTextureSampler(class CPipelineVulkan *, enum RenderShaderType_t, uint32, VkSampler); /* linkage=_ZN15CPipelineVulkan17SetTextureSamplerE18RenderShaderType_tjP11VkSampler_T */
	void SetSeparateSampler(class CPipelineVulkan *, enum RenderShaderType_t, uint32, VkSampler); /* linkage=_ZN15CPipelineVulkan18SetSeparateSamplerE18RenderShaderType_tjP11VkSampler_T */
	void ClearUAVDescriptors(class CPipelineVulkan *, enum RenderShaderType_t, int32_t); /* linkage=_ZN15CPipelineVulkan19ClearUAVDescriptorsE18RenderShaderType_ti */
	void BindDescriptorSets(class CPipelineVulkan *, int32, int32, const class CDescriptorSetVulkan  * *, VkDescriptorSet *, const int32  *, const uint32  * *); /* linkage=_ZN15CPipelineVulkan18BindDescriptorSetsEiiPPK20CDescriptorSetVulkanPP17VkDescriptorSet_TPKiPPKj */
	void ValidatePipelineLibraryDescriptorSets(class CPipelineVulkan *); /* linkage=_ZN15CPipelineVulkan37ValidatePipelineLibraryDescriptorSetsEv */
	void ValidateComputeDispatchDescriptorSets(class CPipelineVulkan *); /* linkage=_ZN15CPipelineVulkan37ValidateComputeDispatchDescriptorSetsEv */
	VkPipeline GetCurrentPipeline(const class CPipelineVulkan  *); /* linkage=_ZNK15CPipelineVulkan18GetCurrentPipelineEv */
	VkPipelineLayout GetCurrentPipelineLayout(const class CPipelineVulkan  *); /* linkage=_ZNK15CPipelineVulkan24GetCurrentPipelineLayoutEv */
	VkPipelineStageFlags GetCurrentPushConstantsStageMask(const class CPipelineVulkan  *); /* linkage=_ZNK15CPipelineVulkan32GetCurrentPushConstantsStageMaskEv */
	uint32_t ClampToCurrentPushConstantSize(const class CPipelineVulkan  *, uint32_t); /* linkage=_ZNK15CPipelineVulkan30ClampToCurrentPushConstantSizeEj */
	void SetIsComputeDispatch(class CPipelineVulkan *, bool); /* linkage=_ZN15CPipelineVulkan20SetIsComputeDispatchEb */
	bool UseGraphicsPipelineLibrary(const class CPipelineVulkan  *); /* linkage=_ZNK15CPipelineVulkan26UseGraphicsPipelineLibraryEv */
	void ValidateDescriptorSets(class CPipelineVulkan *, uint32); /* linkage=_ZN15CPipelineVulkan22ValidateDescriptorSetsEj */
};

// <009A5A0A> vulkan/pipelinemgrvulkan.h:713
void CPipelineVulkan::CPipelineVulkan()
{
} /* size: 0 */

// <009A59D0> vulkan/pipelinemgrvulkan.h:714
void CPipelineVulkan::~CPipelineVulkan()
{
} /* size: 0 */

// <00740743> vulkan/pipelinemgrvulkan.h:720
inline void CPipelineVulkan::GetPipelineInfo()
{
} /* size: 0 */

// <00682CD9> vulkan/pipelinemgrvulkan.h:721
inline void CPipelineVulkan::SetPipelineInfo(const PipelineCreateInfo_t& pipelineCreateInfo)
{
} /* size: 0 */

// <008776A0> vulkan/pipelinemgrvulkan.h:731
inline void CPipelineVulkan::SetTopology(VkPrimitiveTopology topology)
{
} /* size: 0 */

// <00877687> vulkan/pipelinemgrvulkan.h:742
inline void CPipelineVulkan::GetPolygonMode()
{
} /* size: 0 */

// <0087766E> vulkan/pipelinemgrvulkan.h:772
inline void CPipelineVulkan::UseGraphicsPipelineLibrary()
{
} /* size: 0 */

// <00A55F42> vulkan/pipelinemgrvulkan.h:779
inline void CPipelineVulkan::MarkPipelineDirty()
{
} /* size: 0 */

// <006C3BB0> vulkan/pipelinemgrvulkan.h:851
// member functions: 93
// member variables: 40
// class size: 2,736
class CPipelineManagerVulkan {
	/* vulkan/pipelinemgrvulkan.h:891 */
	class CCommandMemberInitializer_OnPrintStats {
		/* vulkan/pipelinemgrvulkan.h:891 */
		void CCommandMemberInitializer_OnPrintStats(CCommandMemberInitializer_OnPrintStats* );
	private:
		CConCommandMemberAccessor<CPipelineManagerVulkan> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnPrintStats(CCommandMemberInitializer_OnPrintStats* );
	};
	/* vulkan/pipelinemgrvulkan.h:949 */
	struct LinkTimeOptimizedPipeline_t {
		PipelineObjectVulkan_t * m_pPipelineObject; /* 0 8 */
		VkPipelineLayout m_pLinkTimeOptimizedPipelineLayout; /* 8 8 */
		VkPipeline m_pLinkTimeOptimizedPipeline; /* 16 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/pipelinemgrvulkan.h:957 */
	struct PreWarmPipeline_t {
		PipelineCreateInfo_t m_pipelineCreateInfo; /* 0 272 */
		PipelineObjectVulkan_t * m_pPipeline; /* 272 8 */
		void PreWarmPipeline_t(PreWarmPipeline_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CPipelineManagerVulkan(CPipelineManagerVulkan* , const CPipelineManagerVulkan& );
	int ()(void) * * _vptr.CPipelineManagerVulkan; /* 0 8 */
	/* vulkan/pipelinemgrvulkan.cpp:845 */
	void CPipelineManagerVulkan(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:876 */
	virtual void ~CPipelineManagerVulkan(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:1238 */
	bool Init(CPipelineManagerVulkan* , VkDevice, VkQueue, const VulkanPhysicalDeviceInfo_t* , CAsyncCompileHelperVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:884 */
	void Shutdown(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:1059 */
	void DestroyPipelinesReferencingShader(CPipelineManagerVulkan* , VkShaderModule);
	/* vulkan/pipelinemgrvulkan.cpp:1183 */
	bool DestroyPipelinesReferencingRenderpass(CPipelineManagerVulkan* , VkRenderPass);
	/* vulkan/pipelinemgrvulkan.cpp:1070 */
	void DestroyPipelineLibrary(CPipelineManagerVulkan* , PipelineObjectVulkan_t* );
	/* vulkan/pipelinemgrvulkan.h:863 */
	int32 GetOutstandingAsyncLTOPipelineCount(const CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.h:865 */
	uint32 GetMaxTotalSamplers(const CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.h:866 */
	uint32 GetMaxTotalUniformBuffers(const CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.h:867 */
	VkDescriptorSetLayout GetSharedDescriptorSetLayout(const CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:3543 */
	bool BindForUse(CPipelineManagerVulkan* , CCommandStreamBuilder* , VulkanCommandBuffer_t* , CPipelineVulkan* , VulkanDescriptorSetPool_t** , PerThreadDataVulkan_t* , int32, bool);
	/* vulkan/pipelinemgrvulkan.cpp:2792 */
	void UpdatePendingPipelineObjects(CPipelineManagerVulkan* , uint32_t);
	/* vulkan/pipelinemgrvulkan.cpp:3827 */
	void AppendStatsSummaryString(CPipelineManagerVulkan* , CBufferString* );
	/* vulkan/pipelinemgrvulkan.cpp:1959 */
	bool GetOrAddPipelineLayout(CPipelineManagerVulkan* , const PipelineLayoutCreateInfo_t& , PipelineLayoutVulkan_t* );
	/* vulkan/pipelinemgrvulkan.cpp:4403 */
	bool PreWarmPipeline(CPipelineManagerVulkan* , PerThreadDataVulkan_t* , const CPipelineVulkan* , const PipelineLayoutCreateInfo_t* );
	/* vulkan/pipelinemgrvulkan.cpp:4371 */
	void FlushPipelineCache(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:3810 */
	void UpdateStats(const CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:4443 */
	PipelineObjectVulkan_t* CreateGraphicsPipelineLibrary(CPipelineManagerVulkan* , PerThreadDataVulkan_t* , const CPipelineVulkan* , VkGraphicsPipelineLibraryFlagsEXT, const PipelineLayoutCreateInfo_t* );
	/* vulkan/pipelinemgrvulkan.cpp:1527 */
	bool BuildDynamicDescriptorSetLayout(CPipelineManagerVulkan* , int32, const CPipelineVulkan* , CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& , uint32& );
private:
	/* vulkan/pipelinemgrvulkan.cpp:3817 */
	void OnPrintStats(CPipelineManagerVulkan* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnPrintStats m_OnPrintStats_register; /* 8 160 */
	/* vulkan/pipelinemgrvulkan.cpp:2886 */
	PipelineObjectVulkan_t* GetOrCreatePipeline(CPipelineManagerVulkan* , PerThreadDataVulkan_t* , const CPipelineVulkan* , VkGraphicsPipelineLibraryFlagsEXT, const PipelineLayoutCreateInfo_t* , bool* );
	/* vulkan/pipelinemgrvulkan.cpp:3039 */
	PipelineObjectVulkan_t* GetOrCreateVertexInputPipelineLibrary(CPipelineManagerVulkan* , const CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:3128 */
	PipelineObjectVulkan_t* GetOrCreateFragmentOutputPipelineLibrary(CPipelineManagerVulkan* , const CPipelineVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:2210 */
	bool CreatePipeline(CPipelineManagerVulkan* , const CPipelineVulkan* , PipelineObjectVulkan_t* , PerThreadDataVulkan_t* , VkGraphicsPipelineLibraryFlagsEXT, const PipelineLayoutCreateInfo_t* );
	/* vulkan/pipelinemgrvulkan.cpp:2192 */
	VkPipelineCache EnsurePipelineCache(CPipelineManagerVulkan* , PerThreadDataVulkan_t* );
	/* vulkan/pipelinemgrvulkan.cpp:999 */
	void ShutdownPipelineObject(CPipelineManagerVulkan* , PipelineObjectVulkan_t* );
	/* vulkan/pipelinemgrvulkan.cpp:1755 */
	bool FinalizeDescriptorSetAndPipelineLayouts(CPipelineManagerVulkan* , const CPipelineVulkan* , PipelineObjectVulkan_t* , VkGraphicsPipelineLibraryFlagsEXT, const PipelineLayoutCreateInfo_t* );
	/* vulkan/pipelinemgrvulkan.h:904 */
	void BuildDescriptorWriteCache(CPipelineManagerVulkan* , const CPipelineVulkan* , PipelineObjectVulkan_t* );
	/* vulkan/pipelinemgrvulkan.cpp:1273 */
	void BuildDescriptorUpdateTemplates(CPipelineManagerVulkan* , const CPipelineVulkan* , PipelineObjectVulkan_t* );
	/* vulkan/pipelinemgrvulkan.cpp:2743 */
	void SetShaderStatsFromPipelineExecutableInfo(CPipelineManagerVulkan* , const CPipelineVulkan* , VkPipeline);
	/* vulkan/pipelinemgrvulkan.cpp:1038 */
	void MergePreWarmedPipelinesToPending(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:1082 */
	void ProcessShaderModuleDeletionQueue(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:1119 */
	void ProcessPipelineLibraryDeletionQueue(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:1157 */
	void ProcessPipelineLibraryLinkTimeOptimizationQueue(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:2075 */
	void BuildVertexInputStateCreateInfo(const CPipelineManagerVulkan* , const PipelineObjectVulkan_t* , VkPipelineVertexInputStateCreateInfo& , CUtlVectorFixed<VkVertexInputAttributeDescription, 16>& , CUtlVectorFixed<VkVertexInputBindingDescription, 16>& );
	/* vulkan/pipelinemgrvulkan.cpp:2103 */
	void BuildColorBlendStateCreateInfo(const CPipelineManagerVulkan* , const PipelineObjectVulkan_t* , VkPipelineColorBlendStateCreateInfo& , CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8>& );
	/* vulkan/pipelinemgrvulkan.cpp:2128 */
	void BuildMultisampleStateCreateInfo(const CPipelineManagerVulkan* , const PipelineObjectVulkan_t* , VkPipelineMultisampleStateCreateInfo& );
	/* vulkan/pipelinemgrvulkan.cpp:2147 */
	void BuildDescriptorSetLayoutBindingFlagsCreateInfo(CPipelineManagerVulkan* , VkDescriptorSetLayoutCreateInfo& , VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& , uint32, VkDescriptorBindingFlags* );
	/* vulkan/pipelinemgrvulkan.cpp:3230 */
	bool LinkPipelineLibrary(CPipelineManagerVulkan* , const CPipelineVulkan* , PipelineObjectVulkan_t* , VkPipelineCache, PerThreadDataVulkan_t* );
	/* vulkan/pipelinemgrvulkan.cpp:3484 */
	void LinkPipelineShaderOptimized(CPipelineManagerVulkan* , PipelineObjectVulkan_t* , CUtlVectorFixed<VkPipeline_T*, 4>, PipelineLayoutCreateInfo_t, bool);
	/* vulkan/pipelinemgrvulkan.cpp:3851 */
	bool LoadPipelineCache(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:4225 */
	bool StorePipelineCache(CPipelineManagerVulkan* );
	/* vulkan/pipelinemgrvulkan.cpp:3835 */
	bool CreateCacheDirectory(const CPipelineManagerVulkan* );
	VkDevice m_pDeviceVulkan; /* 168 8 */
	VkQueue m_pQueueVulkan; /* 176 8 */
	VkPipelineCache m_pPipelineCache; /* 184 8 */
	CThreadFastMutex m_pipelineCacheMutex; /* 192 24 */
	CThreadFastMutex m_pipelineMutex; /* 216 24 */
	CThreadRWLock m_pipelineHashTableRWLock; /* 240 344 */
	CThreadRWLock m_pipelineMergeRWLock; /* 584 344 */
	size_t m_nLastStoredPipelineCacheSize; /* 928 8 */
	/* vulkan/pipelinemgrvulkan.h:933 */
	typedef struct CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t*, PipelineCreateHashFunctor_t, PipelineCreateEqualFunctor_t, undefined_t, CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, int> > PipelineHashtable_t;
	PipelineHashtable_t m_pendingPipelineHashtable; /* 936 32 */
	PipelineHashtable_t m_pipelineHashtable; /* 968 32 */
	CTSQueue<VkShaderModule_T*, false> m_pendingShaderModuleDeletionQueue __attribute__((__aligned__(16))); /* 1008 64 */
	CTSQueue<PipelineObjectVulkan_t*, false> m_pendingPipelineLibraryDeletionQueue __attribute__((__aligned__(16))); /* 1072 64 */
	CThreadRWLock m_pipelineLibraryRWLock; /* 1136 344 */
	/* vulkan/pipelinemgrvulkan.h:943 */
	typedef struct CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t*, PipelineLibraryVertexInputCreateHashFunctor_t, PipelineLibraryVertexInputCreateEqualFunctor_t, undefined_t, CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, int> > PipelineLibraryVertexInputHashtable_t;
	PipelineLibraryVertexInputHashtable_t m_pipelineLibraryVertexInputHashTable; /* 1480 32 */
	/* vulkan/pipelinemgrvulkan.h:944 */
	typedef struct CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t*, PipelineLibraryFragmentOutputCreateHashFunctor_t, PipelineLibraryFragmentOutputCreateEqualFunctor_t, undefined_t, CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, int> > PipelineLibraryFragmentOutputHashtable_t;
	PipelineLibraryFragmentOutputHashtable_t m_pipelineLibraryFragmentOutputHashTable; /* 1512 32 */
	CAsyncCompileHelperVulkan * m_pAsyncCompileHelper; /* 1544 8 */
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false> m_pendingLinkTimeOptimizedPipelines __attribute__((__aligned__(16))); /* 1552 64 */
	CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false> m_preWarmPipelineQueue __attribute__((__aligned__(16))); /* 1616 64 */
	CUtlLinkedList<PipelineObjectVulkan_t*, int, false, int, CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t*, int>, int> > m_pendingPipelinesToDelete; /* 1680 48 */
	CUtlHashtable<VkRenderPass_T*, empty_t, DefaultHashFunctor<VkRenderPass_T*>, DefaultEqualFunctor<VkRenderPass_T*>, undefined_t, CUtlMemory<CUtlHashtableEntry<VkRenderPass_T*, empty_t>, int> > m_pendingRenderpassesToDelete; /* 1728 32 */
	CThreadFastMutex m_pipelineLayoutMutex; /* 1760 24 */
	/* vulkan/pipelinemgrvulkan.h:967 */
	typedef struct CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayoutCreateEqualFunctor_t, undefined_t, CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int> > PipelineLayoutHashtable_t;
	PipelineLayoutHashtable_t m_pipelineLayoutHashtable; /* 1784 32 */
	uint32 m_nMaxTotalUniformBlocks; /* 1816 4 */
	uint32 m_nMaxTotalSamplers; /* 1820 4 */
	VkDescriptorSetLayout m_pSharedDescriptorSetLayout; /* 1824 8 */
	VkPipelineLayout m_pSharedPipelineLayout; /* 1832 8 */
	CUtlString m_pipelineCacheFilePath; /* 1840 8 */
	bool m_bEnablePipelineCacheFile; /* 1848 1 */
	VkPhysicalDeviceProperties m_physicalDeviceProperties; /* 1856 824 */
	uint32_t m_nPipelinesCompiledThisFrame; /* 2680 4 */
	uint32_t m_nPipelinesPreWarmedThisFrame; /* 2684 4 */
	uint32_t m_nPipelineLibrariesCompiledThisFrame; /* 2688 4 */
	uint32_t m_nPipelineLibraryLinksThisFrame; /* 2692 4 */
	uint32_t m_nTotalPipelineLibraries; /* 2696 4 */
	CInterlockedInt m_nOutstandingAsyncLTOPipelines __attribute__((__aligned__(4))); /* 2700 4 */
	CCycleCount m_timer; /* 2704 8 */
	double m_flPipelineCompileTimeTotalThisFrameMS; /* 2712 8 */
	double m_flPipelineCompileTimeInDriverThisFrameMS; /* 2720 8 */
	/* vulkan/pipelinemgrvulkan.h:934 */
	typedef handle_t PipelineHashHandle_t;
	/* vulkan/pipelinemgrvulkan.h:968 */
	typedef handle_t PipelineLayoutHashHandle_t;
	bool PreWarmPipeline(class CPipelineManagerVulkan *, class PerThreadDataVulkan_t *, const class CPipelineVulkan  *, const class PipelineLayoutCreateInfo_t  *); /* linkage=_ZN22CPipelineManagerVulkan15PreWarmPipelineEP21PerThreadDataVulkan_tPK15CPipelineVulkanPK26PipelineLayoutCreateInfo_t */
	void CPipelineManagerVulkan(class CPipelineManagerVulkan *, const class CPipelineManagerVulkan  &); /* linkage=_ZN22CPipelineManagerVulkanC4ERKS_ */
	void CPipelineManagerVulkan(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkanC4Ev */
	virtual void ~CPipelineManagerVulkan(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkanD4Ev */
	bool Init(class CPipelineManagerVulkan *, VkDevice, VkQueue, const class VulkanPhysicalDeviceInfo_t  *, class CAsyncCompileHelperVulkan *); /* linkage=_ZN22CPipelineManagerVulkan4InitEP10VkDevice_TP9VkQueue_TPK26VulkanPhysicalDeviceInfo_tP25CAsyncCompileHelperVulkan */
	void Shutdown(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkan8ShutdownEv */
	void DestroyPipelinesReferencingShader(class CPipelineManagerVulkan *, VkShaderModule); /* linkage=_ZN22CPipelineManagerVulkan33DestroyPipelinesReferencingShaderEP16VkShaderModule_T */
	bool DestroyPipelinesReferencingRenderpass(class CPipelineManagerVulkan *, VkRenderPass); /* linkage=_ZN22CPipelineManagerVulkan37DestroyPipelinesReferencingRenderpassEP14VkRenderPass_T */
	void DestroyPipelineLibrary(class CPipelineManagerVulkan *, class PipelineObjectVulkan_t *); /* linkage=_ZN22CPipelineManagerVulkan22DestroyPipelineLibraryEP22PipelineObjectVulkan_t */
	int32 GetOutstandingAsyncLTOPipelineCount(const class CPipelineManagerVulkan  *); /* linkage=_ZNK22CPipelineManagerVulkan35GetOutstandingAsyncLTOPipelineCountEv */
	uint32 GetMaxTotalSamplers(const class CPipelineManagerVulkan  *); /* linkage=_ZNK22CPipelineManagerVulkan19GetMaxTotalSamplersEv */
	uint32 GetMaxTotalUniformBuffers(const class CPipelineManagerVulkan  *); /* linkage=_ZNK22CPipelineManagerVulkan25GetMaxTotalUniformBuffersEv */
	VkDescriptorSetLayout GetSharedDescriptorSetLayout(const class CPipelineManagerVulkan  *); /* linkage=_ZNK22CPipelineManagerVulkan28GetSharedDescriptorSetLayoutEv */
	bool BindForUse(class CPipelineManagerVulkan *, class CCommandStreamBuilder *, class VulkanCommandBuffer_t *, class CPipelineVulkan *, class VulkanDescriptorSetPool_t * *, class PerThreadDataVulkan_t *, int32, bool); /* linkage=_ZN22CPipelineManagerVulkan10BindForUseEP21CCommandStreamBuilderP21VulkanCommandBuffer_tP15CPipelineVulkanPP25VulkanDescriptorSetPool_tP21PerThreadDataVulkan_tib */
	void UpdatePendingPipelineObjects(class CPipelineManagerVulkan *, uint32_t); /* linkage=_ZN22CPipelineManagerVulkan28UpdatePendingPipelineObjectsEj */
	void AppendStatsSummaryString(class CPipelineManagerVulkan *, class CBufferString *); /* linkage=_ZN22CPipelineManagerVulkan24AppendStatsSummaryStringEP13CBufferString */
	bool GetOrAddPipelineLayout(class CPipelineManagerVulkan *, const class PipelineLayoutCreateInfo_t  &, class PipelineLayoutVulkan_t *); /* linkage=_ZN22CPipelineManagerVulkan22GetOrAddPipelineLayoutERK26PipelineLayoutCreateInfo_tP22PipelineLayoutVulkan_t */
	/* <751720> vulkan/pipelinemgrvulkan.cpp:4371 */
	void FlushPipelineCache(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkan18FlushPipelineCacheEv */
	void UpdateStats(const class CPipelineManagerVulkan  *); /* linkage=_ZNK22CPipelineManagerVulkan11UpdateStatsEv */
	class PipelineObjectVulkan_t * CreateGraphicsPipelineLibrary(class CPipelineManagerVulkan *, class PerThreadDataVulkan_t *, const class CPipelineVulkan  *, VkGraphicsPipelineLibraryFlagsEXT, const class PipelineLayoutCreateInfo_t  *); /* linkage=_ZN22CPipelineManagerVulkan29CreateGraphicsPipelineLibraryEP21PerThreadDataVulkan_tPK15CPipelineVulkanjPK26PipelineLayoutCreateInfo_t */
	bool BuildDynamicDescriptorSetLayout(class CPipelineManagerVulkan *, int32, const class CPipelineVulkan  *, class CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > &, uint32 &); /* linkage=_ZN22CPipelineManagerVulkan31BuildDynamicDescriptorSetLayoutEiPK15CPipelineVulkanR10CUtlVectorI28VkDescriptorSetLayoutBinding10CUtlMemoryIS4_iEERj */
	void OnPrintStats(class CPipelineManagerVulkan *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN22CPipelineManagerVulkan12OnPrintStatsERK15CCommandContextRK8CCommand */
	class PipelineObjectVulkan_t * GetOrCreatePipeline(class CPipelineManagerVulkan *, class PerThreadDataVulkan_t *, const class CPipelineVulkan  *, VkGraphicsPipelineLibraryFlagsEXT, const class PipelineLayoutCreateInfo_t  *, bool *); /* linkage=_ZN22CPipelineManagerVulkan19GetOrCreatePipelineEP21PerThreadDataVulkan_tPK15CPipelineVulkanjPK26PipelineLayoutCreateInfo_tPb */
	class PipelineObjectVulkan_t * GetOrCreateVertexInputPipelineLibrary(class CPipelineManagerVulkan *, const class CPipelineVulkan  *); /* linkage=_ZN22CPipelineManagerVulkan37GetOrCreateVertexInputPipelineLibraryEPK15CPipelineVulkan */
	class PipelineObjectVulkan_t * GetOrCreateFragmentOutputPipelineLibrary(class CPipelineManagerVulkan *, const class CPipelineVulkan  *); /* linkage=_ZN22CPipelineManagerVulkan40GetOrCreateFragmentOutputPipelineLibraryEPK15CPipelineVulkan */
	bool CreatePipeline(class CPipelineManagerVulkan *, const class CPipelineVulkan  *, class PipelineObjectVulkan_t *, class PerThreadDataVulkan_t *, VkGraphicsPipelineLibraryFlagsEXT, const class PipelineLayoutCreateInfo_t  *); /* linkage=_ZN22CPipelineManagerVulkan14CreatePipelineEPK15CPipelineVulkanP22PipelineObjectVulkan_tP21PerThreadDataVulkan_tjPK26PipelineLayoutCreateInfo_t */
	VkPipelineCache EnsurePipelineCache(class CPipelineManagerVulkan *, class PerThreadDataVulkan_t *); /* linkage=_ZN22CPipelineManagerVulkan19EnsurePipelineCacheEP21PerThreadDataVulkan_t */
	void ShutdownPipelineObject(class CPipelineManagerVulkan *, class PipelineObjectVulkan_t *); /* linkage=_ZN22CPipelineManagerVulkan22ShutdownPipelineObjectEP22PipelineObjectVulkan_t */
	bool FinalizeDescriptorSetAndPipelineLayouts(class CPipelineManagerVulkan *, const class CPipelineVulkan  *, class PipelineObjectVulkan_t *, VkGraphicsPipelineLibraryFlagsEXT, const class PipelineLayoutCreateInfo_t  *); /* linkage=_ZN22CPipelineManagerVulkan39FinalizeDescriptorSetAndPipelineLayoutsEPK15CPipelineVulkanP22PipelineObjectVulkan_tjPK26PipelineLayoutCreateInfo_t */
	void BuildDescriptorWriteCache(class CPipelineManagerVulkan *, const class CPipelineVulkan  *, class PipelineObjectVulkan_t *); /* linkage=_ZN22CPipelineManagerVulkan25BuildDescriptorWriteCacheEPK15CPipelineVulkanP22PipelineObjectVulkan_t */
	void BuildDescriptorUpdateTemplates(class CPipelineManagerVulkan *, const class CPipelineVulkan  *, class PipelineObjectVulkan_t *); /* linkage=_ZN22CPipelineManagerVulkan30BuildDescriptorUpdateTemplatesEPK15CPipelineVulkanP22PipelineObjectVulkan_t */
	void SetShaderStatsFromPipelineExecutableInfo(class CPipelineManagerVulkan *, const class CPipelineVulkan  *, VkPipeline); /* linkage=_ZN22CPipelineManagerVulkan40SetShaderStatsFromPipelineExecutableInfoEPK15CPipelineVulkanP12VkPipeline_T */
	void MergePreWarmedPipelinesToPending(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkan32MergePreWarmedPipelinesToPendingEv */
	void ProcessShaderModuleDeletionQueue(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkan32ProcessShaderModuleDeletionQueueEv */
	void ProcessPipelineLibraryDeletionQueue(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkan35ProcessPipelineLibraryDeletionQueueEv */
	void ProcessPipelineLibraryLinkTimeOptimizationQueue(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkan47ProcessPipelineLibraryLinkTimeOptimizationQueueEv */
	void BuildVertexInputStateCreateInfo(const class CPipelineManagerVulkan  *, const class PipelineObjectVulkan_t  *, VkPipelineVertexInputStateCreateInfo &, class CUtlVectorFixed<VkVertexInputAttributeDescription, 16> &, class CUtlVectorFixed<VkVertexInputBindingDescription, 16> &); /* linkage=_ZNK22CPipelineManagerVulkan31BuildVertexInputStateCreateInfoEPK22PipelineObjectVulkan_tR36VkPipelineVertexInputStateCreateInfoR15CUtlVectorFixedI33VkVertexInputAttributeDescriptionLm16EERS5_I31VkVertexInputBindingDescriptionLm16EE */
	void BuildColorBlendStateCreateInfo(const class CPipelineManagerVulkan  *, const class PipelineObjectVulkan_t  *, VkPipelineColorBlendStateCreateInfo &, class CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8> &); /* linkage=_ZNK22CPipelineManagerVulkan30BuildColorBlendStateCreateInfoEPK22PipelineObjectVulkan_tR35VkPipelineColorBlendStateCreateInfoR15CUtlVectorFixedI35VkPipelineColorBlendAttachmentStateLm8EE */
	/* <7509d5> vulkan/pipelinemgrvulkan.cpp:2128 */
	void BuildMultisampleStateCreateInfo(const class CPipelineManagerVulkan  *, const class PipelineObjectVulkan_t  *, VkPipelineMultisampleStateCreateInfo &); /* linkage=_ZNK22CPipelineManagerVulkan31BuildMultisampleStateCreateInfoEPK22PipelineObjectVulkan_tR36VkPipelineMultisampleStateCreateInfo */
	/* <750a41> vulkan/pipelinemgrvulkan.cpp:2147 */
	void BuildDescriptorSetLayoutBindingFlagsCreateInfo(class CPipelineManagerVulkan *, VkDescriptorSetLayoutCreateInfo &, VkDescriptorSetLayoutBindingFlagsCreateInfoEXT &, uint32, VkDescriptorBindingFlags *); /* linkage=_ZN22CPipelineManagerVulkan46BuildDescriptorSetLayoutBindingFlagsCreateInfoER31VkDescriptorSetLayoutCreateInfoR43VkDescriptorSetLayoutBindingFlagsCreateInfojPj */
	bool LinkPipelineLibrary(class CPipelineManagerVulkan *, const class CPipelineVulkan  *, class PipelineObjectVulkan_t *, VkPipelineCache, class PerThreadDataVulkan_t *); /* linkage=_ZN22CPipelineManagerVulkan19LinkPipelineLibraryEPK15CPipelineVulkanP22PipelineObjectVulkan_tP17VkPipelineCache_TP21PerThreadDataVulkan_t */
	void LinkPipelineShaderOptimized(class CPipelineManagerVulkan *, class PipelineObjectVulkan_t *, class CUtlVectorFixed<VkPipeline_T*, 4>, class PipelineLayoutCreateInfo_t, bool); /* linkage=_ZN22CPipelineManagerVulkan27LinkPipelineShaderOptimizedEP22PipelineObjectVulkan_t15CUtlVectorFixedIP12VkPipeline_TLm4EE26PipelineLayoutCreateInfo_tb */
	bool LoadPipelineCache(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkan17LoadPipelineCacheEv */
	bool StorePipelineCache(class CPipelineManagerVulkan *); /* linkage=_ZN22CPipelineManagerVulkan18StorePipelineCacheEv */
	/* <750b77> vulkan/pipelinemgrvulkan.cpp:3835 */
	bool CreateCacheDirectory(const class CPipelineManagerVulkan  *); /* linkage=_ZNK22CPipelineManagerVulkan20CreateCacheDirectoryEv */
} __attribute__((__aligned__(16)));

// <009A6D66> vulkan/pipelinemgrvulkan.h:854
void CPipelineManagerVulkan::CPipelineManagerVulkan()
{
} /* size: 0 */

// <009A696B> vulkan/pipelinemgrvulkan.h:855
void CPipelineManagerVulkan::~CPipelineManagerVulkan()
{
} /* size: 0 */

// <00A55F29> vulkan/pipelinemgrvulkan.h:865
inline void CPipelineManagerVulkan::GetMaxTotalSamplers()
{
} /* size: 0 */

// <00A55F10> vulkan/pipelinemgrvulkan.h:866
inline void CPipelineManagerVulkan::GetMaxTotalUniformBuffers()
{
} /* size: 0 */

// <007406FA> vulkan/pipelinemgrvulkan.h:891
void CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <007406E1> vulkan/pipelinemgrvulkan.h:891
inline void CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <0073E69B> vulkan/pipelinemgrvulkan.h:891
void CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <0073E67E> vulkan/pipelinemgrvulkan.h:891
inline void CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <00738C9C> vulkan/pipelinemgrvulkan.h:957
void PreWarmPipeline_t::PreWarmPipeline_t()
{
} /* size: 0 */

// <00738C7F> vulkan/pipelinemgrvulkan.h:957
inline void PreWarmPipeline_t::PreWarmPipeline_t()
{
} /* size: 0 */

// <0087762F> vulkan/pipelinemgrvulkan.h:1030
inline void CPipelineVulkan::GetShader(RenderShaderType_t shaderType)
{
} /* size: 0 */

// <00877616> vulkan/pipelinemgrvulkan.h:1040
inline void CPipelineVulkan::GetBoundInputLayout()
{
} /* size: 0 */

// <008775A0> vulkan/pipelinemgrvulkan.h:1045
// variable: 1
inline void CPipelineVulkan::SetRenderPass(int32_t nHighestRenderTargetBound, VkRenderPass pRenderPass, uint32 nSubPass, uint32 nSubPassCount, const VkFormat* pRenderTargetFormats, VkFormat nDepthStencilFormat)
{
	{
		int nTarget; // 1063
	}
} /* size: 0 */

// <0087756D> vulkan/pipelinemgrvulkan.h:1079
inline void CPipelineVulkan::SetRasterizerState(const RasterizerStateVulkan_t* pRasterizerState, uint32 nHandedness)
{
} /* size: 0 */

// <0087753A> vulkan/pipelinemgrvulkan.h:1092
inline void CPipelineVulkan::SetDepthStencilState(const DepthStencilStateVulkan_t* pDSState, bool bReadOnlyDepthStencil)
{
} /* size: 0 */

// <008774FF> vulkan/pipelinemgrvulkan.h:1121
// variable: 1
inline void CPipelineVulkan::SetBlendState(const BlendStateVulkan_t* pBlendState)
{
	{
		int nTarget; // 1124
	}
} /* size: 0 */

// <008774B9> vulkan/pipelinemgrvulkan.h:1153
inline void CPipelineVulkan::BindIndexBuffer(VkBuffer pBuffer, VkDeviceSize nOffset, VkIndexType nIndexType)
{
} /* size: 0 */

// <00877443> vulkan/pipelinemgrvulkan.h:1166
// variables: 2
inline void CPipelineVulkan::BindVertexBuffer(uint32 nSlot, VkBuffer pBuffer, VkDeviceSize nOffset, VkDeviceSize nStride)
{
	const char   __FUNCTION__; // 22994
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1168
	}
} /* size: 0, variables: 1 */

// <00877410> vulkan/pipelinemgrvulkan.h:1188
inline void CPipelineVulkan::SetMSAAState(uint32 nSamples, VkSampleMask nSampleMask)
{
} /* size: 0 */

// <008773EA> vulkan/pipelinemgrvulkan.h:1196
inline void CPipelineVulkan::SetViewportState(uint32 nNumViewports)
{
} /* size: 0 */

// <00A55EDD> vulkan/pipelinemgrvulkan.h:1203
// variable: 1
inline void CPipelineVulkan::SetIsComputeDispatch(bool bIsComputeDispatch)
{
	uint32 nIsComputeDispatch; // 1205
} /* size: 0, variables: 1 */

// <00877384> vulkan/pipelinemgrvulkan.h:1213
inline void CPipelineVulkan::GetTextureDescriptor(RenderShaderType_t shaderType, uint32 nSlot)
{
} /* size: 0 */

// <00877351> vulkan/pipelinemgrvulkan.h:1219
inline void CPipelineVulkan::GetUniformBufferDescriptor(RenderShaderType_t shaderType, uint32 nSlot)
{
} /* size: 0 */

// <0087731E> vulkan/pipelinemgrvulkan.h:1226
inline void CPipelineVulkan::GetSeparateSamplerDescriptor(RenderShaderType_t shaderType, uint32 nSlot)
{
} /* size: 0 */

// <008772EB> vulkan/pipelinemgrvulkan.h:1232
inline void CPipelineVulkan::GetUAVDescriptor(RenderShaderType_t shaderType, uint32 nSlot)
{
} /* size: 0 */

// <0087729E> vulkan/pipelinemgrvulkan.h:1251
// variable: 1
inline void CPipelineVulkan::SetSeparateSampler(RenderShaderType_t shaderType, uint32 nSlot, VkSampler pSampler)
{
	VkDescriptorImageInfo& samplerBinding; // 1253
} /* size: 0, variables: 1 */

// <00877231> vulkan/pipelinemgrvulkan.h:1257
inline void CPipelineVulkan::ClearUAVDescriptors(RenderShaderType_t shaderType, int32_t nClearCount)
{
} /* size: 0 */

// <00877218> vulkan/pipelinemgrvulkan.h:1268
inline void CPipelineVulkan::GetCurrentPipelineLayout()
{
} /* size: 0 */

// <008771FF> vulkan/pipelinemgrvulkan.h:1273
inline void CPipelineVulkan::GetCurrentPushConstantsStageMask()
{
} /* size: 0 */

// <008771D9> vulkan/pipelinemgrvulkan.h:1278
inline void CPipelineVulkan::ClampToCurrentPushConstantSize(uint32_t nPushConstantSize)
{
} /* size: 0 */

// <00682BEB> vulkan/pipelinemgrvulkan.h:1285
inline void CPipelineVulkan::SetStaticDescriptorSetCountForPreWarm(uint32 nStaticDescriptorSetCount)
{
} /* size: 0 */

// <004A453C> vulkan/pipelinemgrvulkan.h:1323
VkShaderStageFlags GetVKShaderStageFlagsFromBits(RenderShaderFlagBits_t)
{
} /* size: 0 */

// <006375EE> vulkan/pipelinemgrvulkan.h:1324
RenderShaderType_t GetShaderType(VkShaderStageFlags)
{
} /* size: 0 */

// <004A44A5> vulkan/pipelinemgrvulkan.h:1325
int32 GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t, VkDescriptorType, int32_t)
{
} /* size: 0 */

