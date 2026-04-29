
//
// vulkan/vertexbuffervulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 26
//

// <00C86166> vulkan/vertexbuffervulkan.cpp:31
// function calls: 4
void CVertexBufferVulkan::CVertexBufferVulkan(VkDevice pDeviceVulkan, RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t nFlags, ImageFormat gpuBufferFormat, VulkanMemoryPoolType_t nDesiredMemoryPool, IBufferMovedListener* pMovedListener)
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 31
	CDescriptorSetReferenced::CDescriptorSetReferenced(); // 32
	IVmaAllocationBase::IVmaAllocationBase(); // 161
	IVmaAllocationBuffer::IVmaAllocationBuffer(); // 32
} /* size: 217, inline expansions: 4 (18 bytes) */

// <00C860F9> vulkan/vertexbuffervulkan.cpp:31
void CVertexBufferVulkan::CVertexBufferVulkan(VkDevice pDeviceVulkan, RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t nFlags, ImageFormat gpuBufferFormat, VulkanMemoryPoolType_t nDesiredMemoryPool, IBufferMovedListener* pMovedListener)
{
} /* size: 0 */

// <00C86000> vulkan/vertexbuffervulkan.cpp:50
// function calls: 3
void CVertexBufferVulkan::~CVertexBufferVulkan()
{
	IVmaAllocationBase::~IVmaAllocationBase(); // 165
	IVmaAllocationBuffer::~IVmaAllocationBuffer(); // 56
	CDescriptorSetReferenced::~CDescriptorSetReferenced(); // 56
} /* size: 70, inline expansions: 3 (0 bytes) */

// <00C85EC7> vulkan/vertexbuffervulkan.cpp:50
// function calls: 4
void CVertexBufferVulkan::~CVertexBufferVulkan()
{
	IVmaAllocationBase::~IVmaAllocationBase(); // 165
	IVmaAllocationBuffer::~IVmaAllocationBuffer(); // 56
	CDescriptorSetReferenced::~CDescriptorSetReferenced(); // 56
	CVertexBufferVulkan::~CVertexBufferVulkan(); // 56
} /* size: 86, inline expansions: 4 (52 bytes) */

// <00C85EAE> vulkan/vertexbuffervulkan.cpp:50
void CVertexBufferVulkan::~CVertexBufferVulkan()
{
} /* size: 0 */

// <00C85DB8> vulkan/vertexbuffervulkan.cpp:62
// function calls: 4
void CVertexBufferVulkan::DeleteThis()
{
	CRenderDeviceVulkan::MemoryManager(); // 64
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 199
	CVmaAllocationDeferredDeletion::CVmaAllocationDeferredDeletion(
					IVmaAllocationBase* pVmaObject);  // 64
} /* size: 78, inline expansions: 4 (34 bytes) */

// <00C85CD8> vulkan/vertexbuffervulkan.cpp:70
// variables: 2
void CVertexBufferVulkan::Reset(const BufferDesc_t& desc, RenderBufferFlags_t nFlags, ImageFormat nFormat)
{
	const char   __FUNCTION__; // 38556
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 76
	}
} /* size: 0, variables: 1 */

// <00C85544> vulkan/vertexbuffervulkan.cpp:102
// variables: 16
// function calls: 16
void CVertexBufferVulkan::Allocate(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, const void* pInitialData)
{
	const char   __FUNCTION__; // 38632
	VkDeviceSize nBufferSize; // 112
	VkDeviceSize nAlignmentBytes; // 120
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 107
	}
	{
		const VkPhysicalDeviceLimits& limits; // 124
		Max<long unsigned int>(const long unsigned int& val1,
					const long unsigned int& val2);  // 125
	}
	{
		const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& rayTracingPipelineProps; // 130
		VulkanPhysicalDeviceInfo(void); // 131
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 135
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
	{
		VkDeviceMemory pStagingGPUMemory; // 147
		VkBuffer pStagingBuffer; // 148
		VkDeviceSize nStagingOffset; // 149
		VkBufferCopy region; // 153
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
		}
		CRenderDeviceVulkan::MemoryManager(); // 159
	}
	{
		VkBufferViewCreateInfo bufferViewCreateInfo; // 166
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 173
	}
	{
		VkBufferDeviceAddressInfo bufferDeviceAddressInfo; // 178
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 181
		}
	}
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 109
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 109
	operator&(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 196
	CVertexBufferVulkan::HasUAVHiddenCounter(); // 113
	operator&(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 121
	CRenderDeviceVulkan::MemoryManager(); // 136
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 176
} /* size: 0, variables: 3, inline expansions: 9 (65 bytes) */

// <00C876FA> vulkan/vertexbuffervulkan.cpp:189
// function calls: 3
void CVertexBufferVulkan::Deallocate()
{
	CVertexBufferBase::GetBufferType(); // 191
	CRenderDeviceVulkan::MemoryManager(); // 197
	CVertexBufferVulkan::Deallocate(); // 189
} /* size: 145, inline expansions: 3 (109 bytes) */

// <00C8552B> vulkan/vertexbuffervulkan.cpp:189
void CVertexBufferVulkan::Deallocate()
{
} /* size: 0 */

// <00C86F6C> vulkan/vertexbuffervulkan.cpp:213
void* CVertexBufferVulkan::AllocateBackingStore(int nSizeInBytes)
{
	{
	}
} /* size: 0 */

// <00C854C2> vulkan/vertexbuffervulkan.cpp:213
// variables: 2
void* CVertexBufferVulkan::AllocateBackingStore(int nSizeInBytes)
{
	const char   __FUNCTION__; // 38921
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 215
	}
} /* size: 0, variables: 1 */

