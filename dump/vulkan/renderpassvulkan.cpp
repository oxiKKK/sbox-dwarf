
//
// vulkan/renderpassvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 24
//

// <00AD60DF> vulkan/renderpassvulkan.cpp:34
// function calls: 17
void CRenderPassVulkan::CRenderPassVulkan(VkDevice pDevice, CPipelineManagerVulkan& pipelineManager)
{
	CUtlMemory<VkFramebuffer_T::ValidateGrowSize(); // 475
	CUtlMemory<VkFramebuffer_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkFramebuffer_T::ResetDbgInfo(); // 530
	CUtlVectorBase<VkFramebuffer_T::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkFramebuffer_T::CUtlVector(); // 41
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::CUtlVector(); // 41
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 37
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::CUtlVector(); // 41
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
			unsigned int value);  // 38
} /* size: 0, inline expansions: 17 (0 bytes) */

// <00AD60AE> vulkan/renderpassvulkan.cpp:34
void CRenderPassVulkan::CRenderPassVulkan(VkDevice pDevice, CPipelineManagerVulkan& pipelineManager)
{
} /* size: 0 */

// <00AD5787> vulkan/renderpassvulkan.cpp:46
// variables: 5
// function calls: 44
void CRenderPassVulkan::~CRenderPassVulkan()
{
	{
		bool bPipelineManagerWillDestroyRenderpass; // 48
		{
			int32 nSwapChainTexture; // 55
		}
	}
	{
		bool bPipelineManagerWillDestroyRenderpass; // 48
		{
			int32 nSwapChainTexture; // 55
			CUtlVectorBase<VkFramebuffer_T::Count(); // 55
			CUtlMemory<VkFramebuffer_T::operator[](
					int i);  // 588
			CUtlVectorBase<VkFramebuffer_T::operator[](
					int i);  // 57
		}
	}
	{
		int i; // 1721
		CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::RemoveAll(); // 1798
		CUtlMemory<VkFormat, int>::IsExternallyAllocated(); // 905
		CUtlMemory<VkFormat, int>::Purge(); // 903
		CUtlMemory<VkFormat, int>::Purge(); // 1799
		CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Purge(); // 560
		ValidateAlignment<VkFormat>(void); // 508
		CUtlMemory<VkFormat, int>::Purge(); // 510
		CUtlMemory<VkFormat, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >::~CUtlVector(); // 72
		VulkanSubpassInfo_t::~VulkanSubpassInfo_t(); // 1526
		Destruct<CRenderPassVulkan::VulkanSubpassInfo_t>(VulkanSubpassInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::Purge(); // 903
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::Purge(); // 560
	ValidateAlignment<CRenderPassVulkan::VulkanSubpassInfo_t>(void); // 508
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::Purge(); // 510
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::~CUtlVector(); // 59
	CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::Purge(); // 903
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::Purge(); // 1799
	CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::Purge(); // 560
	ValidateAlignment<VulkanRenderPassImageLayout_t>(void); // 508
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::Purge(); // 510
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::~CUtlVector(); // 59
	CUtlVectorBase<VkFramebuffer_T::RemoveAll(); // 1798
	CUtlMemory<VkFramebuffer_T::IsExternallyAllocated(); // 905
	CUtlMemory<VkFramebuffer_T::Purge(); // 903
	CUtlMemory<VkFramebuffer_T::Purge(); // 1799
	CUtlVectorBase<VkFramebuffer_T::Purge(); // 560
	CUtlVectorBase<VkFramebuffer_T::~CUtlVectorBase(); // 410
	CUtlVector<VkFramebuffer_T::~CUtlVector(); // 59
} /* size: 347, inline expansions: 27 (823 bytes) */

// <00AD571F> vulkan/renderpassvulkan.cpp:46
void CRenderPassVulkan::~CRenderPassVulkan()
{
} /* size: 36 */

// <00AD56EA> vulkan/renderpassvulkan.cpp:46
// variables: 2
void CRenderPassVulkan::~CRenderPassVulkan()
{
	{
		bool bPipelineManagerWillDestroyRenderpass; // 48
		{
			int32 nSwapChainTexture; // 55
		}
	}
} /* size: 0 */

// <00ACF196> vulkan/renderpassvulkan.cpp:68
// variables: 94
// function calls: 413
void CRenderPassVulkan::CreateFromDesc(const CRenderPassDesc* pRenderPassDesc)
{
	const RenderPassAttachmentDescList_t& attachmentList; // 73
	CUtlVector<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> > attachmentDescs; // 74
	const char   __FUNCTION__; // 14534
	const RenderPassSubPassList_t& subPassList; // 96
	CUtlVector<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> > subPasses; // 97
	VkAttachmentReference* pAttachmentRefs; // 99
	uint32_t* pPreserveAttachments; // 100
	int32 nMaxAttachmentRefs; // 101
	int32 nNumAttachmentRefs; // 102
	int32 nNumPreserveAttachments; // 103
	uint32 nMemoryBandwidthBytesPerPixel; // 104
	CUtlVector<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> > subPassDependencies; // 277
	VkRenderPass pRenderPass; // 283
	VkRenderPassCreateInfo renderPassCreateInfo; // 284
	CUtlVector<VkImageView_T*, CUtlMemory<VkImageView_T*, int> > framebufferAttachments; // 299
	CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> > imageTransitions; // 300
	uint32 nWidth; // 301
	uint32 nHeight; // 302
	int32_t nSwapChainColorTextureIndex; // 303
	VkFramebuffer pFramebuffer; // 404
	VkFramebufferCreateInfo framebufferCreateInfo; // 405
	CUtlVector<VkFramebuffer_T*, CUtlMemory<VkFramebuffer_T*, int> > swapChainFramebuffers; // 418
	SwapChainHandle_t hSwapChain; // 419
	{
		int32 nAttachment; // 75
		{
			const RenderPassAttachmentDesc_t& attachmentDesc; // 77
			const TextureSpecification_t* pTextureSpec; // 78
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 79
			}
			{
			}
			ComputeAASettings(RenderMultisampleType_t nType,
						VkSampleCountFlagBits* pSampleCount);  // 85
			ComputeAASettings(RenderMultisampleType_t nType,
						VkSampleCountFlagBits* pSampleCount);  // 90
			AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
					int i);  // 77
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 78
			CUtlMemory<VkAttachmentDescription, int>::Grow(
				int num);  // 806
			CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::AddToTail(); // 81
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 82
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 430
			{
			}
			CTextureManagerVulkan::GetVulkanImageViewFormat(
						HRenderTexture hTexture,
						RenderColorSpace_t rtColorSpace);  // 428
			CTextureManagerVulkan::GetVulkanImageViewFormat(
						HRenderTexture hTexture,
						RenderColorSpace_t rtColorSpace);  // 82
			CUtlMemory<VkAttachmentDescription, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::operator[](
					int i);  // 82
		}
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 75
	}
	{
		int32 nSubPass; // 105
		{
			const RenderPassSubPass_t& subPass; // 107
			int32 nColorAttachmentStartIndex; // 110
			uint32 nColorAttachmentCount; // 111
			int32 nDepthStencilAttachmentStartIndex; // 140
			bool bHasDepthStencilAttachment; // 141
			bool bHasReadOnlyDepthStencilAttachment; // 142
			int32 nResolveAttachmentStartIndex; // 170
			uint32 nResolveAttachmentCount; // 171
			int32 nInputAttachmentStartIndex; // 199
			uint32 nInputAttachmentCount; // 200
			int32 nPreserveAttachmentStartIndex; // 219
			uint32_t nPreserveAttachmentCount; // 220
			VulkanSubpassInfo_t subPassInfo; // 251
			{
				int32 nColorAttachment; // 112
				{
					int32 nAttachment; // 115
					uint32 nBytesPerPixel; // 122
					int32 nCurAttachmentIndex; // 132
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
					}
					AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 115
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 115
					{
						int nIndex; // 435
						Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
						AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
						Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
							int i);  // 442
						operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
								int i);  // 437
						CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
					}
					CRenderPassDesc::FindAttachment(
							HRenderTexture hTexture);  // 115
					CUtlMemory<VkAttachmentDescription, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::operator[](
							int i);  // 122
					AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 135
				}
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 112
			}
			{
				int32 nAttachment; // 144
				{
					int32 nCurAttachmentIndex; // 147
					uint32 nBytesPerPixel; // 157
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
					}
					CUtlMemory<VkAttachmentDescription, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::operator[](
							int i);  // 157
				}
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 144
				{
					int nIndex; // 435
					Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
					AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
							int i);  // 437
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
				}
				CRenderPassDesc::FindAttachment(
						HRenderTexture hTexture);  // 144
			}
			{
				int32 nColorAttachment; // 176
				{
					uint32_t nResolveAttachmentIndex; // 178
					VkImageLayout nImageLayout; // 179
					int32 nCurAttachmentIndex; // 190
					{
						int32 nResolveAttachment; // 180
						Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this); // 180
						AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
						Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 442
						operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
								int i);  // 182
						AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 452
						Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
							int i);  // 442
						operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
								int i);  // 182
						CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 182
						AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 452
						Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
							int i);  // 442
						operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
								int i);  // 185
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
					}
				}
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 176
			}
			{
				int32 nInputAttachment; // 201
				{
					int32 nAttachment; // 204
					int32 nCurAttachmentIndex; // 211
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
					}
					AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 204
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 204
					{
						int nIndex; // 435
						Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
						AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
						Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
							int i);  // 442
						operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
								int i);  // 437
						CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
					}
					CRenderPassDesc::FindAttachment(
							HRenderTexture hTexture);  // 204
					AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 214
				}
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 201
			}
			{
				int32 nPresrveAttachment; // 221
				{
					int32 nAttachment; // 224
					int32 nCurAttachmentIndex; // 231
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
					}
					AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this,
							int i);  // 224
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 224
					{
						int nIndex; // 435
						Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
						AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
						Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
							int i);  // 442
						operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
								int i);  // 437
						CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
					}
					CRenderPassDesc::FindAttachment(
							HRenderTexture hTexture);  // 224
				}
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this); // 221
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 237
			}
			{
				uint32 nColorAttachment; // 253
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::GrowMemory(
						int num);  // 1198
				CopyConstruct<VkFormat>(VkFormat* pMemory,
							const VkFormat& src);  // 1201
				CUtlMemory<VkFormat, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::AddToTail(
						const VkFormat& src);  // 257
				CUtlMemory<VkAttachmentDescription, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::operator[](
						int i);  // 256
			}
			AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
					int i);  // 107
			Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this); // 172
			CUtlMemory<VkSubpassDescription, int>::Grow(
				int num);  // 806
			CUtlVectorBase<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> >::AddToTail(); // 238
			CUtlMemory<VkSubpassDescription, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> >::operator[](
					int i);  // 239
			CUtlMemory<VkFormat, int>::ValidateGrowSize(); // 475
			CUtlMemory<VkFormat, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >::CUtlVector(); // 72
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 72
			VulkanSubpassInfo_t::VulkanSubpassInfo_t(); // 251
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 252
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 265
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 265
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 268
			CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::NumAllocated(); // 1196
			CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::Base(); // 112
			CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::Base(); // 368
			CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::IsGrowable(); // 823
			CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<VkFormat, int>::Base(); // 112
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Base(); // 368
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::SetCount(
				int count);  // 573
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::end(); // 574
			CUtlMemory<VkFormat, int>::Base(); // 112
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Base(); // 102
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::begin(); // 574
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 85
			V_memcpy(void* dest,
				const void* src,
				ptrdiff_t count);  // 180
			UtlTraitsCopyRange<RenderPassSubPassDependency_t>(const RenderPassSubPassDependency_t* pFrom,
										const RenderPassSubPassDependency_t* pFromEnd,
										RenderPassSubPassDependency_t* pTo);  // 173
			UtlTraitsCopyRange<VkFormat>(const VkFormat* pFrom,
							const VkFormat* pFromEnd,
							VkFormat* pTo);  // 574
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::operator=(
					const CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >& other);  // 565
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::operator=(
					const CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >& other);  // 452
			CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >::operator=(
					const CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >& src);  // 434
			CUtlMemory<VkFormat, int>::ValidateGrowSize(); // 475
			CUtlMemory<VkFormat, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
			CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >::CUtlVector(
					const CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >& src);  // 72
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 72
			VulkanSubpassInfo_t::VulkanSubpassInfo_t(
						const VulkanSubpassInfo_t  &);  // 1520
			CopyConstruct<CRenderPassVulkan::VulkanSubpassInfo_t>(VulkanSubpassInfo_t* pMemory,
										const VulkanSubpassInfo_t& src);  // 1201
			CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::AddToTail(
					const VulkanSubpassInfo_t& src);  // 271
			CUtlMemory<VkFormat, int>::Purge(); // 903
			CUtlMemory<VkFormat, int>::Purge(); // 1799
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Purge(); // 560
			ValidateAlignment<VkFormat>(void); // 508
			CUtlMemory<VkFormat, int>::Purge(); // 510
			CUtlMemory<VkFormat, int>::~CUtlMemory(); // 562
			CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::~CUtlVectorBase(); // 410
			CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >::~CUtlVector(); // 72
			VulkanSubpassInfo_t::~VulkanSubpassInfo_t(); // 272
			CUtlMemory<VkAttachmentDescription, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::operator[](
					int i);  // 262
		}
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this); // 105
	}
	{
		int32 nAttachment; // 304
		{
			const RenderPassAttachmentDesc_t& attachmentDesc; // 306
			const TextureSpecification_t* pTextureSpec; // 307
			const VkFormat* pVulkanFormat; // 308
			bool bSwapChainColorTexture; // 309
			VkImageView pImageView; // 327
			VkImageAspectFlags nImageAspectMask; // 328
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 311
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 322
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 323
			}
			{
				SwapChainHandle_t hSwapChain; // 337
				SwapChainBuffer_t hBuffer; // 338
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 335
				}
				{
					const CSwapChainVulkan* pSwapChain; // 341
					CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
									SwapChainHandle_t hSwapChain);  // 341
				}
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 339
			}
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
					int i);  // 329
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 333
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 351
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 351
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 351
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 353
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 380
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 386
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 386
			CVulkanObject<VkImageView_T::Get()>* this); // 393
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 388
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 388
			{
			}
			CVulkanObject<VkImageView_T::Get()>* this); // 389
			CVulkanObject<VkImageView_T::Get()>* this); // 389
			CVulkanObject<VkImageView_T::Get()>* this); // 393
			CTextureManagerVulkan::GetColorViewForArraySlice(
							HRenderTexture hTexture,
							RenderColorSpace_t colorSpace,
							int nSlice);  // 353
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 357
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 399
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 405
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 405
			CVulkanObject<VkImageView_T::Get()>* this); // 406
			CVulkanObject<VkImageView_T::Get()>* this); // 406
			CTextureManagerVulkan::GetColorTargetViewForMipLevel(
							HRenderTexture hTexture,
							RenderColorSpace_t colorSpace,
							int nMip);  // 357
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 368
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 368
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 368
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 370
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 442
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 446
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 446
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 448
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 448
			{
			}
			CVulkanObject<VkImageView_T::Get()>* this); // 449
			CTextureManagerVulkan::GetDepthStencilViewForArraySlice(
							HRenderTexture hTexture,
							int nSlice);  // 370
			CVulkanObject<VkImageView_T::Get()>* this); // 416
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 412
			CTextureManagerVulkan::GetDepthStencilView(
						HRenderTexture hTexture);  // 374
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 374
			CUtlMemory<VkImageView_T::Grow(
				int num);  // 806
			CUtlVectorBase<VkImageView_T::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<VkImageView_T::AddToTail(); // 378
			CUtlMemory<VkImageView_T::operator[](
					int i);  // 588
			CUtlVectorBase<VkImageView_T::operator[](
					int i);  // 379
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 18
			VulkanRenderPassImageLayout_t::VulkanRenderPassImageLayout_t(); // 1479
			Construct<VulkanRenderPassImageLayout_t>(VulkanRenderPassImageLayout_t* pMemory); // 1148
			CUtlMemory<VulkanRenderPassImageLayout_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::Element(
				int i);  // 1148
			CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::AddToTail(); // 382
			CUtlMemory<VulkanRenderPassImageLayout_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::operator[](
					int i);  // 383
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 383
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 389
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 389
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 389
			AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
					int i);  // 306
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 307
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 308
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
			CTextureManagerVulkan::GetVulkanFormat(
					HRenderTexture hTexture);  // 308
		}
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 304
	}
	{
		HRenderTexture hSwapChainColorTexture; // 422
		SwapChainBuffer_t swapChainBuffer; // 423
		{
			const CSwapChainVulkan* pSwapChain; // 430
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 431
			}
			{
				uint32 nColorTexture; // 433
				{
					const RenderPassAttachmentDesc_t& attachmentDesc; // 435
					HRenderTexture hColorTexture; // 436
					VkImageView pImageView; // 439
					VkFramebuffer pSwapChainFramebuffer; // 443
					CUtlMemory<VkImageView_T::operator[](
							int i);  // 588
					CUtlVectorBase<VkImageView_T::operator[](
							int i);  // 442
					AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
							int i);  // 435
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
					CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 436
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 439
					CInterlockedIntT<int, 4>::operator int(); // 288
					ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 399
					CTextureInfoId::GetSpec(); // 403
					CTextureBase::GetSpec(); // 405
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 405
					CVulkanObject<VkImageView_T::Get()>* this); // 406
					CTextureManagerVulkan::GetColorTargetViewForMipLevel(
									HRenderTexture hTexture,
									RenderColorSpace_t colorSpace,
									int nMip);  // 439
					CUtlString::CUtlString(); // 149
					CUtlString::Get(); // 151
					CUtlString::~CUtlString(); // 153
					_DOVK(VkResult result,
						const char* pCommand);  // 444
					CopyConstruct<VkFramebuffer_T*>(VkFramebuffer_T** pMemory,
									VkFramebuffer_T* const& src);  // 1201
					CUtlMemory<VkFramebuffer_T::operator[](
							int i);  // 602
					CUtlVectorBase<VkFramebuffer_T::Element(
						int i);  // 1201
					CUtlVectorBase<VkFramebuffer_T::ResetDbgInfo(); // 824
					CUtlVectorBase<VkFramebuffer_T::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<VkFramebuffer_T::AddToTail(
							VkFramebuffer_T* const& src);  // 445
				}
			}
			CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
							SwapChainHandle_t hSwapChain);  // 430
		}
		AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 422
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 424
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 422
	}
	CUtlMemory<VkAttachmentDescription, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkAttachmentDescription, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::CUtlVector(); // 74
	CUtlMemory<VkSubpassDescription, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkSubpassDescription, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> >::CUtlVector(); // 97
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this); // 99
	CUtlMemory<VkSubpassDescription, int>::Purge(); // 903
	CUtlMemory<VkSubpassDescription, int>::Purge(); // 1799
	CUtlVectorBase<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> >::Purge(); // 560
	ValidateAlignment<VkSubpassDescription>(void); // 508
	CUtlMemory<VkSubpassDescription, int>::Purge(); // 510
	CUtlMemory<VkSubpassDescription, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkSubpassDescription, CUtlMemory<VkSubpassDescription, int> >::~CUtlVector(); // 459
	CUtlMemory<VkAttachmentDescription, int>::Purge(); // 903
	CUtlMemory<VkAttachmentDescription, int>::Purge(); // 1799
	CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::Purge(); // 560
	ValidateAlignment<VkAttachmentDescription>(void); // 508
	CUtlMemory<VkAttachmentDescription, int>::Purge(); // 510
	CUtlMemory<VkAttachmentDescription, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkAttachmentDescription, CUtlMemory<VkAttachmentDescription, int> >::~CUtlVector(); // 459
	CUtlMemory<VkSubpassDependency, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkSubpassDependency, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::CUtlVector(); // 277
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 294
	CUtlMemory<VkImageView_T::ValidateGrowSize(); // 475
	CUtlMemory<VkImageView_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkImageView_T::ResetDbgInfo(); // 530
	CUtlVectorBase<VkImageView_T::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkImageView_T::CUtlVector(); // 299
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::CUtlVector(); // 300
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 414
	CUtlMemory<VkFramebuffer_T::ValidateGrowSize(); // 475
	CUtlMemory<VkFramebuffer_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkFramebuffer_T::ResetDbgInfo(); // 530
	CUtlVectorBase<VkFramebuffer_T::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkFramebuffer_T::CUtlVector(); // 418
	CUtlMemory<VkFramebuffer_T::Purge(); // 903
	CUtlMemory<VkFramebuffer_T::Purge(); // 1799
	CUtlVectorBase<VkFramebuffer_T::Purge(); // 560
	ValidateAlignment<VkFramebuffer_T*>(void); // 508
	CUtlMemory<VkFramebuffer_T::Purge(); // 510
	CUtlMemory<VkFramebuffer_T::~CUtlMemory(); // 562
	CUtlVectorBase<VkFramebuffer_T::~CUtlVectorBase(); // 410
	CUtlVector<VkFramebuffer_T::~CUtlVector(); // 459
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::Purge(); // 903
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::Purge(); // 1799
	CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::Purge(); // 560
	ValidateAlignment<VulkanRenderPassImageLayout_t>(void); // 508
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::Purge(); // 510
	CUtlMemory<VulkanRenderPassImageLayout_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::~CUtlVector(); // 459
	CUtlMemory<VkImageView_T::Purge(); // 903
	CUtlMemory<VkImageView_T::Purge(); // 1799
	CUtlVectorBase<VkImageView_T::Purge(); // 560
	ValidateAlignment<VkImageView_T*>(void); // 508
	CUtlMemory<VkImageView_T::Purge(); // 510
	CUtlMemory<VkImageView_T::~CUtlMemory(); // 562
	CUtlVectorBase<VkImageView_T::~CUtlVectorBase(); // 410
	CUtlVector<VkImageView_T::~CUtlVector(); // 459
	CUtlMemory<VkSubpassDependency, int>::Purge(); // 903
	CUtlMemory<VkSubpassDependency, int>::Purge(); // 1799
	CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::Purge(); // 560
	ValidateAlignment<VkSubpassDependency>(void); // 508
	CUtlMemory<VkSubpassDependency, int>::Purge(); // 510
	CUtlMemory<VkSubpassDependency, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::~CUtlVector(); // 459
} /* size: 0, variables: 23, inline expansions: 87 (1971 bytes) */

