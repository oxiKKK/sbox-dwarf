
//
// thirdparty/vulkan/vma/vk_mem_alloc.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 739
//	classes: 31
//	structs: 46
//

// <0055213F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:942
// member variables: 3
// struct size: 24
struct VmaDeviceMemoryCallbacks {
	PFN_vmaAllocateDeviceMemoryFunction pfnAllocate; /* 0 8 */
	PFN_vmaFreeDeviceMemoryFunction pfnFree; /* 8 8 */
	void * pUserData; /* 16 8 */
};

// <00552190> ../thirdparty/vulkan/vma/vk_mem_alloc.h:956
// member variables: 26
// struct size: 208
struct VmaVulkanFunctions {
	PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr; /* 0 8 */
	PFN_vkGetDeviceProcAddr vkGetDeviceProcAddr; /* 8 8 */
	PFN_vkGetPhysicalDeviceProperties vkGetPhysicalDeviceProperties; /* 16 8 */
	PFN_vkGetPhysicalDeviceMemoryProperties vkGetPhysicalDeviceMemoryProperties; /* 24 8 */
	PFN_vkAllocateMemory vkAllocateMemory; /* 32 8 */
	PFN_vkFreeMemory vkFreeMemory; /* 40 8 */
	PFN_vkMapMemory vkMapMemory; /* 48 8 */
	PFN_vkUnmapMemory vkUnmapMemory; /* 56 8 */
	PFN_vkFlushMappedMemoryRanges vkFlushMappedMemoryRanges; /* 64 8 */
	PFN_vkInvalidateMappedMemoryRanges vkInvalidateMappedMemoryRanges; /* 72 8 */
	PFN_vkBindBufferMemory vkBindBufferMemory; /* 80 8 */
	PFN_vkBindImageMemory vkBindImageMemory; /* 88 8 */
	PFN_vkGetBufferMemoryRequirements vkGetBufferMemoryRequirements; /* 96 8 */
	PFN_vkGetImageMemoryRequirements vkGetImageMemoryRequirements; /* 104 8 */
	PFN_vkCreateBuffer vkCreateBuffer; /* 112 8 */
	PFN_vkDestroyBuffer vkDestroyBuffer; /* 120 8 */
	PFN_vkCreateImage vkCreateImage; /* 128 8 */
	PFN_vkDestroyImage vkDestroyImage; /* 136 8 */
	PFN_vkCmdCopyBuffer vkCmdCopyBuffer; /* 144 8 */
	PFN_vkGetBufferMemoryRequirements2KHR vkGetBufferMemoryRequirements2KHR; /* 152 8 */
	PFN_vkGetImageMemoryRequirements2KHR vkGetImageMemoryRequirements2KHR; /* 160 8 */
	PFN_vkBindBufferMemory2KHR vkBindBufferMemory2KHR; /* 168 8 */
	PFN_vkBindImageMemory2KHR vkBindImageMemory2KHR; /* 176 8 */
	PFN_vkGetPhysicalDeviceMemoryProperties2KHR vkGetPhysicalDeviceMemoryProperties2KHR; /* 184 8 */
	PFN_vkGetDeviceBufferMemoryRequirements vkGetDeviceBufferMemoryRequirements; /* 192 8 */
	PFN_vkGetDeviceImageMemoryRequirements vkGetDeviceImageMemoryRequirements; /* 200 8 */
};

// <0055235B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1003
// member variables: 11
// struct size: 88
struct VmaAllocatorCreateInfo {
	VmaAllocatorCreateFlags flags; /* 0 4 */
	VkPhysicalDevice physicalDevice; /* 8 8 */
	VkDevice device; /* 16 8 */
	VkDeviceSize preferredLargeHeapBlockSize; /* 24 8 */
	const VkAllocationCallbacks * pAllocationCallbacks; /* 32 8 */
	const VmaDeviceMemoryCallbacks * pDeviceMemoryCallbacks; /* 40 8 */
	const VkDeviceSize * pHeapSizeLimit; /* 48 8 */
	const VmaVulkanFunctions * pVulkanFunctions; /* 56 8 */
	VkInstance instance; /* 64 8 */
	uint32_t vulkanApiVersion; /* 72 4 */
	const VkExternalMemoryHandleTypeFlagsKHR * pTypeExternalMemoryHandleTypes; /* 80 8 */
};

// <00C965AB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1082
// member variables: 3
// struct size: 24
struct VmaAllocatorInfo {
	VkInstance instance; /* 0 8 */
	VkPhysicalDevice physicalDevice; /* 8 8 */
	VkDevice device; /* 16 8 */
};

// <0055243E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1113
// member variables: 4
// struct size: 24
struct VmaStatistics {
	uint32_t blockCount; /* 0 4 */
	uint32_t allocationCount; /* 4 4 */
	VkDeviceSize blockBytes; /* 8 8 */
	VkDeviceSize allocationBytes; /* 16 8 */
};

// <00C96658> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1153
// member variables: 6
// struct size: 64
struct VmaDetailedStatistics {
	VmaStatistics statistics; /* 0 24 */
	uint32_t unusedRangeCount; /* 24 4 */
	VkDeviceSize allocationSizeMin; /* 32 8 */
	VkDeviceSize allocationSizeMax; /* 40 8 */
	VkDeviceSize unusedRangeSizeMin; /* 48 8 */
	VkDeviceSize unusedRangeSizeMax; /* 56 8 */
};

// <00C966D9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1175
// member variables: 3
// struct size: 3,136
struct VmaTotalStatistics {
	VmaDetailedStatistics memoryType[32]; /* 0 2048 */
	VmaDetailedStatistics memoryHeap[16]; /* 2048 1024 */
	VmaDetailedStatistics total; /* 3072 64 */
};

// <0055249A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1187
// member variables: 3
// struct size: 40
struct VmaBudget {
	VmaStatistics statistics; /* 0 24 */
	VkDeviceSize usage; /* 24 8 */
	VkDeviceSize budget; /* 32 8 */
};

// <005524E6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1224
// member variables: 8
// struct size: 48
struct VmaAllocationCreateInfo {
	VmaAllocationCreateFlags flags; /* 0 4 */
	VmaMemoryUsage usage; /* 4 4 */
	VkMemoryPropertyFlags requiredFlags; /* 8 4 */
	VkMemoryPropertyFlags preferredFlags; /* 12 4 */
	uint32_t memoryTypeBits; /* 16 4 */
	VmaPool pool; /* 24 8 */
	void * pUserData; /* 32 8 */
	float priority; /* 40 4 */
};

// <00552587> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1275
// member variables: 8
// struct size: 56
struct VmaPoolCreateInfo {
	uint32_t memoryTypeIndex; /* 0 4 */
	VmaPoolCreateFlags flags; /* 4 4 */
	VkDeviceSize blockSize; /* 8 8 */
	size_t minBlockCount; /* 16 8 */
	size_t maxBlockCount; /* 24 8 */
	float priority; /* 32 4 */
	VkDeviceSize minAllocationAlignment; /* 40 8 */
	void * pMemoryAllocateNext; /* 48 8 */
};

// <00552628> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1339
// member variables: 8
// struct size: 64
struct VmaAllocationInfo {
	uint32_t memoryType; /* 0 4 */
	VkDeviceMemory deviceMemory; /* 8 8 */
	VkDeviceSize offset; /* 16 8 */
	VkDeviceSize size; /* 24 8 */
	void * pMappedData; /* 32 8 */
	void * pUserData; /* 40 8 */
	const char * pName; /* 48 8 */
	VmaPool pool; /* 56 8 */
};

// <005526DD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1411
// member variables: 5
// struct size: 40
struct VmaDefragmentationInfo {
	VmaDefragmentationFlags flags; /* 0 4 */
	VmaPool pool; /* 8 8 */
	VkDeviceSize maxBytesPerPass; /* 16 8 */
	uint32_t maxAllocationsPerPass; /* 24 4 */
	PFN_vmaCheckDefragmentationBreak customBreakCallback; /* 32 8 */
};

// <0055274E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1438
// member variables: 3
// struct size: 24
struct VmaDefragmentationMove {
	VmaDefragmentationMoveOperation operation; /* 0 4 */
	VmaAllocation srcAllocation; /* 8 8 */
	VmaAllocation dstTmpAllocation; /* 16 8 */
};

// <0055279A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1457
// member variables: 2
// struct size: 16
struct VmaDefragmentationPassMoveInfo {
	uint32_t moveCount; /* 0 4 */
	VmaDefragmentationMove * pMoves; /* 8 8 */
};

// <005527DC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1488
// member variables: 4
// struct size: 24
struct VmaDefragmentationStats {
	VkDeviceSize bytesMoved; /* 0 8 */
	VkDeviceSize bytesFreed; /* 8 8 */
	uint32_t allocationsMoved; /* 16 4 */
	uint32_t deviceMemoryBlocksFreed; /* 20 4 */
};

// <00C96AF1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1508
// member variables: 3
// struct size: 24
struct VmaVirtualBlockCreateInfo {
	VkDeviceSize size; /* 0 8 */
	VmaVirtualBlockCreateFlags flags; /* 8 4 */
	const VkAllocationCallbacks * pAllocationCallbacks; /* 16 8 */
};

// <00C96B42> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1529
// member variables: 4
// struct size: 32
struct VmaVirtualAllocationCreateInfo {
	VkDeviceSize size; /* 0 8 */
	VkDeviceSize alignment; /* 8 8 */
	VmaVirtualAllocationCreateFlags flags; /* 16 4 */
	void * pUserData; /* 24 8 */
};

// <00C96BA3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1552
// member variables: 3
// struct size: 24
struct VmaVirtualAllocationInfo {
	VkDeviceSize offset; /* 0 8 */
	VkDeviceSize size; /* 8 8 */
	void * pUserData; /* 16 8 */
};

// <00583E84> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1583
VkResult vmaCreateAllocator(const VmaAllocatorCreateInfo *, VmaAllocator *)
{
} /* size: 0 */

// <00583916> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1665
void vmaGetHeapBudgets(VmaAllocator, VmaBudget *)
{
} /* size: 0 */

// <00583A7E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1728
VkResult vmaCreatePool(VmaAllocator, const VmaPoolCreateInfo *, VmaPool *)
{
} /* size: 0 */

// <00583A3F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1735
void vmaDestroyPool(VmaAllocator, VmaPool)
{
} /* size: 0 */

// <00583A59> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1752
void vmaGetPoolStatistics(VmaAllocator, VmaPool, VmaStatistics *)
{
} /* size: 0 */

// <00583ACC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1875
VkResult vmaAllocateMemoryForBuffer(VmaAllocator, VkBuffer, const VmaAllocationCreateInfo *, VmaAllocation *, VmaAllocationInfo *)
{
} /* size: 0 */

// <00583AF9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1896
VkResult vmaAllocateMemoryForImage(VmaAllocator, VkImage, const VmaAllocationCreateInfo *, VmaAllocation *, VmaAllocationInfo *)
{
} /* size: 0 */

// <00583CC4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1936
void vmaGetAllocationInfo(VmaAllocator, VmaAllocation, VmaAllocationInfo *)
{
} /* size: 0 */

// <005839E9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1947
void vmaSetAllocationUserData(VmaAllocator, VmaAllocation, void *)
{
} /* size: 0 */

// <00583AAD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:1960
void vmaSetAllocationName(VmaAllocator, VmaAllocation, const char *)
{
} /* size: 0 */

// <00519147> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2013
VkResult vmaMapMemory(VmaAllocator, VmaAllocation, void* *)
{
} /* size: 0 */

// <0051912D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2026
void vmaUnmapMemory(VmaAllocator, VmaAllocation)
{
} /* size: 0 */

// <00583D9F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2159
VkResult vmaBeginDefragmentation(VmaAllocator, const VmaDefragmentationInfo *, VmaDefragmentationContext *)
{
} /* size: 0 */

// <00583D3B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2172
void vmaEndDefragmentation(VmaAllocator, VmaDefragmentationContext, VmaDefragmentationStats *)
{
} /* size: 0 */

// <00583D6C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2187
VkResult vmaBeginDefragmentationPass(VmaAllocator, VmaDefragmentationContext, VmaDefragmentationPassMoveInfo *)
{
} /* size: 0 */

// <00583C55> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2210
VkResult vmaEndDefragmentationPass(VmaAllocator, VmaDefragmentationContext, VmaDefragmentationPassMoveInfo *)
{
} /* size: 0 */

// <00583C7E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2227
VkResult vmaBindBufferMemory(VmaAllocator, VmaAllocation, VkBuffer)
{
} /* size: 0 */

// <00583CA1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2264
VkResult vmaBindImageMemory(VmaAllocator, VmaAllocation, VkImage)
{
} /* size: 0 */

// <00583A08> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2337
VkResult vmaCreateBufferWithAlignment(VmaAllocator, const VkBufferCreateInfo *, const VmaAllocationCreateInfo *, VkDeviceSize, VkBuffer *, VmaAllocation *, VmaAllocationInfo *)
{
} /* size: 0 */

// <00583BE8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2413
void vmaDestroyBuffer(VmaAllocator, VkBuffer, VmaAllocation)
{
} /* size: 0 */

// <00583BC9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2453
void vmaDestroyImage(VmaAllocator, VkImage, VmaAllocation)
{
} /* size: 0 */

// <00583898> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2587
void vmaBuildStatsString(VmaAllocator, char* *, VkBool32)
{
} /* size: 0 */

// <0058383E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2592
void vmaFreeStatsString(VmaAllocator, char *)
{
} /* size: 0 */

// <00CF492B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2915
inline void VmaPtrToStr(char* outStr, size_t strLen, const void* ptr)
{
} /* size: 0 */

// <00CAEEA5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2922
// member functions: 16
// member variable: 1
// class size: 40
class VmaMutex {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:2924 */
	void VmaMutex(VmaMutex* , const VmaMutex& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:2924 */
	void VmaMutex(VmaMutex* , VmaMutex& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:2924 */
	VmaMutex& operator=(VmaMutex* , const VmaMutex& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:2924 */
	VmaMutex& operator=(VmaMutex* , VmaMutex& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:2926 */
	void VmaMutex(VmaMutex* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:2927 */
	void Lock(VmaMutex* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:2928 */
	void Unlock(VmaMutex* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:2929 */
	bool TryLock(VmaMutex* );
	mutex m_Mutex; /* 0 40 */
	void VmaMutex(class VmaMutex *, const class VmaMutex  &); /* linkage=_ZN8VmaMutexC4ERKS_ */
	void VmaMutex(class VmaMutex *, class VmaMutex &); /* linkage=_ZN8VmaMutexC4EOS_ */
	class VmaMutex & operator=(class VmaMutex *, const class VmaMutex  &); /* linkage=_ZN8VmaMutexaSERKS_ */
	class VmaMutex & operator=(class VmaMutex *, class VmaMutex &); /* linkage=_ZN8VmaMutexaSEOS_ */
	void VmaMutex(class VmaMutex *); /* linkage=_ZN8VmaMutexC4Ev */
	void Lock(class VmaMutex *); /* linkage=_ZN8VmaMutex4LockEv */
	void Unlock(class VmaMutex *); /* linkage=_ZN8VmaMutex6UnlockEv */
	bool TryLock(class VmaMutex *); /* linkage=_ZN8VmaMutex7TryLockEv */
};

// <00CF48B4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2926
void VmaMutex::VmaMutex()
{
} /* size: 0 */

// <00CF489B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2926
inline void VmaMutex::VmaMutex()
{
} /* size: 0 */

// <00CF4882> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2927
inline void VmaMutex::Lock()
{
} /* size: 0 */

// <00CF4869> ../thirdparty/vulkan/vma/vk_mem_alloc.h:2928
inline void VmaMutex::Unlock()
{
} /* size: 0 */

// <00CF484B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3267
inline uint32_t VmaCountBitsSet(uint32_t v)
{
} /* size: 0 */

// <00CF482B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3303
inline uint8_t VmaBitScanLSB(uint32_t mask)
{
} /* size: 0 */

// <00CF480B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3325
inline uint8_t VmaBitScanMSB(uint64_t mask)
{
} /* size: 0 */

// <00CBE501> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3383
inline long unsigned int VmaAlignUp<long unsigned int>(long unsigned int val, long unsigned int alignment)
{
} /* size: 0 */

// <00CBDDCB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3392
inline long unsigned int VmaAlignDown<long unsigned int>(long unsigned int val, long unsigned int alignment)
{
} /* size: 0 */

// <00CBE5B3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3407
inline long unsigned int VmaDivideRoundingUp<long unsigned int>(long unsigned int x, long unsigned int y)
{
} /* size: 0 */

// <00CF4790> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3474
// variables: 4
inline bool VmaBlocksOnSamePage(VkDeviceSize resourceAOffset, VkDeviceSize resourceASize, VkDeviceSize resourceBOffset, VkDeviceSize pageSize)
{
	VkDeviceSize resourceAEnd; // 3481
	VkDeviceSize resourceAEndPage; // 3482
	VkDeviceSize resourceBStart; // 3483
	VkDeviceSize resourceBStartPage; // 3484
} /* size: 0, variables: 4 */

// <00CF4763> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3494
inline bool VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1, VmaSuballocationType suballocType2)
{
} /* size: 0 */

// <00CF473A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3529
void VmaWriteMagicValue(void* pData, VkDeviceSize offset)
{
} /* size: 0 */

// <00CF470D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3543
bool VmaValidateMagicValue(const void* pData, VkDeviceSize offset)
{
} /* size: 0 */

// <00CF46EB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3563
void VmaFillGpuDefragmentationBufferCreateInfo(VkBufferCreateInfo& outBufCreateInfo)
{
} /* size: 0 */

// <00CBC317> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3582
// variables: 3
VmaSuballocation* VmaBinaryFindFirstNotLess<VmaSuballocationOffsetLess, VmaSuballocation*, VmaSuballocation>(VmaSuballocation* beg, VmaSuballocation* end, const VmaSuballocation& key, const VmaSuballocationOffsetLess& cmp)
{
	size_t down; // 3584
	size_t up; // 3584
	{
		const size_t  mid; // 3587
	}
} /* size: 0, variables: 2 */

// <00CBC28D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3582
// variables: 3
VmaSuballocation* VmaBinaryFindFirstNotLess<VmaSuballocationOffsetGreater, VmaSuballocation*, VmaSuballocation>(VmaSuballocation* beg, VmaSuballocation* end, const VmaSuballocation& key, const VmaSuballocationOffsetGreater& cmp)
{
	size_t down; // 3584
	size_t up; // 3584
	{
		const size_t  mid; // 3587
	}
} /* size: 0, variables: 2 */

// <00CBC1CB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3582
// variables: 3
const VmaSuballocation* VmaBinaryFindFirstNotLess<VmaSuballocationOffsetLess, const VmaSuballocation*, VmaSuballocation>(const VmaSuballocation* beg, const VmaSuballocation* end, const VmaSuballocation& key, const VmaSuballocationOffsetLess& cmp)
{
	size_t down; // 3584
	size_t up; // 3584
	{
		const size_t  mid; // 3587
	}
} /* size: 0, variables: 2 */

// <00CBC13B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3582
// variables: 3
const VmaSuballocation* VmaBinaryFindFirstNotLess<VmaSuballocationOffsetGreater, const VmaSuballocation*, VmaSuballocation>(const VmaSuballocation* beg, const VmaSuballocation* end, const VmaSuballocation& key, const VmaSuballocationOffsetGreater& cmp)
{
	size_t down; // 3584
	size_t up; // 3584
	{
		const size_t  mid; // 3587
	}
} /* size: 0, variables: 2 */

// <00CBE22D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3601
// variable: 1
VmaSuballocation* VmaBinaryFindSorted<VmaSuballocationOffsetLess, VmaSuballocation*, VmaSuballocation>(VmaSuballocation* const& beg, VmaSuballocation* const& end, const VmaSuballocation& value, const VmaSuballocationOffsetLess& cmp)
{
	VmaSuballocation* it; // 3603
} /* size: 0, variables: 1 */

// <00CBE1B3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3601
// variable: 1
VmaSuballocation* VmaBinaryFindSorted<VmaSuballocationOffsetGreater, VmaSuballocation*, VmaSuballocation>(VmaSuballocation* const& beg, VmaSuballocation* const& end, const VmaSuballocation& value, const VmaSuballocationOffsetGreater& cmp)
{
	VmaSuballocation* it; // 3603
} /* size: 0, variables: 1 */

// <00CBE0F4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3601
// variable: 1
const VmaSuballocation* VmaBinaryFindSorted<VmaSuballocationOffsetLess, const VmaSuballocation*, VmaSuballocation>(const VmaSuballocation* const& beg, const VmaSuballocation* const& end, const VmaSuballocation& value, const VmaSuballocationOffsetLess& cmp)
{
	const VmaSuballocation* it; // 3603
} /* size: 0, variables: 1 */

// <00CBE07A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3601
// variable: 1
const VmaSuballocation* VmaBinaryFindSorted<VmaSuballocationOffsetGreater, const VmaSuballocation*, VmaSuballocation>(const VmaSuballocation* const& beg, const VmaSuballocation* const& end, const VmaSuballocation& value, const VmaSuballocationOffsetGreater& cmp)
{
	const VmaSuballocation* it; // 3603
} /* size: 0, variables: 1 */

// <00CBD07A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3640
inline void VmaPnextChainPushFront<VkMemoryAllocateInfo, VkMemoryAllocateFlagsInfo>(VkMemoryAllocateInfo* mainStruct, VkMemoryAllocateFlagsInfo* newStruct)
{
} /* size: 0 */

// <00CBD039> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3640
inline void VmaPnextChainPushFront<VkMemoryAllocateInfo, VkMemoryPriorityAllocateInfoEXT>(VkMemoryAllocateInfo* mainStruct, VkMemoryPriorityAllocateInfoEXT* newStruct)
{
} /* size: 0 */

// <00CBCFF8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3640
inline void VmaPnextChainPushFront<VkMemoryAllocateInfo, VkExportMemoryAllocateInfo>(VkMemoryAllocateInfo* mainStruct, VkExportMemoryAllocateInfo* newStruct)
{
} /* size: 0 */

// <00CBCB5A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3640
inline void VmaPnextChainPushFront<VkMemoryAllocateInfo, VkMemoryDedicatedAllocateInfo>(VkMemoryAllocateInfo* mainStruct, VkMemoryDedicatedAllocateInfo* newStruct)
{
} /* size: 0 */

// <00CBCAC8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3640
inline void VmaPnextChainPushFront<VkMemoryRequirements2, VkMemoryDedicatedRequirements>(VkMemoryRequirements2* mainStruct, VkMemoryDedicatedRequirements* newStruct)
{
} /* size: 0 */

// <00CBC75A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3640
inline void VmaPnextChainPushFront<VkPhysicalDeviceMemoryProperties2, VkPhysicalDeviceMemoryBudgetPropertiesEXT>(VkPhysicalDeviceMemoryProperties2* mainStruct, VkPhysicalDeviceMemoryBudgetPropertiesEXT* newStruct)
{
} /* size: 0 */

// <00CF4634> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3648
// variables: 6
bool FindMemoryPreferences(bool isIntegratedGPU, const VmaAllocationCreateInfo& allocCreateInfo, VkFlags bufImgUsage, VkMemoryPropertyFlags& outRequiredFlags, VkMemoryPropertyFlags& outPreferredFlags, VkMemoryPropertyFlags& outNotPreferredFlags)
{
	{
		const bool  deviceAccess; // 3700
		const bool  hostAccessSequentialWrite; // 3701
		const bool  hostAccessRandom; // 3702
		const bool  hostAccessAllowTransferInstead; // 3703
		const bool  preferDevice; // 3704
		const bool  preferHost; // 3705
	}
} /* size: 0 */

// <00CF45ED> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3797
// variable: 1
void* VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks, size_t size, size_t alignment)
{
	void* result; // 3799
} /* size: 0, variables: 1 */

// <00CF45C4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3817
void VmaFree(const VkAllocationCallbacks* pAllocationCallbacks, void* ptr)
{
} /* size: 0 */

// <00CBD4F9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3831
VmaBlockMetadata_TLSF* VmaAllocate<VmaBlockMetadata_TLSF>(const VkAllocationCallbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <00CBD4D2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3831
VmaBlockMetadata_Linear* VmaAllocate<VmaBlockMetadata_Linear>(const VkAllocationCallbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <00CBC6E7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3831
VmaAllocator_T* VmaAllocate<VmaAllocator_T>(const VkAllocationCallbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <00CBC639> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3831
VmaVirtualBlock_T* VmaAllocate<VmaVirtualBlock_T>(const VkAllocationCallbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <00CBEC05> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
char* VmaAllocateArray<char>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBE57F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
RegionInfo* VmaAllocateArray<VmaBlockBufferImageGranularity::RegionInfo>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBE4CD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
short unsigned int* VmaAllocateArray<short unsigned int>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBD939> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
Block** VmaAllocateArray<VmaBlockMetadata_TLSF::Block*>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBC0D4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
VmaSuballocation* VmaAllocateArray<VmaSuballocation>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBB3E4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
StackItem* VmaAllocateArray<VmaJsonWriter::StackItem>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBB13C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
union Item* VmaAllocateArray<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Item>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBAE93> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
VmaDeviceMemoryBlock** VmaAllocateArray<VmaDeviceMemoryBlock*>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBAB4D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
FragmentedBlock* VmaAllocateArray<VmaDefragmentationContext_T::FragmentedBlock>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBAB19> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
VmaDefragmentationMove* VmaAllocateArray<VmaDefragmentationMove>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBA70B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
ItemBlock* VmaAllocateArray<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBA6D7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
ItemBlock* VmaAllocateArray<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBA07E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
union Item* VmaAllocateArray<VmaPoolAllocator<VmaAllocation_T>::Item>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBA017> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3837
VkMappedMemoryRange* VmaAllocateArray<VkMappedMemoryRange>(const VkAllocationCallbacks* pAllocationCallbacks, size_t count)
{
} /* size: 0 */

// <00CBD4A2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3847
void vma_delete<VmaBlockMetadata>(const VkAllocationCallbacks* pAllocationCallbacks, VmaBlockMetadata* ptr)
{
} /* size: 0 */

// <00CBC6B7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3847
void vma_delete<VmaAllocator_T>(const VkAllocationCallbacks* pAllocationCallbacks, VmaAllocator_T* ptr)
{
} /* size: 0 */

// <00CBC609> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3847
void vma_delete<VmaVirtualBlock_T>(const VkAllocationCallbacks* pAllocationCallbacks, VmaVirtualBlock_T* ptr)
{
} /* size: 0 */

// <00CBEBBB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3854
// variable: 1
void vma_delete_array<char>(const VkAllocationCallbacks* pAllocationCallbacks, char* ptr, size_t count)
{
	{
		size_t i; // 3858
	}
} /* size: 0 */

// <00CBE535> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3854
// variable: 1
void vma_delete_array<VmaBlockBufferImageGranularity::RegionInfo>(const VkAllocationCallbacks* pAllocationCallbacks, RegionInfo* ptr, size_t count)
{
	{
		size_t i; // 3858
	}
} /* size: 0 */

// <00CBE483> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3854
// variable: 1
void vma_delete_array<short unsigned int>(const VkAllocationCallbacks* pAllocationCallbacks, short unsigned int* ptr, size_t count)
{
	{
		size_t i; // 3858
	}
} /* size: 0 */

// <00CBDCE4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3854
// variable: 1
void vma_delete_array<VmaBlockMetadata_TLSF::Block*>(const VkAllocationCallbacks* pAllocationCallbacks, Block** ptr, size_t count)
{
	{
		size_t i; // 3858
	}
} /* size: 0 */

// <00CBCE2D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3854
// variable: 1
void vma_delete_array<VmaDefragmentationContext_T::StateBalanced>(const VkAllocationCallbacks* pAllocationCallbacks, StateBalanced* ptr, size_t count)
{
	{
		size_t i; // 3858
	}
} /* size: 0 */

// <00CBCDD8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3854
// variable: 1
void vma_delete_array<VmaDefragmentationContext_T::StateExtensive>(const VkAllocationCallbacks* pAllocationCallbacks, StateExtensive* ptr, size_t count)
{
	{
		size_t i; // 3858
	}
} /* size: 0 */

// <00CBBF97> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3854
// variable: 1
void vma_delete_array<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Item>(const VkAllocationCallbacks* pAllocationCallbacks, union Item* ptr, size_t count)
{
	{
		size_t i; // 3858
	}
} /* size: 0 */

// <00CBBDC1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3854
// variable: 1
void vma_delete_array<VmaPoolAllocator<VmaAllocation_T>::Item>(const VkAllocationCallbacks* pAllocationCallbacks, union Item* ptr, size_t count)
{
	{
		size_t i; // 3858
	}
} /* size: 0 */

// <00CF457B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3866
// variables: 2
char* VmaCreateStringCopy(const VkAllocationCallbacks* allocs, const char* srcStr)
{
	{
		const size_t  len; // 3870
		const char* result; // 3871
	}
} /* size: 0 */

// <00CF4532> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3879
// variable: 1
char* VmaCreateStringCopy(const VkAllocationCallbacks* allocs, const char* srcStr, size_t strLen)
{
	{
		const char* result; // 3883
	}
} /* size: 0 */

// <00CF44FA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3892
// variable: 1
void VmaFreeString(const VkAllocationCallbacks* allocs, char* str)
{
	{
		const size_t  len; // 3896
	}
} /* size: 0 */

// <00CF44DE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3934
void VmaClearStatistics(VmaStatistics& outStats)
{
} /* size: 0 */

// <00CF44AF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3942
void VmaAddStatistics(VmaStatistics& inoutStats, const VmaStatistics& src)
{
} /* size: 0 */

// <00CF4493> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3950
void VmaClearDetailedStatistics(VmaDetailedStatistics& outStats)
{
} /* size: 0 */

// <00CF446A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3960
void VmaAddDetailedStatisticsAllocation(VmaDetailedStatistics& inoutStats, VkDeviceSize size)
{
} /* size: 0 */

// <00CF4441> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3968
void VmaAddDetailedStatisticsUnusedRange(VmaDetailedStatistics& inoutStats, VkDeviceSize size)
{
} /* size: 0 */

// <00CF4418> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3975
void VmaAddDetailedStatistics(VmaDetailedStatistics& inoutStats, const VmaDetailedStatistics& src)
{
} /* size: 0 */

// <00CAF6CB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3989
// member functions: 6
// member variable: 1
// struct size: 8
struct VmaMutexLock {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:3991 */
	void VmaMutexLock(VmaMutexLock* , const VmaMutexLock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:3991 */
	void VmaMutexLock(VmaMutexLock* , VmaMutexLock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:3991 */
	VmaMutexLock& operator=(VmaMutexLock* , const VmaMutexLock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:3991 */
	VmaMutexLock& operator=(VmaMutexLock* , VmaMutexLock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:3993 */
	void VmaMutexLock(VmaMutexLock* , VmaMutex& , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:3998 */
	void ~VmaMutexLock(VmaMutexLock* );
	VmaMutex * m_pMutex; /* 0 8 */
};

// <00CF43F7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3993
void VmaMutexLock::VmaMutexLock(VmaMutex& mutex, bool useMutex)
{
} /* size: 0 */

// <00CF43C4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3993
inline void VmaMutexLock::VmaMutexLock(VmaMutex& mutex, bool useMutex)
{
} /* size: 0 */

// <00CF43AD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3998
void VmaMutexLock::~VmaMutexLock()
{
} /* size: 0 */

// <00CF4394> ../thirdparty/vulkan/vma/vk_mem_alloc.h:3998
inline void VmaMutexLock::~VmaMutexLock()
{
} /* size: 0 */

// <00CAF7EF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4005
// member functions: 6
// member variable: 1
// struct size: 8
struct VmaMutexLockRead {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4007 */
	void VmaMutexLockRead(VmaMutexLockRead* , const VmaMutexLockRead& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4007 */
	void VmaMutexLockRead(VmaMutexLockRead* , VmaMutexLockRead& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4007 */
	VmaMutexLockRead& operator=(VmaMutexLockRead* , const VmaMutexLockRead& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4007 */
	VmaMutexLockRead& operator=(VmaMutexLockRead* , VmaMutexLockRead& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4009 */
	void VmaMutexLockRead(VmaMutexLockRead* , CVMAThreadRWLock& , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4014 */
	void ~VmaMutexLockRead(VmaMutexLockRead* );
	CVMAThreadRWLock * m_pMutex; /* 0 8 */
};

// <00CF4373> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4009
void VmaMutexLockRead::VmaMutexLockRead(CVMAThreadRWLock& mutex, bool useMutex)
{
} /* size: 0 */

// <00CF4340> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4009
inline void VmaMutexLockRead::VmaMutexLockRead(CVMAThreadRWLock& mutex, bool useMutex)
{
} /* size: 0 */

// <00CF4329> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4014
void VmaMutexLockRead::~VmaMutexLockRead()
{
} /* size: 0 */

// <00CF4310> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4014
inline void VmaMutexLockRead::~VmaMutexLockRead()
{
} /* size: 0 */

// <00CAF919> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4021
// member functions: 6
// member variable: 1
// struct size: 8
struct VmaMutexLockWrite {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4023 */
	void VmaMutexLockWrite(VmaMutexLockWrite* , const VmaMutexLockWrite& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4023 */
	void VmaMutexLockWrite(VmaMutexLockWrite* , VmaMutexLockWrite& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4023 */
	VmaMutexLockWrite& operator=(VmaMutexLockWrite* , const VmaMutexLockWrite& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4023 */
	VmaMutexLockWrite& operator=(VmaMutexLockWrite* , VmaMutexLockWrite& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4025 */
	void VmaMutexLockWrite(VmaMutexLockWrite* , CVMAThreadRWLock& , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4030 */
	void ~VmaMutexLockWrite(VmaMutexLockWrite* );
	CVMAThreadRWLock * m_pMutex; /* 0 8 */
};

// <00CF42EF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4025
void VmaMutexLockWrite::VmaMutexLockWrite(CVMAThreadRWLock& mutex, bool useMutex)
{
} /* size: 0 */

// <00CF42BC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4025
inline void VmaMutexLockWrite::VmaMutexLockWrite(CVMAThreadRWLock& mutex, bool useMutex)
{
} /* size: 0 */

// <00CF42A5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4030
void VmaMutexLockWrite::~VmaMutexLockWrite()
{
} /* size: 0 */

// <00CF428C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4030
inline void VmaMutexLockWrite::~VmaMutexLockWrite()
{
} /* size: 0 */

// <00CB81C4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4047
// member functions: 3
// member variable: 1
// struct size: 8
struct AtomicTransactionalIncrement<std::atomic<unsigned int> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4052 */
	void ~AtomicTransactionalIncrement(AtomicTransactionalIncrement<std::atomic<unsigned int> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4058 */
	void Commit(AtomicTransactionalIncrement<std::atomic<unsigned int> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4050 */
	typedef __int_type T;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4059 */
	T Increment(AtomicTransactionalIncrement<std::atomic<unsigned int> >* , atomic<unsigned int>* );
private:
	atomic<unsigned int> * m_Atomic; /* 0 8 */
};

// <00CBC96B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4052
void AtomicTransactionalIncrement<std::atomic<unsigned int> >::~AtomicTransactionalIncrement()
{
} /* size: 0 */

// <00CBC952> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4052
inline void AtomicTransactionalIncrement<std::atomic<unsigned int> >::~AtomicTransactionalIncrement()
{
} /* size: 0 */

// <00CBC8D3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4058
inline void AtomicTransactionalIncrement<std::atomic<unsigned int> >::Commit()
{
} /* size: 0 */

// <00CBC92C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4059
inline void AtomicTransactionalIncrement<std::atomic<unsigned int> >::Increment(atomic<unsigned int>* atomic)
{
} /* size: 0 */

// <00CAFA3D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<char> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<char>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<char>* , const VmaStlAllocator<char>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<char>& operator=(VmaStlAllocator<char>* , const VmaStlAllocator<char>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	char* allocate(VmaStlAllocator<char>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<char>* , char* , size_t);
};

// <00CB05BA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VmaJsonWriter::StackItem> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VmaJsonWriter::StackItem>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VmaJsonWriter::StackItem>* , const VmaStlAllocator<VmaJsonWriter::StackItem>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VmaJsonWriter::StackItem>& operator=(VmaStlAllocator<VmaJsonWriter::StackItem>* , const VmaStlAllocator<VmaJsonWriter::StackItem>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	StackItem* allocate(VmaStlAllocator<VmaJsonWriter::StackItem>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VmaJsonWriter::StackItem>* , StackItem* , size_t);
};

// <00CB2125> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>* , const VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>& operator=(VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>* , const VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	ItemBlock* allocate(VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>* , ItemBlock* , size_t);
};

// <00CB2D3E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VmaSuballocation> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VmaSuballocation>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VmaSuballocation>* , const VmaStlAllocator<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VmaSuballocation>& operator=(VmaStlAllocator<VmaSuballocation>* , const VmaStlAllocator<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	VmaSuballocation* allocate(VmaStlAllocator<VmaSuballocation>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VmaSuballocation>* , VmaSuballocation* , size_t);
};

// <00CB47D5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>* , const VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& operator=(VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>* , const VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	ItemBlock* allocate(VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>* , ItemBlock* , size_t);
};

// <00CB5023> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>* , const VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>& operator=(VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>* , const VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	Block** allocate(VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>* , Block** , size_t);
};

// <00CB5632> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VmaDeviceMemoryBlock*> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VmaDeviceMemoryBlock*>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VmaDeviceMemoryBlock*>* , const VmaStlAllocator<VmaDeviceMemoryBlock*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VmaDeviceMemoryBlock*>& operator=(VmaStlAllocator<VmaDeviceMemoryBlock*>* , const VmaStlAllocator<VmaDeviceMemoryBlock*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	VmaDeviceMemoryBlock** allocate(VmaStlAllocator<VmaDeviceMemoryBlock*>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VmaDeviceMemoryBlock*>* , VmaDeviceMemoryBlock** , size_t);
};

// <00CB639E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VmaDefragmentationMove> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VmaDefragmentationMove>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VmaDefragmentationMove>* , const VmaStlAllocator<VmaDefragmentationMove>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VmaDefragmentationMove>& operator=(VmaStlAllocator<VmaDefragmentationMove>* , const VmaStlAllocator<VmaDefragmentationMove>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	VmaDefragmentationMove* allocate(VmaStlAllocator<VmaDefragmentationMove>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VmaDefragmentationMove>* , VmaDefragmentationMove* , size_t);
};

// <00CB6CE5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>* , const VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>& operator=(VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>* , const VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	ItemBlock* allocate(VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>* , ItemBlock* , size_t);
};

// <00CB7BA5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>* , const VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>& operator=(VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>* , const VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	FragmentedBlock* allocate(VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>* , FragmentedBlock* , size_t);
};

// <00CB8265> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4073
// member functions: 5
// member variable: 1
// struct size: 8
struct VmaStlAllocator<VkMappedMemoryRange> {
	const const VkAllocationCallbacks * m_pCallbacks; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078 */
	void VmaStlAllocator(VmaStlAllocator<VkMappedMemoryRange>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4081 */
	void VmaStlAllocator(VmaStlAllocator<VkMappedMemoryRange>* , const VmaStlAllocator<VkMappedMemoryRange>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4082 */
	VmaStlAllocator<VkMappedMemoryRange>& operator=(VmaStlAllocator<VkMappedMemoryRange>* , const VmaStlAllocator<VkMappedMemoryRange>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4084 */
	VkMappedMemoryRange* allocate(VmaStlAllocator<VkMappedMemoryRange>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4085 */
	void deallocate(VmaStlAllocator<VkMappedMemoryRange>* , VkMappedMemoryRange* , size_t);
};

// <00CBEB6D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<char>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBEB47> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<char>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBE7F1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<VmaJsonWriter::StackItem>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBE7CB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<VmaJsonWriter::StackItem>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBE467> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<VmaSuballocation>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBE441> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<VmaSuballocation>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBD91D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<VmaBlockMetadata_TLSF::Block::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBD8F7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<VmaBlockMetadata_TLSF::Block::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBD327> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<VmaDeviceMemoryBlock::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBD301> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<VmaDeviceMemoryBlock::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBCF82> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<VmaDefragmentationMove>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBCF5C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<VmaDefragmentationMove>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBCD8A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBCD64> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBC8B7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<VkMappedMemoryRange>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBC891> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<VkMappedMemoryRange>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBC0B8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBC092> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBBEE2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
void VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CBBEBC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4078
inline void VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>::VmaStlAllocator(const VkAllocationCallbacks* pCallbacks)
{
} /* size: 0 */

// <00CAFB3D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 32
// member variables: 4
// class size: 32
class VmaVector<char, VmaStlAllocator<char> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<char, VmaStlAllocator<char> >* , const VmaStlAllocator<char>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<char, VmaStlAllocator<char> >* , size_t, const VmaStlAllocator<char>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<char, VmaStlAllocator<char> >* , size_t, const char& , const VmaStlAllocator<char>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<char, VmaStlAllocator<char> >* , const VmaVector<char, VmaStlAllocator<char> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<char, VmaStlAllocator<char> >& operator=(VmaVector<char, VmaStlAllocator<char> >* , const VmaVector<char, VmaStlAllocator<char> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	char* data(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	char& front(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	char& back(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	const char* data(const VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	const char& front(const VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	const char& back(const VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef char * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef const char * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<char, VmaStlAllocator<char> >* , const char& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<char, VmaStlAllocator<char> >* , const char& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<char, VmaStlAllocator<char> >* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<char, VmaStlAllocator<char> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<char, VmaStlAllocator<char> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<char, VmaStlAllocator<char> >* , size_t, const char& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<char, VmaStlAllocator<char> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	char& operator[](VmaVector<char, VmaStlAllocator<char> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	const char& operator[](const VmaVector<char, VmaStlAllocator<char> >* , size_t);
private:
	VmaStlAllocator<char> m_Allocator; /* 0 8 */
	char * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
};

// <00CB06C5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 32
// member variables: 4
// class size: 32
class VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , const VmaStlAllocator<VmaJsonWriter::StackItem>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , size_t, const VmaStlAllocator<VmaJsonWriter::StackItem>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , size_t, const StackItem& , const VmaStlAllocator<VmaJsonWriter::StackItem>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >& operator=(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	StackItem* data(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	StackItem& front(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	StackItem& back(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	const StackItem* data(const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	const StackItem& front(const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	const StackItem& back(const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class StackItem * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef const class StackItem * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , const StackItem& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , const StackItem& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , size_t, const StackItem& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	StackItem& operator[](VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	const StackItem& operator[](const VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >* , size_t);
private:
	VmaStlAllocator<VmaJsonWriter::StackItem> m_Allocator; /* 0 8 */
	StackItem * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
};

// <00CB23A7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 32
// member variables: 4
// class size: 32
class VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, const VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, size_t, const VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, size_t, const ItemBlock& , const VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu operator=(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	ItemBlock* data(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	ItemBlock& front(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	ItemBlock& back(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	const ItemBlock* data(const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	const ItemBlock& front(const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	const ItemBlock& back(const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class ItemBlock * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef const class ItemBlock * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, const ItemBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, const ItemBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, size_t, const ItemBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	ItemBlock& operator[](VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSu, size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	const ItemBlock& operator[](const VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem, size_t);
private:
	VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock> m_Allocator; /* 0 8 */
	ItemBlock * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
};

// <00CB39AC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 64
// member variables: 4
// class size: 32
class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , const VmaStlAllocator<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , size_t, const VmaStlAllocator<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , size_t, const VmaSuballocation& , const VmaStlAllocator<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& operator=(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	VmaSuballocation* data(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	VmaSuballocation& front(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	VmaSuballocation& back(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	const VmaSuballocation* data(const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	const VmaSuballocation& front(const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	const VmaSuballocation& back(const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class VmaSuballocation * iterator;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef const class VmaSuballocation * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , const VmaSuballocation& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , const VmaSuballocation& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , size_t, const VmaSuballocation& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	VmaSuballocation& operator[](VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	const VmaSuballocation& operator[](const VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , size_t);
private:
	VmaStlAllocator<VmaSuballocation> m_Allocator; /* 0 8 */
	VmaSuballocation * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
	void VmaVector(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, const class VmaStlAllocator<VmaSuballocation>  &); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EEC4ERKS2_ */
	void VmaVector(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, size_t, const class VmaStlAllocator<VmaSuballocation>  &); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EEC4EmRKS2_ */
	void VmaVector(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, size_t, const class VmaSuballocation  &, const class VmaStlAllocator<VmaSuballocation>  &); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EEC4EmRKS0_RKS2_ */
	void VmaVector(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  &); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EEC4ERKS3_ */
	class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > & operator=(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  &); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EEaSERKS3_ */
	void ~VmaVector(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EED4Ev */
	bool empty(const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE5emptyEv */
	size_t size(const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE4sizeEv */
	class VmaSuballocation * data(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE4dataEv */
	class VmaSuballocation & front(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE5frontEv */
	class VmaSuballocation & back(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE4backEv */
	const class VmaSuballocation  * data(const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE4dataEv */
	const class VmaSuballocation  & front(const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE5frontEv */
	const class VmaSuballocation  & back(const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE4backEv */
	iterator begin(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE5beginEv */
	iterator end(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE3endEv */
	const_iterator cbegin(const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE6cbeginEv */
	const_iterator cend(const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE4cendEv */
	const_iterator begin(const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE5beginEv */
	const_iterator end(const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE3endEv */
	void pop_front(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE9pop_frontEv */
	void pop_back(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE8pop_backEv */
	void push_front(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, const class VmaSuballocation  &); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE10push_frontERKS0_ */
	void push_back(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, const class VmaSuballocation  &); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE9push_backERKS0_ */
	void reserve(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, size_t, bool); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE7reserveEmb */
	void resize(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, size_t); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE6resizeEm */
	void clear(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE5clearEv */
	void shrink_to_fit(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE13shrink_to_fitEv */
	void insert(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, size_t, const class VmaSuballocation  &); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE6insertEmRKS0_ */
	void remove(class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, size_t); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EE6removeEm */
	class VmaSuballocation & operator[](class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > *, size_t); /* linkage=_ZN9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EEixEm */
	const class VmaSuballocation  & operator[](const class VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >  *, size_t); /* linkage=_ZNK9VmaVectorI16VmaSuballocation15VmaStlAllocatorIS0_EEixEm */
};

// <00CB4AF2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 32
// member variables: 4
// class size: 32
class VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, const VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, size_t, const VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, size_t, const ItemBlock& , const VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL operator=(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	ItemBlock* data(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	ItemBlock& front(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	ItemBlock& back(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	const ItemBlock* data(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	const ItemBlock& front(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	const ItemBlock& back(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class ItemBlock * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef const class ItemBlock * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, const ItemBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, const ItemBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, size_t, const ItemBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	ItemBlock& operator[](VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TL, size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	const ItemBlock& operator[](const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad, size_t);
private:
	VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock> m_Allocator; /* 0 8 */
	ItemBlock * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
};

// <00CB5129> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 32
// member variables: 4
// class size: 32
class VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , const VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , size_t, const VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , size_t, Block* const& , const VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >& operator=(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	Block** data(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	Block* & front(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	Block* & back(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	Block* const* data(const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	Block* const& front(const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	Block* const& back(const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class Block * * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef class Block * const * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , Block* const& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , Block* const& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , size_t, Block* const& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	Block* & operator[](VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	Block* const& operator[](const VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> >* , size_t);
private:
	VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> m_Allocator; /* 0 8 */
	Block * * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
};

// <00CB573D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 64
// member variables: 4
// class size: 32
class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , const VmaStlAllocator<VmaDeviceMemoryBlock*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , size_t, const VmaStlAllocator<VmaDeviceMemoryBlock*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , size_t, VmaDeviceMemoryBlock* const& , const VmaStlAllocator<VmaDeviceMemoryBlock*>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >& operator=(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	VmaDeviceMemoryBlock** data(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	VmaDeviceMemoryBlock* & front(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	VmaDeviceMemoryBlock* & back(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	VmaDeviceMemoryBlock* const* data(const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	VmaDeviceMemoryBlock* const& front(const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	VmaDeviceMemoryBlock* const& back(const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class VmaDeviceMemoryBlock * * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef class VmaDeviceMemoryBlock * const * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , VmaDeviceMemoryBlock* const& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , VmaDeviceMemoryBlock* const& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , size_t, VmaDeviceMemoryBlock* const& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	VmaDeviceMemoryBlock* & operator[](VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	VmaDeviceMemoryBlock* const& operator[](const VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >* , size_t);
private:
	VmaStlAllocator<VmaDeviceMemoryBlock*> m_Allocator; /* 0 8 */
	VmaDeviceMemoryBlock * * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
	void VmaVector(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, const class VmaStlAllocator<VmaDeviceMemoryBlock*>  &); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EEC4ERKS3_ */
	void VmaVector(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, size_t, const class VmaStlAllocator<VmaDeviceMemoryBlock*>  &); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EEC4EmRKS3_ */
	void VmaVector(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, size_t, class VmaDeviceMemoryBlock * const &, const class VmaStlAllocator<VmaDeviceMemoryBlock*>  &); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EEC4EmRKS1_RKS3_ */
	void VmaVector(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  &); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EEC4ERKS4_ */
	class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > & operator=(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  &); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EEaSERKS4_ */
	void ~VmaVector(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EED4Ev */
	bool empty(const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE5emptyEv */
	size_t size(const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE4sizeEv */
	class VmaDeviceMemoryBlock * * data(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE4dataEv */
	class VmaDeviceMemoryBlock * & front(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE5frontEv */
	class VmaDeviceMemoryBlock * & back(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE4backEv */
	class VmaDeviceMemoryBlock * const * data(const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE4dataEv */
	class VmaDeviceMemoryBlock * const & front(const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE5frontEv */
	class VmaDeviceMemoryBlock * const & back(const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE4backEv */
	iterator begin(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE5beginEv */
	iterator end(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE3endEv */
	const_iterator cbegin(const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE6cbeginEv */
	const_iterator cend(const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE4cendEv */
	const_iterator begin(const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE5beginEv */
	const_iterator end(const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE3endEv */
	void pop_front(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE9pop_frontEv */
	void pop_back(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE8pop_backEv */
	void push_front(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, class VmaDeviceMemoryBlock * const &); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE10push_frontERKS1_ */
	void push_back(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, class VmaDeviceMemoryBlock * const &); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE9push_backERKS1_ */
	void reserve(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, size_t, bool); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE7reserveEmb */
	void resize(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, size_t); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE6resizeEm */
	void clear(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE5clearEv */
	void shrink_to_fit(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE13shrink_to_fitEv */
	void insert(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, size_t, class VmaDeviceMemoryBlock * const &); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE6insertEmRKS1_ */
	void remove(class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, size_t); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EE6removeEm */
	class VmaDeviceMemoryBlock * & operator[](class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > *, size_t); /* linkage=_ZN9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EEixEm */
	class VmaDeviceMemoryBlock * const & operator[](const class VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >  *, size_t); /* linkage=_ZNK9VmaVectorIP20VmaDeviceMemoryBlock15VmaStlAllocatorIS1_EEixEm */
};

// <00CB64A9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 32
// member variables: 4
// class size: 32
class VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , const VmaStlAllocator<VmaDefragmentationMove>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , size_t, const VmaStlAllocator<VmaDefragmentationMove>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , size_t, const VmaDefragmentationMove& , const VmaStlAllocator<VmaDefragmentationMove>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >& operator=(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	VmaDefragmentationMove* data(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	VmaDefragmentationMove& front(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	VmaDefragmentationMove& back(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	const VmaDefragmentationMove* data(const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	const VmaDefragmentationMove& front(const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	const VmaDefragmentationMove& back(const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class VmaDefragmentationMove * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef const class VmaDefragmentationMove * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , const VmaDefragmentationMove& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , const VmaDefragmentationMove& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , size_t, const VmaDefragmentationMove& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	VmaDefragmentationMove& operator[](VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	const VmaDefragmentationMove& operator[](const VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >* , size_t);
private:
	VmaStlAllocator<VmaDefragmentationMove> m_Allocator; /* 0 8 */
	VmaDefragmentationMove * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
};

// <00CB704A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 32
// member variables: 4
// class size: 32
class VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , const VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , size_t, const VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , size_t, const ItemBlock& , const VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >& operator=(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	ItemBlock* data(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	ItemBlock& front(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	ItemBlock& back(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	const ItemBlock* data(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	const ItemBlock& front(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	const ItemBlock& back(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class ItemBlock * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef const class ItemBlock * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , const ItemBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , const ItemBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , size_t, const ItemBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	ItemBlock& operator[](VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	const ItemBlock& operator[](const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc, size_t);
private:
	VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> m_Allocator; /* 0 8 */
	ItemBlock * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
};

// <00CB7CB0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 32
// member variables: 4
// class size: 32
class VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , const VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , size_t, const VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , size_t, const FragmentedBlock& , const VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >& operator=(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	FragmentedBlock* data(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	FragmentedBlock& front(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	FragmentedBlock& back(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	const FragmentedBlock* data(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	const FragmentedBlock& front(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	const FragmentedBlock& back(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class FragmentedBlock * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef const class FragmentedBlock * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , const FragmentedBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , const FragmentedBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , size_t, const FragmentedBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	FragmentedBlock& operator[](VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	const FragmentedBlock& operator[](const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc, size_t);
private:
	VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> m_Allocator; /* 0 8 */
	FragmentedBlock * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
};

// <00CB8370> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4105
// member functions: 64
// member variables: 4
// class size: 32
class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161 */
	void VmaVector(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , const VmaStlAllocator<VkMappedMemoryRange>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168 */
	void VmaVector(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , size_t, const VmaStlAllocator<VkMappedMemoryRange>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4116 */
	void VmaVector(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , size_t, const VkMappedMemoryRange& , const VmaStlAllocator<VkMappedMemoryRange>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4175 */
	void VmaVector(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4188 */
	VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >& operator=(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119 */
	void ~VmaVector(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121 */
	bool empty(const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122 */
	size_t size(const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123 */
	VkMappedMemoryRange* data(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4124 */
	VkMappedMemoryRange& front(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125 */
	VkMappedMemoryRange& back(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126 */
	const VkMappedMemoryRange* data(const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4127 */
	const VkMappedMemoryRange& front(const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128 */
	const VkMappedMemoryRange& back(const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4109 */
	typedef class VkMappedMemoryRange * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130 */
	iterator begin(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131 */
	iterator end(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4110 */
	typedef const class VkMappedMemoryRange * const_iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132 */
	const_iterator cbegin(const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133 */
	const_iterator cend(const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4134 */
	const_iterator begin(const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4135 */
	const_iterator end(const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4137 */
	void pop_front(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138 */
	void pop_back(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4139 */
	void push_front(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , const VkMappedMemoryRange& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202 */
	void push_back(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , const VkMappedMemoryRange& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4210 */
	void reserve(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233 */
	void resize(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144 */
	void clear(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258 */
	void shrink_to_fit(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4275 */
	void insert(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , size_t, const VkMappedMemoryRange& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4288 */
	void remove(VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149 */
	VkMappedMemoryRange& operator[](VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150 */
	const VkMappedMemoryRange& operator[](const VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >* , size_t);
private:
	VmaStlAllocator<VkMappedMemoryRange> m_Allocator; /* 0 8 */
	VkMappedMemoryRange * m_pArray; /* 8 8 */
	size_t m_Count; /* 16 8 */
	size_t m_Capacity; /* 24 8 */
	void VmaVector(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, const class VmaStlAllocator<VkMappedMemoryRange>  &); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EEC4ERKS2_ */
	void VmaVector(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, size_t, const class VmaStlAllocator<VkMappedMemoryRange>  &); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EEC4EmRKS2_ */
	void VmaVector(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, size_t, const class VkMappedMemoryRange  &, const class VmaStlAllocator<VkMappedMemoryRange>  &); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EEC4EmRKS0_RKS2_ */
	void VmaVector(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  &); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EEC4ERKS3_ */
	class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > & operator=(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  &); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EEaSERKS3_ */
	void ~VmaVector(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EED4Ev */
	bool empty(const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE5emptyEv */
	size_t size(const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE4sizeEv */
	class VkMappedMemoryRange * data(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE4dataEv */
	class VkMappedMemoryRange & front(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE5frontEv */
	class VkMappedMemoryRange & back(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE4backEv */
	const class VkMappedMemoryRange  * data(const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE4dataEv */
	const class VkMappedMemoryRange  & front(const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE5frontEv */
	const class VkMappedMemoryRange  & back(const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE4backEv */
	iterator begin(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE5beginEv */
	iterator end(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE3endEv */
	const_iterator cbegin(const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE6cbeginEv */
	const_iterator cend(const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE4cendEv */
	const_iterator begin(const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE5beginEv */
	const_iterator end(const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE3endEv */
	void pop_front(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE9pop_frontEv */
	void pop_back(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE8pop_backEv */
	void push_front(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, const class VkMappedMemoryRange  &); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE10push_frontERKS0_ */
	void push_back(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, const class VkMappedMemoryRange  &); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE9push_backERKS0_ */
	void reserve(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, size_t, bool); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE7reserveEmb */
	void resize(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, size_t); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE6resizeEm */
	void clear(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE5clearEv */
	void shrink_to_fit(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE13shrink_to_fitEv */
	void insert(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, size_t, const class VkMappedMemoryRange  &); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE6insertEmRKS0_ */
	void remove(class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, size_t); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EE6removeEm */
	class VkMappedMemoryRange & operator[](class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > *, size_t); /* linkage=_ZN9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EEixEm */
	const class VkMappedMemoryRange  & operator[](const class VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >  *, size_t); /* linkage=_ZNK9VmaVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_EEixEm */
};

// <00CBEAEE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void VmaVector<char, VmaStlAllocator<char> >::~VmaVector()
{
} /* size: 0 */

// <00CBEAD5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void VmaVector<char, VmaStlAllocator<char> >::~VmaVector()
{
} /* size: 0 */

// <00CBE772> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::~VmaVector()
{
} /* size: 0 */

// <00CBE759> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::~VmaVector()
{
} /* size: 0 */

// <00CBE3E8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::~VmaVector()
{
} /* size: 0 */

// <00CBE3CF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::~VmaVector()
{
} /* size: 0 */

// <00CBD88C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void VmaVector<VmaBlockMetadata_TLSF::Block::~VmaVector()
{
} /* size: 0 */

// <00CBD873> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void VmaVector<VmaBlockMetadata_TLSF::Block::~VmaVector()
{
} /* size: 0 */

// <00CBD2A8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void VmaVector<VmaDeviceMemoryBlock::~VmaVector()
{
} /* size: 0 */

// <00CBD28F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void VmaVector<VmaDeviceMemoryBlock::~VmaVector()
{
} /* size: 0 */

// <00CBCF03> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::~VmaVector()
{
} /* size: 0 */

// <00CBCEEA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::~VmaVector()
{
} /* size: 0 */

// <00CBCD0B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void ~VmaVector(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this)
{
} /* size: 0 */

// <00CBCCF2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void ~VmaVector(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this)
{
} /* size: 0 */

// <00CBC838> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::~VmaVector()
{
} /* size: 0 */

// <00CBC81F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::~VmaVector()
{
} /* size: 0 */

// <00CBC039> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void ~VmaVector(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this)
{
} /* size: 0 */

// <00CBC020> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void ~VmaVector(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this)
{
} /* size: 0 */

// <00CBBE63> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
void ~VmaVector(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this)
{
} /* size: 0 */

// <00CBBE4A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4119
inline void ~VmaVector(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this)
{
} /* size: 0 */

// <00CBE6F4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121
inline void VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::empty()
{
} /* size: 0 */

// <00CBE3B6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty()
{
} /* size: 0 */

// <00CBD220> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121
inline void VmaVector<VmaDeviceMemoryBlock::empty()
{
} /* size: 0 */

// <00CBB189> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121
inline void empty(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBloc this)
{
} /* size: 0 */

// <00CBA0CB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4121
inline void empty(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::It this)
{
} /* size: 0 */

// <00CBEABC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122
inline void VmaVector<char, VmaStlAllocator<char> >::size()
{
} /* size: 0 */

// <00CBE6C2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122
inline void VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size()
{
} /* size: 0 */

// <00CBE35E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size()
{
} /* size: 0 */

// <00CBCDBF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122
inline void VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size()
{
} /* size: 0 */

// <00CBCC5B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122
inline void size(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::Fragment this)
{
} /* size: 0 */

// <00CBC007> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122
inline void size(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBloc this)
{
} /* size: 0 */

// <00CBBE31> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4122
inline void size(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::It this)
{
} /* size: 0 */

// <00CBCDA6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123
inline void VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::data()
{
} /* size: 0 */

// <00CBB418> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4123
inline void VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::data()
{
} /* size: 0 */

// <00CBE6DB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125
inline void VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::back()
{
} /* size: 0 */

// <00CBB170> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125
inline void back(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this)
{
} /* size: 0 */

// <00CBA0B2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4125
inline void back(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this)
{
} /* size: 0 */

// <00CBEAA3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4126
inline void VmaVector<char, VmaStlAllocator<char> >::data()
{
} /* size: 0 */

// <00CBE377> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4128
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back()
{
} /* size: 0 */

// <00CBE2BA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::begin()
{
} /* size: 0 */

// <00CBD163> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130
inline void VmaVector<VmaDeviceMemoryBlock::begin()
{
} /* size: 0 */

// <00CBCCD9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4130
inline void begin(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this)
{
} /* size: 0 */

// <00CBE2A1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::end()
{
} /* size: 0 */

// <00CBD14A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131
inline void VmaVector<VmaDeviceMemoryBlock::end()
{
} /* size: 0 */

// <00CBCCC0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4131
inline void end(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this)
{
} /* size: 0 */

// <00CBC274> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4132
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::cbegin()
{
} /* size: 0 */

// <00CBC25B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4133
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::cend()
{
} /* size: 0 */

// <00CBE70D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138
inline void VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back()
{
} /* size: 0 */

// <00CBE2D3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::pop_back()
{
} /* size: 0 */

// <00CBD1EE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4138
inline void VmaVector<VmaDeviceMemoryBlock::pop_back()
{
} /* size: 0 */

// <00CBE19A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::clear()
{
} /* size: 0 */

// <00CBCC74> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144
inline void VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::clear()
{
} /* size: 0 */

// <00CBBF7E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144
inline void clear(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this)
{
} /* size: 0 */

// <00CBBDA8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4144
inline void clear(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this)
{
} /* size: 0 */

// <00CBD84D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149
inline void VmaVector<VmaBlockMetadata_TLSF::Block::operator[](size_t index)
{
} /* size: 0 */

// <00CBBFE1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149
inline void operator[](const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this, size_t index)
{
} /* size: 0 */

// <00CBBE0B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4149
inline void operator[](const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this, size_t index)
{
} /* size: 0 */

// <00CBE390> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150
inline void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](size_t index)
{
} /* size: 0 */

// <00CBD6E5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4150
inline void VmaVector<VmaDeviceMemoryBlock::operator[](size_t index)
{
} /* size: 0 */

// <00CBEB2B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161
void VmaVector<char, VmaStlAllocator<char> >::VmaVector(const VmaStlAllocator<char>& allocator)
{
} /* size: 0 */

// <00CBE7AF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161
void VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::VmaVector(const VmaStlAllocator<VmaJsonWriter::StackItem>& allocator)
{
} /* size: 0 */

// <00CBE425> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161
void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::VmaVector(const VmaStlAllocator<VmaSuballocation>& allocator)
{
} /* size: 0 */

// <00CBD2E5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161
void VmaVector<VmaDeviceMemoryBlock::VmaVector(const VmaStlAllocator<VmaDeviceMemoryBlock*>& allocator)
{
} /* size: 0 */

// <00CBCF40> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161
void VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::VmaVector(const VmaStlAllocator<VmaDefragmentationMove>& allocator)
{
} /* size: 0 */

// <00CBCD48> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161
void VmaVector(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this, const VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>& allocator)
{
} /* size: 0 */

// <00CBC076> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161
void VmaVector(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this, const VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& allocator)
{
} /* size: 0 */

// <00CBBEA0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161
void VmaVector(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this, const VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>& allocator)
{
} /* size: 0 */

// <00CBB48A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4161
void VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::VmaVector(const VmaStlAllocator<VkMappedMemoryRange>& allocator)
{
} /* size: 0 */

// <00CBD8D6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4168
void VmaVector<VmaBlockMetadata_TLSF::Block::VmaVector(size_t count, const VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>& allocator)
{
} /* size: 0 */

// <00CBEA70> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202
// variable: 1
void VmaVector<char, VmaStlAllocator<char> >::push_back(const char& src)
{
	const size_t  newIndex; // 4204
} /* size: 0, variables: 1 */

// <00CBE726> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202
// variable: 1
void VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::push_back(const StackItem& src)
{
	const size_t  newIndex; // 4204
} /* size: 0, variables: 1 */

// <00CBE305> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202
// variable: 1
void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::push_back(const VmaSuballocation& src)
{
	const size_t  newIndex; // 4204
} /* size: 0, variables: 1 */

// <00CBCF9E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202
// variable: 1
void VmaVector<VmaDeviceMemoryBlock::push_back(VmaDeviceMemoryBlock* const& src)
{
	const size_t  newIndex; // 4204
} /* size: 0, variables: 1 */

// <00CBCC8D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202
// variable: 1
void push_back(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this, const FragmentedBlock& src)
{
	const size_t  newIndex; // 4204
} /* size: 0, variables: 1 */

// <00CBCC28> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202
// variable: 1
void VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::push_back(const VmaDefragmentationMove& src)
{
	const size_t  newIndex; // 4204
} /* size: 0, variables: 1 */

// <00CBB109> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202
// variable: 1
void push_back(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this, const ItemBlock& src)
{
	const size_t  newIndex; // 4204
} /* size: 0, variables: 1 */

// <00CBA04B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4202
// variable: 1
void push_back(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this, const ItemBlock& src)
{
	const size_t  newIndex; // 4204
} /* size: 0, variables: 1 */

// <00CBE826> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233
// variables: 3
// function calls: 6
void VmaVector<char, VmaStlAllocator<char> >::resize(size_t newCount)
{
	size_t newCapacity; // 4235
	{
		const char* newArray; // 4243
		const size_t  elementsToCopy; // 4244
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					size_t count);  // 4243
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 4244
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4249
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4247
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 4238
} /* size: 222, variables: 1, inline expansions: 1 (19 bytes) */

// <00CBDDFF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233
// variables: 3
// function calls: 6
void VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::resize(size_t newCount)
{
	size_t newCapacity; // 4235
	{
		const VmaSuballocation* newArray; // 4243
		const size_t  elementsToCopy; // 4244
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VmaSuballocation>(const VkAllocationCallbacks* pAllocationCallbacks,
							size_t count);  // 4243
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 4244
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4249
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4247
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 4238
} /* size: 242, variables: 1, inline expansions: 1 (19 bytes) */

// <00CBC3A1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233
// variables: 3
// function calls: 6
void VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::resize(size_t newCount)
{
	size_t newCapacity; // 4235
	{
		const StackItem* newArray; // 4243
		const size_t  elementsToCopy; // 4244
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VmaJsonWriter::StackItem>(const VkAllocationCallbacks* pAllocationCallbacks,
								size_t count);  // 4243
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 4244
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4249
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4247
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 4238
} /* size: 246, variables: 1, inline expansions: 1 (19 bytes) */

// <00CBBB66> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233
// variables: 3
// function calls: 6
void VmaVector<VmaDeviceMemoryBlock::resize(size_t newCount)
{
	size_t newCapacity; // 4235
	{
		const VmaDeviceMemoryBlock**  newArray; // 4243
		const size_t  elementsToCopy; // 4244
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VmaDeviceMemoryBlock*>(const VkAllocationCallbacks* pAllocationCallbacks,
							size_t count);  // 4243
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 4244
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4249
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4247
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 4238
} /* size: 242, variables: 1, inline expansions: 1 (19 bytes) */

// <00CBB80A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233
// variables: 3
// function calls: 6
void resize(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this, size_t newCount)
{
	size_t newCapacity; // 4235
	{
		const FragmentedBlock* newArray; // 4243
		const size_t  elementsToCopy; // 4244
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VmaDefragmentationContext_T::FragmentedBlock>(const VkAllocationCallbacks* pAllocationCallbacks,
										size_t count);  // 4243
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 4244
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4249
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4247
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 4238
} /* size: 242, variables: 1, inline expansions: 1 (19 bytes) */

// <00CBB5C3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233
// variables: 3
// function calls: 6
void VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::resize(size_t newCount)
{
	size_t newCapacity; // 4235
	{
		const VmaDefragmentationMove* newArray; // 4243
		const size_t  elementsToCopy; // 4244
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VmaDefragmentationMove>(const VkAllocationCallbacks* pAllocationCallbacks,
							size_t count);  // 4243
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 4244
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4249
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4247
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 4238
} /* size: 246, variables: 1, inline expansions: 1 (19 bytes) */

// <00CBB1A2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233
// variables: 3
// function calls: 6
void resize(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this, size_t newCount)
{
	size_t newCapacity; // 4235
	{
		const ItemBlock* newArray; // 4243
		const size_t  elementsToCopy; // 4244
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>(const VkAllocationCallbacks* pAllocationCallbacks,
												size_t count);  // 4243
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 4244
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4249
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4247
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 4238
} /* size: 242, variables: 1, inline expansions: 1 (19 bytes) */

// <00CBAEC7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233
// variables: 3
// function calls: 6
void resize(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this, size_t newCount)
{
	size_t newCapacity; // 4235
	{
		const ItemBlock* newArray; // 4243
		const size_t  elementsToCopy; // 4244
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>(const VkAllocationCallbacks* pAllocationCallbacks,
										size_t count);  // 4243
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 4244
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4249
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4247
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 4238
} /* size: 242, variables: 1, inline expansions: 1 (19 bytes) */

// <00CBA8D2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4233
// variables: 3
// function calls: 6
void VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::resize(size_t newCount)
{
	size_t newCapacity; // 4235
	{
		const VkMappedMemoryRange* newArray; // 4243
		const size_t  elementsToCopy; // 4244
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VkMappedMemoryRange>(const VkAllocationCallbacks* pAllocationCallbacks,
							size_t count);  // 4243
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 4244
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4249
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4247
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 4238
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00CBA73F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4258
// variable: 1
// function calls: 4
void VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::shrink_to_fit()
{
	{
		VkMappedMemoryRange* newArray; // 4262
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4268
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VkMappedMemoryRange>(const VkAllocationCallbacks* pAllocationCallbacks,
							size_t count);  // 4265
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4266
	}
} /* size: 0 */

// <00CBE041> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4307
void VmaVectorRemove<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& vec, size_t index)
{
} /* size: 0 */

// <00CBD1B5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4307
void VmaVectorRemove<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >& vec, size_t index)
{
} /* size: 0 */

// <00CB887F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4322
// member functions: 46
// member variables: 3
// class size: 680
class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4369 */
	void VmaSmallVector(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , const VmaStlAllocator<VkMappedMemoryRange>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4374 */
	void VmaSmallVector(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , size_t, const VmaStlAllocator<VkMappedMemoryRange>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4334 */
	void ~VmaSmallVector(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4336 */
	bool empty(const VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4337 */
	size_t size(const VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4338 */
	VkMappedMemoryRange* data(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4339 */
	VkMappedMemoryRange& front(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4340 */
	VkMappedMemoryRange& back(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4341 */
	const VkMappedMemoryRange* data(const VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4342 */
	const VkMappedMemoryRange& front(const VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4343 */
	const VkMappedMemoryRange& back(const VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4326 */
	typedef class VkMappedMemoryRange * iterator;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4345 */
	iterator begin(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4346 */
	iterator end(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4348 */
	void pop_front(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4349 */
	void pop_back(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4350 */
	void push_front(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , const VkMappedMemoryRange& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4379 */
	void push_back(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , const VkMappedMemoryRange& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4387 */
	void resize(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4428 */
	void clear(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4439 */
	void insert(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , size_t, const VkMappedMemoryRange& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4454 */
	void remove(VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4358 */
	VkMappedMemoryRange& operator[](VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4359 */
	const VkMappedMemoryRange& operator[](const VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>* , size_t);
private:
	size_t m_Count; /* 0 8 */
	VkMappedMemoryRange m_StaticArray[16]; /* 8 640 */
	VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> > m_DynamicArray; /* 648 32 */
	void VmaSmallVector(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *, const class VmaStlAllocator<VkMappedMemoryRange>  &); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EEC4ERKS2_ */
	void VmaSmallVector(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *, size_t, const class VmaStlAllocator<VkMappedMemoryRange>  &); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EEC4EmRKS2_ */
	void ~VmaSmallVector(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EED4Ev */
	bool empty(const class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>  *); /* linkage=_ZNK14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE5emptyEv */
	size_t size(const class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>  *); /* linkage=_ZNK14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE4sizeEv */
	class VkMappedMemoryRange * data(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE4dataEv */
	class VkMappedMemoryRange & front(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE5frontEv */
	class VkMappedMemoryRange & back(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE4backEv */
	const class VkMappedMemoryRange  * data(const class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>  *); /* linkage=_ZNK14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE4dataEv */
	const class VkMappedMemoryRange  & front(const class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>  *); /* linkage=_ZNK14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE5frontEv */
	const class VkMappedMemoryRange  & back(const class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>  *); /* linkage=_ZNK14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE4backEv */
	iterator begin(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE5beginEv */
	iterator end(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE3endEv */
	void pop_front(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE9pop_frontEv */
	void pop_back(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE8pop_backEv */
	void push_front(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *, const class VkMappedMemoryRange  &); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE10push_frontERKS0_ */
	void push_back(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *, const class VkMappedMemoryRange  &); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE9push_backERKS0_ */
	void resize(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *, size_t, bool); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE6resizeEmb */
	void clear(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *, bool); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE5clearEb */
	void insert(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *, size_t, const class VkMappedMemoryRange  &); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE6insertEmRKS0_ */
	void remove(class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *, size_t); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EE6removeEm */
	class VkMappedMemoryRange & operator[](class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16> *, size_t); /* linkage=_ZN14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EEixEm */
	const class VkMappedMemoryRange  & operator[](const class VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>  *, size_t); /* linkage=_ZNK14VmaSmallVectorI19VkMappedMemoryRange15VmaStlAllocatorIS0_ELm16EEixEm */
};

// <00CCE837> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4334
void VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::~VmaSmallVector()
{
} /* size: 0 */

// <00CCE81E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4334
inline void VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::~VmaSmallVector()
{
} /* size: 0 */

// <00CBC7D3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4336
inline void VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::empty()
{
} /* size: 0 */

// <00CBC7BA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4337
inline void VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::size()
{
} /* size: 0 */

// <00CBC7A1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4338
inline void VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::data()
{
} /* size: 0 */

// <00CBC875> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4369
void VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::VmaSmallVector(const VmaStlAllocator<VkMappedMemoryRange>& allocator)
{
} /* size: 0 */

// <00CBC7EC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4379
// variable: 1
void VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::push_back(const VkMappedMemoryRange& src)
{
	const size_t  newIndex; // 4381
} /* size: 0, variables: 1 */

// <00CBB431> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4387
void VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::resize(size_t newCount, bool freeMemory)
{
} /* size: 0 */

// <00CB2220> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4476
// member functions: 8
// member variables: 3
// class size: 48
class VmaPoolAllocator<VmaListItem<VmaSuballocation> > {
	struct ItemBlock {
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	void VmaPoolAllocator(VmaPoolAllocator<VmaListItem<VmaSuballocation> >* , const VmaPoolAllocator<VmaListItem<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	void VmaPoolAllocator(VmaPoolAllocator<VmaListItem<VmaSuballocation> >* , VmaPoolAllocator<VmaListItem<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	VmaPoolAllocator<VmaListItem<VmaSuballocation> >& operator=(VmaPoolAllocator<VmaListItem<VmaSuballocation> >* , const VmaPoolAllocator<VmaListItem<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	VmaPoolAllocator<VmaListItem<VmaSuballocation> >& operator=(VmaPoolAllocator<VmaListItem<VmaSuballocation> >* , VmaPoolAllocator<VmaListItem<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4507 */
	void VmaPoolAllocator(VmaPoolAllocator<VmaListItem<VmaSuballocation> >* , const VkAllocationCallbacks* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4516 */
	void ~VmaPoolAllocator(VmaPoolAllocator<VmaListItem<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4550 */
	void Free(VmaPoolAllocator<VmaListItem<VmaSuballocation> >* , VmaListItem<VmaSuballocation>* );
	const VkAllocationCallbacks * m_pAllocationCallbacks; /* 0 8 */
	const uint32_t m_FirstBlockCapacity; /* 8 4 */
	VmaVector<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaListItem<VmaSuballocation> >::ItemBlock> > m_ItemBlocks; /* 16 32 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4575 */
	ItemBlock& CreateNewBlock(VmaPoolAllocator<VmaListItem<VmaSuballocation> >* );
};

// <00CB48D5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4476
// member functions: 9
// member variables: 3
// class size: 48
class VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4491 */
	struct ItemBlock {
		union Item * pItems; /* 0 8 */
		uint32_t Capacity; /* 8 4 */
		uint32_t FirstFreeIndex; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	void VmaPoolAllocator(VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>* , const VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	void VmaPoolAllocator(VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>* , VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>& operator=(VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>* , const VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>& operator=(VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>* , VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4507 */
	void VmaPoolAllocator(VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>* , const VkAllocationCallbacks* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4516 */
	void ~VmaPoolAllocator(VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4550 */
	void Free(VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>* , Block* );
	const VkAllocationCallbacks * m_pAllocationCallbacks; /* 0 8 */
	const uint32_t m_FirstBlockCapacity; /* 8 4 */
	VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock> > m_ItemBlocks; /* 16 32 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4575 */
	ItemBlock& CreateNewBlock(VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4486 */
	union Item {
		uint32_t NextFreeIndex; /* 0 4 */
		char Value[48] __attribute__((__aligned__(8))); /* 0 48 */
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4524 */
	Block* Alloc<>(VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>* );
};

// <00CB6DE5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4476
// member functions: 20
// member variables: 3
// class size: 48
class VmaPoolAllocator<VmaAllocation_T> {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4491 */
	struct ItemBlock {
		union Item * pItems; /* 0 8 */
		uint32_t Capacity; /* 8 4 */
		uint32_t FirstFreeIndex; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	void VmaPoolAllocator(VmaPoolAllocator<VmaAllocation_T>* , const VmaPoolAllocator<VmaAllocation_T>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	void VmaPoolAllocator(VmaPoolAllocator<VmaAllocation_T>* , VmaPoolAllocator<VmaAllocation_T>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	VmaPoolAllocator<VmaAllocation_T>& operator=(VmaPoolAllocator<VmaAllocation_T>* , const VmaPoolAllocator<VmaAllocation_T>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4478 */
	VmaPoolAllocator<VmaAllocation_T>& operator=(VmaPoolAllocator<VmaAllocation_T>* , VmaPoolAllocator<VmaAllocation_T>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4507 */
	void VmaPoolAllocator(VmaPoolAllocator<VmaAllocation_T>* , const VkAllocationCallbacks* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4516 */
	void ~VmaPoolAllocator(VmaPoolAllocator<VmaAllocation_T>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4550 */
	void Free(VmaPoolAllocator<VmaAllocation_T>* , VmaAllocation_T* );
	const VkAllocationCallbacks * m_pAllocationCallbacks; /* 0 8 */
	const uint32_t m_FirstBlockCapacity; /* 8 4 */
	VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> > m_ItemBlocks; /* 16 32 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4575 */
	ItemBlock& CreateNewBlock(VmaPoolAllocator<VmaAllocation_T>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4486 */
	union Item {
		uint32_t NextFreeIndex; /* 0 4 */
		char Value[88] __attribute__((__aligned__(8))); /* 0 88 */
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4524 */
	VmaAllocation_T* Alloc<bool&>(VmaPoolAllocator<VmaAllocation_T>* , bool& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4524 */
	VmaAllocation_T* Alloc<bool const&>(VmaPoolAllocator<VmaAllocation_T>* , const bool& );
	void VmaPoolAllocator(class VmaPoolAllocator<VmaAllocation_T> *, const class VmaPoolAllocator<VmaAllocation_T>  &); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TEC4ERKS1_ */
	void VmaPoolAllocator(class VmaPoolAllocator<VmaAllocation_T> *, class VmaPoolAllocator<VmaAllocation_T> &); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TEC4EOS1_ */
	class VmaPoolAllocator<VmaAllocation_T> & operator=(class VmaPoolAllocator<VmaAllocation_T> *, const class VmaPoolAllocator<VmaAllocation_T>  &); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TEaSERKS1_ */
	class VmaPoolAllocator<VmaAllocation_T> & operator=(class VmaPoolAllocator<VmaAllocation_T> *, class VmaPoolAllocator<VmaAllocation_T> &); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TEaSEOS1_ */
	void VmaPoolAllocator(class VmaPoolAllocator<VmaAllocation_T> *, const VkAllocationCallbacks  *, uint32_t); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TEC4EPK21VkAllocationCallbacksj */
	void ~VmaPoolAllocator(class VmaPoolAllocator<VmaAllocation_T> *); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TED4Ev */
	void Free(class VmaPoolAllocator<VmaAllocation_T> *, class VmaAllocation_T *); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TE4FreeEPS0_ */
	class ItemBlock & CreateNewBlock(class VmaPoolAllocator<VmaAllocation_T> *); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TE14CreateNewBlockEv */
	class VmaAllocation_T * Alloc<bool&>(class VmaPoolAllocator<VmaAllocation_T> *, bool &); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TE5AllocIJRbEEEPS0_DpOT_ */
	class VmaAllocation_T * Alloc<bool const&>(class VmaPoolAllocator<VmaAllocation_T> *, const bool  &); /* linkage=_ZN16VmaPoolAllocatorI15VmaAllocation_TE5AllocIJRKbEEEPS0_DpOT_ */
};

// <00CBDDAA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4507
void VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::VmaPoolAllocator(const VkAllocationCallbacks* pAllocationCallbacks, uint32_t firstBlockCapacity)
{
} /* size: 0 */

// <00CBD5FA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4507
void VmaPoolAllocator<VmaAllocation_T>::VmaPoolAllocator(const VkAllocationCallbacks* pAllocationCallbacks, uint32_t firstBlockCapacity)
{
} /* size: 0 */

// <00CBDD54> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4516
// variable: 1
void VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::~VmaPoolAllocator()
{
	{
		size_t i; // 4518
	}
} /* size: 0 */

// <00CBD5A4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4516
// variable: 1
void VmaPoolAllocator<VmaAllocation_T>::~VmaPoolAllocator()
{
	{
		size_t i; // 4518
	}
} /* size: 0 */

// <00CBD96D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4524
// variables: 8
// function calls: 9
void VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Alloc<>()
{
	ItemBlock& newBlock; // 4541
	const union Item* pItem; // 4542
	Block* result; // 4544
	{
		size_t i; // 4526
		{
			ItemBlock& block; // 4528
			{
				const union Item* pItem; // 4532
				Block* result; // 4534
			}
			operator[](const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this,
					size_t index);  // 4528
		}
		size(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBloc this); // 4526
	}
	back(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this); // 4578
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 3839
	VmaAllocateArray<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Item>(const VkAllocationCallbacks* pAllocationCallbacks,
										size_t count);  // 4582
	size(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBloc this); // 4204
	push_back(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this,
			const ItemBlock& src);  // 4587
	{
		uint32_t i; // 4590
	}
	back(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this); // 4593
	VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::CreateNewBlock(); // 4541
} /* size: 389, variables: 3, inline expansions: 7 (421 bytes) */

// <00CBBA52> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4524
// variables: 7
void Alloc<bool VmaPoolAllocator<VmaAllocation_T>::const&>()
{
	ItemBlock& newBlock; // 4541
	const union Item* pItem; // 4542
	VmaAllocation_T* result; // 4544
	{
		size_t i; // 4526
		{
			ItemBlock& block; // 4528
			{
				const union Item* pItem; // 4532
				VmaAllocation_T* result; // 4534
			}
		}
	}
} /* size: 0, variables: 3 */

// <00CBB526> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4524
// variables: 7
void VmaPoolAllocator<VmaAllocation_T>::Alloc<bool&>()
{
	ItemBlock& newBlock; // 4541
	const union Item* pItem; // 4542
	VmaAllocation_T* result; // 4544
	{
		size_t i; // 4526
		{
			ItemBlock& block; // 4528
			{
				const union Item* pItem; // 4532
				VmaAllocation_T* result; // 4534
			}
		}
	}
} /* size: 0, variables: 3 */

// <00CBD724> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4550
// variables: 4
// function calls: 2
void VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Free(Block* ptr)
{
	{
		size_t i; // 4553
		{
			ItemBlock& block; // 4555
			union Item* pItemPtr; // 4558
			{
				const uint32_t  index; // 4565
			}
			operator[](const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this,
					size_t index);  // 4555
		}
		size(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBloc this); // 4553
	}
} /* size: 110 */

// <00CBD520> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4550
// variables: 4
void VmaPoolAllocator<VmaAllocation_T>::Free(VmaAllocation_T* ptr)
{
	{
		size_t i; // 4553
		{
			ItemBlock& block; // 4555
			union Item* pItemPtr; // 4558
			{
				const uint32_t  index; // 4565
			}
		}
	}
} /* size: 0 */

// <00CBBF3E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4575
// variables: 3
void VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::CreateNewBlock()
{
	const uint32_t  newBlockCapacity; // 4577
	const ItemBlock  newBlock; // 4580
	{
		uint32_t i; // 4590
	}
} /* size: 0, variables: 2 */

// <00CBAB81> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4575
// variables: 3
// function calls: 7
void VmaPoolAllocator<VmaAllocation_T>::CreateNewBlock()
{
	const uint32_t  newBlockCapacity; // 4577
	const ItemBlock  newBlock; // 4580
	{
		uint32_t i; // 4590
	}
	empty(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::It this); // 4577
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 3839
	VmaAllocateArray<VmaPoolAllocator<VmaAllocation_T>::Item>(const VkAllocationCallbacks* pAllocationCallbacks,
									size_t count);  // 4582
	size(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::It this); // 4204
	push_back(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this,
			const ItemBlock& src);  // 4587
	back(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this); // 4593
	back(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this); // 4578
} /* size: 282, variables: 2, inline expansions: 7 (217 bytes) */

// <00CB28CF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4600
// member variables: 3
// struct size: 48
struct VmaListItem<VmaSuballocation> {
	VmaListItem<VmaSuballocation> * pPrev; /* 0 8 */
	VmaListItem<VmaSuballocation> * pNext; /* 8 8 */
	VmaSuballocation Value; /* 16 32 */
};

// <00CB2915> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4609
// member functions: 24
// member variables: 5
// class size: 80
class VmaRawList<VmaSuballocation> {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4611 */
	void VmaRawList(VmaRawList<VmaSuballocation>* , const VmaRawList<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4611 */
	void VmaRawList(VmaRawList<VmaSuballocation>* , VmaRawList<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4611 */
	VmaRawList<VmaSuballocation>& operator=(VmaRawList<VmaSuballocation>* , const VmaRawList<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4611 */
	VmaRawList<VmaSuballocation>& operator=(VmaRawList<VmaSuballocation>* , VmaRawList<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4655 */
	void VmaRawList(VmaRawList<VmaSuballocation>* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4618 */
	void ~VmaRawList(VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4620 */
	size_t GetCount(const VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4621 */
	bool IsEmpty(const VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4613 */
	typedef struct VmaListItem<VmaSuballocation> ItemType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4623 */
	ItemType* Front(VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4624 */
	ItemType* Back(VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4625 */
	const ItemType* Front(const VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4626 */
	const ItemType* Back(const VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4663 */
	VmaListItem<VmaSuballocation>* PushFront(VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4685 */
	VmaListItem<VmaSuballocation>* PushBack(VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4707 */
	VmaListItem<VmaSuballocation>* PushFront(VmaRawList<VmaSuballocation>* , const VmaSuballocation& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4715 */
	VmaListItem<VmaSuballocation>* PushBack(VmaRawList<VmaSuballocation>* , const VmaSuballocation& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4723 */
	void PopFront(VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4738 */
	void PopBack(VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4801 */
	VmaListItem<VmaSuballocation>* InsertBefore(VmaRawList<VmaSuballocation>* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4827 */
	VmaListItem<VmaSuballocation>* InsertAfter(VmaRawList<VmaSuballocation>* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4853 */
	VmaListItem<VmaSuballocation>* InsertBefore(VmaRawList<VmaSuballocation>* , ItemType* , const VmaSuballocation& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4861 */
	VmaListItem<VmaSuballocation>* InsertAfter(VmaRawList<VmaSuballocation>* , ItemType* , const VmaSuballocation& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4753 */
	void Clear(VmaRawList<VmaSuballocation>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4771 */
	void Remove(VmaRawList<VmaSuballocation>* , ItemType* );
	const const VkAllocationCallbacks * m_pAllocationCallbacks; /* 0 8 */
	VmaPoolAllocator<VmaListItem<VmaSuballocation> > m_ItemAllocator; /* 8 48 */
	ItemType * m_pFront; /* 56 8 */
	ItemType * m_pBack; /* 64 8 */
	size_t m_Count; /* 72 8 */
};

// <00CAF193> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4872
// member functions: 34
// member variable: 1
// class size: 80
class VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4874 */
	void VmaList(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4874 */
	void VmaList(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4874 */
	VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& operator=(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4874 */
	VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& operator=(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4989 */
	void VmaList(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , const VmaStlAllocator<VmaSuballocation>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4991 */
	bool empty(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4992 */
	size_t size(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4880 */
	class iterator {
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4885 */
		void iterator(iterator* );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4886 */
		void iterator(iterator* , const reverse_iterator& );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4888 */
		VmaSuballocation& operator*(const iterator* );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4889 */
		VmaSuballocation* operator->(const iterator* );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4891 */
		bool operator==(const iterator* , const iterator& );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4892 */
		bool operator!=(const iterator* , const iterator& );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4894 */
		iterator operator++(iterator* , int);
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4895 */
		iterator operator--(iterator* , int);
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4897 */
		iterator& operator++(iterator* );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5024 */
		iterator& operator--(iterator* );
	private:
		VmaRawList<VmaSuballocation> * m_pList; /* 0 8 */
		VmaListItem<VmaSuballocation> * m_pItem; /* 8 8 */
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4904 */
		void iterator(iterator* , VmaRawList<VmaSuballocation>* , VmaListItem<VmaSuballocation>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4994 */
	iterator begin(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4995 */
	iterator end(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	class const_iterator {
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4997 */
	const_iterator cbegin(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:4998 */
	const_iterator cend(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5000 */
	const_iterator begin(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5001 */
	const_iterator end(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	class reverse_iterator {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5003 */
	reverse_iterator rbegin(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5004 */
	reverse_iterator rend(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	class const_reverse_iterator {
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5006 */
	const_reverse_iterator crbegin(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5007 */
	const_reverse_iterator crend(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5009 */
	const_reverse_iterator rbegin(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5010 */
	const_reverse_iterator rend(const VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5012 */
	void push_back(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , const VmaSuballocation& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5013 */
	iterator insert(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , iterator, const VmaSuballocation& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5015 */
	void clear(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5016 */
	void erase(VmaList<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >* , iterator);
	VmaRawList<VmaSuballocation> m_RawList; /* 0 80 */
};

// <00CBD48B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4885
void iterator::iterator()
{
} /* size: 0 */

// <00CBD472> ../thirdparty/vulkan/vma/vk_mem_alloc.h:4885
inline void iterator::iterator()
{
} /* size: 0 */

// <00CB1A40> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5098
// member functions: 44
// member variables: 3
// class size: 24
class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5101 */
	typedef ItemType ItemType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5102 */
	ItemType* GetPrev(const ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5103 */
	ItemType* GetNext(const ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5106 */
	void VmaIntrusiveLinkedList(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5140 */
	void VmaIntrusiveLinkedList(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* , VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5108 */
	void VmaIntrusiveLinkedList(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* , const VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5148 */
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>& operator=(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* , VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5110 */
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>& operator=(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* , const VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5111 */
	void ~VmaIntrusiveLinkedList(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5113 */
	size_t GetCount(const VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5114 */
	bool IsEmpty(const VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5115 */
	ItemType* Front(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5116 */
	ItemType* Back(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5117 */
	const ItemType* Front(const VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5118 */
	const ItemType* Back(const VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5163 */
	void PushBack(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5182 */
	void PushFront(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5201 */
	ItemType* PopBack(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5218 */
	ItemType* PopFront(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5235 */
	void InsertBefore(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* , ItemType* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5260 */
	void InsertAfter(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* , ItemType* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5285 */
	void Remove(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5313 */
	void RemoveAll(VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>* );
private:
	ItemType * m_Front; /* 0 8 */
	ItemType * m_Back; /* 8 8 */
	size_t m_Count; /* 16 8 */
	ItemType * GetPrev(const ItemType  *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE7GetPrevEPK15VmaAllocation_T */
	ItemType * GetNext(const ItemType  *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE7GetNextEPK15VmaAllocation_T */
	void VmaIntrusiveLinkedList(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsEC4Ev */
	void VmaIntrusiveLinkedList(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *, class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> &); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsEC4EOS1_ */
	void VmaIntrusiveLinkedList(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *, const class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>  &); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsEC4ERKS1_ */
	class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> & operator=(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *, class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> &); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsEaSEOS1_ */
	class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> & operator=(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *, const class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>  &); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsEaSERKS1_ */
	void ~VmaIntrusiveLinkedList(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsED4Ev */
	size_t GetCount(const class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>  *); /* linkage=_ZNK22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE8GetCountEv */
	bool IsEmpty(const class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>  *); /* linkage=_ZNK22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE7IsEmptyEv */
	ItemType * Front(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE5FrontEv */
	ItemType * Back(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE4BackEv */
	const ItemType  * Front(const class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>  *); /* linkage=_ZNK22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE5FrontEv */
	const ItemType  * Back(const class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>  *); /* linkage=_ZNK22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE4BackEv */
	void PushBack(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE8PushBackEP15VmaAllocation_T */
	void PushFront(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE9PushFrontEP15VmaAllocation_T */
	ItemType * PopBack(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE7PopBackEv */
	ItemType * PopFront(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE8PopFrontEv */
	void InsertBefore(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *, ItemType *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE12InsertBeforeEP15VmaAllocation_TS3_ */
	void InsertAfter(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *, ItemType *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE11InsertAfterEP15VmaAllocation_TS3_ */
	void Remove(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE6RemoveEP15VmaAllocation_T */
	void RemoveAll(class VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI36VmaDedicatedAllocationListItemTraitsE9RemoveAllEv */
};

// <00CB776D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5098
// member functions: 44
// member variables: 3
// class size: 24
class VmaIntrusiveLinkedList<VmaPoolListItemTraits> {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5101 */
	typedef ItemType ItemType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5102 */
	ItemType* GetPrev(const ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5103 */
	ItemType* GetNext(const ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5106 */
	void VmaIntrusiveLinkedList(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5140 */
	void VmaIntrusiveLinkedList(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* , VmaIntrusiveLinkedList<VmaPoolListItemTraits>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5108 */
	void VmaIntrusiveLinkedList(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* , const VmaIntrusiveLinkedList<VmaPoolListItemTraits>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5148 */
	VmaIntrusiveLinkedList<VmaPoolListItemTraits>& operator=(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* , VmaIntrusiveLinkedList<VmaPoolListItemTraits>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5110 */
	VmaIntrusiveLinkedList<VmaPoolListItemTraits>& operator=(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* , const VmaIntrusiveLinkedList<VmaPoolListItemTraits>& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5111 */
	void ~VmaIntrusiveLinkedList(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5113 */
	size_t GetCount(const VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5114 */
	bool IsEmpty(const VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5115 */
	ItemType* Front(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5116 */
	ItemType* Back(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5117 */
	const ItemType* Front(const VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5118 */
	const ItemType* Back(const VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5163 */
	void PushBack(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5182 */
	void PushFront(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5201 */
	ItemType* PopBack(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5218 */
	ItemType* PopFront(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5235 */
	void InsertBefore(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* , ItemType* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5260 */
	void InsertAfter(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* , ItemType* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5285 */
	void Remove(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* , ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5313 */
	void RemoveAll(VmaIntrusiveLinkedList<VmaPoolListItemTraits>* );
private:
	ItemType * m_Front; /* 0 8 */
	ItemType * m_Back; /* 8 8 */
	size_t m_Count; /* 16 8 */
	ItemType * GetPrev(const ItemType  *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE7GetPrevEPK9VmaPool_T */
	ItemType * GetNext(const ItemType  *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE7GetNextEPK9VmaPool_T */
	void VmaIntrusiveLinkedList(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsEC4Ev */
	void VmaIntrusiveLinkedList(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *, class VmaIntrusiveLinkedList<VmaPoolListItemTraits> &); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsEC4EOS1_ */
	void VmaIntrusiveLinkedList(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *, const class VmaIntrusiveLinkedList<VmaPoolListItemTraits>  &); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsEC4ERKS1_ */
	class VmaIntrusiveLinkedList<VmaPoolListItemTraits> & operator=(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *, class VmaIntrusiveLinkedList<VmaPoolListItemTraits> &); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsEaSEOS1_ */
	class VmaIntrusiveLinkedList<VmaPoolListItemTraits> & operator=(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *, const class VmaIntrusiveLinkedList<VmaPoolListItemTraits>  &); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsEaSERKS1_ */
	void ~VmaIntrusiveLinkedList(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsED4Ev */
	size_t GetCount(const class VmaIntrusiveLinkedList<VmaPoolListItemTraits>  *); /* linkage=_ZNK22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE8GetCountEv */
	bool IsEmpty(const class VmaIntrusiveLinkedList<VmaPoolListItemTraits>  *); /* linkage=_ZNK22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE7IsEmptyEv */
	ItemType * Front(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE5FrontEv */
	ItemType * Back(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE4BackEv */
	const ItemType  * Front(const class VmaIntrusiveLinkedList<VmaPoolListItemTraits>  *); /* linkage=_ZNK22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE5FrontEv */
	const ItemType  * Back(const class VmaIntrusiveLinkedList<VmaPoolListItemTraits>  *); /* linkage=_ZNK22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE4BackEv */
	void PushBack(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE8PushBackEP9VmaPool_T */
	void PushFront(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE9PushFrontEP9VmaPool_T */
	ItemType * PopBack(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE7PopBackEv */
	ItemType * PopFront(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE8PopFrontEv */
	void InsertBefore(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *, ItemType *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE12InsertBeforeEP9VmaPool_TS3_ */
	void InsertAfter(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *, ItemType *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE11InsertAfterEP9VmaPool_TS3_ */
	void Remove(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *, ItemType *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE6RemoveEP9VmaPool_T */
	void RemoveAll(class VmaIntrusiveLinkedList<VmaPoolListItemTraits> *); /* linkage=_ZN22VmaIntrusiveLinkedListI21VmaPoolListItemTraitsE9RemoveAllEv */
};

// <00CF1BF3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5106
void VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::VmaIntrusiveLinkedList()
{
} /* size: 0 */

// <00CF1BDA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5106
inline void VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::VmaIntrusiveLinkedList()
{
} /* size: 0 */

// <00CD52C2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5106
void VmaIntrusiveLinkedList<VmaPoolListItemTraits>::VmaIntrusiveLinkedList()
{
} /* size: 0 */

// <00CD52A9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5106
inline void VmaIntrusiveLinkedList<VmaPoolListItemTraits>::VmaIntrusiveLinkedList()
{
} /* size: 0 */

// <00CBE6AB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5111
void VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::~VmaIntrusiveLinkedList()
{
} /* size: 0 */

// <00CBE692> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5111
inline void VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::~VmaIntrusiveLinkedList()
{
} /* size: 0 */

// <00CBCC11> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5111
void VmaIntrusiveLinkedList<VmaPoolListItemTraits>::~VmaIntrusiveLinkedList()
{
} /* size: 0 */

// <00CBCBF8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5111
inline void VmaIntrusiveLinkedList<VmaPoolListItemTraits>::~VmaIntrusiveLinkedList()
{
} /* size: 0 */

// <00CBE660> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5113
inline void VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::GetCount()
{
} /* size: 0 */

// <00CBE679> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5114
inline void VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::IsEmpty()
{
} /* size: 0 */

// <00CBC70E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5114
inline void VmaIntrusiveLinkedList<VmaPoolListItemTraits>::IsEmpty()
{
} /* size: 0 */

// <00CBE647> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5115
inline void VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::Front()
{
} /* size: 0 */

// <00CBCAAF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5115
inline void VmaIntrusiveLinkedList<VmaPoolListItemTraits>::Front()
{
} /* size: 0 */

// <00CBE609> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5163
void VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::PushBack(ItemType* item)
{
} /* size: 0 */

// <00CBC9E8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5163
void VmaIntrusiveLinkedList<VmaPoolListItemTraits>::PushBack(ItemType* item)
{
} /* size: 0 */

// <00CBE5E3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5285
void VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::Remove(ItemType* item)
{
} /* size: 0 */

// <00CBC9C2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5285
void VmaIntrusiveLinkedList<VmaPoolListItemTraits>::Remove(ItemType* item)
{
} /* size: 0 */

// <00CB0045> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5427
// member functions: 20
// member variable: 1
// class size: 32
class VmaStringBuilder {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5430 */
	void VmaStringBuilder(VmaStringBuilder* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5431 */
	void ~VmaStringBuilder(VmaStringBuilder* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5433 */
	size_t GetLength(const VmaStringBuilder* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5434 */
	const char* GetData(const VmaStringBuilder* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5435 */
	void AddNewLine(VmaStringBuilder* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5436 */
	void Add(VmaStringBuilder* , char);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5438 */
	void Add(VmaStringBuilder* , const char* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5439 */
	void AddNumber(VmaStringBuilder* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5440 */
	void AddNumber(VmaStringBuilder* , uint64_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5441 */
	void AddPointer(VmaStringBuilder* , const void* );
private:
	VmaVector<char, VmaStlAllocator<char> > m_Data; /* 0 32 */
	void VmaStringBuilder(class VmaStringBuilder *, const VkAllocationCallbacks  *); /* linkage=_ZN16VmaStringBuilderC4EPK21VkAllocationCallbacks */
	void ~VmaStringBuilder(class VmaStringBuilder *); /* linkage=_ZN16VmaStringBuilderD4Ev */
	size_t GetLength(const class VmaStringBuilder  *); /* linkage=_ZNK16VmaStringBuilder9GetLengthEv */
	const char  * GetData(const class VmaStringBuilder  *); /* linkage=_ZNK16VmaStringBuilder7GetDataEv */
	void AddNewLine(class VmaStringBuilder *); /* linkage=_ZN16VmaStringBuilder10AddNewLineEv */
	void Add(class VmaStringBuilder *, char); /* linkage=_ZN16VmaStringBuilder3AddEc */
	void Add(class VmaStringBuilder *, const char  *); /* linkage=_ZN16VmaStringBuilder3AddEPKc */
	/* <cf912d> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5459 */
	void AddNumber(class VmaStringBuilder *, uint32_t); /* linkage=_ZN16VmaStringBuilder9AddNumberEj */
	/* <cf91a5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5472 */
	void AddNumber(class VmaStringBuilder *, uint64_t); /* linkage=_ZN16VmaStringBuilder9AddNumberEm */
	/* <cf921d> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5485 */
	void AddPointer(class VmaStringBuilder *, const void  *); /* linkage=_ZN16VmaStringBuilder10AddPointerEPKv */
};

// <00CF4270> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5430
void VmaStringBuilder::VmaStringBuilder(const VkAllocationCallbacks* allocationCallbacks)
{
} /* size: 0 */

// <00CF424A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5430
inline void VmaStringBuilder::VmaStringBuilder(const VkAllocationCallbacks* allocationCallbacks)
{
} /* size: 0 */

// <00CCB01D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5431
void VmaStringBuilder::~VmaStringBuilder()
{
} /* size: 0 */

// <00CCB004> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5431
inline void VmaStringBuilder::~VmaStringBuilder()
{
} /* size: 0 */

// <00CF4231> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5433
inline void VmaStringBuilder::GetLength()
{
} /* size: 0 */

// <00CF4218> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5434
inline void VmaStringBuilder::GetData()
{
} /* size: 0 */

// <00CF41FF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5435
inline void VmaStringBuilder::AddNewLine()
{
} /* size: 0 */

// <00CF41DA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5436
inline void VmaStringBuilder::Add(char ch)
{
} /* size: 0 */

// <00CF405C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5448
// variables: 2
// function calls: 3
void VmaStringBuilder::Add(const char* pStr)
{
	const size_t  strLen; // 5450
	{
		const size_t  oldCount; // 5453
		VmaVector<char, VmaStlAllocator<char> >::size(); // 5453
		VmaVector<char, VmaStlAllocator<char> >::data(); // 5455
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 5455
	}
} /* size: 105, variables: 1 */

// <00CF912D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5459
// variables: 2
void VmaStringBuilder::AddNumber(uint32_t num)
{
	char buf; // 5461
	char* p; // 5463
} /* size: 0, variables: 2 */

// <00CF91A5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5472
// variables: 2
void VmaStringBuilder::AddNumber(uint64_t num)
{
	char buf; // 5474
	char* p; // 5476
} /* size: 0, variables: 2 */

// <00CF921D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5485
// variable: 1
// function calls: 2
void VmaStringBuilder::AddPointer(const void* ptr)
{
	char buf; // 5487
	snprintf(char* __s,
		size_t __n,
		const char* __fmt, ...);  // 2917
	VmaPtrToStr(char* outStr,
			size_t strLen,
			const void* ptr);  // 5488
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CF3FA4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5485
// variable: 1
void VmaStringBuilder::AddPointer(const void* ptr)
{
	char buf; // 5487
} /* size: 0, variables: 1 */

// <00CB01D5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5499
// member functions: 46
// member variables: 3
// static member variable: 1
// class size: 48
class VmaJsonWriter {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5550 */
	enum COLLECTION_TYPE {
		COLLECTION_TYPE_OBJECT = 0,
		COLLECTION_TYPE_ARRAY = 1,
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5555 */
	struct StackItem {
		COLLECTION_TYPE type; /* 0 4 */
		uint32_t valueCount; /* 4 4 */
		bool singleLineMode; /* 8 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5501 */
	void VmaJsonWriter(VmaJsonWriter* , const VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5501 */
	void VmaJsonWriter(VmaJsonWriter* , VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5501 */
	VmaJsonWriter& operator=(VmaJsonWriter* , const VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5501 */
	VmaJsonWriter& operator=(VmaJsonWriter* , VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5504 */
	void VmaJsonWriter(VmaJsonWriter* , const VkAllocationCallbacks* , VmaStringBuilder& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5505 */
	void ~VmaJsonWriter(VmaJsonWriter* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5511 */
	void BeginObject(VmaJsonWriter* , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5513 */
	void EndObject(VmaJsonWriter* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5517 */
	void BeginArray(VmaJsonWriter* , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5519 */
	void EndArray(VmaJsonWriter* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5523 */
	void WriteString(VmaJsonWriter* , const char* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5529 */
	void BeginString(VmaJsonWriter* , const char* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5531 */
	void ContinueString(VmaJsonWriter* , const char* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5533 */
	void ContinueString(VmaJsonWriter* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5534 */
	void ContinueString(VmaJsonWriter* , uint64_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5537 */
	void ContinueString_Pointer(VmaJsonWriter* , const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5539 */
	void EndString(VmaJsonWriter* , const char* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5542 */
	void WriteNumber(VmaJsonWriter* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5543 */
	void WriteNumber(VmaJsonWriter* , uint64_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5545 */
	void WriteBool(VmaJsonWriter* , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5547 */
	void WriteNull(VmaJsonWriter* );
	static const const char * INDENT; /* 0 0 */
	VmaStringBuilder & m_SB; /* 0 8 */
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> > m_Stack; /* 8 32 */
	bool m_InsideString; /* 40 1 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5568 */
	void BeginValue(VmaJsonWriter* , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5569 */
	void WriteIndent(VmaJsonWriter* , bool);
	void VmaJsonWriter(class VmaJsonWriter *, const class VmaJsonWriter  &); /* linkage=_ZN13VmaJsonWriterC4ERKS_ */
	void VmaJsonWriter(class VmaJsonWriter *, class VmaJsonWriter &); /* linkage=_ZN13VmaJsonWriterC4EOS_ */
	class VmaJsonWriter & operator=(class VmaJsonWriter *, const class VmaJsonWriter  &); /* linkage=_ZN13VmaJsonWriteraSERKS_ */
	class VmaJsonWriter & operator=(class VmaJsonWriter *, class VmaJsonWriter &); /* linkage=_ZN13VmaJsonWriteraSEOS_ */
	void VmaJsonWriter(class VmaJsonWriter *, const VkAllocationCallbacks  *, class VmaStringBuilder &); /* linkage=_ZN13VmaJsonWriterC4EPK21VkAllocationCallbacksR16VmaStringBuilder */
	void ~VmaJsonWriter(class VmaJsonWriter *); /* linkage=_ZN13VmaJsonWriterD4Ev */
	void BeginObject(class VmaJsonWriter *, bool); /* linkage=_ZN13VmaJsonWriter11BeginObjectEb */
	/* <cf9eb1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5599 */
	void EndObject(class VmaJsonWriter *); /* linkage=_ZN13VmaJsonWriter9EndObjectEv */
	void BeginArray(class VmaJsonWriter *, bool); /* linkage=_ZN13VmaJsonWriter10BeginArrayEb */
	/* <cfa034> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5624 */
	void EndArray(class VmaJsonWriter *); /* linkage=_ZN13VmaJsonWriter8EndArrayEv */
	/* <cf9b40> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5635 */
	void WriteString(class VmaJsonWriter *, const char  *); /* linkage=_ZN13VmaJsonWriter11WriteStringEPKc */
	/* <cf9a05> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5641 */
	void BeginString(class VmaJsonWriter *, const char  *); /* linkage=_ZN13VmaJsonWriter11BeginStringEPKc */
	void ContinueString(class VmaJsonWriter *, const char  *); /* linkage=_ZN13VmaJsonWriter14ContinueStringEPKc */
	/* <cf9543> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5697 */
	void ContinueString(class VmaJsonWriter *, uint32_t); /* linkage=_ZN13VmaJsonWriter14ContinueStringEj */
	/* <cf94a1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5703 */
	void ContinueString(class VmaJsonWriter *, uint64_t); /* linkage=_ZN13VmaJsonWriter14ContinueStringEm */
	/* <cf9346> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5709 */
	void ContinueString_Pointer(class VmaJsonWriter *, const void  *); /* linkage=_ZN13VmaJsonWriter22ContinueString_PointerEPKv */
	/* <cf95e5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5715 */
	void EndString(class VmaJsonWriter *, const char  *); /* linkage=_ZN13VmaJsonWriter9EndStringEPKc */
	/* <cf9cb2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5726 */
	void WriteNumber(class VmaJsonWriter *, uint32_t); /* linkage=_ZN13VmaJsonWriter11WriteNumberEj */
	/* <cf9d7d> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5733 */
	void WriteNumber(class VmaJsonWriter *, uint64_t); /* linkage=_ZN13VmaJsonWriter11WriteNumberEm */
	void WriteBool(class VmaJsonWriter *, bool); /* linkage=_ZN13VmaJsonWriter9WriteBoolEb */
	void WriteNull(class VmaJsonWriter *); /* linkage=_ZN13VmaJsonWriter9WriteNullEv */
	/* <cf9957> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5754 */
	void BeginValue(class VmaJsonWriter *, bool); /* linkage=_ZN13VmaJsonWriter10BeginValueEb */
	/* <cf970b> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5783 */
	void WriteIndent(class VmaJsonWriter *, bool); /* linkage=_ZN13VmaJsonWriter11WriteIndentEb */
};

// <00CF3F04> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5574
// function calls: 2
void VmaJsonWriter::VmaJsonWriter(const VkAllocationCallbacks* pAllocationCallbacks, VmaStringBuilder& sb)
{
	VmaStlAllocator<VmaJsonWriter::StackItem>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 5576
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::VmaVector(
			const VmaStlAllocator<VmaJsonWriter::StackItem>& allocator);  // 5576
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CF3ECF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5574
void VmaJsonWriter::VmaJsonWriter(const VkAllocationCallbacks* pAllocationCallbacks, VmaStringBuilder& sb)
{
} /* size: 0 */

// <00CF3E1F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5579
// function calls: 2
void VmaJsonWriter::~VmaJsonWriter()
{
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::~VmaVector(); // 5583
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CF3E03> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5579
void VmaJsonWriter::~VmaJsonWriter()
{
} /* size: 0 */

// <00CF3C26> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5585
// variable: 1
// function calls: 5
void VmaJsonWriter::BeginObject(bool singleLine)
{
	StackItem item; // 5592
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5590
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4204
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::push_back(
			const StackItem& src);  // 5596
} /* size: 106, variables: 1, inline expansions: 5 (98 bytes) */

// <00CF9EB1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5599
// function calls: 5
void VmaJsonWriter::EndObject()
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5604
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00CF3C0A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5599
void VmaJsonWriter::EndObject()
{
} /* size: 0 */

// <00CF3A2D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5610
// variable: 1
// function calls: 5
void VmaJsonWriter::BeginArray(bool singleLine)
{
	StackItem item; // 5617
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5615
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4204
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::push_back(
			const StackItem& src);  // 5621
} /* size: 106, variables: 1, inline expansions: 5 (98 bytes) */

// <00CFA034> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5624
// function calls: 5
void VmaJsonWriter::EndArray()
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5629
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5632
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00CF3A11> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5624
void VmaJsonWriter::EndArray()
{
} /* size: 0 */

// <00CF9B40> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5635
// function calls: 4
void VmaJsonWriter::WriteString(const char* pStr)
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00CF9A05> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5641
// function calls: 3
void VmaJsonWriter::BeginString(const char* pStr)
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5646
} /* size: 107, inline expansions: 3 (59 bytes) */

// <00CF39BF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5641
void VmaJsonWriter::BeginString(const char* pStr)
{
} /* size: 0 */

// <00CF375B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5654
// variables: 3
// function calls: 3
void VmaJsonWriter::ContinueString(const char* pStr)
{
	const size_t  strLen; // 5658
	{
		size_t i; // 5659
		{
			char ch; // 5661
			VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
			VmaVector<char, VmaStlAllocator<char> >::push_back(
					const char& src);  // 5436
			VmaStringBuilder::Add(
				char ch);  // 5672
		}
	}
} /* size: 349, variables: 1 */

// <00CF9543> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5697
// function call: 1
void VmaJsonWriter::ContinueString(uint32_t n)
{
	VmaStringBuilder::AddNumber(
			uint32_t num);  // 5700
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CF3734> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5697
void VmaJsonWriter::ContinueString(uint32_t n)
{
} /* size: 0 */

// <00CF94A1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5703
// function call: 1
void VmaJsonWriter::ContinueString(uint64_t n)
{
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5706
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CF370D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5703
void VmaJsonWriter::ContinueString(uint64_t n)
{
} /* size: 0 */

// <00CF9346> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5709
// function calls: 3
void VmaJsonWriter::ContinueString_Pointer(const void* ptr)
{
	snprintf(char* __s,
		size_t __n,
		const char* __fmt, ...);  // 2917
	VmaPtrToStr(char* outStr,
			size_t strLen,
			const void* ptr);  // 5488
	VmaStringBuilder::AddPointer(
			const void* ptr);  // 5712
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00CF36E4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5709
void VmaJsonWriter::ContinueString_Pointer(const void* ptr)
{
} /* size: 0 */

// <00CF95E5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5715
// function calls: 3
void VmaJsonWriter::EndString(const char* pStr)
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00CF36BB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5715
void VmaJsonWriter::EndString(const char* pStr)
{
} /* size: 0 */

// <00CF9CB2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5726
// function call: 1
void VmaJsonWriter::WriteNumber(uint32_t n)
{
	VmaStringBuilder::AddNumber(
			uint32_t num);  // 5730
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CF3694> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5726
void VmaJsonWriter::WriteNumber(uint32_t n)
{
} /* size: 0 */

// <00CF9D7D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5733
// function call: 1
void VmaJsonWriter::WriteNumber(uint64_t n)
{
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CF366D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5733
void VmaJsonWriter::WriteNumber(uint64_t n)
{
} /* size: 0 */

// <00CF35D2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5740
void VmaJsonWriter::WriteBool(bool b)
{
} /* size: 0 */

// <00CF345F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5747
// variable: 1
// function calls: 3
void VmaJsonWriter::WriteNull()
{
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::empty(); // 5756
	{
		StackItem& currItem; // 5758
		VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::back(); // 5758
	}
	VmaJsonWriter::BeginValue(
			bool isString);  // 5750
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CF9957> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5754
// variable: 1
// function calls: 2
void VmaJsonWriter::BeginValue(bool isString)
{
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::empty(); // 5756
	{
		StackItem& currItem; // 5758
		VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::back(); // 5758
	}
} /* size: 168, inline expansions: 1 (4 bytes) */

// <00CF33B1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5754
// variable: 1
void VmaJsonWriter::BeginValue(bool isString)
{
	{
		StackItem& currItem; // 5758
	}
} /* size: 0 */

// <00CF970B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5783
// variables: 2
// function calls: 8
void VmaJsonWriter::WriteIndent(bool oneLess)
{
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::empty(); // 5785
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::back(); // 5785
	{
		size_t count; // 5789
		VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
		VmaVector<char, VmaStlAllocator<char> >::push_back(
				const char& src);  // 5436
		VmaStringBuilder::Add(
			char ch);  // 5435
		VmaStringBuilder::AddNewLine(); // 5787
		VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 5789
		{
			size_t i; // 5794
		}
	}
	VmaJsonWriter::WriteIndent(
			bool oneLess);  // 5783
} /* size: 146, inline expansions: 3 (84 bytes) */

// <00CF336C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5783
// variables: 2
void VmaJsonWriter::WriteIndent(bool oneLess)
{
	{
		size_t count; // 5789
		{
			size_t i; // 5794
		}
	}
} /* size: 0 */

// <00CF1F51> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5802
// function calls: 69
void VmaPrintDetailedStatistics(VmaJsonWriter& json, const VmaDetailedStatistics& stat)
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 5806
	VmaStringBuilder::AddNumber(
			uint32_t num);  // 5730
	VmaJsonWriter::WriteNumber(
			uint32_t n);  // 5807
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 5808
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 5809
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 5810
	VmaStringBuilder::AddNumber(
			uint32_t num);  // 5730
	VmaJsonWriter::WriteNumber(
			uint32_t n);  // 5811
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 5812
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 5813
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 5814
	VmaStringBuilder::AddNumber(
			uint32_t num);  // 5730
	VmaJsonWriter::WriteNumber(
			uint32_t n);  // 5815
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5604
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
	VmaJsonWriter::EndObject(); // 5831
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 5819
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 5820
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 5821
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 5822
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 5826
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 5827
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 5828
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 5829
} /* size: 1528, inline expansions: 69 (3044 bytes) */

// <00CB0C13> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5837
// member functions: 22
// member variables: 3
// static member variable: 1
// class size: 12
class VmaMappingHysteresis {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5839 */
	void VmaMappingHysteresis(VmaMappingHysteresis* , const VmaMappingHysteresis& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5839 */
	void VmaMappingHysteresis(VmaMappingHysteresis* , VmaMappingHysteresis& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5839 */
	VmaMappingHysteresis& operator=(VmaMappingHysteresis* , const VmaMappingHysteresis& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5839 */
	VmaMappingHysteresis& operator=(VmaMappingHysteresis* , VmaMappingHysteresis& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5841 */
	void VmaMappingHysteresis(VmaMappingHysteresis* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5843 */
	uint32_t GetExtraMapping(const VmaMappingHysteresis* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5847 */
	bool PostMap(VmaMappingHysteresis* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5868 */
	void PostUnmap(VmaMappingHysteresis* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5879 */
	void PostAlloc(VmaMappingHysteresis* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5891 */
	bool PostFree(VmaMappingHysteresis* );
	static const int32_t COUNTER_MIN_EXTRA_MAPPING = 7; /* 0 0 */
	uint32_t m_MinorCounter; /* 0 4 */
	uint32_t m_MajorCounter; /* 4 4 */
	uint32_t m_ExtraMapping; /* 8 4 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5919 */
	void PostMinorCounter(VmaMappingHysteresis* );
	void VmaMappingHysteresis(class VmaMappingHysteresis *, const class VmaMappingHysteresis  &); /* linkage=_ZN20VmaMappingHysteresisC4ERKS_ */
	void VmaMappingHysteresis(class VmaMappingHysteresis *, class VmaMappingHysteresis &); /* linkage=_ZN20VmaMappingHysteresisC4EOS_ */
	class VmaMappingHysteresis & operator=(class VmaMappingHysteresis *, const class VmaMappingHysteresis  &); /* linkage=_ZN20VmaMappingHysteresisaSERKS_ */
	class VmaMappingHysteresis & operator=(class VmaMappingHysteresis *, class VmaMappingHysteresis &); /* linkage=_ZN20VmaMappingHysteresisaSEOS_ */
	void VmaMappingHysteresis(class VmaMappingHysteresis *); /* linkage=_ZN20VmaMappingHysteresisC4Ev */
	uint32_t GetExtraMapping(const class VmaMappingHysteresis  *); /* linkage=_ZNK20VmaMappingHysteresis15GetExtraMappingEv */
	bool PostMap(class VmaMappingHysteresis *); /* linkage=_ZN20VmaMappingHysteresis7PostMapEv */
	void PostUnmap(class VmaMappingHysteresis *); /* linkage=_ZN20VmaMappingHysteresis9PostUnmapEv */
	void PostAlloc(class VmaMappingHysteresis *); /* linkage=_ZN20VmaMappingHysteresis9PostAllocEv */
	bool PostFree(class VmaMappingHysteresis *); /* linkage=_ZN20VmaMappingHysteresis8PostFreeEv */
	void PostMinorCounter(class VmaMappingHysteresis *); /* linkage=_ZN20VmaMappingHysteresis16PostMinorCounterEv */
};

// <00CE2955> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5841
void VmaMappingHysteresis::VmaMappingHysteresis()
{
} /* size: 0 */

// <00CE293C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5841
inline void VmaMappingHysteresis::VmaMappingHysteresis()
{
} /* size: 0 */

// <00CF1F38> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5843
inline void VmaMappingHysteresis::GetExtraMapping()
{
} /* size: 0 */

// <00CF1F1F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5847
inline void VmaMappingHysteresis::PostMap()
{
} /* size: 0 */

// <00CF1F06> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5868
inline void VmaMappingHysteresis::PostUnmap()
{
} /* size: 0 */

// <00CF1EED> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5879
inline void VmaMappingHysteresis::PostAlloc()
{
} /* size: 0 */

// <00CF1ED4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5891
inline void VmaMappingHysteresis::PostFree()
{
} /* size: 0 */

// <00CF1EBB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5919
inline void VmaMappingHysteresis::PostMinorCounter()
{
} /* size: 0 */

// <00CB0E0D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5944
// member functions: 48
// member variables: 9
// class size: 96
class VmaDeviceMemoryBlock {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5946 */
	void VmaDeviceMemoryBlock(VmaDeviceMemoryBlock* , const VmaDeviceMemoryBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5946 */
	void VmaDeviceMemoryBlock(VmaDeviceMemoryBlock* , VmaDeviceMemoryBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5946 */
	VmaDeviceMemoryBlock& operator=(VmaDeviceMemoryBlock* , const VmaDeviceMemoryBlock& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5946 */
	VmaDeviceMemoryBlock& operator=(VmaDeviceMemoryBlock* , VmaDeviceMemoryBlock& );
	VmaBlockMetadata * m_pMetadata; /* 0 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5950 */
	void VmaDeviceMemoryBlock(VmaDeviceMemoryBlock* , VmaAllocator);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5951 */
	void ~VmaDeviceMemoryBlock(VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5954 */
	void Init(VmaDeviceMemoryBlock* , VmaAllocator, VmaPool, uint32_t, VkDeviceMemory, VkDeviceSize, uint32_t, uint32_t, VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5964 */
	void Destroy(VmaDeviceMemoryBlock* , VmaAllocator);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5966 */
	VmaPool GetParentPool(const VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5967 */
	VkDeviceMemory GetDeviceMemory(const VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5968 */
	uint32_t GetMemoryTypeIndex(const VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5969 */
	uint32_t GetId(const VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5970 */
	void* GetMappedData(const VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5971 */
	uint32_t GetMapRefCount(const VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5975 */
	void PostAlloc(VmaDeviceMemoryBlock* , VmaAllocator);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5976 */
	void PostFree(VmaDeviceMemoryBlock* , VmaAllocator);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5979 */
	bool Validate(const VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5980 */
	VkResult CheckCorruption(VmaDeviceMemoryBlock* , VmaAllocator);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5983 */
	VkResult Map(VmaDeviceMemoryBlock* , VmaAllocator, uint32_t, void** );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5984 */
	void Unmap(VmaDeviceMemoryBlock* , VmaAllocator, uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5986 */
	VkResult WriteMagicValueAfterAllocation(VmaDeviceMemoryBlock* , VmaAllocator, VkDeviceSize, VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5987 */
	VkResult ValidateMagicValueAfterAllocation(VmaDeviceMemoryBlock* , VmaAllocator, VkDeviceSize, VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5989 */
	VkResult BindBufferMemory(VmaDeviceMemoryBlock* , VmaAllocator, VmaAllocation, VkDeviceSize, VkBuffer, const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:5995 */
	VkResult BindImageMemory(VmaDeviceMemoryBlock* , VmaAllocator, VmaAllocation, VkDeviceSize, VkImage, const void* );
	VmaPool m_hParentPool; /* 8 8 */
	uint32_t m_MemoryTypeIndex; /* 16 4 */
	uint32_t m_Id; /* 20 4 */
	VkDeviceMemory m_hMemory; /* 24 8 */
	VmaMutex m_MapAndBindMutex; /* 32 40 */
	VmaMappingHysteresis m_MappingHysteresis; /* 72 12 */
	uint32_t m_MapCount; /* 84 4 */
	void * m_pMappedData; /* 88 8 */
	void VmaDeviceMemoryBlock(class VmaDeviceMemoryBlock *, const class VmaDeviceMemoryBlock  &); /* linkage=_ZN20VmaDeviceMemoryBlockC4ERKS_ */
	void VmaDeviceMemoryBlock(class VmaDeviceMemoryBlock *, class VmaDeviceMemoryBlock &); /* linkage=_ZN20VmaDeviceMemoryBlockC4EOS_ */
	class VmaDeviceMemoryBlock & operator=(class VmaDeviceMemoryBlock *, const class VmaDeviceMemoryBlock  &); /* linkage=_ZN20VmaDeviceMemoryBlockaSERKS_ */
	class VmaDeviceMemoryBlock & operator=(class VmaDeviceMemoryBlock *, class VmaDeviceMemoryBlock &); /* linkage=_ZN20VmaDeviceMemoryBlockaSEOS_ */
	void VmaDeviceMemoryBlock(class VmaDeviceMemoryBlock *, VmaAllocator); /* linkage=_ZN20VmaDeviceMemoryBlockC4EP14VmaAllocator_T */
	void ~VmaDeviceMemoryBlock(class VmaDeviceMemoryBlock *); /* linkage=_ZN20VmaDeviceMemoryBlockD4Ev */
	void Init(class VmaDeviceMemoryBlock *, VmaAllocator, VmaPool, uint32_t, VkDeviceMemory, VkDeviceSize, uint32_t, uint32_t, VkDeviceSize); /* linkage=_ZN20VmaDeviceMemoryBlock4InitEP14VmaAllocator_TP9VmaPool_TjP16VkDeviceMemory_Tmjjm */
	void Destroy(class VmaDeviceMemoryBlock *, VmaAllocator); /* linkage=_ZN20VmaDeviceMemoryBlock7DestroyEP14VmaAllocator_T */
	VmaPool GetParentPool(const class VmaDeviceMemoryBlock  *); /* linkage=_ZNK20VmaDeviceMemoryBlock13GetParentPoolEv */
	VkDeviceMemory GetDeviceMemory(const class VmaDeviceMemoryBlock  *); /* linkage=_ZNK20VmaDeviceMemoryBlock15GetDeviceMemoryEv */
	uint32_t GetMemoryTypeIndex(const class VmaDeviceMemoryBlock  *); /* linkage=_ZNK20VmaDeviceMemoryBlock18GetMemoryTypeIndexEv */
	uint32_t GetId(const class VmaDeviceMemoryBlock  *); /* linkage=_ZNK20VmaDeviceMemoryBlock5GetIdEv */
	void * GetMappedData(const class VmaDeviceMemoryBlock  *); /* linkage=_ZNK20VmaDeviceMemoryBlock13GetMappedDataEv */
	uint32_t GetMapRefCount(const class VmaDeviceMemoryBlock  *); /* linkage=_ZNK20VmaDeviceMemoryBlock14GetMapRefCountEv */
	void PostAlloc(class VmaDeviceMemoryBlock *, VmaAllocator); /* linkage=_ZN20VmaDeviceMemoryBlock9PostAllocEP14VmaAllocator_T */
	void PostFree(class VmaDeviceMemoryBlock *, VmaAllocator); /* linkage=_ZN20VmaDeviceMemoryBlock8PostFreeEP14VmaAllocator_T */
	bool Validate(const class VmaDeviceMemoryBlock  *); /* linkage=_ZNK20VmaDeviceMemoryBlock8ValidateEv */
	VkResult CheckCorruption(class VmaDeviceMemoryBlock *, VmaAllocator); /* linkage=_ZN20VmaDeviceMemoryBlock15CheckCorruptionEP14VmaAllocator_T */
	/* <cf6b0c> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11849 */
	VkResult Map(class VmaDeviceMemoryBlock *, VmaAllocator, uint32_t, void * *); /* linkage=_ZN20VmaDeviceMemoryBlock3MapEP14VmaAllocator_TjPPv */
	/* <cf6b97> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11890 */
	void Unmap(class VmaDeviceMemoryBlock *, VmaAllocator, uint32_t); /* linkage=_ZN20VmaDeviceMemoryBlock5UnmapEP14VmaAllocator_Tj */
	/* <cf6c09> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11915 */
	VkResult WriteMagicValueAfterAllocation(class VmaDeviceMemoryBlock *, VmaAllocator, VkDeviceSize, VkDeviceSize); /* linkage=_ZN20VmaDeviceMemoryBlock30WriteMagicValueAfterAllocationEP14VmaAllocator_Tmm */
	VkResult ValidateMagicValueAfterAllocation(class VmaDeviceMemoryBlock *, VmaAllocator, VkDeviceSize, VkDeviceSize); /* linkage=_ZN20VmaDeviceMemoryBlock33ValidateMagicValueAfterAllocationEP14VmaAllocator_Tmm */
	VkResult BindBufferMemory(class VmaDeviceMemoryBlock *, VmaAllocator, VmaAllocation, VkDeviceSize, VkBuffer, const void  *); /* linkage=_ZN20VmaDeviceMemoryBlock16BindBufferMemoryEP14VmaAllocator_TP15VmaAllocation_TmP10VkBuffer_TPKv */
	VkResult BindImageMemory(class VmaDeviceMemoryBlock *, VmaAllocator, VmaAllocation, VkDeviceSize, VkImage, const void  *); /* linkage=_ZN20VmaDeviceMemoryBlock15BindImageMemoryEP14VmaAllocator_TP15VmaAllocation_TmP9VkImage_TPKv */
};

// <00CF1EA2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5966
inline void VmaDeviceMemoryBlock::GetParentPool()
{
} /* size: 0 */

// <00CF1E89> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5967
inline void VmaDeviceMemoryBlock::GetDeviceMemory()
{
} /* size: 0 */

// <00CF1E70> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5969
inline void VmaDeviceMemoryBlock::GetId()
{
} /* size: 0 */

// <00CF1E52> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5970
inline void* VmaDeviceMemoryBlock::GetMappedData()
{
} /* size: 0 */

// <00CF1E39> ../thirdparty/vulkan/vma/vk_mem_alloc.h:5971
inline void VmaDeviceMemoryBlock::GetMapRefCount()
{
} /* size: 0 */

// <00C95321> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6021
// member functions: 30
// member variables: 11
// struct size: 88
struct VmaAllocation_T {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6025 */
	enum FLAGS {
		FLAG_PERSISTENT_MAP = 1,
		FLAG_MAPPING_ALLOWED = 2,
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6032 */
	enum ALLOCATION_TYPE {
		ALLOCATION_TYPE_NONE = 0,
		ALLOCATION_TYPE_BLOCK = 1,
		ALLOCATION_TYPE_DEDICATED = 2,
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6096 */
	struct BlockAllocation {
		VmaDeviceMemoryBlock * m_Block; /* 0 8 */
		VmaAllocHandle m_AllocHandle; /* 8 8 */
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6102 */
	struct DedicatedAllocation {
		VmaPool m_hParentPool; /* 0 8 */
		VkDeviceMemory m_hMemory; /* 8 8 */
		void * m_pMappedData; /* 16 8 */
		VmaAllocation_T * m_Prev; /* 24 8 */
		VmaAllocation_T * m_Next; /* 32 8 */
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6111 */
	union {
		BlockAllocation m_BlockAllocation; /* 0 16 */
		DedicatedAllocation m_DedicatedAllocation; /* 0 40 */
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6040 */
	void VmaAllocation_T(VmaAllocation_T* , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6041 */
	void ~VmaAllocation_T(VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6043 */
	void InitBlockAllocation(VmaAllocation_T* , VmaDeviceMemoryBlock* , VmaAllocHandle, VkDeviceSize, VkDeviceSize, uint32_t, VmaSuballocationType, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6052 */
	void InitDedicatedAllocation(VmaAllocation_T* , VmaPool, uint32_t, VkDeviceMemory, VmaSuballocationType, void* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6060 */
	ALLOCATION_TYPE GetType(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6061 */
	VkDeviceSize GetAlignment(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6062 */
	VkDeviceSize GetSize(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6063 */
	void* GetUserData(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6064 */
	const char* GetName(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6065 */
	VmaSuballocationType GetSuballocationType(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6067 */
	VmaDeviceMemoryBlock* GetBlock(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6068 */
	uint32_t GetMemoryTypeIndex(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6069 */
	bool IsPersistentMap(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6070 */
	bool IsMappingAllowed(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6072 */
	void SetUserData(VmaAllocation_T* , VmaAllocator, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6073 */
	void SetName(VmaAllocation_T* , VmaAllocator, const char* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6074 */
	void FreeName(VmaAllocation_T* , VmaAllocator);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6075 */
	uint8_t SwapBlockAllocation(VmaAllocation_T* , VmaAllocator, VmaAllocation);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6076 */
	VmaAllocHandle GetAllocHandle(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6077 */
	VkDeviceSize GetOffset(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6078 */
	VmaPool GetParentPool(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6079 */
	VkDeviceMemory GetMemory(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6080 */
	void* GetMappedData(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6082 */
	void BlockAllocMap(VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6083 */
	void BlockAllocUnmap(VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6084 */
	VkResult DedicatedAllocMap(VmaAllocation_T* , VmaAllocator, void** );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6085 */
	void DedicatedAllocUnmap(VmaAllocation_T* , VmaAllocator);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6088 */
	uint32_t GetBufferImageUsage(const VmaAllocation_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6090 */
	void InitBufferImageUsage(VmaAllocation_T* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6091 */
	void PrintParameters(const VmaAllocation_T* , VmaJsonWriter& );
private:
	union {
		BlockAllocation m_BlockAllocation; /* 0 16 */
		DedicatedAllocation m_DedicatedAllocation; /* 0 40 */
	}; /* 0 40 */
	VkDeviceSize m_Alignment; /* 40 8 */
	VkDeviceSize m_Size; /* 48 8 */
	void * m_pUserData; /* 56 8 */
	char * m_pName; /* 64 8 */
	uint32_t m_MemoryTypeIndex; /* 72 4 */
	uint8_t m_Type; /* 76 1 */
	uint8_t m_SuballocationType; /* 77 1 */
	uint8_t m_MapCount; /* 78 1 */
	uint8_t m_Flags; /* 79 1 */
	uint32_t m_BufferImageUsage; /* 80 4 */
};

// <00CF1E20> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6060
inline void VmaAllocation_T::GetType()
{
} /* size: 0 */

// <00CF1E07> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6061
inline void VmaAllocation_T::GetAlignment()
{
} /* size: 0 */

// <00CF1DEE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6062
inline void VmaAllocation_T::GetSize()
{
} /* size: 0 */

// <00CF1DD0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6063
inline void* VmaAllocation_T::GetUserData()
{
} /* size: 0 */

// <00CF1DB7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6064
inline void VmaAllocation_T::GetName()
{
} /* size: 0 */

// <00CF1D9E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6065
inline void VmaAllocation_T::GetSuballocationType()
{
} /* size: 0 */

// <00CF1D85> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6067
inline void VmaAllocation_T::GetBlock()
{
} /* size: 0 */

// <00CF1D6C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6068
inline void VmaAllocation_T::GetMemoryTypeIndex()
{
} /* size: 0 */

// <00CF1D53> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6069
inline void VmaAllocation_T::IsPersistentMap()
{
} /* size: 0 */

// <00CF1D3A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6070
inline void VmaAllocation_T::IsMappingAllowed()
{
} /* size: 0 */

// <00CF1D07> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6072
inline void VmaAllocation_T::SetUserData(VmaAllocator hAllocator, void* pUserData)
{
} /* size: 0 */

// <00CB199C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6135
// member functions: 4
// struct size: 1
struct VmaDedicatedAllocationListItemTraits {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6137 */
	typedef struct VmaAllocation_T ItemType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6139 */
	ItemType* GetPrev(const ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6144 */
	ItemType* GetNext(const ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6149 */
	ItemType* & AccessPrev(ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6154 */
	ItemType* & AccessNext(ItemType* );
};

// <00CF1CEF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6139
inline void GetPrev(const ItemType* item)
{
} /* size: 0 */

// <00CF1CD7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6144
inline void GetNext(const ItemType* item)
{
} /* size: 0 */

// <00CF1CBF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6149
inline void AccessPrev(ItemType* item)
{
} /* size: 0 */

// <00CF1CA7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6154
inline void AccessNext(ItemType* item)
{
} /* size: 0 */

// <00CB1DCB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6167
// member functions: 28
// member variables: 3
// class size: 376
class VmaDedicatedAllocationList {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6169 */
	void VmaDedicatedAllocationList(VmaDedicatedAllocationList* , const VmaDedicatedAllocationList& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6169 */
	void VmaDedicatedAllocationList(VmaDedicatedAllocationList* , VmaDedicatedAllocationList& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6169 */
	VmaDedicatedAllocationList& operator=(VmaDedicatedAllocationList* , const VmaDedicatedAllocationList& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6169 */
	VmaDedicatedAllocationList& operator=(VmaDedicatedAllocationList* , VmaDedicatedAllocationList& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6171 */
	void VmaDedicatedAllocationList(VmaDedicatedAllocationList* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6172 */
	void ~VmaDedicatedAllocationList(VmaDedicatedAllocationList* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6174 */
	void Init(VmaDedicatedAllocationList* , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6175 */
	bool Validate(VmaDedicatedAllocationList* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6177 */
	void AddDetailedStatistics(VmaDedicatedAllocationList* , VmaDetailedStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6178 */
	void AddStatistics(VmaDedicatedAllocationList* , VmaStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6181 */
	void BuildStatsString(VmaDedicatedAllocationList* , VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6184 */
	bool IsEmpty(VmaDedicatedAllocationList* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6185 */
	void Register(VmaDedicatedAllocationList* , VmaAllocation);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6186 */
	void Unregister(VmaDedicatedAllocationList* , VmaAllocation);
	bool m_UseMutex; /* 0 1 */
	CVMAThreadRWLock m_Mutex; /* 8 344 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6189 */
	typedef struct VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits> DedicatedAllocationLinkedList;
	DedicatedAllocationLinkedList m_AllocationList; /* 352 24 */
	void VmaDedicatedAllocationList(class VmaDedicatedAllocationList *, const class VmaDedicatedAllocationList  &); /* linkage=_ZN26VmaDedicatedAllocationListC4ERKS_ */
	void VmaDedicatedAllocationList(class VmaDedicatedAllocationList *, class VmaDedicatedAllocationList &); /* linkage=_ZN26VmaDedicatedAllocationListC4EOS_ */
	class VmaDedicatedAllocationList & operator=(class VmaDedicatedAllocationList *, const class VmaDedicatedAllocationList  &); /* linkage=_ZN26VmaDedicatedAllocationListaSERKS_ */
	class VmaDedicatedAllocationList & operator=(class VmaDedicatedAllocationList *, class VmaDedicatedAllocationList &); /* linkage=_ZN26VmaDedicatedAllocationListaSEOS_ */
	void VmaDedicatedAllocationList(class VmaDedicatedAllocationList *); /* linkage=_ZN26VmaDedicatedAllocationListC4Ev */
	void ~VmaDedicatedAllocationList(class VmaDedicatedAllocationList *); /* linkage=_ZN26VmaDedicatedAllocationListD4Ev */
	void Init(class VmaDedicatedAllocationList *, bool); /* linkage=_ZN26VmaDedicatedAllocationList4InitEb */
	bool Validate(class VmaDedicatedAllocationList *); /* linkage=_ZN26VmaDedicatedAllocationList8ValidateEv */
	void AddDetailedStatistics(class VmaDedicatedAllocationList *, VmaDetailedStatistics &); /* linkage=_ZN26VmaDedicatedAllocationList21AddDetailedStatisticsER21VmaDetailedStatistics */
	void AddStatistics(class VmaDedicatedAllocationList *, VmaStatistics &); /* linkage=_ZN26VmaDedicatedAllocationList13AddStatisticsER13VmaStatistics */
	void BuildStatsString(class VmaDedicatedAllocationList *, class VmaJsonWriter &); /* linkage=_ZN26VmaDedicatedAllocationList16BuildStatsStringER13VmaJsonWriter */
	bool IsEmpty(class VmaDedicatedAllocationList *); /* linkage=_ZN26VmaDedicatedAllocationList7IsEmptyEv */
	void Register(class VmaDedicatedAllocationList *, VmaAllocation); /* linkage=_ZN26VmaDedicatedAllocationList8RegisterEP15VmaAllocation_T */
	void Unregister(class VmaDedicatedAllocationList *, VmaAllocation); /* linkage=_ZN26VmaDedicatedAllocationList10UnregisterEP15VmaAllocation_T */
};

// <00CF1BC3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6171
void VmaDedicatedAllocationList::VmaDedicatedAllocationList()
{
} /* size: 0 */

// <00CF1BAA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6171
inline void VmaDedicatedAllocationList::VmaDedicatedAllocationList()
{
} /* size: 0 */

// <00CF19FD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6198
// function calls: 7
void VmaDedicatedAllocationList::~VmaDedicatedAllocationList()
{
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::IsEmpty(); // 6202
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::~VmaIntrusiveLinkedList(); // 6206
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 11
	CVMAThreadRWLock::~CVMAThreadRWLock(); // 6206
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00CF19E1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6198
void VmaDedicatedAllocationList::~VmaDedicatedAllocationList()
{
} /* size: 0 */

// <00CF15FA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6208
// variables: 4
// function calls: 14
void VmaDedicatedAllocationList::Validate()
{
	const size_t  declaredCount; // 6210
	size_t actualCount; // 6211
	VmaMutexLockRead lock; // 6212
	{
		VmaAllocation alloc; // 6213
		VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::Front(); // 6213
		GetNext(const ItemType* item); // 5103
		GetNext(const ItemType* item); // 6214
	}
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::GetCount(); // 6210
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 16
	CVMAThreadRWLock::LockRead(); // 4012
	VmaMutexLockRead::VmaMutexLockRead(
			CVMAThreadRWLock& mutex,
			bool useMutex);  // 6212
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 21
	CVMAThreadRWLock::UnlockRead(); // 4014
	VmaMutexLockRead::~VmaMutexLockRead(); // 6221
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <00CF13DE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6223
// variables: 2
// function calls: 8
void VmaDedicatedAllocationList::AddDetailedStatistics(VmaDetailedStatistics& inoutStats)
{
	{
		VmaAllocation_T* item; // 6225
		{
			const VkDeviceSize  size; // 6227
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3964
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3965
			VmaAddDetailedStatisticsAllocation(VmaDetailedStatistics& inoutStats,
								VkDeviceSize size);  // 6230
			VmaAllocation_T::GetSize(); // 6227
			VmaAllocation_T::GetSize(); // 6230
		}
		VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::Front(); // 6225
		GetNext(const ItemType* item); // 5103
		GetNext(const ItemType* item); // 6225
	}
} /* size: 137 */

// <00CF0F6D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6234
// variables: 4
// function calls: 15
void VmaDedicatedAllocationList::AddStatistics(VmaStatistics& inoutStats)
{
	VmaMutexLockRead lock; // 6236
	const uint32_t  allocCount; // 6238
	{
		VmaAllocation_T* item; // 6242
		{
			const VkDeviceSize  size; // 6244
			VmaAllocation_T::GetSize(); // 6244
		}
		VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::Front(); // 6242
		GetNext(const ItemType* item); // 5103
		GetNext(const ItemType* item); // 6242
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 16
	CVMAThreadRWLock::LockRead(); // 4012
	VmaMutexLockRead::VmaMutexLockRead(
			CVMAThreadRWLock& mutex,
			bool useMutex);  // 6236
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::GetCount(); // 6238
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 21
	CVMAThreadRWLock::UnlockRead(); // 4014
	VmaMutexLockRead::~VmaMutexLockRead(); // 6248
} /* size: 482, variables: 2, inline expansions: 11 (1234 bytes) */

// <00CF0831> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6251
// variables: 2
// function calls: 25
void VmaDedicatedAllocationList::BuildStatsString(VmaJsonWriter& json)
{
	VmaMutexLockRead lock; // 6253
	{
		VmaAllocation alloc; // 6255
		VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::Front(); // 6255
		VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
		VmaVector<char, VmaStlAllocator<char> >::push_back(
				const char& src);  // 5436
		VmaStringBuilder::Add(
			char ch);  // 5604
		VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
		VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
		VmaJsonWriter::EndObject(); // 6260
		GetNext(const ItemType* item); // 5103
		GetNext(const ItemType* item); // 6256
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 16
	CVMAThreadRWLock::LockRead(); // 4012
	VmaMutexLockRead::VmaMutexLockRead(
			CVMAThreadRWLock& mutex,
			bool useMutex);  // 6253
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5629
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5632
	VmaJsonWriter::EndArray(); // 6262
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 21
	CVMAThreadRWLock::UnlockRead(); // 4014
	VmaMutexLockRead::~VmaMutexLockRead(); // 6263
} /* size: 652, variables: 1, inline expansions: 16 (1542 bytes) */

// <00CF050E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6266
// variable: 1
// function calls: 11
void VmaDedicatedAllocationList::IsEmpty()
{
	VmaMutexLockRead lock; // 6268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 16
	CVMAThreadRWLock::LockRead(); // 4012
	VmaMutexLockRead::VmaMutexLockRead(
			CVMAThreadRWLock& mutex,
			bool useMutex);  // 6268
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::IsEmpty(); // 6269
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 21
	CVMAThreadRWLock::UnlockRead(); // 4014
	VmaMutexLockRead::~VmaMutexLockRead(); // 6270
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <00CF0331> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6272
// variable: 1
// function calls: 7
void VmaDedicatedAllocationList::Register(VmaAllocation alloc)
{
	VmaMutexLockWrite lock; // 6274
	CVMAThreadRWLock::LockWrite(); // 4028
	VmaMutexLockWrite::VmaMutexLockWrite(
				CVMAThreadRWLock& mutex,
				bool useMutex);  // 6274
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::IsEmpty(); // 5166
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::PushBack(
		ItemType* item);  // 5163
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::PushBack(
		ItemType* item);  // 6275
	CVMAThreadRWLock::UnlockWrite(); // 4030
	VmaMutexLockWrite::~VmaMutexLockWrite(); // 6276
} /* size: 231, variables: 1, inline expansions: 7 (319 bytes) */

// <00CF00E3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6278
// variable: 1
// function calls: 9
void VmaDedicatedAllocationList::Unregister(VmaAllocation alloc)
{
	VmaMutexLockWrite lock; // 6280
	CVMAThreadRWLock::LockWrite(); // 4028
	VmaMutexLockWrite::VmaMutexLockWrite(
				CVMAThreadRWLock& mutex,
				bool useMutex);  // 6280
	GetPrev(const ItemType* item); // 5288
	GetNext(const ItemType* item); // 5290
	GetNext(const ItemType* item); // 5298
	GetPrev(const ItemType* item); // 5300
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::Remove(
		ItemType* item);  // 6281
	CVMAThreadRWLock::UnlockWrite(); // 4030
	VmaMutexLockWrite::~VmaMutexLockWrite(); // 6282
} /* size: 186, variables: 1, inline expansions: 9 (197 bytes) */

// <00CB203B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6291
// member variables: 4
// struct size: 32
struct VmaSuballocation {
	VkDeviceSize offset; /* 0 8 */
	VkDeviceSize size; /* 8 8 */
	void * userData; /* 16 8 */
	VmaSuballocationType type; /* 24 4 */
};

// <00CB208F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6300
// member function: 1
// struct size: 1
struct VmaSuballocationOffsetLess {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6302 */
	bool operator()(const VmaSuballocationOffsetLess* , const VmaSuballocation& , const VmaSuballocation& );
};

// <00CF00B0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6302
inline void VmaSuballocationOffsetLess::operator(const VmaSuballocation& lhs, const VmaSuballocation& rhs)
{
} /* size: 0 */

// <00CB20DD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6308
// member function: 1
// struct size: 1
struct VmaSuballocationOffsetGreater {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6310 */
	bool operator()(const VmaSuballocationOffsetGreater* , const VmaSuballocation& , const VmaSuballocation& );
};

// <00CF007D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6310
inline void VmaSuballocationOffsetGreater::operator(const VmaSuballocation& lhs, const VmaSuballocation& rhs)
{
} /* size: 0 */

// <00CB2E61> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6337
// member variables: 6
// struct size: 56
struct VmaAllocationRequest {
	VmaAllocHandle allocHandle; /* 0 8 */
	VkDeviceSize size; /* 8 8 */
	iterator item; /* 16 16 */
	void * customData; /* 32 8 */
	uint64_t algorithmData; /* 40 8 */
	VmaAllocationRequestType type; /* 48 4 */
};

// <00CB12A8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6353
// member functions: 76
// member variables: 5
// vtable entries: 22
// class size: 40
class VmaBlockMetadata {
	int ()(void) * * _vptr.VmaBlockMetadata; /* 0 8 */
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6355 */
	void VmaBlockMetadata(VmaBlockMetadata* , const VmaBlockMetadata& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6355 */
	void VmaBlockMetadata(VmaBlockMetadata* , VmaBlockMetadata& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6355 */
	VmaBlockMetadata& operator=(VmaBlockMetadata* , const VmaBlockMetadata& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6355 */
	VmaBlockMetadata& operator=(VmaBlockMetadata* , VmaBlockMetadata& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6447 */
	void VmaBlockMetadata(VmaBlockMetadata* , const VkAllocationCallbacks* , VkDeviceSize, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6360 */
	virtual void ~VmaBlockMetadata(VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6362 */
	virtual void Init(VmaBlockMetadata* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6363 */
	bool IsVirtual(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6364 */
	VkDeviceSize GetSize(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6367 */
	virtual bool Validate(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6368 */
	virtual size_t GetAllocationCount(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6369 */
	virtual size_t GetFreeRegionsCount(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6370 */
	virtual VkDeviceSize GetSumFreeSize(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6372 */
	virtual bool IsEmpty(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6373 */
	virtual void GetAllocationInfo(VmaBlockMetadata* , VmaAllocHandle, VmaVirtualAllocationInfo& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6374 */
	virtual VkDeviceSize GetAllocationOffset(const VmaBlockMetadata* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6375 */
	virtual void* GetAllocationUserData(const VmaBlockMetadata* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6377 */
	virtual VmaAllocHandle GetAllocationListBegin(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6378 */
	virtual VmaAllocHandle GetNextAllocation(const VmaBlockMetadata* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6379 */
	virtual VkDeviceSize GetNextFreeRegionSize(const VmaBlockMetadata* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6382 */
	virtual void AddDetailedStatistics(const VmaBlockMetadata* , VmaDetailedStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6383 */
	virtual void AddStatistics(const VmaBlockMetadata* , VmaStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6386 */
	virtual void PrintDetailedMap(const VmaBlockMetadata* , VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6392 */
	virtual bool CreateAllocationRequest(VmaBlockMetadata* , VkDeviceSize, VkDeviceSize, bool, VmaSuballocationType, uint32_t, VmaAllocationRequest* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6401 */
	virtual VkResult CheckCorruption(VmaBlockMetadata* , const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6404 */
	virtual void Alloc(VmaBlockMetadata* , const VmaAllocationRequest& , VmaSuballocationType, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6410 */
	virtual void Free(VmaBlockMetadata* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6414 */
	virtual void Clear(VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6416 */
	virtual void SetAllocationUserData(VmaBlockMetadata* , VmaAllocHandle, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6417 */
	virtual void DebugLogAllAllocations(const VmaBlockMetadata* );
protected:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6420 */
	const VkAllocationCallbacks* GetAllocationCallbacks(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6421 */
	VkDeviceSize GetBufferImageGranularity(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6422 */
	VkDeviceSize GetDebugMargin(const VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6454 */
	void DebugLogAllocation(const VmaBlockMetadata* , VkDeviceSize, VkDeviceSize, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6484 */
	void PrintDetailedMap_Begin(const VmaBlockMetadata* , VmaJsonWriter& , VkDeviceSize, size_t, size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6503 */
	void PrintDetailedMap_Allocation(const VmaBlockMetadata* , VmaJsonWriter& , VkDeviceSize, VkDeviceSize, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6531 */
	void PrintDetailedMap_UnusedRange(const VmaBlockMetadata* , VmaJsonWriter& , VkDeviceSize, VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6548 */
	void PrintDetailedMap_End(const VmaBlockMetadata* , VmaJsonWriter& );
private:
	VkDeviceSize m_Size; /* 8 8 */
	const VkAllocationCallbacks * m_pAllocationCallbacks; /* 16 8 */
	const VkDeviceSize m_BufferImageGranularity; /* 24 8 */
	const bool m_IsVirtual; /* 32 1 */
	void VmaBlockMetadata(class VmaBlockMetadata *, const class VmaBlockMetadata  &); /* linkage=_ZN16VmaBlockMetadataC4ERKS_ */
	void VmaBlockMetadata(class VmaBlockMetadata *, class VmaBlockMetadata &); /* linkage=_ZN16VmaBlockMetadataC4EOS_ */
	class VmaBlockMetadata & operator=(class VmaBlockMetadata *, const class VmaBlockMetadata  &); /* linkage=_ZN16VmaBlockMetadataaSERKS_ */
	class VmaBlockMetadata & operator=(class VmaBlockMetadata *, class VmaBlockMetadata &); /* linkage=_ZN16VmaBlockMetadataaSEOS_ */
	void VmaBlockMetadata(class VmaBlockMetadata *, const VkAllocationCallbacks  *, VkDeviceSize, bool); /* linkage=_ZN16VmaBlockMetadataC4EPK21VkAllocationCallbacksmb */
	virtual void ~VmaBlockMetadata(class VmaBlockMetadata *); /* linkage=_ZN16VmaBlockMetadataD4Ev */
	/* <cf4f49> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6362 */
	virtual void Init(class VmaBlockMetadata *, VkDeviceSize); /* linkage=_ZN16VmaBlockMetadata4InitEm */
	bool IsVirtual(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata9IsVirtualEv */
	VkDeviceSize GetSize(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata7GetSizeEv */
	virtual bool Validate(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata8ValidateEv */
	virtual size_t GetAllocationCount(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata18GetAllocationCountEv */
	virtual size_t GetFreeRegionsCount(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata19GetFreeRegionsCountEv */
	virtual VkDeviceSize GetSumFreeSize(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata14GetSumFreeSizeEv */
	virtual bool IsEmpty(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata7IsEmptyEv */
	virtual void GetAllocationInfo(class VmaBlockMetadata *, VmaAllocHandle, VmaVirtualAllocationInfo &); /* linkage=_ZN16VmaBlockMetadata17GetAllocationInfoEP16VmaAllocHandle_TR24VmaVirtualAllocationInfo */
	virtual VkDeviceSize GetAllocationOffset(const class VmaBlockMetadata  *, VmaAllocHandle); /* linkage=_ZNK16VmaBlockMetadata19GetAllocationOffsetEP16VmaAllocHandle_T */
	virtual void * GetAllocationUserData(const class VmaBlockMetadata  *, VmaAllocHandle); /* linkage=_ZNK16VmaBlockMetadata21GetAllocationUserDataEP16VmaAllocHandle_T */
	virtual VmaAllocHandle GetAllocationListBegin(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata22GetAllocationListBeginEv */
	virtual VmaAllocHandle GetNextAllocation(const class VmaBlockMetadata  *, VmaAllocHandle); /* linkage=_ZNK16VmaBlockMetadata17GetNextAllocationEP16VmaAllocHandle_T */
	virtual VkDeviceSize GetNextFreeRegionSize(const class VmaBlockMetadata  *, VmaAllocHandle); /* linkage=_ZNK16VmaBlockMetadata21GetNextFreeRegionSizeEP16VmaAllocHandle_T */
	virtual void AddDetailedStatistics(const class VmaBlockMetadata  *, VmaDetailedStatistics &); /* linkage=_ZNK16VmaBlockMetadata21AddDetailedStatisticsER21VmaDetailedStatistics */
	virtual void AddStatistics(const class VmaBlockMetadata  *, VmaStatistics &); /* linkage=_ZNK16VmaBlockMetadata13AddStatisticsER13VmaStatistics */
	virtual void PrintDetailedMap(const class VmaBlockMetadata  *, class VmaJsonWriter &); /* linkage=_ZNK16VmaBlockMetadata16PrintDetailedMapER13VmaJsonWriter */
	virtual bool CreateAllocationRequest(class VmaBlockMetadata *, VkDeviceSize, VkDeviceSize, bool, enum VmaSuballocationType, uint32_t, class VmaAllocationRequest *); /* linkage=_ZN16VmaBlockMetadata23CreateAllocationRequestEmmb20VmaSuballocationTypejP20VmaAllocationRequest */
	virtual VkResult CheckCorruption(class VmaBlockMetadata *, const void  *); /* linkage=_ZN16VmaBlockMetadata15CheckCorruptionEPKv */
	virtual void Alloc(class VmaBlockMetadata *, const class VmaAllocationRequest  &, enum VmaSuballocationType, void *); /* linkage=_ZN16VmaBlockMetadata5AllocERK20VmaAllocationRequest20VmaSuballocationTypePv */
	virtual void Free(class VmaBlockMetadata *, VmaAllocHandle); /* linkage=_ZN16VmaBlockMetadata4FreeEP16VmaAllocHandle_T */
	virtual void Clear(class VmaBlockMetadata *); /* linkage=_ZN16VmaBlockMetadata5ClearEv */
	virtual void SetAllocationUserData(class VmaBlockMetadata *, VmaAllocHandle, void *); /* linkage=_ZN16VmaBlockMetadata21SetAllocationUserDataEP16VmaAllocHandle_TPv */
	virtual void DebugLogAllAllocations(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata22DebugLogAllAllocationsEv */
	const VkAllocationCallbacks  * GetAllocationCallbacks(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata22GetAllocationCallbacksEv */
	VkDeviceSize GetBufferImageGranularity(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata25GetBufferImageGranularityEv */
	VkDeviceSize GetDebugMargin(const class VmaBlockMetadata  *); /* linkage=_ZNK16VmaBlockMetadata14GetDebugMarginEv */
	/* <cf6223> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6454 */
	void DebugLogAllocation(const class VmaBlockMetadata  *, VkDeviceSize, VkDeviceSize, void *); /* linkage=_ZNK16VmaBlockMetadata18DebugLogAllocationEmmPv */
	void PrintDetailedMap_Begin(const class VmaBlockMetadata  *, class VmaJsonWriter &, VkDeviceSize, size_t, size_t); /* linkage=_ZNK16VmaBlockMetadata22PrintDetailedMap_BeginER13VmaJsonWritermmm */
	void PrintDetailedMap_Allocation(const class VmaBlockMetadata  *, class VmaJsonWriter &, VkDeviceSize, VkDeviceSize, void *); /* linkage=_ZNK16VmaBlockMetadata27PrintDetailedMap_AllocationER13VmaJsonWritermmPv */
	void PrintDetailedMap_UnusedRange(const class VmaBlockMetadata  *, class VmaJsonWriter &, VkDeviceSize, VkDeviceSize); /* linkage=_ZNK16VmaBlockMetadata28PrintDetailedMap_UnusedRangeER13VmaJsonWritermm */
	/* <cfa1b7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6548 */
	void PrintDetailedMap_End(const class VmaBlockMetadata  *, class VmaJsonWriter &); /* linkage=_ZNK16VmaBlockMetadata20PrintDetailedMap_EndER13VmaJsonWriter */
};

// <00CECFC9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6360
void VmaBlockMetadata::~VmaBlockMetadata()
{
} /* size: 0 */

// <00CECF99> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6360
inline void VmaBlockMetadata::~VmaBlockMetadata()
{
} /* size: 0 */

// <00CF4F49> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6362
void VmaBlockMetadata::Init(VkDeviceSize size)
{
} /* size: 0 */

// <00CF0057> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6362
inline void VmaBlockMetadata::Init(VkDeviceSize size)
{
} /* size: 0 */

// <00CF003E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6363
inline void VmaBlockMetadata::IsVirtual()
{
} /* size: 0 */

// <00CF0025> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6364
inline void VmaBlockMetadata::GetSize()
{
} /* size: 0 */

// <00CF000C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6420
inline void VmaBlockMetadata::GetAllocationCallbacks()
{
} /* size: 0 */

// <00CEFFF3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6421
inline void VmaBlockMetadata::GetBufferImageGranularity()
{
} /* size: 0 */

// <00CEFFDA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6422
inline void VmaBlockMetadata::GetDebugMargin()
{
} /* size: 0 */

// <00CEFF97> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6447
void VmaBlockMetadata::VmaBlockMetadata(const VkAllocationCallbacks* pAllocationCallbacks, VkDeviceSize bufferImageGranularity, bool isVirtual)
{
} /* size: 0 */

// <00CF6223> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6454
void VmaBlockMetadata::DebugLogAllocation(VkDeviceSize offset, VkDeviceSize size, void* userData)
{
} /* size: 0 */

// <00CEFEFB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6454
// variables: 2
void VmaBlockMetadata::DebugLogAllocation(VkDeviceSize offset, VkDeviceSize size, void* userData)
{
	{
		VmaAllocation allocation; // 6463
		const char* name; // 6466
	}
} /* size: 0 */

// <00CEF496> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6484
// function calls: 34
void VmaBlockMetadata::PrintDetailedMap_Begin(VmaJsonWriter& json, VkDeviceSize unusedBytes, size_t allocationCount, size_t unusedRangeCount)
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6487
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 6488
	VmaBlockMetadata::GetSize(); // 6488
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6490
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 6491
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6493
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 6494
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6496
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 6497
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6499
} /* size: 779, inline expansions: 34 (1540 bytes) */

// <00CEE939> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6503
// function calls: 38
void VmaBlockMetadata::PrintDetailedMap_Allocation(VmaJsonWriter& json, VkDeviceSize offset, VkDeviceSize size, void* userData)
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6508
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 6509
	VmaBlockMetadata::IsVirtual(); // 6511
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6513
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 6514
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6517
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5646
	VmaJsonWriter::BeginString(
			const char* pStr);  // 6518
	snprintf(char* __s,
		size_t __n,
		const char* __fmt, ...);  // 2917
	VmaPtrToStr(char* outStr,
			size_t strLen,
			const void* ptr);  // 5488
	VmaStringBuilder::AddPointer(
			const void* ptr);  // 5712
	VmaJsonWriter::ContinueString_Pointer(
				const void* ptr);  // 6519
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 6520
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5604
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
	VmaJsonWriter::EndObject(); // 6528
} /* size: 731, inline expansions: 38 (1432 bytes) */

// <00CEE06B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6531
// function calls: 30
void VmaBlockMetadata::PrintDetailedMap_UnusedRange(VmaJsonWriter& json, VkDeviceSize offset, VkDeviceSize size)
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6536
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 6537
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6539
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6540
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 6542
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 6543
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5604
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
	VmaJsonWriter::EndObject(); // 6545
} /* size: 588, inline expansions: 30 (1178 bytes) */

// <00CFA1B7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6548
// function calls: 6
void VmaBlockMetadata::PrintDetailedMap_End(VmaJsonWriter& json)
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5629
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5632
	VmaJsonWriter::EndArray(); // 6550
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00CEE045> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6548
void VmaBlockMetadata::PrintDetailedMap_End(VmaJsonWriter& json)
{
} /* size: 0 */

// <00CB2ED5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6558
// member functions: 34
// member variables: 3
// static member variable: 1
// class size: 24
class VmaBlockBufferImageGranularity {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6561 */
	struct ValidationContext {
		const VkAllocationCallbacks * allocCallbacks; /* 0 8 */
		uint16_t * pageAllocs; /* 8 8 */
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6598 */
	struct RegionInfo {
		uint8_t allocType; /* 0 1 */
		uint16_t allocCount; /* 2 2 */
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6567 */
	void VmaBlockBufferImageGranularity(VmaBlockBufferImageGranularity* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6568 */
	void ~VmaBlockBufferImageGranularity(VmaBlockBufferImageGranularity* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6570 */
	bool IsEnabled(const VmaBlockBufferImageGranularity* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6572 */
	void Init(VmaBlockBufferImageGranularity* , const VkAllocationCallbacks* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6574 */
	void Destroy(VmaBlockBufferImageGranularity* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6576 */
	void RoundupAllocRequest(const VmaBlockBufferImageGranularity* , VmaSuballocationType, VkDeviceSize& , VkDeviceSize& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6580 */
	bool CheckConflictAndAlignUp(const VmaBlockBufferImageGranularity* , VkDeviceSize& , VkDeviceSize, VkDeviceSize, VkDeviceSize, VmaSuballocationType);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6586 */
	void AllocPages(VmaBlockBufferImageGranularity* , uint8_t, VkDeviceSize, VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6587 */
	void FreePages(VmaBlockBufferImageGranularity* , VkDeviceSize, VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6588 */
	void Clear(VmaBlockBufferImageGranularity* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6590 */
	ValidationContext StartValidation(const VmaBlockBufferImageGranularity* , const VkAllocationCallbacks* , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6592 */
	bool Validate(const VmaBlockBufferImageGranularity* , ValidationContext& , VkDeviceSize, VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6593 */
	bool FinishValidation(const VmaBlockBufferImageGranularity* , ValidationContext& );
private:
	static const uint16_t MAX_LOW_BUFFER_IMAGE_GRANULARITY = 256; /* 0 0 */
	VkDeviceSize m_BufferImageGranularity; /* 0 8 */
	uint32_t m_RegionCount; /* 8 4 */
	RegionInfo * m_RegionInfo; /* 16 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6608 */
	uint32_t GetStartPage(const VmaBlockBufferImageGranularity* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6609 */
	uint32_t GetEndPage(const VmaBlockBufferImageGranularity* , VkDeviceSize, VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6611 */
	uint32_t OffsetToPageIndex(const VmaBlockBufferImageGranularity* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:6612 */
	void AllocPage(VmaBlockBufferImageGranularity* , RegionInfo& , uint8_t);
	void VmaBlockBufferImageGranularity(class VmaBlockBufferImageGranularity *, VkDeviceSize); /* linkage=_ZN30VmaBlockBufferImageGranularityC4Em */
	void ~VmaBlockBufferImageGranularity(class VmaBlockBufferImageGranularity *); /* linkage=_ZN30VmaBlockBufferImageGranularityD4Ev */
	bool IsEnabled(const class VmaBlockBufferImageGranularity  *); /* linkage=_ZNK30VmaBlockBufferImageGranularity9IsEnabledEv */
	void Init(class VmaBlockBufferImageGranularity *, const VkAllocationCallbacks  *, VkDeviceSize); /* linkage=_ZN30VmaBlockBufferImageGranularity4InitEPK21VkAllocationCallbacksm */
	/* <cf6267> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6636 */
	void Destroy(class VmaBlockBufferImageGranularity *, const VkAllocationCallbacks  *); /* linkage=_ZN30VmaBlockBufferImageGranularity7DestroyEPK21VkAllocationCallbacks */
	/* <cf6323> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6645 */
	void RoundupAllocRequest(const class VmaBlockBufferImageGranularity  *, enum VmaSuballocationType, VkDeviceSize &, VkDeviceSize &); /* linkage=_ZNK30VmaBlockBufferImageGranularity19RoundupAllocRequestE20VmaSuballocationTypeRmS1_ */
	bool CheckConflictAndAlignUp(const class VmaBlockBufferImageGranularity  *, VkDeviceSize &, VkDeviceSize, VkDeviceSize, VkDeviceSize, enum VmaSuballocationType); /* linkage=_ZNK30VmaBlockBufferImageGranularity23CheckConflictAndAlignUpERmmmm20VmaSuballocationType */
	void AllocPages(class VmaBlockBufferImageGranularity *, uint8_t, VkDeviceSize, VkDeviceSize); /* linkage=_ZN30VmaBlockBufferImageGranularity10AllocPagesEhmm */
	void FreePages(class VmaBlockBufferImageGranularity *, VkDeviceSize, VkDeviceSize); /* linkage=_ZN30VmaBlockBufferImageGranularity9FreePagesEmm */
	/* <cf63e7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6721 */
	void Clear(class VmaBlockBufferImageGranularity *); /* linkage=_ZN30VmaBlockBufferImageGranularity5ClearEv */
	class ValidationContext StartValidation(const class VmaBlockBufferImageGranularity  *, const VkAllocationCallbacks  *, bool); /* linkage=_ZNK30VmaBlockBufferImageGranularity15StartValidationEPK21VkAllocationCallbacksb */
	bool Validate(const class VmaBlockBufferImageGranularity  *, class ValidationContext &, VkDeviceSize, VkDeviceSize); /* linkage=_ZNK30VmaBlockBufferImageGranularity8ValidateERNS_17ValidationContextEmm */
	bool FinishValidation(const class VmaBlockBufferImageGranularity  *, class ValidationContext &); /* linkage=_ZNK30VmaBlockBufferImageGranularity16FinishValidationERNS_17ValidationContextE */
	uint32_t GetStartPage(const class VmaBlockBufferImageGranularity  *, VkDeviceSize); /* linkage=_ZNK30VmaBlockBufferImageGranularity12GetStartPageEm */
	uint32_t GetEndPage(const class VmaBlockBufferImageGranularity  *, VkDeviceSize, VkDeviceSize); /* linkage=_ZNK30VmaBlockBufferImageGranularity10GetEndPageEmm */
	/* <cf6469> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6775 */
	uint32_t OffsetToPageIndex(const class VmaBlockBufferImageGranularity  *, VkDeviceSize); /* linkage=_ZNK30VmaBlockBufferImageGranularity17OffsetToPageIndexEm */
	/* <cf64d0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6780 */
	void AllocPage(class VmaBlockBufferImageGranularity *, class RegionInfo &, uint8_t); /* linkage=_ZN30VmaBlockBufferImageGranularity9AllocPageERNS_10RegionInfoEh */
};

// <00CEE02C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6570
inline void VmaBlockBufferImageGranularity::IsEnabled()
{
} /* size: 0 */

// <00CEE006> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6608
inline void VmaBlockBufferImageGranularity::GetStartPage(VkDeviceSize offset)
{
} /* size: 0 */

// <00CEDFD3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6609
inline void VmaBlockBufferImageGranularity::GetEndPage(VkDeviceSize offset, VkDeviceSize size)
{
} /* size: 0 */

// <00CEDF9E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6616
void VmaBlockBufferImageGranularity::VmaBlockBufferImageGranularity(VkDeviceSize bufferImageGranularity)
{
} /* size: 0 */

// <00CEDF47> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6621
void VmaBlockBufferImageGranularity::~VmaBlockBufferImageGranularity()
{
} /* size: 0 */

// <00CEDD66> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6626
// function calls: 5
void VmaBlockBufferImageGranularity::Init(const VkAllocationCallbacks* pAllocationCallbacks, VkDeviceSize size)
{
	VmaBlockBufferImageGranularity::IsEnabled(); // 6628
	VmaDivideRoundingUp<long unsigned int>(long unsigned int x,
						long unsigned int y);  // 6630
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 3839
	VmaAllocateArray<VmaBlockBufferImageGranularity::RegionInfo>(const VkAllocationCallbacks* pAllocationCallbacks,
									size_t count);  // 6631
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6632
} /* size: 151, inline expansions: 5 (175 bytes) */

// <00CF6267> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6636
// function calls: 2
void VmaBlockBufferImageGranularity::Destroy(const VkAllocationCallbacks* pAllocationCallbacks)
{
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 3862
	vma_delete_array<VmaBlockBufferImageGranularity::RegionInfo>(const VkAllocationCallbacks* pAllocationCallbacks,
									RegionInfo* ptr,
									size_t count);  // 6640
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CEDD3D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6636
void VmaBlockBufferImageGranularity::Destroy(const VkAllocationCallbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <00CF6323> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6645
// function calls: 2
void VmaBlockBufferImageGranularity::RoundupAllocRequest(VmaSuballocationType allocType, VkDeviceSize& inOutAllocSize, VkDeviceSize& inOutAllocAlignment)
{
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 6656
	VmaAlignUp<long unsigned int>(long unsigned int val,
					long unsigned int alignment);  // 6657
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CEDCFA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6645
void VmaBlockBufferImageGranularity::RoundupAllocRequest(VmaSuballocationType allocType, VkDeviceSize& inOutAllocSize, VkDeviceSize& inOutAllocAlignment)
{
} /* size: 0 */

// <00CEDA4F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6662
// variables: 2
// function calls: 10
void VmaBlockBufferImageGranularity::CheckConflictAndAlignUp(VkDeviceSize& inOutAllocOffset, VkDeviceSize allocSize, VkDeviceSize blockOffset, VkDeviceSize blockSize, VmaSuballocationType allocType)
{
	{
		uint32_t startPage; // 6670
		uint32_t endPage; // 6679
		VmaBitScanMSB(uint64_t mask); // 6777
		VmaBlockBufferImageGranularity::OffsetToPageIndex(
					VkDeviceSize offset);  // 6608
		VmaBlockBufferImageGranularity::GetStartPage(
				VkDeviceSize offset);  // 6670
		VmaBitScanMSB(uint64_t mask); // 6777
		VmaBlockBufferImageGranularity::OffsetToPageIndex(
					VkDeviceSize offset);  // 6609
		VmaBlockBufferImageGranularity::GetEndPage(
				VkDeviceSize offset,
				VkDeviceSize size);  // 6679
		VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
							VmaSuballocationType suballocType2);  // 6682
		VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
							VmaSuballocationType suballocType2);  // 6672
		VmaAlignUp<long unsigned int>(long unsigned int val,
						long unsigned int alignment);  // 6674
	}
	VmaBlockBufferImageGranularity::IsEnabled(); // 6668
} /* size: 447, inline expansions: 1 (3 bytes) */

// <00CED7D2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6690
// variables: 2
// function calls: 9
void VmaBlockBufferImageGranularity::AllocPages(uint8_t allocType, VkDeviceSize offset, VkDeviceSize size)
{
	{
		uint32_t startPage; // 6694
		uint32_t endPage; // 6697
		VmaBitScanMSB(uint64_t mask); // 6777
		VmaBlockBufferImageGranularity::OffsetToPageIndex(
					VkDeviceSize offset);  // 6608
		VmaBlockBufferImageGranularity::GetStartPage(
				VkDeviceSize offset);  // 6694
		VmaBlockBufferImageGranularity::AllocPage(
				RegionInfo& page,
				uint8_t allocType);  // 6695
		VmaBitScanMSB(uint64_t mask); // 6777
		VmaBlockBufferImageGranularity::OffsetToPageIndex(
					VkDeviceSize offset);  // 6609
		VmaBlockBufferImageGranularity::GetEndPage(
				VkDeviceSize offset,
				VkDeviceSize size);  // 6697
		VmaBlockBufferImageGranularity::AllocPage(
				RegionInfo& page,
				uint8_t allocType);  // 6699
	}
	VmaBlockBufferImageGranularity::IsEnabled(); // 6692
} /* size: 183, inline expansions: 1 (3 bytes) */

// <00CED5F0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6703
// variables: 2
// function calls: 7
void VmaBlockBufferImageGranularity::FreePages(VkDeviceSize offset, VkDeviceSize size)
{
	{
		uint32_t startPage; // 6707
		uint32_t endPage; // 6711
		VmaBitScanMSB(uint64_t mask); // 6777
		VmaBlockBufferImageGranularity::OffsetToPageIndex(
					VkDeviceSize offset);  // 6608
		VmaBlockBufferImageGranularity::GetStartPage(
				VkDeviceSize offset);  // 6707
		VmaBitScanMSB(uint64_t mask); // 6777
		VmaBlockBufferImageGranularity::OffsetToPageIndex(
					VkDeviceSize offset);  // 6609
		VmaBlockBufferImageGranularity::GetEndPage(
				VkDeviceSize offset,
				VkDeviceSize size);  // 6711
	}
	VmaBlockBufferImageGranularity::IsEnabled(); // 6705
} /* size: 165, inline expansions: 1 (3 bytes) */

// <00CF63E7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6721
// function call: 1
void VmaBlockBufferImageGranularity::Clear()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6724
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CED5D4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6721
void VmaBlockBufferImageGranularity::Clear()
{
} /* size: 0 */

// <00CED429> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6727
// variable: 1
// function calls: 4
void VmaBlockBufferImageGranularity::StartValidation(const VkAllocationCallbacks* pAllocationCallbacks, bool isVirutal)
{
	ValidationContext ctx; // 6730
	VmaBlockBufferImageGranularity::IsEnabled(); // 6731
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 3839
	VmaAllocateArray<short unsigned int>(const VkAllocationCallbacks* pAllocationCallbacks,
						size_t count);  // 6733
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6734
} /* size: 183, variables: 1, inline expansions: 4 (187 bytes) */

// <00CED237> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6739
// variables: 2
// function calls: 7
void VmaBlockBufferImageGranularity::Validate(ValidationContext& ctx, VkDeviceSize offset, VkDeviceSize size)
{
	{
		uint32_t start; // 6744
		uint32_t end; // 6748
		VmaBitScanMSB(uint64_t mask); // 6777
		VmaBlockBufferImageGranularity::OffsetToPageIndex(
					VkDeviceSize offset);  // 6608
		VmaBlockBufferImageGranularity::GetStartPage(
				VkDeviceSize offset);  // 6744
		VmaBitScanMSB(uint64_t mask); // 6777
		VmaBlockBufferImageGranularity::OffsetToPageIndex(
					VkDeviceSize offset);  // 6609
		VmaBlockBufferImageGranularity::GetEndPage(
				VkDeviceSize offset,
				VkDeviceSize size);  // 6748
	}
	VmaBlockBufferImageGranularity::IsEnabled(); // 6742
} /* size: 161, inline expansions: 1 (3 bytes) */

// <00CED127> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6758
// variable: 1
// function calls: 3
void VmaBlockBufferImageGranularity::FinishValidation(ValidationContext& ctx)
{
	{
		uint32_t page; // 6765
	}
	VmaBlockBufferImageGranularity::IsEnabled(); // 6761
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 3862
	vma_delete_array<short unsigned int>(const VkAllocationCallbacks* pAllocationCallbacks,
						short unsigned int* ptr,
						size_t count);  // 6769
} /* size: 186, inline expansions: 3 (95 bytes) */

// <00CF6469> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6775
// function call: 1
void VmaBlockBufferImageGranularity::OffsetToPageIndex(VkDeviceSize offset)
{
	VmaBitScanMSB(uint64_t mask); // 6777
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CED0FE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6775
void VmaBlockBufferImageGranularity::OffsetToPageIndex(VkDeviceSize offset)
{
} /* size: 0 */

// <00CF64D0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:6780
void VmaBlockBufferImageGranularity::AllocPage(RegionInfo& page, uint8_t allocType)
{
} /* size: 0 */

// <00CB3273> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7634
// member functions: 74
// member variables: 9
// vtable entries: 22
// class size: 144
class VmaBlockMetadata_Linear : public VmaBlockMetadata {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7693 */
	enum SECOND_VECTOR_MODE {
		SECOND_VECTOR_EMPTY = 0,
		SECOND_VECTOR_RING_BUFFER = 1,
		SECOND_VECTOR_DOUBLE_STACK = 2,
	};
public:
	/* class VmaBlockMetadata <ancestor>; */ /* 0 40 */
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7636 */
	void VmaBlockMetadata_Linear(VmaBlockMetadata_Linear* , const VmaBlockMetadata_Linear& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7636 */
	void VmaBlockMetadata_Linear(VmaBlockMetadata_Linear* , VmaBlockMetadata_Linear& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7636 */
	VmaBlockMetadata_Linear& operator=(VmaBlockMetadata_Linear* , const VmaBlockMetadata_Linear& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7636 */
	VmaBlockMetadata_Linear& operator=(VmaBlockMetadata_Linear* , VmaBlockMetadata_Linear& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7744 */
	void VmaBlockMetadata_Linear(VmaBlockMetadata_Linear* , const VkAllocationCallbacks* , VkDeviceSize, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7640 */
	virtual void ~VmaBlockMetadata_Linear(VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7642 */
	virtual VkDeviceSize GetSumFreeSize(const VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7643 */
	virtual bool IsEmpty(const VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7644 */
	virtual VkDeviceSize GetAllocationOffset(const VmaBlockMetadata_Linear* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7756 */
	virtual void Init(VmaBlockMetadata_Linear* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7762 */
	virtual bool Validate(const VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7911 */
	virtual size_t GetAllocationCount(const VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7917 */
	virtual size_t GetFreeRegionsCount(const VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7924 */
	virtual void AddDetailedStatistics(const VmaBlockMetadata_Linear* , VmaDetailedStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8085 */
	virtual void AddStatistics(const VmaBlockMetadata_Linear* , VmaStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8203 */
	virtual void PrintDetailedMap(const VmaBlockMetadata_Linear* , VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8519 */
	virtual bool CreateAllocationRequest(VmaBlockMetadata_Linear* , VkDeviceSize, VkDeviceSize, bool, VmaSuballocationType, uint32_t, VmaAllocationRequest* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8539 */
	virtual VkResult CheckCorruption(VmaBlockMetadata_Linear* , const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8573 */
	virtual void Alloc(VmaBlockMetadata_Linear* , const VmaAllocationRequest& , VmaSuballocationType, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8641 */
	virtual void Free(VmaBlockMetadata_Linear* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8730 */
	virtual void GetAllocationInfo(VmaBlockMetadata_Linear* , VmaAllocHandle, VmaVirtualAllocationInfo& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8738 */
	virtual void* GetAllocationUserData(const VmaBlockMetadata_Linear* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8743 */
	virtual VmaAllocHandle GetAllocationListBegin(const VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8750 */
	virtual VmaAllocHandle GetNextAllocation(const VmaBlockMetadata_Linear* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8757 */
	virtual VkDeviceSize GetNextFreeRegionSize(const VmaBlockMetadata_Linear* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8764 */
	virtual void Clear(VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8776 */
	virtual void SetAllocationUserData(VmaBlockMetadata_Linear* , VmaAllocHandle, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8782 */
	virtual void DebugLogAllAllocations(const VmaBlockMetadata_Linear* );
	VkDeviceSize m_SumFreeSize; /* 40 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7691 */
	typedef struct VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> > SuballocationVectorType;
	/* tag__fprintf: const_type tag not supported! */;
	SuballocationVectorType m_Suballocations0; /* 48 32 */
	SuballocationVectorType m_Suballocations1; /* 80 32 */
	uint32_t m_1stVectorIndex; /* 112 4 */
	SECOND_VECTOR_MODE m_2ndVectorMode; /* 116 4 */
	size_t m_1stNullItemsBeginCount; /* 120 8 */
	size_t m_1stNullItemsMiddleCount; /* 128 8 */
	size_t m_2ndNullItemsCount; /* 136 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7720 */
	SuballocationVectorType& AccessSuballocations1st(VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7721 */
	SuballocationVectorType& AccessSuballocations2nd(VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7722 */
	const SuballocationVectorType& AccessSuballocations1st(const VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:7723 */
	const SuballocationVectorType& AccessSuballocations2nd(const VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8795 */
	VmaSuballocation& FindSuballocation(const VmaBlockMetadata_Linear* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8833 */
	bool ShouldCompact1st(const VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8840 */
	void CleanupAfterFree(VmaBlockMetadata_Linear* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:8945 */
	bool CreateAllocationRequest_LowerAddress(VmaBlockMetadata_Linear* , VkDeviceSize, VkDeviceSize, VmaSuballocationType, uint32_t, VmaAllocationRequest* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9123 */
	bool CreateAllocationRequest_UpperAddress(VmaBlockMetadata_Linear* , VkDeviceSize, VkDeviceSize, VmaSuballocationType, uint32_t, VmaAllocationRequest* );
	void VmaBlockMetadata_Linear(class VmaBlockMetadata_Linear *, const class VmaBlockMetadata_Linear  &); /* linkage=_ZN23VmaBlockMetadata_LinearC4ERKS_ */
	void VmaBlockMetadata_Linear(class VmaBlockMetadata_Linear *, class VmaBlockMetadata_Linear &); /* linkage=_ZN23VmaBlockMetadata_LinearC4EOS_ */
	class VmaBlockMetadata_Linear & operator=(class VmaBlockMetadata_Linear *, const class VmaBlockMetadata_Linear  &); /* linkage=_ZN23VmaBlockMetadata_LinearaSERKS_ */
	class VmaBlockMetadata_Linear & operator=(class VmaBlockMetadata_Linear *, class VmaBlockMetadata_Linear &); /* linkage=_ZN23VmaBlockMetadata_LinearaSEOS_ */
	void VmaBlockMetadata_Linear(class VmaBlockMetadata_Linear *, const VkAllocationCallbacks  *, VkDeviceSize, bool); /* linkage=_ZN23VmaBlockMetadata_LinearC4EPK21VkAllocationCallbacksmb */
	virtual void ~VmaBlockMetadata_Linear(class VmaBlockMetadata_Linear *); /* linkage=_ZN23VmaBlockMetadata_LinearD4Ev */
	virtual VkDeviceSize GetSumFreeSize(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear14GetSumFreeSizeEv */
	/* <cf51c2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7643 */
	virtual bool IsEmpty(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear7IsEmptyEv */
	virtual VkDeviceSize GetAllocationOffset(const class VmaBlockMetadata_Linear  *, VmaAllocHandle); /* linkage=_ZNK23VmaBlockMetadata_Linear19GetAllocationOffsetEP16VmaAllocHandle_T */
	virtual void Init(class VmaBlockMetadata_Linear *, VkDeviceSize); /* linkage=_ZN23VmaBlockMetadata_Linear4InitEm */
	virtual bool Validate(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear8ValidateEv */
	/* <cf4f79> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7911 */
	virtual size_t GetAllocationCount(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear18GetAllocationCountEv */
	virtual size_t GetFreeRegionsCount(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear19GetFreeRegionsCountEv */
	virtual void AddDetailedStatistics(const class VmaBlockMetadata_Linear  *, VmaDetailedStatistics &); /* linkage=_ZNK23VmaBlockMetadata_Linear21AddDetailedStatisticsER21VmaDetailedStatistics */
	virtual void AddStatistics(const class VmaBlockMetadata_Linear  *, VmaStatistics &); /* linkage=_ZNK23VmaBlockMetadata_Linear13AddStatisticsER13VmaStatistics */
	virtual void PrintDetailedMap(const class VmaBlockMetadata_Linear  *, class VmaJsonWriter &); /* linkage=_ZNK23VmaBlockMetadata_Linear16PrintDetailedMapER13VmaJsonWriter */
	virtual bool CreateAllocationRequest(class VmaBlockMetadata_Linear *, VkDeviceSize, VkDeviceSize, bool, enum VmaSuballocationType, uint32_t, class VmaAllocationRequest *); /* linkage=_ZN23VmaBlockMetadata_Linear23CreateAllocationRequestEmmb20VmaSuballocationTypejP20VmaAllocationRequest */
	virtual VkResult CheckCorruption(class VmaBlockMetadata_Linear *, const void  *); /* linkage=_ZN23VmaBlockMetadata_Linear15CheckCorruptionEPKv */
	virtual void Alloc(class VmaBlockMetadata_Linear *, const class VmaAllocationRequest  &, enum VmaSuballocationType, void *); /* linkage=_ZN23VmaBlockMetadata_Linear5AllocERK20VmaAllocationRequest20VmaSuballocationTypePv */
	virtual void Free(class VmaBlockMetadata_Linear *, VmaAllocHandle); /* linkage=_ZN23VmaBlockMetadata_Linear4FreeEP16VmaAllocHandle_T */
	virtual void GetAllocationInfo(class VmaBlockMetadata_Linear *, VmaAllocHandle, VmaVirtualAllocationInfo &); /* linkage=_ZN23VmaBlockMetadata_Linear17GetAllocationInfoEP16VmaAllocHandle_TR24VmaVirtualAllocationInfo */
	virtual void * GetAllocationUserData(const class VmaBlockMetadata_Linear  *, VmaAllocHandle); /* linkage=_ZNK23VmaBlockMetadata_Linear21GetAllocationUserDataEP16VmaAllocHandle_T */
	virtual VmaAllocHandle GetAllocationListBegin(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear22GetAllocationListBeginEv */
	virtual VmaAllocHandle GetNextAllocation(const class VmaBlockMetadata_Linear  *, VmaAllocHandle); /* linkage=_ZNK23VmaBlockMetadata_Linear17GetNextAllocationEP16VmaAllocHandle_T */
	virtual VkDeviceSize GetNextFreeRegionSize(const class VmaBlockMetadata_Linear  *, VmaAllocHandle); /* linkage=_ZNK23VmaBlockMetadata_Linear21GetNextFreeRegionSizeEP16VmaAllocHandle_T */
	virtual void Clear(class VmaBlockMetadata_Linear *); /* linkage=_ZN23VmaBlockMetadata_Linear5ClearEv */
	virtual void SetAllocationUserData(class VmaBlockMetadata_Linear *, VmaAllocHandle, void *); /* linkage=_ZN23VmaBlockMetadata_Linear21SetAllocationUserDataEP16VmaAllocHandle_TPv */
	virtual void DebugLogAllAllocations(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear22DebugLogAllAllocationsEv */
	SuballocationVectorType & AccessSuballocations1st(class VmaBlockMetadata_Linear *); /* linkage=_ZN23VmaBlockMetadata_Linear23AccessSuballocations1stEv */
	SuballocationVectorType & AccessSuballocations2nd(class VmaBlockMetadata_Linear *); /* linkage=_ZN23VmaBlockMetadata_Linear23AccessSuballocations2ndEv */
	const SuballocationVectorType  & AccessSuballocations1st(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear23AccessSuballocations1stEv */
	const SuballocationVectorType  & AccessSuballocations2nd(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear23AccessSuballocations2ndEv */
	class VmaSuballocation & FindSuballocation(const class VmaBlockMetadata_Linear  *, VkDeviceSize); /* linkage=_ZNK23VmaBlockMetadata_Linear17FindSuballocationEm */
	/* <cf6507> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8833 */
	bool ShouldCompact1st(const class VmaBlockMetadata_Linear  *); /* linkage=_ZNK23VmaBlockMetadata_Linear16ShouldCompact1stEv */
	void CleanupAfterFree(class VmaBlockMetadata_Linear *); /* linkage=_ZN23VmaBlockMetadata_Linear16CleanupAfterFreeEv */
	bool CreateAllocationRequest_LowerAddress(class VmaBlockMetadata_Linear *, VkDeviceSize, VkDeviceSize, enum VmaSuballocationType, uint32_t, class VmaAllocationRequest *); /* linkage=_ZN23VmaBlockMetadata_Linear36CreateAllocationRequest_LowerAddressEmm20VmaSuballocationTypejP20VmaAllocationRequest */
	bool CreateAllocationRequest_UpperAddress(class VmaBlockMetadata_Linear *, VkDeviceSize, VkDeviceSize, enum VmaSuballocationType, uint32_t, class VmaAllocationRequest *); /* linkage=_ZN23VmaBlockMetadata_Linear36CreateAllocationRequest_UpperAddressEmm20VmaSuballocationTypejP20VmaAllocationRequest */
};

// <00CB959B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7640
// function calls: 4
void VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear()
{
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::~VmaVector(); // 7640
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::~VmaVector(); // 7640
} /* size: 122, inline expansions: 4 (148 bytes) */

// <00CB9420> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7640
// function calls: 6
void VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear()
{
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::~VmaVector(); // 7640
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::~VmaVector(); // 7640
	VmaBlockMetadata::~VmaBlockMetadata(); // 7640
	VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear(); // 7640
} /* size: 138, inline expansions: 6 (250 bytes) */

// <00CB9407> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7640
inline void VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear()
{
} /* size: 0 */

// <00CED09A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7642
void VmaBlockMetadata_Linear::GetSumFreeSize()
{
} /* size: 9 */

// <00CF51C2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7643
// function calls: 5
void VmaBlockMetadata_Linear::IsEmpty()
{
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 7913
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 7913
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 7914
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 7914
	VmaBlockMetadata_Linear::GetAllocationCount(); // 7643
} /* size: 110, inline expansions: 5 (79 bytes) */

// <00CED081> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7643
inline void VmaBlockMetadata_Linear::IsEmpty()
{
} /* size: 0 */

// <00CED044> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7644
void VmaBlockMetadata_Linear::GetAllocationOffset(VmaAllocHandle allocHandle)
{
} /* size: 9 */

// <00CED02B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7720
inline void VmaBlockMetadata_Linear::AccessSuballocations1st()
{
} /* size: 0 */

// <00CED012> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7721
inline void VmaBlockMetadata_Linear::AccessSuballocations2nd()
{
} /* size: 0 */

// <00CECE2E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7744
// function calls: 5
void VmaBlockMetadata_Linear::VmaBlockMetadata_Linear(const VkAllocationCallbacks* pAllocationCallbacks, VkDeviceSize bufferImageGranularity, bool isVirtual)
{
	VmaBlockMetadata::VmaBlockMetadata(
			const VkAllocationCallbacks* pAllocationCallbacks,
			VkDeviceSize bufferImageGranularity,
			bool isVirtual);  // 7754
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::VmaVector(
			const VmaStlAllocator<VmaSuballocation>& allocator);  // 7748
	VmaStlAllocator<VmaSuballocation>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 7748
	VmaStlAllocator<VmaSuballocation>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 7749
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::VmaVector(
			const VmaStlAllocator<VmaSuballocation>& allocator);  // 7749
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00CECDEE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7744
void VmaBlockMetadata_Linear::VmaBlockMetadata_Linear(const VkAllocationCallbacks* pAllocationCallbacks, VkDeviceSize bufferImageGranularity, bool isVirtual)
{
} /* size: 0 */

// <00CECD73> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7756
// function call: 1
void VmaBlockMetadata_Linear::Init(VkDeviceSize size)
{
	VmaBlockMetadata::Init(
		VkDeviceSize size);  // 7758
} /* size: 13, inline expansions: 1 (4 bytes) */

// <00CEC6EF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7762
// variables: 25
// function calls: 21
void VmaBlockMetadata_Linear::Validate()
{
	const SuballocationVectorType& suballocations1st; // 7764
	const SuballocationVectorType& suballocations2nd; // 7765
	VkDeviceSize sumUsedSize; // 7788
	const size_t  suballoc1stCount; // 7789
	const VkDeviceSize  debugMargin; // 7790
	VkDeviceSize offset; // 7791
	size_t nullItem1stCount; // 7836
	{
		const size_t  suballoc2ndCount; // 7795
		size_t nullItem2ndCount; // 7796
		{
			size_t i; // 7797
			{
				const VmaSuballocation& suballoc; // 7799
				const bool  currFree; // 7800
				const VmaAllocation  alloc; // 7802
				VmaBlockMetadata::IsVirtual(); // 7803
				VmaAllocation_T::GetAllocHandle(); // 7813
				VmaAllocation_T::GetSize(); // 7814
				VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
						size_t index);  // 7799
			}
		}
	}
	{
		size_t i; // 7829
		{
			const VmaSuballocation& suballoc; // 7831
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 7831
		}
	}
	{
		size_t i; // 7838
		{
			const VmaSuballocation& suballoc; // 7840
			const bool  currFree; // 7841
			const VmaAllocation  alloc; // 7843
			VmaBlockMetadata::IsVirtual(); // 7844
			VmaAllocation_T::GetAllocHandle(); // 7855
			VmaAllocation_T::GetSize(); // 7856
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 7840
		}
	}
	{
		const size_t  suballoc2ndCount; // 7871
		size_t nullItem2ndCount; // 7872
		{
			size_t i; // 7873
			{
				const VmaSuballocation& suballoc; // 7875
				const bool  currFree; // 7876
				const VmaAllocation  alloc; // 7878
				VmaBlockMetadata::IsVirtual(); // 7879
				VmaAllocation_T::GetAllocHandle(); // 7889
				VmaAllocation_T::GetSize(); // 7890
				VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
						size_t index);  // 7875
			}
		}
	}
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 7764
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 7765
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty(); // 7767
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty(); // 7768
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
			size_t index);  // 7775
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 7777
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 7782
	VmaBlockMetadata::GetSize(); // 7905
} /* size: 1163, variables: 7, inline expansions: 8 (61 bytes) */

// <00CF4F79> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7911
// function calls: 4
void VmaBlockMetadata_Linear::GetAllocationCount()
{
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 7913
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 7913
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 7914
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 7914
} /* size: 71, inline expansions: 4 (15 bytes) */

// <00CEC6D6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7911
void VmaBlockMetadata_Linear::GetAllocationCount()
{
} /* size: 0 */

// <00CEC6A8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7917
void VmaBlockMetadata_Linear::GetFreeRegionsCount()
{
} /* size: 12 */

// <00CEBBDF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:7924
// variables: 20
// function calls: 41
void VmaBlockMetadata_Linear::AddDetailedStatistics(VmaDetailedStatistics& inoutStats)
{
	const VkDeviceSize  size; // 7926
	const SuballocationVectorType& suballocations1st; // 7927
	const SuballocationVectorType& suballocations2nd; // 7928
	const size_t  suballoc1stCount; // 7929
	const size_t  suballoc2ndCount; // 7930
	VkDeviceSize lastOffset; // 7935
	size_t nextAlloc1stIndex; // 7987
	const VkDeviceSize  freeSpace1stTo2ndEnd; // 7988
	{
		const VkDeviceSize  freeSpace2ndTo1stEnd; // 7939
		size_t nextAlloc2ndIndex; // 7940
		{
			const VmaSuballocation& suballoc; // 7953
			{
				const VkDeviceSize  unusedRangeSize; // 7959
				min<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 3971
				max<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 3972
				VmaAddDetailedStatisticsUnusedRange(VmaDetailedStatistics& inoutStats,
									VkDeviceSize size);  // 7960
			}
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 7953
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3964
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3965
			VmaAddDetailedStatisticsAllocation(VmaDetailedStatistics& inoutStats,
								VkDeviceSize size);  // 7965
		}
		{
			const VkDeviceSize  unusedRangeSize; // 7977
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3971
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3972
			VmaAddDetailedStatisticsUnusedRange(VmaDetailedStatistics& inoutStats,
								VkDeviceSize size);  // 7978
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 7939
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 7945
	}
	{
		const VmaSuballocation& suballoc; // 8002
		{
			const VkDeviceSize  unusedRangeSize; // 8008
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3971
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3972
			VmaAddDetailedStatisticsUnusedRange(VmaDetailedStatistics& inoutStats,
								VkDeviceSize size);  // 8009
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8002
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3964
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3965
		VmaAddDetailedStatisticsAllocation(VmaDetailedStatistics& inoutStats,
							VkDeviceSize size);  // 8014
	}
	{
		const VkDeviceSize  unusedRangeSize; // 8026
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3971
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3972
		VmaAddDetailedStatisticsUnusedRange(VmaDetailedStatistics& inoutStats,
							VkDeviceSize size);  // 8027
	}
	{
		size_t nextAlloc2ndIndex; // 8037
		{
			const VmaSuballocation& suballoc; // 8050
			{
				const VkDeviceSize  unusedRangeSize; // 8056
				min<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 3971
				max<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 3972
				VmaAddDetailedStatisticsUnusedRange(VmaDetailedStatistics& inoutStats,
									VkDeviceSize size);  // 8057
			}
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 8050
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3964
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3965
			VmaAddDetailedStatisticsAllocation(VmaDetailedStatistics& inoutStats,
								VkDeviceSize size);  // 8062
		}
		{
			const VkDeviceSize  unusedRangeSize; // 8074
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3971
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3972
			VmaAddDetailedStatisticsUnusedRange(VmaDetailedStatistics& inoutStats,
								VkDeviceSize size);  // 8075
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8037
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8042
	}
	VmaBlockMetadata::GetSize(); // 7926
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 7927
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 7928
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 7929
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 7930
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
			size_t index);  // 7994
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 7989
} /* size: 982, variables: 8, inline expansions: 7 (75 bytes) */

// <00CEB79E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8085
// variables: 14
// function calls: 13
void VmaBlockMetadata_Linear::AddStatistics(VmaStatistics& inoutStats)
{
	const SuballocationVectorType& suballocations1st; // 8087
	const SuballocationVectorType& suballocations2nd; // 8088
	const VkDeviceSize  size; // 8089
	const size_t  suballoc1stCount; // 8090
	const size_t  suballoc2ndCount; // 8091
	VkDeviceSize lastOffset; // 8097
	size_t nextAlloc1stIndex; // 8134
	const VkDeviceSize  freeSpace1stTo2ndEnd; // 8135
	{
		const VkDeviceSize  freeSpace2ndTo1stEnd; // 8101
		size_t nextAlloc2ndIndex; // 8102
		{
			const VmaSuballocation& suballoc; // 8115
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 8115
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8101
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8107
	}
	{
		const VmaSuballocation& suballoc; // 8149
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8149
	}
	{
		size_t nextAlloc2ndIndex; // 8169
		{
			const VmaSuballocation& suballoc; // 8182
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8169
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8174
	}
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 8087
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 8088
	VmaBlockMetadata::GetSize(); // 8089
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8090
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8091
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 8136
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
			size_t index);  // 8141
} /* size: 482, variables: 8, inline expansions: 7 (79 bytes) */

// <00CEACF4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8203
// variables: 31
// function calls: 28
void VmaBlockMetadata_Linear::PrintDetailedMap(VmaJsonWriter& json)
{
	const VkDeviceSize  size; // 8205
	const SuballocationVectorType& suballocations1st; // 8206
	const SuballocationVectorType& suballocations2nd; // 8207
	const size_t  suballoc1stCount; // 8208
	const size_t  suballoc2ndCount; // 8209
	size_t unusedRangeCount; // 8213
	VkDeviceSize usedBytes; // 8214
	VkDeviceSize lastOffset; // 8216
	size_t alloc2ndCount; // 8218
	size_t nextAlloc1stIndex; // 8268
	size_t alloc1stCount; // 8269
	const VkDeviceSize  freeSpace1stTo2ndEnd; // 8270
	const VkDeviceSize  unusedBytes; // 8364
	{
		const VkDeviceSize  freeSpace2ndTo1stEnd; // 8221
		size_t nextAlloc2ndIndex; // 8222
		{
			const VmaSuballocation& suballoc; // 8235
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 8235
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8221
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8227
	}
	{
		const VmaSuballocation& suballoc; // 8284
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8284
	}
	{
		size_t nextAlloc2ndIndex; // 8318
		{
			const VmaSuballocation& suballoc; // 8331
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 8331
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8323
	}
	{
		const VkDeviceSize  freeSpace2ndTo1stEnd; // 8372
		size_t nextAlloc2ndIndex; // 8373
		{
			const VmaSuballocation& suballoc; // 8386
			{
				const VkDeviceSize  unusedRangeSize; // 8392
			}
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 8386
		}
		{
			const VkDeviceSize  unusedRangeSize; // 8410
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8372
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8378
	}
	{
		const VmaSuballocation& suballoc; // 8433
		{
			const VkDeviceSize  unusedRangeSize; // 8439
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8433
	}
	{
		const VkDeviceSize  unusedRangeSize; // 8457
	}
	{
		size_t nextAlloc2ndIndex; // 8468
		{
			const VmaSuballocation& suballoc; // 8481
			{
				const VkDeviceSize  unusedRangeSize; // 8487
			}
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 8481
		}
		{
			const VkDeviceSize  unusedRangeSize; // 8505
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8468
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8473
	}
	VmaBlockMetadata::GetSize(); // 8205
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 8206
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 8207
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8208
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8209
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 8271
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
			size_t index);  // 8276
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
			size_t index);  // 8425
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5629
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5632
	VmaJsonWriter::EndArray(); // 6550
	VmaBlockMetadata::PrintDetailedMap_End(
				VmaJsonWriter& json);  // 8515
} /* size: 1508, variables: 13, inline expansions: 15 (352 bytes) */

// <00CEABFC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8519
void VmaBlockMetadata_Linear::CreateAllocationRequest(VkDeviceSize allocSize, VkDeviceSize allocAlignment, bool upperAddress, VmaSuballocationType allocType, uint32_t strategy, VmaAllocationRequest* pAllocationRequest)
{
} /* size: 38 */

// <00CEAB4E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8539
// variables: 8
void VmaBlockMetadata_Linear::CheckCorruption(const void* pBlockData)
{
	SuballocationVectorType& suballocations1st; // 8542
	SuballocationVectorType& suballocations2nd; // 8556
	{
		size_t i; // 8543
		size_t count; // 8543
		{
			const VmaSuballocation& suballoc; // 8545
		}
	}
	{
		size_t i; // 8557
		size_t count; // 8557
		{
			const VmaSuballocation& suballoc; // 8559
		}
	}
} /* size: 7, variables: 2 */

// <00CEA827> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8573
// variables: 6
// function calls: 9
void VmaBlockMetadata_Linear::Alloc(const VmaAllocationRequest& request, VmaSuballocationType type, void* userData)
{
	const VkDeviceSize  offset; // 8578
	const VmaSuballocation  newSuballoc; // 8579
	{
		SuballocationVectorType& suballocations2nd; // 8587
		VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 8587
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 4204
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::push_back(
				const VmaSuballocation& src);  // 8588
	}
	{
		SuballocationVectorType& suballocations1st; // 8594
		VmaBlockMetadata_Linear::AccessSuballocations1st(); // 8594
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 4204
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::push_back(
				const VmaSuballocation& src);  // 8601
	}
	{
		SuballocationVectorType& suballocations1st; // 8606
		SuballocationVectorType& suballocations2nd; // 8611
		VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 8611
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 4204
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::push_back(
				const VmaSuballocation& src);  // 8631
	}
} /* size: 329, variables: 2 */

// <00CEA2AE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8641
// variables: 10
// function calls: 18
void VmaBlockMetadata_Linear::Free(VmaAllocHandle allocHandle)
{
	SuballocationVectorType& suballocations1st; // 8643
	SuballocationVectorType& suballocations2nd; // 8644
	VkDeviceSize offset; // 8645
	VmaSuballocation refSuballoc; // 8688
	{
		VmaSuballocation& firstSuballoc; // 8650
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8650
	}
	{
		VmaSuballocation& lastSuballoc; // 8666
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 8666
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 4138
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::pop_back(); // 8670
	}
	{
		VmaSuballocation& lastSuballoc; // 8678
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 8678
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 4138
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::pop_back(); // 8682
	}
	{
		const iterator  it; // 8694
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::end(); // 8696
	}
	{
		const iterator  it; // 8713
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::end(); // 8715
		{
			const size_t  mid; // 3587
			VmaSuballocationOffsetGreater::operator(
					const VmaSuballocation& lhs,
					const VmaSuballocation& rhs);  // 3588
		}
		VmaBinaryFindFirstNotLess<VmaSuballocationOffsetGreater, VmaSuballocation*, VmaSuballocation>(VmaSuballocation* beg,
														VmaSuballocation* end,
														const VmaSuballocation& key,
														const VmaSuballocationOffsetGreater& cmp);  // 3603
		VmaSuballocationOffsetGreater::operator(
				const VmaSuballocation& lhs,
				const VmaSuballocation& rhs);  // 3606
		VmaBinaryFindSorted<VmaSuballocationOffsetGreater, VmaSuballocation*, VmaSuballocation>(VmaSuballocation* const& beg,
													VmaSuballocation* const& end,
													const VmaSuballocation& value,
													const VmaSuballocationOffsetGreater& cmp);  // 8715
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::end(); // 8716
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::end(); // 8714
	}
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 8643
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 8644
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty(); // 8647
} /* size: 647, variables: 4, inline expansions: 3 (39 bytes) */

// <00CEA21C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8730
// variable: 1
void VmaBlockMetadata_Linear::GetAllocationInfo(VmaAllocHandle allocHandle, VmaVirtualAllocationInfo& outInfo)
{
	VmaSuballocation& suballoc; // 8733
} /* size: 50, variables: 1 */

// <00CEA1AF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8738
void* VmaBlockMetadata_Linear::GetAllocationUserData(VmaAllocHandle allocHandle)
{
} /* size: 23 */

// <00CEA181> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8743
void VmaBlockMetadata_Linear::GetAllocationListBegin()
{
} /* size: 7 */

// <00CEA144> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8750
void VmaBlockMetadata_Linear::GetNextAllocation(VmaAllocHandle prevAlloc)
{
} /* size: 7 */

// <00CEA107> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8757
void VmaBlockMetadata_Linear::GetNextFreeRegionSize(VmaAllocHandle alloc)
{
} /* size: 7 */

// <00CEA020> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8764
// function calls: 3
void VmaBlockMetadata_Linear::Clear()
{
	VmaBlockMetadata::GetSize(); // 8766
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::clear(); // 8767
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::clear(); // 8768
} /* size: 78, inline expansions: 3 (14 bytes) */

// <00CE9F8E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8776
// variable: 1
void VmaBlockMetadata_Linear::SetAllocationUserData(VmaAllocHandle allocHandle, void* userData)
{
	VmaSuballocation& suballoc; // 8778
} /* size: 35, variables: 1 */

// <00CE9F25> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8782
// variables: 4
void VmaBlockMetadata_Linear::DebugLogAllAllocations()
{
	const SuballocationVectorType& suballocations1st; // 8784
	const SuballocationVectorType& suballocations2nd; // 8789
	{
		const VmaSuballocation* it; // 8785
	}
	{
		const VmaSuballocation* it; // 8790
	}
} /* size: 5, variables: 2 */

// <00CE9A34> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8795
// variables: 8
// function calls: 20
void VmaBlockMetadata_Linear::FindSuballocation(VkDeviceSize offset)
{
	const SuballocationVectorType& suballocations1st; // 8797
	const SuballocationVectorType& suballocations2nd; // 8798
	VmaSuballocation refSuballoc; // 8800
	{
		const_iterator it; // 8806
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::cend(); // 4135
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::end(); // 8808
		{
			const size_t  mid; // 3587
			VmaSuballocationOffsetLess::operator(
					const VmaSuballocation& lhs,
					const VmaSuballocation& rhs);  // 3588
		}
		VmaBinaryFindFirstNotLess<VmaSuballocationOffsetLess, VmaSuballocation*, VmaSuballocation>(VmaSuballocation* beg,
														VmaSuballocation* end,
														const VmaSuballocation& key,
														const VmaSuballocationOffsetLess& cmp);  // 3603
		VmaSuballocationOffsetLess::operator(
				const VmaSuballocation& lhs,
				const VmaSuballocation& rhs);  // 3606
		VmaBinaryFindSorted<VmaSuballocationOffsetLess, const VmaSuballocation*, VmaSuballocation>(const VmaSuballocation* const& beg,
														const VmaSuballocation* const& end,
														const VmaSuballocation& value,
														const VmaSuballocationOffsetLess& cmp);  // 8806
	}
	{
		const_iterator it; // 8820
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::cend(); // 4135
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::end(); // 8821
		{
			const size_t  mid; // 3587
			VmaSuballocationOffsetLess::operator(
					const VmaSuballocation& lhs,
					const VmaSuballocation& rhs);  // 3588
		}
		VmaBinaryFindFirstNotLess<VmaSuballocationOffsetLess, VmaSuballocation*, VmaSuballocation>(VmaSuballocation* beg,
														VmaSuballocation* end,
														const VmaSuballocation& key,
														const VmaSuballocationOffsetLess& cmp);  // 3603
		VmaBinaryFindSorted<VmaSuballocationOffsetLess, const VmaSuballocation*, VmaSuballocation>(const VmaSuballocation* const& beg,
														const VmaSuballocation* const& end,
														const VmaSuballocation& value,
														const VmaSuballocationOffsetLess& cmp);  // 8821
		{
			const size_t  mid; // 3587
			VmaSuballocationOffsetGreater::operator(
					const VmaSuballocation& lhs,
					const VmaSuballocation& rhs);  // 3588
		}
		VmaBinaryFindFirstNotLess<VmaSuballocationOffsetGreater, VmaSuballocation*, VmaSuballocation>(VmaSuballocation* beg,
														VmaSuballocation* end,
														const VmaSuballocation& key,
														const VmaSuballocationOffsetGreater& cmp);  // 3603
		VmaSuballocationOffsetGreater::operator(
				const VmaSuballocation& lhs,
				const VmaSuballocation& rhs);  // 3606
		VmaBinaryFindSorted<VmaSuballocationOffsetGreater, const VmaSuballocation*, VmaSuballocation>(const VmaSuballocation* const& beg,
														const VmaSuballocation* const& end,
														const VmaSuballocation& value,
														const VmaSuballocationOffsetGreater& cmp);  // 8822
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::cend(); // 4135
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::end(); // 8823
	}
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 8797
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 8798
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 8830
} /* size: 447, variables: 3, inline expansions: 3 (64 bytes) */

// <00CF6507> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8833
// variables: 2
// function calls: 2
void VmaBlockMetadata_Linear::ShouldCompact1st()
{
	const size_t  nullItemCount; // 8835
	const size_t  suballocCount; // 8836
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 8836
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8836
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00CE9A01> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8833
// variables: 2
void VmaBlockMetadata_Linear::ShouldCompact1st()
{
	const size_t  nullItemCount; // 8835
	const size_t  suballocCount; // 8836
} /* size: 0, variables: 2 */

// <00CE91A5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8840
// variables: 7
// function calls: 33
void VmaBlockMetadata_Linear::CleanupAfterFree()
{
	SuballocationVectorType& suballocations1st; // 8842
	SuballocationVectorType& suballocations2nd; // 8843
	{
		const size_t  suballoc1stCount; // 8856
		const size_t  nullItem1stCount; // 8857
		{
			const size_t  nonNullItemCount; // 8894
			size_t srcIndex; // 8895
			{
				size_t dstIndex; // 8896
				VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
						size_t index);  // 8898
				VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
						size_t index);  // 8904
			}
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8856
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8862
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 8870
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 4138
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::pop_back(); // 8873
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 8878
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 4138
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::pop_back(); // 8881
		VmaBlockMetadata_Linear::AccessSuballocations1st(); // 8836
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8836
		VmaBlockMetadata_Linear::ShouldCompact1st(); // 8892
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty(); // 8914
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8920
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 4291
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 4294
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::remove(
			size_t index);  // 4309
		VmaVectorRemove<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >(VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >& vec,
											size_t index);  // 8889
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8886
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::clear(); // 8922
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty(); // 8925
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 8930
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 8931
	}
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 8842
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 7913
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 7914
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 7914
	VmaBlockMetadata_Linear::GetAllocationCount(); // 7643
	VmaBlockMetadata_Linear::IsEmpty(); // 8845
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::clear(); // 8847
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::clear(); // 8848
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 8843
} /* size: 1094, variables: 2, inline expansions: 9 (253 bytes) */

// <00CE88BD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:8945
// variables: 23
// function calls: 24
void VmaBlockMetadata_Linear::CreateAllocationRequest_LowerAddress(VkDeviceSize allocSize, VkDeviceSize allocAlignment, VmaSuballocationType allocType, uint32_t strategy, VmaAllocationRequest* pAllocationRequest)
{
	const VkDeviceSize  blockSize; // 8952
	const VkDeviceSize  debugMargin; // 8953
	const VkDeviceSize  bufferImageGranularity; // 8954
	SuballocationVectorType& suballocations1st; // 8955
	SuballocationVectorType& suballocations2nd; // 8956
	{
		VkDeviceSize resultBaseOffset; // 8962
		VkDeviceSize resultOffset; // 8970
		const VkDeviceSize  freeSpaceEnd; // 9001
		{
			const VmaSuballocation& lastSuballoc; // 8965
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 8965
		}
		{
			bool bufferImageGranularityConflict; // 8979
			{
				size_t prevSuballocIndex; // 8980
				{
					const VmaSuballocation& prevSuballoc; // 8982
					VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
										VmaSuballocationType suballocType2);  // 8985
					VmaBlocksOnSamePage(VkDeviceSize resourceAOffset,
								VkDeviceSize resourceASize,
								VkDeviceSize resourceBOffset,
								VkDeviceSize pageSize);  // 8983
				}
			}
			VmaAlignUp<long unsigned int>(long unsigned int val,
							long unsigned int alignment);  // 8997
		}
		{
			size_t nextSuballocIndex; // 9011
			{
				const VmaSuballocation& nextSuballoc; // 9013
				VmaBlocksOnSamePage(VkDeviceSize resourceAOffset,
							VkDeviceSize resourceASize,
							VkDeviceSize resourceBOffset,
							VkDeviceSize pageSize);  // 9014
				VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
									VmaSuballocationType suballocType2);  // 9016
			}
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty(); // 8963
		VmaAlignUp<long unsigned int>(long unsigned int val,
						long unsigned int alignment);  // 8973
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 9002
	}
	{
		VkDeviceSize resultBaseOffset; // 9043
		VkDeviceSize resultOffset; // 9051
		size_t index1st; // 9082
		{
			const VmaSuballocation& lastSuballoc; // 9046
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 9046
		}
		{
			bool bufferImageGranularityConflict; // 9060
			{
				size_t prevSuballocIndex; // 9061
				{
					const VmaSuballocation& prevSuballoc; // 9063
					VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
										VmaSuballocationType suballocType2);  // 9066
					VmaBlocksOnSamePage(VkDeviceSize resourceAOffset,
								VkDeviceSize resourceASize,
								VkDeviceSize resourceBOffset,
								VkDeviceSize pageSize);  // 9064
				}
			}
			VmaAlignUp<long unsigned int>(long unsigned int val,
							long unsigned int alignment);  // 9078
		}
		{
			size_t nextSuballocIndex; // 9092
			{
				const VmaSuballocation& nextSuballoc; // 9096
				VmaBlocksOnSamePage(VkDeviceSize resourceAOffset,
							VkDeviceSize resourceASize,
							VkDeviceSize resourceBOffset,
							VkDeviceSize pageSize);  // 9097
				VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
									VmaSuballocationType suballocType2);  // 9099
				VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
						size_t index);  // 9096
			}
		}
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::size(); // 9085
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
				size_t index);  // 9086
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty(); // 9044
		VmaAlignUp<long unsigned int>(long unsigned int val,
						long unsigned int alignment);  // 9054
	}
	VmaBlockMetadata::GetSize(); // 8952
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 8955
	VmaBlockMetadata::GetBufferImageGranularity(); // 8954
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 8956
} /* size: 1224, variables: 5, inline expansions: 4 (43 bytes) */

// <00CE8393> ../thirdparty/vulkan/vma/vk_mem_alloc.h:9123
// variables: 14
// function calls: 15
void VmaBlockMetadata_Linear::CreateAllocationRequest_UpperAddress(VkDeviceSize allocSize, VkDeviceSize allocAlignment, VmaSuballocationType allocType, uint32_t strategy, VmaAllocationRequest* pAllocationRequest)
{
	const VkDeviceSize  blockSize; // 9130
	const VkDeviceSize  bufferImageGranularity; // 9131
	SuballocationVectorType& suballocations1st; // 9132
	SuballocationVectorType& suballocations2nd; // 9133
	VkDeviceSize resultBaseOffset; // 9146
	VkDeviceSize resultOffset; // 9158
	const VkDeviceSize  debugMargin; // 9160
	const VkDeviceSize  endOf1st; // 9202
	{
		const VmaSuballocation& lastSuballoc; // 9149
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 9149
	}
	{
		bool bufferImageGranularityConflict; // 9179
		{
			size_t nextSuballocIndex; // 9180
			{
				const VmaSuballocation& nextSuballoc; // 9182
				VmaBlocksOnSamePage(VkDeviceSize resourceAOffset,
							VkDeviceSize resourceASize,
							VkDeviceSize resourceBOffset,
							VkDeviceSize pageSize);  // 9183
				VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
									VmaSuballocationType suballocType2);  // 9185
			}
		}
		VmaAlignDown<long unsigned int>(long unsigned int val,
						long unsigned int alignment);  // 9197
	}
	{
		size_t prevSuballocIndex; // 9211
		{
			const VmaSuballocation& prevSuballoc; // 9213
			VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
								VmaSuballocationType suballocType2);  // 9216
			VmaBlocksOnSamePage(VkDeviceSize resourceAOffset,
						VkDeviceSize resourceASize,
						VkDeviceSize resourceBOffset,
						VkDeviceSize pageSize);  // 9214
			VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::operator[](
					size_t index);  // 9213
		}
	}
	VmaBlockMetadata::GetSize(); // 9130
	VmaBlockMetadata_Linear::AccessSuballocations1st(); // 9132
	VmaBlockMetadata::GetBufferImageGranularity(); // 9131
	VmaBlockMetadata_Linear::AccessSuballocations2nd(); // 9133
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty(); // 9147
	VmaAlignDown<long unsigned int>(long unsigned int val,
					long unsigned int alignment);  // 9173
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::empty(); // 9202
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::back(); // 9203
} /* size: 649, variables: 8, inline expansions: 8 (101 bytes) */

// <00CB3EBE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:9953
// member functions: 80
// member variables: 12
// static member variables: 5
// vtable entries: 22
// class size: 400
class VmaBlockMetadata_TLSF : public VmaBlockMetadata {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10011 */
	class Block {
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10029 */
		union {
			Block * nextFree; /* 0 8 */
			void * userData; /* 0 8 */
		};
		VkDeviceSize offset; /* 0 8 */
		VkDeviceSize size; /* 8 8 */
		Block * prevPhysical; /* 16 8 */
		Block * nextPhysical; /* 24 8 */
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10019 */
		void MarkFree(Block* );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10020 */
		void MarkTaken(Block* );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10021 */
		bool IsFree(const Block* );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10022 */
		void* & UserData(Block* );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10023 */
		Block* & PrevFree(Block* );
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10024 */
		Block* & NextFree(Block* );
	private:
		Block * prevFree; /* 32 8 */
		union {
			Block * nextFree; /* 40 8 */
			void * userData; /* 40 8 */
		}; /* 40 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class VmaBlockMetadata <ancestor>; */ /* 0 40 */
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9955 */
	void VmaBlockMetadata_TLSF(VmaBlockMetadata_TLSF* , const VmaBlockMetadata_TLSF& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9955 */
	void VmaBlockMetadata_TLSF(VmaBlockMetadata_TLSF* , VmaBlockMetadata_TLSF& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9955 */
	VmaBlockMetadata_TLSF& operator=(VmaBlockMetadata_TLSF* , const VmaBlockMetadata_TLSF& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9955 */
	VmaBlockMetadata_TLSF& operator=(VmaBlockMetadata_TLSF* , VmaBlockMetadata_TLSF& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10073 */
	void VmaBlockMetadata_TLSF(VmaBlockMetadata_TLSF* , const VkAllocationCallbacks* , VkDeviceSize, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10087 */
	virtual void ~VmaBlockMetadata_TLSF(VmaBlockMetadata_TLSF* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9961 */
	virtual size_t GetAllocationCount(const VmaBlockMetadata_TLSF* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9962 */
	virtual size_t GetFreeRegionsCount(const VmaBlockMetadata_TLSF* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9963 */
	virtual VkDeviceSize GetSumFreeSize(const VmaBlockMetadata_TLSF* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9964 */
	virtual bool IsEmpty(const VmaBlockMetadata_TLSF* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:9965 */
	virtual VkDeviceSize GetAllocationOffset(const VmaBlockMetadata_TLSF* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10094 */
	virtual void Init(VmaBlockMetadata_TLSF* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10124 */
	virtual bool Validate(const VmaBlockMetadata_TLSF* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10222 */
	virtual void AddDetailedStatistics(const VmaBlockMetadata_TLSF* , VmaDetailedStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10238 */
	virtual void AddStatistics(const VmaBlockMetadata_TLSF* , VmaStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10247 */
	virtual void PrintDetailedMap(const VmaBlockMetadata_TLSF* , VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10284 */
	virtual bool CreateAllocationRequest(VmaBlockMetadata_TLSF* , VkDeviceSize, VkDeviceSize, bool, VmaSuballocationType, uint32_t, VmaAllocationRequest* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10446 */
	virtual VkResult CheckCorruption(VmaBlockMetadata_TLSF* , const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10463 */
	virtual void Alloc(VmaBlockMetadata_TLSF* , const VmaAllocationRequest& , VmaSuballocationType, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10589 */
	virtual void Free(VmaBlockMetadata_TLSF* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10628 */
	virtual void GetAllocationInfo(VmaBlockMetadata_TLSF* , VmaAllocHandle, VmaVirtualAllocationInfo& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10637 */
	virtual void* GetAllocationUserData(const VmaBlockMetadata_TLSF* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10644 */
	virtual VmaAllocHandle GetAllocationListBegin(const VmaBlockMetadata_TLSF* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10658 */
	virtual VmaAllocHandle GetNextAllocation(const VmaBlockMetadata_TLSF* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10671 */
	virtual VkDeviceSize GetNextFreeRegionSize(const VmaBlockMetadata_TLSF* , VmaAllocHandle);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10681 */
	virtual void Clear(VmaBlockMetadata_TLSF* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10702 */
	virtual void SetAllocationUserData(VmaBlockMetadata_TLSF* , VmaAllocHandle, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10709 */
	virtual void DebugLogAllAllocations(const VmaBlockMetadata_TLSF* );
	static const uint8_t SECOND_LEVEL_INDEX = 5; /* 0 0 */
	static const uint16_t SMALL_BUFFER_SIZE = 256; /* 0 0 */
	static const uint32_t INITIAL_BLOCK_ALLOC_COUNT = 16; /* 0 0 */
	static const uint8_t MEMORY_CLASS_SHIFT = 7; /* 0 0 */
	static const uint8_t MAX_MEMORY_CLASSES = 58; /* 0 0 */
	size_t m_AllocCount; /* 40 8 */
	size_t m_BlocksFreeCount; /* 48 8 */
	VkDeviceSize m_BlocksFreeSize; /* 56 8 */
	uint32_t m_IsFreeBitmap; /* 64 4 */
	uint8_t m_MemoryClasses; /* 68 1 */
	uint32_t m_InnerIsFreeBitmap[58]; /* 72 232 */
	uint32_t m_ListsCount; /* 304 4 */
	Block * * m_FreeList; /* 312 8 */
	VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> m_BlockAllocator; /* 320 48 */
	Block * m_NullBlock; /* 368 8 */
	VmaBlockBufferImageGranularity m_GranularityHandler; /* 376 24 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10716 */
	uint8_t SizeToMemoryClass(const VmaBlockMetadata_TLSF* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10723 */
	uint16_t SizeToSecondIndex(const VmaBlockMetadata_TLSF* , VkDeviceSize, uint8_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10735 */
	uint32_t GetListIndex(const VmaBlockMetadata_TLSF* , uint8_t, uint16_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10747 */
	uint32_t GetListIndex(const VmaBlockMetadata_TLSF* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10753 */
	void RemoveFreeBlock(VmaBlockMetadata_TLSF* , Block* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10782 */
	void InsertFreeBlock(VmaBlockMetadata_TLSF* , Block* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10805 */
	void MergeBlock(VmaBlockMetadata_TLSF* , Block* , Block* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10818 */
	Block* FindFreeBlock(const VmaBlockMetadata_TLSF* , VkDeviceSize, uint32_t& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10840 */
	bool CheckBlock(VmaBlockMetadata_TLSF* , Block& , uint32_t, VkDeviceSize, VkDeviceSize, VmaSuballocationType, VmaAllocationRequest* );
	void VmaBlockMetadata_TLSF(class VmaBlockMetadata_TLSF *, const class VmaBlockMetadata_TLSF  &); /* linkage=_ZN21VmaBlockMetadata_TLSFC4ERKS_ */
	void VmaBlockMetadata_TLSF(class VmaBlockMetadata_TLSF *, class VmaBlockMetadata_TLSF &); /* linkage=_ZN21VmaBlockMetadata_TLSFC4EOS_ */
	class VmaBlockMetadata_TLSF & operator=(class VmaBlockMetadata_TLSF *, const class VmaBlockMetadata_TLSF  &); /* linkage=_ZN21VmaBlockMetadata_TLSFaSERKS_ */
	class VmaBlockMetadata_TLSF & operator=(class VmaBlockMetadata_TLSF *, class VmaBlockMetadata_TLSF &); /* linkage=_ZN21VmaBlockMetadata_TLSFaSEOS_ */
	void VmaBlockMetadata_TLSF(class VmaBlockMetadata_TLSF *, const VkAllocationCallbacks  *, VkDeviceSize, bool); /* linkage=_ZN21VmaBlockMetadata_TLSFC4EPK21VkAllocationCallbacksmb */
	virtual void ~VmaBlockMetadata_TLSF(class VmaBlockMetadata_TLSF *); /* linkage=_ZN21VmaBlockMetadata_TLSFD4Ev */
	virtual size_t GetAllocationCount(const class VmaBlockMetadata_TLSF  *); /* linkage=_ZNK21VmaBlockMetadata_TLSF18GetAllocationCountEv */
	virtual size_t GetFreeRegionsCount(const class VmaBlockMetadata_TLSF  *); /* linkage=_ZNK21VmaBlockMetadata_TLSF19GetFreeRegionsCountEv */
	/* <cf5042> ../thirdparty/vulkan/vma/vk_mem_alloc.h:9963 */
	virtual VkDeviceSize GetSumFreeSize(const class VmaBlockMetadata_TLSF  *); /* linkage=_ZNK21VmaBlockMetadata_TLSF14GetSumFreeSizeEv */
	virtual bool IsEmpty(const class VmaBlockMetadata_TLSF  *); /* linkage=_ZNK21VmaBlockMetadata_TLSF7IsEmptyEv */
	virtual VkDeviceSize GetAllocationOffset(const class VmaBlockMetadata_TLSF  *, VmaAllocHandle); /* linkage=_ZNK21VmaBlockMetadata_TLSF19GetAllocationOffsetEP16VmaAllocHandle_T */
	virtual void Init(class VmaBlockMetadata_TLSF *, VkDeviceSize); /* linkage=_ZN21VmaBlockMetadata_TLSF4InitEm */
	virtual bool Validate(const class VmaBlockMetadata_TLSF  *); /* linkage=_ZNK21VmaBlockMetadata_TLSF8ValidateEv */
	virtual void AddDetailedStatistics(const class VmaBlockMetadata_TLSF  *, VmaDetailedStatistics &); /* linkage=_ZNK21VmaBlockMetadata_TLSF21AddDetailedStatisticsER21VmaDetailedStatistics */
	virtual void AddStatistics(const class VmaBlockMetadata_TLSF  *, VmaStatistics &); /* linkage=_ZNK21VmaBlockMetadata_TLSF13AddStatisticsER13VmaStatistics */
	virtual void PrintDetailedMap(const class VmaBlockMetadata_TLSF  *, class VmaJsonWriter &); /* linkage=_ZNK21VmaBlockMetadata_TLSF16PrintDetailedMapER13VmaJsonWriter */
	virtual bool CreateAllocationRequest(class VmaBlockMetadata_TLSF *, VkDeviceSize, VkDeviceSize, bool, enum VmaSuballocationType, uint32_t, class VmaAllocationRequest *); /* linkage=_ZN21VmaBlockMetadata_TLSF23CreateAllocationRequestEmmb20VmaSuballocationTypejP20VmaAllocationRequest */
	virtual VkResult CheckCorruption(class VmaBlockMetadata_TLSF *, const void  *); /* linkage=_ZN21VmaBlockMetadata_TLSF15CheckCorruptionEPKv */
	virtual void Alloc(class VmaBlockMetadata_TLSF *, const class VmaAllocationRequest  &, enum VmaSuballocationType, void *); /* linkage=_ZN21VmaBlockMetadata_TLSF5AllocERK20VmaAllocationRequest20VmaSuballocationTypePv */
	virtual void Free(class VmaBlockMetadata_TLSF *, VmaAllocHandle); /* linkage=_ZN21VmaBlockMetadata_TLSF4FreeEP16VmaAllocHandle_T */
	virtual void GetAllocationInfo(class VmaBlockMetadata_TLSF *, VmaAllocHandle, VmaVirtualAllocationInfo &); /* linkage=_ZN21VmaBlockMetadata_TLSF17GetAllocationInfoEP16VmaAllocHandle_TR24VmaVirtualAllocationInfo */
	virtual void * GetAllocationUserData(const class VmaBlockMetadata_TLSF  *, VmaAllocHandle); /* linkage=_ZNK21VmaBlockMetadata_TLSF21GetAllocationUserDataEP16VmaAllocHandle_T */
	virtual VmaAllocHandle GetAllocationListBegin(const class VmaBlockMetadata_TLSF  *); /* linkage=_ZNK21VmaBlockMetadata_TLSF22GetAllocationListBeginEv */
	virtual VmaAllocHandle GetNextAllocation(const class VmaBlockMetadata_TLSF  *, VmaAllocHandle); /* linkage=_ZNK21VmaBlockMetadata_TLSF17GetNextAllocationEP16VmaAllocHandle_T */
	virtual VkDeviceSize GetNextFreeRegionSize(const class VmaBlockMetadata_TLSF  *, VmaAllocHandle); /* linkage=_ZNK21VmaBlockMetadata_TLSF21GetNextFreeRegionSizeEP16VmaAllocHandle_T */
	virtual void Clear(class VmaBlockMetadata_TLSF *); /* linkage=_ZN21VmaBlockMetadata_TLSF5ClearEv */
	virtual void SetAllocationUserData(class VmaBlockMetadata_TLSF *, VmaAllocHandle, void *); /* linkage=_ZN21VmaBlockMetadata_TLSF21SetAllocationUserDataEP16VmaAllocHandle_TPv */
	virtual void DebugLogAllAllocations(const class VmaBlockMetadata_TLSF  *); /* linkage=_ZNK21VmaBlockMetadata_TLSF22DebugLogAllAllocationsEv */
	/* <cf65a4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10716 */
	uint8_t SizeToMemoryClass(const class VmaBlockMetadata_TLSF  *, VkDeviceSize); /* linkage=_ZNK21VmaBlockMetadata_TLSF17SizeToMemoryClassEm */
	/* <cf65ff> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10723 */
	uint16_t SizeToSecondIndex(const class VmaBlockMetadata_TLSF  *, VkDeviceSize, uint8_t); /* linkage=_ZNK21VmaBlockMetadata_TLSF17SizeToSecondIndexEmh */
	/* <cf66be> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10735 */
	uint32_t GetListIndex(const class VmaBlockMetadata_TLSF  *, uint8_t, uint16_t); /* linkage=_ZNK21VmaBlockMetadata_TLSF12GetListIndexEht */
	uint32_t GetListIndex(const class VmaBlockMetadata_TLSF  *, VkDeviceSize); /* linkage=_ZNK21VmaBlockMetadata_TLSF12GetListIndexEm */
	void RemoveFreeBlock(class VmaBlockMetadata_TLSF *, class Block *); /* linkage=_ZN21VmaBlockMetadata_TLSF15RemoveFreeBlockEPNS_5BlockE */
	void InsertFreeBlock(class VmaBlockMetadata_TLSF *, class Block *); /* linkage=_ZN21VmaBlockMetadata_TLSF15InsertFreeBlockEPNS_5BlockE */
	/* <cf9e48> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10805 */
	void MergeBlock(class VmaBlockMetadata_TLSF *, class Block *, class Block *); /* linkage=_ZN21VmaBlockMetadata_TLSF10MergeBlockEPNS_5BlockES1_ */
	class Block * FindFreeBlock(const class VmaBlockMetadata_TLSF  *, VkDeviceSize, uint32_t &); /* linkage=_ZNK21VmaBlockMetadata_TLSF13FindFreeBlockEmRj */
	bool CheckBlock(class VmaBlockMetadata_TLSF *, class Block &, uint32_t, VkDeviceSize, VkDeviceSize, enum VmaSuballocationType, class VmaAllocationRequest *); /* linkage=_ZN21VmaBlockMetadata_TLSF10CheckBlockERNS_5BlockEjmm20VmaSuballocationTypeP20VmaAllocationRequest */
};

// <00CE8365> ../thirdparty/vulkan/vma/vk_mem_alloc.h:9961
void VmaBlockMetadata_TLSF::GetAllocationCount()
{
} /* size: 9 */

// <00CE8337> ../thirdparty/vulkan/vma/vk_mem_alloc.h:9962
void VmaBlockMetadata_TLSF::GetFreeRegionsCount()
{
} /* size: 13 */

// <00CF5042> ../thirdparty/vulkan/vma/vk_mem_alloc.h:9963
void VmaBlockMetadata_TLSF::GetSumFreeSize()
{
} /* size: 20 */

// <00CE831E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:9963
inline void VmaBlockMetadata_TLSF::GetSumFreeSize()
{
} /* size: 0 */

// <00CE82F0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:9964
void VmaBlockMetadata_TLSF::IsEmpty()
{
} /* size: 19 */

// <00CE82B3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:9965
void VmaBlockMetadata_TLSF::GetAllocationOffset(VmaAllocHandle allocHandle)
{
} /* size: 8 */

// <00CE829A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10019
inline void Block::MarkFree()
{
} /* size: 0 */

// <00CE8281> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10020
inline void Block::MarkTaken()
{
} /* size: 0 */

// <00CE8268> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10021
inline void Block::IsFree()
{
} /* size: 0 */

// <00CE824A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10022
inline void *& Block::UserData()
{
} /* size: 0 */

// <00CE8231> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10023
inline void Block::PrevFree()
{
} /* size: 0 */

// <00CE8218> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10024
inline void Block::NextFree()
{
} /* size: 0 */

// <00CE80A0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10073
// function calls: 5
void VmaBlockMetadata_TLSF::VmaBlockMetadata_TLSF(const VkAllocationCallbacks* pAllocationCallbacks, VkDeviceSize bufferImageGranularity, bool isVirtual)
{
	VmaBlockMetadata::VmaBlockMetadata(
			const VkAllocationCallbacks* pAllocationCallbacks,
			VkDeviceSize bufferImageGranularity,
			bool isVirtual);  // 10085
	VmaVector(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this,
			const VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& allocator);  // 4510
	VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 4510
	VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::VmaPoolAllocator(
			const VkAllocationCallbacks* pAllocationCallbacks,
			uint32_t firstBlockCapacity);  // 10083
	VmaBlockBufferImageGranularity::VmaBlockBufferImageGranularity(
					VkDeviceSize bufferImageGranularity);  // 10085
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00CE8060> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10073
void VmaBlockMetadata_TLSF::VmaBlockMetadata_TLSF(const VkAllocationCallbacks* pAllocationCallbacks, VkDeviceSize bufferImageGranularity, bool isVirtual)
{
} /* size: 0 */

// <00CE7C3F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10087
// variable: 1
// function calls: 17
void VmaBlockMetadata_TLSF::~VmaBlockMetadata_TLSF()
{
	VmaBlockMetadata::GetAllocationCallbacks(); // 10090
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 3862
	vma_delete_array<VmaBlockMetadata_TLSF::Block*>(const VkAllocationCallbacks* pAllocationCallbacks,
							Block** ptr,
							size_t count);  // 10090
	VmaBlockMetadata::GetAllocationCallbacks(); // 10091
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 3862
	vma_delete_array<VmaBlockBufferImageGranularity::RegionInfo>(const VkAllocationCallbacks* pAllocationCallbacks,
									RegionInfo* ptr,
									size_t count);  // 6640
	VmaBlockBufferImageGranularity::Destroy(
		const VkAllocationCallbacks* pAllocationCallbacks);  // 10091
	VmaBlockBufferImageGranularity::~VmaBlockBufferImageGranularity(); // 10092
	{
		size_t i; // 4518
		size(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBloc this); // 4518
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 3862
		vma_delete_array<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Item>(const VkAllocationCallbacks* pAllocationCallbacks,
											union Item* ptr,
											size_t count);  // 4519
		operator[](const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this,
				size_t index);  // 4519
		operator[](const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this,
				size_t index);  // 4519
	}
	clear(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this); // 4520
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	~VmaVector(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this); // 4521
	VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::~VmaPoolAllocator(); // 10092
} /* size: 308, inline expansions: 12 (478 bytes) */

// <00CE7BD8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10087
void VmaBlockMetadata_TLSF::~VmaBlockMetadata_TLSF()
{
} /* size: 36 */

// <00CE77FF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10094
// variables: 2
// function calls: 13
void VmaBlockMetadata_TLSF::Init(VkDeviceSize size)
{
	uint8_t memoryClass; // 10109
	uint16_t sli; // 10110
	VmaBlockMetadata::Init(
		VkDeviceSize size);  // 10096
	VmaBlockMetadata::IsVirtual(); // 10098
	VmaBitScanMSB(uint64_t mask); // 10719
	VmaBlockMetadata_TLSF::SizeToMemoryClass(
				VkDeviceSize size);  // 10109
	Block::MarkFree(); // 10106
	VmaBlockMetadata_TLSF::SizeToSecondIndex(
				VkDeviceSize size,
				uint8_t memoryClass);  // 10110
	VmaBlockMetadata::IsVirtual(); // 10112
	memset(void* __dest,
		int __ch,
		size_t __len);  // 10118
	VmaBlockMetadata::GetAllocationCallbacks(); // 10120
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 3839
	VmaAllocateArray<VmaBlockMetadata_TLSF::Block*>(const VkAllocationCallbacks* pAllocationCallbacks,
							size_t count);  // 10120
	memset(void* __dest,
		int __ch,
		size_t __len);  // 10121
	VmaBlockMetadata::GetAllocationCallbacks(); // 10099
} /* size: 376, variables: 2, inline expansions: 13 (225 bytes) */

// <00CE73CA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10124
// variables: 13
// function calls: 10
void VmaBlockMetadata_TLSF::Validate()
{
	VkDeviceSize calculatedSize; // 10128
	VkDeviceSize calculatedFreeSize; // 10129
	size_t allocCount; // 10130
	size_t freeCount; // 10131
	VkDeviceSize nextOffset; // 10150
	ValidationContext validateCtx; // 10151
	{
		uint32_t list; // 10134
		{
			Block* block; // 10136
			Block::IsFree(); // 10139
			Block::IsFree(); // 10143
		}
	}
	{
		Block* prev; // 10159
		{
			uint32_t listIndex; // 10165
			{
				Block* freeBlock; // 10170
				bool found; // 10173
			}
			{
				Block* freeBlock; // 10189
				VmaBlockMetadata::IsVirtual(); // 10196
			}
			Block::IsFree(); // 10166
		}
	}
	VmaBlockMetadata_TLSF::GetSumFreeSize(); // 10126
	VmaBlockMetadata::GetSize(); // 10126
	VmaBlockMetadata::IsVirtual(); // 10151
	VmaBlockMetadata::GetAllocationCallbacks(); // 10151
	VmaBlockMetadata::IsVirtual(); // 10208
	VmaBlockMetadata::GetSize(); // 10214
} /* size: 698, variables: 6, inline expansions: 6 (15 bytes) */

// <00CE710E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10222
// variable: 1
// function calls: 11
void VmaBlockMetadata_TLSF::AddDetailedStatistics(VmaDetailedStatistics& inoutStats)
{
	{
		Block* block; // 10229
		Block::IsFree(); // 10231
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3971
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3972
		VmaAddDetailedStatisticsUnusedRange(VmaDetailedStatistics& inoutStats,
							VkDeviceSize size);  // 10232
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3964
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3965
		VmaAddDetailedStatisticsAllocation(VmaDetailedStatistics& inoutStats,
							VkDeviceSize size);  // 10234
	}
	VmaBlockMetadata::GetSize(); // 10225
	min<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 3971
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 3972
	VmaAddDetailedStatisticsUnusedRange(VmaDetailedStatistics& inoutStats,
						VkDeviceSize size);  // 10227
} /* size: 221, inline expansions: 4 (71 bytes) */

// <00CE7035> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10238
// function calls: 3
void VmaBlockMetadata_TLSF::AddStatistics(VmaStatistics& inoutStats)
{
	VmaBlockMetadata::GetSize(); // 10242
	VmaBlockMetadata::GetSize(); // 10243
	VmaBlockMetadata_TLSF::GetSumFreeSize(); // 10243
} /* size: 107, inline expansions: 3 (19 bytes) */

// <00CE6A82> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10247
// variables: 7
// function calls: 17
void VmaBlockMetadata_TLSF::PrintDetailedMap(VmaJsonWriter& json)
{
	size_t blockCount; // 10249
	VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> allocator; // 10250
	VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> > blockList; // 10251
	size_t i; // 10253
	VmaDetailedStatistics stats; // 10260
	{
		Block* block; // 10254
	}
	{
		Block* block; // 10271
		Block::IsFree(); // 10272
	}
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 3839
	VmaAllocateArray<VmaBlockMetadata_TLSF::Block*>(const VkAllocationCallbacks* pAllocationCallbacks,
							size_t count);  // 4170
	VmaVector<VmaBlockMetadata_TLSF::Block::VmaVector(
			size_t count,
			const VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>& allocator);  // 10251
	VmaBlockMetadata::GetAllocationCallbacks(); // 10250
	VmaStlAllocator<VmaBlockMetadata_TLSF::Block::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 10250
	VmaClearStatistics(VmaStatistics& outStats); // 3952
	VmaClearDetailedStatistics(VmaDetailedStatistics& outStats); // 10261
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5629
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5632
	VmaJsonWriter::EndArray(); // 6550
	VmaBlockMetadata::PrintDetailedMap_End(
				VmaJsonWriter& json);  // 10280
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VmaBlockMetadata_TLSF::Block::~VmaVector(); // 10281
} /* size: 583, variables: 5, inline expansions: 16 (598 bytes) */

// <00CE610F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10284
// variables: 11
// function calls: 16
void VmaBlockMetadata_TLSF::CreateAllocationRequest(VkDeviceSize allocSize, VkDeviceSize allocAlignment, bool upperAddress, VmaSuballocationType allocType, uint32_t strategy, VmaAllocationRequest* pAllocationRequest)
{
	VkDeviceSize sizeForNextList; // 10309
	VkDeviceSize smallSizeStep; // 10310
	uint32_t nextListIndex; // 10320
	uint32_t prevListIndex; // 10321
	Block* nextListBlock; // 10322
	Block* prevListBlock; // 10323
	{
		VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> allocator; // 10381
		VmaVector<VmaBlockMetadata_TLSF::Block*, VmaStlAllocator<VmaBlockMetadata_TLSF::Block*> > blockList; // 10382
		size_t i; // 10384
		{
			Block* block; // 10385
			Block::IsFree(); // 10387
			VmaVector<VmaBlockMetadata_TLSF::Block::operator[](
					size_t index);  // 10388
		}
		{
			Block& block; // 10393
		}
		VmaBlockMetadata::GetAllocationCallbacks(); // 10381
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<VmaBlockMetadata_TLSF::Block*>(const VkAllocationCallbacks* pAllocationCallbacks,
								size_t count);  // 4170
		VmaVector<VmaBlockMetadata_TLSF::Block::VmaVector(
				size_t count,
				const VmaStlAllocator<VmaBlockMetadata_TLSF::Block*>& allocator);  // 10382
		VmaStlAllocator<VmaBlockMetadata_TLSF::Block::VmaStlAllocator(
				const VkAllocationCallbacks* pCallbacks);  // 10381
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 4119
		VmaVector<VmaBlockMetadata_TLSF::Block::~VmaVector(); // 10404
	}
	VmaBlockMetadata::IsVirtual(); // 10296
	VmaBlockMetadata_TLSF::GetSumFreeSize(); // 10301
	VmaBlockMetadata::IsVirtual(); // 10310
	VmaBitScanMSB(uint64_t mask); // 10313
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 6656
	VmaAlignUp<long unsigned int>(long unsigned int val,
					long unsigned int alignment);  // 6657
	VmaBlockBufferImageGranularity::RoundupAllocRequest(
				VmaSuballocationType allocType,
				VkDeviceSize& inOutAllocSize,
				VkDeviceSize& inOutAllocAlignment);  // 10297
} /* size: 1850, variables: 6, inline expansions: 7 (118 bytes) */

// <00CE60DA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10446
// variable: 1
void VmaBlockMetadata_TLSF::CheckCorruption(const void* pBlockData)
{
	{
		Block* block; // 10448
	}
} /* size: 0 */

// <00CE5CC3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10463
// variables: 10
// function calls: 8
void VmaBlockMetadata_TLSF::Alloc(const VmaAllocationRequest& request, VmaSuballocationType type, void* userData)
{
	Block* currentBlock; // 10471
	VkDeviceSize offset; // 10472
	VkDeviceSize debugMargin; // 10479
	VkDeviceSize misssingAlignment; // 10480
	VkDeviceSize size; // 10521
	{
		Block* prevBlock; // 10485
		{
			uint32_t oldList; // 10490
		}
		{
			Block* newBlock; // 10505
			Block::MarkTaken(); // 10512
		}
		Block::IsFree(); // 10488
	}
	{
		Block* newBlock; // 10544
		Block::MarkTaken(); // 10563
		Block::MarkFree(); // 10555
		Block::MarkTaken(); // 10558
	}
	{
		Block* newBlock; // 10572
	}
	Block::MarkFree(); // 10532
	Block::MarkTaken(); // 10536
	VmaBlockMetadata::IsVirtual(); // 10583
} /* size: 779, variables: 5, inline expansions: 3 (13 bytes) */

// <00CE59EC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10589
// variables: 4
// function calls: 6
void VmaBlockMetadata_TLSF::Free(VmaAllocHandle allocHandle)
{
	Block* block; // 10591
	Block* next; // 10592
	VkDeviceSize debugMargin; // 10599
	Block* prev; // 10609
	VmaBlockMetadata::IsVirtual(); // 10595
	Block::IsFree(); // 10610
	Block::IsFree(); // 10616
	VmaBlockMetadata_TLSF::MergeBlock(
			Block* block,
			Block* prev);  // 10623
	VmaBlockMetadata_TLSF::MergeBlock(
			Block* block,
			Block* prev);  // 10619
	VmaBlockMetadata_TLSF::MergeBlock(
			Block* block,
			Block* prev);  // 10613
} /* size: 330, variables: 4, inline expansions: 6 (152 bytes) */

// <00CE598B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10628
// variable: 1
void VmaBlockMetadata_TLSF::GetAllocationInfo(VmaAllocHandle allocHandle, VmaVirtualAllocationInfo& outInfo)
{
	Block* block; // 10630
} /* size: 27, variables: 1 */

// <00CE5934> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10637
// variable: 1
void* VmaBlockMetadata_TLSF::GetAllocationUserData(VmaAllocHandle allocHandle)
{
	Block* block; // 10639
} /* size: 9, variables: 1 */

// <00CE58AD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10644
// variable: 1
// function call: 1
void VmaBlockMetadata_TLSF::GetAllocationListBegin()
{
	{
		Block* block; // 10649
		Block::IsFree(); // 10651
	}
} /* size: 59 */

// <00CE5802> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10658
// variables: 2
// function call: 1
void VmaBlockMetadata_TLSF::GetNextAllocation(VmaAllocHandle prevAlloc)
{
	Block* startBlock; // 10660
	{
		Block* block; // 10663
		Block::IsFree(); // 10665
	}
} /* size: 32, variables: 1 */

// <00CE577F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10671
// variable: 1
// function call: 1
void VmaBlockMetadata_TLSF::GetNextFreeRegionSize(VmaAllocHandle alloc)
{
	Block* block; // 10673
	Block::IsFree(); // 10677
} /* size: 29, variables: 1, inline expansions: 1 (0 bytes) */

// <00CE5595> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10681
// variables: 2
// function calls: 5
void VmaBlockMetadata_TLSF::Clear()
{
	Block* block; // 10689
	{
		Block* prev; // 10693
	}
	VmaBlockMetadata::GetSize(); // 10688
	memset(void* __dest,
		int __ch,
		size_t __len);  // 10697
	memset(void* __dest,
		int __ch,
		size_t __len);  // 10698
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6724
	VmaBlockBufferImageGranularity::Clear(); // 10699
} /* size: 227, variables: 1, inline expansions: 5 (78 bytes) */

// <00CE5534> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10702
// variable: 1
void VmaBlockMetadata_TLSF::SetAllocationUserData(VmaAllocHandle allocHandle, void* userData)
{
	Block* block; // 10704
} /* size: 9, variables: 1 */

// <00CF65A4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10716
// function call: 1
void VmaBlockMetadata_TLSF::SizeToMemoryClass(VkDeviceSize size)
{
	VmaBitScanMSB(uint64_t mask); // 10719
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CE54E6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10716
void VmaBlockMetadata_TLSF::SizeToMemoryClass(VkDeviceSize size)
{
} /* size: 0 */

// <00CF65FF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10723
// function calls: 2
void VmaBlockMetadata_TLSF::SizeToSecondIndex(VkDeviceSize size, uint8_t memoryClass)
{
	VmaBlockMetadata::IsVirtual(); // 10727
	VmaBlockMetadata_TLSF::SizeToSecondIndex(
				VkDeviceSize size,
				uint8_t memoryClass);  // 10723
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CE54B3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10723
void VmaBlockMetadata_TLSF::SizeToSecondIndex(VkDeviceSize size, uint8_t memoryClass)
{
} /* size: 0 */

// <00CF66BE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10735
// variable: 1
// function calls: 2
void VmaBlockMetadata_TLSF::GetListIndex(uint8_t memoryClass, uint16_t secondIndex)
{
	const uint32_t  index; // 10740
	VmaBlockMetadata::IsVirtual(); // 10741
	VmaBlockMetadata_TLSF::GetListIndex(
			uint8_t memoryClass,
			uint16_t secondIndex);  // 10735
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CE5473> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10735
// variable: 1
void VmaBlockMetadata_TLSF::GetListIndex(uint8_t memoryClass, uint16_t secondIndex)
{
	const uint32_t  index; // 10740
} /* size: 0, variables: 1 */

// <00CE5289> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10747
// variable: 1
// function calls: 7
void VmaBlockMetadata_TLSF::GetListIndex(VkDeviceSize size)
{
	uint8_t memoryClass; // 10749
	VmaBitScanMSB(uint64_t mask); // 10719
	VmaBlockMetadata_TLSF::SizeToMemoryClass(
				VkDeviceSize size);  // 10749
	VmaBlockMetadata::IsVirtual(); // 10727
	VmaBlockMetadata_TLSF::SizeToSecondIndex(
				VkDeviceSize size,
				uint8_t memoryClass);  // 10723
	VmaBlockMetadata_TLSF::SizeToSecondIndex(
				VkDeviceSize size,
				uint8_t memoryClass);  // 10750
	VmaBlockMetadata_TLSF::GetListIndex(
			uint8_t memoryClass,
			uint16_t secondIndex);  // 10735
	VmaBlockMetadata_TLSF::GetListIndex(
			uint8_t memoryClass,
			uint16_t secondIndex);  // 10750
} /* size: 102, variables: 1, inline expansions: 7 (159 bytes) */

// <00CE5046> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10753
// variables: 3
// function calls: 8
void VmaBlockMetadata_TLSF::RemoveFreeBlock(Block* block)
{
	{
		uint8_t memClass; // 10764
		uint16_t secondIndex; // 10765
		uint32_t index; // 10766
		VmaBitScanMSB(uint64_t mask); // 10719
		VmaBlockMetadata_TLSF::SizeToMemoryClass(
					VkDeviceSize size);  // 10764
		VmaBlockMetadata::IsVirtual(); // 10727
		VmaBlockMetadata_TLSF::SizeToSecondIndex(
					VkDeviceSize size,
					uint8_t memoryClass);  // 10723
		VmaBlockMetadata_TLSF::SizeToSecondIndex(
					VkDeviceSize size,
					uint8_t memoryClass);  // 10765
		VmaBlockMetadata_TLSF::GetListIndex(
				uint8_t memoryClass,
				uint16_t secondIndex);  // 10735
		VmaBlockMetadata_TLSF::GetListIndex(
				uint8_t memoryClass,
				uint16_t secondIndex);  // 10766
	}
	Block::MarkTaken(); // 10776
} /* size: 240, inline expansions: 1 (4 bytes) */

// <00CE4E38> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10782
// variables: 3
// function calls: 7
void VmaBlockMetadata_TLSF::InsertFreeBlock(Block* block)
{
	uint8_t memClass; // 10787
	uint16_t secondIndex; // 10788
	uint32_t index; // 10789
	VmaBitScanMSB(uint64_t mask); // 10719
	VmaBlockMetadata_TLSF::SizeToMemoryClass(
				VkDeviceSize size);  // 10787
	VmaBlockMetadata::IsVirtual(); // 10727
	VmaBlockMetadata_TLSF::SizeToSecondIndex(
				VkDeviceSize size,
				uint8_t memoryClass);  // 10723
	VmaBlockMetadata_TLSF::SizeToSecondIndex(
				VkDeviceSize size,
				uint8_t memoryClass);  // 10788
	VmaBlockMetadata_TLSF::GetListIndex(
			uint8_t memoryClass,
			uint16_t secondIndex);  // 10735
	VmaBlockMetadata_TLSF::GetListIndex(
			uint8_t memoryClass,
			uint16_t secondIndex);  // 10789
} /* size: 218, variables: 3, inline expansions: 7 (166 bytes) */

// <00CF9E48> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10805
void VmaBlockMetadata_TLSF::MergeBlock(Block* block, Block* prev)
{
} /* size: 0 */

// <00CE4B37> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10818
// variables: 3
// function calls: 10
void VmaBlockMetadata_TLSF::FindFreeBlock(VkDeviceSize size, uint32_t& listIndex)
{
	uint8_t memoryClass; // 10820
	uint32_t innerFreeMap; // 10821
	{
		uint32_t freeMap; // 10825
		VmaBitScanLSB(uint32_t mask); // 10830
	}
	VmaBitScanMSB(uint64_t mask); // 10719
	VmaBlockMetadata_TLSF::SizeToMemoryClass(
				VkDeviceSize size);  // 10820
	VmaBlockMetadata::IsVirtual(); // 10727
	VmaBlockMetadata_TLSF::SizeToSecondIndex(
				VkDeviceSize size,
				uint8_t memoryClass);  // 10723
	VmaBlockMetadata_TLSF::SizeToSecondIndex(
				VkDeviceSize size,
				uint8_t memoryClass);  // 10821
	VmaBitScanLSB(uint32_t mask); // 10835
	VmaBlockMetadata::IsVirtual(); // 10741
	VmaBlockMetadata_TLSF::GetListIndex(
			uint8_t memoryClass,
			uint16_t secondIndex);  // 10735
	VmaBlockMetadata_TLSF::GetListIndex(
			uint8_t memoryClass,
			uint16_t secondIndex);  // 10835
} /* size: 275, variables: 2, inline expansions: 9 (175 bytes) */

// <00CE49DC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10840
// variable: 1
// function calls: 2
void VmaBlockMetadata_TLSF::CheckBlock(Block& block, uint32_t listIndex, VkDeviceSize allocSize, VkDeviceSize allocAlignment, VmaSuballocationType allocType, VmaAllocationRequest* pAllocationRequest)
{
	VkDeviceSize alignedOffset; // 10850
	VmaAlignUp<long unsigned int>(long unsigned int val,
					long unsigned int alignment);  // 10850
	VmaBlockMetadata::IsVirtual(); // 10855
} /* size: 303, variables: 1, inline expansions: 2 (11 bytes) */

// <00CB5C51> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10891
// member functions: 76
// member variables: 16
// class size: 472
class VmaBlockVector {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10894 */
	void VmaBlockVector(VmaBlockVector* , const VmaBlockVector& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10894 */
	void VmaBlockVector(VmaBlockVector* , VmaBlockVector& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10894 */
	VmaBlockVector& operator=(VmaBlockVector* , const VmaBlockVector& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10894 */
	VmaBlockVector& operator=(VmaBlockVector* , VmaBlockVector& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10896 */
	void VmaBlockVector(VmaBlockVector* , VmaAllocator, VmaPool, uint32_t, VkDeviceSize, size_t, size_t, VkDeviceSize, bool, uint32_t, float, VkDeviceSize, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10909 */
	void ~VmaBlockVector(VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10911 */
	VmaAllocator GetAllocator(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10912 */
	VmaPool GetParentPool(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10913 */
	bool IsCustomPool(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10914 */
	uint32_t GetMemoryTypeIndex(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10915 */
	VkDeviceSize GetPreferredBlockSize(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10916 */
	VkDeviceSize GetBufferImageGranularity(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10917 */
	uint32_t GetAlgorithm(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10918 */
	bool HasExplicitBlockSize(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10919 */
	float GetPriority(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10920 */
	const void* GetAllocationNextPtr(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10922 */
	size_t GetBlockCount(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10924 */
	VmaDeviceMemoryBlock* GetBlock(const VmaBlockVector* , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10925 */
	CVMAThreadRWLock& GetMutex(VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10927 */
	VkResult CreateMinBlocks(VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10928 */
	void AddStatistics(VmaBlockVector* , VmaStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10929 */
	void AddDetailedStatistics(VmaBlockVector* , VmaDetailedStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10930 */
	bool IsEmpty(VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10931 */
	bool IsCorruptionDetectionEnabled(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10933 */
	VkResult Allocate(VmaBlockVector* , VkDeviceSize, VkDeviceSize, const VmaAllocationCreateInfo& , VmaSuballocationType, size_t, VmaAllocation* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10941 */
	void Free(VmaBlockVector* , VmaAllocation);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10944 */
	void PrintDetailedMap(VmaBlockVector* , VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10947 */
	VkResult CheckCorruption(VmaBlockVector* );
	const VmaAllocator m_hAllocator; /* 0 8 */
	const VmaPool m_hParentPool; /* 8 8 */
	const uint32_t m_MemoryTypeIndex; /* 16 4 */
	const VkDeviceSize m_PreferredBlockSize; /* 24 8 */
	const size_t m_MinBlockCount; /* 32 8 */
	const size_t m_MaxBlockCount; /* 40 8 */
	const VkDeviceSize m_BufferImageGranularity; /* 48 8 */
	const bool m_ExplicitBlockSize; /* 56 1 */
	const uint32_t m_Algorithm; /* 60 4 */
	const float m_Priority; /* 64 4 */
	const VkDeviceSize m_MinAllocationAlignment; /* 72 8 */
	const void * m_pMemoryAllocateNext; /* 80 8 */
	CVMAThreadRWLock m_Mutex; /* 88 344 */
	VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> > m_Blocks; /* 432 32 */
	uint32_t m_NextBlockId; /* 464 4 */
	bool m_IncrementalSort; /* 468 1 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10969 */
	void SetIncrementalSort(VmaBlockVector* , bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10971 */
	VkDeviceSize CalcMaxBlockSize(const VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10973 */
	void Remove(VmaBlockVector* , VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10976 */
	void IncrementallySortBlocks(VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10977 */
	void SortByFreeSize(VmaBlockVector* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10979 */
	VkResult AllocatePage(VmaBlockVector* , VkDeviceSize, VkDeviceSize, const VmaAllocationCreateInfo& , VmaSuballocationType, VmaAllocation* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10986 */
	VkResult AllocateFromBlock(VmaBlockVector* , VmaDeviceMemoryBlock* , VkDeviceSize, VkDeviceSize, VmaAllocationCreateFlags, void* , VmaSuballocationType, uint32_t, VmaAllocation* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:10996 */
	VkResult CommitAllocationRequest(VmaBlockVector* , VmaAllocationRequest& , VmaDeviceMemoryBlock* , VkDeviceSize, VmaAllocationCreateFlags, void* , VmaSuballocationType, VmaAllocation* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11005 */
	VkResult CreateBlock(VmaBlockVector* , VkDeviceSize, size_t* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11006 */
	bool HasEmptyBlock(VmaBlockVector* );
	void VmaBlockVector(class VmaBlockVector *, const class VmaBlockVector  &); /* linkage=_ZN14VmaBlockVectorC4ERKS_ */
	void VmaBlockVector(class VmaBlockVector *, class VmaBlockVector &); /* linkage=_ZN14VmaBlockVectorC4EOS_ */
	class VmaBlockVector & operator=(class VmaBlockVector *, const class VmaBlockVector  &); /* linkage=_ZN14VmaBlockVectoraSERKS_ */
	class VmaBlockVector & operator=(class VmaBlockVector *, class VmaBlockVector &); /* linkage=_ZN14VmaBlockVectoraSEOS_ */
	void VmaBlockVector(class VmaBlockVector *, VmaAllocator, VmaPool, uint32_t, VkDeviceSize, size_t, size_t, VkDeviceSize, bool, uint32_t, float, VkDeviceSize, void *); /* linkage=_ZN14VmaBlockVectorC4EP14VmaAllocator_TP9VmaPool_TjmmmmbjfmPv */
	void ~VmaBlockVector(class VmaBlockVector *); /* linkage=_ZN14VmaBlockVectorD4Ev */
	VmaAllocator GetAllocator(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector12GetAllocatorEv */
	VmaPool GetParentPool(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector13GetParentPoolEv */
	bool IsCustomPool(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector12IsCustomPoolEv */
	uint32_t GetMemoryTypeIndex(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector18GetMemoryTypeIndexEv */
	VkDeviceSize GetPreferredBlockSize(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector21GetPreferredBlockSizeEv */
	VkDeviceSize GetBufferImageGranularity(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector25GetBufferImageGranularityEv */
	uint32_t GetAlgorithm(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector12GetAlgorithmEv */
	bool HasExplicitBlockSize(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector20HasExplicitBlockSizeEv */
	float GetPriority(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector11GetPriorityEv */
	const void  * GetAllocationNextPtr(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector20GetAllocationNextPtrEv */
	size_t GetBlockCount(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector13GetBlockCountEv */
	class VmaDeviceMemoryBlock * GetBlock(const class VmaBlockVector  *, size_t); /* linkage=_ZNK14VmaBlockVector8GetBlockEm */
	class CVMAThreadRWLock & GetMutex(class VmaBlockVector *); /* linkage=_ZN14VmaBlockVector8GetMutexEv */
	/* <cfa36c> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12345 */
	VkResult CreateMinBlocks(class VmaBlockVector *); /* linkage=_ZN14VmaBlockVector15CreateMinBlocksEv */
	void AddStatistics(class VmaBlockVector *, VmaStatistics &); /* linkage=_ZN14VmaBlockVector13AddStatisticsER13VmaStatistics */
	void AddDetailedStatistics(class VmaBlockVector *, VmaDetailedStatistics &); /* linkage=_ZN14VmaBlockVector21AddDetailedStatisticsER21VmaDetailedStatistics */
	bool IsEmpty(class VmaBlockVector *); /* linkage=_ZN14VmaBlockVector7IsEmptyEv */
	/* <cf7353> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12392 */
	bool IsCorruptionDetectionEnabled(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector28IsCorruptionDetectionEnabledEv */
	VkResult Allocate(class VmaBlockVector *, VkDeviceSize, VkDeviceSize, const VmaAllocationCreateInfo  &, enum VmaSuballocationType, size_t, VmaAllocation *); /* linkage=_ZN14VmaBlockVector8AllocateEmmRK23VmaAllocationCreateInfo20VmaSuballocationTypemPP15VmaAllocation_T */
	void Free(class VmaBlockVector *, VmaAllocation); /* linkage=_ZN14VmaBlockVector4FreeEP15VmaAllocation_T */
	void PrintDetailedMap(class VmaBlockVector *, class VmaJsonWriter &); /* linkage=_ZN14VmaBlockVector16PrintDetailedMapER13VmaJsonWriter */
	/* <cf7729> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12967 */
	VkResult CheckCorruption(class VmaBlockVector *); /* linkage=_ZN14VmaBlockVector15CheckCorruptionEv */
	void SetIncrementalSort(class VmaBlockVector *, bool); /* linkage=_ZN14VmaBlockVector18SetIncrementalSortEb */
	/* <cf7383> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12729 */
	VkDeviceSize CalcMaxBlockSize(const class VmaBlockVector  *); /* linkage=_ZNK14VmaBlockVector16CalcMaxBlockSizeEv */
	void Remove(class VmaBlockVector *, class VmaDeviceMemoryBlock *); /* linkage=_ZN14VmaBlockVector6RemoveEP20VmaDeviceMemoryBlock */
	/* <cf749a> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12756 */
	void IncrementallySortBlocks(class VmaBlockVector *); /* linkage=_ZN14VmaBlockVector23IncrementallySortBlocksEv */
	void SortByFreeSize(class VmaBlockVector *); /* linkage=_ZN14VmaBlockVector14SortByFreeSizeEv */
	VkResult AllocatePage(class VmaBlockVector *, VkDeviceSize, VkDeviceSize, const VmaAllocationCreateInfo  &, enum VmaSuballocationType, VmaAllocation *); /* linkage=_ZN14VmaBlockVector12AllocatePageEmmRK23VmaAllocationCreateInfo20VmaSuballocationTypePP15VmaAllocation_T */
	VkResult AllocateFromBlock(class VmaBlockVector *, class VmaDeviceMemoryBlock *, VkDeviceSize, VkDeviceSize, VmaAllocationCreateFlags, void *, enum VmaSuballocationType, uint32_t, VmaAllocation *); /* linkage=_ZN14VmaBlockVector17AllocateFromBlockEP20VmaDeviceMemoryBlockmmjPv20VmaSuballocationTypejPP15VmaAllocation_T */
	VkResult CommitAllocationRequest(class VmaBlockVector *, class VmaAllocationRequest &, class VmaDeviceMemoryBlock *, VkDeviceSize, VmaAllocationCreateFlags, void *, enum VmaSuballocationType, VmaAllocation *); /* linkage=_ZN14VmaBlockVector23CommitAllocationRequestER20VmaAllocationRequestP20VmaDeviceMemoryBlockmjPv20VmaSuballocationTypePP15VmaAllocation_T */
	VkResult CreateBlock(class VmaBlockVector *, VkDeviceSize, size_t *); /* linkage=_ZN14VmaBlockVector11CreateBlockEmPm */
	/* <cf764a> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12930 */
	bool HasEmptyBlock(class VmaBlockVector *); /* linkage=_ZN14VmaBlockVector13HasEmptyBlockEv */
};

// <00CE49C3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10911
inline void VmaBlockVector::GetAllocator()
{
} /* size: 0 */

// <00CE49AA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10914
inline void VmaBlockVector::GetMemoryTypeIndex()
{
} /* size: 0 */

// <00CE4991> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10915
inline void VmaBlockVector::GetPreferredBlockSize()
{
} /* size: 0 */

// <00CE4978> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10917
inline void VmaBlockVector::GetAlgorithm()
{
} /* size: 0 */

// <00CE495F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10918
inline void VmaBlockVector::HasExplicitBlockSize()
{
} /* size: 0 */

// <00CE4946> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10919
inline void VmaBlockVector::GetPriority()
{
} /* size: 0 */

// <00CE4928> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10920
inline const void* VmaBlockVector::GetAllocationNextPtr()
{
} /* size: 0 */

// <00CE48E9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10924
inline void VmaBlockVector::GetBlock(size_t index)
{
} /* size: 0 */

// <00CE48D0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10925
inline void VmaBlockVector::GetMutex()
{
} /* size: 0 */

// <00CE48AA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:10969
inline void VmaBlockVector::SetIncrementalSort(bool val)
{
} /* size: 0 */

// <00C9594F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11011
// member functions: 25
// member variables: 14
// static member variable: 1
// struct size: 160
struct VmaDefragmentationContext_T {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11028 */
	enum CounterStatus {
		Pass = 0,
		Ignore = 1,
		End = 2,
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11030 */
	struct FragmentedBlock {
		uint32_t data; /* 0 4 */
		VmaDeviceMemoryBlock * block; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11035 */
	struct StateBalanced {
		VkDeviceSize avgFreeSize; /* 0 8 */
		VkDeviceSize avgAllocSize; /* 8 8 */
		void StateBalanced(StateBalanced* );
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11040 */
	struct StateExtensive {
		/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11042 */
		enum Operation {
			FindFreeBlockBuffer = 0,
			FindFreeBlockTexture = 1,
			FindFreeBlockAll = 2,
			MoveBuffers = 3,
			MoveTextures = 4,
			MoveAll = 5,
			Cleanup = 6,
			Done = 7,
		} __attribute__((__packed__));
		Operation operation; /* 0 1 */
		size_t firstFreeBlock; /* 8 8 */
		void StateExtensive(StateExtensive* );
	};
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11052 */
	struct MoveAllocationData {
		VkDeviceSize size; /* 0 8 */
		VkDeviceSize alignment; /* 8 8 */
		VmaSuballocationType type; /* 16 4 */
		VmaAllocationCreateFlags flags; /* 20 4 */
		VmaDefragmentationMove move; /* 24 24 */
		void MoveAllocationData(MoveAllocationData* );
	};
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11013 */
	void VmaDefragmentationContext_T(VmaDefragmentationContext_T* , const VmaDefragmentationContext_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11013 */
	void VmaDefragmentationContext_T(VmaDefragmentationContext_T* , VmaDefragmentationContext_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11013 */
	VmaDefragmentationContext_T& operator=(VmaDefragmentationContext_T* , const VmaDefragmentationContext_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11013 */
	VmaDefragmentationContext_T& operator=(VmaDefragmentationContext_T* , VmaDefragmentationContext_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11015 */
	void VmaDefragmentationContext_T(VmaDefragmentationContext_T* , VmaAllocator, const VmaDefragmentationInfo& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11018 */
	void ~VmaDefragmentationContext_T(VmaDefragmentationContext_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11020 */
	void GetStats(VmaDefragmentationContext_T* , VmaDefragmentationStats& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11022 */
	VkResult DefragmentPassBegin(VmaDefragmentationContext_T* , VmaDefragmentationPassMoveInfo& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11023 */
	VkResult DefragmentPassEnd(VmaDefragmentationContext_T* , VmaDefragmentationPassMoveInfo& );
	static const uint8_t MAX_ALLOCS_TO_IGNORE = 16; /* 0 0 */
	const VkDeviceSize m_MaxPassBytes; /* 0 8 */
	const uint32_t m_MaxPassAllocations; /* 8 4 */
	const PFN_vmaCheckDefragmentationBreak m_IsBreak; /* 16 8 */
	VmaStlAllocator<VmaDefragmentationMove> m_MoveAllocator; /* 24 8 */
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> > m_Moves; /* 32 32 */
	uint8_t m_IgnoredAllocs; /* 64 1 */
	uint32_t m_Algorithm; /* 68 4 */
	uint32_t m_BlockVectorCount; /* 72 4 */
	VmaBlockVector * m_PoolBlockVector; /* 80 8 */
	VmaBlockVector * * m_pBlockVectors; /* 88 8 */
	size_t m_ImmovableBlockCount; /* 96 8 */
	VmaDefragmentationStats m_GlobalStats; /* 104 24 */
	VmaDefragmentationStats m_PassStats; /* 128 24 */
	void * m_AlgorithmState; /* 152 8 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11078 */
	MoveAllocationData GetMoveData(VmaAllocHandle, VmaBlockMetadata* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11079 */
	CounterStatus CheckCounters(VmaDefragmentationContext_T* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11080 */
	bool IncrementCounters(VmaDefragmentationContext_T* , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11081 */
	bool ReallocWithinBlock(VmaDefragmentationContext_T* , VmaBlockVector& , VmaDeviceMemoryBlock* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11082 */
	bool AllocInOtherBlock(VmaDefragmentationContext_T* , size_t, size_t, MoveAllocationData& , VmaBlockVector& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11084 */
	bool ComputeDefragmentation(VmaDefragmentationContext_T* , VmaBlockVector& , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11085 */
	bool ComputeDefragmentation_Fast(VmaDefragmentationContext_T* , VmaBlockVector& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11086 */
	bool ComputeDefragmentation_Balanced(VmaDefragmentationContext_T* , VmaBlockVector& , size_t, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11087 */
	bool ComputeDefragmentation_Full(VmaDefragmentationContext_T* , VmaBlockVector& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11088 */
	bool ComputeDefragmentation_Extensive(VmaDefragmentationContext_T* , VmaBlockVector& , size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11090 */
	void UpdateVectorStatistics(VmaDefragmentationContext_T* , VmaBlockVector& , StateBalanced& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11091 */
	bool MoveDataToFreeBlocks(VmaDefragmentationContext_T* , VmaSuballocationType, VmaBlockVector& , size_t, bool& , bool& , bool& );
};

// <00CE4884> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11020
inline void VmaDefragmentationContext_T::GetStats(VmaDefragmentationStats& outStats)
{
} /* size: 0 */

// <00CDB2ED> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11035
void StateBalanced::StateBalanced()
{
} /* size: 0 */

// <00CDB2CF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11035
inline void StateBalanced::StateBalanced()
{
} /* size: 0 */

// <00CDB2B8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11040
void StateExtensive::StateExtensive()
{
} /* size: 0 */

// <00CDB29A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11040
inline void StateExtensive::StateExtensive()
{
} /* size: 0 */

// <00CD7E27> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11052
void MoveAllocationData::MoveAllocationData()
{
} /* size: 0 */

// <00CD7E09> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11052
inline void MoveAllocationData::MoveAllocationData()
{
} /* size: 0 */

// <00C95114> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11098
// member functions: 10
// member variables: 6
// struct size: 880
struct VmaPool_T {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11101 */
	void VmaPool_T(VmaPool_T* , const VmaPool_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11101 */
	void VmaPool_T(VmaPool_T* , VmaPool_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11101 */
	VmaPool_T& operator=(VmaPool_T* , const VmaPool_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11101 */
	VmaPool_T& operator=(VmaPool_T* , VmaPool_T& );
	VmaBlockVector m_BlockVector; /* 0 472 */
	VmaDedicatedAllocationList m_DedicatedAllocations; /* 472 376 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11106 */
	void VmaPool_T(VmaPool_T* , VmaAllocator, const VmaPoolCreateInfo& , VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11110 */
	void ~VmaPool_T(VmaPool_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11112 */
	uint32_t GetId(const VmaPool_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11113 */
	void SetId(VmaPool_T* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11115 */
	const char* GetName(const VmaPool_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11116 */
	void SetName(VmaPool_T* , const char* );
	uint32_t m_Id; /* 848 4 */
	char * m_Name; /* 856 8 */
	VmaPool_T * m_PrevPool; /* 864 8 */
	VmaPool_T * m_NextPool; /* 872 8 */
};

// <00CE485F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11113
inline void VmaPool_T::SetId(uint32_t id)
{
} /* size: 0 */

// <00CE4846> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11115
inline void VmaPool_T::GetName()
{
} /* size: 0 */

// <00CB6A16> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11129
// member functions: 4
// struct size: 1
struct VmaPoolListItemTraits {
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11131 */
	typedef struct VmaPool_T ItemType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11133 */
	ItemType* GetPrev(const ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11134 */
	ItemType* GetNext(const ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11135 */
	ItemType* & AccessPrev(ItemType* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11136 */
	ItemType* & AccessNext(ItemType* );
};

// <00CD52F7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11141
void VmaCurrentBudgetData::~VmaCurrentBudgetData()
{
} /* size: 0 */

// <00CD52D9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11141
inline void VmaCurrentBudgetData::~VmaCurrentBudgetData()
{
} /* size: 0 */

// <00CB6ABA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11141
// member functions: 8
// member variables: 9
// struct size: 1,120
struct VmaCurrentBudgetData {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11143 */
	void VmaCurrentBudgetData(VmaCurrentBudgetData* , const VmaCurrentBudgetData& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11143 */
	void VmaCurrentBudgetData(VmaCurrentBudgetData* , VmaCurrentBudgetData& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11143 */
	VmaCurrentBudgetData& operator=(VmaCurrentBudgetData* , const VmaCurrentBudgetData& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11143 */
	VmaCurrentBudgetData& operator=(VmaCurrentBudgetData* , VmaCurrentBudgetData& );
	atomic<unsigned int> m_BlockCount[16] __attribute__((__aligned__(4))); /* 0 64 */
	atomic<unsigned int> m_AllocationCount[16] __attribute__((__aligned__(4))); /* 64 64 */
	atomic<long unsigned int> m_BlockBytes[16] __attribute__((__aligned__(8))); /* 128 128 */
	atomic<long unsigned int> m_AllocationBytes[16] __attribute__((__aligned__(8))); /* 256 128 */
	atomic<unsigned int> m_OperationsSinceBudgetFetch __attribute__((__aligned__(4))); /* 384 4 */
	CVMAThreadRWLock m_BudgetMutex; /* 392 344 */
	uint64_t m_VulkanUsage[16]; /* 736 128 */
	uint64_t m_VulkanBudget[16]; /* 864 128 */
	uint64_t m_BlockBytesAtBudgetFetch[16]; /* 992 128 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11159 */
	void VmaCurrentBudgetData(VmaCurrentBudgetData* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11161 */
	void AddAllocation(VmaCurrentBudgetData* , uint32_t, VkDeviceSize);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11162 */
	void RemoveAllocation(VmaCurrentBudgetData* , uint32_t, VkDeviceSize);
	void ~VmaCurrentBudgetData(VmaCurrentBudgetData* );
} __attribute__((__aligned__(8)));

// <00CE4368> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11166
// variables: 2
// function calls: 15
void VmaCurrentBudgetData::VmaCurrentBudgetData()
{
	{
		uint32_t heapIndex; // 11168
	}
	__atomic_base<unsigned int>::__atomic_base(); // 860
	atomic<unsigned int>::atomic(); // 11166
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 11
	CVMAThreadRWLock::CVMAThreadRWLock(); // 11166
	{
		uint32_t heapIndex; // 11168
		__atomic_base<long unsigned int>::store(
			__int_type __i,
			memory_order __m);  // 369
		__atomic_base<long unsigned int>::operator=(
				__int_type __i);  // 11172
		__atomic_base<unsigned int>::store(
			__int_type __i,
			memory_order __m);  // 369
		__atomic_base<unsigned int>::operator=(
				__int_type __i);  // 11170
		__atomic_base<unsigned int>::store(
			__int_type __i,
			memory_order __m);  // 369
		__atomic_base<unsigned int>::operator=(
				__int_type __i);  // 11171
		__atomic_base<long unsigned int>::store(
			__int_type __i,
			memory_order __m);  // 369
		__atomic_base<long unsigned int>::operator=(
				__int_type __i);  // 11173
	}
	__atomic_base<unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 369
	__atomic_base<unsigned int>::operator=(
			__int_type __i);  // 11182
} /* size: 332, inline expansions: 7 (379 bytes) */

// <00CE433D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11166
// variable: 1
void VmaCurrentBudgetData::VmaCurrentBudgetData()
{
	{
		uint32_t heapIndex; // 11168
	}
} /* size: 0 */

// <00CF6789> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11186
// function calls: 3
void VmaCurrentBudgetData::AddAllocation(uint32_t heapIndex, VkDeviceSize allocationSize)
{
	__atomic_base<long unsigned int>::operator+=(
			__int_type __i);  // 11188
	__atomic_base<unsigned int>::operator++(); // 11189
	__atomic_base<unsigned int>::operator++(); // 11191
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00CE4307> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11186
void VmaCurrentBudgetData::AddAllocation(uint32_t heapIndex, VkDeviceSize allocationSize)
{
} /* size: 0 */

// <00CF686E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11195
// function calls: 3
void VmaCurrentBudgetData::RemoveAllocation(uint32_t heapIndex, VkDeviceSize allocationSize)
{
	__atomic_base<long unsigned int>::operator-=(
			__int_type __i);  // 11198
	__atomic_base<unsigned int>::operator--(); // 11200
	__atomic_base<unsigned int>::operator++(); // 11202
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00CE42D1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11195
void VmaCurrentBudgetData::RemoveAllocation(uint32_t heapIndex, VkDeviceSize allocationSize)
{
} /* size: 0 */

// <00CD532C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11212
void VmaAllocationObjectAllocator::~VmaAllocationObjectAllocator()
{
} /* size: 0 */

// <00CD530E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11212
inline void VmaAllocationObjectAllocator::~VmaAllocationObjectAllocator()
{
} /* size: 0 */

// <00CB757B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11212
// member functions: 18
// member variables: 2
// class size: 88
class VmaAllocationObjectAllocator {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11214 */
	void VmaAllocationObjectAllocator(VmaAllocationObjectAllocator* , const VmaAllocationObjectAllocator& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11214 */
	void VmaAllocationObjectAllocator(VmaAllocationObjectAllocator* , VmaAllocationObjectAllocator& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11214 */
	VmaAllocationObjectAllocator& operator=(VmaAllocationObjectAllocator* , const VmaAllocationObjectAllocator& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11214 */
	VmaAllocationObjectAllocator& operator=(VmaAllocationObjectAllocator* , VmaAllocationObjectAllocator& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11216 */
	void VmaAllocationObjectAllocator(VmaAllocationObjectAllocator* , const VkAllocationCallbacks* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11220 */
	void Free(VmaAllocationObjectAllocator* , VmaAllocation);
	VmaMutex m_Mutex; /* 0 40 */
	VmaPoolAllocator<VmaAllocation_T> m_Allocator; /* 40 48 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11228 */
	VmaAllocation Allocate<bool&>(VmaAllocationObjectAllocator* , bool& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11228 */
	VmaAllocation Allocate<bool const&>(VmaAllocationObjectAllocator* , const bool& );
	void ~VmaAllocationObjectAllocator(VmaAllocationObjectAllocator* );
	void VmaAllocationObjectAllocator(class VmaAllocationObjectAllocator *, const class VmaAllocationObjectAllocator  &); /* linkage=_ZN28VmaAllocationObjectAllocatorC4ERKS_ */
	void VmaAllocationObjectAllocator(class VmaAllocationObjectAllocator *, class VmaAllocationObjectAllocator &); /* linkage=_ZN28VmaAllocationObjectAllocatorC4EOS_ */
	class VmaAllocationObjectAllocator & operator=(class VmaAllocationObjectAllocator *, const class VmaAllocationObjectAllocator  &); /* linkage=_ZN28VmaAllocationObjectAllocatoraSERKS_ */
	class VmaAllocationObjectAllocator & operator=(class VmaAllocationObjectAllocator *, class VmaAllocationObjectAllocator &); /* linkage=_ZN28VmaAllocationObjectAllocatoraSEOS_ */
	void VmaAllocationObjectAllocator(class VmaAllocationObjectAllocator *, const VkAllocationCallbacks  *); /* linkage=_ZN28VmaAllocationObjectAllocatorC4EPK21VkAllocationCallbacks */
	void Free(class VmaAllocationObjectAllocator *, VmaAllocation); /* linkage=_ZN28VmaAllocationObjectAllocator4FreeEP15VmaAllocation_T */
	VmaAllocation Allocate<bool&>(class VmaAllocationObjectAllocator *, bool &); /* linkage=_ZN28VmaAllocationObjectAllocator8AllocateIJRbEEEP15VmaAllocation_TDpOT_ */
	VmaAllocation Allocate<bool const&>(class VmaAllocationObjectAllocator *, const bool  &); /* linkage=_ZN28VmaAllocationObjectAllocator8AllocateIJRKbEEEP15VmaAllocation_TDpOT_ */
	void ~VmaAllocationObjectAllocator(class VmaAllocationObjectAllocator *); /* linkage=_ZN28VmaAllocationObjectAllocatorD4Ev */
};

// <00CE42B5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11216
void VmaAllocationObjectAllocator::VmaAllocationObjectAllocator(const VkAllocationCallbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <00CE428F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11216
inline void VmaAllocationObjectAllocator::VmaAllocationObjectAllocator(const VkAllocationCallbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <00CBD0BB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11228
// variable: 1
void Allocate<bool VmaAllocationObjectAllocator::const&>()
{
	VmaMutexLock mutexLock; // 11230
} /* size: 0, variables: 1 */

// <00CBCB0F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11228
// variable: 1
void VmaAllocationObjectAllocator::Allocate<bool&>()
{
	VmaMutexLock mutexLock; // 11230
} /* size: 0, variables: 1 */

// <00CE3F5D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11234
// variables: 5
// function calls: 12
void VmaAllocationObjectAllocator::Free(VmaAllocation hAlloc)
{
	VmaMutexLock mutexLock; // 11236
	__gthread_mutex_lock(__gthread_mutex_t* __mutex); // 115
	mutex::lock(); // 2927
	VmaMutex::Lock(); // 3996
	VmaMutexLock::VmaMutexLock(
			VmaMutex& mutex,
			bool useMutex);  // 11236
	{
		size_t i; // 4553
		size(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::It this); // 4553
		{
			ItemBlock& block; // 4555
			union Item* pItemPtr; // 4558
			operator[](const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this,
					size_t index);  // 4555
			{
				const uint32_t  index; // 4565
				VmaAllocation_T::~VmaAllocation_T(); // 4564
			}
		}
	}
	VmaPoolAllocator<VmaAllocation_T>::Free(
		VmaAllocation_T* ptr);  // 11237
	__gthread_mutex_unlock(__gthread_mutex_t* __mutex); // 134
	mutex::unlock(); // 2928
	VmaMutex::Unlock(); // 3998
	VmaMutexLock::~VmaMutexLock(); // 11238
} /* size: 0, variables: 1, inline expansions: 9 (230 bytes) */

// <00C95FB5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11242
// member functions: 17
// member variables: 3
// struct size: 64
struct VmaVirtualBlock_T {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11244 */
	void VmaVirtualBlock_T(VmaVirtualBlock_T* , const VmaVirtualBlock_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11244 */
	void VmaVirtualBlock_T(VmaVirtualBlock_T* , VmaVirtualBlock_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11244 */
	VmaVirtualBlock_T& operator=(VmaVirtualBlock_T* , const VmaVirtualBlock_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11244 */
	VmaVirtualBlock_T& operator=(VmaVirtualBlock_T* , VmaVirtualBlock_T& );
	const bool m_AllocationCallbacksSpecified; /* 0 1 */
	const VkAllocationCallbacks m_AllocationCallbacks; /* 8 48 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11249 */
	void VmaVirtualBlock_T(VmaVirtualBlock_T* , const VmaVirtualBlockCreateInfo& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11250 */
	void ~VmaVirtualBlock_T(VmaVirtualBlock_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11252 */
	VkResult Init(VmaVirtualBlock_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11253 */
	bool IsEmpty(const VmaVirtualBlock_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11254 */
	void Free(VmaVirtualBlock_T* , VmaVirtualAllocation);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11255 */
	void SetAllocationUserData(VmaVirtualBlock_T* , VmaVirtualAllocation, void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11256 */
	void Clear(VmaVirtualBlock_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11258 */
	const VkAllocationCallbacks* GetAllocationCallbacks(const VmaVirtualBlock_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11259 */
	void GetAllocationInfo(VmaVirtualBlock_T* , VmaVirtualAllocation, VmaVirtualAllocationInfo& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11260 */
	VkResult Allocate(VmaVirtualBlock_T* , const VmaVirtualAllocationCreateInfo& , VmaVirtualAllocation& , VkDeviceSize* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11262 */
	void GetStatistics(const VmaVirtualBlock_T* , VmaStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11263 */
	void CalculateDetailedStatistics(const VmaVirtualBlock_T* , VmaDetailedStatistics& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11265 */
	void BuildStatsString(const VmaVirtualBlock_T* , bool, VmaStringBuilder& );
	VmaBlockMetadata * m_Metadata; /* 56 8 */
};

// <00CE3F44> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11252
inline void VmaVirtualBlock_T::Init()
{
} /* size: 0 */

// <00CE3F2B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11253
inline void VmaVirtualBlock_T::IsEmpty()
{
} /* size: 0 */

// <00CE3F05> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11254
inline void VmaVirtualBlock_T::Free(VmaVirtualAllocation allocation)
{
} /* size: 0 */

// <00CE3ED2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11255
inline void VmaVirtualBlock_T::SetAllocationUserData(VmaVirtualAllocation allocation, void* userData)
{
} /* size: 0 */

// <00CE3EB9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11256
inline void VmaVirtualBlock_T::Clear()
{
} /* size: 0 */

// <00CE390E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11273
// variables: 2
// function calls: 19
void VmaVirtualBlock_T::VmaVirtualBlock_T(const VmaVirtualBlockCreateInfo& createInfo)
{
	{
		const uint32_t  algorithm; // 11277
	}
	{
		const uint32_t  algorithm; // 11277
		VmaVirtualBlock_T::GetAllocationCallbacks(); // 11281
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3833
		VmaAllocate<VmaBlockMetadata_TLSF>(const VkAllocationCallbacks* pAllocationCallbacks); // 11281
		operator new(size_t,
				void* __p);  // 11281
		VmaBlockMetadata::VmaBlockMetadata(
				const VkAllocationCallbacks* pAllocationCallbacks,
				VkDeviceSize bufferImageGranularity,
				bool isVirtual);  // 10085
		VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>::VmaStlAllocator(
				const VkAllocationCallbacks* pCallbacks);  // 4510
		VmaVector(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this,
				const VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& allocator);  // 4510
		VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::VmaPoolAllocator(
				const VkAllocationCallbacks* pAllocationCallbacks,
				uint32_t firstBlockCapacity);  // 10083
		VmaBlockBufferImageGranularity::VmaBlockBufferImageGranularity(
						VkDeviceSize bufferImageGranularity);  // 10085
		VmaBlockMetadata_TLSF::VmaBlockMetadata_TLSF(
					const VkAllocationCallbacks* pAllocationCallbacks,
					VkDeviceSize bufferImageGranularity,
					bool isVirtual);  // 11281
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3833
		VmaAllocate<VmaBlockMetadata_Linear>(const VkAllocationCallbacks* pAllocationCallbacks); // 11284
		operator new(size_t,
				void* __p);  // 11284
		VmaBlockMetadata::VmaBlockMetadata(
				const VkAllocationCallbacks* pAllocationCallbacks,
				VkDeviceSize bufferImageGranularity,
				bool isVirtual);  // 7754
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::VmaVector(
				const VmaStlAllocator<VmaSuballocation>& allocator);  // 7748
		VmaStlAllocator<VmaSuballocation>::VmaStlAllocator(
				const VkAllocationCallbacks* pCallbacks);  // 7748
		VmaStlAllocator<VmaSuballocation>::VmaStlAllocator(
				const VkAllocationCallbacks* pCallbacks);  // 7749
		VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::VmaVector(
				const VmaStlAllocator<VmaSuballocation>& allocator);  // 7749
		VmaBlockMetadata_Linear::VmaBlockMetadata_Linear(
					const VkAllocationCallbacks* pAllocationCallbacks,
					VkDeviceSize bufferImageGranularity,
					bool isVirtual);  // 11284
	}
} /* size: 0 */

// <00CE38D6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11273
// variable: 1
void VmaVirtualBlock_T::VmaVirtualBlock_T(const VmaVirtualBlockCreateInfo& createInfo)
{
	{
		const uint32_t  algorithm; // 11277
	}
} /* size: 0 */

// <00CE37F3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11294
// function calls: 3
void VmaVirtualBlock_T::~VmaVirtualBlock_T()
{
	VmaVirtualBlock_T::GetAllocationCallbacks(); // 11303
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 3850
	vma_delete<VmaBlockMetadata>(const VkAllocationCallbacks* pAllocationCallbacks,
					VmaBlockMetadata* ptr);  // 11303
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00CE37D7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11294
void VmaVirtualBlock_T::~VmaVirtualBlock_T()
{
} /* size: 0 */

// <00CF6953> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11306
void VmaVirtualBlock_T::GetAllocationCallbacks()
{
} /* size: 0 */

// <00CF697C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11311
void VmaVirtualBlock_T::GetAllocationInfo(VmaVirtualAllocation allocation, VmaVirtualAllocationInfo& outInfo)
{
} /* size: 0 */

// <00CE3669> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11316
// variable: 1
// function calls: 2
void VmaVirtualBlock_T::Allocate(const VmaVirtualAllocationCreateInfo& createInfo, VmaVirtualAllocation& outAllocation, VkDeviceSize* outOffset)
{
	VmaAllocationRequest request; // 11319
	iterator::iterator(); // 11319
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 11322
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CF69DF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11342
// function call: 1
void VmaVirtualBlock_T::GetStatistics(VmaStatistics& outStats)
{
	VmaClearStatistics(VmaStatistics& outStats); // 11344
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CE3640> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11342
void VmaVirtualBlock_T::GetStatistics(VmaStatistics& outStats)
{
} /* size: 0 */

// <00CF6A63> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11348
// function calls: 2
void VmaVirtualBlock_T::CalculateDetailedStatistics(VmaDetailedStatistics& outStats)
{
	VmaClearStatistics(VmaStatistics& outStats); // 3952
	VmaClearDetailedStatistics(VmaDetailedStatistics& outStats); // 11350
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CE3617> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11348
void VmaVirtualBlock_T::CalculateDetailedStatistics(VmaDetailedStatistics& outStats)
{
} /* size: 0 */

// <00CE2B2F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11355
// variables: 2
// function calls: 40
void VmaVirtualBlock_T::BuildStatsString(bool detailedMap, VmaStringBuilder& sb)
{
	VmaJsonWriter json; // 11357
	VmaDetailedStatistics stats; // 11360
	VmaVirtualBlock_T::GetAllocationCallbacks(); // 11357
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::VmaVector(
			const VmaStlAllocator<VmaJsonWriter::StackItem>& allocator);  // 5576
	VmaStlAllocator<VmaJsonWriter::StackItem>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 5576
	VmaJsonWriter::VmaJsonWriter(
			const VkAllocationCallbacks* pAllocationCallbacks,
			VmaStringBuilder& sb);  // 11357
	VmaClearStatistics(VmaStatistics& outStats); // 3952
	VmaClearDetailedStatistics(VmaDetailedStatistics& outStats); // 11350
	VmaVirtualBlock_T::CalculateDetailedStatistics(
					VmaDetailedStatistics& outStats);  // 11361
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5646
	VmaJsonWriter::BeginString(
			const char* pStr);  // 5637
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 11363
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5604
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
	VmaJsonWriter::EndObject(); // 11374
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::~VmaVector(); // 5583
	VmaJsonWriter::~VmaJsonWriter(); // 11375
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5646
	VmaJsonWriter::BeginString(
			const char* pStr);  // 5637
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 11368
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5604
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
	VmaJsonWriter::EndObject(); // 11371
} /* size: 0, variables: 2, inline expansions: 40 (0 bytes) */

// <00C943C7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11382
// member functions: 64
// member variables: 31
// struct size: 15,712
struct VmaAllocator_T {
private:
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11384 */
	void VmaAllocator_T(VmaAllocator_T* , const VmaAllocator_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11384 */
	void VmaAllocator_T(VmaAllocator_T* , VmaAllocator_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11384 */
	VmaAllocator_T& operator=(VmaAllocator_T* , const VmaAllocator_T& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11384 */
	VmaAllocator_T& operator=(VmaAllocator_T* , VmaAllocator_T& );
	bool m_UseMutex; /* 0 1 */
	uint32_t m_VulkanApiVersion; /* 4 4 */
	bool m_UseKhrDedicatedAllocation; /* 8 1 */
	bool m_UseKhrBindMemory2; /* 9 1 */
	bool m_UseExtMemoryBudget; /* 10 1 */
	bool m_UseAmdDeviceCoherentMemory; /* 11 1 */
	bool m_UseKhrBufferDeviceAddress; /* 12 1 */
	bool m_UseExtMemoryPriority; /* 13 1 */
	VkDevice m_hDevice; /* 16 8 */
	VkInstance m_hInstance; /* 24 8 */
	bool m_AllocationCallbacksSpecified; /* 32 1 */
	VkAllocationCallbacks m_AllocationCallbacks; /* 40 48 */
	VmaDeviceMemoryCallbacks m_DeviceMemoryCallbacks; /* 88 24 */
	VmaAllocationObjectAllocator m_AllocationObjectAllocator; /* 112 88 */
	uint32_t m_HeapSizeLimitMask; /* 200 4 */
	VkPhysicalDeviceProperties m_PhysicalDeviceProperties; /* 208 824 */
	VkPhysicalDeviceMemoryProperties m_MemProps; /* 1032 520 */
	VmaBlockVector * m_pBlockVectors[32]; /* 1552 256 */
	VmaDedicatedAllocationList m_DedicatedAllocations[32]; /* 1808 12032 */
	VmaCurrentBudgetData m_Budget __attribute__((__aligned__(8))); /* 13840 1120 */
	atomic<unsigned int> m_DeviceMemoryCount __attribute__((__aligned__(4))); /* 14960 4 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11414 */
	void VmaAllocator_T(VmaAllocator_T* , const VmaAllocatorCreateInfo* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11415 */
	VkResult Init(VmaAllocator_T* , const VmaAllocatorCreateInfo* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11416 */
	void ~VmaAllocator_T(VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11418 */
	const VkAllocationCallbacks* GetAllocationCallbacks(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11422 */
	const VmaVulkanFunctions& GetVulkanFunctions(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11427 */
	VkPhysicalDevice GetPhysicalDevice(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11429 */
	VkDeviceSize GetBufferImageGranularity(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11436 */
	uint32_t GetMemoryHeapCount(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11437 */
	uint32_t GetMemoryTypeCount(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11439 */
	uint32_t MemoryTypeIndexToHeapIndex(const VmaAllocator_T* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11445 */
	bool IsMemoryTypeNonCoherent(const VmaAllocator_T* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11451 */
	VkDeviceSize GetMemoryTypeMinAlignment(const VmaAllocator_T* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11458 */
	bool IsIntegratedGpu(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11463 */
	uint32_t GetGlobalMemoryTypeBits(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11465 */
	void GetBufferMemoryRequirements(const VmaAllocator_T* , VkBuffer, VkMemoryRequirements& , bool& , bool& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11470 */
	void GetImageMemoryRequirements(const VmaAllocator_T* , VkImage, VkMemoryRequirements& , bool& , bool& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11475 */
	VkResult FindMemoryTypeIndex(const VmaAllocator_T* , uint32_t, const VmaAllocationCreateInfo* , VkFlags, uint32_t* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11482 */
	VkResult AllocateMemory(VmaAllocator_T* , const VkMemoryRequirements& , bool, bool, VkBuffer, VkImage, VkFlags, const VmaAllocationCreateInfo& , VmaSuballocationType, size_t, VmaAllocation* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11495 */
	void FreeMemory(VmaAllocator_T* , size_t, const VmaAllocation* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11499 */
	void CalculateStatistics(VmaAllocator_T* , VmaTotalStatistics* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11501 */
	void GetHeapBudgets(VmaAllocator_T* , VmaBudget* , uint32_t, uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11505 */
	void PrintDetailedMap(VmaAllocator_T* , VmaJsonWriter& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11508 */
	void GetAllocationInfo(VmaAllocator_T* , VmaAllocation, VmaAllocationInfo* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11510 */
	VkResult CreatePool(VmaAllocator_T* , const VmaPoolCreateInfo* , VmaPool* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11511 */
	void DestroyPool(VmaAllocator_T* , VmaPool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11512 */
	void GetPoolStatistics(VmaAllocator_T* , VmaPool, VmaStatistics* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11513 */
	void CalculatePoolStatistics(VmaAllocator_T* , VmaPool, VmaDetailedStatistics* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11515 */
	void SetCurrentFrameIndex(VmaAllocator_T* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11516 */
	uint32_t GetCurrentFrameIndex(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11518 */
	VkResult CheckPoolCorruption(VmaAllocator_T* , VmaPool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11519 */
	VkResult CheckCorruption(VmaAllocator_T* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11522 */
	VkResult AllocateVulkanMemory(VmaAllocator_T* , const VkMemoryAllocateInfo* , VkDeviceMemory* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11524 */
	void FreeVulkanMemory(VmaAllocator_T* , uint32_t, VkDeviceSize, VkDeviceMemory);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11526 */
	VkResult BindVulkanBuffer(VmaAllocator_T* , VkDeviceMemory, VkDeviceSize, VkBuffer, const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11532 */
	VkResult BindVulkanImage(VmaAllocator_T* , VkDeviceMemory, VkDeviceSize, VkImage, const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11538 */
	VkResult Map(VmaAllocator_T* , VmaAllocation, void** );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11539 */
	void Unmap(VmaAllocator_T* , VmaAllocation);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11541 */
	VkResult BindBufferMemory(VmaAllocator_T* , VmaAllocation, VkDeviceSize, VkBuffer, const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11546 */
	VkResult BindImageMemory(VmaAllocator_T* , VmaAllocation, VkDeviceSize, VkImage, const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11552 */
	VkResult FlushOrInvalidateAllocation(VmaAllocator_T* , VmaAllocation, VkDeviceSize, VkDeviceSize, VMA_CACHE_OPERATION);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11556 */
	VkResult FlushOrInvalidateAllocations(VmaAllocator_T* , uint32_t, const VmaAllocation* , const VkDeviceSize* , const VkDeviceSize* , VMA_CACHE_OPERATION);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11562 */
	void FillAllocation(VmaAllocator_T* , VmaAllocation, uint8_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11568 */
	uint32_t GetGpuDefragmentationMemoryTypeBits(VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11571 */
	VkExternalMemoryHandleTypeFlagsKHR GetExternalMemoryHandleTypeFlags(const VmaAllocator_T* , uint32_t);
	VkDeviceSize m_PreferredLargeHeapBlockSize; /* 14968 8 */
	VkPhysicalDevice m_PhysicalDevice; /* 14976 8 */
	atomic<unsigned int> m_CurrentFrameIndex __attribute__((__aligned__(4))); /* 14984 4 */
	atomic<unsigned int> m_GpuDefragmentationMemoryTypeBits __attribute__((__aligned__(4))); /* 14988 4 */
	VkExternalMemoryHandleTypeFlagsKHR m_TypeExternalMemoryHandleTypes[32]; /* 14992 128 */
	CVMAThreadRWLock m_PoolsMutex; /* 15120 344 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11588 */
	typedef struct VmaIntrusiveLinkedList<VmaPoolListItemTraits> PoolList;
	PoolList m_Pools; /* 15464 24 */
	uint32_t m_NextPoolId; /* 15488 4 */
	VmaVulkanFunctions m_VulkanFunctions; /* 15496 208 */
	uint32_t m_GlobalMemoryTypeBits; /* 15704 4 */
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11598 */
	void ImportVulkanFunctions(VmaAllocator_T* , const VmaVulkanFunctions* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11601 */
	void ImportVulkanFunctions_Static(VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11604 */
	void ImportVulkanFunctions_Custom(VmaAllocator_T* , const VmaVulkanFunctions* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11607 */
	void ImportVulkanFunctions_Dynamic(VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11610 */
	void ValidateVulkanFunctions(VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11612 */
	VkDeviceSize CalcPreferredBlockSize(VmaAllocator_T* , uint32_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11614 */
	VkResult AllocateMemoryOfType(VmaAllocator_T* , VmaPool, VkDeviceSize, VkDeviceSize, bool, VkBuffer, VkImage, VkFlags, const VmaAllocationCreateInfo& , uint32_t, VmaSuballocationType, VmaDedicatedAllocationList& , VmaBlockVector& , size_t, VmaAllocation* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11631 */
	VkResult AllocateDedicatedMemoryPage(VmaAllocator_T* , VmaPool, VkDeviceSize, VmaSuballocationType, uint32_t, const VkMemoryAllocateInfo& , bool, bool, bool, void* , VmaAllocation* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11644 */
	VkResult AllocateDedicatedMemory(VmaAllocator_T* , VmaPool, VkDeviceSize, VmaSuballocationType, VmaDedicatedAllocationList& , uint32_t, bool, bool, bool, bool, void* , float, VkBuffer, VkImage, VkFlags, size_t, VmaAllocation* , const void* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11663 */
	void FreeDedicatedMemory(VmaAllocator_T* , VmaAllocation);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11665 */
	VkResult CalcMemTypeParams(VmaAllocator_T* , VmaAllocationCreateInfo& , uint32_t, VkDeviceSize, size_t);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11670 */
	VkResult CalcAllocationParams(VmaAllocator_T* , VmaAllocationCreateInfo& , bool, bool);
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11679 */
	uint32_t CalculateGpuDefragmentationMemoryTypeBits(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11680 */
	uint32_t CalculateGlobalMemoryTypeBits(const VmaAllocator_T* );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11682 */
	bool GetFlushOrInvalidateRange(const VmaAllocator_T* , VmaAllocation, VkDeviceSize, VkDeviceSize, VkMappedMemoryRange& );
	/* ../thirdparty/vulkan/vma/vk_mem_alloc.h:11688 */
	void UpdateVulkanBudget(VmaAllocator_T* );
} __attribute__((__aligned__(8)));

// <00CE2B16> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11418
inline void VmaAllocator_T::GetAllocationCallbacks()
{
} /* size: 0 */

// <00CE2AFD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11422
inline void VmaAllocator_T::GetVulkanFunctions()
{
} /* size: 0 */

// <00CE2AE4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11427
inline void VmaAllocator_T::GetPhysicalDevice()
{
} /* size: 0 */

// <00CE2ACB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11429
inline void VmaAllocator_T::GetBufferImageGranularity()
{
} /* size: 0 */

// <00CE2AB2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11436
inline void VmaAllocator_T::GetMemoryHeapCount()
{
} /* size: 0 */

// <00CE2A99> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11437
inline void VmaAllocator_T::GetMemoryTypeCount()
{
} /* size: 0 */

// <00CE2A73> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11439
inline void VmaAllocator_T::MemoryTypeIndexToHeapIndex(uint32_t memTypeIndex)
{
} /* size: 0 */

// <00CE2A4D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11445
inline void VmaAllocator_T::IsMemoryTypeNonCoherent(uint32_t memTypeIndex)
{
} /* size: 0 */

// <00CE2A27> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11451
inline void VmaAllocator_T::GetMemoryTypeMinAlignment(uint32_t memTypeIndex)
{
} /* size: 0 */

// <00CE2A0E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11458
inline void VmaAllocator_T::IsIntegratedGpu()
{
} /* size: 0 */

// <00CE29F5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11463
inline void VmaAllocator_T::GetGlobalMemoryTypeBits()
{
} /* size: 0 */

// <00CE29CF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11571
inline void VmaAllocator_T::GetExternalMemoryHandleTypeFlags(uint32_t memTypeIndex)
{
} /* size: 0 */

// <00CE2995> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11694
void* VmaMalloc(VmaAllocator hAllocator, size_t size, size_t alignment)
{
} /* size: 0 */

// <00CE296C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11699
void VmaFree(VmaAllocator hAllocator, void* ptr)
{
} /* size: 0 */

// <00CBD418> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11705
VmaBlockMetadata_TLSF* VmaAllocate<VmaBlockMetadata_TLSF>(VmaAllocator hAllocator)
{
} /* size: 0 */

// <00CBD3F1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11705
VmaBlockMetadata_Linear* VmaAllocate<VmaBlockMetadata_Linear>(VmaAllocator hAllocator)
{
} /* size: 0 */

// <00CBCFD1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11705
VmaDeviceMemoryBlock* VmaAllocate<VmaDeviceMemoryBlock>(VmaAllocator hAllocator)
{
} /* size: 0 */

// <00CBCBD1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11705
VmaBlockVector* VmaAllocate<VmaBlockVector>(VmaAllocator hAllocator)
{
} /* size: 0 */

// <00CBCA3E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11705
VmaPool_T* VmaAllocate<VmaPool_T>(VmaAllocator hAllocator)
{
} /* size: 0 */

// <00CBC690> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11705
VmaDefragmentationContext_T* VmaAllocate<VmaDefragmentationContext_T>(VmaAllocator hAllocator)
{
} /* size: 0 */

// <00CBCEB6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11711
StateBalanced* VmaAllocateArray<VmaDefragmentationContext_T::StateBalanced>(VmaAllocator hAllocator, size_t count)
{
} /* size: 0 */

// <00CBCE82> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11711
StateExtensive* VmaAllocateArray<VmaDefragmentationContext_T::StateExtensive>(VmaAllocator hAllocator, size_t count)
{
} /* size: 0 */

// <00CBD3C1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11717
void vma_delete<VmaBlockMetadata>(VmaAllocator hAllocator, VmaBlockMetadata* ptr)
{
} /* size: 0 */

// <00CBD239> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11717
void vma_delete<VmaDeviceMemoryBlock>(VmaAllocator hAllocator, VmaDeviceMemoryBlock* ptr)
{
} /* size: 0 */

// <00CBCBA1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11717
void vma_delete<VmaBlockVector>(VmaAllocator hAllocator, VmaBlockVector* ptr)
{
} /* size: 0 */

// <00CBCA0E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11717
void vma_delete<VmaPool_T>(VmaAllocator hAllocator, VmaPool_T* ptr)
{
} /* size: 0 */

// <00CBC660> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11717
void vma_delete<VmaDefragmentationContext_T>(VmaAllocator hAllocator, VmaDefragmentationContext_T* ptr)
{
} /* size: 0 */

// <00CE2870> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11739
// function calls: 4
void VmaDeviceMemoryBlock::VmaDeviceMemoryBlock(VmaAllocator hAllocator)
{
	VmaMappingHysteresis::VmaMappingHysteresis(); // 11745
	__mutex_base::__mutex_base(); // 106
	mutex::mutex(); // 2926
	VmaMutex::VmaMutex(); // 11745
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00CE2847> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11739
void VmaDeviceMemoryBlock::VmaDeviceMemoryBlock(VmaAllocator hAllocator)
{
} /* size: 0 */

// <00CE2819> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11747
void VmaDeviceMemoryBlock::~VmaDeviceMemoryBlock()
{
} /* size: 0 */

// <00CE1FF5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11753
// function calls: 26
void VmaDeviceMemoryBlock::Init(VmaAllocator hAllocator, VmaPool hParentPool, uint32_t newMemoryTypeIndex, VkDeviceMemory newMemory, VkDeviceSize newSize, uint32_t id, uint32_t algorithm, VkDeviceSize bufferImageGranularity)
{
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 11696
	VmaMalloc(VmaAllocator hAllocator,
			size_t size,
			size_t alignment);  // 11707
	VmaAllocate<VmaBlockMetadata_TLSF>(VmaAllocator hAllocator); // 11773
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 11696
	VmaMalloc(VmaAllocator hAllocator,
			size_t size,
			size_t alignment);  // 11707
	VmaAllocate<VmaBlockMetadata_TLSF>(VmaAllocator hAllocator); // 11782
	VmaAllocator_T::GetAllocationCallbacks(); // 11783
	VmaBlockMetadata::VmaBlockMetadata(
			const VkAllocationCallbacks* pAllocationCallbacks,
			VkDeviceSize bufferImageGranularity,
			bool isVirtual);  // 10085
	VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 4510
	VmaVector(const VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaBlockMetad this,
			const VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>& allocator);  // 4510
	VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::VmaPoolAllocator(
			const VkAllocationCallbacks* pAllocationCallbacks,
			uint32_t firstBlockCapacity);  // 10083
	VmaBlockBufferImageGranularity::VmaBlockBufferImageGranularity(
					VkDeviceSize bufferImageGranularity);  // 10085
	VmaBlockMetadata_TLSF::VmaBlockMetadata_TLSF(
				const VkAllocationCallbacks* pAllocationCallbacks,
				VkDeviceSize bufferImageGranularity,
				bool isVirtual);  // 11783
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 11696
	VmaMalloc(VmaAllocator hAllocator,
			size_t size,
			size_t alignment);  // 11707
	VmaAllocate<VmaBlockMetadata_Linear>(VmaAllocator hAllocator); // 11777
	VmaAllocator_T::GetAllocationCallbacks(); // 11778
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::VmaVector(
			const VmaStlAllocator<VmaSuballocation>& allocator);  // 7748
	VmaBlockMetadata::VmaBlockMetadata(
			const VkAllocationCallbacks* pAllocationCallbacks,
			VkDeviceSize bufferImageGranularity,
			bool isVirtual);  // 7754
	VmaStlAllocator<VmaSuballocation>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 7748
	VmaStlAllocator<VmaSuballocation>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 7749
	VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::VmaVector(
			const VmaStlAllocator<VmaSuballocation>& allocator);  // 7749
	VmaBlockMetadata_Linear::VmaBlockMetadata_Linear(
				const VkAllocationCallbacks* pAllocationCallbacks,
				VkDeviceSize bufferImageGranularity,
				bool isVirtual);  // 11778
	VmaAllocator_T::GetAllocationCallbacks(); // 11774
	VmaBlockMetadata::VmaBlockMetadata(
			const VkAllocationCallbacks* pAllocationCallbacks,
			VkDeviceSize bufferImageGranularity,
			bool isVirtual);  // 10085
	VmaBlockMetadata_TLSF::VmaBlockMetadata_TLSF(
				const VkAllocationCallbacks* pAllocationCallbacks,
				VkDeviceSize bufferImageGranularity,
				bool isVirtual);  // 11774
} /* size: 639, inline expansions: 26 (1141 bytes) */

// <00CE1E89> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11788
// function calls: 4
void VmaDeviceMemoryBlock::Destroy(VmaAllocator allocator)
{
	VmaBlockMetadata::GetSize(); // 11798
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 11701
	VmaFree(VmaAllocator hAllocator,
		void* ptr);  // 11722
	vma_delete<VmaBlockMetadata>(VmaAllocator hAllocator,
					VmaBlockMetadata* ptr);  // 11801
} /* size: 146, inline expansions: 4 (101 bytes) */

// <00CE1C59> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11805
// variable: 1
// function calls: 10
void VmaDeviceMemoryBlock::PostAlloc(VmaAllocator hAllocator)
{
	VmaMutexLock lock; // 11807
	__gthread_mutex_lock(__gthread_mutex_t* __mutex); // 115
	mutex::lock(); // 2927
	VmaMutex::Lock(); // 3996
	VmaMutexLock::VmaMutexLock(
			VmaMutex& mutex,
			bool useMutex);  // 11807
	VmaMappingHysteresis::PostMinorCounter(); // 5885
	VmaMappingHysteresis::PostAlloc(); // 11808
	__gthread_mutex_unlock(__gthread_mutex_t* __mutex); // 134
	mutex::unlock(); // 2928
	VmaMutex::Unlock(); // 3998
	VmaMutexLock::~VmaMutexLock(); // 11809
} /* size: 0, variables: 1, inline expansions: 10 (369 bytes) */

// <00CE1A2B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11811
// variable: 1
// function calls: 10
void VmaDeviceMemoryBlock::PostFree(VmaAllocator hAllocator)
{
	VmaMutexLock lock; // 11813
	__gthread_mutex_lock(__gthread_mutex_t* __mutex); // 115
	mutex::lock(); // 2927
	VmaMutex::Lock(); // 3996
	VmaMutexLock::VmaMutexLock(
			VmaMutex& mutex,
			bool useMutex);  // 11813
	VmaMappingHysteresis::PostMinorCounter(); // 5907
	VmaMappingHysteresis::PostFree(); // 11814
	__gthread_mutex_unlock(__gthread_mutex_t* __mutex); // 134
	mutex::unlock(); // 2928
	VmaMutex::Unlock(); // 3998
	VmaMutexLock::~VmaMutexLock(); // 11823
} /* size: 0, variables: 1, inline expansions: 10 (348 bytes) */

// <00CE19C3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11825
// function call: 1
void VmaDeviceMemoryBlock::Validate()
{
	VmaBlockMetadata::GetSize(); // 11827
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CE185E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11833
// variables: 2
// function calls: 2
void VmaDeviceMemoryBlock::CheckCorruption(VmaAllocator hAllocator)
{
	void* pData; // 11835
	VkResult res; // 11836
	VmaDeviceMemoryBlock::Map(
		VmaAllocator hAllocator,
		uint32_t count,
		void** ppData);  // 11836
	VmaDeviceMemoryBlock::Unmap(
		VmaAllocator hAllocator,
		uint32_t count);  // 11844
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00CF6B0C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11849
// variables: 2
void VmaDeviceMemoryBlock::Map(VmaAllocator hAllocator, uint32_t count, void** ppData)
{
	VmaMutexLock lock; // 11856
	const uint32_t  oldTotalMapCount; // 11857
} /* size: 0, variables: 2 */

// <00CF552C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11849
// variables: 3
// function calls: 11
void VmaDeviceMemoryBlock::Map(VmaAllocator hAllocator, uint32_t count, void** ppData)
{
	VmaMutexLock lock; // 11856
	const uint32_t  oldTotalMapCount; // 11857
	__gthread_mutex_lock(__gthread_mutex_t* __mutex); // 115
	mutex::lock(); // 2927
	VmaMutex::Lock(); // 3996
	VmaMutexLock::VmaMutexLock(
			VmaMutex& mutex,
			bool useMutex);  // 11856
	VmaMappingHysteresis::GetExtraMapping(); // 11857
	VmaMappingHysteresis::PostMinorCounter(); // 5862
	VmaMappingHysteresis::PostMap(); // 11858
	{
		VkResult result; // 11871
	}
	__gthread_mutex_unlock(__gthread_mutex_t* __mutex); // 134
	mutex::unlock(); // 2928
	VmaMutex::Unlock(); // 3998
	VmaMutexLock::~VmaMutexLock(); // 11888
} /* size: 0, variables: 2, inline expansions: 11 (293 bytes) */

// <00CE17F2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11849
// variables: 3
void VmaDeviceMemoryBlock::Map(VmaAllocator hAllocator, uint32_t count, void** ppData)
{
	VmaMutexLock lock; // 11856
	const uint32_t  oldTotalMapCount; // 11857
	{
		VkResult result; // 11871
	}
} /* size: 0, variables: 2 */

// <00CF6B97> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11890
// variable: 1
void VmaDeviceMemoryBlock::Unmap(VmaAllocator hAllocator, uint32_t count)
{
	VmaMutexLock lock; // 11897
} /* size: 0, variables: 1 */

// <00CF52C4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11890
// variables: 2
// function calls: 11
void VmaDeviceMemoryBlock::Unmap(VmaAllocator hAllocator, uint32_t count)
{
	VmaMutexLock lock; // 11897
	__gthread_mutex_lock(__gthread_mutex_t* __mutex); // 115
	mutex::lock(); // 2927
	VmaMutex::Lock(); // 3996
	VmaMutexLock::VmaMutexLock(
			VmaMutex& mutex,
			bool useMutex);  // 11897
	{
		const uint32_t  totalMapCount; // 11901
		VmaMappingHysteresis::GetExtraMapping(); // 11901
		VmaMappingHysteresis::PostMinorCounter(); // 5874
		VmaMappingHysteresis::PostUnmap(); // 11907
	}
	__gthread_mutex_unlock(__gthread_mutex_t* __mutex); // 134
	mutex::unlock(); // 2928
	VmaMutex::Unlock(); // 3998
	VmaMutexLock::~VmaMutexLock(); // 11913
} /* size: 0, variables: 1, inline expansions: 8 (171 bytes) */

// <00CE17A0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11890
// variables: 2
void VmaDeviceMemoryBlock::Unmap(VmaAllocator hAllocator, uint32_t count)
{
	VmaMutexLock lock; // 11897
	{
		const uint32_t  totalMapCount; // 11901
	}
} /* size: 0, variables: 1 */

// <00CF6C09> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11915
// variables: 2
// function calls: 2
void VmaDeviceMemoryBlock::WriteMagicValueAfterAllocation(VmaAllocator hAllocator, VkDeviceSize allocOffset, VkDeviceSize allocSize)
{
	void* pData; // 11919
	VkResult res; // 11920
	VmaDeviceMemoryBlock::Map(
		VmaAllocator hAllocator,
		uint32_t count,
		void** ppData);  // 11920
	VmaDeviceMemoryBlock::Unmap(
		VmaAllocator hAllocator,
		uint32_t count);  // 11928
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00CE1743> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11915
// variables: 2
void VmaDeviceMemoryBlock::WriteMagicValueAfterAllocation(VmaAllocator hAllocator, VkDeviceSize allocOffset, VkDeviceSize allocSize)
{
	void* pData; // 11919
	VkResult res; // 11920
} /* size: 0, variables: 2 */

// <00CE16E6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11932
// variables: 2
void VmaDeviceMemoryBlock::ValidateMagicValueAfterAllocation(VmaAllocator hAllocator, VkDeviceSize allocOffset, VkDeviceSize allocSize)
{
	void* pData; // 11936
	VkResult res; // 11937
} /* size: 0, variables: 2 */

// <00CE1405> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11952
// variables: 2
// function calls: 10
void VmaDeviceMemoryBlock::BindBufferMemory(const VmaAllocator hAllocator, const VmaAllocation hAllocation, VkDeviceSize allocationLocalOffset, VkBuffer hBuffer, const void* pNext)
{
	const VkDeviceSize  memoryOffset; // 11963
	VmaMutexLock lock; // 11965
	VmaAllocation_T::GetOffset(); // 12110
	VmaAllocation_T::GetOffset(); // 11963
	__gthread_mutex_lock(__gthread_mutex_t* __mutex); // 115
	mutex::lock(); // 2927
	VmaMutex::Lock(); // 3996
	VmaMutexLock::VmaMutexLock(
			VmaMutex& mutex,
			bool useMutex);  // 11965
	__gthread_mutex_unlock(__gthread_mutex_t* __mutex); // 134
	mutex::unlock(); // 2928
	VmaMutex::Unlock(); // 3998
	VmaMutexLock::~VmaMutexLock(); // 11967
} /* size: 0, variables: 2, inline expansions: 10 (186 bytes) */

// <00CE1124> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11969
// variables: 2
// function calls: 10
void VmaDeviceMemoryBlock::BindImageMemory(const VmaAllocator hAllocator, const VmaAllocation hAllocation, VkDeviceSize allocationLocalOffset, VkImage hImage, const void* pNext)
{
	const VkDeviceSize  memoryOffset; // 11980
	VmaMutexLock lock; // 11982
	VmaAllocation_T::GetOffset(); // 12110
	VmaAllocation_T::GetOffset(); // 11980
	__gthread_mutex_lock(__gthread_mutex_t* __mutex); // 115
	mutex::lock(); // 2927
	VmaMutex::Lock(); // 3996
	VmaMutexLock::VmaMutexLock(
			VmaMutex& mutex,
			bool useMutex);  // 11982
	__gthread_mutex_unlock(__gthread_mutex_t* __mutex); // 134
	mutex::unlock(); // 2928
	VmaMutex::Unlock(); // 3998
	VmaMutexLock::~VmaMutexLock(); // 11984
} /* size: 0, variables: 2, inline expansions: 10 (186 bytes) */

// <00CE10E9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:11988
void VmaAllocation_T::VmaAllocation_T(bool mappingAllowed)
{
} /* size: 0 */

// <00CE1092> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12007
void VmaAllocation_T::~VmaAllocation_T()
{
} /* size: 0 */

// <00CF6D68> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12015
void VmaAllocation_T::InitBlockAllocation(VmaDeviceMemoryBlock* block, VmaAllocHandle allocHandle, VkDeviceSize alignment, VkDeviceSize size, uint32_t memoryTypeIndex, VmaSuballocationType suballocationType, bool mapped)
{
} /* size: 0 */

// <00CF6DC5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12040
void VmaAllocation_T::InitDedicatedAllocation(VmaPool hParentPool, uint32_t memoryTypeIndex, VkDeviceMemory hMemory, VmaSuballocationType suballocationType, void* pMappedData, VkDeviceSize size)
{
} /* size: 0 */

// <00CE0C42> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12067
// variables: 3
// function calls: 11
void VmaAllocation_T::SetName(VmaAllocator hAllocator, const char* pName)
{
	VmaAllocator_T::GetAllocationCallbacks(); // 12301
	{
		const size_t  len; // 3896
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 3862
		vma_delete_array<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					char* ptr,
					size_t count);  // 3897
	}
	VmaFreeString(const VkAllocationCallbacks* allocs,
			char* str);  // 12301
	VmaAllocation_T::FreeName(
		VmaAllocator hAllocator);  // 12071
	VmaAllocator_T::GetAllocationCallbacks(); // 12074
	{
		const size_t  len; // 3870
		const char* result; // 3871
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					size_t count);  // 3871
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3872
	}
	VmaCreateStringCopy(const VkAllocationCallbacks* allocs,
				const char* srcStr);  // 3866
	VmaCreateStringCopy(const VkAllocationCallbacks* allocs,
				const char* srcStr);  // 12074
} /* size: 186, inline expansions: 6 (255 bytes) */

// <00CE0AC1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12077
// function calls: 3
void VmaAllocation_T::SwapBlockAllocation(VmaAllocator hAllocator, VmaAllocation allocation)
{
	swap<VmaAllocation_T::BlockAllocation>(BlockAllocation& __a,
						BlockAllocation& __b);  // 12087
	swap<unsigned int>(unsigned int& __a,
				unsigned int& __b);  // 12091
	VmaDeviceMemoryBlock::Unmap(
		VmaAllocator hAllocator,
		uint32_t count);  // 12084
} /* size: 122, inline expansions: 3 (44 bytes) */

// <00CF6E1A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12096
void VmaAllocation_T::GetAllocHandle()
{
} /* size: 0 */

// <00CF6E43> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12110
// function call: 1
void VmaAllocation_T::GetOffset()
{
	VmaAllocation_T::GetOffset(); // 12110
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CE0A89> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12110
void VmaAllocation_T::GetOffset()
{
} /* size: 0 */

// <00CF6E9B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12124
// function call: 1
void VmaAllocation_T::GetParentPool()
{
	VmaDeviceMemoryBlock::GetParentPool(); // 12129
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CE0A6D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12124
void VmaAllocation_T::GetParentPool()
{
} /* size: 0 */

// <00CF6EF5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12138
// function call: 1
void VmaAllocation_T::GetMemory()
{
	VmaDeviceMemoryBlock::GetDeviceMemory(); // 12143
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CE0A51> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12138
void VmaAllocation_T::GetMemory()
{
} /* size: 0 */

// <00CF6F4F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12152
// variable: 1
// function calls: 3
void* VmaAllocation_T::GetMappedData()
{
	VmaAllocation_T::IsPersistentMap(); // 12157
	{
		void* pBlockData; // 12159
		VmaDeviceMemoryBlock::GetMappedData(); // 12159
	}
	VmaAllocation_T::GetMappedData(); // 12152
} /* size: 85, inline expansions: 2 (7 bytes) */

// <00CE0A21> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12152
// variable: 1
void* VmaAllocation_T::GetMappedData()
{
	{
		void* pBlockData; // 12159
	}
} /* size: 0 */

// <00CF700E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12177
void VmaAllocation_T::BlockAllocMap()
{
} /* size: 0 */

// <00CF7037> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12192
void VmaAllocation_T::BlockAllocUnmap()
{
} /* size: 0 */

// <00CF7060> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12206
// variable: 1
// function calls: 2
void VmaAllocation_T::DedicatedAllocMap(VmaAllocator hAllocator, void** ppData)
{
	VmaAllocation_T::IsPersistentMap(); // 12211
	{
		VkResult result; // 12228
	}
	VmaAllocation_T::DedicatedAllocMap(
				VmaAllocator hAllocator,
				void** ppData);  // 12206
} /* size: 122, inline expansions: 2 (61 bytes) */

// <00CE09A4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12206
// variable: 1
void VmaAllocation_T::DedicatedAllocMap(VmaAllocator hAllocator, void** ppData)
{
	{
		VkResult result; // 12228
	}
} /* size: 0 */

// <00CF7156> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12244
// function calls: 2
void VmaAllocation_T::DedicatedAllocUnmap(VmaAllocator hAllocator)
{
	VmaAllocation_T::IsPersistentMap(); // 12251
	VmaAllocation_T::DedicatedAllocUnmap(
				VmaAllocator hAllocator);  // 12244
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CE097B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12244
void VmaAllocation_T::DedicatedAllocUnmap(VmaAllocator hAllocator)
{
} /* size: 0 */

// <00CF7205> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12266
void VmaAllocation_T::InitBufferImageUsage(uint32_t bufferImageUsage)
{
} /* size: 0 */

// <00CDFAFF> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12272
// function calls: 51
void VmaAllocation_T::PrintParameters(VmaJsonWriter& json)
{
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 12274
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 12275
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 12277
	VmaStringBuilder::AddNumber(
			uint64_t num);  // 5737
	VmaJsonWriter::WriteNumber(
			uint64_t n);  // 12278
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 12279
	VmaStringBuilder::AddNumber(
			uint32_t num);  // 5730
	VmaJsonWriter::WriteNumber(
			uint32_t n);  // 12280
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 12284
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5646
	VmaJsonWriter::BeginString(
			const char* pStr);  // 12285
	snprintf(char* __s,
		size_t __n,
		const char* __fmt, ...);  // 2917
	VmaPtrToStr(char* outStr,
			size_t strLen,
			const void* ptr);  // 5488
	VmaStringBuilder::AddPointer(
			const void* ptr);  // 5712
	VmaJsonWriter::ContinueString_Pointer(
				const void* ptr);  // 12286
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 12287
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 12291
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 12292
} /* size: 752, inline expansions: 51 (1644 bytes) */

// <00CF7235> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12297
// variable: 1
// function calls: 4
void VmaAllocation_T::FreeName(VmaAllocator hAllocator)
{
	VmaAllocator_T::GetAllocationCallbacks(); // 12301
	{
		const size_t  len; // 3896
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 3862
		vma_delete_array<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					char* ptr,
					size_t count);  // 3897
	}
	VmaFreeString(const VkAllocationCallbacks* allocs,
			char* str);  // 12301
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CDFAD6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12297
void VmaAllocation_T::FreeName(VmaAllocator hAllocator)
{
} /* size: 0 */

// <00CDF893> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12308
// function calls: 6
void VmaBlockVector::VmaBlockVector(VmaAllocator hAllocator, VmaPool hParentPool, uint32_t memoryTypeIndex, VkDeviceSize preferredBlockSize, size_t minBlockCount, size_t maxBlockCount, VkDeviceSize bufferImageGranularity, bool explicitBlockSize, uint32_t algorithm, float priority, VkDeviceSize minAllocationAlignment, void* pMemoryAllocateNext)
{
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 11
	CVMAThreadRWLock::CVMAThreadRWLock(); // 12334
	VmaAllocator_T::GetAllocationCallbacks(); // 12333
	VmaVector<VmaDeviceMemoryBlock::VmaVector(
			const VmaStlAllocator<VmaDeviceMemoryBlock*>& allocator);  // 12333
	VmaStlAllocator<VmaDeviceMemoryBlock::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 12333
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00CDF7DB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12308
void VmaBlockVector::VmaBlockVector(VmaAllocator hAllocator, VmaPool hParentPool, uint32_t memoryTypeIndex, VkDeviceSize preferredBlockSize, size_t minBlockCount, size_t maxBlockCount, VkDeviceSize bufferImageGranularity, bool explicitBlockSize, uint32_t algorithm, float priority, VkDeviceSize minAllocationAlignment, void* pMemoryAllocateNext)
{
} /* size: 0 */

// <00CDF466> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12336
// variables: 2
// function calls: 14
void VmaBlockVector::~VmaBlockVector()
{
	{
		size_t i; // 12338
	}
	{
		size_t i; // 12338
		VmaVector<VmaDeviceMemoryBlock::size(); // 12338
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 11701
		VmaFree(VmaAllocator hAllocator,
			void* ptr);  // 11722
		VmaDeviceMemoryBlock::~VmaDeviceMemoryBlock(); // 11721
		vma_delete<VmaDeviceMemoryBlock>(VmaAllocator hAllocator,
						VmaDeviceMemoryBlock* ptr);  // 12341
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12340
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12341
	}
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VmaDeviceMemoryBlock::~VmaVector(); // 12343
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 11
	CVMAThreadRWLock::~CVMAThreadRWLock(); // 12343
} /* size: 268, inline expansions: 7 (315 bytes) */

// <00CDF43D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12336
// variable: 1
void VmaBlockVector::~VmaBlockVector()
{
	{
		size_t i; // 12338
	}
} /* size: 0 */

// <00CFA36C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12345
// variables: 2
void VmaBlockVector::CreateMinBlocks()
{
	{
		size_t i; // 12347
		{
			VkResult res; // 12349
		}
	}
} /* size: 0 */

// <00CDF00C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12358
// variables: 4
// function calls: 12
void VmaBlockVector::AddStatistics(VmaStatistics& inoutStats)
{
	VmaMutexLockRead lock; // 12360
	const size_t  blockCount; // 12362
	{
		uint32_t blockIndex; // 12363
		{
			const VmaDeviceMemoryBlock* pBlock; // 12365
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 12365
		}
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 16
	CVMAThreadRWLock::LockRead(); // 4012
	VmaMutexLockRead::VmaMutexLockRead(
			CVMAThreadRWLock& mutex,
			bool useMutex);  // 12360
	VmaVector<VmaDeviceMemoryBlock::size(); // 12362
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 21
	CVMAThreadRWLock::UnlockRead(); // 4014
	VmaMutexLockRead::~VmaMutexLockRead(); // 12370
} /* size: 541, variables: 2, inline expansions: 11 (1403 bytes) */

// <00CDEC2C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12372
// variables: 4
// function calls: 12
void VmaBlockVector::AddDetailedStatistics(VmaDetailedStatistics& inoutStats)
{
	VmaMutexLockRead lock; // 12374
	const size_t  blockCount; // 12376
	{
		uint32_t blockIndex; // 12377
		{
			const VmaDeviceMemoryBlock* pBlock; // 12379
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 12379
		}
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 16
	CVMAThreadRWLock::LockRead(); // 4012
	VmaMutexLockRead::VmaMutexLockRead(
			CVMAThreadRWLock& mutex,
			bool useMutex);  // 12374
	VmaVector<VmaDeviceMemoryBlock::size(); // 12376
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 21
	CVMAThreadRWLock::UnlockRead(); // 4014
	VmaMutexLockRead::~VmaMutexLockRead(); // 12384
} /* size: 541, variables: 2, inline expansions: 11 (1403 bytes) */

// <00CDE904> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12386
// variable: 1
// function calls: 11
void VmaBlockVector::IsEmpty()
{
	VmaMutexLockRead lock; // 12388
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 16
	CVMAThreadRWLock::LockRead(); // 4012
	VmaMutexLockRead::VmaMutexLockRead(
			CVMAThreadRWLock& mutex,
			bool useMutex);  // 12388
	VmaVector<VmaDeviceMemoryBlock::empty(); // 12389
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 21
	CVMAThreadRWLock::UnlockRead(); // 4014
	VmaMutexLockRead::~VmaMutexLockRead(); // 12390
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <00CF7353> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12392
// variable: 1
void VmaBlockVector::IsCorruptionDetectionEnabled()
{
	const uint32_t  requiredMemFlags; // 12394
} /* size: 0, variables: 1 */

// <00CDE5A3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12401
// variables: 3
// function calls: 6
void VmaBlockVector::Allocate(VkDeviceSize size, VkDeviceSize alignment, const VmaAllocationCreateInfo& createInfo, VmaSuballocationType suballocType, size_t allocationCount, VmaAllocation* pAllocations)
{
	size_t allocIndex; // 12409
	VkResult res; // 12410
	{
		VmaMutexLockWrite lock; // 12421
		CVMAThreadRWLock::LockWrite(); // 4028
		VmaMutexLockWrite::VmaMutexLockWrite(
					CVMAThreadRWLock& mutex,
					bool useMutex);  // 12421
		CVMAThreadRWLock::UnlockWrite(); // 4030
		VmaMutexLockWrite::~VmaMutexLockWrite(); // 12435
	}
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 12412
	memset(void* __dest,
		int __ch,
		size_t __len);  // 12442
} /* size: 390, variables: 2, inline expansions: 2 (58 bytes) */

// <00CDDC85> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12448
// variables: 33
// function calls: 17
void VmaBlockVector::AllocatePage(VkDeviceSize size, VkDeviceSize alignment, const VmaAllocationCreateInfo& createInfo, VmaSuballocationType suballocType, VmaAllocation* pAllocation)
{
	const bool  isUpperAddress; // 12455
	VkDeviceSize freeMemory; // 12457
	const bool  canFallbackToDedicated; // 12465
	const bool  canCreateNewBlock; // 12467
	uint32_t strategy; // 12471
	{
		const uint32_t  heapIndex; // 12459
		VmaBudget heapBudget; // 12460
		VmaAllocator_T::MemoryTypeIndexToHeapIndex(
						uint32_t memTypeIndex);  // 12459
	}
	{
		const VmaDeviceMemoryBlock* pCurrBlock; // 12492
		VkResult res; // 12494
		VmaVector<VmaDeviceMemoryBlock::back(); // 12492
	}
	{
		const bool  isHostVisible; // 12508
		{
			const bool  isMappingAllowed; // 12512
			{
				size_t mappingI; // 12520
				{
					size_t blockIndex; // 12523
					{
						const VmaDeviceMemoryBlock* pCurrBlock; // 12525
						const bool  isBlockMapped; // 12527
						{
							VkResult res; // 12530
						}
						VmaVector<VmaDeviceMemoryBlock::operator[](
								size_t index);  // 12525
						VmaDeviceMemoryBlock::GetMappedData(); // 12527
					}
					VmaVector<VmaDeviceMemoryBlock::size(); // 12523
				}
			}
		}
		{
			size_t blockIndex; // 12545
			{
				const VmaDeviceMemoryBlock* pCurrBlock; // 12547
				VkResult res; // 12549
				VmaVector<VmaDeviceMemoryBlock::operator[](
						size_t index);  // 12547
			}
			VmaVector<VmaDeviceMemoryBlock::size(); // 12545
		}
	}
	{
		size_t blockIndex; // 12563
		{
			const VmaDeviceMemoryBlock* pCurrBlock; // 12565
			VkResult res; // 12567
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 12565
		}
	}
	{
		VkDeviceSize newBlockSize; // 12582
		uint32_t newBlockSizeShift; // 12583
		const uint32_t  NEW_BLOCK_SIZE_SHIFT_MAX; // 12584
		size_t newBlockIndex; // 12605
		VkResult res; // 12606
		{
			const VkDeviceSize  maxExistingBlockSize; // 12589
			{
				uint32_t i; // 12590
				{
					const VkDeviceSize  smallerNewBlockSize; // 12592
				}
			}
			{
				size_t i; // 12732
				VmaVector<VmaDeviceMemoryBlock::size(); // 12732
				VmaVector<VmaDeviceMemoryBlock::operator[](
						size_t index);  // 12734
				VmaBlockMetadata::GetSize(); // 12734
				max<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 12734
			}
			VmaBlockVector::CalcMaxBlockSize(); // 12589
		}
		{
			const VkDeviceSize  smallerNewBlockSize; // 12613
		}
		{
			const VmaDeviceMemoryBlock* pBlock; // 12630
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 12630
		}
	}
	VmaBlockVector::HasExplicitBlockSize(); // 12465
	VmaVector<VmaDeviceMemoryBlock::size(); // 12469
	VmaVector<VmaDeviceMemoryBlock::empty(); // 12490
} /* size: 1705, variables: 5, inline expansions: 3 (7 bytes) */

// <00CDD43D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12652
// variables: 13
// function calls: 26
void VmaBlockVector::Free(const VmaAllocation hAllocation)
{
	VmaDeviceMemoryBlock* pBlockToDelete; // 12654
	bool budgetExceeded; // 12656
	{
		const uint32_t  heapIndex; // 12658
		VmaBudget heapBudget; // 12659
		VmaAllocator_T::MemoryTypeIndexToHeapIndex(
						uint32_t memTypeIndex);  // 12658
	}
	{
		VmaMutexLockWrite lock; // 12666
		VmaDeviceMemoryBlock* pBlock; // 12668
		const bool  hadEmptyBlockBeforeFree; // 12682
		const bool  canDeleteBlock; // 12689
		{
			VkResult res; // 12672
		}
		{
			VmaDeviceMemoryBlock* pLastBlock; // 12705
			VmaVector<VmaDeviceMemoryBlock::back(); // 12705
			VmaVector<VmaDeviceMemoryBlock::size(); // 4138
			VmaVector<VmaDeviceMemoryBlock::pop_back(); // 12709
		}
		CVMAThreadRWLock::LockWrite(); // 4028
		VmaMutexLockWrite::VmaMutexLockWrite(
					CVMAThreadRWLock& mutex,
					bool useMutex);  // 12666
		VmaAllocation_T::GetBlock(); // 12668
		VmaAllocation_T::IsPersistentMap(); // 12677
		{
			size_t index; // 12932
			size_t count; // 12932
			VmaVector<VmaDeviceMemoryBlock::size(); // 12932
			{
				const VmaDeviceMemoryBlock* pBlock; // 12934
				VmaVector<VmaDeviceMemoryBlock::operator[](
						size_t index);  // 12934
			}
		}
		VmaBlockVector::HasEmptyBlock(); // 12682
		VmaAllocation_T::GetAllocHandle(); // 12683
		VmaVector<VmaDeviceMemoryBlock::size(); // 12689
		CVMAThreadRWLock::UnlockWrite(); // 4030
		VmaMutexLockWrite::~VmaMutexLockWrite(); // 12714
		VmaDeviceMemoryBlock::Unmap(
			VmaAllocator hAllocator,
			uint32_t count);  // 12679
	}
	VmaAllocation_T::GetSize(); // 12725
	VmaAllocator_T::MemoryTypeIndexToHeapIndex(
					uint32_t memTypeIndex);  // 12725
	__atomic_base<long unsigned int>::operator-=(
			__int_type __i);  // 11198
	__atomic_base<unsigned int>::operator--(); // 11200
	__atomic_base<unsigned int>::operator++(); // 11202
	VmaCurrentBudgetData::RemoveAllocation(
			uint32_t heapIndex,
			VkDeviceSize allocationSize);  // 12725
	VmaDeviceMemoryBlock::~VmaDeviceMemoryBlock(); // 11721
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 11701
	VmaFree(VmaAllocator hAllocator,
		void* ptr);  // 11722
	vma_delete<VmaDeviceMemoryBlock>(VmaAllocator hAllocator,
					VmaDeviceMemoryBlock* ptr);  // 12722
} /* size: 714, variables: 2, inline expansions: 10 (207 bytes) */

// <00CF7383> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12729
// variables: 2
// function calls: 4
void VmaBlockVector::CalcMaxBlockSize()
{
	VkDeviceSize result; // 12731
	{
		size_t i; // 12732
		VmaVector<VmaDeviceMemoryBlock::size(); // 12732
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12734
		VmaBlockMetadata::GetSize(); // 12734
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 12734
	}
} /* size: 0, variables: 1 */

// <00CDD407> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12729
// variables: 2
void VmaBlockVector::CalcMaxBlockSize()
{
	VkDeviceSize result; // 12731
	{
		size_t i; // 12732
	}
} /* size: 0, variables: 1 */

// <00CDD24D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12743
// variable: 1
// function calls: 5
void VmaBlockVector::Remove(VmaDeviceMemoryBlock* pBlock)
{
	{
		uint32_t blockIndex; // 12745
		VmaVector<VmaDeviceMemoryBlock::size(); // 12745
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12747
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 4294
		VmaVector<VmaDeviceMemoryBlock::remove(
			size_t index);  // 4309
		VmaVectorRemove<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >(VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >& vec,
												size_t index);  // 12749
	}
} /* size: 189 */

// <00CF749A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12756
// variable: 1
// function calls: 7
void VmaBlockVector::IncrementallySortBlocks()
{
	{
		size_t i; // 12763
		VmaVector<VmaDeviceMemoryBlock::size(); // 12763
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12765
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12765
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12767
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12767
		swap<VmaDeviceMemoryBlock*>(VmaDeviceMemoryBlock *& __a,
						VmaDeviceMemoryBlock *& __b);  // 12767
	}
	VmaBlockVector::IncrementallySortBlocks(); // 12756
} /* size: 177, inline expansions: 1 (116 bytes) */

// <00CDD224> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12756
// variable: 1
void VmaBlockVector::IncrementallySortBlocks()
{
	{
		size_t i; // 12763
	}
} /* size: 0 */

// <00CDCDD4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12774
// variables: 4
// function calls: 15
void VmaBlockVector::SortByFreeSize()
{
	VmaVector<VmaDeviceMemoryBlock::end(); // 12776
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	{
		VmaDeviceMemoryBlock** __i; // 1798
		operator()(const class* __closure,
				VmaDeviceMemoryBlock* b1,
				VmaDeviceMemoryBlock* b2); // 240
		_Val_comp_iter<VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock::operator(
										VmaDeviceMemoryBlock *& __val,
										VmaDeviceMemoryBlock** __it); // 1758
		__unguarded_linear_insert<VmaDeviceMemoryBlock**, __gnu_cxx::__ops::_Val_comp_iter<VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock*, VmaDeviceMemoryBlock*)> > >(VmaDeviceMemoryBlock** __last,
																_Val_comp_iter<VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock*, VmaDeviceMemoryBlock*)> > __comp); // 1799
	}
	__unguarded_insertion_sort<VmaDeviceMemoryBlock**, __gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock*, VmaDeviceMemoryBlock*)> > >(VmaDeviceMemoryBlock** __first,
																VmaDeviceMemoryBlock** __last,
																_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock*, VmaDeviceMemoryBlock*)> > __comp); // 1819
	__final_insertion_sort<VmaDeviceMemoryBlock**, __gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock*, VmaDeviceMemoryBlock*)> > >(VmaDeviceMemoryBlock** __first,
																VmaDeviceMemoryBlock** __last,
																_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock*, VmaDeviceMemoryBlock*)> > __comp); // 1909
	__sort<VmaDeviceMemoryBlock**, __gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock*, VmaDeviceMemoryBlock*)> > >(VmaDeviceMemoryBlock** __first,
																VmaDeviceMemoryBlock** __last,
																_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock*, VmaDeviceMemoryBlock*)> > __comp); // 4874
	sort<VmaDeviceMemoryBlock**, VmaBlockVector::SortByFreeSize()::<lambda(VmaDeviceMemoryBlock*, VmaDeviceMemoryBlock*)> >(VmaDeviceMemoryBlock** __first,
																VmaDeviceMemoryBlock** __last,
																 __comp); // 12776
} /* size: 260, inline expansions: 8 (623 bytes) */

// <00CDCC22> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12783
// variables: 2
// function call: 1
void VmaBlockVector::AllocateFromBlock(VmaDeviceMemoryBlock* pBlock, VkDeviceSize size, VkDeviceSize alignment, VmaAllocationCreateFlags allocFlags, void* pUserData, VmaSuballocationType suballocType, uint32_t strategy, VmaAllocation* pAllocation)
{
	const bool  isUpperAddress; // 12793
	VmaAllocationRequest currRequest; // 12795
	iterator::iterator(); // 12795
} /* size: 196, variables: 2, inline expansions: 1 (0 bytes) */

// <00CDC4A2> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12809
// variables: 9
// function calls: 22
void VmaBlockVector::CommitAllocationRequest(VmaAllocationRequest& allocRequest, VmaDeviceMemoryBlock* pBlock, VkDeviceSize alignment, VmaAllocationCreateFlags allocFlags, void* pUserData, VmaSuballocationType suballocType, VmaAllocation* pAllocation)
{
	const bool  mapped; // 12818
	const bool  isUserDataString; // 12819
	const bool  isMappingAllowed; // 12820
	{
		VkResult res; // 12827
		VmaDeviceMemoryBlock::Map(
			VmaAllocator hAllocator,
			uint32_t count,
			void** ppData);  // 12827
	}
	{
		VkResult res; // 12856
	}
	__gthread_mutex_lock(__gthread_mutex_t* __mutex); // 115
	mutex::lock(); // 2927
	VmaMutex::Lock(); // 3996
	VmaMutexLock::VmaMutexLock(
			VmaMutex& mutex,
			bool useMutex);  // 11230
	{
		size_t i; // 4526
		size(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::It this); // 4526
		{
			ItemBlock& block; // 4528
			operator[](const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this,
					size_t index);  // 4528
			{
				const union Item* pItem; // 4532
				VmaAllocation_T* result; // 4534
				VmaAllocation_T::VmaAllocation_T(
						bool mappingAllowed);  // 4535
			}
		}
	}
	VmaAllocation_T::VmaAllocation_T(
			bool mappingAllowed);  // 4545
	VmaPoolAllocator<VmaAllocation_T>::Alloc<bool const&>(); // 11231
	__gthread_mutex_unlock(__gthread_mutex_t* __mutex); // 134
	mutex::unlock(); // 2928
	VmaMutex::Unlock(); // 3998
	VmaMutexLock::~VmaMutexLock(); // 11232
	VmaAllocationObjectAllocator::Allocate<bool const&>(); // 12834
	VmaAllocation_T::InitBlockAllocation(
				VmaDeviceMemoryBlock* block,
				VmaAllocHandle allocHandle,
				VkDeviceSize alignment,
				VkDeviceSize size,
				uint32_t memoryTypeIndex,
				VmaSuballocationType suballocationType,
				bool mapped);  // 12836
	VmaAllocation_T::SetUserData(
			VmaAllocator hAllocator,
			void* pUserData);  // 12848
	VmaAllocator_T::MemoryTypeIndexToHeapIndex(
					uint32_t memTypeIndex);  // 12849
	__atomic_base<long unsigned int>::operator+=(
			__int_type __i);  // 11188
	__atomic_base<unsigned int>::operator++(); // 11189
	__atomic_base<unsigned int>::operator++(); // 11191
	VmaCurrentBudgetData::AddAllocation(
			uint32_t heapIndex,
			VkDeviceSize allocationSize);  // 12849
} /* size: 0, variables: 3, inline expansions: 18 (793 bytes) */

// <00CDC01F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12863
// variables: 7
// function calls: 15
void VmaBlockVector::CreateBlock(VkDeviceSize blockSize, size_t* pNewBlockIndex)
{
	VkMemoryAllocateInfo allocInfo; // 12865
	VkMemoryAllocateFlagsInfoKHR allocFlagsInfo; // 12872
	VkMemoryPriorityAllocateInfoEXT priorityInfo; // 12881
	VkExportMemoryAllocateInfoKHR exportMemoryAllocInfo; // 12892
	VkDeviceMemory mem; // 12900
	VkResult res; // 12901
	const VmaDeviceMemoryBlock* pBlock; // 12910
	VmaPnextChainPushFront<VkMemoryAllocateInfo, VkMemoryAllocateFlagsInfo>(VkMemoryAllocateInfo* mainStruct,
										VkMemoryAllocateFlagsInfo* newStruct);  // 12876
	VmaPnextChainPushFront<VkMemoryAllocateInfo, VkMemoryPriorityAllocateInfoEXT>(VkMemoryAllocateInfo* mainStruct,
											VkMemoryPriorityAllocateInfoEXT* newStruct);  // 12886
	VmaAllocator_T::GetExternalMemoryHandleTypeFlags(
					uint32_t memTypeIndex);  // 12893
	VmaPnextChainPushFront<VkMemoryAllocateInfo, VkExportMemoryAllocateInfo>(VkMemoryAllocateInfo* mainStruct,
										VkExportMemoryAllocateInfo* newStruct);  // 12896
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 11696
	VmaMalloc(VmaAllocator hAllocator,
			size_t size,
			size_t alignment);  // 11707
	VmaAllocate<VmaDeviceMemoryBlock>(VmaAllocator hAllocator); // 12910
	VmaMappingHysteresis::VmaMappingHysteresis(); // 11745
	__mutex_base::__mutex_base(); // 106
	mutex::mutex(); // 2926
	VmaMutex::VmaMutex(); // 11745
	VmaDeviceMemoryBlock::VmaDeviceMemoryBlock(
				VmaAllocator hAllocator);  // 12910
	VmaVector<VmaDeviceMemoryBlock::size(); // 4204
	VmaVector<VmaDeviceMemoryBlock::push_back(
			VmaDeviceMemoryBlock* const& src);  // 12921
	VmaVector<VmaDeviceMemoryBlock::size(); // 12924
} /* size: 644, variables: 7, inline expansions: 15 (519 bytes) */

// <00CF764A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12930
// variables: 3
// function calls: 2
void VmaBlockVector::HasEmptyBlock()
{
	{
		size_t index; // 12932
		size_t count; // 12932
		VmaVector<VmaDeviceMemoryBlock::size(); // 12932
		{
			const VmaDeviceMemoryBlock* pBlock; // 12934
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 12934
		}
	}
} /* size: 0 */

// <00CDBFD8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12930
// variables: 3
void VmaBlockVector::HasEmptyBlock()
{
	{
		size_t index; // 12932
		size_t count; // 12932
		{
			const VmaDeviceMemoryBlock* pBlock; // 12934
		}
	}
} /* size: 0 */

// <00CDB358> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12944
// variables: 2
// function calls: 45
void VmaBlockVector::PrintDetailedMap(VmaJsonWriter& json)
{
	VmaMutexLockRead lock; // 12946
	{
		size_t i; // 12950
		VmaVector<VmaDeviceMemoryBlock::size(); // 12950
		VmaStringBuilder::AddNumber(
				uint32_t num);  // 5700
		VmaJsonWriter::ContinueString(
				uint32_t n);  // 12953
		VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
		VmaVector<char, VmaStlAllocator<char> >::push_back(
				const char& src);  // 5436
		VmaStringBuilder::Add(
			char ch);  // 5646
		VmaJsonWriter::BeginString(
				const char* pStr);  // 12952
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12953
		VmaDeviceMemoryBlock::GetId(); // 12953
		VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
		VmaVector<char, VmaStlAllocator<char> >::push_back(
				const char& src);  // 5436
		VmaStringBuilder::Add(
			char ch);  // 5722
		VmaJsonWriter::EndString(
				const char* pStr);  // 12954
		VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
		VmaVector<char, VmaStlAllocator<char> >::push_back(
				const char& src);  // 5436
		VmaStringBuilder::Add(
			char ch);  // 5722
		VmaJsonWriter::EndString(
				const char* pStr);  // 5638
		VmaJsonWriter::WriteString(
				const char* pStr);  // 12957
		VmaStringBuilder::AddNumber(
				uint32_t num);  // 5730
		VmaJsonWriter::WriteNumber(
				uint32_t n);  // 12958
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12958
		VmaDeviceMemoryBlock::GetMapRefCount(); // 12958
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 12960
		VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
		VmaVector<char, VmaStlAllocator<char> >::push_back(
				const char& src);  // 5436
		VmaStringBuilder::Add(
			char ch);  // 5604
		VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
		VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
		VmaJsonWriter::EndObject(); // 12961
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 16
	CVMAThreadRWLock::LockRead(); // 4012
	VmaMutexLockRead::VmaMutexLockRead(
			CVMAThreadRWLock& mutex,
			bool useMutex);  // 12946
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5604
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
	VmaJsonWriter::EndObject(); // 12963
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 21
	CVMAThreadRWLock::UnlockRead(); // 4014
	VmaMutexLockRead::~VmaMutexLockRead(); // 12964
} /* size: 1197, variables: 1, inline expansions: 16 (1689 bytes) */

// <00CF7729> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12967
// variable: 1
void VmaBlockVector::CheckCorruption()
{
	VmaMutexLockRead lock; // 12974
} /* size: 0, variables: 1 */

// <00CDB304> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12967
// variables: 4
void VmaBlockVector::CheckCorruption()
{
	VmaMutexLockRead lock; // 12974
	{
		uint32_t blockIndex; // 12975
		{
			const VmaDeviceMemoryBlock* pBlock; // 12977
			VkResult res; // 12979
		}
	}
} /* size: 0, variables: 1 */

// <00CDAD0D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12991
// variables: 4
// function calls: 19
void VmaDefragmentationContext_T::VmaDefragmentationContext_T(VmaAllocator hAllocator, const VmaDefragmentationInfo& info)
{
	{
		uint32_t i; // 13015
		{
			VmaBlockVector* vector; // 13017
		}
	}
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::VmaVector(
			const VmaStlAllocator<VmaDefragmentationMove>& allocator);  // 12998
	VmaAllocator_T::GetAllocationCallbacks(); // 12997
	VmaStlAllocator<VmaDefragmentationMove>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 12997
	VmaBlockVector::SetIncrementalSort(
				bool val);  // 13007
	VmaAllocator_T::GetMemoryTypeCount(); // 13012
	{
		uint32_t i; // 13015
		{
			VmaBlockVector* vector; // 13017
			VmaBlockVector::SetIncrementalSort(
						bool val);  // 13020
		}
	}
	VmaAllocateArray<VmaDefragmentationContext_T::StateBalanced>(VmaAllocator hAllocator,
									size_t count);  // 13030
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 11696
	VmaMalloc(VmaAllocator hAllocator,
			size_t size,
			size_t alignment);  // 11713
	VmaAllocateArray<VmaDefragmentationContext_T::StateBalanced>(VmaAllocator hAllocator,
									size_t count);  // 13033
	operator new(size_t,
			void* __p);  // 13033
	StateBalanced::StateBalanced(); // 13033
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 11431
	VmaAllocator_T::GetBufferImageGranularity(); // 13036
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 11696
	VmaMalloc(VmaAllocator hAllocator,
			size_t size,
			size_t alignment);  // 11713
	VmaAllocateArray<VmaDefragmentationContext_T::StateExtensive>(VmaAllocator hAllocator,
									size_t count);  // 13038
	operator new(size_t,
			void* __p);  // 13038
	StateExtensive::StateExtensive(); // 13038
} /* size: 569, inline expansions: 18 (384 bytes) */

// <00CDACBB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:12991
// variables: 2
void VmaDefragmentationContext_T::VmaDefragmentationContext_T(VmaAllocator hAllocator, const VmaDefragmentationInfo& info)
{
	{
		uint32_t i; // 13015
		{
			VmaBlockVector* vector; // 13017
		}
	}
} /* size: 0 */

// <00CDAAAB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13044
// variables: 4
// function calls: 6
void VmaDefragmentationContext_T::~VmaDefragmentationContext_T()
{
	{
		uint32_t i; // 13052
		{
			VmaBlockVector* vector; // 13054
		}
	}
	VmaBlockVector::SetIncrementalSort(
				bool val);  // 13048
	{
		uint32_t i; // 13052
		{
			VmaBlockVector* vector; // 13054
			VmaBlockVector::SetIncrementalSort(
						bool val);  // 13056
		}
	}
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 3862
	vma_delete_array<VmaDefragmentationContext_T::StateExtensive>(const VkAllocationCallbacks* pAllocationCallbacks,
									StateExtensive* ptr,
									size_t count);  // 13068
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::~VmaVector(); // 13074
} /* size: 277, inline expansions: 5 (269 bytes) */

// <00CDAA73> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13044
// variables: 2
void VmaDefragmentationContext_T::~VmaDefragmentationContext_T()
{
	{
		uint32_t i; // 13052
		{
			VmaBlockVector* vector; // 13054
		}
	}
} /* size: 0 */

// <00CDA3F6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13076
// variables: 3
// function calls: 23
void VmaDefragmentationContext_T::DefragmentPassBegin(VmaDefragmentationPassMoveInfo& moveInfo)
{
	{
		VmaMutexLockWrite lock; // 13080
		VmaBlockVector::GetAllocator(); // 13080
		CVMAThreadRWLock::LockWrite(); // 4028
		VmaMutexLockWrite::VmaMutexLockWrite(
					CVMAThreadRWLock& mutex,
					bool useMutex);  // 13080
		VmaVector<VmaDeviceMemoryBlock::size(); // 10922
		VmaBlockVector::GetBlockCount(); // 13082
		CVMAThreadRWLock::UnlockWrite(); // 4030
		VmaMutexLockWrite::~VmaMutexLockWrite(); // 13086
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 10924
		VmaBlockVector::GetBlock(
			size_t index);  // 13085
	}
	{
		uint32_t i; // 13089
		{
			VmaMutexLockWrite lock; // 13093
			VmaVector<VmaDeviceMemoryBlock::size(); // 10922
			VmaBlockVector::GetBlockCount(); // 13095
			VmaBlockVector::GetAllocator(); // 13093
			VmaBlockVector::GetMutex(); // 13093
			CVMAThreadRWLock::LockWrite(); // 4028
			VmaMutexLockWrite::VmaMutexLockWrite(
						CVMAThreadRWLock& mutex,
						bool useMutex);  // 13093
			CVMAThreadRWLock::UnlockWrite(); // 4030
			VmaMutexLockWrite::~VmaMutexLockWrite(); // 13105
			CVMAThreadRWLock::UnlockWrite(); // 4030
			VmaMutexLockWrite::~VmaMutexLockWrite(); // 13105
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 10924
			VmaBlockVector::GetBlock(
				size_t index);  // 13102
		}
	}
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13109
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::data(); // 13112
} /* size: 595, inline expansions: 2 (4 bytes) */

// <00CD7EF7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13120
// variables: 57
// function calls: 132
void VmaDefragmentationContext_T::DefragmentPassEnd(VmaDefragmentationPassMoveInfo& moveInfo)
{
	VkResult result; // 13124
	VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> blockAllocator; // 13125
	VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> > immovableBlocks; // 13126
	VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> > mappedBlocks; // 13127
	VmaAllocator allocator; // 13129
	{
		uint32_t i; // 13130
		{
			VmaDefragmentationMove& move; // 13132
			size_t prevCount; // 13133
			size_t currentCount; // 13133
			VkDeviceSize freedBlockSize; // 13134
			uint32_t vectorIndex; // 13136
			VmaBlockVector* vector; // 13137
			{
				uint8_t mapCount; // 13154
				{
					VmaDeviceMemoryBlock* newMapBlock; // 13158
					bool notPresent; // 13159
					{
						FragmentedBlock& block; // 13160
						VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >& __for_range; // 118
						iterator __for_begin; // 64893
						iterator __for_end; // 64893
						end(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this); // 13160
					}
					VmaAllocation_T::GetBlock(); // 13158
					push_back(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this,
							const FragmentedBlock& src);  // 13170
				}
				{
					VmaMutexLockRead lock; // 13175
					VmaBlockVector::GetAllocator(); // 13175
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3047
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3053
					CThreadRWLock::LockForRead(
							const char* pFileName,
							int nLineNumber);  // 16
					CVMAThreadRWLock::LockRead(); // 4012
					VmaMutexLockRead::VmaMutexLockRead(
							CVMAThreadRWLock& mutex,
							bool useMutex);  // 13175
					VmaVector<VmaDeviceMemoryBlock::size(); // 10922
					VmaBlockVector::GetBlockCount(); // 13176
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3058
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3064
					CThreadRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 21
					CVMAThreadRWLock::UnlockRead(); // 4014
					VmaMutexLockRead::~VmaMutexLockRead(); // 13178
					VmaAllocation_T::GetBlock(); // 13177
					VmaBlockMetadata::GetSize(); // 13177
				}
				{
					VmaMutexLockRead lock; // 13181
					VmaBlockVector::GetAllocator(); // 13181
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3047
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3053
					CThreadRWLock::LockForRead(
							const char* pFileName,
							int nLineNumber);  // 16
					CVMAThreadRWLock::LockRead(); // 4012
					VmaMutexLockRead::VmaMutexLockRead(
							CVMAThreadRWLock& mutex,
							bool useMutex);  // 13181
					VmaVector<VmaDeviceMemoryBlock::size(); // 10922
					VmaBlockVector::GetBlockCount(); // 13182
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3058
					CThreadRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 21
					CVMAThreadRWLock::UnlockRead(); // 4014
					VmaMutexLockRead::~VmaMutexLockRead(); // 13183
				}
			}
			{
				VmaDeviceMemoryBlock* newBlock; // 13194
				bool notPresent; // 13195
				{
					const FragmentedBlock& block; // 13196
					VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >& __for_range; // 118
					iterator __for_begin; // 64893
					iterator __for_end; // 64893
					end(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this); // 13196
				}
				VmaAllocation_T::GetSize(); // 13190
				VmaAllocation_T::GetBlock(); // 13194
				push_back(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this,
						const FragmentedBlock& src);  // 13205
			}
			{
				VkDeviceSize dstBlockSize; // 13225
				{
					VmaMutexLockRead lock; // 13214
					VmaBlockVector::GetAllocator(); // 13214
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3047
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3053
					CThreadRWLock::LockForRead(
							const char* pFileName,
							int nLineNumber);  // 16
					CVMAThreadRWLock::LockRead(); // 4012
					VmaMutexLockRead::VmaMutexLockRead(
							CVMAThreadRWLock& mutex,
							bool useMutex);  // 13214
					VmaVector<VmaDeviceMemoryBlock::size(); // 10922
					VmaBlockVector::GetBlockCount(); // 13215
					VmaAllocation_T::GetBlock(); // 13216
					VmaBlockMetadata::GetSize(); // 13216
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3058
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3064
					CThreadRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 21
					CVMAThreadRWLock::UnlockRead(); // 4014
					VmaMutexLockRead::~VmaMutexLockRead(); // 13217
				}
				{
					VmaMutexLockRead lock; // 13220
					VmaBlockVector::GetAllocator(); // 13220
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3047
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3053
					CThreadRWLock::LockForRead(
							const char* pFileName,
							int nLineNumber);  // 16
					CVMAThreadRWLock::LockRead(); // 4012
					VmaMutexLockRead::VmaMutexLockRead(
							CVMAThreadRWLock& mutex,
							bool useMutex);  // 13220
					VmaVector<VmaDeviceMemoryBlock::size(); // 10922
					VmaBlockVector::GetBlockCount(); // 13221
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3058
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3064
					CThreadRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 21
					CVMAThreadRWLock::UnlockRead(); // 4014
					VmaMutexLockRead::~VmaMutexLockRead(); // 13222
				}
				{
					VmaMutexLockRead lock; // 13227
					VmaBlockVector::GetAllocator(); // 13227
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3047
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3053
					CThreadRWLock::LockForRead(
							const char* pFileName,
							int nLineNumber);  // 16
					CVMAThreadRWLock::LockRead(); // 4012
					VmaMutexLockRead::VmaMutexLockRead(
							CVMAThreadRWLock& mutex,
							bool useMutex);  // 13227
					VmaAllocation_T::GetBlock(); // 13228
					VmaBlockMetadata::GetSize(); // 13228
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3058
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3064
					CThreadRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 21
					CVMAThreadRWLock::UnlockRead(); // 4014
					VmaMutexLockRead::~VmaMutexLockRead(); // 13229
				}
				{
					VmaMutexLockRead lock; // 13232
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3058
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3064
					CThreadRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 21
					CVMAThreadRWLock::UnlockRead(); // 4014
					VmaMutexLockRead::~VmaMutexLockRead(); // 13235
					VmaBlockVector::GetAllocator(); // 13232
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 3047
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 3053
					CThreadRWLock::LockForRead(
							const char* pFileName,
							int nLineNumber);  // 16
					CVMAThreadRWLock::LockRead(); // 4012
					VmaMutexLockRead::VmaMutexLockRead(
							CVMAThreadRWLock& mutex,
							bool useMutex);  // 13232
					VmaVector<VmaDeviceMemoryBlock::size(); // 10922
					VmaBlockVector::GetBlockCount(); // 13233
				}
				VmaAllocation_T::GetSize(); // 13210
			}
			{
				size_t freedBlocks; // 13246
			}
			{
				StateExtensive& state; // 13255
				{
					const size_t  diff; // 13258
					VmaVector<VmaDeviceMemoryBlock::operator[](
							size_t index);  // 10924
					VmaBlockVector::GetBlock(
						size_t index);  // 13263
				}
			}
			VmaAllocation_T::GetMemoryTypeIndex(); // 13145
		}
	}
	{
		bool swapped; // 13290
		{
			const FragmentedBlock& block; // 13292
			VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >& __for_range; // 118
			iterator __for_begin; // 64893
			iterator __for_end; // 64893
			{
				StateExtensive& state; // 13294
				{
					VmaBlockVector* vector; // 13297
					VmaMutexLockWrite lock; // 13298
					{
						size_t i; // 13300
						size_t count; // 13300
						VmaVector<VmaDeviceMemoryBlock::size(); // 10922
						VmaBlockVector::GetBlockCount(); // 13300
						VmaVector<VmaDeviceMemoryBlock::operator[](
								size_t index);  // 10924
						VmaBlockVector::GetBlock(
							size_t index);  // 13302
						VmaVector<VmaDeviceMemoryBlock::operator[](
								size_t index);  // 13304
						VmaVector<VmaDeviceMemoryBlock::operator[](
								size_t index);  // 13304
						swap<VmaDeviceMemoryBlock*>(VmaDeviceMemoryBlock *& __a,
										VmaDeviceMemoryBlock *& __b);  // 13304
						VmaVector<VmaDeviceMemoryBlock::operator[](
								size_t index);  // 13310
						VmaVector<VmaDeviceMemoryBlock::operator[](
								size_t index);  // 13310
						swap<VmaDeviceMemoryBlock*>(VmaDeviceMemoryBlock *& __a,
										VmaDeviceMemoryBlock *& __b);  // 13310
					}
					VmaBlockVector::GetAllocator(); // 13298
					VmaBlockVector::GetMutex(); // 13298
					CVMAThreadRWLock::LockWrite(); // 4028
					VmaMutexLockWrite::VmaMutexLockWrite(
								CVMAThreadRWLock& mutex,
								bool useMutex);  // 13298
					CVMAThreadRWLock::UnlockWrite(); // 4030
					VmaMutexLockWrite::~VmaMutexLockWrite(); // 13319
				}
			}
			end(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this); // 13292
		}
	}
	{
		const FragmentedBlock& block; // 13328
		VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >& __for_range; // 118
		iterator __for_begin; // 64893
		iterator __for_end; // 64893
		{
			VmaBlockVector* vector; // 13330
			VmaMutexLockWrite lock; // 13331
			{
				size_t i; // 13333
				VmaVector<VmaDeviceMemoryBlock::size(); // 10922
				VmaBlockVector::GetBlockCount(); // 13333
				VmaVector<VmaDeviceMemoryBlock::operator[](
						size_t index);  // 10924
				VmaBlockVector::GetBlock(
					size_t index);  // 13335
				VmaVector<VmaDeviceMemoryBlock::operator[](
						size_t index);  // 13337
				VmaVector<VmaDeviceMemoryBlock::operator[](
						size_t index);  // 13337
				swap<VmaDeviceMemoryBlock*>(VmaDeviceMemoryBlock *& __a,
								VmaDeviceMemoryBlock *& __b);  // 13337
			}
			VmaBlockVector::GetAllocator(); // 13331
			VmaBlockVector::GetMutex(); // 13331
			CVMAThreadRWLock::LockWrite(); // 4028
			VmaMutexLockWrite::VmaMutexLockWrite(
						CVMAThreadRWLock& mutex,
						bool useMutex);  // 13331
			CVMAThreadRWLock::UnlockWrite(); // 4030
			VmaMutexLockWrite::~VmaMutexLockWrite(); // 13341
		}
	}
	{
		const FragmentedBlock& block; // 13346
		VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock> >& __for_range; // 118
		iterator __for_begin; // 64893
		iterator __for_end; // 64893
		{
			VkResult res; // 13348
			VmaDeviceMemoryBlock::Map(
				VmaAllocator hAllocator,
				uint32_t count,
				void** ppData);  // 13348
		}
		end(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this); // 13346
	}
	VmaVector(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this,
			const VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>& allocator);  // 13126
	VmaVector(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this,
			const VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>& allocator);  // 13127
	VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 13125
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::clear(); // 13272
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	~VmaVector(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this); // 13353
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	~VmaVector(const VmaVector<VmaDefragmentationContext_T::FragmentedBlock, VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBloc this); // 13353
} /* size: 5344, variables: 5, inline expansions: 8 (370 bytes) */

// <00CD7E3E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13355
void VmaDefragmentationContext_T::ComputeDefragmentation(VmaBlockVector& vector, size_t index)
{
} /* size: 53 */

// <00CD7C93> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13373
// variable: 1
// function calls: 5
void GetMoveData(VmaAllocHandle handle, VmaBlockMetadata* metadata)
{
	MoveAllocationData moveData; // 13376
	MoveAllocationData::MoveAllocationData(); // 13376
	VmaAllocation_T::GetSuballocationType(); // 13380
	VmaAllocation_T::GetSize(); // 13378
	VmaAllocation_T::GetAlignment(); // 13379
	VmaAllocation_T::IsPersistentMap(); // 13383
} /* size: 105, variables: 1, inline expansions: 5 (45 bytes) */

// <00CF7757> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13391
void VmaDefragmentationContext_T::CheckCounters(VkDeviceSize bytes)
{
} /* size: 0 */

// <00CF7795> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13410
void VmaDefragmentationContext_T::IncrementCounters(VkDeviceSize bytes)
{
} /* size: 0 */

// <00CD787D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13423
// variables: 5
// function calls: 9
void VmaDefragmentationContext_T::ReallocWithinBlock(VmaBlockVector& vector, VmaDeviceMemoryBlock* block)
{
	VmaBlockMetadata* metadata; // 13425
	{
		VmaAllocHandle handle; // 13427
		{
			MoveAllocationData moveData; // 13431
			VkDeviceSize offset; // 13447
			{
				VmaAllocationRequest request; // 13450
				iterator::iterator(); // 13450
				VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 4204
				VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::push_back(
						const VmaDefragmentationMove& src);  // 13470
				VmaDefragmentationContext_T::IncrementCounters(
							VkDeviceSize bytes);  // 13471
			}
			VmaAllocation_T::GetUserData(); // 13433
			VmaDefragmentationContext_T::CheckCounters(
					VkDeviceSize bytes);  // 13435
			VmaAllocation_T::GetSize(); // 13435
			VmaAllocation_T::GetOffset(); // 12110
			VmaAllocation_T::GetOffset(); // 13447
		}
	}
} /* size: 616, variables: 1 */

// <00CD7667> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13481
// variable: 1
// function calls: 5
void VmaDefragmentationContext_T::AllocInOtherBlock(size_t start, size_t end, MoveAllocationData& data, VmaBlockVector& vector)
{
	{
		VmaDeviceMemoryBlock* dstBlock; // 13485
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 10924
		VmaBlockVector::GetBlock(
			size_t index);  // 13485
		VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 4204
		VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::push_back(
				const VmaDefragmentationMove& src);  // 13497
		VmaDefragmentationContext_T::IncrementCounters(
					VkDeviceSize bytes);  // 13498
	}
} /* size: 300 */

// <00CD7402> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13507
// variables: 4
// function calls: 5
void VmaDefragmentationContext_T::ComputeDefragmentation_Fast(VmaBlockVector& vector)
{
	{
		size_t i; // 13512
		{
			VmaBlockMetadata* metadata; // 13514
			{
				VmaAllocHandle handle; // 13516
				{
					MoveAllocationData moveData; // 13520
					VmaAllocation_T::GetUserData(); // 13522
					VmaAllocation_T::GetSize(); // 13524
					VmaDefragmentationContext_T::CheckCounters(
							VkDeviceSize bytes);  // 13524
				}
			}
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 10924
			VmaBlockVector::GetBlock(
				size_t index);  // 13514
		}
	}
} /* size: 312 */

// <00CD6D6D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13544
// variables: 13
// function calls: 17
void VmaDefragmentationContext_T::ComputeDefragmentation_Balanced(VmaBlockVector& vector, size_t index, bool update)
{
	StateBalanced& vectorState; // 13551
	const size_t  startMoveCount; // 13555
	VkDeviceSize minimalFreeRegion; // 13556
	{
		size_t i; // 13557
		{
			VmaDeviceMemoryBlock* block; // 13559
			VmaBlockMetadata* metadata; // 13560
			VkDeviceSize prevFreeRegionSize; // 13561
			{
				VmaAllocHandle handle; // 13563
				{
					MoveAllocationData moveData; // 13567
					const size_t  prevMoveCount; // 13584
					VkDeviceSize nextFreeRegionSize; // 13588
					VkDeviceSize offset; // 13590
					{
						VmaAllocationRequest request; // 13599
						iterator::iterator(); // 13599
						VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 4204
						VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::push_back(
								const VmaDefragmentationMove& src);  // 13619
						VmaDefragmentationContext_T::IncrementCounters(
									VkDeviceSize bytes);  // 13620
					}
					VmaAllocation_T::GetUserData(); // 13569
					VmaAllocation_T::GetSize(); // 13571
					VmaDefragmentationContext_T::CheckCounters(
							VkDeviceSize bytes);  // 13571
					VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13584
					VmaAllocation_T::GetOffset(); // 12110
					VmaAllocation_T::GetOffset(); // 13590
					VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13591
				}
			}
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 10924
			VmaBlockVector::GetBlock(
				size_t index);  // 13559
		}
		VmaVector<VmaDeviceMemoryBlock::size(); // 10922
		VmaBlockVector::GetBlockCount(); // 13557
	}
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13555
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13632
} /* size: 1199, variables: 3, inline expansions: 2 (4 bytes) */

// <00CD6878> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13640
// variables: 8
// function calls: 13
void VmaDefragmentationContext_T::ComputeDefragmentation_Full(VmaBlockVector& vector)
{
	{
		size_t i; // 13645
		{
			VmaDeviceMemoryBlock* block; // 13647
			VmaBlockMetadata* metadata; // 13648
			{
				VmaAllocHandle handle; // 13650
				{
					MoveAllocationData moveData; // 13654
					const size_t  prevMoveCount; // 13671
					VkDeviceSize offset; // 13676
					{
						VmaAllocationRequest request; // 13679
						iterator::iterator(); // 13679
						VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 4204
						VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::push_back(
								const VmaDefragmentationMove& src);  // 13699
						VmaDefragmentationContext_T::IncrementCounters(
									VkDeviceSize bytes);  // 13700
					}
					VmaAllocation_T::GetUserData(); // 13656
					VmaAllocation_T::GetSize(); // 13658
					VmaDefragmentationContext_T::CheckCounters(
							VkDeviceSize bytes);  // 13658
					VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13671
					VmaAllocation_T::GetOffset(); // 12110
					VmaAllocation_T::GetOffset(); // 13676
					VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13677
				}
			}
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 10924
			VmaBlockVector::GetBlock(
				size_t index);  // 13647
		}
	}
} /* size: 736 */

// <00CD617C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13711
// variables: 12
// function calls: 18
void VmaDefragmentationContext_T::ComputeDefragmentation_Extensive(VmaBlockVector& vector, size_t index)
{
	StateExtensive& vectorState; // 13721
	bool texturePresent; // 13723
	bool bufferPresent; // 13723
	bool otherPresent; // 13723
	{
		size_t last; // 13740
		VmaBlockMetadata* freeMetadata; // 13741
		const size_t  prevMoveCount; // 13743
		{
			VmaAllocHandle handle; // 13744
			{
				MoveAllocationData moveData; // 13748
				VmaAllocation_T::GetSize(); // 13749
				VmaDefragmentationContext_T::CheckCounters(
						VkDeviceSize bytes);  // 13749
				VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13765
			}
		}
		{
			size_t i; // 13776
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 10924
			VmaBlockVector::GetBlock(
				size_t index);  // 13778
		}
		VmaVector<VmaDeviceMemoryBlock::size(); // 10922
		VmaBlockVector::GetBlockCount(); // 13740
		VmaVector<VmaDeviceMemoryBlock::operator[](
				size_t index);  // 10924
		VmaBlockVector::GetBlock(
			size_t index);  // 13741
		VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13743
		VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13771
		VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13783
	}
	{
		const size_t  prevMoveCount; // 13886
		{
			size_t i; // 13887
			VmaVector<VmaDeviceMemoryBlock::size(); // 10922
			VmaBlockVector::GetBlockCount(); // 13887
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 10924
			VmaBlockVector::GetBlock(
				size_t index);  // 13889
		}
		VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13886
		VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13893
	}
} /* size: 1267, variables: 4 */

// <00CD5F8C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13899
// variables: 4
// function calls: 5
void VmaDefragmentationContext_T::UpdateVectorStatistics(VmaBlockVector& vector, StateBalanced& state)
{
	size_t allocCount; // 13901
	size_t freeCount; // 13902
	{
		size_t i; // 13906
		{
			VmaBlockMetadata* metadata; // 13908
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 10924
			VmaBlockVector::GetBlock(
				size_t index);  // 13908
			VmaBlockMetadata::GetSize(); // 13913
		}
		VmaVector<VmaDeviceMemoryBlock::size(); // 10922
		VmaBlockVector::GetBlockCount(); // 13906
	}
} /* size: 0, variables: 2 */

// <00CD5B23> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13920
// variables: 6
// function calls: 13
void VmaDefragmentationContext_T::MoveDataToFreeBlocks(VmaSuballocationType currentType, VmaBlockVector& vector, size_t firstFreeBlock, bool& texturePresent, bool& bufferPresent, bool& otherPresent)
{
	const size_t  prevMoveCount; // 13924
	{
		size_t i; // 13925
		{
			VmaDeviceMemoryBlock* block; // 13927
			VmaBlockMetadata* metadata; // 13928
			{
				VmaAllocHandle handle; // 13930
				{
					MoveAllocationData moveData; // 13934
					VmaAllocation_T::GetUserData(); // 13936
					VmaAllocation_T::GetSize(); // 13938
					VmaDefragmentationContext_T::CheckCounters(
							VkDeviceSize bytes);  // 13938
					swap<VmaSuballocationType>(VmaSuballocationType& __a,
									VmaSuballocationType& __b);  // 3500
					VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
										VmaSuballocationType suballocType2);  // 13951
					VmaVector<VmaDeviceMemoryBlock::size(); // 10922
					VmaBlockVector::GetBlockCount(); // 13954
					VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
										VmaSuballocationType suballocType2);  // 13958
					VmaIsBufferImageGranularityConflict(VmaSuballocationType suballocType1,
										VmaSuballocationType suballocType2);  // 13960
				}
			}
			VmaVector<VmaDeviceMemoryBlock::operator[](
					size_t index);  // 10924
			VmaBlockVector::GetBlock(
				size_t index);  // 13927
		}
	}
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13924
	VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::size(); // 13966
} /* size: 608, variables: 1, inline expansions: 2 (38 bytes) */

// <00CD55CA> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13971
// function calls: 18
void VmaPool_T::VmaPool_T(VmaAllocator hAllocator, const VmaPoolCreateInfo& createInfo, VkDeviceSize preferredBlockSize)
{
	VmaAllocator_T::IsMemoryTypeNonCoherent(
				uint32_t memTypeIndex);  // 11453
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 11454
	VmaAllocator_T::GetMemoryTypeMinAlignment(
					uint32_t memTypeIndex);  // 13986
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 13986
	max<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 11431
	VmaAllocator_T::GetBufferImageGranularity(); // 13982
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 11
	CVMAThreadRWLock::CVMAThreadRWLock(); // 12334
	VmaAllocator_T::GetAllocationCallbacks(); // 12333
	VmaVector<VmaDeviceMemoryBlock::VmaVector(
			const VmaStlAllocator<VmaDeviceMemoryBlock*>& allocator);  // 12333
	VmaStlAllocator<VmaDeviceMemoryBlock::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 12333
	VmaBlockVector::VmaBlockVector(
			VmaAllocator hAllocator,
			VmaPool hParentPool,
			uint32_t memoryTypeIndex,
			VkDeviceSize preferredBlockSize,
			size_t minBlockCount,
			size_t maxBlockCount,
			VkDeviceSize bufferImageGranularity,
			bool explicitBlockSize,
			uint32_t algorithm,
			float priority,
			VkDeviceSize minAllocationAlignment,
			void* pMemoryAllocateNext);  // 13975
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 11
	CVMAThreadRWLock::CVMAThreadRWLock(); // 6171
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::VmaIntrusiveLinkedList(); // 6171
	VmaDedicatedAllocationList::VmaDedicatedAllocationList(); // 13989
} /* size: 614, inline expansions: 18 (1271 bytes) */

// <00CD5587> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13971
void VmaPool_T::VmaPool_T(VmaAllocator hAllocator, const VmaPoolCreateInfo& createInfo, VkDeviceSize preferredBlockSize)
{
} /* size: 0 */

// <00CD5395> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13991
// function calls: 8
void VmaPool_T::~VmaPool_T()
{
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::IsEmpty(); // 6202
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::~VmaIntrusiveLinkedList(); // 6206
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 11
	CVMAThreadRWLock::~CVMAThreadRWLock(); // 6206
	VmaDedicatedAllocationList::~VmaDedicatedAllocationList(); // 13994
} /* size: 0, inline expansions: 8 (0 bytes) */

// <00CD5379> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13991
void VmaPool_T::~VmaPool_T()
{
} /* size: 0 */

// <00CF77CB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13996
// variables: 4
// function calls: 10
void VmaPool_T::SetName(const char* pName)
{
	const VkAllocationCallbacks* allocs; // 13998
	VmaBlockVector::GetAllocator(); // 13998
	VmaAllocator_T::GetAllocationCallbacks(); // 13998
	{
		const size_t  len; // 3896
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 3862
		vma_delete_array<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					char* ptr,
					size_t count);  // 3897
	}
	VmaFreeString(const VkAllocationCallbacks* allocs,
			char* str);  // 13999
	{
		const size_t  len; // 3870
		const char* result; // 3871
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					size_t count);  // 3871
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3872
	}
	VmaCreateStringCopy(const VkAllocationCallbacks* allocs,
				const char* srcStr);  // 3866
	VmaCreateStringCopy(const VkAllocationCallbacks* allocs,
				const char* srcStr);  // 14003
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <00CD5343> ../thirdparty/vulkan/vma/vk_mem_alloc.h:13996
// variable: 1
void VmaPool_T::SetName(const char* pName)
{
	const VkAllocationCallbacks* allocs; // 13998
} /* size: 0, variables: 1 */

// <00CD42D5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14013
// variables: 9
// function calls: 55
void VmaAllocator_T::VmaAllocator_T(const VmaAllocatorCreateInfo* pCreateInfo)
{
	{
		uint32_t heapIndex; // 14145
		{
			const VkDeviceSize  limit; // 14147
		}
	}
	{
		uint32_t memTypeIndex; // 14159
		{
			const VkDeviceSize  preferredBlockSize; // 14164
		}
	}
	VmaVector(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this,
			const VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>& allocator);  // 4510
	VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 4510
	VmaPoolAllocator<VmaAllocation_T>::VmaPoolAllocator(
			const VkAllocationCallbacks* pAllocationCallbacks,
			uint32_t firstBlockCapacity);  // 11217
	__mutex_base::__mutex_base(); // 106
	mutex::mutex(); // 2926
	VmaMutex::VmaMutex(); // 11217
	VmaAllocationObjectAllocator::VmaAllocationObjectAllocator(
					const VkAllocationCallbacks* pAllocationCallbacks);  // 14027
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 11
	CVMAThreadRWLock::CVMAThreadRWLock(); // 6171
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::VmaIntrusiveLinkedList(); // 6171
	VmaDedicatedAllocationList::VmaDedicatedAllocationList(); // 14034
	__atomic_base<unsigned int>::__atomic_base(
			__int_type __i);  // 866
	atomic<unsigned int>::atomic(
		__integral_type __i);  // 14029
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 11
	CVMAThreadRWLock::CVMAThreadRWLock(); // 14034
	__atomic_base<unsigned int>::__atomic_base(); // 860
	atomic<unsigned int>::atomic(); // 14034
	__atomic_base<unsigned int>::__atomic_base(
			__int_type __i);  // 866
	atomic<unsigned int>::atomic(
		__integral_type __i);  // 14032
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14102
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14103
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14104
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14106
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14107
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14110
	VmaAllocator_T::ImportVulkanFunctions(
				const VmaVulkanFunctions* pVulkanFunctions);  // 14120
	{
		uint32_t memTypeIndex; // 15827
		VmaAllocator_T::GetMemoryTypeCount(); // 15827
	}
	VmaAllocator_T::CalculateGlobalMemoryTypeBits(); // 15817
	VmaAllocator_T::CalculateGlobalMemoryTypeBits(); // 14133
	VmaAllocator_T::GetMemoryTypeCount(); // 14139
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 14138
	{
		uint32_t heapIndex; // 14145
		VmaAllocator_T::GetMemoryHeapCount(); // 14145
		{
			const VkDeviceSize  limit; // 14147
		}
	}
	{
		uint32_t memTypeIndex; // 14159
		VmaAllocator_T::GetMemoryTypeCount(); // 14159
		{
			const VkDeviceSize  preferredBlockSize; // 14164
			VmaAlignUp<long unsigned int>(long unsigned int val,
							long unsigned int alignment);  // 14484
			VmaAllocator_T::MemoryTypeIndexToHeapIndex(
							uint32_t memTypeIndex);  // 14481
			VmaAllocator_T::CalcPreferredBlockSize(
						uint32_t memTypeIndex);  // 14164
			VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
					size_t size,
					size_t alignment);  // 11696
			VmaMalloc(VmaAllocator hAllocator,
					size_t size,
					size_t alignment);  // 11707
			VmaAllocate<VmaBlockVector>(VmaAllocator hAllocator); // 14165
			operator new(size_t,
					void* __p);  // 14177
			VmaAllocator_T::IsMemoryTypeNonCoherent(
						uint32_t memTypeIndex);  // 11453
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 11454
			VmaAllocator_T::GetMemoryTypeMinAlignment(
							uint32_t memTypeIndex);  // 14177
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 11431
			VmaAllocator_T::GetBufferImageGranularity(); // 14177
			CThreadMutex::CThreadMutex(
					const char* pName);  // 3024
			CThreadRWLock::CThreadRWLock(
					const char* pLockName);  // 11
			CVMAThreadRWLock::CVMAThreadRWLock(); // 12334
			VmaAllocator_T::GetAllocationCallbacks(); // 12333
			VmaVector<VmaDeviceMemoryBlock::VmaVector(
					const VmaStlAllocator<VmaDeviceMemoryBlock*>& allocator);  // 12333
			VmaStlAllocator<VmaDeviceMemoryBlock::VmaStlAllocator(
					const VkAllocationCallbacks* pCallbacks);  // 12333
			VmaBlockVector::VmaBlockVector(
					VmaAllocator hAllocator,
					VmaPool hParentPool,
					uint32_t memoryTypeIndex,
					VkDeviceSize preferredBlockSize,
					size_t minBlockCount,
					size_t maxBlockCount,
					VkDeviceSize bufferImageGranularity,
					bool explicitBlockSize,
					uint32_t algorithm,
					float priority,
					VkDeviceSize minAllocationAlignment,
					void* pMemoryAllocateNext);  // 14177
		}
	}
	VmaIntrusiveLinkedList<VmaPoolListItemTraits>::VmaIntrusiveLinkedList(); // 14034
} /* size: 1695, inline expansions: 33 (1399 bytes) */

// <00CD426B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14013
// variables: 4
void VmaAllocator_T::VmaAllocator_T(const VmaAllocatorCreateInfo* pCreateInfo)
{
	{
		uint32_t heapIndex; // 14145
		{
			const VkDeviceSize  limit; // 14147
		}
	}
	{
		uint32_t memTypeIndex; // 14159
		{
			const VkDeviceSize  preferredBlockSize; // 14164
		}
	}
} /* size: 0 */

// <00CF903C> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14184
// variable: 1
void VmaAllocator_T::Init(const VmaAllocatorCreateInfo* pCreateInfo)
{
	VkResult res; // 14186
} /* size: 0, variables: 1 */

// <00CD39E6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14198
// variables: 3
// function calls: 34
void VmaAllocator_T::~VmaAllocator_T()
{
	{
		size_t memTypeIndex; // 14202
	}
	{
		size_t memTypeIndex; // 14202
		VmaAllocator_T::GetMemoryTypeCount(); // 14202
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 11701
		VmaFree(VmaAllocator hAllocator,
			void* ptr);  // 11722
		vma_delete<VmaBlockVector>(VmaAllocator hAllocator,
						VmaBlockVector* ptr);  // 14204
	}
	VmaIntrusiveLinkedList<VmaPoolListItemTraits>::~VmaIntrusiveLinkedList(); // 14206
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 11
	CVMAThreadRWLock::~CVMAThreadRWLock(); // 14206
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 11
	CVMAThreadRWLock::~CVMAThreadRWLock(); // 11141
	VmaCurrentBudgetData::~VmaCurrentBudgetData(); // 14206
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::IsEmpty(); // 6202
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::~VmaIntrusiveLinkedList(); // 6206
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 11
	CVMAThreadRWLock::~CVMAThreadRWLock(); // 6206
	VmaDedicatedAllocationList::~VmaDedicatedAllocationList(); // 14198
	{
		size_t i; // 4518
		size(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::It this); // 4518
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 3862
		vma_delete_array<VmaPoolAllocator<VmaAllocation_T>::Item>(const VkAllocationCallbacks* pAllocationCallbacks,
										union Item* ptr,
										size_t count);  // 4519
		operator[](const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this,
				size_t index);  // 4519
		operator[](const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this,
				size_t index);  // 4519
	}
	clear(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this); // 4520
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	~VmaVector(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this); // 4521
	VmaPoolAllocator<VmaAllocation_T>::~VmaPoolAllocator(); // 11212
	VmaAllocationObjectAllocator::~VmaAllocationObjectAllocator(); // 14206
} /* size: 0, inline expansions: 25 (0 bytes) */

// <00CD39BB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14198
// variable: 1
void VmaAllocator_T::~VmaAllocator_T()
{
	{
		size_t memTypeIndex; // 14202
	}
} /* size: 0 */

// <00CF7B06> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14208
void VmaAllocator_T::ImportVulkanFunctions(const VmaVulkanFunctions* pVulkanFunctions)
{
} /* size: 0 */

// <00CD3960> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14228
void VmaAllocator_T::ImportVulkanFunctions_Static()
{
} /* size: 395 */

// <00CD391F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14280
void VmaAllocator_T::ImportVulkanFunctions_Custom(const VmaVulkanFunctions* pVulkanFunctions)
{
} /* size: 450 */

// <00CD35A6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14331
void VmaAllocator_T::ImportVulkanFunctions_Dynamic()
{
} /* size: 1563 */

// <00CD358A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14427
void VmaAllocator_T::ValidateVulkanFunctions()
{
} /* size: 0 */

// <00CF7B87> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14479
// variables: 3
// function calls: 2
void VmaAllocator_T::CalcPreferredBlockSize(uint32_t memTypeIndex)
{
	const uint32_t  heapIndex; // 14481
	const VkDeviceSize  heapSize; // 14482
	const bool  isSmallHeap; // 14483
	VmaAllocator_T::MemoryTypeIndexToHeapIndex(
					uint32_t memTypeIndex);  // 14481
	VmaAlignUp<long unsigned int>(long unsigned int val,
					long unsigned int alignment);  // 14484
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <00CD353A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14479
// variables: 3
void VmaAllocator_T::CalcPreferredBlockSize(uint32_t memTypeIndex)
{
	const uint32_t  heapIndex; // 14481
	const VkDeviceSize  heapSize; // 14482
	const bool  isSmallHeap; // 14483
} /* size: 0, variables: 3 */

// <00CD3146> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14487
// variables: 3
// function calls: 5
void VmaAllocator_T::AllocateMemoryOfType(VmaPool pool, VkDeviceSize size, VkDeviceSize alignment, bool dedicatedPreferred, VkBuffer dedicatedBuffer, VkImage dedicatedImage, VkFlags dedicatedBufferImageUsage, const VmaAllocationCreateInfo& createInfo, uint32_t memTypeIndex, VmaSuballocationType suballocType, VmaDedicatedAllocationList& dedicatedAllocations, VmaBlockVector& blockVector, size_t allocationCount, VmaAllocation* pAllocations)
{
	VmaAllocationCreateInfo finalCreateInfo; // 14506
	VkResult res; // 14507
	{
		const bool  canAllocateDedicated; // 14539
		VmaBlockVector::HasExplicitBlockSize(); // 14541
		VmaBlockVector::GetPreferredBlockSize(); // 14546
		VmaBlockVector::GetAllocationNextPtr(); // 14602
		VmaBlockVector::GetAllocationNextPtr(); // 14561
		__atomic_base<unsigned int>::load(
			memory_order __m);  // 14554
	}
} /* size: 831, variables: 2 */

// <00CD2A86> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14634
// variables: 10
// function calls: 16
void VmaAllocator_T::AllocateDedicatedMemory(VmaPool pool, VkDeviceSize size, VmaSuballocationType suballocType, VmaDedicatedAllocationList& dedicatedAllocations, uint32_t memTypeIndex, bool map, bool isUserDataString, bool isMappingAllowed, bool canAliasMemory, void* pUserData, float priority, VkBuffer dedicatedBuffer, VkImage dedicatedImage, VkFlags dedicatedBufferImageUsage, size_t allocationCount, VmaAllocation* pAllocations, const void* pNextChain)
{
	VkMemoryAllocateInfo allocInfo; // 14655
	VkMemoryDedicatedAllocateInfoKHR dedicatedAllocInfo; // 14661
	VkMemoryAllocateFlagsInfoKHR allocFlagsInfo; // 14682
	VkMemoryPriorityAllocateInfoEXT priorityInfo; // 14704
	VkExportMemoryAllocateInfoKHR exportMemoryAllocInfo; // 14715
	size_t allocIndex; // 14723
	VkResult res; // 14724
	{
		bool canContainBufferWithDeviceAddress; // 14685
		VmaPnextChainPushFront<VkMemoryAllocateInfo, VkMemoryAllocateFlagsInfo>(VkMemoryAllocateInfo* mainStruct,
											VkMemoryAllocateFlagsInfo* newStruct);  // 14698
	}
	{
		VmaAllocation currAlloc; // 14757
		VkDeviceMemory hMemory; // 14758
		VmaDeviceMemoryBlock::GetDeviceMemory(); // 12143
		VmaAllocation_T::GetMemory(); // 14758
		VmaAllocation_T::GetSize(); // 14770
		VmaAllocation_T::GetSize(); // 14771
		VmaAllocator_T::MemoryTypeIndexToHeapIndex(
						uint32_t memTypeIndex);  // 14771
		__atomic_base<long unsigned int>::operator-=(
				__int_type __i);  // 11198
		__atomic_base<unsigned int>::operator--(); // 11200
		__atomic_base<unsigned int>::operator++(); // 11202
		VmaCurrentBudgetData::RemoveAllocation(
				uint32_t heapIndex,
				VkDeviceSize allocationSize);  // 14771
	}
	VmaPnextChainPushFront<VkMemoryAllocateInfo, VkMemoryDedicatedAllocateInfo>(VkMemoryAllocateInfo* mainStruct,
											VkMemoryDedicatedAllocateInfo* newStruct);  // 14670
	VmaPnextChainPushFront<VkMemoryAllocateInfo, VkMemoryPriorityAllocateInfoEXT>(VkMemoryAllocateInfo* mainStruct,
											VkMemoryPriorityAllocateInfoEXT* newStruct);  // 14709
	VmaAllocator_T::GetExternalMemoryHandleTypeFlags(
					uint32_t memTypeIndex);  // 14716
	VmaPnextChainPushFront<VkMemoryAllocateInfo, VkExportMemoryAllocateInfo>(VkMemoryAllocateInfo* mainStruct,
										VkExportMemoryAllocateInfo* newStruct);  // 14719
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14775
	VmaPnextChainPushFront<VkMemoryAllocateInfo, VkMemoryDedicatedAllocateInfo>(VkMemoryAllocateInfo* mainStruct,
											VkMemoryDedicatedAllocateInfo* newStruct);  // 14675
} /* size: 1259, variables: 7, inline expansions: 6 (122 bytes) */

// <00CD2345> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14781
// variables: 7
// function calls: 21
void VmaAllocator_T::AllocateDedicatedMemoryPage(VmaPool pool, VkDeviceSize size, VmaSuballocationType suballocType, uint32_t memTypeIndex, const VkMemoryAllocateInfo& allocInfo, bool map, bool isUserDataString, bool isMappingAllowed, void* pUserData, VmaAllocation* pAllocation)
{
	VkDeviceMemory hMemory; // 14793
	VkResult res; // 14794
	void* pMappedData; // 14801
	__gthread_mutex_lock(__gthread_mutex_t* __mutex); // 115
	mutex::lock(); // 2927
	VmaMutex::Lock(); // 3996
	VmaMutexLock::VmaMutexLock(
			VmaMutex& mutex,
			bool useMutex);  // 11230
	{
		size_t i; // 4526
		size(const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::It this); // 4526
		{
			ItemBlock& block; // 4528
			operator[](const VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock, VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBloc this,
					size_t index);  // 4528
			{
				const union Item* pItem; // 4532
				VmaAllocation_T* result; // 4534
				VmaAllocation_T::VmaAllocation_T(
						bool mappingAllowed);  // 4535
			}
		}
	}
	VmaAllocation_T::VmaAllocation_T(
			bool mappingAllowed);  // 4545
	VmaPoolAllocator<VmaAllocation_T>::Alloc<bool&>(); // 11231
	__gthread_mutex_unlock(__gthread_mutex_t* __mutex); // 134
	mutex::unlock(); // 2928
	VmaMutex::Unlock(); // 3998
	VmaMutexLock::~VmaMutexLock(); // 11232
	VmaAllocationObjectAllocator::Allocate<bool&>(); // 14819
	VmaAllocation_T::InitDedicatedAllocation(
				VmaPool hParentPool,
				uint32_t memoryTypeIndex,
				VkDeviceMemory hMemory,
				VmaSuballocationType suballocationType,
				void* pMappedData,
				VkDeviceSize size);  // 14820
	VmaAllocation_T::SetUserData(
			VmaAllocator hAllocator,
			void* pUserData);  // 14824
	VmaAllocator_T::MemoryTypeIndexToHeapIndex(
					uint32_t memTypeIndex);  // 14825
	__atomic_base<long unsigned int>::operator+=(
			__int_type __i);  // 11188
	__atomic_base<unsigned int>::operator++(); // 11189
	__atomic_base<unsigned int>::operator++(); // 11191
	VmaCurrentBudgetData::AddAllocation(
			uint32_t heapIndex,
			VkDeviceSize allocationSize);  // 14825
} /* size: 0, variables: 3, inline expansions: 18 (767 bytes) */

// <00CD2215> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14834
// variables: 3
// function call: 1
void VmaAllocator_T::GetBufferMemoryRequirements(VkBuffer hBuffer, VkMemoryRequirements& memReq, bool& requiresDedicatedAllocation, bool& prefersDedicatedAllocation)
{
	{
		VkBufferMemoryRequirementsInfo2KHR memReqInfo; // 14843
		VkMemoryDedicatedRequirementsKHR memDedicatedReq; // 14846
		VkMemoryRequirements2KHR memReq2; // 14848
		VmaPnextChainPushFront<VkMemoryRequirements2, VkMemoryDedicatedRequirements>(VkMemoryRequirements2* mainStruct,
												VkMemoryDedicatedRequirements* newStruct);  // 14849
	}
} /* size: 295 */

// <00CD20E5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14866
// variables: 3
// function call: 1
void VmaAllocator_T::GetImageMemoryRequirements(VkImage hImage, VkMemoryRequirements& memReq, bool& requiresDedicatedAllocation, bool& prefersDedicatedAllocation)
{
	{
		VkImageMemoryRequirementsInfo2KHR memReqInfo; // 14875
		VkMemoryDedicatedRequirementsKHR memDedicatedReq; // 14878
		VkMemoryRequirements2KHR memReq2; // 14880
		VmaPnextChainPushFront<VkMemoryRequirements2, VkMemoryDedicatedRequirements>(VkMemoryRequirements2* mainStruct,
												VkMemoryDedicatedRequirements* newStruct);  // 14881
	}
} /* size: 295 */

// <00CD1D5A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14898
// variables: 14
// function calls: 10
void VmaAllocator_T::FindMemoryTypeIndex(uint32_t memoryTypeBits, const VmaAllocationCreateInfo* pAllocationCreateInfo, VkFlags bufImgUsage, uint32_t* pMemoryTypeIndex)
{
	VkMemoryPropertyFlags requiredFlags; // 14911
	VkMemoryPropertyFlags preferredFlags; // 14911
	VkMemoryPropertyFlags notPreferredFlags; // 14911
	uint32_t minCost; // 14922
	{
		uint32_t memTypeIndex; // 14923
		uint32_t memTypeBit; // 14923
		{
			const VkMemoryPropertyFlags  currFlags; // 14930
			{
				uint32_t currCost; // 14936
				__popcount<unsigned int>(unsigned int __x); // 444
				popcount<unsigned int>(unsigned int __x); // 3270
				VmaCountBitsSet(uint32_t v); // 14936
				__popcount<unsigned int>(unsigned int __x); // 444
				popcount<unsigned int>(unsigned int __x); // 3270
				VmaCountBitsSet(uint32_t v); // 14937
			}
		}
		VmaAllocator_T::GetMemoryTypeCount(); // 14924
	}
	VmaAllocator_T::GetGlobalMemoryTypeBits(); // 14904
	VmaAllocator_T::IsIntegratedGpu(); // 14913
	{
		const bool  deviceAccess; // 3700
		const bool  hostAccessSequentialWrite; // 3701
		const bool  hostAccessRandom; // 3702
		const bool  hostAccessAllowTransferInstead; // 3703
		const bool  preferDevice; // 3704
		const bool  preferHost; // 3705
	}
	FindMemoryPreferences(bool isIntegratedGPU,
				const VmaAllocationCreateInfo& allocCreateInfo,
				VkFlags bufImgUsage,
				VkMemoryPropertyFlags& outRequiredFlags,
				VkMemoryPropertyFlags& outPreferredFlags,
				VkMemoryPropertyFlags& outNotPreferredFlags);  // 14912
} /* size: 840, variables: 4, inline expansions: 3 (614 bytes) */

// <00CD1C33> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14954
// variables: 2
// function call: 1
void VmaAllocator_T::CalcMemTypeParams(VmaAllocationCreateInfo& inoutCreateInfo, uint32_t memTypeIndex, VkDeviceSize size, size_t allocationCount)
{
	{
		const uint32_t  heapIndex; // 14970
		VmaBudget heapBudget; // 14971
		VmaAllocator_T::MemoryTypeIndexToHeapIndex(
						uint32_t memTypeIndex);  // 14970
	}
} /* size: 182 */

// <00CD1B7A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:14981
// function calls: 2
void VmaAllocator_T::CalcAllocationParams(VmaAllocationCreateInfo& inoutCreateInfo, bool dedicatedRequired, bool dedicatedPreferred)
{
	VmaBlockVector::HasExplicitBlockSize(); // 15011
	VmaBlockVector::GetPriority(); // 15017
} /* size: 128, inline expansions: 2 (10 bytes) */

// <00CD1848> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15050
// variables: 6
// function calls: 2
void VmaAllocator_T::AllocateMemory(const VkMemoryRequirements& vkMemReq, bool requiresDedicatedAllocation, bool prefersDedicatedAllocation, VkBuffer dedicatedBuffer, VkImage dedicatedImage, VkFlags dedicatedBufferImageUsage, const VmaAllocationCreateInfo& createInfo, VmaSuballocationType suballocType, size_t allocationCount, VmaAllocation* pAllocations)
{
	VmaAllocationCreateInfo createInfoFinal; // 15071
	VkResult res; // 15072
	{
		VmaBlockVector& blockVector; // 15078
		VmaBlockVector::GetMemoryTypeIndex(); // 15079
	}
	{
		uint32_t memoryTypeBits; // 15098
		uint32_t memTypeIndex; // 15099
		{
			VmaBlockVector* blockVector; // 15106
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 15062
} /* size: 601, variables: 2, inline expansions: 1 (14 bytes) */

// <00CD1549> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15139
// variables: 6
// function calls: 9
void VmaAllocator_T::FreeMemory(size_t allocationCount, const VmaAllocation* pAllocations)
{
	{
		size_t allocIndex; // 15145
		{
			VmaAllocation allocation; // 15147
			{
				VmaBlockVector* pBlockVector; // 15162
				VmaPool hPool; // 15163
				{
					const uint32_t  memTypeIndex; // 15170
					VmaAllocation_T::GetMemoryTypeIndex(); // 15170
				}
				VmaDeviceMemoryBlock::GetParentPool(); // 12129
				VmaAllocation_T::GetParentPool(); // 15163
			}
			VmaAllocation_T::GetType(); // 15158
			VmaAllocator_T::GetAllocationCallbacks(); // 12301
			{
				const size_t  len; // 3896
				VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
					void* ptr);  // 3862
				vma_delete_array<char>(const VkAllocationCallbacks* pAllocationCallbacks,
							char* ptr,
							size_t count);  // 3897
			}
			VmaFreeString(const VkAllocationCallbacks* allocs,
					char* str);  // 12301
			VmaAllocation_T::FreeName(
				VmaAllocator hAllocator);  // 15156
		}
	}
} /* size: 193 */

// <00CD0B30> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15187
// variables: 12
// function calls: 36
void VmaAllocator_T::CalculateStatistics(VmaTotalStatistics* pStats)
{
	{
		uint32_t i; // 15191
		VmaClearStatistics(VmaStatistics& outStats); // 3952
		VmaClearDetailedStatistics(VmaDetailedStatistics& outStats); // 15192
	}
	{
		uint32_t i; // 15193
		VmaClearStatistics(VmaStatistics& outStats); // 3952
		VmaClearDetailedStatistics(VmaDetailedStatistics& outStats); // 15194
	}
	{
		uint32_t memTypeIndex; // 15197
		{
			const VmaBlockVector* pBlockVector; // 15199
		}
		VmaAllocator_T::GetMemoryTypeCount(); // 15197
	}
	{
		VmaMutexLockRead lock; // 15206
		{
			VmaPool pool; // 15207
			{
				VmaBlockVector& blockVector; // 15209
				const uint32_t  memTypeIndex; // 15210
				VmaBlockVector::GetMemoryTypeIndex(); // 15210
			}
			VmaIntrusiveLinkedList<VmaPoolListItemTraits>::Front(); // 15207
			GetNext(const ItemType* item); // 5103
			GetNext(const ItemType* item); // 15207
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 16
		CVMAThreadRWLock::LockRead(); // 4012
		VmaMutexLockRead::VmaMutexLockRead(
				CVMAThreadRWLock& mutex,
				bool useMutex);  // 15206
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 21
		CVMAThreadRWLock::UnlockRead(); // 4014
		VmaMutexLockRead::~VmaMutexLockRead(); // 15214
	}
	{
		uint32_t memTypeIndex; // 15217
		VmaAllocator_T::GetMemoryTypeCount(); // 15217
	}
	{
		uint32_t memTypeIndex; // 15223
		{
			const uint32_t  memHeapIndex; // 15225
			VmaAddStatistics(VmaStatistics& inoutStats,
					const VmaStatistics& src);  // 3977
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3979
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3980
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3981
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3982
			VmaAddDetailedStatistics(VmaDetailedStatistics& inoutStats,
						const VmaDetailedStatistics& src);  // 15226
		}
		VmaAllocator_T::GetMemoryTypeCount(); // 15223
	}
	{
		uint32_t memHeapIndex; // 15230
		VmaAllocator_T::GetMemoryHeapCount(); // 15230
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3979
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3980
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3981
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3982
		VmaAddStatistics(VmaStatistics& inoutStats,
				const VmaStatistics& src);  // 3977
		VmaAddDetailedStatistics(VmaDetailedStatistics& inoutStats,
					const VmaDetailedStatistics& src);  // 15231
	}
	VmaClearStatistics(VmaStatistics& outStats); // 3952
	VmaClearDetailedStatistics(VmaDetailedStatistics& outStats); // 15190
} /* size: 1353, inline expansions: 2 (79 bytes) */

// <00CD0315> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15239
// variables: 5
// function calls: 29
void VmaAllocator_T::GetHeapBudgets(VmaBudget* outBudgets, uint32_t firstHeap, uint32_t heapCount)
{
	{
		VmaMutexLockRead lockRead; // 15246
		{
			uint32_t i; // 15247
			{
				const uint32_t  heapIndex; // 15249
				__atomic_base<unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<unsigned int>::operator std::__atomic_base<unsigned int>::__int_type(); // 15251
				__atomic_base<unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<unsigned int>::operator std::__atomic_base<unsigned int>::__int_type(); // 15252
				__atomic_base<long unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<long unsigned int>::operator std::__atomic_base<long unsigned int>::__int_type(); // 15253
				__atomic_base<long unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<long unsigned int>::operator std::__atomic_base<long unsigned int>::__int_type(); // 15254
				min<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 15267
			}
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 16
		CVMAThreadRWLock::LockRead(); // 4012
		VmaMutexLockRead::VmaMutexLockRead(
				CVMAThreadRWLock& mutex,
				bool useMutex);  // 15246
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 21
		CVMAThreadRWLock::UnlockRead(); // 4014
		VmaMutexLockRead::~VmaMutexLockRead(); // 15270
	}
	{
		uint32_t i; // 15280
		{
			const uint32_t  heapIndex; // 15282
			__atomic_base<unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<unsigned int>::operator std::__atomic_base<unsigned int>::__int_type(); // 15284
			__atomic_base<unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<unsigned int>::operator std::__atomic_base<unsigned int>::__int_type(); // 15285
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<long unsigned int>::operator std::__atomic_base<long unsigned int>::__int_type(); // 15286
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<long unsigned int>::operator std::__atomic_base<long unsigned int>::__int_type(); // 15287
		}
	}
	__atomic_base<unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<unsigned int>::operator std::__atomic_base<unsigned int>::__int_type(); // 15244
} /* size: 796, inline expansions: 2 (12 bytes) */

// <00CD00C5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15295
// function calls: 10
void VmaAllocator_T::GetAllocationInfo(VmaAllocation hAllocation, VmaAllocationInfo* pAllocationInfo)
{
	VmaAllocation_T::GetMemoryTypeIndex(); // 15297
	VmaDeviceMemoryBlock::GetDeviceMemory(); // 12143
	VmaAllocation_T::GetMemory(); // 15298
	VmaAllocation_T::GetOffset(); // 12110
	VmaAllocation_T::GetOffset(); // 15299
	VmaAllocation_T::GetSize(); // 15300
	VmaAllocation_T::GetUserData(); // 15302
	VmaAllocation_T::GetName(); // 15303
	VmaDeviceMemoryBlock::GetParentPool(); // 12129
	VmaAllocation_T::GetParentPool(); // 15304
} /* size: 201, inline expansions: 10 (133 bytes) */

// <00CCF83E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15307
// variables: 6
// function calls: 29
void VmaAllocator_T::CreatePool(const VmaPoolCreateInfo* pCreateInfo, VmaPool* pPool)
{
	VmaPoolCreateInfo newCreateInfo; // 15311
	const VkDeviceSize  preferredBlockSize; // 15338
	VkResult res; // 15342
	{
		VmaMutexLockWrite lock; // 15352
		CVMAThreadRWLock::LockWrite(); // 4028
		VmaMutexLockWrite::VmaMutexLockWrite(
					CVMAThreadRWLock& mutex,
					bool useMutex);  // 15352
		VmaPool_T::SetId(
			uint32_t id);  // 15353
		VmaIntrusiveLinkedList<VmaPoolListItemTraits>::IsEmpty(); // 5166
		VmaIntrusiveLinkedList<VmaPoolListItemTraits>::PushBack(
			ItemType* item);  // 5163
		VmaIntrusiveLinkedList<VmaPoolListItemTraits>::PushBack(
			ItemType* item);  // 15354
		CVMAThreadRWLock::UnlockWrite(); // 4030
		VmaMutexLockWrite::~VmaMutexLockWrite(); // 15355
	}
	VmaAllocator_T::GetMemoryTypeCount(); // 15328
	VmaAllocator_T::MemoryTypeIndexToHeapIndex(
					uint32_t memTypeIndex);  // 14481
	VmaAlignUp<long unsigned int>(long unsigned int val,
					long unsigned int alignment);  // 14484
	VmaAllocator_T::CalcPreferredBlockSize(
				uint32_t memTypeIndex);  // 15338
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 11696
	VmaMalloc(VmaAllocator hAllocator,
			size_t size,
			size_t alignment);  // 11707
	VmaAllocate<VmaPool_T>(VmaAllocator hAllocator); // 15340
	{
		size_t i; // 12347
		{
			VkResult res; // 12349
		}
	}
	VmaBlockVector::CreateMinBlocks(); // 15342
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::IsEmpty(); // 6202
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::~VmaIntrusiveLinkedList(); // 6206
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 11
	CVMAThreadRWLock::~CVMAThreadRWLock(); // 6206
	VmaDedicatedAllocationList::~VmaDedicatedAllocationList(); // 13994
	VmaPool_T::~VmaPool_T(); // 11721
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 11701
	VmaFree(VmaAllocator hAllocator,
		void* ptr);  // 11722
	vma_delete<VmaPool_T>(VmaAllocator hAllocator,
				VmaPool_T* ptr);  // 11717
	vma_delete<VmaPool_T>(VmaAllocator hAllocator,
				VmaPool_T* ptr);  // 15345
} /* size: 751, variables: 3, inline expansions: 21 (940 bytes) */

// <00CCF2BB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15360
// variable: 1
// function calls: 22
void VmaAllocator_T::DestroyPool(VmaPool pool)
{
	{
		VmaMutexLockWrite lock; // 15364
		CVMAThreadRWLock::LockWrite(); // 4028
		VmaMutexLockWrite::VmaMutexLockWrite(
					CVMAThreadRWLock& mutex,
					bool useMutex);  // 15364
		GetPrev(const ItemType* item); // 5288
		GetNext(const ItemType* item); // 5290
		GetNext(const ItemType* item); // 5298
		GetPrev(const ItemType* item); // 5300
		VmaIntrusiveLinkedList<VmaPoolListItemTraits>::Remove(
			ItemType* item);  // 15365
		CVMAThreadRWLock::UnlockWrite(); // 4030
		VmaMutexLockWrite::~VmaMutexLockWrite(); // 15366
	}
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::IsEmpty(); // 6202
	VmaIntrusiveLinkedList<VmaDedicatedAllocationListItemTraits>::~VmaIntrusiveLinkedList(); // 6206
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 11
	CVMAThreadRWLock::~CVMAThreadRWLock(); // 6206
	VmaDedicatedAllocationList::~VmaDedicatedAllocationList(); // 13994
	VmaPool_T::~VmaPool_T(); // 11721
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 11701
	VmaFree(VmaAllocator hAllocator,
		void* ptr);  // 11722
	vma_delete<VmaPool_T>(VmaAllocator hAllocator,
				VmaPool_T* ptr);  // 11717
	vma_delete<VmaPool_T>(VmaAllocator hAllocator,
				VmaPool_T* ptr);  // 15368
} /* size: 325, inline expansions: 13 (599 bytes) */

// <00CF7C46> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15371
// function call: 1
void VmaAllocator_T::GetPoolStatistics(VmaPool pool, VmaStatistics* pPoolStats)
{
	VmaClearStatistics(VmaStatistics& outStats); // 15373
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CCF285> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15371
void VmaAllocator_T::GetPoolStatistics(VmaPool pool, VmaStatistics* pPoolStats)
{
} /* size: 0 */

// <00CF7CF7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15378
// function calls: 2
void VmaAllocator_T::CalculatePoolStatistics(VmaPool pool, VmaDetailedStatistics* pPoolStats)
{
	VmaClearStatistics(VmaStatistics& outStats); // 3952
	VmaClearDetailedStatistics(VmaDetailedStatistics& outStats); // 15380
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CCF24F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15378
void VmaAllocator_T::CalculatePoolStatistics(VmaPool pool, VmaDetailedStatistics* pPoolStats)
{
} /* size: 0 */

// <00CF908D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15385
// function call: 1
void VmaAllocator_T::SetCurrentFrameIndex(uint32_t frameIndex)
{
	__atomic_base<unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 15387
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CCF226> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15385
void VmaAllocator_T::SetCurrentFrameIndex(uint32_t frameIndex)
{
} /* size: 0 */

// <00CCF1FD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15397
void VmaAllocator_T::CheckPoolCorruption(VmaPool hPool)
{
} /* size: 0 */

// <00CF7DCC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15402
// variables: 2
// function calls: 10
void VmaAllocator_T::CheckCorruption(uint32_t memoryTypeBits)
{
	VkResult finalRes; // 15404
	{
		VmaMutexLockRead lock; // 15428
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 16
		CVMAThreadRWLock::LockRead(); // 4012
		VmaMutexLockRead::VmaMutexLockRead(
				CVMAThreadRWLock& mutex,
				bool useMutex);  // 15428
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 21
		CVMAThreadRWLock::UnlockRead(); // 4014
		VmaMutexLockRead::~VmaMutexLockRead(); // 15446
	}
} /* size: 0, variables: 1 */

// <00CCF168> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15402
// variables: 7
void VmaAllocator_T::CheckCorruption(uint32_t memoryTypeBits)
{
	VkResult finalRes; // 15404
	{
		uint32_t memTypeIndex; // 15407
		{
			const VmaBlockVector* pBlockVector; // 15409
			{
				VkResult localRes; // 15412
			}
		}
	}
	{
		VmaMutexLockRead lock; // 15428
		{
			VmaPool pool; // 15429
			{
				VkResult localRes; // 15433
			}
		}
	}
} /* size: 0, variables: 1 */

// <00CCECE7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15451
// variables: 7
// function calls: 15
void VmaAllocator_T::AllocateVulkanMemory(const VkMemoryAllocateInfo* pAllocateInfo, VkDeviceMemory* pMemory)
{
	AtomicTransactionalIncrement<std::atomic<unsigned int> > deviceMemoryCountIncrement; // 15453
	const uint64_t  prevDeviceMemoryCount; // 15454
	const uint32_t  heapIndex; // 15462
	VkResult res; // 15489
	{
		const VkDeviceSize  heapSize; // 15467
		VkDeviceSize blockBytes; // 15468
		{
			const VkDeviceSize  blockBytesAfterAllocation; // 15471
			__atomic_base<long unsigned int>::compare_exchange_strong(
						__int_type& __i1,
						__int_type __i2,
						memory_order __m1,
						memory_order __m2);  // 592
			__atomic_base<long unsigned int>::compare_exchange_strong(
						__int_type& __i1,
						__int_type __i2,
						memory_order __m);  // 15476
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 361
		__atomic_base<long unsigned int>::operator std::__atomic_base<long unsigned int>::__int_type(); // 15468
	}
	__atomic_base<unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 4062
	AtomicTransactionalIncrement<std::atomic<unsigned int> >::Increment(
			atomic<unsigned int>* atomic);  // 15454
	VmaAllocator_T::MemoryTypeIndexToHeapIndex(
					uint32_t memTypeIndex);  // 15462
	__atomic_base<long unsigned int>::operator+=(
			__int_type __i);  // 15484
	__atomic_base<unsigned int>::operator++(); // 15486
	VmaAllocator_T::GetAllocationCallbacks(); // 15489
	__atomic_base<unsigned int>::operator--(); // 15507
	__atomic_base<long unsigned int>::operator-=(
			__int_type __i);  // 15508
	__atomic_base<unsigned int>::operator--(); // 4055
	AtomicTransactionalIncrement<std::atomic<unsigned int> >::~AtomicTransactionalIncrement(); // 15512
	__atomic_base<unsigned int>::operator++(); // 15494
} /* size: 279, variables: 4, inline expansions: 11 (103 bytes) */

// <00CCEB0E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15514
// variable: 1
// function calls: 5
void VmaAllocator_T::FreeVulkanMemory(uint32_t memoryType, VkDeviceSize size, VkDeviceMemory hMemory)
{
	const uint32_t  heapIndex; // 15525
	VmaAllocator_T::GetAllocationCallbacks(); // 15523
	VmaAllocator_T::MemoryTypeIndexToHeapIndex(
					uint32_t memTypeIndex);  // 15525
	__atomic_base<unsigned int>::operator--(); // 15526
	__atomic_base<long unsigned int>::operator-=(
			__int_type __i);  // 15527
	__atomic_base<unsigned int>::operator--(); // 15529
} /* size: 126, variables: 1, inline expansions: 5 (53 bytes) */

// <00CF80E5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15532
// variable: 1
void VmaAllocator_T::BindVulkanBuffer(VkDeviceMemory memory, VkDeviceSize memoryOffset, VkBuffer buffer, const void* pNext)
{
	{
		VkBindBufferMemoryInfoKHR bindBufferMemoryInfo; // 15544
	}
} /* size: 187 */

// <00CF8197> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15563
// variable: 1
void VmaAllocator_T::BindVulkanImage(VkDeviceMemory memory, VkDeviceSize memoryOffset, VkImage image, const void* pNext)
{
	{
		VkBindImageMemoryInfoKHR bindBufferMemoryInfo; // 15575
	}
} /* size: 187 */

// <00CF8249> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15594
// variables: 3
// function calls: 7
void VmaAllocator_T::Map(VmaAllocation hAllocation, void** ppData)
{
	VmaAllocation_T::GetType(); // 15596
	{
		const VmaDeviceMemoryBlock* pBlock; // 15600
		char* pBytes; // 15601
		VkResult res; // 15602
		VmaDeviceMemoryBlock::Map(
			VmaAllocator hAllocator,
			uint32_t count,
			void** ppData);  // 15602
		VmaAllocation_T::GetBlock(); // 15600
		VmaAllocation_T::GetOffset(); // 12110
		VmaAllocation_T::GetOffset(); // 15605
		VmaAllocation_T::BlockAllocMap(); // 15606
	}
	VmaAllocator_T::Map(
		VmaAllocation hAllocation,
		void** ppData);  // 15594
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CCE9C7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15594
// variables: 3
void VmaAllocator_T::Map(VmaAllocation hAllocation, void** ppData)
{
	{
		const VmaDeviceMemoryBlock* pBlock; // 15600
		char* pBytes; // 15601
		VkResult res; // 15602
	}
} /* size: 0 */

// <00CF8477> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15619
// variable: 1
// function calls: 8
void VmaAllocator_T::Unmap(VmaAllocation hAllocation)
{
	VmaAllocation_T::GetType(); // 15621
	VmaAllocation_T::IsPersistentMap(); // 12251
	VmaAllocation_T::DedicatedAllocUnmap(
				VmaAllocator hAllocator);  // 12244
	VmaAllocation_T::DedicatedAllocUnmap(
				VmaAllocator hAllocator);  // 15631
	{
		const VmaDeviceMemoryBlock* pBlock; // 15625
		VmaAllocation_T::GetBlock(); // 15625
		VmaAllocation_T::BlockAllocUnmap(); // 15626
		VmaDeviceMemoryBlock::Unmap(
			VmaAllocator hAllocator,
			uint32_t count);  // 15627
	}
	VmaAllocator_T::Unmap(
		VmaAllocation hAllocation);  // 15619
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00CCE98F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15619
// variable: 1
void VmaAllocator_T::Unmap(VmaAllocation hAllocation)
{
	{
		const VmaDeviceMemoryBlock* pBlock; // 15625
	}
} /* size: 0 */

// <00CF86B5> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15638
// variables: 2
// function calls: 4
void VmaAllocator_T::BindBufferMemory(VmaAllocation hAllocation, VkDeviceSize allocationLocalOffset, VkBuffer hBuffer, const void* pNext)
{
	VkResult res; // 15644
	VmaAllocation_T::GetType(); // 15645
	VmaAllocation_T::GetMemory(); // 15648
	{
		const VmaDeviceMemoryBlock* pBlock; // 15652
		VmaAllocation_T::GetBlock(); // 15652
	}
	VmaAllocator_T::BindBufferMemory(
			VmaAllocation hAllocation,
			VkDeviceSize allocationLocalOffset,
			VkBuffer hBuffer,
			const void* pNext);  // 15638
} /* size: 74, variables: 1, inline expansions: 3 (30 bytes) */

// <00CCE923> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15638
// variables: 2
void VmaAllocator_T::BindBufferMemory(VmaAllocation hAllocation, VkDeviceSize allocationLocalOffset, VkBuffer hBuffer, const void* pNext)
{
	VkResult res; // 15644
	{
		const VmaDeviceMemoryBlock* pBlock; // 15652
	}
} /* size: 0, variables: 1 */

// <00CF888F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15663
// variables: 2
// function calls: 4
void VmaAllocator_T::BindImageMemory(VmaAllocation hAllocation, VkDeviceSize allocationLocalOffset, VkImage hImage, const void* pNext)
{
	VkResult res; // 15669
	VmaAllocation_T::GetType(); // 15670
	VmaAllocation_T::GetMemory(); // 15673
	{
		VmaDeviceMemoryBlock* pBlock; // 15677
		VmaAllocation_T::GetBlock(); // 15677
	}
	VmaAllocator_T::BindImageMemory(
			VmaAllocation hAllocation,
			VkDeviceSize allocationLocalOffset,
			VkImage hImage,
			const void* pNext);  // 15663
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00CCE8B7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15663
// variables: 2
void VmaAllocator_T::BindImageMemory(VmaAllocation hAllocation, VkDeviceSize allocationLocalOffset, VkImage hImage, const void* pNext)
{
	VkResult res; // 15669
	{
		VmaDeviceMemoryBlock* pBlock; // 15677
	}
} /* size: 0, variables: 1 */

// <00CF8F4D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15688
// variables: 2
void VmaAllocator_T::FlushOrInvalidateAllocation(VmaAllocation hAllocation, VkDeviceSize offset, VkDeviceSize size, VMA_CACHE_OPERATION op)
{
	VkResult res; // 15693
	VkMappedMemoryRange memRange; // 15695
} /* size: 0, variables: 2 */

// <00CCE2B1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15714
// variables: 7
// function calls: 19
void VmaAllocator_T::FlushOrInvalidateAllocations(uint32_t allocationCount, const VmaAllocation* allocations, const VkDeviceSize* offsets, const VkDeviceSize* sizes, VMA_CACHE_OPERATION op)
{
	RangeVector ranges; // 15722
	VkResult res; // 15736
	{
		uint32_t allocIndex; // 15724
		{
			const VmaAllocation  alloc; // 15726
			const VkDeviceSize  offset; // 15727
			const VkDeviceSize  size; // 15728
			VkMappedMemoryRange newRange; // 15729
			VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::size(); // 4381
			VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::data(); // 4404
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 4404
			VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::resize(
				size_t newCount,
				bool freeMemory);  // 4382
			VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::data(); // 4338
			VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::data(); // 4383
			VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::push_back(
					const VkMappedMemoryRange& src);  // 15732
		}
	}
	VmaAllocator_T::GetAllocationCallbacks(); // 15722
	VmaStlAllocator<VkMappedMemoryRange>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 15722
	VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::VmaVector(
			const VmaStlAllocator<VkMappedMemoryRange>& allocator);  // 4371
	VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::VmaSmallVector(
			const VmaStlAllocator<VkMappedMemoryRange>& allocator);  // 15722
	VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::empty(); // 15737
	VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::data(); // 4338
	VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::data(); // 15742
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::~VmaVector(); // 4334
	VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::~VmaSmallVector(); // 15753
	VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::data(); // 4338
	VmaSmallVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange>, 16>::data(); // 15745
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <00CCDF11> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15755
// variables: 3
// function calls: 13
void VmaAllocator_T::FreeDedicatedMemory(const VmaAllocation allocation)
{
	const uint32_t  memTypeIndex; // 15759
	VmaPool parentPool; // 15760
	VkDeviceMemory hMemory; // 15772
	VmaAllocation_T::GetMemoryTypeIndex(); // 15759
	VmaDeviceMemoryBlock::GetParentPool(); // 12129
	VmaAllocation_T::GetParentPool(); // 15760
	VmaDeviceMemoryBlock::GetDeviceMemory(); // 12143
	VmaAllocation_T::GetMemory(); // 15772
	VmaAllocation_T::GetSize(); // 15784
	VmaAllocation_T::GetSize(); // 15786
	VmaAllocation_T::GetMemoryTypeIndex(); // 15786
	VmaAllocator_T::MemoryTypeIndexToHeapIndex(
					uint32_t memTypeIndex);  // 15786
	__atomic_base<long unsigned int>::operator-=(
			__int_type __i);  // 11198
	__atomic_base<unsigned int>::operator--(); // 11200
	__atomic_base<unsigned int>::operator++(); // 11202
	VmaCurrentBudgetData::RemoveAllocation(
			uint32_t heapIndex,
			VkDeviceSize allocationSize);  // 15786
} /* size: 265, variables: 3, inline expansions: 13 (201 bytes) */

// <00CCDD79> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15792
// variables: 5
// function calls: 4
void VmaAllocator_T::CalculateGpuDefragmentationMemoryTypeBits()
{
	VkBufferCreateInfo dummyBufCreateInfo; // 15794
	uint32_t memoryTypeBits; // 15797
	VkBuffer buf; // 15800
	VkResult res; // 15801
	{
		VkMemoryRequirements memReq; // 15806
		VmaAllocator_T::GetAllocationCallbacks(); // 15811
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3565
	VmaFillGpuDefragmentationBufferCreateInfo(VkBufferCreateInfo& outBufCreateInfo); // 15795
	VmaAllocator_T::GetAllocationCallbacks(); // 15801
} /* size: 0, variables: 4, inline expansions: 3 (0 bytes) */

// <00CF8A69> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15817
// variables: 2
// function calls: 2
void VmaAllocator_T::CalculateGlobalMemoryTypeBits()
{
	uint32_t memoryTypeBits; // 15822
	{
		uint32_t memTypeIndex; // 15827
		VmaAllocator_T::GetMemoryTypeCount(); // 15827
	}
	VmaAllocator_T::CalculateGlobalMemoryTypeBits(); // 15817
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00CCDD41> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15817
// variables: 2
void VmaAllocator_T::CalculateGlobalMemoryTypeBits()
{
	uint32_t memoryTypeBits; // 15822
	{
		uint32_t memTypeIndex; // 15827
	}
} /* size: 0, variables: 1 */

// <00CF8B0E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15839
// variables: 5
// function calls: 17
void VmaAllocator_T::GetFlushOrInvalidateRange(VmaAllocation allocation, VkDeviceSize offset, VkDeviceSize size, VkMappedMemoryRange& outRange)
{
	const uint32_t  memTypeIndex; // 15844
	VmaAllocation_T::GetMemoryTypeIndex(); // 15844
	VmaAllocator_T::IsMemoryTypeNonCoherent(
				uint32_t memTypeIndex);  // 15845
	{
		const VkDeviceSize  nonCoherentAtomSize; // 15847
		const VkDeviceSize  allocationSize; // 15848
		VmaAllocation_T::GetSize(); // 15848
		VmaDeviceMemoryBlock::GetDeviceMemory(); // 12143
		VmaAllocation_T::GetMemory(); // 15853
		VmaAllocation_T::GetType(); // 15855
		VmaAlignDown<long unsigned int>(long unsigned int val,
						long unsigned int alignment);  // 15858
		VmaAlignUp<long unsigned int>(long unsigned int val,
						long unsigned int alignment);  // 15866
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 15866
		{
			const VkDeviceSize  allocationOffset; // 15886
			const VkDeviceSize  blockSize; // 15888
			VmaAlignDown<long unsigned int>(long unsigned int val,
							long unsigned int alignment);  // 15874
			VmaAlignUp<long unsigned int>(long unsigned int val,
							long unsigned int alignment);  // 15883
			VmaAllocation_T::GetOffset(); // 12110
			VmaAllocation_T::GetOffset(); // 15886
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 15890
			VmaAllocation_T::GetBlock(); // 15888
			VmaBlockMetadata::GetSize(); // 15888
		}
	}
	VmaAllocator_T::GetFlushOrInvalidateRange(
					VmaAllocation allocation,
					VkDeviceSize offset,
					VkDeviceSize size,
					VkMappedMemoryRange& outRange);  // 15839
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00CCDCAC> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15839
// variables: 5
void VmaAllocator_T::GetFlushOrInvalidateRange(VmaAllocation allocation, VkDeviceSize offset, VkDeviceSize size, VkMappedMemoryRange& outRange)
{
	const uint32_t  memTypeIndex; // 15844
	{
		const VkDeviceSize  nonCoherentAtomSize; // 15847
		const VkDeviceSize  allocationSize; // 15848
		{
			const VkDeviceSize  allocationOffset; // 15886
			const VkDeviceSize  blockSize; // 15888
		}
	}
} /* size: 0, variables: 1 */

// <00CCD9B9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15903
// variables: 4
// function calls: 9
void VmaAllocator_T::UpdateVulkanBudget()
{
	VkPhysicalDeviceMemoryProperties2KHR memProps; // 15907
	VkPhysicalDeviceMemoryBudgetPropertiesEXT budgetProps; // 15909
	{
		VmaMutexLockWrite lockWrite; // 15915
		{
			uint32_t heapIndex; // 15917
			VmaAllocator_T::GetMemoryHeapCount(); // 15917
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 15921
		}
		CVMAThreadRWLock::LockWrite(); // 4028
		VmaMutexLockWrite::VmaMutexLockWrite(
					CVMAThreadRWLock& mutex,
					bool useMutex);  // 15915
		__atomic_base<unsigned int>::store(
			__int_type __i,
			memory_order __m);  // 369
		__atomic_base<unsigned int>::operator=(
				__int_type __i);  // 15937
		CVMAThreadRWLock::UnlockWrite(); // 4030
		VmaMutexLockWrite::~VmaMutexLockWrite(); // 15938
	}
	VmaPnextChainPushFront<VkPhysicalDeviceMemoryProperties2, VkPhysicalDeviceMemoryBudgetPropertiesEXT>(VkPhysicalDeviceMemoryProperties2* mainStruct,
														VkPhysicalDeviceMemoryBudgetPropertiesEXT* newStruct);  // 15910
} /* size: 478, variables: 2, inline expansions: 1 (14 bytes) */

// <00CCD94D> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15942
// variables: 2
void VmaAllocator_T::FillAllocation(const VmaAllocation hAllocation, uint8_t pattern)
{
	{
		void* pData; // 15948
		VkResult res; // 15949
	}
} /* size: 0 */

// <00CCD848> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15963
// variable: 1
// function calls: 2
void VmaAllocator_T::GetGpuDefragmentationMemoryTypeBits()
{
	uint32_t memoryTypeBits; // 15965
	__atomic_base<unsigned int>::load(
		memory_order __m);  // 15965
	__atomic_base<unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 15969
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CCB613> ../thirdparty/vulkan/vma/vk_mem_alloc.h:15975
// variables: 9
// function calls: 122
void VmaAllocator_T::PrintDetailedMap(VmaJsonWriter& json)
{
	{
		uint32_t memTypeIndex; // 15980
		{
			VmaBlockVector* pBlockVector; // 15982
			VmaDedicatedAllocationList& dedicatedAllocList; // 15983
			VmaStringBuilder::AddNumber(
					uint32_t num);  // 5700
			VmaJsonWriter::ContinueString(
					uint32_t n);  // 15987
			VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
			VmaVector<char, VmaStlAllocator<char> >::push_back(
					const char& src);  // 5436
			VmaStringBuilder::Add(
				char ch);  // 5722
			VmaJsonWriter::EndString(
					const char* pStr);  // 15988
			VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
			VmaVector<char, VmaStlAllocator<char> >::push_back(
					const char& src);  // 5436
			VmaStringBuilder::Add(
				char ch);  // 5722
			VmaJsonWriter::EndString(
					const char* pStr);  // 5638
			VmaJsonWriter::WriteString(
					const char* pStr);  // 15991
			VmaStringBuilder::AddNumber(
					uint64_t num);  // 5737
			VmaJsonWriter::WriteNumber(
					uint64_t n);  // 15992
			VmaBlockVector::GetPreferredBlockSize(); // 15992
			VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
			VmaVector<char, VmaStlAllocator<char> >::push_back(
					const char& src);  // 5436
			VmaStringBuilder::Add(
				char ch);  // 5722
			VmaJsonWriter::EndString(
					const char* pStr);  // 5638
			VmaJsonWriter::WriteString(
					const char* pStr);  // 15994
			VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
			VmaVector<char, VmaStlAllocator<char> >::push_back(
					const char& src);  // 5436
			VmaStringBuilder::Add(
				char ch);  // 5722
			VmaJsonWriter::EndString(
					const char* pStr);  // 5638
			VmaJsonWriter::WriteString(
					const char* pStr);  // 15997
			VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
			VmaVector<char, VmaStlAllocator<char> >::push_back(
					const char& src);  // 5436
			VmaStringBuilder::Add(
				char ch);  // 5604
			VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
			VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
			VmaJsonWriter::EndObject(); // 16000
		}
		VmaAllocator_T::GetMemoryTypeCount(); // 15980
	}
	{
		VmaMutexLockRead lock; // 16009
		{
			uint32_t memTypeIndex; // 16012
			{
				bool displayType; // 16014
				size_t index; // 16015
				{
					VmaPool pool; // 16016
					{
						VmaBlockVector& blockVector; // 16018
						VmaStringBuilder::AddNumber(
								uint64_t num);  // 5706
						VmaJsonWriter::ContinueString(
								uint64_t n);  // 16034
						VmaBlockVector::GetMemoryTypeIndex(); // 16019
						VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
						VmaVector<char, VmaStlAllocator<char> >::push_back(
								const char& src);  // 5436
						VmaStringBuilder::Add(
							char ch);  // 5722
						VmaJsonWriter::EndString(
								const char* pStr);  // 5638
						VmaJsonWriter::WriteString(
								const char* pStr);  // 16032
						VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
						VmaVector<char, VmaStlAllocator<char> >::push_back(
								const char& src);  // 5436
						VmaStringBuilder::Add(
							char ch);  // 5646
						VmaJsonWriter::BeginString(
								const char* pStr);  // 16033
						VmaPool_T::GetName(); // 16035
						VmaPool_T::GetName(); // 16038
						VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
						VmaVector<char, VmaStlAllocator<char> >::push_back(
								const char& src);  // 5436
						VmaStringBuilder::Add(
							char ch);  // 5722
						VmaJsonWriter::EndString(
								const char* pStr);  // 16040
						VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
						VmaVector<char, VmaStlAllocator<char> >::push_back(
								const char& src);  // 5436
						VmaStringBuilder::Add(
							char ch);  // 5722
						VmaJsonWriter::EndString(
								const char* pStr);  // 5638
						VmaJsonWriter::WriteString(
								const char* pStr);  // 16042
						VmaStringBuilder::AddNumber(
								uint64_t num);  // 5737
						VmaJsonWriter::WriteNumber(
								uint64_t n);  // 16043
						VmaBlockVector::GetPreferredBlockSize(); // 16043
						VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
						VmaVector<char, VmaStlAllocator<char> >::push_back(
								const char& src);  // 5436
						VmaStringBuilder::Add(
							char ch);  // 5722
						VmaJsonWriter::EndString(
								const char* pStr);  // 5638
						VmaJsonWriter::WriteString(
								const char* pStr);  // 16045
						VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
						VmaVector<char, VmaStlAllocator<char> >::push_back(
								const char& src);  // 5436
						VmaStringBuilder::Add(
							char ch);  // 5722
						VmaJsonWriter::EndString(
								const char* pStr);  // 5638
						VmaJsonWriter::WriteString(
								const char* pStr);  // 16048
						VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
						VmaVector<char, VmaStlAllocator<char> >::push_back(
								const char& src);  // 5436
						VmaStringBuilder::Add(
							char ch);  // 5604
						VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
						VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
						VmaJsonWriter::EndObject(); // 16051
						VmaStringBuilder::AddNumber(
								uint32_t num);  // 5700
						VmaJsonWriter::ContinueString(
								uint32_t n);  // 16024
						VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
						VmaVector<char, VmaStlAllocator<char> >::push_back(
								const char& src);  // 5436
						VmaStringBuilder::Add(
							char ch);  // 5722
						VmaJsonWriter::EndString(
								const char* pStr);  // 16025
					}
					VmaIntrusiveLinkedList<VmaPoolListItemTraits>::Front(); // 16016
					GetNext(const ItemType* item); // 5103
					GetNext(const ItemType* item); // 16016
				}
				VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
				VmaVector<char, VmaStlAllocator<char> >::push_back(
						const char& src);  // 5436
				VmaStringBuilder::Add(
					char ch);  // 5629
				VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
				VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5632
				VmaJsonWriter::EndArray(); // 16056
			}
			VmaAllocator_T::GetMemoryTypeCount(); // 16012
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 16
		CVMAThreadRWLock::LockRead(); // 4012
		VmaMutexLockRead::VmaMutexLockRead(
				CVMAThreadRWLock& mutex,
				bool useMutex);  // 16009
		VmaIntrusiveLinkedList<VmaPoolListItemTraits>::IsEmpty(); // 16010
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 21
		CVMAThreadRWLock::UnlockRead(); // 4014
		VmaMutexLockRead::~VmaMutexLockRead(); // 16059
	}
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 15977
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5604
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
	VmaJsonWriter::EndObject(); // 16004
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5722
	VmaJsonWriter::EndString(
			const char* pStr);  // 5638
	VmaJsonWriter::WriteString(
			const char* pStr);  // 16006
	VmaVector<char, VmaStlAllocator<char> >::size(); // 4204
	VmaVector<char, VmaStlAllocator<char> >::push_back(
			const char& src);  // 5436
	VmaStringBuilder::Add(
		char ch);  // 5604
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::size(); // 4138
	VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::pop_back(); // 5607
	VmaJsonWriter::EndObject(); // 16060
} /* size: 2455, inline expansions: 22 (604 bytes) */

// <00CCB393> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16085
// variable: 1
// function calls: 2
void vmaDestroyAllocator(VmaAllocator allocator)
{
	{
		VkAllocationCallbacks allocationCallbacks; // 16091
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 3850
		vma_delete<VmaAllocator_T>(const VkAllocationCallbacks* pAllocationCallbacks,
						VmaAllocator_T* ptr);  // 16092
	}
} /* size: 0 */

// <00CCB31B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16096
// function call: 1
void vmaGetAllocatorInfo(VmaAllocator allocator, VmaAllocatorInfo* pAllocatorInfo)
{
	VmaAllocator_T::GetPhysicalDevice(); // 16100
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CCB2C8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16104
void vmaGetPhysicalDeviceProperties(VmaAllocator allocator, const VkPhysicalDeviceProperties ** ppPhysicalDeviceProperties)
{
} /* size: 0 */

// <00CCB275> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16112
void vmaGetMemoryProperties(VmaAllocator allocator, const VkPhysicalDeviceMemoryProperties ** ppPhysicalDeviceMemoryProperties)
{
} /* size: 0 */

// <00CCB225> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16120
void vmaGetMemoryTypeProperties(VmaAllocator allocator, uint32_t memoryTypeIndex, VkMemoryPropertyFlags* pFlags)
{
} /* size: 0 */

// <00CCB142> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16130
// function calls: 2
void vmaSetCurrentFrameIndex(VmaAllocator allocator, uint32_t frameIndex)
{
	__atomic_base<unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 15387
	VmaAllocator_T::SetCurrentFrameIndex(
				uint32_t frameIndex);  // 16138
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CCB0D8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16141
void vmaCalculateStatistics(VmaAllocator allocator, VmaTotalStatistics* pStats)
{
} /* size: 0 */

// <00CC360A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16364
VkResult vmaFindMemoryTypeIndex(VmaAllocator allocator, uint32_t memoryTypeBits, const VmaAllocationCreateInfo* pAllocationCreateInfo, uint32_t* pMemoryTypeIndex)
{
} /* size: 0 */

// <00CC33DD> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16377
// variables: 7
// function calls: 2
VkResult vmaFindMemoryTypeIndexForBufferInfo(VmaAllocator allocator, const VkBufferCreateInfo* pBufferCreateInfo, const VmaAllocationCreateInfo* pAllocationCreateInfo, uint32_t* pMemoryTypeIndex)
{
	const VkDevice  hDev; // 16388
	const VmaVulkanFunctions* funcs; // 16389
	VkResult res; // 16390
	{
		VkDeviceBufferMemoryRequirements devBufMemReq; // 16396
		VkMemoryRequirements2 memReq; // 16399
	}
	{
		VkBuffer hBuffer; // 16409
		{
			VkMemoryRequirements memReq; // 16414
			VmaAllocator_T::GetAllocationCallbacks(); // 16420
		}
		VmaAllocator_T::GetAllocationCallbacks(); // 16410
	}
} /* size: 0, variables: 3 */

// <00CC31B0> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16427
// variables: 7
// function calls: 2
VkResult vmaFindMemoryTypeIndexForImageInfo(VmaAllocator allocator, const VkImageCreateInfo* pImageCreateInfo, const VmaAllocationCreateInfo* pAllocationCreateInfo, uint32_t* pMemoryTypeIndex)
{
	const VkDevice  hDev; // 16438
	const VmaVulkanFunctions* funcs; // 16439
	VkResult res; // 16440
	{
		VkDeviceImageMemoryRequirements devImgMemReq; // 16446
		VkMemoryRequirements2 memReq; // 16451
	}
	{
		VkImage hImage; // 16461
		{
			VkMemoryRequirements memReq; // 16466
			VmaAllocator_T::GetAllocationCallbacks(); // 16472
		}
		VmaAllocator_T::GetAllocationCallbacks(); // 16462
	}
} /* size: 0, variables: 3 */

// <00CC2E84> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16523
// function calls: 3
void vmaCalculatePoolStatistics(VmaAllocator allocator, VmaPool pool, VmaDetailedStatistics* pPoolStats)
{
	VmaClearStatistics(VmaStatistics& outStats); // 3952
	VmaClearDetailedStatistics(VmaDetailedStatistics& outStats); // 15380
	VmaAllocator_T::CalculatePoolStatistics(
				VmaPool pool,
				VmaDetailedStatistics* pPoolStats);  // 16532
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00CC2E3F> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16535
VkResult vmaCheckPoolCorruption(VmaAllocator allocator, VmaPool pool)
{
} /* size: 0 */

// <00CC2DBE> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16546
// function call: 1
void vmaGetPoolName(VmaAllocator allocator, VmaPool pool, const char ** ppName)
{
	VmaPool_T::GetName(); // 16557
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CC2A2B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16560
// variables: 3
// function calls: 11
void vmaSetPoolName(VmaAllocator allocator, VmaPool pool, const char* pName)
{
	VmaBlockVector::GetAllocator(); // 13998
	VmaAllocator_T::GetAllocationCallbacks(); // 13998
	{
		const size_t  len; // 3896
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 3862
		vma_delete_array<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					char* ptr,
					size_t count);  // 3897
	}
	VmaFreeString(const VkAllocationCallbacks* allocs,
			char* str);  // 13999
	{
		const size_t  len; // 3870
		const char* result; // 3871
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					size_t count);  // 3871
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3872
	}
	VmaCreateStringCopy(const VkAllocationCallbacks* allocs,
				const char* srcStr);  // 3866
	VmaCreateStringCopy(const VkAllocationCallbacks* allocs,
				const char* srcStr);  // 14003
	VmaPool_T::SetName(
		const char* pName);  // 16571
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00CC2937> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16574
// variable: 1
VkResult vmaAllocateMemory(VmaAllocator allocator, const VkMemoryRequirements* pVkMemoryRequirements, const VmaAllocationCreateInfo* pCreateInfo, VmaAllocation* pAllocation, VmaAllocationInfo* pAllocationInfo)
{
	VkResult result; // 16587
} /* size: 0, variables: 1 */

// <00CC280A> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16607
// variables: 2
VkResult vmaAllocateMemoryPages(VmaAllocator allocator, const VkMemoryRequirements* pVkMemoryRequirements, const VmaAllocationCreateInfo* pCreateInfo, size_t allocationCount, VmaAllocation* pAllocations, VmaAllocationInfo* pAllocationInfo)
{
	VkResult result; // 16626
	{
		size_t i; // 16640
	}
} /* size: 0, variables: 1 */

// <00CC24C3> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16728
void vmaFreeMemory(VmaAllocator allocator, VmaAllocation allocation)
{
} /* size: 0 */

// <00CC2453> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16748
void vmaFreeMemoryPages(VmaAllocator allocator, size_t allocationCount, const VmaAllocation* pAllocations)
{
} /* size: 0 */

// <00CC2210> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16799
// variable: 1
// function call: 1
void vmaGetAllocationMemoryProperties(VmaAllocator allocator, VmaAllocation allocation, VkMemoryPropertyFlags* pFlags)
{
	const uint32_t  memTypeIndex; // 16805
	VmaAllocation_T::GetMemoryTypeIndex(); // 16805
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00CC1BB7> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16832
// variable: 1
// function call: 1
VkResult vmaFlushAllocation(VmaAllocator allocator, VmaAllocation allocation, VkDeviceSize offset, VkDeviceSize size)
{
	const VkResult  res; // 16844
	VmaAllocator_T::FlushOrInvalidateAllocation(
					VmaAllocation hAllocation,
					VkDeviceSize offset,
					VkDeviceSize size,
					VMA_CACHE_OPERATION op);  // 16844
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00CC1A69> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16849
// variable: 1
// function call: 1
VkResult vmaInvalidateAllocation(VmaAllocator allocator, VmaAllocation allocation, VkDeviceSize offset, VkDeviceSize size)
{
	const VkResult  res; // 16861
	VmaAllocator_T::FlushOrInvalidateAllocation(
					VmaAllocation hAllocation,
					VkDeviceSize offset,
					VkDeviceSize size,
					VMA_CACHE_OPERATION op);  // 16861
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00CC19B8> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16866
// variable: 1
VkResult vmaFlushAllocations(VmaAllocator allocator, uint32_t allocationCount, const VmaAllocation* allocations, const VkDeviceSize* offsets, const VkDeviceSize* sizes)
{
	const VkResult  res; // 16886
} /* size: 0, variables: 1 */

// <00CC1907> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16891
// variable: 1
VkResult vmaInvalidateAllocations(VmaAllocator allocator, uint32_t allocationCount, const VmaAllocation* allocations, const VkDeviceSize* offsets, const VkDeviceSize* sizes)
{
	const VkResult  res; // 16911
} /* size: 0, variables: 1 */

// <00CC15A6> ../thirdparty/vulkan/vma/vk_mem_alloc.h:16916
// variable: 1
// function calls: 11
VkResult vmaCheckCorruption(VmaAllocator allocator, uint32_t memoryTypeBits)
{
	{
		VmaMutexLockRead lock; // 15428
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 16
		CVMAThreadRWLock::LockRead(); // 4012
		VmaMutexLockRead::VmaMutexLockRead(
				CVMAThreadRWLock& mutex,
				bool useMutex);  // 15428
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 21
		CVMAThreadRWLock::UnlockRead(); // 4014
		VmaMutexLockRead::~VmaMutexLockRead(); // 15446
	}
	VmaAllocator_T::CheckCorruption(
			uint32_t memoryTypeBits);  // 16926
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CC0C80> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17009
// variable: 1
// function calls: 5
VkResult vmaBindBufferMemory2(VmaAllocator allocator, VmaAllocation allocation, VkDeviceSize allocationLocalOffset, VkBuffer buffer, const void* pNext)
{
	VmaAllocation_T::GetType(); // 15645
	VmaAllocation_T::GetMemory(); // 15648
	{
		const VmaDeviceMemoryBlock* pBlock; // 15652
		VmaAllocation_T::GetBlock(); // 15652
	}
	VmaAllocator_T::BindBufferMemory(
			VmaAllocation hAllocation,
			VkDeviceSize allocationLocalOffset,
			VkBuffer hBuffer,
			const void* pNext);  // 15638
	VmaAllocator_T::BindBufferMemory(
			VmaAllocation hAllocation,
			VkDeviceSize allocationLocalOffset,
			VkBuffer hBuffer,
			const void* pNext);  // 17022
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00CC078B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17039
// variable: 1
// function calls: 5
VkResult vmaBindImageMemory2(VmaAllocator allocator, VmaAllocation allocation, VkDeviceSize allocationLocalOffset, VkImage image, const void* pNext)
{
	VmaAllocation_T::GetType(); // 15670
	VmaAllocation_T::GetMemory(); // 15673
	{
		VmaDeviceMemoryBlock* pBlock; // 15677
		VmaAllocation_T::GetBlock(); // 15677
	}
	VmaAllocator_T::BindImageMemory(
			VmaAllocation hAllocation,
			VkDeviceSize allocationLocalOffset,
			VkImage hImage,
			const void* pNext);  // 15663
	VmaAllocator_T::BindImageMemory(
			VmaAllocation hAllocation,
			VkDeviceSize allocationLocalOffset,
			VkImage hImage,
			const void* pNext);  // 17052
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00CC0190> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17241
VkResult vmaCreateAliasingBuffer(VmaAllocator allocator, VmaAllocation allocation, const VkBufferCreateInfo* pBufferCreateInfo, VkBuffer* pBuffer)
{
} /* size: 0 */

// <00CC0054> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17250
// variable: 1
// function calls: 2
VkResult vmaCreateAliasingBuffer2(VmaAllocator allocator, VmaAllocation allocation, VkDeviceSize allocationLocalOffset, const VkBufferCreateInfo* pBufferCreateInfo, VkBuffer* pBuffer)
{
	VkResult res; // 17278
	VmaAllocator_T::GetAllocationCallbacks(); // 17278
	VmaAllocator_T::GetAllocationCallbacks(); // 17291
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CBFD19> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17325
// variables: 5
// function calls: 3
VkResult vmaCreateImage(VmaAllocator allocator, const VkImageCreateInfo* pImageCreateInfo, const VmaAllocationCreateInfo* pAllocationCreateInfo, VkImage* pImage, VmaAllocation* pAllocation, VmaAllocationInfo* pAllocationInfo)
{
	VkResult res; // 17352
	{
		VmaSuballocationType suballocType; // 17359
		VkMemoryRequirements vkMemReq; // 17364
		bool requiresDedicatedAllocation; // 17365
		bool prefersDedicatedAllocation; // 17366
		VmaAllocation_T::InitBufferImageUsage(
					uint32_t bufferImageUsage);  // 17393
		VmaAllocator_T::GetAllocationCallbacks(); // 17410
	}
	VmaAllocator_T::GetAllocationCallbacks(); // 17352
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00CBFC6E> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17417
VkResult vmaCreateAliasingImage(VmaAllocator allocator, VmaAllocation allocation, const VkImageCreateInfo* pImageCreateInfo, VkImage* pImage)
{
} /* size: 0 */

// <00CBFB32> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17426
// variable: 1
// function calls: 2
VkResult vmaCreateAliasingImage2(VmaAllocator allocator, VmaAllocation allocation, VkDeviceSize allocationLocalOffset, const VkImageCreateInfo* pImageCreateInfo, VkImage* pImage)
{
	VkResult res; // 17451
	VmaAllocator_T::GetAllocationCallbacks(); // 17451
	VmaAllocator_T::GetAllocationCallbacks(); // 17464
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CBF93B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17497
// variable: 1
// function calls: 2
VkResult vmaCreateVirtualBlock(const VmaVirtualBlockCreateInfo* pCreateInfo, VmaVirtualBlock* pVirtualBlock)
{
	VkResult res; // 17506
	VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
			size_t size,
			size_t alignment);  // 3833
	VmaAllocate<VmaVirtualBlock_T>(const VkAllocationCallbacks* pAllocationCallbacks); // 17505
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CBF844> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17515
// variable: 1
// function calls: 2
void vmaDestroyVirtualBlock(VmaVirtualBlock virtualBlock)
{
	{
		VkAllocationCallbacks allocationCallbacks; // 17521
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 3850
		vma_delete<VmaVirtualBlock_T>(const VkAllocationCallbacks* pAllocationCallbacks,
						VmaVirtualBlock_T* ptr);  // 17522
	}
} /* size: 0 */

// <00CBF7E1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17526
// function call: 1
VkBool32 vmaIsVirtualBlockEmpty(VmaVirtualBlock virtualBlock)
{
	VmaVirtualBlock_T::IsEmpty(); // 17531
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CBF714> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17534
// function call: 1
void vmaGetVirtualAllocationInfo(VmaVirtualBlock virtualBlock, VmaVirtualAllocation allocation, VmaVirtualAllocationInfo* pVirtualAllocInfo)
{
	VmaVirtualBlock_T::GetAllocationInfo(
				VmaVirtualAllocation allocation,
				VmaVirtualAllocationInfo& outInfo);  // 17540
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CBF662> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17543
VkResult vmaVirtualAllocate(VmaVirtualBlock virtualBlock, const VmaVirtualAllocationCreateInfo* pCreateInfo, VmaVirtualAllocation* pAllocation, VkDeviceSize* pOffset)
{
} /* size: 0 */

// <00CBF5C4> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17553
// function call: 1
void vmaVirtualFree(VmaVirtualBlock virtualBlock, VmaVirtualAllocation allocation)
{
	VmaVirtualBlock_T::Free(
		VmaVirtualAllocation allocation);  // 17560
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CBF55B> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17564
// function call: 1
void vmaClearVirtualBlock(VmaVirtualBlock virtualBlock)
{
	VmaVirtualBlock_T::Clear(); // 17569
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CBF494> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17572
// function call: 1
void vmaSetVirtualAllocationUserData(VmaVirtualBlock virtualBlock, VmaVirtualAllocation allocation, void* pUserData)
{
	VmaVirtualBlock_T::SetAllocationUserData(
				VmaVirtualAllocation allocation,
				void* userData);  // 17578
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CBF3C1> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17581
// function calls: 2
void vmaGetVirtualBlockStatistics(VmaVirtualBlock virtualBlock, VmaStatistics* pStats)
{
	VmaClearStatistics(VmaStatistics& outStats); // 11344
	VmaVirtualBlock_T::GetStatistics(
			VmaStatistics& outStats);  // 17587
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CBF2C9> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17590
// function calls: 3
void vmaCalculateVirtualBlockStatistics(VmaVirtualBlock virtualBlock, VmaDetailedStatistics* pStats)
{
	VmaClearStatistics(VmaStatistics& outStats); // 3952
	VmaClearDetailedStatistics(VmaDetailedStatistics& outStats); // 11350
	VmaVirtualBlock_T::CalculateDetailedStatistics(
					VmaDetailedStatistics& outStats);  // 17596
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00CBEE64> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17601
// variables: 3
// function calls: 16
void vmaBuildVirtualBlockStatsString(VmaVirtualBlock virtualBlock, char** ppStatsString, VkBool32 detailedMap)
{
	const VkAllocationCallbacks* allocationCallbacks; // 17606
	VmaStringBuilder sb; // 17607
	VmaVirtualBlock_T::GetAllocationCallbacks(); // 17606
	VmaStlAllocator<char>::VmaStlAllocator(
			const VkAllocationCallbacks* pCallbacks);  // 5430
	VmaVector<char, VmaStlAllocator<char> >::VmaVector(
			const VmaStlAllocator<char>& allocator);  // 5430
	VmaStringBuilder::VmaStringBuilder(
			const VkAllocationCallbacks* allocationCallbacks);  // 17607
	VmaVector<char, VmaStlAllocator<char> >::size(); // 5433
	VmaStringBuilder::GetLength(); // 17609
	VmaVector<char, VmaStlAllocator<char> >::data(); // 5434
	VmaStringBuilder::GetData(); // 17609
	{
		const char* result; // 3883
		VmaMalloc(const VkAllocationCallbacks* pAllocationCallbacks,
				size_t size,
				size_t alignment);  // 3839
		VmaAllocateArray<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					size_t count);  // 3883
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3884
	}
	VmaCreateStringCopy(const VkAllocationCallbacks* allocs,
				const char* srcStr,
				size_t strLen);  // 3879
	VmaCreateStringCopy(const VkAllocationCallbacks* allocs,
				const char* srcStr,
				size_t strLen);  // 17609
	VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
		void* ptr);  // 4119
	VmaVector<char, VmaStlAllocator<char> >::~VmaVector(); // 5431
	VmaStringBuilder::~VmaStringBuilder(); // 17610
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <00CBECDB> ../thirdparty/vulkan/vma/vk_mem_alloc.h:17612
// variable: 1
// function calls: 4
void vmaFreeVirtualBlockStatsString(VmaVirtualBlock virtualBlock, char* pStatsString)
{
	VmaVirtualBlock_T::GetAllocationCallbacks(); // 17619
	{
		const size_t  len; // 3896
		VmaFree(const VkAllocationCallbacks* pAllocationCallbacks,
			void* ptr);  // 3862
		vma_delete_array<char>(const VkAllocationCallbacks* pAllocationCallbacks,
					char* ptr,
					size_t count);  // 3897
	}
	VmaFreeString(const VkAllocationCallbacks* allocs,
			char* str);  // 17619
} /* size: 0, inline expansions: 2 (0 bytes) */