// <00C86FC1> vulkan/vertexbuffervulkan.cpp:220
void CVertexBufferVulkan::FreeBackingStore()
{
} /* size: 49 */

// <00C84B29> vulkan/vertexbuffervulkan.cpp:232
// variables: 11
// function calls: 18
void CVertexBufferVulkan::SetVertexData(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, const void* pVertexData, int nDataSize, int nOffset)
{
	const RenderBufferType_t  bufferType; // 234
	const char   __FUNCTION__; // 38757
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 239
	}
	{
		CThreadMutex s_allocationMutex; // 248
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_251; // 251
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 251
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 258
		}
		{
			VkDeviceMemory pStagingGPUMemory; // 268
			VkBuffer pStagingBuffer; // 269
			VkDeviceSize nStagingOffset; // 270
			VkBufferCopy region; // 282
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 262
			}
			CVertexBufferBase::GetBufferType(); // 122
			{
			}
			CVertexBufferBase::GetVertexSize(); // 262
			CRenderDeviceVulkan::MemoryManager(); // 276
			CRenderDeviceVulkan::MemoryManager(); // 289
		}
		CThreadMutex::CThreadMutex(
				const char* pName);  // 248
	}
	{
		LockDesc_t lockDesc; // 305
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 324
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 314
		CVertexBufferVulkan::Unlock(
			CRenderContextVulkan* pRenderContext,
			VulkanCommandBuffer_t* pCommandBuffer,
			int nWrittenByteCount);  // 315
	}
	CVertexBufferBase::GetVertexSize(); // 239
	CVertexBufferBase::GetBufferType(); // 234
} /* size: 0, variables: 2, inline expansions: 2 (16 bytes) */

// <00C84749> vulkan/vertexbuffervulkan.cpp:335
// variables: 7
// function calls: 5
void CVertexBufferVulkan::Lock(VulkanCommandBuffer_t* pCommandBuffer, int nMaxSizeInBytes, LockDesc_t* pDesc)
{

vertexBufferLockFailed: // 412
	const char   __FUNCTION__; // 38529
	void* pData; // 339
	VkResult nResult; // 340
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 337
	}
	{
		int32 nBackingStoreSizeRequired; // 372
		void* pBackingStore; // 377
		{
		}
		CVertexBufferVulkan::AllocateBackingStore(
					int nSizeInBytes);  // 377
	}
	{
		void* pBackingStore; // 389
		{
		}
		CVertexBufferVulkan::AllocateBackingStore(
					int nSizeInBytes);  // 389
	}
	CVertexBufferBase::GetBufferType(); // 358
	CMemoryManagerVulkan::GetVmaAllocator(); // 1491
	GetVmaAllocator(void); // 401
} /* size: 0, variables: 3, goto labels: 1, inline expansions: 3 (24 bytes) */

// <00C877D4> vulkan/vertexbuffervulkan.cpp:418
void CVertexBufferVulkan::Unlock(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nWrittenByteCount)
{
} /* size: 25 */

// <00C870F9> vulkan/vertexbuffervulkan.cpp:418
// variables: 4
// function calls: 15
void CVertexBufferVulkan::Unlock(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nWrittenByteCount)
{
	{
	}
	{
	}
	CVertexBufferBase::GetBufferType(); // 429
	{
		VkDeviceMemory pStagingGPUMemory; // 455
		VkBuffer pStagingBuffer; // 456
		VkDeviceSize nStagingOffset; // 457
		VkBufferCopy region; // 466
		CVertexBufferBase::GetBackingStore(); // 459
		CRenderDeviceVulkan::MemoryManager(); // 463
		CRenderDeviceVulkan::MemoryManager(); // 473
	}
	CVertexBufferBase::GetBackingStore(); // 449
	CVertexBufferVulkan::FreeBackingStore(); // 477
	CVertexBufferBase::GetBufferType(); // 122
	{
	}
	CVertexBufferBase::GetVertexSize(); // 478
	{
	}
	CVertexBufferBase::GetBackingStore(); // 488
	CVertexBufferVulkan::FreeBackingStore(); // 489
	CMemoryManagerVulkan::GetVmaAllocator(); // 1491
	GetVmaAllocator(void); // 482
	CRenderDeviceVulkan::MemoryManager(); // 483
	CVertexBufferBase::GetVertexSize(); // 435
	{
	}
	CVertexBufferBase::GetBackingStore(); // 438
} /* size: 0, inline expansions: 12 (125 bytes) */