// <00ADD064> vulkan/renderpassvulkan.cpp:462
// function calls: 3
void CRenderPassVulkan::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 464
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00ACF17D> vulkan/renderpassvulkan.cpp:462
void CRenderPassVulkan::AddRef()
{
} /* size: 0 */

// <00ADD12F> vulkan/renderpassvulkan.cpp:468
// function calls: 5
void CRenderPassVulkan::Release()
{
	CInterlockedIntT<int, 4>::operator int(); // 473
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 474
	CInterlockedIntT<int, 4>::operator int(); // 475
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00ACF125> vulkan/renderpassvulkan.cpp:468
// variables: 2
void CRenderPassVulkan::Release()
{
	const char   __FUNCTION__; // 14345
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 473
	}
} /* size: 0, variables: 1 */

// <00ACD39B> vulkan/renderpassvulkan.cpp:486
// variables: 30
// function calls: 130
void CRenderPassVulkan::ComputeSubpassDependencies(const CRenderPassDesc* pRenderPassDesc, CUtlVector<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >& subPassDependeciesOut)
{
	const RenderPassSubPassDepedencyList_t& subPassDepencyList; // 488
	int32 nSubPassDependencyIndex; // 489
	{
		int32 nSubPassDependency; // 490
		{
			const RenderPassSubPassDependency_t& subPassDependecy; // 492
			const RenderPassSubPass_t& srcSubPass; // 503
			const RenderPassSubPass_t& dstSubPass; // 504
			{
				int32 nSrcColorAttach; // 510
				{
					int32 nDstColorAttach; // 512
					{
						VkImageLayout nOldLayout; // 516
						VkImageLayout nNewLayout; // 517
						AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
						Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 442
						operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
								int i);  // 517
						CUtlMemory<VkSubpassDependency, int>::operator[](
								int i);  // 588
						CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
								int i);  // 524
					}
					Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 512
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 514
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 514
					AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 514
				}
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 510
			}
			{
				int32 nSrcColorAttach; // 530
				{
					int32 nDstInputAttach; // 532
					{
						VkImageLayout nOldLayout; // 536
						VkImageLayout nNewLayout; // 537
						AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
						Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 442
						operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
								int i);  // 537
						CUtlMemory<VkSubpassDependency, int>::operator[](
								int i);  // 588
						CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
								int i);  // 544
					}
					Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 532
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 534
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 534
					AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 534
				}
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 530
			}
			{
				int32 nDstInputAttach; // 552
				{
					VkImageLayout nOldLayout; // 556
					VkImageLayout nNewLayout; // 557
					AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 557
					CUtlMemory<VkSubpassDependency, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
							int i);  // 564
				}
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 552
				AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
				Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
					int i);  // 442
				operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 554
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 554
			}
			{
				VkImageLayout nOldLayout; // 574
				VkImageLayout nNewLayout; // 575
				CUtlMemory<VkSubpassDependency, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
						int i);  // 582
			}
			{
				int32 nSrcResolveAttach; // 587
				{
					int32 nDstInputAttach; // 589
					{
						VkImageLayout nOldLayout; // 593
						VkImageLayout nNewLayout; // 594
						AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
						Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 442
						operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
								int i);  // 594
						CUtlMemory<VkSubpassDependency, int>::operator[](
								int i);  // 588
						CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
								int i);  // 601
					}
					Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 589
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
							int i);  // 591
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 591
					AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
							int i);  // 591
				}
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this); // 587
			}
			AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this,
					int i);  // 492
			CUtlMemory<VkSubpassDependency, int>::NumAllocated(); // 1143
			CUtlMemory<VkSubpassDependency, int>::Base(); // 112
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::Base(); // 368
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::AddToTail(); // 494
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 495
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
					int i);  // 504
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 495
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 496
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 497
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 498
			AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
					int i);  // 503
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 550
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 550
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 570
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 570
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 572
		}
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this); // 490
	}
	{
		bool bHasColor; // 609
		bool bHasDepthStencil; // 610
		const RenderPassSubPassList_t& subpassList; // 612
		{
			int32 nSubPass; // 613
			Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this); // 613
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
					int i);  // 615
			Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 615
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 619
		}
		{
			VkPipelineStageFlags stageMask; // 635
			VkAccessFlags srcAccessMask; // 636
			VkAccessFlags dstAccestMask; // 637
			CUtlMemory<VkSubpassDependency, int>::NumAllocated(); // 1143
			CUtlMemory<VkSubpassDependency, int>::Base(); // 112
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::Base(); // 368
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::AddToTail(); // 627
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 628
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 628
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 651
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 652
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 653
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 654
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 655
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 656
			CUtlMemory<VkSubpassDependency, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >::operator[](
					int i);  // 657
		}
	}
	CRenderDeviceVulkan::UseExternalSubpassDependency(); // 607
} /* size: 2461, variables: 2, inline expansions: 1 (10 bytes) */

