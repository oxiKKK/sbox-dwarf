
//
// vulkan/indexbuffervulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 24
//

// <0051BC32> vulkan/indexbuffervulkan.cpp:31
// function calls: 4
void CIndexBufferVulkan::CIndexBufferVulkan(VkDevice pDeviceVulkan, RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t nExtraUsageFlags)
{
	IVmaAllocationBase::IVmaAllocationBase(); // 161
	IVmaAllocationBuffer::IVmaAllocationBuffer(); // 32
	operator|(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 48
	CIndexBufferVulkan::CIndexBufferVulkan(
				VkDevice pDeviceVulkan,
				RenderBufferType_t nType,
				const BufferDesc_t& desc,
				RenderBufferFlags_t nExtraUsageFlags);  // 31
} /* size: 184, inline expansions: 4 (14 bytes) */

// <0051BBE9> vulkan/indexbuffervulkan.cpp:31
void CIndexBufferVulkan::CIndexBufferVulkan(VkDevice pDeviceVulkan, RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t nExtraUsageFlags)
{
} /* size: 0 */

// <0051BA6F> vulkan/indexbuffervulkan.cpp:54
// function calls: 6
void CIndexBufferVulkan::~CIndexBufferVulkan()
{
	CIndexBufferBase::GetBufferType(); // 151
	CRenderDeviceVulkan::MemoryManager(); // 157
	CIndexBufferVulkan::Deallocate(); // 149
	CIndexBufferVulkan::Deallocate(); // 56
	IVmaAllocationBase::~IVmaAllocationBase(); // 165
	IVmaAllocationBuffer::~IVmaAllocationBuffer(); // 57
} /* size: 120, inline expansions: 6 (143 bytes) */

// <0051B8B4> vulkan/indexbuffervulkan.cpp:54
// function calls: 7
void CIndexBufferVulkan::~CIndexBufferVulkan()
{
	CIndexBufferBase::GetBufferType(); // 151
	CRenderDeviceVulkan::MemoryManager(); // 157
	CIndexBufferVulkan::Deallocate(); // 149
	CIndexBufferVulkan::Deallocate(); // 56
	IVmaAllocationBase::~IVmaAllocationBase(); // 165
	IVmaAllocationBuffer::~IVmaAllocationBuffer(); // 57
	CIndexBufferVulkan::~CIndexBufferVulkan(); // 57
} /* size: 133, inline expansions: 7 (242 bytes) */

// <0051B89B> vulkan/indexbuffervulkan.cpp:54
void CIndexBufferVulkan::~CIndexBufferVulkan()
{
} /* size: 0 */

// <0051B85E> vulkan/indexbuffervulkan.cpp:62
void CIndexBufferVulkan::Reset(const BufferDesc_t& desc)
{
} /* size: 96 */

// <0051B3D1> vulkan/indexbuffervulkan.cpp:82
// variables: 12
// function calls: 8
void CIndexBufferVulkan::Allocate(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, const void* pInitialData)
{
	const char   __FUNCTION__; // 44462
	const VkPhysicalDeviceLimits& limits; // 92
	VkDeviceSize nAlignmentBytes; // 93
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
	}
	{
		VkDeviceMemory pStagingGPUMemory; // 106
		VkBuffer pStagingBuffer; // 107
		VkDeviceSize nStagingOffset; // 108
		VkBufferCopy region; // 112
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 105
		}
		CRenderDeviceVulkan::MemoryManager(); // 119
	}
	{
		VkBufferDeviceAddressInfo bufferDeviceAddressInfo; // 125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
		}
	}
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 89
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 89
	Max<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 93
	CRenderDeviceVulkan::MemoryManager(); // 95
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 123
} /* size: 0, variables: 3, inline expansions: 7 (89 bytes) */

// <0051B2DB> vulkan/indexbuffervulkan.cpp:141
// function calls: 4
void CIndexBufferVulkan::DeleteThis()
{
	CRenderDeviceVulkan::MemoryManager(); // 143
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 199
	CVmaAllocationDeferredDeletion::CVmaAllocationDeferredDeletion(
					IVmaAllocationBase* pVmaObject);  // 143
} /* size: 78, inline expansions: 4 (34 bytes) */

