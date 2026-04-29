
//
// vulkan/vulkanimage.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 10
//

// <00D18FE4> vulkan/vulkanimage.cpp:14
// function calls: 2
void CVulkanImage::CVulkanImage(bool bOwnsObject)
{
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 24
} /* size: 70, inline expansions: 2 (14 bytes) */

// <00D18FBF> vulkan/vulkanimage.cpp:14
void CVulkanImage::CVulkanImage(bool bOwnsObject)
{
} /* size: 0 */

// <00D18EF5> vulkan/vulkanimage.cpp:33
// function call: 1
void CVulkanImage::~CVulkanImage()
{
	{
		{
		}
	}
	{
		{
		}
		CRenderDeviceVulkan::MemoryManager(); // 40
	}
} /* size: 0 */

// <00D18DB6> vulkan/vulkanimage.cpp:33
// function calls: 4
void CVulkanImage::~CVulkanImage()
{
	{
	}
	CRenderDeviceVulkan::MemoryManager(); // 40
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 49
	CVulkanImage::~CVulkanImage(); // 49
} /* size: 0, inline expansions: 4 (127 bytes) */

// <00D18D7A> vulkan/vulkanimage.cpp:33
// variables: 2
void CVulkanImage::~CVulkanImage()
{
	const char   __FUNCTION__; // 49293
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 39
	}
} /* size: 0, variables: 1 */

// <00D1920C> vulkan/vulkanimage.cpp:54
// variable: 1
void CVulkanImage::GetSubresourceIndex(uint32 nMipLevel, uint32 nArraySlice)
{
	uint32 nIndex; // 56
} /* size: 12, variables: 1 */

// <00D18C21> vulkan/vulkanimage.cpp:62
// variables: 3
// function call: 1
void CVulkanImage::InitializeSubResourceImageState(uint32 nNumMipLevels, uint32 nNumArraySlices, VkImageLayout initialState)
{
	const char   __FUNCTION__; // 49314
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 64
	}
	{
		uint32 nSubResource; // 75
	}
	CVulkanImage::SetAllSubResouceImageStates(
					VkImageLayout imageState);  // 68
} /* size: 0, variables: 1, inline expansions: 1 (48 bytes) */

// <00D19257> vulkan/vulkanimage.cpp:72
// variable: 1
void CVulkanImage::SetAllSubResouceImageStates(VkImageLayout imageState)
{
	{
		uint32 nSubResource; // 75
	}
} /* size: 0 */

// <00D18B3A> vulkan/vulkanimage.cpp:82
// variable: 1
// function call: 1
void CVulkanImage::SetSubResouceImageState(uint32 nMipLevel, uint32 nArraySlice, VkImageLayout imageState)
{
	uint32 nIndex; // 84
	CVulkanImage::GetSubresourceIndex(
				uint32 nMipLevel,
				uint32 nArraySlice);  // 84
} /* size: 20, variables: 1, inline expansions: 1 (4 bytes) */

// <00D18A94> vulkan/vulkanimage.cpp:89
// variable: 1
// function call: 1
void CVulkanImage::GetSubResourceImageState(uint32 nMipLevel, uint32 nArraySlice)
{
	uint32 nIndex; // 91
	CVulkanImage::GetSubresourceIndex(
				uint32 nMipLevel,
				uint32 nArraySlice);  // 91
} /* size: 20, variables: 1, inline expansions: 1 (4 bytes) */