// <00ACCC24> vulkan/renderpassvulkan.cpp:665
// variables: 9
// function calls: 39
bool ExplicitRenderPassLessFunc(const CRenderPassDesc& rhs, const CRenderPassDesc& lhs)
{
	const RenderPassAttachmentDescList_t& rhsAttachments; // 694
	const RenderPassAttachmentDescList_t& lhsAttachments; // 695
	const RenderPassSubPassList_t& rhsSubPasses; // 704
	const RenderPassSubPassList_t& lhsSubPasses; // 705
	const RenderPassSubPassDepedencyList_t& rhsSubPassDependencies; // 714
	const RenderPassSubPassDepedencyList_t& lhsSubPassDependencies; // 715
	{
		int32 nAttachment; // 696
		AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 698
		AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 698
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 105
		RenderPassAttachmentDesc_t::operator<(
				const RenderPassAttachmentDesc_t& rhs);  // 698
	}
	{
		int32 nSubPass; // 706
		AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
				int i);  // 708
		AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this,
				int i);  // 708
	}
	{
		int32 nSubPassDependency; // 716
		AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this,
				int i);  // 718
		AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this,
				int i);  // 718
		RenderPassSubPassDependency_t::operator<(
				const RenderPassSubPassDependency_t& rhs);  // 718
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 420
	CRenderPassDesc::NumAttachments(); // 667
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 420
	CRenderPassDesc::NumAttachments(); // 667
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this); // 424
	CRenderPassDesc::NumSubPasses(); // 676
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this); // 424
	CRenderPassDesc::NumSubPasses(); // 676
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this); // 428
	CRenderPassDesc::NumSubPassDependencies(); // 685
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this); // 428
	CRenderPassDesc::NumSubPassDependencies(); // 685
} /* size: 714, variables: 6, inline expansions: 12 (44 bytes) */