// <0051CFB4> vulkan/indexbuffervulkan.cpp:149
// function calls: 3
void CIndexBufferVulkan::Deallocate()
{
	CIndexBufferBase::GetBufferType(); // 151
	CRenderDeviceVulkan::MemoryManager(); // 157
	CIndexBufferVulkan::Deallocate(); // 149
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0051B2C2> vulkan/indexbuffervulkan.cpp:149
void CIndexBufferVulkan::Deallocate()
{
} /* size: 0 */

// <0051CABE> vulkan/indexbuffervulkan.cpp:167
void* CIndexBufferVulkan::AllocateBackingStore(int nSizeInBytes)
{
	{
	}
} /* size: 0 */

// <0051B259> vulkan/indexbuffervulkan.cpp:167
// variables: 2
void* CIndexBufferVulkan::AllocateBackingStore(int nSizeInBytes)
{
	const char   __FUNCTION__; // 44546
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 169
	}
} /* size: 0, variables: 1 */

// <0051CB13> vulkan/indexbuffervulkan.cpp:174
void CIndexBufferVulkan::FreeBackingStore()
{
} /* size: 49 */

// <0051A8FF> vulkan/indexbuffervulkan.cpp:186
// variables: 13
// function calls: 17
void CIndexBufferVulkan::SetIndexData(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, const void* pIndexData, int nDataSize, int nOffset)
{
	const RenderBufferType_t  bufferType; // 188
	const char   __FUNCTION__; // 44504
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
	{
		CThreadMutex s_allocationMutex; // 202
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_205; // 205
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 205
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 212
		}
		{
			const VkPipelineStageFlagBits  usedStageBits; // 223
			const VkAccessFlagBits  usedAccessBits; // 224
			VkDeviceMemory pStagingGPUMemory; // 226
			VkBuffer pStagingBuffer; // 227
			VkDeviceSize nStagingOffset; // 228
			VkBufferCopy region; // 237
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
			}
			CIndexBufferVulkan::GetIndexSize(); // 216
			CRenderDeviceVulkan::MemoryManager(); // 234
			CRenderDeviceVulkan::MemoryManager(); // 244
		}
		CThreadMutex::CThreadMutex(
				const char* pName);  // 202
	}
	{
		LockDesc_t lockDesc; // 255
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 273
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 263
		CIndexBufferVulkan::Unlock(
			CRenderContextVulkan* pRenderContext,
			VulkanCommandBuffer_t* pCommandBuffer,
			int nWrittenSizeInBytes);  // 264
	}
	CIndexBufferVulkan::GetIndexSize(); // 193
	CIndexBufferBase::GetBufferType(); // 188
} /* size: 0, variables: 2, inline expansions: 2 (16 bytes) */

// <0051A4FA> vulkan/indexbuffervulkan.cpp:284
// variables: 7
// function calls: 5
void CIndexBufferVulkan::Lock(VulkanCommandBuffer_t* pCommandBuffer, int nMaxSizeInBytes, LockDesc_t* pDesc)
{

indexBufferLockFailed: // 369
	const char   __FUNCTION__; // 44399
	void* pData; // 288
	VkResult nResult; // 289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 286
	}
	{
		int32 nBackingStoreSizeRequired; // 329
		void* pBackingStore; // 334
		{
		}
		CIndexBufferVulkan::AllocateBackingStore(
					int nSizeInBytes);  // 334
	}
	{
		void* pBackingStore; // 346
		{
		}
		CIndexBufferVulkan::AllocateBackingStore(
					int nSizeInBytes);  // 346
	}
	CIndexBufferBase::GetBufferType(); // 314
	CMemoryManagerVulkan::GetVmaAllocator(); // 1491
	GetVmaAllocator(void); // 358
} /* size: 0, variables: 3, goto labels: 1, inline expansions: 3 (24 bytes) */

// <0051D07F> vulkan/indexbuffervulkan.cpp:375
void CIndexBufferVulkan::Unlock(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nWrittenSizeInBytes)
{
} /* size: 25 */

