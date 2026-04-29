
//
// vulkan/imagelayouttracker.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 14
//

// <005047BD> vulkan/imagelayouttracker.cpp:18
// function calls: 4
void CImageLayoutTracker::CImageLayoutTracker()
{
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<CVulkanImage::Init(); // 178
	CUtlHashtable<CVulkanImage::CUtlHashtable(
			int minimumSize);  // 18
} /* size: 43, inline expansions: 4 (31 bytes) */

// <005047A4> vulkan/imagelayouttracker.cpp:18
void CImageLayoutTracker::CImageLayoutTracker()
{
} /* size: 0 */

// <00504685> vulkan/imagelayouttracker.cpp:25
// function calls: 6
void CImageLayoutTracker::~CImageLayoutTracker()
{
	ValidateAlignment<CUtlHashtableEntry<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::~CUtlMemory(); // 188
	CUtlHashtable<CVulkanImage::~CUtlHashtable(); // 27
} /* size: 70, inline expansions: 6 (88 bytes) */

// <005044F3> vulkan/imagelayouttracker.cpp:25
// function calls: 7
void CImageLayoutTracker::~CImageLayoutTracker()
{
	ValidateAlignment<CUtlHashtableEntry<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::~CUtlMemory(); // 188
	CUtlHashtable<CVulkanImage::~CUtlHashtable(); // 27
	CImageLayoutTracker::~CImageLayoutTracker(); // 27
} /* size: 77, inline expansions: 7 (131 bytes) */

// <005044DA> vulkan/imagelayouttracker.cpp:25
void CImageLayoutTracker::~CImageLayoutTracker()
{
} /* size: 0 */

// <005044AB> vulkan/imagelayouttracker.cpp:32
inline bool IsWholeResourceTransition(uint32 nNumMipLevelsToBind, uint32 nArraySize)
{
} /* size: 0 */