// <00ACCA64> vulkan/renderpassvulkan.cpp:731
// variables: 4
// function calls: 4
void CRenderPassVulkan::GetFramebuffer()
{
	const char   __FUNCTION__; // 14534
	{
		const CSwapChainVulkan* pSwapChain; // 739
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 740
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 743
		}
		CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
						SwapChainHandle_t hSwapChain);  // 739
		CUtlVectorBase<VkFramebuffer_T::Count(); // 743
		CUtlMemory<VkFramebuffer_T::operator[](
				int i);  // 595
		CUtlVectorBase<VkFramebuffer_T::operator[](
				int i);  // 744
	}
} /* size: 0, variables: 1 */

// <00ACC5E7> vulkan/renderpassvulkan.cpp:751
// function calls: 18
void CRenderPassManagerVulkan::CRenderPassManagerVulkan()
{
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<CRenderPassDesc, CRenderPassVulkan::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 753
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 753
	CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this); // 178
	CUtlHashtable(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this,
			int minimumSize);  // 753
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::SetLessFunc(
			const LessFunc_t& func);  // 201
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 201
	CUtlMap<CRenderPassDesc, CRenderPassVulkan::SetLessFunc(
			LessFunc_t func);  // 755
} /* size: 182, inline expansions: 18 (211 bytes) */