// <0051CB51> vulkan/indexbuffervulkan.cpp:375
// variables: 4
// function calls: 10
void CIndexBufferVulkan::Unlock(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nWrittenSizeInBytes)
{
	{
	}
	{
	}
	CIndexBufferBase::GetBufferType(); // 392
	CIndexBufferBase::GetBackingStore(); // 411
	{
		VkDeviceMemory pStagingGPUMemory; // 415
		VkBuffer pStagingBuffer; // 416
		VkDeviceSize nStagingOffset; // 417
		VkBufferCopy region; // 426
		CRenderDeviceVulkan::MemoryManager(); // 423
		CRenderDeviceVulkan::MemoryManager(); // 433
	}
	CIndexBufferBase::GetBackingStore(); // 447
	CIndexBufferVulkan::FreeBackingStore(); // 448
	CMemoryManagerVulkan::GetVmaAllocator(); // 1491
	GetVmaAllocator(void); // 441
	CRenderDeviceVulkan::MemoryManager(); // 442
	CIndexBufferBase::GetBackingStore(); // 400
} /* size: 0, inline expansions: 8 (62 bytes) */

// <0051A43C> vulkan/indexbuffervulkan.cpp:375
// variables: 7
void CIndexBufferVulkan::Unlock(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nWrittenSizeInBytes)
{
	const char   __FUNCTION__; // 44441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 380
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 390
	}
	{
		VkDeviceMemory pStagingGPUMemory; // 415
		VkBuffer pStagingBuffer; // 416
		VkDeviceSize nStagingOffset; // 417
		VkBufferCopy region; // 426
	}
} /* size: 0, variables: 1 */

// <0051A339> vulkan/indexbuffervulkan.cpp:454
// variables: 3
void* CIndexBufferVulkan::AllocatePerFrameDynamicPooled(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nBytes)
{
	const char   __FUNCTION__; // 44588
	void* pAlloc; // 457
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 456
	}
} /* size: 0, variables: 2 */

// <0051A1C7> vulkan/indexbuffervulkan.cpp:463
// variables: 2
// function call: 1
void CIndexBufferVulkan::LockRegion(VulkanCommandBuffer_t* pCommandBuffer, int nOffset, int nMaxSizeInBytes, LockDesc_t* pDesc)
{
	const char   __FUNCTION__; // 44483
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 465
	}
	CIndexBufferBase::GetBufferType(); // 465
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00519E3D> vulkan/indexbuffervulkan.cpp:480
// variables: 9
// function calls: 3
void CIndexBufferVulkan::UnlockRegion(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, int nOffset, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	const char   __FUNCTION__; // 44504
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 482
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 483
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 484
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 490
	}
	{
		VkDeviceMemory pStagingGPUMemory; // 494
		VkBuffer pStagingBuffer; // 495
		VkDeviceSize nStagingOffset; // 496
		VkBufferCopy region; // 505
		CRenderDeviceVulkan::MemoryManager(); // 502
		CRenderDeviceVulkan::MemoryManager(); // 512
	}
	CIndexBufferBase::GetBufferType(); // 482
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00519AF6> vulkan/indexbuffervulkan.cpp:522
// variables: 4
// function calls: 7
void CIndexBufferVulkan::VmaCreateNewVulkanObject(uint64_t* pOldObjectOut)
{
	const char   __FUNCTION__; // 44567
	VkBuffer pBuffer; // 527
	VkBufferCreateInfo bufferCreateInfo; // 528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 524
	}
	CRenderDeviceVulkan::MemoryManager(); // 531
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 145
	_DOVK(VkResult result,
		const char* pCommand);  // 136
	_DOVK(VkResult result,
		const char* pCommand);  // 533
} /* size: 0, variables: 3, inline expansions: 7 (393 bytes) */

// <0051CA1C> vulkan/indexbuffervulkan.cpp:540
// variable: 1
// function call: 1
void CIndexBufferVulkan::VmaAssignNewObject(CRenderContextVulkan* pAssignContext, uint64_t nNewObject, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> > vecQueueToDeleteOut)
{
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 545
	{
		VkBufferDeviceAddressInfo bufferDeviceAddressInfo; // 547
		{
		}
	}
} /* size: 0, inline expansions: 1 (10 bytes) */

// <00519A51> vulkan/indexbuffervulkan.cpp:540
// variables: 3
void CIndexBufferVulkan::VmaAssignNewObject(CRenderContextVulkan* pAssignContext, uint64_t nNewObject, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> > vecQueueToDeleteOut)
{
	const char   __FUNCTION__; // 44525
	{
		VkBufferDeviceAddressInfo bufferDeviceAddressInfo; // 547
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
		}
	}
} /* size: 0, variables: 1 */

