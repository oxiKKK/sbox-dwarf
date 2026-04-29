
//
// thirdparty/vulkan/inc/vulkan/vulkan_beta.h
//
//	referenced by: librendersystemvulkan.so
//
//	structs: 7
//	union: 1
//

// <00D366C5> ../thirdparty/vulkan/inc/vulkan/vulkan_beta.h:78
// member variables: 5
// struct size: 40
struct VkExecutionGraphPipelineScratchSizeAMDX {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkDeviceSize minSize; /* 16 8 */
	VkDeviceSize maxSize; /* 24 8 */
	VkDeviceSize sizeGranularity; /* 32 8 */
};

// <00D3672A> ../thirdparty/vulkan/inc/vulkan/vulkan_beta.h:86
// member variables: 9
// struct size: 64
struct VkExecutionGraphPipelineCreateInfoAMDX {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineCreateFlags flags; /* 16 4 */
	uint32_t stageCount; /* 20 4 */
	const VkPipelineShaderStageCreateInfo * pStages; /* 24 8 */
	const VkPipelineLibraryCreateInfoKHR * pLibraryInfo; /* 32 8 */
	VkPipelineLayout layout; /* 40 8 */
	VkPipeline basePipelineHandle; /* 48 8 */
	int32_t basePipelineIndex; /* 56 4 */
};

// <00D367D0> ../thirdparty/vulkan/inc/vulkan/vulkan_beta.h:98
union VkDeviceOrHostAddressConstAMDX {
	VkDeviceAddress deviceAddress; /* 0 8 */
	const void * hostAddress; /* 0 8 */
};

// <00D36802> ../thirdparty/vulkan/inc/vulkan/vulkan_beta.h:110
// member variables: 3
// struct size: 24
struct VkDispatchGraphCountInfoAMDX {
	uint32_t count; /* 0 4 */
	VkDeviceOrHostAddressConstAMDX infos; /* 8 8 */
	uint64_t stride; /* 16 8 */
};

// <00D3684E> ../thirdparty/vulkan/inc/vulkan/vulkan_beta.h:116
// member variables: 4
// struct size: 32
struct VkPipelineShaderStageNodeCreateInfoAMDX {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const char * pName; /* 16 8 */
	uint32_t index; /* 24 4 */
};

// <00D36A16> ../thirdparty/vulkan/inc/vulkan/vulkan_beta.h:197
// member variables: 4
// struct size: 32
struct VkCudaModuleCreateInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	size_t dataSize; /* 16 8 */
	const void * pData; /* 24 8 */
};

// <00D36A71> ../thirdparty/vulkan/inc/vulkan/vulkan_beta.h:204
// member variables: 4
// struct size: 32
struct VkCudaFunctionCreateInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkCudaModuleNV module; /* 16 8 */
	const char * pName; /* 24 8 */
};

// <00D36ACC> ../thirdparty/vulkan/inc/vulkan/vulkan_beta.h:211
// member variables: 14
// struct size: 88
struct VkCudaLaunchInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkCudaFunctionNV function; /* 16 8 */
	uint32_t gridDimX; /* 24 4 */
	uint32_t gridDimY; /* 28 4 */
	uint32_t gridDimZ; /* 32 4 */
	uint32_t blockDimX; /* 36 4 */
	uint32_t blockDimY; /* 40 4 */
	uint32_t blockDimZ; /* 44 4 */
	uint32_t sharedMemBytes; /* 48 4 */
	size_t paramCount; /* 56 8 */
	const void * const * pParams; /* 64 8 */
	size_t extraCount; /* 72 8 */
	const void * const * pExtras; /* 80 8 */
};