// <00ACC5CE> vulkan/renderpassvulkan.cpp:751
void CRenderPassManagerVulkan::CRenderPassManagerVulkan()
{
} /* size: 0 */

// <00ACC004> vulkan/renderpassvulkan.cpp:758
// variables: 2
// function calls: 26
void CRenderPassManagerVulkan::~CRenderPassManagerVulkan()
{
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<short unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<short unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<short unsigned int, empty_t> >(CUtlKeyValuePair<short unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this); // 188
	ValidateAlignment<CUtlHashtableEntry<short unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this); // 760
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan*>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::~CUtlRBTree(); // 47
	CUtlMap<CRenderPassDesc, CRenderPassVulkan::~CUtlMap()(const CRenderPassDesc&, const CRenderPass this); // 760
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 760
} /* size: 258, inline expansions: 21 (582 bytes) */

// <00ACBF9B> vulkan/renderpassvulkan.cpp:758
void CRenderPassManagerVulkan::~CRenderPassManagerVulkan()
{
} /* size: 36 */

// <00ACBF32> vulkan/renderpassvulkan.cpp:763
void CRenderPassManagerVulkan::Init(VkDevice pDevice, CPipelineManagerVulkan* pPipelineManager)
{
} /* size: 26 */

// <00ACB780> vulkan/renderpassvulkan.cpp:770
// variables: 2
// function calls: 31
void CRenderPassManagerVulkan::Shutdown()
{
	{
		short unsigned int nIndex; // 772
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::FirstInorder(); // 351
		CUtlMap<CRenderPassDesc, CRenderPassVulkan::FirstInorder()(const CRenderPassDesc&, const CRend this); // 772
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Element(
			short unsigned int i);  // 92
		CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
				IndexType_t i);  // 774
		CRenderPassVulkan::~CRenderPassVulkan(); // 774
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsIdxValid(
				short unsigned int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::LeftChild(
				short unsigned int i);  // 667
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsValidIndex(
				short unsigned int i);  // 659
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsValidIndex(
				short unsigned int i);  // 1339
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::RightChild(
				short unsigned int i);  // 1343
		{
			short unsigned int left; // 1346
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					short unsigned int i);  // 611
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::LeftChild(
					short unsigned int i);  // 1347
		}
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Parent(
			short unsigned int i);  // 1352
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
				short unsigned int i);  // 617
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::RightChild(
				short unsigned int i);  // 633
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsRightChild(
				short unsigned int i);  // 1353
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Parent(
			short unsigned int i);  // 1357
		CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::NextInorder(
				short unsigned int i);  // 352
		CUtlMap<CRenderPassDesc, CRenderPassVulkan::NextInorder(
				IndexType_t i);  // 772
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Purge(); // 347
	CUtlMap<CRenderPassDesc, CRenderPassVulkan::Purge()(const CRenderPassDesc&, const CRenderPass this); // 776
} /* size: 487, inline expansions: 7 (264 bytes) */

