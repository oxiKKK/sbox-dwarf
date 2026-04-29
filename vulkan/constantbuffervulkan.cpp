
//
// vulkan/constantbuffervulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 13
//

// <00476316> vulkan/constantbuffervulkan.cpp:28
// function calls: 6
void CConstantBufferVulkan::CConstantBufferVulkan(VkDevice pDeviceVulkan, ConstantBufferType_t nType, uint32 nViewAlignedSize, uint32 nAllViewsSize, uint32 nAllocatedSize, bool bCreatedByContext, bool bPerFrameWriteOnce, bool bPerFramePooled, const char* pDebugName)
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 31
	CDescriptorSetReferenced::CDescriptorSetReferenced(); // 43
	IVmaAllocationBase::IVmaAllocationBase(); // 161
	IVmaAllocationBuffer::IVmaAllocationBuffer(); // 43
	CUtlString::CUtlString(); // 43
	CUtlString::operator=(
			const char* src);  // 45
} /* size: 168, inline expansions: 6 (26 bytes) */

// <00476291> vulkan/constantbuffervulkan.cpp:28
void CConstantBufferVulkan::CConstantBufferVulkan(VkDevice pDeviceVulkan, ConstantBufferType_t nType, uint32 nViewAlignedSize, uint32 nAllViewsSize, uint32 nAllocatedSize, bool bCreatedByContext, bool bPerFrameWriteOnce, bool bPerFramePooled, const char* pDebugName)
{
} /* size: 0 */

// <004761D3> vulkan/constantbuffervulkan.cpp:48
// function calls: 2
void CConstantBufferVulkan::~CConstantBufferVulkan()
{
	CUtlString::~CUtlString(); // 57
	CRenderDeviceVulkan::MemoryManager(); // 52
} /* size: 154, inline expansions: 2 (55 bytes) */

// <0047605D> vulkan/constantbuffervulkan.cpp:48
// function calls: 6
void CConstantBufferVulkan::~CConstantBufferVulkan()
{
	CUtlString::~CUtlString(); // 57
	IVmaAllocationBase::~IVmaAllocationBase(); // 165
	IVmaAllocationBuffer::~IVmaAllocationBuffer(); // 57
	CDescriptorSetReferenced::~CDescriptorSetReferenced(); // 57
	CRenderDeviceVulkan::MemoryManager(); // 52
	CConstantBufferVulkan::~CConstantBufferVulkan(); // 57
} /* size: 132, inline expansions: 6 (115 bytes) */

// <00476044> vulkan/constantbuffervulkan.cpp:48
void CConstantBufferVulkan::~CConstantBufferVulkan()
{
} /* size: 0 */

// <00475EEA> vulkan/constantbuffervulkan.cpp:59
// variables: 2
// function calls: 4
void CConstantBufferVulkan::Allocate()
{
	const char   __FUNCTION__; // 21321
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 71
	}
	CRenderDeviceVulkan::MemoryManager(); // 69
	CUtlString::Get(); // 69
	CConstantBufferVulkan::IsPerFramePooled(); // 64
	CConstantBufferVulkan::IsPerFrameWriteOnce(); // 64
} /* size: 0, variables: 1, inline expansions: 4 (21 bytes) */

// <00475A60> vulkan/constantbuffervulkan.cpp:78
// variables: 15
// function calls: 7
void CConstantBufferVulkan::SetData(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, uint32 nStartView, uint32 nNumViews, const void* const* pViewData, int nDataSize)
{
	const char   __FUNCTION__; // 21294
	bool bAsyncCompute; // 90
	VkPipelineStageFlags nSrcStageMask; // 92
	VkPipelineStageFlags nDstStageMask; // 101
	uint32 nStartContiguousView; // 115
	uint32 nEndContiguousView; // 116
	VkDeviceMemory pStagingGPUMemory; // 117
	VkDeviceSize nOffset; // 118
	VkBuffer pStagingBuffer; // 119
	uint8_t* pMappedPtr; // 120
	VkDeviceSize nStagingBufferSize; // 123
	VkDeviceSize nStartOffset; // 134
	VkBufferCopy region; // 139
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 85
	}
	{
		uint32 nCopyView; // 127
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 129
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 89
	CConstantBufferVulkan::MarkUsed(
		uint nFrameNumber);  // 89
	CRenderDeviceVulkan::MemoryManager(); // 135
	CRenderDeviceVulkan::MemoryManager(); // 146
} /* size: 0, variables: 13, inline expansions: 5 (58 bytes) */

// <00475687> vulkan/constantbuffervulkan.cpp:150
// variables: 8
// function calls: 8
void CConstantBufferVulkan::SetDynamicConstantBufferData(CRenderContextVulkan* pRenderContext, uint32 nStartView, uint32 nNumViews, const void* const* pViewData, int nDataSize)
{
	const char   __FUNCTION__; // 21776
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
	{
		uint32 nView; // 164
		{
			uint8_t* pBuffer; // 166
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 79
			V_memcpy(void* dest,
				const void* src,
				uint count);  // 167
		}
	}
	{
		uint8_t* pPeristentlyMappedPtr; // 176
		{
			uint32 nView; // 179
			{
				uint8_t* pBuffer; // 181
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 79
				V_memcpy(void* dest,
					const void* src,
					uint count);  // 182
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 153
	CConstantBufferVulkan::MarkUsed(
		uint nFrameNumber);  // 153
	CConstantBufferVulkan::IsPerFrameWriteOnce(); // 156
} /* size: 0, variables: 1, inline expansions: 4 (19 bytes) */

// <004754ED> vulkan/constantbuffervulkan.cpp:194
// variables: 3
// function calls: 3
void* CConstantBufferVulkan::GetDynamicConstantBufferPersistentPointerForLock(CRenderContextVulkan* pRenderContext, int nSize)
{
	const char   __FUNCTION__; // 22226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 203
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 205
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 198
	CConstantBufferVulkan::MarkUsed(
		uint nFrameNumber);  // 198
} /* size: 0, variables: 1, inline expansions: 3 (18 bytes) */

// <0047542D> vulkan/constantbuffervulkan.cpp:210
// variables: 2
void CConstantBufferVulkan::InitializeDynamicConstantBufferWithoutData(CRenderContextVulkan* pRenderContext, int nSize)
{
	const char   __FUNCTION__; // 22089
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 1 */

// <0047535A> vulkan/constantbuffervulkan.cpp:219
// variables: 2
// function call: 1
void CConstantBufferVulkan::GetBufferAndOffset(VkBuffer* ppBufferOut, VkDeviceSize* pOffsetOut)
{
	const char   __FUNCTION__; // 21546
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 231
	}
	CConstantBufferVulkan::IsPerFramePooled(); // 224
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00475019> vulkan/constantbuffervulkan.cpp:240
// variables: 4
// function calls: 7
void CConstantBufferVulkan::VmaCreateNewVulkanObject(uint64_t* pOldObjectOut)
{
	const char   __FUNCTION__; // 21683
	VkBuffer pBuffer; // 245
	VkBufferCreateInfo bufferCreateInfo; // 246
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	CRenderDeviceVulkan::MemoryManager(); // 249
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
		const char* pCommand);  // 251
} /* size: 0, variables: 3, inline expansions: 7 (393 bytes) */

// <00476C31> vulkan/constantbuffervulkan.cpp:259
void CConstantBufferVulkan::VmaAssignNewObject(CRenderContextVulkan* pAssignContext, uint64_t nNewObject, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> > vecQueueToDeleteOut)
{
} /* size: 9 */