// <00501F7D> vulkan/imagelayouttracker.cpp:42
// variables: 26
// function calls: 146
void CImageLayoutTracker::AddImageTransition(CRenderContextVulkan* pRenderContext, VkCommandBuffer pCmdBuffer, CVulkanImage* pVulkanImage, uint32 nBaseMipLevel, uint32 nNumMipLevelsToBind, uint32 nBaseArraySlice, uint32 nArraySize, VkImageLayout vkImageState, RenderMultisampleType_t nMultisampleType, VkImageAspectFlags nImageAspectFlags, bool bForce)
{
	VulkanCommandBufferType_t nCommandBufferType; // 44
	PackedVulkanImageLayout packedImageState; // 46
	uint32 nNumSubResources; // 47
	PackedVulkanImageLayout* pSubResourceImageStates; // 48
	PackedVulkanImageLayout* pFinalSubResourceImageStates; // 49
	bool bDidInsert; // 51
	ImageTransitionHandle_t hElem; // 52
	ImageTransition_t& imageTransition; // 180
	PackedVulkanImageLayout fillImageState; // 192
	{
		ImageTransition_t& imageTransition; // 55
		{
			uint32 nSubResource; // 79
		}
		{
			uint32 nMip; // 87
			{
				uint32 nSlice; // 89
				{
					uint32 nSubIndex; // 91
					UnpackVulkanImageLayout(PackedVulkanImageLayout packedLayout); // 106
				}
				CVulkanImage::GetNumArraySlices(); // 89
			}
			CVulkanImage::GetNumMipLevels(); // 87
		}
		{
			uint32 nMip; // 124
			{
				uint32 nSlice; // 126
				{
					uint32 nSubIndex; // 128
					UnpackVulkanImageLayout(PackedVulkanImageLayout packedLayout); // 133
				}
			}
		}
		{
			uint32 nMip; // 146
			{
				uint32 nSlice; // 148
				{
					uint32 nSubIndex; // 150
					UnpackVulkanImageLayout(PackedVulkanImageLayout packedLayout); // 165
				}
			}
		}
		CUtlMemory<CUtlHashtableEntry<CVulkanImage::operator[](
				int i);  // 297
		CUtlHashtable<CVulkanImage::operator[](
				handle_t idx);  // 55
		ImageTransition_t::GetSubResourceImageStates(
						int nStates);  // 63
		ImageTransition_t::GetSubResourceImageStates(
						int nStates);  // 146
		ImageTransition_t::GetFinalSubResourceImageStates(
						int nStates);  // 64
		UnpackVulkanImageLayout(PackedVulkanImageLayout packedLayout); // 77
		CVulkanImage::GetNumArraySlices(); // 123
		CVulkanImage::GetNumMipLevels(); // 122
		CVulkanImage::GetNumArraySlices(); // 145
		CVulkanImage::GetNumMipLevels(); // 144
	}
	{
		uint32 nSubResource; // 193
	}
	{
		uint32 nMip; // 204
		{
			uint32 nArraySlice; // 206
			{
				uint32 nIndex; // 208
			}
		}
	}
	CRenderContextVulkan::IsAsyncComputeCommandBuffer(); // 44
	PackVulkanImageLayout(VkImageLayout vkLayout); // 46
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::operator[](
			int i);  // 706
	CUtlKeyValuePair<CVulkanImage::CUtlKeyValuePair<CVulkanImage*>(
					CVulkanImage* const& k);  // 1514
	Construct<CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>, CVulkanImage*&>(CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* pMemory); // 706
	CUtlHashtable<CVulkanImage::DoInsert<CVulkanImage*>(
				CVulkanImage* k,
				unsigned int h,
				bool* pDidInsert);  // 695
	CUtlHashtable<CVulkanImage::DoInsert<CVulkanImage*>(
				CVulkanImage* k,
				unsigned int h,
				bool* pDidInsert);  // 243
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 243
	CUtlHashtable<CVulkanImage::FindOrInsertDefault(
				KeyArg_t k,
				bool* pDidInsert);  // 52
	CVulkanImage::GetNumMipLevels(); // 47
	CVulkanImage::GetNumArraySlices(); // 47
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::operator[](
			int i);  // 297
	CUtlHashtable<CVulkanImage::operator[](
			handle_t idx);  // 180
	IsWholeResourceTransition(uint32 nNumMipLevelsToBind,
					uint32 nArraySize);  // 182
	ImageTransition_t::GetSubResourceImageStates(
					int nStates);  // 189
	ImageTransition_t::GetSubResourceImageStates(
					int nStates);  // 146
	ImageTransition_t::GetFinalSubResourceImageStates(
					int nStates);  // 190
	CVulkanImage::GetNumMipLevels(); // 202
	CVulkanImage::GetNumArraySlices(); // 203
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	{
	}
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CDependencyDescriptor::AlignedByteArray_t(); // 228
	CUtlMemory<CDependencyDescriptor::CUtlMemory(
			CDependencyDescriptor** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CDependencyDescriptor::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::CUtlMemoryFixedGrowable_Base(
					CDependencyDescriptor** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 231
	CUtlMemoryFixedGrowable<CDependencyDescriptor::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 530
	CUtlVectorBase<CDependencyDescriptor::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CDependencyDescriptor::CUtlVectorFixedGrowable(
				int growSize);  // 296
	{
	}
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CDependencyDescriptor::AlignedByteArray_t(); // 228
	CUtlMemory<CDependencyDescriptor::CUtlMemory(
			CDependencyDescriptor** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CDependencyDescriptor::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::CUtlMemoryFixedGrowable_Base(
					CDependencyDescriptor** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 231
	CUtlMemoryFixedGrowable<CDependencyDescriptor::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 530
	CUtlVectorBase<CDependencyDescriptor::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CDependencyDescriptor::CUtlVectorFixedGrowable(
				int growSize);  // 296
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<64>::CBufferStringN(); // 296
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CRenderPipelineStats::CRenderPipelineStats(); // 296
	CCommandStream::CCommandStream(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CCommandStream>::GetObject(); // 390
	CTSPool<CCommandStream>::Get(); // 645
	{
	}
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CDependencyDescriptor::AlignedByteArray_t(); // 228
	CUtlMemory<CDependencyDescriptor::CUtlMemory(
			CDependencyDescriptor** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CDependencyDescriptor::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::CUtlMemoryFixedGrowable_Base(
					CDependencyDescriptor** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 231
	CUtlMemoryFixedGrowable<CDependencyDescriptor::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 530
	CUtlVectorBase<CDependencyDescriptor::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CDependencyDescriptor::CUtlVectorFixedGrowable(
				int growSize);  // 296
	{
	}
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CDependencyDescriptor::AlignedByteArray_t(); // 228
	CUtlMemory<CDependencyDescriptor::CUtlMemory(
			CDependencyDescriptor** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CDependencyDescriptor::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::CUtlMemoryFixedGrowable_Base(
					CDependencyDescriptor** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 231
	CUtlMemoryFixedGrowable<CDependencyDescriptor::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 530
	CUtlVectorBase<CDependencyDescriptor::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CDependencyDescriptor::CUtlVectorFixedGrowable(
				int growSize);  // 296
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<64>::CBufferStringN(); // 296
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CRenderPipelineStats::CRenderPipelineStats(); // 296
	CCommandStream::CCommandStream(); // 1479
	Construct<CCommandStream>(CCommandStream* pMemory); // 646
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 649
	CCommandStreamBuilder::EnsureStream(); // 641
	CCommandStreamBuilder::EnsureStream(); // 515
	CCommandStreamBuilder::GetCurrentStream(); // 516
	{
		int nAlignedUsed; // 384
		{
			void* pData; // 387
		}
	}
	CCommandStream::AllocExtraData(
			int nBytes,
			int nAlign);  // 516
	CCommandStreamBuilder::AllocExtraData(
			int nBytes,
			int nAlign);  // 187
} /* size: 2757, variables: 9, inline expansions: 131 (7351 bytes) */

// <00501B7D> vulkan/imagelayouttracker.cpp:228
// variables: 6
// function calls: 10
void CImageLayoutTracker::GetKnownImageLayout(CVulkanImage* pVulkanImage, uint32 nMipLevel, uint32 nArraySlice)
{
	ImageTransitionHandle_t hElem; // 230
	ImageTransition_t& imageTransition; // 237
	uint32 nNumSubResources; // 238
	PackedVulkanImageLayout* pFinalSubResourceImageStates; // 239
	uint32 nIndex; // 241
	VkImageLayout nImageLayout; // 242
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlHashtable<CVulkanImage::Find(
		KeyArg_t k);  // 230
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::operator[](
			int i);  // 297
	CUtlHashtable<CVulkanImage::operator[](
			handle_t idx);  // 237
	CVulkanImage::GetNumMipLevels(); // 238
	CVulkanImage::GetNumArraySlices(); // 238
	ImageTransition_t::GetSubResourceImageStates(
					int nStates);  // 146
	ImageTransition_t::GetFinalSubResourceImageStates(
					int nStates);  // 239
	UnpackVulkanImageLayout(PackedVulkanImageLayout packedLayout); // 242
} /* size: 215, variables: 6, inline expansions: 10 (282 bytes) */

// <00501653> vulkan/imagelayouttracker.cpp:251
// variables: 11
// function calls: 10
void CImageLayoutTracker::UpdateImageTransitionFinalLayout(CVulkanImage* pVulkanImage, uint32 nBaseMipLevel, uint32 nNumMipLevelsToBind, uint32 nBaseArraySlice, uint32 nArraySize, VkImageLayout vkImageState, RenderMultisampleType_t nMultisampleType)
{
	ImageTransitionHandle_t hElem; // 253
	const char   __FUNCTION__; // 35655
	ImageTransition_t& imageTransition; // 261
	PackedVulkanImageLayout packedImageState; // 262
	uint32 nNumSubResources; // 263
	PackedVulkanImageLayout* pFinalSubResourceImageStates; // 264
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 254
	}
	{
		uint32 nSubResource; // 268
	}
	{
		uint32 nMip; // 277
		{
			uint32 nArraySlice; // 279
			{
				uint32 nIndex; // 281
			}
		}
	}
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlHashtable<CVulkanImage::Find(
		KeyArg_t k);  // 253
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::operator[](
			int i);  // 297
	CUtlHashtable<CVulkanImage::operator[](
			handle_t idx);  // 261
	PackVulkanImageLayout(VkImageLayout vkLayout); // 262
	CVulkanImage::GetNumMipLevels(); // 263
	CVulkanImage::GetNumArraySlices(); // 263
	ImageTransition_t::GetSubResourceImageStates(
					int nStates);  // 146
	ImageTransition_t::GetFinalSubResourceImageStates(
					int nStates);  // 264
} /* size: 0, variables: 6, inline expansions: 10 (346 bytes) */

// <00501095> vulkan/imagelayouttracker.cpp:294
// variables: 10
// function calls: 20
void CImageLayoutTracker::MergeImageTransitions(CImageLayoutTracker& refTracker)
{
	{
		UtlHashHandle_t hElem; // 296
		{
			ImageTransition_t& imageTransition; // 298
			ImageTransitionHandle_t hNewElem; // 300
			{
				ImageTransition_t& existingImageTransition; // 309
				uint32 nNumSubResources; // 310
				{
					uint32 nSubResource; // 318
					{
						VkImageLayout nExistingLayout; // 320
						VkImageLayout nNewImageLayout; // 321
					}
				}
			}
			CUtlMemory<CUtlHashtableEntry<CVulkanImage::operator[](
					int i);  // 297
			CUtlHashtable<CVulkanImage::operator[](
					handle_t idx);  // 298
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<CVulkanImage::Find(
				KeyArg_t k);  // 300
			CUtlMemory<CUtlHashtableEntry<CVulkanImage::operator[](
					int i);  // 720
			CUtlKeyValuePair<CVulkanImage::CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>(
												CVulkanImage* const& k,
												const ImageTransition_t& v);  // 1514
			Construct<CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>, CVulkanImage*&, const CImageLayoutTracker::ImageTransition_t&>(CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* pMemory); // 720
			CUtlHashtable<CVulkanImage::DoInsert<CVulkanImage*>(
						CVulkanImage* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			CUtlHashtable<CVulkanImage::DoInsert<CVulkanImage*>(
						CVulkanImage* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			CUtlHashtable<CVulkanImage::Insert(
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 304
		}
		CUtlMemory<CUtlHashtableEntry<CVulkanImage::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<CVulkanImage::Count(); // 915
			CUtlHashtableEntry<CVulkanImage::IsValid(); // 917
		}
		CUtlHashtable<CVulkanImage::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<CVulkanImage::FirstHandle(); // 296
		CUtlMemory<CUtlHashtableEntry<CVulkanImage::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<CVulkanImage::Count(); // 915
			CUtlHashtableEntry<CVulkanImage::IsValid(); // 917
		}
		CUtlHashtable<CVulkanImage::NextHandle(
				handle_t start);  // 296
	}
} /* size: 409 */

// <00500E30> vulkan/imagelayouttracker.cpp:337
// variables: 9
void ComputeImageMemoryBarrierMasks(VulkanCommandBufferType_t nCommandBufferType, VkImageLayout prevLayout, VkImageLayout newLayout, VkPipelineStageFlags* pSrcStageMaskOut, VkPipelineStageFlags* pDstStageMaskOut, VkAccessFlags* pSrcAccessMaskOut, VkAccessFlags* pDstAccessMaskOut)
{
	VkAccessFlags nSrcAccessMask; // 340
	VkAccessFlags nDstAccessMask; // 341
	VkPipelineStageFlags nSrcStageMask; // 342
	VkPipelineStageFlags nDstStageMask; // 343
	bool bComputeQueue; // 344
	const char   __FUNCTION__; // 35606
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 429
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 530
	}
	{
		VkPipelineStageFlags nInvalidComputeQueueFlags; // 538
	}
} /* size: 0, variables: 6 */

// <00500C15> vulkan/imagelayouttracker.cpp:561
// variables: 5
void CImageLayoutTracker::ExecuteImageTransition(CRenderContextVulkan* pRenderContext, VkCommandBuffer pCmdBuffer, VulkanCommandBufferType_t nCommandBufferType, CVulkanImage* pVulkanImage, uint32 nBaseMipLevel, uint32 nNumMipLevels, uint32 nBaseArraySlice, uint32 nArraySize, VkImageLayout prevLayout, VkImageLayout newLayout, RenderMultisampleType_t nMultisampleType, VkImageAspectFlags nImageAspectFlags)
{
	VkImageMemoryBarrier imageMemoryBarrier; // 563
	VkAccessFlags nSrcAccessMask; // 566
	VkAccessFlags nDstAccessMask; // 567
	VkPipelineStageFlags nSrcStageMask; // 568
	VkPipelineStageFlags nDstStageMask; // 569
} /* size: 319, variables: 5 */

// <004FF8F8> vulkan/imagelayouttracker.cpp:600
// variables: 26
// function calls: 60
void CImageLayoutTracker::BuildStateTransitions(VkCommandBuffer pCmdBuffer, VulkanCommandBufferType_t nCommandBufferType)
{
	CUtlLeanVectorFixedGrowable<VkImageMemoryBarrier, 16, short int> imageMemoryBarriers; // 602
	VkPipelineStageFlags nSrcStageMask; // 603
	VkPipelineStageFlags nDstStageMask; // 604
	{
		UtlHashHandle_t hElem; // 606
		{
			ImageTransition_t& imageTransition; // 608
			CVulkanImage* pVulkanImage; // 612
			uint32 nNumSubResources; // 613
			PackedVulkanImageLayout* pSubResourceImageStates; // 614
			PackedVulkanImageLayout* pFinalSubResourceImageStates; // 615
			{
				uint32 nMip; // 616
				{
					uint32 nSlice; // 618
					{
						uint32 nIndex; // 620
						{
							VkImageMemoryBarrier imageMemoryBarrier; // 624
							VkImageLayout prevLayout; // 626
							VkImageLayout newLayout; // 627
							VkAccessFlags nSrcAccessMask; // 628
							VkAccessFlags nDstAccessMask; // 629
							VkPipelineStageFlags nAdditionalSrcStageMask; // 630
							VkPipelineStageFlags nAdditionalDstStageMask; // 631
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
								CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 64
								CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 169
								memcpy(void* __dest,
									const void* __src,
									size_t __len);  // 85
								V_memcpy(void* dest,
									const void* src,
									ptrdiff_t count);  // 91
								UtlTraitsMoveRawMemoryRange<VkImageMemoryBarrier>(VkImageMemoryBarrier* pFrom,
															VkImageMemoryBarrier* pFromEnd,
															VkImageMemoryBarrier* pTo);  // 170
							}
							CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::EnsureCapacity(
									int nCapacity,
									bool bConservative);  // 629
							CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 64
							CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 630
							AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier, shor this); // 638
							AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier, shor this,
									const VkImageMemoryBarrier& src);  // 653
							UnpackVulkanImageLayout(PackedVulkanImageLayout packedLayout); // 627
						}
						UnpackVulkanImageLayout(PackedVulkanImageLayout packedLayout); // 622
						UnpackVulkanImageLayout(PackedVulkanImageLayout packedLayout); // 658
					}
					CVulkanImage::GetNumArraySlices(); // 618
				}
				CVulkanImage::GetNumMipLevels(); // 616
			}
			CUtlMemory<CUtlHashtableEntry<CVulkanImage::operator[](
					int i);  // 297
			CUtlHashtable<CVulkanImage::operator[](
					handle_t idx);  // 608
			CVulkanImage::GetNumMipLevels(); // 613
			CVulkanImage::GetNumArraySlices(); // 613
			ImageTransition_t::GetSubResourceImageStates(
							int nStates);  // 614
			ImageTransition_t::GetSubResourceImageStates(
							int nStates);  // 146
			ImageTransition_t::GetFinalSubResourceImageStates(
							int nStates);  // 615
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<CVulkanImage::Count(); // 915
			CUtlHashtableEntry<CVulkanImage::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<CVulkanImage::Base(); // 914
		CUtlHashtable<CVulkanImage::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<CVulkanImage::FirstHandle(); // 606
		CUtlMemory<CUtlHashtableEntry<CVulkanImage::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<CVulkanImage::Count(); // 915
			CUtlHashtableEntry<CVulkanImage::IsValid(); // 917
		}
		CUtlHashtable<CVulkanImage::NextHandle(
				handle_t start);  // 606
	}
	{
		VkCommandBufferBeginInfo beginInfo; // 669
		char sDebugName; // 675
		CUtlString::CUtlString(); // 149
		CUtlString::~CUtlString(); // 153
		CUtlString::Get(); // 151
		_DOVK(VkResult result,
			const char* pCommand);  // 672
		CUtlString::CUtlString(); // 149
		CUtlString::~CUtlString(); // 153
		CUtlString::Get(); // 151
		_DOVK(VkResult result,
			const char* pCommand);  // 673
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 677
		CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 680
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier this); // 680
		CUtlString::CUtlString(); // 149
		CUtlString::~CUtlString(); // 153
		CUtlString::Get(); // 151
		_DOVK(VkResult result,
			const char* pCommand);  // 684
	}
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier, shor this); // 799
	CUtlLeanVectorFixedGrowable<VkImageMemoryBarrier, 16, short int>::CUtlLeanVectorFixedGrowable(); // 602
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier this); // 667
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier, shor this); // 796
	CUtlLeanVectorFixedGrowable<VkImageMemoryBarrier, 16, short int>::~CUtlLeanVectorFixedGrowable(); // 688
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier this); // 687
} /* size: 3015, variables: 3, inline expansions: 12 (237 bytes) */

// <004FF7E2> vulkan/imagelayouttracker.cpp:693
// function calls: 4
void CImageLayoutTracker::ClearStateTransitions()
{
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CVulkanImage::Purge(); // 284
	CUtlHashtable<CVulkanImage::Purge(); // 697
} /* size: 69, inline expansions: 4 (110 bytes) */