// <00ACA623> vulkan/renderpassvulkan.cpp:782
// variables: 9
// function calls: 61
void CRenderPassManagerVulkan::FindOrCreateFromDesc(const CRenderPassDesc* pDesc)
{
	ExplicitRenderPassMapIndex_t nIndex; // 784
	CSemiAutoRWLockT<CThreadRWLock_FastRead> rwLockHelper; // 786
	const char   __FUNCTION__; // 14676
	{
		CRenderPassVulkan* pRenderPass; // 793
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 795
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
		CThreadRWLock_FastRead::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 1098
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
			const char* pFileName,
			int nLineNumber);  // 794
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 464
		CRenderPassVulkan::AddRef(); // 796
	}
	{
		CRenderPassVulkan* pRenderPass; // 807
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 805
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 806
		}
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 801
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 37
		CUtlMemory<VkFramebuffer_T::ValidateGrowSize(); // 475
		CUtlMemory<VkFramebuffer_T::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VkFramebuffer_T::ResetDbgInfo(); // 530
		CUtlVectorBase<VkFramebuffer_T::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VkFramebuffer_T::CUtlVector(); // 41
		CUtlMemory<VulkanRenderPassImageLayout_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<VulkanRenderPassImageLayout_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::CUtlVector(); // 41
		CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> >::CUtlVector(); // 41
		CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
				unsigned int value);  // 38
		CRenderPassVulkan::CRenderPassVulkan(
					VkDevice pDevice,
					CPipelineManagerVulkan& pipelineManager);  // 807
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
			const char* pFileName,
			int nLineNumber);  // 810
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
			const char* pFileName,
			int nLineNumber);  // 816
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_822; // 822
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 822
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short  this,
			KeyArg_t k);  // 823
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 827
		Remove(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this,
			KeyArg_t k);  // 825
	}
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 786
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 787
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::LeftChild(
			short unsigned int i);  // 1913
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Element(
		short unsigned int i);  // 1912
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CKeyLess::operator(
			const Node_t& left,
			const KeyType_t& right);  // 1914
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::RightChild(
			short unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::FindAltKeyType<CRenderPassDesc, CUtlMap<CRenderPassDesc, CRenderPassVulkan*>::CKeyLess>(
												const CRenderPassDesc& search,
												const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::FindAltKeyType<CRenderPassDesc>(
					const CRenderPassDesc& search);  // 243
	CUtlMap<CRenderPassDesc, CRenderPassVulkan::Find(
		const KeyType_t& key);  // 790
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 829
	RenderPassHandle_t::RenderPassHandle_t(
				int32 value);  // 828
} /* size: 0, variables: 3, inline expansions: 19 (746 bytes) */

// <00ACA163> vulkan/renderpassvulkan.cpp:834
// variables: 2
// function calls: 19
void CRenderPassManagerVulkan::GetRenderPass(RenderPassHandle_t hRenderPass)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_838; // 838
	CRenderPassVulkan* pRenderPass; // 839
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 838
	RenderPassHandle_t::GetRaw(); // 839
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Element(
		short unsigned int i);  // 92
	CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
			IndexType_t i);  // 839
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 840
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 58
	CRenderPassVulkan::SetLastFrameUsed(
			uint32 nFrameNumber);  // 840
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 842
} /* size: 201, variables: 2, inline expansions: 19 (430 bytes) */