// <00C8464F> vulkan/vertexbuffervulkan.cpp:418
// variables: 9
void CVertexBufferVulkan::Unlock(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nWrittenByteCount)
{
	const char   __FUNCTION__; // 38583
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 423
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 427
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 435
	}
	{
		VkDeviceMemory pStagingGPUMemory; // 455
		VkBuffer pStagingBuffer; // 456
		VkDeviceSize nStagingOffset; // 457
		VkBufferCopy region; // 466
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 478
	}
} /* size: 0, variables: 1 */

// <00C843BA> vulkan/vertexbuffervulkan.cpp:495
// variables: 4
// function calls: 4
void* CVertexBufferVulkan::AllocatePerFrameDynamicPooled(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nBytes)
{
	const char   __FUNCTION__; // 39129
	void* pAlloc; // 498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 497
	}
	{
		VkBufferViewCreateInfo bufferViewCreateInfo; // 504
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 511
	}
} /* size: 0, variables: 2 */

// <00C841B9> vulkan/vertexbuffervulkan.cpp:518
// variables: 3
// function calls: 2
void CVertexBufferVulkan::Allocate(VkBufferUsageFlags usage, VulkanMemoryPoolType_t nMemoryPoolType)
{
	const char   __FUNCTION__; // 38632
	{
		VkBufferDeviceAddressInfo bufferDeviceAddressInfo; // 537
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 540
		}
	}
	CRenderDeviceVulkan::MemoryManager(); // 521
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 535
} /* size: 0, variables: 1, inline expansions: 2 (13 bytes) */

// <00C84047> vulkan/vertexbuffervulkan.cpp:550
// variables: 2
// function call: 1
void CVertexBufferVulkan::LockRegion(VulkanCommandBuffer_t* pCommandBuffer, int nOffset, int nMaxSizeInBytes, LockDesc_t* pDesc)
{
	const char   __FUNCTION__; // 38681
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 552
	}
	CVertexBufferBase::GetBufferType(); // 552
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00C83CBD> vulkan/vertexbuffervulkan.cpp:567
// variables: 9
// function calls: 3
void CVertexBufferVulkan::UnlockRegion(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nOffset, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	const char   __FUNCTION__; // 38730
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 570
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 571
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 577
	}
	{
		VkDeviceMemory pStagingGPUMemory; // 581
		VkBuffer pStagingBuffer; // 582
		VkDeviceSize nStagingOffset; // 583
		VkBufferCopy region; // 592
		CRenderDeviceVulkan::MemoryManager(); // 589
		CRenderDeviceVulkan::MemoryManager(); // 599
	}
	CVertexBufferBase::GetBufferType(); // 569
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00C86EC8> vulkan/vertexbuffervulkan.cpp:607
// variable: 1
void CVertexBufferVulkan::VmaGetRelocatable()
{
	const bool  bIsRelocatable; // 614
} /* size: 20, variables: 1 */

// <00C83A1C> vulkan/vertexbuffervulkan.cpp:620
// variables: 4
// function calls: 5
void CVertexBufferVulkan::VmaCreateNewVulkanObject(uint64_t* pOldObjectOut)
{
	const char   __FUNCTION__; // 39014
	VkBuffer pBuffer; // 625
	VkBufferCreateInfo bufferCreateInfo; // 626
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 622
	}
	CRenderDeviceVulkan::MemoryManager(); // 629
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 631
} /* size: 0, variables: 3, inline expansions: 5 (188 bytes) */

// <00C86F01> vulkan/vertexbuffervulkan.cpp:639
void CVertexBufferVulkan::VmaCopyAdditionalBufferResources(CRenderContextVulkan* pCopyContext, VkBuffer pNewBuffer)
{
} /* size: 49 */

// <00C833C9> vulkan/vertexbuffervulkan.cpp:650
// variables: 4
// function calls: 21
void CVertexBufferVulkan::VmaAssignNewObject(CRenderContextVulkan* pAssignContext, uint64_t nNewObject, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> > vecQueueToDeleteOut)
{
	const char   __FUNCTION__; // 38872
	{
		VkBufferDeviceAddressInfo bufferDeviceAddressInfo; // 657
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 660
		}
	}
	{
		VkBufferViewCreateInfo bufferViewCreateInfo; // 667
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::NumAllocated(); // 1247
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Base(); // 112
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Base(); // 368
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::ResetDbgInfo(); // 824
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsGrowable(); // 823
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsExternallyAllocated(); // 859
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsExternallyAllocated(); // 861
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Grow(
			int num);  // 806
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::operator[](
				int i);  // 602
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Element(
			int i);  // 1252
		Construct<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CRefCounted<CRefCountServiceBase<true, CRefMT> >*>(CRefCounted<CRefCountServiceBase<true, CRefMT> >** pMemory); // 1252
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddToTail(
				CRefCounted<CRefCountServiceBase<true, CRefMT> > *& src);  // 666
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 75
		CVulkanObject<VkBufferView_T::CVulkanObject(
				VkDevice pDevice,
				VkBufferView_T* pObject);  // 666
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 674
	}
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 655
} /* size: 0, variables: 1, inline expansions: 1 (10 bytes) */