// <00AC99D0> vulkan/renderpassvulkan.cpp:848
// variables: 5
// function calls: 24
void CRenderPassManagerVulkan::Delete(RenderPassHandle_t hRenderPass)
{
	CRenderPassVulkan* pRenderPass; // 850
	int32 nRefCount; // 851
	const char   __FUNCTION__; // 14318
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 852
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_858; // 858
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 858
		CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::operator[](
				int i);  // 706
		CUtlKeyValuePair<short unsigned int, empty_t>::CUtlKeyValuePair<short unsigned int>(
							const short unsigned int& k);  // 1514
		Construct<CUtlKeyValuePair<short unsigned int, empty_t>, short unsigned int&>(CUtlKeyValuePair<short unsigned int, empty_t>* pMemory); // 706
		DoInsert<short unsigned int>(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this,
						short unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 695
		DoInsert<short unsigned int>(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this,
						short unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 240
		Mix32HashFunctor::operator(
				uint32 n);  // 240
		Insert(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this,
			KeyArg_t k);  // 859
		RenderPassHandle_t::GetRaw(); // 859
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 860
	}
	CInterlockedIntT<int, 4>::operator int(); // 473
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 474
	CInterlockedIntT<int, 4>::operator int(); // 475
	CRenderPassVulkan::Release(); // 851
} /* size: 0, variables: 3, inline expansions: 6 (98 bytes) */

// <00AC78DF> vulkan/renderpassvulkan.cpp:866
// variables: 9
// function calls: 158
void CRenderPassManagerVulkan::Update(uint32 nHighestFrameCompletedGPU)
{
	CUtlVectorFixedGrowable<short unsigned int, 8> renderPassesToDelete; // 874
	const char   __FUNCTION__; // 14318
	{
		UtlHashHandle_t hElem; // 877
		{
			CRenderPassVulkan* pRenderPass; // 879
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 880
			}
			CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this,
					handle_t idx);  // 879
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Element(
				short unsigned int i);  // 92
			CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					IndexType_t i);  // 879
			CInterlockedIntT<int, 4>::GetRaw(); // 63
			CRenderPassVulkan::GetRefCount(); // 880
			CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 59
			CRenderPassVulkan::GetLastFrameUsed(); // 885
			CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::operator[](
					int i);  // 293
			Key(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short  this,
				handle_t idx);  // 887
			CUtlMemory<short unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<short unsigned int, int>::Base(); // 112
			CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::Base(); // 368
			CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::ResetDbgInfo(); // 824
			CUtlMemory<short unsigned int, int>::IsGrowable(); // 823
			CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 859
			CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 861
			CUtlMemory<short unsigned int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::Element(
				int i);  // 1201
			CopyConstruct<short unsigned int>(short unsigned int* pMemory,
								const short unsigned int& src);  // 1201
			CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::AddToTail(
					const short unsigned int& src);  // 887
		}
		CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::Count(); // 915
			CUtlHashtableEntry<short unsigned int, empty_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short  this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short this); // 877
		CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>::Count(); // 915
			CUtlHashtableEntry<short unsigned int, empty_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short  this,
				handle_t start);  // 877
	}
	{
		int32 nRenderPass; // 892
		{
			ExplicitRenderPassMapIndex_t nIndex; // 894
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::operator[](
					int i);  // 894
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Element(
				short unsigned int i);  // 92
			CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					IndexType_t i);  // 895
			CRenderPassVulkan::~CRenderPassVulkan(); // 895
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsIdxValid(
					short unsigned int i);  // 661
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsIdxAfter(
					short unsigned int i,
					const Iterator_t& it);  // 664
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					short unsigned int i);  // 611
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::LeftChild(
					short unsigned int i);  // 667
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsValidIndex(
					short unsigned int i);  // 659
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsValidIndex(
					short unsigned int i);  // 833
			{
			}
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Element(
				short unsigned int i);  // 834
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::RemoveAll(); // 191
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 194
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Purge(); // 55
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
			~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSubPassD this); // 796
			CUtlLeanVectorFixedGrowable<RenderPassSubPassDependency_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 369
			AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 183
			CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::RemoveAll(); // 191
			CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 194
			CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Purge(); // 55
			CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
			~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this); // 796
			CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::RemoveAll(); // 191
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 194
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Purge(); // 55
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
			~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this); // 796
			CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
			~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
			CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
			~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
			CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
			RenderPassSubPass_t::~RenderPassSubPass_t(); // 1526
			Destruct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory); // 76
			UtlTraitsDestructRange<RenderPassSubPass_t>(RenderPassSubPass_t* pStart,
									RenderPassSubPass_t* pEnd);  // 184
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::RemoveAll(); // 191
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 194
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Purge(); // 55
			CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
			~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, short i this); // 796
			CUtlLeanVectorFixedGrowable<RenderPassSubPass_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 369
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::RemoveAll(); // 191
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 194
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Purge(); // 55
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
			~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this); // 796
			CUtlLeanVectorFixedGrowable<RenderPassAttachmentDesc_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 369
			CRenderPassDesc::~CRenderPassDesc(); // 402
			Node_t::~Node_t(); // 1526
			Destruct<CUtlMap<CRenderPassDesc, CRenderPassVulkan*>::Node_t>(Node_t* pMemory); // 834
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					short unsigned int i);  // 737
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Links(
				short unsigned int i);  // 705
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::SetLeftChild(
					short unsigned int i,
					short unsigned int child);  // 835
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					short unsigned int i);  // 737
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Links(
				short unsigned int i);  // 711
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::SetRightChild(
					short unsigned int i,
					short unsigned int child);  // 836
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::FreeNode(
				short unsigned int i);  // 1213
			Iterator_t::Iterator_t(
					short unsigned int i);  // 86
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::InvalidIterator(); // 1528
			Iterator_t::operator==(
					const Iterator_t  it);  // 1528
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Root(); // 1531
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsIdxValid(
					short unsigned int i);  // 1531
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan::operator[](
					short unsigned int i);  // 605
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Parent(
				short unsigned int i);  // 1534
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsValid(); // 1523
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::IsValid(); // 1216
			{
			}
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::RemoveAt(
				short unsigned int elem);  // 1207
			CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::RemoveAt(
				short unsigned int elem);  // 339
			CUtlMap<CRenderPassDesc, CRenderPassVulkan::RemoveAt(
				IndexType_t i);  // 896
			Mix32HashFunctor::operator(
					uint32 n);  // 267
			Remove(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign this,
				KeyArg_t k);  // 897
		}
		CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::Count(); // 892
	}
	CUtlRBTree<CUtlMap<CRenderPassDesc, CRenderPassVulkan::Count(); // 177
	CUtlMap<CRenderPassDesc, CRenderPassVulkan::Count()(const CRenderPassDesc&, const CRend this); // 869
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			short unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<short unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<short unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					short unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, short unsigned int, 2>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, short unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, short unsigned int, 2>::Base(); // 231
	CUtlMemoryFixedGrowable<short unsigned int, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<short unsigned int, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 874
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<short unsigned int, int>::ConvertToExternalMemory(
				short unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<short unsigned int, int>::Purge_FixedGrowable(
				short unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<short unsigned int, int>::Purge_FixedGrowable(
				short unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, short unsigned int, 2>::Base(); // 237
	CUtlMemoryFixedGrowable<short unsigned int, 8, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::Base(); // 368
	CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<short unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<short unsigned int, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 8, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<short unsigned int, 8>::~CUtlVectorFixedGrowable(); // 899
} /* size: 0, variables: 2, inline expansions: 31 (908 bytes) */

// <00AC788A> vulkan/renderpassvulkan.cpp:905
void CRenderPassVulkan::GetMemoryBandwidth(uint32 nRenderAreaWidth, uint32 nRenderAreaHeight)
{
} /* size: 14 */

